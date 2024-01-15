bool __fastcall AiEntity__IsNoBackStepNpc(AiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F7EC9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9557/*"NoBackStepNpc"*/, method);
    byte_40F7EC9 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_9557/*"NoBackStepNpc"*/, -1, v2) == 1;
}


bool __fastcall AiEntity__isTiming(
        AiEntity_o *this,
        int32_t state,
        int32_t actcnt,
        int32_t timingPriority,
        const MethodInfo *method)
{
  bool result; // w0
  bool v7; // zf
  int32_t actNum; // w8
  int v9; // w9
  bool v10; // cc
  int v11; // w10

  result = 0;
  switch ( state )
  {
    case 1:
      return this->fields.actNum == -1 || this->fields.actNum == actcnt;
    case 2:
      v7 = this->fields.actNum == -6;
      goto LABEL_25;
    case 3:
    case 13:
      v7 = this->fields.actNum == -7;
      goto LABEL_25;
    case 4:
      actNum = this->fields.actNum;
      v9 = -400 - timingPriority;
      v10 = timingPriority <= 0;
      v11 = -4;
      goto LABEL_7;
    case 5:
      actNum = this->fields.actNum;
      v9 = -500 - timingPriority;
      v10 = timingPriority <= 0;
      v11 = -5;
LABEL_7:
      if ( v10 )
        v9 = v11;
      v7 = v9 == actNum;
      goto LABEL_25;
    case 6:
      v7 = this->fields.actNum == -8;
      goto LABEL_25;
    case 7:
      v7 = this->fields.actNum == -9;
      goto LABEL_25;
    case 8:
      v7 = this->fields.actNum == -11;
      goto LABEL_25;
    case 10:
      v7 = this->fields.actNum == -4;
      goto LABEL_25;
    case 11:
      v7 = this->fields.actNum == -5;
      goto LABEL_25;
    case 12:
      v7 = this->fields.actNum == -13;
      goto LABEL_25;
    case 14:
      v7 = this->fields.actNum == -10;
      goto LABEL_25;
    case 15:
      v7 = this->fields.actNum == -14;
      goto LABEL_25;
    case 16:
      v7 = this->fields.actNum == -12;
      goto LABEL_25;
    case 17:
      v7 = this->fields.actNum == -16;
      goto LABEL_25;
    case 18:
      v7 = this->fields.actNum == -15;
      goto LABEL_25;
    case 19:
      v7 = this->fields.actNum == -3;
      goto LABEL_25;
    case 20:
      v7 = this->fields.actNum == -17;
      goto LABEL_25;
    case 21:
      v7 = this->fields.actNum == -18;
LABEL_25:
      result = v7;
      break;
    default:
      return result;
  }
  return result;
}