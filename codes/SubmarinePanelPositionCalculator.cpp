void SubmarinePanelPositionCalculator___ctor(SubmarinePanelPositionCalculator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_o SubmarinePanelPositionCalculator__GetPositionByIndices(
        SubmarinePanelPositionCalculator_o *this,
        int32_t hIndex,
        int32_t vIndex,
        const MethodInfo *method)
{
  unsigned __int64 v4; // d0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = vadd_f32(
         *(float32x2_t *)&this->fields._OffsetX_k__BackingField,
         vmul_f32(
           vmul_f32(
             (float32x2_t)this->fields._PanelUnitSize_k__BackingField,
             vcvt_f32_s32(
               vsub_s32(
                 (int32x2_t)(vshl_n_s32((int32x2_t)__PAIR64__(vIndex, hIndex), 1u).n64_u64[0] | 0x100000001LL),
                 *(int32x2_t *)&this->fields._HorizontalPanelNum_k__BackingField))),
           (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  result.fields.y = *((float *)&v4 + 1);
  result.fields.z = 0.0;
  result.fields.x = *(float *)&v4;
  return result;
}


void SubmarinePanelPositionCalculator__LoadSettings(
        SubmarinePanelPositionCalculator_o *this,
        SubmarineSettingsManager_o *settings,
        const MethodInfo *method)
{
  if ( !settings )
    sub_1C93D2C(this, 0);
  this->fields._OffsetX_k__BackingField = settings->fields._BoardOffset_k__BackingField.fields.x;
  this->fields._OffsetY_k__BackingField = settings->fields._BoardOffset_k__BackingField.fields.y;
  this->fields._PanelUnitSize_k__BackingField = settings->fields._PanelUnitSize_k__BackingField;
}


int32_t SubmarinePanelPositionCalculator__get_HorizontalPanelNum(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  return this->fields._HorizontalPanelNum_k__BackingField;
}


UnityEngine_Vector3_o SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  unsigned __int64 v2; // d0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = vsub_f32(
         vadd_f32(
           *(float32x2_t *)&this->fields._OffsetX_k__BackingField,
           vmul_f32(
             vmul_f32(
               (float32x2_t)this->fields._PanelUnitSize_k__BackingField,
               vcvt_f32_s32(vsub_s32((int32x2_t)0x100000001LL, *(int32x2_t *)&this->fields._HorizontalPanelNum_k__BackingField))),
             (float32x2_t)0x3F0000003F000000LL)),
         vmul_f32((float32x2_t)this->fields._PanelUnitSize_k__BackingField, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  result.fields.y = *((float *)&v2 + 1);
  result.fields.z = 0.0;
  result.fields.x = *(float *)&v2;
  return result;
}


float SubmarinePanelPositionCalculator__get_OffsetX(SubmarinePanelPositionCalculator_o *this, const MethodInfo *method)
{
  return this->fields._OffsetX_k__BackingField;
}


float SubmarinePanelPositionCalculator__get_OffsetY(SubmarinePanelPositionCalculator_o *this, const MethodInfo *method)
{
  return this->fields._OffsetY_k__BackingField;
}


UnityEngine_Vector2_o SubmarinePanelPositionCalculator__get_PanelUnitSize(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = this->fields._PanelUnitSize_k__BackingField.fields.x;
  result.fields.y = this->fields._PanelUnitSize_k__BackingField.fields.y;
  return result;
}


int32_t SubmarinePanelPositionCalculator__get_PanelUnitSizeX(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  float x; // s0

  x = this->fields._PanelUnitSize_k__BackingField.fields.x;
  if ( x == INFINITY )
    return 0x80000000;
  else
    return (int)x;
}


int32_t SubmarinePanelPositionCalculator__get_PanelUnitSizeY(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  float y; // s0

  y = this->fields._PanelUnitSize_k__BackingField.fields.y;
  if ( y == INFINITY )
    return 0x80000000;
  else
    return (int)y;
}


UnityEngine_Vector3_o SubmarinePanelPositionCalculator__get_RightTopEdgePos(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  unsigned __int64 v2; // d0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = vadd_f32(
         vmul_f32((float32x2_t)this->fields._PanelUnitSize_k__BackingField, (float32x2_t)0x3F0000003F000000LL),
         vadd_f32(
           *(float32x2_t *)&this->fields._OffsetX_k__BackingField,
           vmul_f32(
             vmul_f32(
               (float32x2_t)this->fields._PanelUnitSize_k__BackingField,
               vcvt_f32_s32(
                 vadd_s32(
                   vmvn_s8(*(int8x8_t *)&this->fields._HorizontalPanelNum_k__BackingField),
                   vshl_n_s32(*(int32x2_t *)&this->fields._HorizontalPanelNum_k__BackingField, 1u)))),
             (float32x2_t)0x3F0000003F000000LL))).n64_u64[0];
  result.fields.y = *((float *)&v2 + 1);
  result.fields.z = 0.0;
  result.fields.x = *(float *)&v2;
  return result;
}


int32_t SubmarinePanelPositionCalculator__get_TotalPanelNum(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  return this->fields._VerticalPanelNum_k__BackingField * this->fields._HorizontalPanelNum_k__BackingField;
}


int32_t SubmarinePanelPositionCalculator__get_VerticalPanelNum(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  return this->fields._VerticalPanelNum_k__BackingField;
}


void SubmarinePanelPositionCalculator__set_HorizontalPanelNum(
        SubmarinePanelPositionCalculator_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._HorizontalPanelNum_k__BackingField = value;
}


void SubmarinePanelPositionCalculator__set_OffsetX(
        SubmarinePanelPositionCalculator_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._OffsetX_k__BackingField = value;
}


void SubmarinePanelPositionCalculator__set_OffsetY(
        SubmarinePanelPositionCalculator_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._OffsetY_k__BackingField = value;
}


void SubmarinePanelPositionCalculator__set_PanelUnitSize(
        SubmarinePanelPositionCalculator_o *this,
        UnityEngine_Vector2_o value,
        const MethodInfo *method)
{
  this->fields._PanelUnitSize_k__BackingField = value;
}


void SubmarinePanelPositionCalculator__set_VerticalPanelNum(
        SubmarinePanelPositionCalculator_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._VerticalPanelNum_k__BackingField = value;
}