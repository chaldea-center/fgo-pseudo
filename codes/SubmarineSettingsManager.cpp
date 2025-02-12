void __fastcall SubmarineSettingsManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct SubmarineSettingsManager_StaticFields *static_fields; // x0
  int64_t v12; // x1
  int64_t v13; // x1
  struct SubmarineSettingsManager_StaticFields *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  struct SubmarineSettingsManager_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BC4626 & 1) == 0 )
  {
    sub_1C1ABD4(&SubmarineSettingsManager_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_12544/*"SUBMARINE_OPEN_PANEL_CAMERA_DURATION"*/, v8);
    sub_1C1ABD4(&StringLiteral_12546/*"SUBMARINE_VIEW_SCAN_RANGE_CAMERA_DURATION"*/, v9);
    sub_1C1ABD4(&StringLiteral_12545/*"SUBMARINE_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION"*/, v10);
    byte_4BC4626 = 1;
  }
  static_fields = SubmarineSettingsManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_PANEL_WIDTH = 0x5200000052LL;
  *(_OWORD *)&static_fields->DEFAULT_PANEL_SELECT_DELAY_SECOND = xmmword_BF99C0;
  *(_QWORD *)&static_fields->DEFAULT_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION = 0x3F0000003F000000LL;
  v12 = StringLiteral_12546/*"SUBMARINE_VIEW_SCAN_RANGE_CAMERA_DURATION"*/;
  static_fields->KEY_VIEW_SCAN_RANGE_CAMERA_DURATION = (struct System_String_o *)StringLiteral_12546/*"SUBMARINE_VIEW_SCAN_RANGE_CAMERA_DURATION"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&static_fields->KEY_VIEW_SCAN_RANGE_CAMERA_DURATION,
    v12,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = StringLiteral_12545/*"SUBMARINE_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION"*/;
  v14 = SubmarineSettingsManager_TypeInfo->static_fields;
  v14->KEY_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION = (struct System_String_o *)StringLiteral_12545/*"SUBMARINE_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v14->KEY_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION,
    v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = StringLiteral_12544/*"SUBMARINE_OPEN_PANEL_CAMERA_DURATION"*/;
  v22 = SubmarineSettingsManager_TypeInfo->static_fields;
  v22->KEY_OPEN_PANEL_CAMERA_DURATION = (struct System_String_o *)StringLiteral_12544/*"SUBMARINE_OPEN_PANEL_CAMERA_DURATION"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v22->KEY_OPEN_PANEL_CAMERA_DURATION, v21, v23, v24, v25, v26, v27, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSettingsManager___ctor(
        SubmarineSettingsManager_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__float__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  SubmarineSettingsManager_c *v17; // x0
  int32x2_t *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v19; // x8
  __int64 v20; // d0
  float z; // s1

  if ( (byte_4BC4622 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, *(_QWORD *)&eventId);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v7);
    sub_1C1ABD4(&SubmarineSettingsManager_TypeInfo, v8);
    byte_4BC4622 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.mapId = mapId;
  this->fields.eventId = eventId;
  v9 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v9,
    (const MethodInfo_32A7790 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  this->fields._ScanOpenPanelIntervals_k__BackingField = v9;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._ScanOpenPanelIntervals_k__BackingField,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v17 = SubmarineSettingsManager_TypeInfo;
  if ( !SubmarineSettingsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineSettingsManager_TypeInfo);
    v17 = SubmarineSettingsManager_TypeInfo;
  }
  static_fields = (int32x2_t *)v17->static_fields;
  LODWORD(this->fields._ScanOpenPanelIntervalDefault_k__BackingField) = static_fields[1].n64_u32[1];
  LODWORD(this->fields._PanelSelectDelaySecond_k__BackingField) = static_fields[1].n64_u32[0];
  this->fields._PanelUnitSize_k__BackingField = (struct UnityEngine_Vector2_o)vcvt_f32_s32((int32x2_t)static_fields->n64_u64[0]).n64_u64[0];
  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v16);
    v17 = SubmarineSettingsManager_TypeInfo;
    byte_4BC2141 = 1;
  }
  v19 = UnityEngine_Vector3_TypeInfo->static_fields;
  v20 = *(_QWORD *)&v19->zeroVector.fields.x;
  z = v19->zeroVector.fields.z;
  this->fields._HomeSpotId_k__BackingField = 0;
  *(_QWORD *)&this->fields._BoardOffset_k__BackingField.fields.x = v20;
  this->fields._BoardOffset_k__BackingField.fields.z = z;
  *(_OWORD *)&this->fields._SecondOfOpenPanelToRevealSpot_k__BackingField = *(_OWORD *)&v17->static_fields->DEFAULT_SECOND_OF_OPEN_PANEL_TO_REVEAL_SPOT;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall SubmarineSettingsManager__GetScanOpenPanelInterval(
        SubmarineSettingsManager_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__float__o *ScanOpenPanelIntervals_k__BackingField; // x0

  if ( (byte_4BC4625 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, *(_QWORD *)&scanId);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v5);
    byte_4BC4625 = 1;
  }
  ScanOpenPanelIntervals_k__BackingField = this->fields._ScanOpenPanelIntervals_k__BackingField;
  if ( !ScanOpenPanelIntervals_k__BackingField )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
         ScanOpenPanelIntervals_k__BackingField,
         scanId,
         (const MethodInfo_32A8354 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
  {
    ScanOpenPanelIntervals_k__BackingField = this->fields._ScanOpenPanelIntervals_k__BackingField;
    if ( ScanOpenPanelIntervals_k__BackingField )
      return System_Collections_Generic_Dictionary_int__float___get_Item(
               ScanOpenPanelIntervals_k__BackingField,
               scanId,
               (const MethodInfo_32A80C0 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
LABEL_8:
    sub_1C1AE30(ScanOpenPanelIntervals_k__BackingField, *(_QWORD *)&scanId);
  }
  return this->fields._ScanOpenPanelIntervalDefault_k__BackingField;
}


void __fastcall SubmarineSettingsManager__Load(
        SubmarineSettingsManager_o *this,
        SubmarineSettings_o *overrwrites,
        const MethodInfo *method)
{
  SubmarineSettingsManager_o *v4; // x20
  struct SubmarineSettings_OpenPanelInterval_array *ScanOpenPanelIntervals; // x21
  int max_length; // w8
  unsigned int v7; // w22
  SubmarineSettings_OpenPanelInterval_o *v8; // x8
  int32_t ScanOpenPanelIntervalDefault; // w8
  float PanelSelectDelaySecond; // s0
  float y; // s0
  float v12; // s1
  struct SubmarineSettings_BoardOffset_array *BoardOffsets; // x8
  int v14; // w9
  int v15; // w10
  SubmarineSettings_BoardOffset_o *v16; // x11
  struct UnityEngine_Vector2_o Offset; // d0
  struct SubmarineSettings_HomeSpot_array *HomeSpots; // x8
  int v19; // w9
  int v20; // w10
  SubmarineSettings_HomeSpot_o *v21; // x11
  float SecondOfOpenPanelToRevealSpot; // s0
  float ScanRangeToHomeSpotCameraDuration; // s0
  float ViewScanRangeCameraDuration; // s0
  float OpenPanelCameraDuration; // s0

  v4 = this;
  if ( (byte_4BC4623 & 1) == 0 )
  {
    this = (SubmarineSettingsManager_o *)sub_1C1ABD4(
                                           &Method_System_Collections_Generic_Dictionary_int__float__set_Item__,
                                           overrwrites);
    byte_4BC4623 = 1;
  }
  if ( !overrwrites )
    goto LABEL_45;
  ScanOpenPanelIntervals = overrwrites->fields.ScanOpenPanelIntervals;
  if ( !ScanOpenPanelIntervals )
    goto LABEL_45;
  max_length = ScanOpenPanelIntervals->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
LABEL_46:
        sub_1C1AE38(this, overrwrites);
      v8 = ScanOpenPanelIntervals->m_Items[v7];
      if ( !v8 )
        break;
      this = (SubmarineSettingsManager_o *)v4->fields._ScanOpenPanelIntervals_k__BackingField;
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_int__float___set_Item(
        (System_Collections_Generic_Dictionary_int__float__o *)this,
        v8->fields.ScanId,
        v8->fields.Interval,
        (const MethodInfo_32A8148 *)Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
      max_length = ScanOpenPanelIntervals->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_11;
    }
LABEL_45:
    sub_1C1AE30(this, overrwrites);
  }
LABEL_11:
  ScanOpenPanelIntervalDefault = overrwrites->fields.ScanOpenPanelIntervalDefault;
  if ( ScanOpenPanelIntervalDefault >= 1 )
    v4->fields._ScanOpenPanelIntervalDefault_k__BackingField = (float)ScanOpenPanelIntervalDefault;
  PanelSelectDelaySecond = overrwrites->fields.PanelSelectDelaySecond;
  if ( PanelSelectDelaySecond > 0.0 )
    v4->fields._PanelSelectDelaySecond_k__BackingField = PanelSelectDelaySecond;
  y = overrwrites->fields.PanelUnitSize.fields.y;
  if ( y > 0.0 )
  {
    v12 = *((float *)&overrwrites->fields.PanelUnitSize + 2);
    if ( v12 > 0.0 )
    {
      v4->fields._PanelUnitSize_k__BackingField.fields.x = y;
      v4->fields._PanelUnitSize_k__BackingField.fields.y = v12;
    }
  }
  BoardOffsets = overrwrites->fields.BoardOffsets;
  if ( !BoardOffsets )
    goto LABEL_45;
  v14 = BoardOffsets->max_length;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v14 == v15 )
        goto LABEL_46;
      v16 = BoardOffsets->m_Items[v15];
      if ( !v16 )
        goto LABEL_45;
      if ( v16->fields.MapId == v4->fields.mapId )
        break;
      if ( v14 == ++v15 )
        goto LABEL_27;
    }
    Offset = v16->fields.Offset;
    v4->fields._BoardOffset_k__BackingField.fields.z = 0.0;
    *(struct UnityEngine_Vector2_o *)&v4->fields._BoardOffset_k__BackingField.fields.x = Offset;
  }
LABEL_27:
  HomeSpots = overrwrites->fields.HomeSpots;
  if ( !HomeSpots )
    goto LABEL_45;
  v19 = HomeSpots->max_length;
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v19 == v20 )
        goto LABEL_46;
      v21 = HomeSpots->m_Items[v20];
      if ( !v21 )
        goto LABEL_45;
      if ( v21->fields.MapId == v4->fields.mapId )
        break;
      if ( v19 == ++v20 )
        goto LABEL_36;
    }
    v4->fields._HomeSpotId_k__BackingField = v21->fields.SpotId;
  }
LABEL_36:
  SecondOfOpenPanelToRevealSpot = overrwrites->fields.SecondOfOpenPanelToRevealSpot;
  if ( SecondOfOpenPanelToRevealSpot > 0.0 )
    v4->fields._SecondOfOpenPanelToRevealSpot_k__BackingField = SecondOfOpenPanelToRevealSpot;
  ScanRangeToHomeSpotCameraDuration = overrwrites->fields.ScanRangeToHomeSpotCameraDuration;
  if ( ScanRangeToHomeSpotCameraDuration > 0.0 )
    v4->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField = ScanRangeToHomeSpotCameraDuration;
  ViewScanRangeCameraDuration = overrwrites->fields.ViewScanRangeCameraDuration;
  if ( ViewScanRangeCameraDuration > 0.0 )
    v4->fields._ViewScanRangeCameraDuration_k__BackingField = ViewScanRangeCameraDuration;
  OpenPanelCameraDuration = overrwrites->fields.OpenPanelCameraDuration;
  if ( OpenPanelCameraDuration > 0.0 )
    v4->fields._OpenPanelCameraDuration_k__BackingField = OpenPanelCameraDuration;
  v4->fields._RegardScanRangeAsSimpleSquare_k__BackingField = overrwrites->fields.RegardScanRangeAsSimpleSquare;
}


void __fastcall SubmarineSettingsManager__UpdateSettingsFromMaster(
        SubmarineSettingsManager_o *this,
        const MethodInfo *method)
{
  SubmarineSettingsManager_c *v3; // x0
  float RateValue; // s0
  SubmarineSettingsManager_c *v5; // x0
  float v6; // s0
  SubmarineSettingsManager_c *v7; // x0
  float v8; // s0

  if ( (byte_4BC4624 & 1) == 0 )
  {
    sub_1C1ABD4(&SubmarineSettingsManager_TypeInfo, method);
    byte_4BC4624 = 1;
  }
  v3 = SubmarineSettingsManager_TypeInfo;
  if ( !SubmarineSettingsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineSettingsManager_TypeInfo);
    v3 = SubmarineSettingsManager_TypeInfo;
  }
  RateValue = ConstantMaster__getRateValue(v3->static_fields->KEY_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION, 0LL);
  if ( RateValue > 0.0 )
    this->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField = RateValue;
  v5 = SubmarineSettingsManager_TypeInfo;
  if ( !SubmarineSettingsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineSettingsManager_TypeInfo);
    v5 = SubmarineSettingsManager_TypeInfo;
  }
  v6 = ConstantMaster__getRateValue(v5->static_fields->KEY_VIEW_SCAN_RANGE_CAMERA_DURATION, 0LL);
  if ( v6 > 0.0 )
    this->fields._ViewScanRangeCameraDuration_k__BackingField = v6;
  v7 = SubmarineSettingsManager_TypeInfo;
  if ( !SubmarineSettingsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineSettingsManager_TypeInfo);
    v7 = SubmarineSettingsManager_TypeInfo;
  }
  v8 = ConstantMaster__getRateValue(v7->static_fields->KEY_OPEN_PANEL_CAMERA_DURATION, 0LL);
  if ( v8 > 0.0 )
    this->fields._OpenPanelCameraDuration_k__BackingField = v8;
}


UnityEngine_Vector3_o __fastcall SubmarineSettingsManager__get_BoardOffset(
        SubmarineSettingsManager_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields._BoardOffset_k__BackingField.fields.x;
  y = this->fields._BoardOffset_k__BackingField.fields.y;
  z = this->fields._BoardOffset_k__BackingField.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall SubmarineSettingsManager__get_HomeSpotId(SubmarineSettingsManager_o *this, const MethodInfo *method)
{
  return this->fields._HomeSpotId_k__BackingField;
}


float __fastcall SubmarineSettingsManager__get_OpenPanelCameraDuration(
        SubmarineSettingsManager_o *this,
        const MethodInfo *method)
{
  return this->fields._OpenPanelCameraDuration_k__BackingField;
}


float __fastcall SubmarineSettingsManager__get_PanelSelectDelaySecond(
        SubmarineSettingsManager_o *this,
        const MethodInfo *method)
{
  return this->fields._PanelSelectDelaySecond_k__BackingField;
}


UnityEngine_Vector2_o __fastcall SubmarineSettingsManager__get_PanelUnitSize(
        SubmarineSettingsManager_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields._PanelUnitSize_k__BackingField.fields.x;
  y = this->fields._PanelUnitSize_k__BackingField.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


bool __fastcall SubmarineSettingsManager__get_RegardScanRangeAsSimpleSquare(
        SubmarineSettingsManager_o *this,
        const MethodInfo *method)
{
  return this->fields._RegardScanRangeAsSimpleSquare_k__BackingField;
}


float __fastcall SubmarineSettingsManager__get_ScanOpenPanelIntervalDefault(
        SubmarineSettingsManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ScanOpenPanelIntervalDefault_k__BackingField;
}


System_Collections_Generic_Dictionary_int__float__o *__fastcall SubmarineSettingsManager__get_ScanOpenPanelIntervals(
        SubmarineSettingsManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ScanOpenPanelIntervals_k__BackingField;
}


float __fastcall SubmarineSettingsManager__get_ScanRangeToHomeSpotCameraDuration(
        SubmarineSettingsManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField;
}


float __fastcall SubmarineSettingsManager__get_SecondOfOpenPanelToRevealSpot(
        SubmarineSettingsManager_o *this,
        const MethodInfo *method)
{
  return this->fields._SecondOfOpenPanelToRevealSpot_k__BackingField;
}


float __fastcall SubmarineSettingsManager__get_ViewScanRangeCameraDuration(
        SubmarineSettingsManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ViewScanRangeCameraDuration_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSettingsManager__set_BoardOffset(
        SubmarineSettingsManager_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._BoardOffset_k__BackingField = value;
}


void __fastcall SubmarineSettingsManager__set_HomeSpotId(
        SubmarineSettingsManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._HomeSpotId_k__BackingField = value;
}


void __fastcall SubmarineSettingsManager__set_OpenPanelCameraDuration(
        SubmarineSettingsManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._OpenPanelCameraDuration_k__BackingField = value;
}


void __fastcall SubmarineSettingsManager__set_PanelSelectDelaySecond(
        SubmarineSettingsManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._PanelSelectDelaySecond_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSettingsManager__set_PanelUnitSize(
        SubmarineSettingsManager_o *this,
        UnityEngine_Vector2_o value,
        const MethodInfo *method)
{
  this->fields._PanelUnitSize_k__BackingField = value;
}


void __fastcall SubmarineSettingsManager__set_RegardScanRangeAsSimpleSquare(
        SubmarineSettingsManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RegardScanRangeAsSimpleSquare_k__BackingField = value;
}


void __fastcall SubmarineSettingsManager__set_ScanOpenPanelIntervalDefault(
        SubmarineSettingsManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._ScanOpenPanelIntervalDefault_k__BackingField = value;
}


void __fastcall SubmarineSettingsManager__set_ScanOpenPanelIntervals(
        SubmarineSettingsManager_o *this,
        System_Collections_Generic_Dictionary_int__float__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ScanOpenPanelIntervals_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._ScanOpenPanelIntervals_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineSettingsManager__set_ScanRangeToHomeSpotCameraDuration(
        SubmarineSettingsManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField = value;
}


void __fastcall SubmarineSettingsManager__set_SecondOfOpenPanelToRevealSpot(
        SubmarineSettingsManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._SecondOfOpenPanelToRevealSpot_k__BackingField = value;
}


void __fastcall SubmarineSettingsManager__set_ViewScanRangeCameraDuration(
        SubmarineSettingsManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._ViewScanRangeCameraDuration_k__BackingField = value;
}