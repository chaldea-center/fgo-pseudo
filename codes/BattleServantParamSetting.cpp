void BattleServantParamSetting___ctor(BattleServantParamSetting_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v6; // d3
  float z; // s4
  int32_t v8; // w1
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C466B0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C466B0 = 1;
  }
  *(_WORD *)&this->fields.IsDispClassIcon = 257;
  if ( !byte_4C3C926 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v6 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.BuffIconPosition.fields.x = 0xC20C0000C295999ALL;
  *(_QWORD *)&this->fields.BuffIconMax = -1;
  *(_OWORD *)&this->fields.BoxColliderPosition.fields.x = xmmword_C0EE00;
  *(_QWORD *)&this->fields.BoxColliderSize.fields.y = 1117519872;
  this->fields.BuffIconPosition.fields.z = 0.0;
  *(_QWORD *)&this->fields.UiScale.fields.x = v6;
  this->fields.UiScale.fields.z = z;
  this->fields.IsOverwriteTargetSetting = 1;
  v8 = StringLiteral_1/*""*/;
  this->fields.TargetIconSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.TargetIconSpriteName, v8, v2, v3);
  *(_OWORD *)&this->fields.TargetIconWidth = xmmword_C0E370;
  *(_OWORD *)&this->fields.GrandTargetIconHeight = xmmword_C0E820;
  this->fields.TargetIconPosition.fields.z = 0.0;
  *(_QWORD *)&this->fields.TargetIconPosition.fields.x = 0x41B00000C25C0000LL;
  *(_OWORD *)&this->fields.TargetIconDepthWhenFix = xmmword_C0EC10;
  v9 = StringLiteral_1/*""*/;
  this->fields.FixTargetIconSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.FixTargetIconSpriteName, v9, v10, v11);
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
  this->fields.FixTargetIconColorWhenTarget = (struct UnityEngine_Color_o)xmmword_C0FF40;
  *(_QWORD *)&this->fields.GrandFixTargetIconWidthWhenTarget = 0x5600000056LL;
  this->fields.GrandFixTargetIconDepthWhenTarget = -31;
  this->fields.GrandFixTargetIconColorWhenTarget = (struct UnityEngine_Color_o)xmmword_C0FF40;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}