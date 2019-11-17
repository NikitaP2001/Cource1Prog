#ifndef HTMLOUTPUT_H_INCLUDED
#define HTMLOUTPUT_H_INCLUDED

void tablebeg() {
    cout << "<!DOCTYPE HTML>\n"
 <<"<html>\n"
  <<"<head>\n"
  << "<meta charset=\"utf-8\">\n"
  << "<title>Work 4</title>\n"
   <<"<style>\n"
  <<  "h1 { \n"
   <<  "font-family: 'Times New Roman', Times, serif; \n"
   <<  "font-size: 200%; \n"
  <<  "} \n"
  << "</style>:\n"
 << "</head>\n"
 << "<body>\n"
 << "<h1 align=\"center\">\n"
  << "<table border=\"2\" width=\"100%\"  cellpadding=\"15%\" align=\"center\">\n"
   << "<caption>Box for generator 1</caption>\n"
   << "<tr>\n"
   <<  "<th>M</th>\n"
   <<  "<th>L</th>\n"
  <<  "</tr>\n" ;


}
void tableend() {
  cout << "</table>\n"
 <<"</h1>\n"
 <<"</body>\n"
<<"</html>\n";
}

#endif // HTMLOUTPUT_H_INCLUDED
