void __fastcall BattleServantParamSetting___ctor(BattleServantParamSetting_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_49BE221 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49BE221 = 1;
  }
  this->fields.BoxColliderPosition.fields.x = NAN;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.TargetIconSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.TargetIconSpriteName, v5, v2, v3);
  this->fields.TargetIconPosition.fields.z = 0.0;
  *(_QWORD *)&this->fields.TargetIconPosition.fields.x = 0x41B00000C25C0000LL;
  *(_OWORD *)&this->fields.TargetIconWidth = xmmword_BAB2B0;
  *(_QWORD *)&this->fields.TargetIconHeightWhenFix = 0xFFFFFFE300000046LL;
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.FixTargetIconSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.FixTargetIconSpriteName, v6, v7, v8);
  *(_QWORD *)&this->fields.FixTargetIconWidth = 0x4A0000004ALL;
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.FixTargetIconColor = _Q0;
  *(_QWORD *)&this->fields.FixTargetIconWidthWhenTarget = 0x4E0000004ELL;
  *(_QWORD *)&this->fields.FixTargetIconPosition.fields.x = 0x41B00000C25C0000LL;
  this->fields.FixTargetIconPosition.fields.z = 0.0;
  this->fields.FixTargetIconDepth = -30;
  this->fields.FixTargetIconDepthWhenTarget = -30;
  this->fields.FixTargetIconColorWhenTarget = (struct UnityEngine_Color_o)xmmword_BAB400;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}