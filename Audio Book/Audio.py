import PyPDF2
import pyttsx3
textReader=PyPDF2.PdfFileReader(open('C:\\Users\\Vipul\\Hii.pdf','rb'))
Audiospeaker=pyttsx3.init()
for page_num in range(textReader.numPages):
    text=textReader.getPage(page_num).extractText()
    Audiospeaker.say(text)
    Audiospeaker.runAndWait()
Audiospeaker.stop()
Audiospeaker.save_to_file(text,'audio.mp3')
Audiospeaker.runAndWait()