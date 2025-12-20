void DataLostResetEffectComponent___ctor(DataLostResetEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D2BC87 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2BC87 = 1;
  }
  this->fields.whiteOutTime = 1.5;
  *(_QWORD *)&this->fields.bgmFadeOutTime = 0x40D000003FC00000LL;
  v9 = StringLiteral_1/*""*/;
  this->fields.whiteOutSe = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.whiteOutSe, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}