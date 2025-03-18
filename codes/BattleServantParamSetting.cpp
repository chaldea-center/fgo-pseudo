void __fastcall BattleServantParamSetting___ctor(BattleServantParamSetting_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1
  void *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C252E4 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C252E4 = 1;
  }
  this->fields.BoxColliderPosition.fields.x = NAN;
  v9 = StringLiteral_1/*""*/;
  this->fields.TargetIconSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.TargetIconSpriteName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  this->fields.TargetIconPosition.fields.z = 0.0;
  *(_QWORD *)&this->fields.TargetIconPosition.fields.x = 0x41B00000C25C0000LL;
  *(_OWORD *)&this->fields.TargetIconWidth = xmmword_C0E860;
  *(_QWORD *)&this->fields.TargetIconHeightWhenFix = 0xFFFFFFE300000046LL;
  v10 = StringLiteral_1/*""*/;
  this->fields.FixTargetIconSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.FixTargetIconSpriteName,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  *(_QWORD *)&this->fields.FixTargetIconWidth = 0x4A0000004ALL;
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.FixTargetIconColor = _Q0;
  *(_QWORD *)&this->fields.FixTargetIconWidthWhenTarget = 0x4E0000004ELL;
  *(_QWORD *)&this->fields.FixTargetIconPosition.fields.x = 0x41B00000C25C0000LL;
  this->fields.FixTargetIconPosition.fields.z = 0.0;
  this->fields.FixTargetIconDepth = -30;
  this->fields.FixTargetIconDepthWhenTarget = -30;
  this->fields.FixTargetIconColorWhenTarget = (struct UnityEngine_Color_o)xmmword_C0E9B0;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}