void __fastcall SubmarineSettingsManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  SubmarineSettingsManager_c *v5; // x8
  struct SubmarineSettingsManager_StaticFields *static_fields; // x0
  __int64 v7; // x1
  struct SubmarineSettingsManager_StaticFields *v8; // x0
  __int64 v9; // x1
  struct SubmarineSettingsManager_StaticFields *v10; // x0
  __int64 v11; // x1

  if ( (byte_418584C & 1) == 0 )
  {
    sub_B2C35C(&SubmarineSettingsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_12406/*"SUBMARINE_OPEN_PANEL_CAMERA_DURATION"*/, v2);
    sub_B2C35C(&StringLiteral_12408/*"SUBMARINE_VIEW_SCAN_RANGE_CAMERA_DURATION"*/, v3);
    sub_B2C35C(&StringLiteral_12407/*"SUBMARINE_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION"*/, v4);
    byte_418584C = 1;
  }
  SubmarineSettingsManager_TypeInfo->static_fields->DEFAULT_PANEL_WIDTH = 82;
  SubmarineSettingsManager_TypeInfo->static_fields->DEFAULT_PANEL_HEIGHT = 82;
  v5 = SubmarineSettingsManager_TypeInfo;
  SubmarineSettingsManager_TypeInfo->static_fields->DEFAULT_PANEL_SELECT_DELAY_SECOND = 0.2;
  v5->static_fields->DEFAULT_SCAN_OPEN_PANEL_WAIT_TIME = 0.5;
  v5->static_fields->DEFAULT_SECOND_OF_OPEN_PANEL_TO_REVEAL_SPOT = 0.5;
  v5->static_fields->DEFAULT_VIEW_SCAN_RANGE_CAMERA_DURATION = 0.5;
  v5->static_fields->DEFAULT_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION = 0.5;
  v5->static_fields->DEFAULT_OPEN_PANEL_CAMERA_DURATION = 0.5;
  static_fields = v5->static_fields;
  v7 = StringLiteral_12408/*"SUBMARINE_VIEW_SCAN_RANGE_CAMERA_DURATION"*/;
  static_fields->KEY_VIEW_SCAN_RANGE_CAMERA_DURATION = (struct System_String_o *)StringLiteral_12408/*"SUBMARINE_VIEW_SCAN_RANGE_CAMERA_DURATION"*/;
  sub_B2C2F8(&static_fields->KEY_VIEW_SCAN_RANGE_CAMERA_DURATION, v7);
  v8 = SubmarineSettingsManager_TypeInfo->static_fields;
  v9 = StringLiteral_12407/*"SUBMARINE_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION"*/;
  v8->KEY_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION = (struct System_String_o *)StringLiteral_12407/*"SUBMARINE_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION"*/;
  sub_B2C2F8(&v8->KEY_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION, v9);
  v10 = SubmarineSettingsManager_TypeInfo->static_fields;
  v11 = StringLiteral_12406/*"SUBMARINE_OPEN_PANEL_CAMERA_DURATION"*/;
  v10->KEY_OPEN_PANEL_CAMERA_DURATION = (struct System_String_o *)StringLiteral_12406/*"SUBMARINE_OPEN_PANEL_CAMERA_DURATION"*/;
  sub_B2C2F8(&v10->KEY_OPEN_PANEL_CAMERA_DURATION, v11);
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
  SubmarineSettingsManager_c *v10; // x0
  SubmarineSettingsManager_c *v11; // x8

  if ( (byte_4185848 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v7);
    sub_B2C35C(&SubmarineSettingsManager_TypeInfo, v8);
    byte_4185848 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.mapId = mapId;
  this->fields.eventId = eventId;
  v9 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v9,
    (const MethodInfo_2E677E4 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  this->fields._ScanOpenPanelIntervals_k__BackingField = v9;
  sub_B2C2F8(&this->fields._ScanOpenPanelIntervals_k__BackingField, v9);
  v10 = SubmarineSettingsManager_TypeInfo;
  if ( (BYTE3(SubmarineSettingsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineSettingsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineSettingsManager_TypeInfo);
    v10 = SubmarineSettingsManager_TypeInfo;
  }
  this->fields._ScanOpenPanelIntervalDefault_k__BackingField = v10->static_fields->DEFAULT_SCAN_OPEN_PANEL_WAIT_TIME;
  this->fields._PanelSelectDelaySecond_k__BackingField = v10->static_fields->DEFAULT_PANEL_SELECT_DELAY_SECOND;
  this->fields._PanelUnitSize_k__BackingField = (struct UnityEngine_Vector2_o)vcvt_f32_s32(*(int32x2_t *)v10->static_fields).n64_u64[0];
  this->fields._BoardOffset_k__BackingField = UnityEngine_Vector3__get_zero(0LL);
  this->fields._HomeSpotId_k__BackingField = 0;
  v11 = SubmarineSettingsManager_TypeInfo;
  this->fields._SecondOfOpenPanelToRevealSpot_k__BackingField = SubmarineSettingsManager_TypeInfo->static_fields->DEFAULT_SECOND_OF_OPEN_PANEL_TO_REVEAL_SPOT;
  this->fields._ViewScanRangeCameraDuration_k__BackingField = v11->static_fields->DEFAULT_VIEW_SCAN_RANGE_CAMERA_DURATION;
  this->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField = v11->static_fields->DEFAULT_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION;
  this->fields._OpenPanelCameraDuration_k__BackingField = v11->static_fields->DEFAULT_OPEN_PANEL_CAMERA_DURATION;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall SubmarineSettingsManager__GetScanOpenPanelInterval(
        SubmarineSettingsManager_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__float__o *ScanOpenPanelIntervals_k__BackingField; // x0

  if ( (byte_418584B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, *(_QWORD *)&scanId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v5);
    byte_418584B = 1;
  }
  ScanOpenPanelIntervals_k__BackingField = this->fields._ScanOpenPanelIntervals_k__BackingField;
  if ( !ScanOpenPanelIntervals_k__BackingField )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
         ScanOpenPanelIntervals_k__BackingField,
         scanId,
         (const MethodInfo_2E68600 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
  {
    ScanOpenPanelIntervals_k__BackingField = this->fields._ScanOpenPanelIntervals_k__BackingField;
    if ( ScanOpenPanelIntervals_k__BackingField )
      return System_Collections_Generic_Dictionary_int__float___get_Item(
               ScanOpenPanelIntervals_k__BackingField,
               scanId,
               (const MethodInfo_2E682D0 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
LABEL_8:
    sub_B2C434(ScanOpenPanelIntervals_k__BackingField, *(_QWORD *)&scanId);
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
  unsigned int v15; // w10
  SubmarineSettings_BoardOffset_o *v16; // x11
  struct UnityEngine_Vector2_o Offset; // x8
  struct SubmarineSettings_HomeSpot_array *HomeSpots; // x8
  int v19; // w9
  unsigned int v20; // w10
  SubmarineSettings_HomeSpot_o *v21; // x11
  float SecondOfOpenPanelToRevealSpot; // s0
  float ScanRangeToHomeSpotCameraDuration; // s0
  float ViewScanRangeCameraDuration; // s0
  float OpenPanelCameraDuration; // s0
  __int64 v26; // x0

  v4 = this;
  if ( (byte_4185849 & 1) == 0 )
  {
    this = (SubmarineSettingsManager_o *)sub_B2C35C(
                                           &Method_System_Collections_Generic_Dictionary_int__float__set_Item__,
                                           overrwrites);
    byte_4185849 = 1;
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
      {
LABEL_46:
        v26 = sub_B2C460(this);
        sub_B2C400(v26, 0LL);
      }
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
        (const MethodInfo_2E68368 *)Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
      max_length = ScanOpenPanelIntervals->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_11;
    }
LABEL_45:
    sub_B2C434(this, overrwrites);
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
      if ( v15 >= v14 )
        goto LABEL_46;
      v16 = BoardOffsets->m_Items[v15];
      if ( !v16 )
        goto LABEL_45;
      if ( v16->fields.MapId == v4->fields.mapId )
        break;
      if ( (int)++v15 >= v14 )
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
      if ( v20 >= v19 )
        goto LABEL_46;
      v21 = HomeSpots->m_Items[v20];
      if ( !v21 )
        goto LABEL_45;
      if ( v21->fields.MapId == v4->fields.mapId )
        break;
      if ( (int)++v20 >= v19 )
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

  if ( (byte_418584A & 1) == 0 )
  {
    sub_B2C35C(&SubmarineSettingsManager_TypeInfo, method);
    byte_418584A = 1;
  }
  v3 = SubmarineSettingsManager_TypeInfo;
  if ( (BYTE3(SubmarineSettingsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineSettingsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineSettingsManager_TypeInfo);
    v3 = SubmarineSettingsManager_TypeInfo;
  }
  RateValue = ConstantMaster__getRateValue(v3->static_fields->KEY_SCAN_RANGE_TO_HOME_SPOT_CAMERA_DURATION, 0LL);
  if ( RateValue > 0.0 )
    this->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField = RateValue;
  v5 = SubmarineSettingsManager_TypeInfo;
  if ( (BYTE3(SubmarineSettingsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineSettingsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineSettingsManager_TypeInfo);
    v5 = SubmarineSettingsManager_TypeInfo;
  }
  v6 = ConstantMaster__getRateValue(v5->static_fields->KEY_VIEW_SCAN_RANGE_CAMERA_DURATION, 0LL);
  if ( v6 > 0.0 )
    this->fields._ViewScanRangeCameraDuration_k__BackingField = v6;
  v7 = SubmarineSettingsManager_TypeInfo;
  if ( (BYTE3(SubmarineSettingsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineSettingsManager_TypeInfo->_2.cctor_finished )
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
  this->fields._ScanOpenPanelIntervals_k__BackingField = value;
  sub_B2C2F8(&this->fields._ScanOpenPanelIntervals_k__BackingField, value);
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