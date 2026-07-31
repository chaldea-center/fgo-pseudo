void BattleServantParamSetting___ctor(BattleServantParamSetting_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int v9; // w8
  struct System_String_o *v10; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s2
  __int64 v13; // d3
  struct System_String_o *v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_593C021 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C021 = 1;
  }
  v9 = (unsigned __int8)byte_5931945;
  *(_WORD *)&this->fields.IsDispClassIcon = 257;
  if ( !v9 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  v13 = *(_QWORD *)&static_fields->oneVector.fields.x;
  *(_QWORD *)&this->fields.BuffIconPosition.fields.x = 0xC20C0000C295999ALL;
  *(_QWORD *)&this->fields.BuffIconMax = -1;
  *(_OWORD *)&this->fields.BoxColliderPosition.fields.x = xmmword_E92FB0;
  *(_QWORD *)&this->fields.BoxColliderSize.fields.y = 1117519872;
  this->fields.BuffIconPosition.fields.z = 0.0;
  this->fields.IsOverwriteTargetSetting = 1;
  *(_QWORD *)&this->fields.UiScale.fields.x = v13;
  this->fields.UiScale.fields.z = z;
  this->fields.TargetIconSpriteName = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.TargetIconSpriteName,
    (int32_t)v10,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.TargetIconPosition.fields.z = 0.0;
  *(_OWORD *)&this->fields.TargetIconWidth = xmmword_E94490;
  *(_OWORD *)&this->fields.GrandTargetIconHeight = xmmword_E92EF0;
  *(_QWORD *)&this->fields.TargetIconPosition.fields.x = 0x41B00000C25C0000LL;
  *(_OWORD *)&this->fields.TargetIconDepthWhenFix = xmmword_E933B0;
  this->fields.FixTargetIconSpriteName = v14;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FixTargetIconSpriteName,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.FixTargetIconDepth = -30;
  this->fields.FixTargetIconDepthWhenTarget = -30;
  *(_QWORD *)&this->fields.FixTargetIconPosition.fields.x = 0x41B00000C25C0000LL;
  *(_QWORD *)&this->fields.FixTargetIconWidth = 0x4A0000004ALL;
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)&this->fields.GrandFixTargetIconWidth = 0x5A0000005ALL;
  this->fields.FixTargetIconPosition.fields.z = 0.0;
  this->fields.FixTargetIconColor = _Q0;
  this->fields.GrandFixTargetIconColor = _Q0;
  *(_QWORD *)&this->fields.FixTargetIconWidthWhenTarget = 0x4E0000004ELL;
  this->fields.GrandFixTargetIconDepth = -31;
  this->fields.FixTargetIconColorWhenTarget = (struct UnityEngine_Color_o)xmmword_E94AB0;
  *(_QWORD *)&this->fields.GrandFixTargetIconWidthWhenTarget = 0x5600000056LL;
  this->fields.GrandFixTargetIconDepthWhenTarget = -31;
  this->fields.GrandFixTargetIconColorWhenTarget = (struct UnityEngine_Color_o)xmmword_E94AB0;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}