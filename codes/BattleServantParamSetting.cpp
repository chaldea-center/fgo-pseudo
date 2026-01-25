void BattleServantParamSetting___ctor(BattleServantParamSetting_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v10; // d3
  float z; // s4
  int32_t v12; // w1
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CF1E1C & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF1E1C = 1;
  }
  *(_WORD *)&this->fields.IsDispClassIcon = 257;
  if ( !byte_4CE7E5E )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v10 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.BuffIconPosition.fields.x = 0xC20C0000C295999ALL;
  *(_QWORD *)&this->fields.BuffIconMax = -1;
  *(_OWORD *)&this->fields.BoxColliderPosition.fields.x = xmmword_CF5D30;
  *(_QWORD *)&this->fields.BoxColliderSize.fields.y = 1117519872;
  this->fields.BuffIconPosition.fields.z = 0.0;
  *(_QWORD *)&this->fields.UiScale.fields.x = v10;
  this->fields.UiScale.fields.z = z;
  this->fields.IsOverwriteTargetSetting = 1;
  v12 = StringLiteral_1/*""*/;
  this->fields.TargetIconSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.TargetIconSpriteName, v12, v2, v3, v4, v5, v6, v7);
  *(_OWORD *)&this->fields.TargetIconWidth = xmmword_CF52B0;
  *(_OWORD *)&this->fields.GrandTargetIconHeight = xmmword_CF5740;
  this->fields.TargetIconPosition.fields.z = 0.0;
  *(_QWORD *)&this->fields.TargetIconPosition.fields.x = 0x41B00000C25C0000LL;
  *(_OWORD *)&this->fields.TargetIconDepthWhenFix = xmmword_CF5B30;
  v13 = StringLiteral_1/*""*/;
  this->fields.FixTargetIconSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.FixTargetIconSpriteName, v13, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)&this->fields.FixTargetIconWidth = 0x4A0000004ALL;
  *(_QWORD *)&this->fields.GrandFixTargetIconWidth = 0x5A0000005ALL;
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.FixTargetIconColor = _Q1;
  this->fields.GrandFixTargetIconColor = _Q1;
  *(_QWORD *)&this->fields.FixTargetIconWidthWhenTarget = 0x4E0000004ELL;
  *(_QWORD *)&this->fields.FixTargetIconPosition.fields.x = 0x41B00000C25C0000LL;
  this->fields.FixTargetIconPosition.fields.z = 0.0;
  this->fields.FixTargetIconDepth = -30;
  this->fields.GrandFixTargetIconDepth = -31;
  this->fields.FixTargetIconDepthWhenTarget = -30;
  this->fields.FixTargetIconColorWhenTarget = (struct UnityEngine_Color_o)xmmword_CF6EA0;
  *(_QWORD *)&this->fields.GrandFixTargetIconWidthWhenTarget = 0x5600000056LL;
  this->fields.GrandFixTargetIconDepthWhenTarget = -31;
  this->fields.GrandFixTargetIconColorWhenTarget = (struct UnityEngine_Color_o)xmmword_CF6EA0;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}