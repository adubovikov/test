 char *body, int blen;
 
char *c, *tmp;
c = body;
last_offset = 0;
offset = 0;
 
 /* FIRST LINE */
        for (; *c; c++) {
                if (*c == '\n' && *(c-1) == '\r') {
                        offset = (c +1) - body;
                        break;
                }
        }
        
        if(offset == 0) {
                return 0;
        }
        else if(offset < 16) {
                return 0;
        }
        
     c=body+offset;
      for (; *c; c++) {
         /* Content-Length */
                               if((*tmp == 'l' && *(tmp+1) == ':') ||
                            		   ((*tmp == 'C' || *tmp == 'c') && ( *(tmp+8) == 'L' || *(tmp+8) == 'l') && *(tmp+CONTENTLENGTH_LEN) == ':'))
                               {
                               *(tmp+1) == ':') header_offset = 1;
                            	   	   else header_offset = CONTENTLENGTH_LEN;

                                       sipStruct->clen = atoi(tmp+header_offset+1);
    }
                               
