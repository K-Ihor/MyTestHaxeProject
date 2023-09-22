import haxe.ui.components.TextArea;
import sys.io.File;

import haxe.ui.containers.VBox;

@:build(haxe.ui.ComponentBuilder.build("assets/main-view.xml"))
class MainView extends VBox {
    public function new() {
        super();
        
        // файлы, которые нужно прочитать
        var fileNames:Array<String> = ["assets/MyFile3.txt", "assets/MyFile2.txt", "assets/MyFile1.txt"];
        
        // для хранения текста из файлов
        var textFromFiles:Array<String> = [];
        
        // чтения текста из файлов
        for (fileName in fileNames) {
            var textFromFile:String = "";
            try {
                var fileContents:String = File.getContent(fileName);
                if (fileContents != null) {
                    textFromFile = fileContents;
                }
            } catch (e:Dynamic) {
                trace("Ошибка при чтении файла '" + fileName + "': " + e);
            }
            textFromFiles.push(textFromFile);
        }
        
        // хранения TextArea-компонент
        var textAreas:Array<TextArea> = [];
        
        //  идентификаторы TextArea-компонент в порядке их появления
        var textAreaIds:Array<String> = ["myTextArea", "myTextArea2", "myTextArea3"];
        
        // получение TextArea-компонент
        for (id in textAreaIds) {
            var textArea: TextArea = findComponent(id);
            textAreas.push(textArea);
        }
        
        // Установка текста из файлов в TextArea-компоненты
        for (i in 0...textAreas.length) {
            if (textAreas[i] != null && i < textFromFiles.length) {
                textAreas[i].text = textFromFiles[i];
            }
        }
    }
}
