#include "variables.h"
void setupdisp (int digits, int debug, float baud, String com) {
  dg = digits;
  bdr = baud;
  if (debug == 1) {
    Serial.begin (baud);
    dbg = 1;
  }
  if (com == "anode") {
    common = "anode";
  }
  else if (com == "cathode") {
    common = "cathode";
  }
  else if (com != "anode" or com != "cathode" or debug > 1 or digits > 2) {
    Serial.begin (baud);
    while (1) {
      Serial.println ("7 Segment Display: Invalid Setting(s) Detected!");
      delay (500);
    }
  }
}
void definetens (int AT, int BT, int CT, int DT, int ET, int FT, int GT) {
  if (dg == 2) {
    if (dbg == 1) {
      Serial.println ("Double Digit Mode");
    }
    A = AT;
    B = BT;
    C = CT;
    D = DT;
    E = ET;
    F = FT;
    G = GT;
    pinMode (AT, OUTPUT); pinMode (BT, OUTPUT); pinMode (CT, OUTPUT); pinMode (DT, OUTPUT); pinMode (ET, OUTPUT); pinMode (FT, OUTPUT); pinMode (GT, OUTPUT);
  }
  else if (dg == 1 and dbg == 1) {
    Serial.begin (bdr);
    Serial.println ("Single Digit Only.");
  }
}
void definedig (int AD, int BD, int CD, int DD, int ED, int FD, int GD) {
  if (dg == 1) {
    if (dbg == 1) {
      Serial.println ("Single Digit Mode");
    }
    AD = AO;
    BD = BO;
    CD = CO;
    DD = DO;
    ED = EO;
    FD = FO;
    GD = GO;
    pinMode (AO, OUTPUT); pinMode (BO, OUTPUT); pinMode (CO, OUTPUT); pinMode (DO, OUTPUT); pinMode (EO, OUTPUT); pinMode (FO, OUTPUT); pinMode (GO, OUTPUT);
  }
}
void clearseg () {
  if (common == "anode" and dg == 1) {
    digitalWrite (A, HIGH);
    digitalWrite (B, HIGH);
    digitalWrite (C, HIGH);
    digitalWrite (D, HIGH);
    digitalWrite (E, HIGH);
    digitalWrite (F, HIGH);
    digitalWrite (G, HIGH);
  } else if (common == "cathode" and dg == 1) {
    digitalWrite (A, LOW);
    digitalWrite (B, LOW);
    digitalWrite (C, LOW);
    digitalWrite (D, LOW);
    digitalWrite (E, LOW);
    digitalWrite (F, LOW);
    digitalWrite (G, LOW);
  } else if (common == "anode" and dg == 2) {
    digitalWrite (A, HIGH);
    digitalWrite (B, HIGH);
    digitalWrite (C, HIGH);
    digitalWrite (D, HIGH);
    digitalWrite (E, HIGH);
    digitalWrite (F, HIGH);
    digitalWrite (G, HIGH);
    digitalWrite (AO, HIGH);
    digitalWrite (BO, HIGH);
    digitalWrite (CO, HIGH);
    digitalWrite (DO, HIGH);
    digitalWrite (EO, HIGH);
    digitalWrite (FO, HIGH);
    digitalWrite (GO, HIGH);
  } else if (common == "cathode" and dg == 2) {
    digitalWrite (A, LOW);
    digitalWrite (B, LOW);
    digitalWrite (C, LOW);
    digitalWrite (D, LOW);
    digitalWrite (E, LOW);
    digitalWrite (F, LOW);
    digitalWrite (G, LOW);
    digitalWrite (AO, LOW);
    digitalWrite (BO, LOW);
    digitalWrite (CO, LOW);
    digitalWrite (DO, LOW);
    digitalWrite (EO, LOW);
    digitalWrite (FO, LOW);
    digitalWrite (GO, LOW);
  }
  if (dbg == 1) {
    Serial.println ("Segments Cleared");
  }
}
void test () {
  if (dbg == 1) {
    Serial.println ("Testing Connections...");
  }
  if (common == "anode" and dg == 1) {
    digitalWrite (A, LOW);
    digitalWrite (B, LOW);
    digitalWrite (C, LOW);
    digitalWrite (D, LOW);
    digitalWrite (E, LOW);
    digitalWrite (F, LOW);
    digitalWrite (G, LOW);
    delay (1000);
    digitalWrite (G, HIGH);
    delay (100);
    digitalWrite (A, HIGH);
    delay (100);
    digitalWrite (B, HIGH);
    delay (100);
    digitalWrite (C, HIGH);
    delay (100);
    digitalWrite (D, HIGH);
    delay (100);
    digitalWrite (E, HIGH);
    delay (100);
    digitalWrite (F, HIGH);
    delay (100);
  } else if (common == "cathode" and dg == 1) {
    digitalWrite (A, HIGH);
    digitalWrite (B, HIGH);
    digitalWrite (C, HIGH);
    digitalWrite (D, HIGH);
    digitalWrite (E, HIGH);
    digitalWrite (F, HIGH);
    digitalWrite (G, HIGH);
    delay (1000);
    digitalWrite (G, LOW);
    delay (100);
    digitalWrite (A, LOW);
    delay (100);
    digitalWrite (B, LOW);
    delay (100);
    digitalWrite (C, LOW);
    delay (100);
    digitalWrite (D, LOW);
    delay (100);
    digitalWrite (E, LOW);
    delay (100);
    digitalWrite (F, LOW);
    delay (100);
  } else if (common == "anode" and dg == 2) {
    digitalWrite (A, LOW);
    digitalWrite (B, LOW);
    digitalWrite (C, LOW);
    digitalWrite (D, LOW);
    digitalWrite (E, LOW);
    digitalWrite (F, LOW);
    digitalWrite (G, LOW);
    digitalWrite (AO, LOW);
    digitalWrite (BO, LOW);
    digitalWrite (CO, LOW);
    digitalWrite (DO, LOW);
    digitalWrite (EO, LOW);
    digitalWrite (FO, LOW);
    digitalWrite (GO, LOW);
    delay (500);
    digitalWrite (G, HIGH);
    delay (50);
    digitalWrite (A, HIGH);
    delay (50);
    digitalWrite (B, HIGH);
    delay (50);
    digitalWrite (C, HIGH);
    delay (50);
    digitalWrite (D, HIGH);
    delay (50);
    digitalWrite (E, HIGH);
    delay (50);
    digitalWrite (F, HIGH);
    delay (50);
    digitalWrite (GO, HIGH);
    delay (50);
    digitalWrite (AO, HIGH);
    delay (50);
    digitalWrite (BO, HIGH);
    delay (50);
    digitalWrite (CO, HIGH);
    delay (50);
    digitalWrite (DO, HIGH);
    delay (50);
    digitalWrite (EO, HIGH);
    delay (50);
    digitalWrite (FO, HIGH);
    delay (50);
  } else if (common == "cathode" and dg == 2) {
    digitalWrite (A, HIGH);
    digitalWrite (B, HIGH);
    digitalWrite (C, HIGH);
    digitalWrite (D, HIGH);
    digitalWrite (E, HIGH);
    digitalWrite (F, HIGH);
    digitalWrite (G, HIGH);
    digitalWrite (AO, HIGH);
    digitalWrite (BO, HIGH);
    digitalWrite (CO, HIGH);
    digitalWrite (DO, HIGH);
    digitalWrite (EO, HIGH);
    digitalWrite (FO, HIGH);
    digitalWrite (GO, HIGH);
    delay (500);
    digitalWrite (G, LOW);
    delay (50);
    digitalWrite (A, LOW);
    delay (50);
    digitalWrite (B, LOW);
    delay (50);
    digitalWrite (C, LOW);
    delay (50);
    digitalWrite (D, LOW);
    delay (50);
    digitalWrite (E, LOW);
    delay (50);
    digitalWrite (F, LOW);
    delay (50);
    digitalWrite (GO, LOW);
    delay (50);
    digitalWrite (AO, LOW);
    delay (50);
    digitalWrite (BO, LOW);
    delay (50);
    digitalWrite (CO, LOW);
    delay (50);
    digitalWrite (DO, LOW);
    delay (50);
    digitalWrite (EO, LOW);
    delay (50);
    digitalWrite (FO, LOW);
    delay (50);
  }
}
void segprint (int n) {
  clearseg ();
  if (n > 9 and dg == 2) {
    d1 = n % 10;
    d2 = n / 10;
  } else if (n > 9 and dg == 1 and dbg == 1) {
    while (n > 9) {
      Serial.println ("Integer Overflow with defined settings.");
      delay (500);
    }
  }
  if (n <= 9 and dg == 2){
    d1 = 0;
    d2 = n;
  }
  if (dg == 1 and common == "anode") {
    if (n == 0) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      digitalWrite (F, LOW);
      if (dbg  == 1) {
        Serial.println (0);
      }
    }
    else if (n == 1) {
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      if (dbg  == 1) {
        Serial.println (1);
      }
    }
    else if (n == 2) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (G, LOW);
      digitalWrite (E, LOW);
      digitalWrite (D, LOW);
      if (dbg  == 1) {
        Serial.println (2);
      }
    }
    else if (n == 3) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (G, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      if (dbg  == 1) {
        Serial.println (3);
      };
    }
    else if (n == 4) {
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      if (dbg  == 1) {
        Serial.println (4);
      }

    }
    else if (n == 5) {
      digitalWrite (A, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      if (dbg  == 1) {
        Serial.println (5);
      }
    }
    else if (n == 6) {
      digitalWrite (A, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      if (dbg  == 1) {
        Serial.println (6);
      }
    }
    else if (n == 7) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      if (dbg  == 1) {
        Serial.println (7);
      }
    }
    else if (n == 8) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      if (dbg  == 1) {
        Serial.println (8);
      }
    }
    else if (n == 9) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      if (dbg  == 1) {
        Serial.println (9);
      }
    }
  } else if (dg == 1 and common == "cathode") {
    if (n == 0) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      if (dbg  == 1) {
        Serial.println (0);
      }
    }
    else if (n == 1) {
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      if (dbg  == 1) {
        Serial.println (1);
      }
    }
    else if (n == 2) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (G, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (D, HIGH);
      if (dbg  == 1) {
        Serial.println (2);
      }
    }
    else if (n == 3) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (G, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      if (dbg  == 1) {
        Serial.println (3);
      };
    }
    else if (n == 4) {
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      if (dbg  == 1) {
        Serial.println (4);
      }

    }
    else if (n == 5) {
      digitalWrite (A, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      if (dbg  == 1) {
        Serial.println (5);
      }
    }
    else if (n == 6) {
      digitalWrite (A, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      digitalWrite (E, HIGH);
      if (dbg  == 1) {
        Serial.println (6);
      }
    }
    else if (n == 7) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      if (dbg  == 1) {
        Serial.println (7);
      }
    }
    else if (n == 8) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      if (dbg  == 1) {
        Serial.println (8);
      }
    }
    else if (n == 9) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      if (dbg  == 1) {
        Serial.println (9);
      }
    }
  } else if (dg == 2 and common == "cathode") {
    if (d1 == 0) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      if (dbg  == 1) {
        Serial.println (0);
      }
    }
    else if (d1 == 1) {
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      if (dbg  == 1) {
        Serial.println (1);
      }
    }
    else if (d1 == 2) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (G, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (D, HIGH);
      if (dbg  == 1) {
        Serial.println (2);
      }
    }
    else if (d1 == 3) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (G, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      if (dbg  == 1) {
        Serial.println (3);
      };
    }
    else if (d1 == 4) {
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      if (dbg  == 1) {
        Serial.println (4);
      }

    }
    else if (d1 == 5) {
      digitalWrite (A, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      if (dbg  == 1) {
        Serial.println (5);
      }
    }
    else if (d1 == 6) {
      digitalWrite (A, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      digitalWrite (E, HIGH);
      if (dbg  == 1) {
        Serial.println (6);
      }
    }
    else if (d1 == 7) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      if (dbg  == 1) {
        Serial.println (7);
      }
    }
    else if (d1 == 8) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      digitalWrite (E, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      if (dbg  == 1) {
        Serial.println (8);
      }
    }
    else if (d1 == 9) {
      digitalWrite (A, HIGH);
      digitalWrite (B, HIGH);
      digitalWrite (C, HIGH);
      digitalWrite (D, HIGH);
      digitalWrite (F, HIGH);
      digitalWrite (G, HIGH);
      if (dbg  == 1) {
        Serial.println (9);
      }
    }
    if (d2 == 0) {
      digitalWrite (AO, HIGH);
      digitalWrite (BO, HIGH);
      digitalWrite (CO, HIGH);
      digitalWrite (DO, HIGH);
      digitalWrite (EO, HIGH);
      digitalWrite (FO, HIGH);
      if (dbg  == 1) {
        Serial.println (0);
      }
    }
    else if (d2 == 1) {
      digitalWrite (BO, HIGH);
      digitalWrite (CO, HIGH);
      if (dbg  == 1) {
        Serial.println (1);
      }
    }
    else if (d2 == 2) {
      digitalWrite (AO, HIGH);
      digitalWrite (BO, HIGH);
      digitalWrite (GO, HIGH);
      digitalWrite (EO, HIGH);
      digitalWrite (DO, HIGH);
      if (dbg  == 1) {
        Serial.println (2);
      }
    }
    else if (d2 == 3) {
      digitalWrite (AO, HIGH);
      digitalWrite (BO, HIGH);
      digitalWrite (GO, HIGH);
      digitalWrite (CO, HIGH);
      digitalWrite (DO, HIGH);
      if (dbg  == 1) {
        Serial.println (3);
      };
    }
    else if (d2 == 4) {
      digitalWrite (FO, HIGH);
      digitalWrite (GO, HIGH);
      digitalWrite (BO, HIGH);
      digitalWrite (CO, HIGH);
      if (dbg  == 1) {
        Serial.println (4);
      }

    }
    else if (d2 == 5) {
      digitalWrite (AO, HIGH);
      digitalWrite (FO, HIGH);
      digitalWrite (GO, HIGH);
      digitalWrite (CO, HIGH);
      digitalWrite (DO, HIGH);
      if (dbg  == 1) {
        Serial.println (5);
      }
    }
    else if (d2 == 6) {
      digitalWrite (AO, HIGH);
      digitalWrite (FO, HIGH);
      digitalWrite (GO, HIGH);
      digitalWrite (CO, HIGH);
      digitalWrite (DO, HIGH);
      digitalWrite (EO, HIGH);
      if (dbg  == 1) {
        Serial.println (6);
      }
    }
    else if (d2 == 7) {
      digitalWrite (AO, HIGH);
      digitalWrite (BO, HIGH);
      digitalWrite (CO, HIGH);
      if (dbg  == 1) {
        Serial.println (7);
      }
    }
    else if (d2 == 8) {
      digitalWrite (AO, HIGH);
      digitalWrite (BO, HIGH);
      digitalWrite (CO, HIGH);
      digitalWrite (DO, HIGH);
      digitalWrite (EO, HIGH);
      digitalWrite (FO, HIGH);
      digitalWrite (GO, HIGH);
      if (dbg  == 1) {
        Serial.println (8);
      }
    }
    else if (d2 == 9) {
      digitalWrite (AO, HIGH);
      digitalWrite (BO, HIGH);
      digitalWrite (CO, HIGH);
      digitalWrite (DO, HIGH);
      digitalWrite (FO, HIGH);
      digitalWrite (GO, HIGH);
      if (dbg  == 1) {
        Serial.println (9);
      }
    }
  } else if (dg == 2 and common == "anode") {
    if (d1 == 0) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      digitalWrite (F, LOW);
      if (dbg  == 1) {
        Serial.println (0);
      }
    }
    else if (d1 == 1) {
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      if (dbg  == 1) {
        Serial.println (1);
      }
    }
    else if (d1 == 2) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (G, LOW);
      digitalWrite (E, LOW);
      digitalWrite (D, LOW);
      if (dbg  == 1) {
        Serial.println (2);
      }
    }
    else if (d1 == 3) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (G, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      if (dbg  == 1) {
        Serial.println (3);
      };
    }
    else if (d1 == 4) {
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      if (dbg  == 1) {
        Serial.println (4);
      }

    }
    else if (d1 == 5) {
      digitalWrite (A, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      if (dbg  == 1) {
        Serial.println (5);
      }
    }
    else if (d1 == 6) {
      digitalWrite (A, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      if (dbg  == 1) {
        Serial.println (6);
      }
    }
    else if (d1 == 7) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      if (dbg  == 1) {
        Serial.println (7);
      }
    }
    else if (d1 == 8) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (E, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      if (dbg  == 1) {
        Serial.println (8);
      }
    }
    else if (d1 == 9) {
      digitalWrite (A, LOW);
      digitalWrite (B, LOW);
      digitalWrite (C, LOW);
      digitalWrite (D, LOW);
      digitalWrite (F, LOW);
      digitalWrite (G, LOW);
      if (dbg  == 1) {
        Serial.println (9);
      }
    }
    if (d2 == 0) {
      digitalWrite (AO, LOW);
      digitalWrite (BO, LOW);
      digitalWrite (CO, LOW);
      digitalWrite (DO, LOW);
      digitalWrite (EO, LOW);
      digitalWrite (FO, LOW);
      if (dbg  == 1) {
        Serial.println (0);
      }
    }
    else if (d2 == 1) {
      digitalWrite (BO, LOW);
      digitalWrite (CO, LOW);
      if (dbg  == 1) {
        Serial.println (1);
      }
    }
    else if (d2 == 2) {
      digitalWrite (AO, LOW);
      digitalWrite (BO, LOW);
      digitalWrite (GO, LOW);
      digitalWrite (EO, LOW);
      digitalWrite (DO, LOW);
      if (dbg  == 1) {
        Serial.println (2);
      }
    }
    else if (d2 == 3) {
      digitalWrite (AO, LOW);
      digitalWrite (BO, LOW);
      digitalWrite (GO, LOW);
      digitalWrite (CO, LOW);
      digitalWrite (DO, LOW);
      if (dbg  == 1) {
        Serial.println (3);
      };
    }
    else if (d2 == 4) {
      digitalWrite (FO, LOW);
      digitalWrite (GO, LOW);
      digitalWrite (BO, LOW);
      digitalWrite (CO, LOW);
      if (dbg  == 1) {
        Serial.println (4);
      }

    }
    else if (d2 == 5) {
      digitalWrite (AO, LOW);
      digitalWrite (FO, LOW);
      digitalWrite (GO, LOW);
      digitalWrite (CO, LOW);
      digitalWrite (DO, LOW);
      if (dbg  == 1) {
        Serial.println (5);
      }
    }
    else if (d2 == 6) {
      digitalWrite (AO, LOW);
      digitalWrite (FO, LOW);
      digitalWrite (GO, LOW);
      digitalWrite (CO, LOW);
      digitalWrite (DO, LOW);
      digitalWrite (EO, LOW);
      if (dbg  == 1) {
        Serial.println (6);
      }
    }
    else if (d2 == 7) {
      digitalWrite (AO, LOW);
      digitalWrite (BO, LOW);
      digitalWrite (CO, LOW);
      if (dbg  == 1) {
        Serial.println (7);
      }
    }
    else if (d2 == 8) {
      digitalWrite (AO, LOW);
      digitalWrite (BO, LOW);
      digitalWrite (CO, LOW);
      digitalWrite (DO, LOW);
      digitalWrite (EO, LOW);
      digitalWrite (FO, LOW);
      digitalWrite (GO, LOW);
      if (dbg  == 1) {
        Serial.println (8);
      }
    }
    else if (d2 == 9) {
      digitalWrite (AO, LOW);
      digitalWrite (BO, LOW);
      digitalWrite (CO, LOW);
      digitalWrite (DO, LOW);
      digitalWrite (FO, LOW);
      digitalWrite (GO, LOW);
      if (dbg  == 1) {
        Serial.println (9);
      }
    }
  }
}
