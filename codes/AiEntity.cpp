bool AiEntity__IsNoBackStepNpc(AiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C5690B & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9507/*"NoBackStepNpc"*/);
    byte_4C5690B = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_9507/*"NoBackStepNpc"*/, -1, v2) == 1;
}


bool AiEntity__isTiming(
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
      return Ai__Check(-1, this->fields.actNum, 0) || this->fields.actNum == actcnt;
    case 2:
      actNum = this->fields.actNum;
      v8 = -6;
      return Ai__Check(v8, actNum, 0);
    case 3:
    case 13:
      actNum = this->fields.actNum;
      v8 = -7;
      return Ai__Check(v8, actNum, 0);
    case 4:
      v9 = this->fields.actNum;
      v10 = -4;
      goto LABEL_25;
    case 5:
      v9 = this->fields.actNum;
      v10 = -5;
      goto LABEL_25;
    case 6:
      actNum = this->fields.actNum;
      v8 = -8;
      return Ai__Check(v8, actNum, 0);
    case 7:
      actNum = this->fields.actNum;
      v8 = -9;
      return Ai__Check(v8, actNum, 0);
    case 8:
      actNum = this->fields.actNum;
      v8 = -11;
      return Ai__Check(v8, actNum, 0);
    case 10:
      actNum = this->fields.actNum;
      v8 = -4;
      return Ai__Check(v8, actNum, 0);
    case 11:
      actNum = this->fields.actNum;
      v8 = -5;
      return Ai__Check(v8, actNum, 0);
    case 12:
      actNum = this->fields.actNum;
      v8 = -13;
      return Ai__Check(v8, actNum, 0);
    case 14:
      actNum = this->fields.actNum;
      v8 = -10;
      return Ai__Check(v8, actNum, 0);
    case 16:
      actNum = this->fields.actNum;
      v8 = -12;
      return Ai__Check(v8, actNum, 0);
    case 17:
      actNum = this->fields.actNum;
      v8 = -16;
      return Ai__Check(v8, actNum, 0);
    case 18:
      actNum = this->fields.actNum;
      v8 = -15;
      return Ai__Check(v8, actNum, 0);
    case 19:
      actNum = this->fields.actNum;
      v8 = -3;
      return Ai__Check(v8, actNum, 0);
    case 20:
      actNum = this->fields.actNum;
      v8 = -17;
      return Ai__Check(v8, actNum, 0);
    case 21:
      actNum = this->fields.actNum;
      v8 = -18;
      return Ai__Check(v8, actNum, 0);
    case 24:
      v9 = this->fields.actNum;
      v10 = -19;
      goto LABEL_25;
    case 26:
      v9 = this->fields.actNum;
      v10 = -2;
      goto LABEL_25;
    case 27:
      v9 = this->fields.actNum;
      v10 = -14;
LABEL_25:
      result = Ai__CheckPriority(v10, v9, timingPriority, 0);
      break;
    default:
      return result;
  }
  return result;
}