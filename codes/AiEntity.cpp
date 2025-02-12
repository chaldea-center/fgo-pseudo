bool __fastcall AiEntity__IsNoBackStepNpc(AiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC76B0 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_9675/*"NoBackStepNpc"*/, method);
    byte_4BC76B0 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_9675/*"NoBackStepNpc"*/, -1, v2) == 1;
}


bool __fastcall AiEntity__isTiming(
        AiEntity_o *this,
        int32_t state,
        int32_t actcnt,
        int32_t timingPriority,
        const MethodInfo *method)
{
  bool result; // w0
  int32_t actNum; // w1
  int32_t v8; // w0
  int32_t v9; // w1
  int32_t v10; // w0

  result = 0;
  switch ( state )
  {
    case 1:
      return Ai__Check(-1, this->fields.actNum, 0LL) || this->fields.actNum == actcnt;
    case 2:
      actNum = this->fields.actNum;
      v8 = -6;
      goto LABEL_22;
    case 3:
    case 13:
      actNum = this->fields.actNum;
      v8 = -7;
      goto LABEL_22;
    case 4:
      v9 = this->fields.actNum;
      v10 = -4;
      goto LABEL_24;
    case 5:
      v9 = this->fields.actNum;
      v10 = -5;
      goto LABEL_24;
    case 6:
      actNum = this->fields.actNum;
      v8 = -8;
      goto LABEL_22;
    case 7:
      actNum = this->fields.actNum;
      v8 = -9;
      goto LABEL_22;
    case 8:
      actNum = this->fields.actNum;
      v8 = -11;
      goto LABEL_22;
    case 10:
      actNum = this->fields.actNum;
      v8 = -4;
      goto LABEL_22;
    case 11:
      actNum = this->fields.actNum;
      v8 = -5;
      goto LABEL_22;
    case 12:
      actNum = this->fields.actNum;
      v8 = -13;
      goto LABEL_22;
    case 14:
      actNum = this->fields.actNum;
      v8 = -10;
      goto LABEL_22;
    case 15:
      actNum = this->fields.actNum;
      v8 = -14;
      goto LABEL_22;
    case 16:
      actNum = this->fields.actNum;
      v8 = -12;
      goto LABEL_22;
    case 17:
      actNum = this->fields.actNum;
      v8 = -16;
      goto LABEL_22;
    case 18:
      actNum = this->fields.actNum;
      v8 = -15;
      goto LABEL_22;
    case 19:
      actNum = this->fields.actNum;
      v8 = -3;
      goto LABEL_22;
    case 20:
      actNum = this->fields.actNum;
      v8 = -17;
      goto LABEL_22;
    case 21:
      actNum = this->fields.actNum;
      v8 = -18;
LABEL_22:
      result = Ai__Check(v8, actNum, 0LL);
      break;
    case 24:
      v9 = this->fields.actNum;
      v10 = -19;
LABEL_24:
      result = Ai__CheckPriority(v10, v9, timingPriority, 0LL);
      break;
    default:
      return result;
  }
  return result;
}