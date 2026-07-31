void DataLostResetEffectComponent___ctor(DataLostResetEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1

  if ( (byte_5937A02 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937A02 = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.whiteOutTime = 1.5;
  this->fields.whiteOutSe = v9;
  *(_QWORD *)&this->fields.bgmFadeOutTime = 0x40D000003FC00000LL;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.whiteOutSe, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}