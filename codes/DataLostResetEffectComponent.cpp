void __fastcall DataLostResetEffectComponent___ctor(DataLostResetEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_49FDEB1 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, method);
    byte_49FDEB1 = 1;
  }
  this->fields.whiteOutTime = 1.5;
  *(_QWORD *)&this->fields.bgmFadeOutTime = 0x40D000003FC00000LL;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.whiteOutSe = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.whiteOutSe, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}