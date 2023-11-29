void __fastcall SubmarinePanelPositionCalculator___ctor(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall SubmarinePanelPositionCalculator__GetPositionByIndices(
        SubmarinePanelPositionCalculator_o *this,
        int32_t hIndex,
        int32_t vIndex,
        const MethodInfo *method)
{
  unsigned __int64 v4; // d0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = vadd_f32(
         *(float32x2_t *)&this->fields._OffsetX_k__BackingField,
         vmul_f32(
           vmul_f32(
             (float32x2_t)this->fields._PanelUnitSize_k__BackingField,
             vcvt_f32_s32(
               vsub_s32(
                 (int32x2_t)(vshl_n_s32((int32x2_t)__PAIR64__(vIndex, hIndex), 1uLL).n64_u64[0] | 0x100000001LL),
                 *(int32x2_t *)&this->fields._HorizontalPanelNum_k__BackingField))),
           (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v5 = *((float *)&v4 + 1);
  v6 = 0.0;
  result.fields.x = *(float *)&v4;
  result.fields.z = v6;
  result.fields.y = v5;
  return result;
}


void __fastcall SubmarinePanelPositionCalculator__LoadSettings(
        SubmarinePanelPositionCalculator_o *this,
        SubmarineSettingsManager_o *settings,
        const MethodInfo *method)
{
  if ( !settings )
    sub_B170D4();
  this->fields._OffsetX_k__BackingField = settings->fields._BoardOffset_k__BackingField.fields.x;
  this->fields._OffsetY_k__BackingField = settings->fields._BoardOffset_k__BackingField.fields.y;
  this->fields._PanelUnitSize_k__BackingField = settings->fields._PanelUnitSize_k__BackingField;
}


int32_t __fastcall SubmarinePanelPositionCalculator__get_HorizontalPanelNum(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  return this->fields._HorizontalPanelNum_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // d0 OVERLAPPED
  float32x2_t v4; // d1
  float32x2_t v5; // d9
  float Item; // s0
  float v7; // s2
  unsigned __int64 v8; // d0
  float v9; // s1
  float x; // [xsp+0h] [xbp-30h]
  struct UnityEngine_Vector2_o v11; // [xsp+28h] [xbp-8h] BYREF
  UnityEngine_Vector2_o v12; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  PanelUnitSize_k__BackingField = this->fields._PanelUnitSize_k__BackingField;
  v4.n64_u64[0] = vmul_f32(
                    vmul_f32(
                      (float32x2_t)PanelUnitSize_k__BackingField,
                      vcvt_f32_s32(
                        vsub_s32(
                          (int32x2_t)0x100000001LL,
                          *(int32x2_t *)&this->fields._HorizontalPanelNum_k__BackingField))),
                    (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v5.n64_u64[0] = vadd_f32(*(float32x2_t *)&this->fields._OffsetX_k__BackingField, v4).n64_u64[0];
  v11 = PanelUnitSize_k__BackingField;
  v12.fields.x = UnityEngine_Vector2__get_Item(PanelUnitSize_k__BackingField, (int32_t)&v11, 0LL);
  x = v12.fields.x;
  v11 = this->fields._PanelUnitSize_k__BackingField;
  Item = UnityEngine_Vector2__get_Item(v12, (int32_t)&v11, (const MethodInfo *)((unsigned int)&dword_0 + 1));
  v7 = 0.0;
  v8 = vsub_f32(v5, vmul_f32((float32x2_t)__PAIR64__(LODWORD(Item), LODWORD(x)), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v9 = *((float *)&v8 + 1);
  result.fields.x = *(float *)&v8;
  result.fields.z = v7;
  result.fields.y = v9;
  return result;
}


float __fastcall SubmarinePanelPositionCalculator__get_OffsetX(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  return this->fields._OffsetX_k__BackingField;
}


float __fastcall SubmarinePanelPositionCalculator__get_OffsetY(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  return this->fields._OffsetY_k__BackingField;
}


UnityEngine_Vector2_o __fastcall SubmarinePanelPositionCalculator__get_PanelUnitSize(
        SubmarinePanelPositionCalculator_o *this,
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


int32_t __fastcall SubmarinePanelPositionCalculator__get_PanelUnitSizeX(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  float x; // s0

  x = this->fields._PanelUnitSize_k__BackingField.fields.x;
  if ( x == INFINITY )
    return (int)-x;
  else
    return (int)x;
}


int32_t __fastcall SubmarinePanelPositionCalculator__get_PanelUnitSizeY(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  float y; // s0

  y = this->fields._PanelUnitSize_k__BackingField.fields.y;
  if ( y == INFINITY )
    return (int)-y;
  else
    return (int)y;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall SubmarinePanelPositionCalculator__get_RightTopEdgePos(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // d0 OVERLAPPED
  float32x2_t v4; // d1
  float32x2_t v5; // d9
  float Item; // s0
  float v7; // s2
  unsigned __int64 v8; // d0
  float v9; // s1
  float x; // [xsp+0h] [xbp-30h]
  struct UnityEngine_Vector2_o v11; // [xsp+28h] [xbp-8h] BYREF
  UnityEngine_Vector2_o v12; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  PanelUnitSize_k__BackingField = this->fields._PanelUnitSize_k__BackingField;
  v4.n64_u64[0] = vmul_f32(
                    vmul_f32(
                      (float32x2_t)PanelUnitSize_k__BackingField,
                      vcvt_f32_s32(
                        vsub_s32(
                          (int32x2_t)(vadd_s32(
                                        vshl_n_s32(
                                          *(int32x2_t *)&this->fields._HorizontalPanelNum_k__BackingField,
                                          1uLL),
                                        (int32x2_t)0x100000001LL).n64_u64[0] | 0x100000001LL),
                          *(int32x2_t *)&this->fields._HorizontalPanelNum_k__BackingField))),
                    (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v5.n64_u64[0] = vadd_f32(*(float32x2_t *)&this->fields._OffsetX_k__BackingField, v4).n64_u64[0];
  v11 = PanelUnitSize_k__BackingField;
  v12.fields.x = UnityEngine_Vector2__get_Item(PanelUnitSize_k__BackingField, (int32_t)&v11, 0LL);
  x = v12.fields.x;
  v11 = this->fields._PanelUnitSize_k__BackingField;
  Item = UnityEngine_Vector2__get_Item(v12, (int32_t)&v11, (const MethodInfo *)((unsigned int)&dword_0 + 1));
  v7 = 0.0;
  v8 = vadd_f32(v5, vmul_f32((float32x2_t)__PAIR64__(LODWORD(Item), LODWORD(x)), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v9 = *((float *)&v8 + 1);
  result.fields.x = *(float *)&v8;
  result.fields.z = v7;
  result.fields.y = v9;
  return result;
}


int32_t __fastcall SubmarinePanelPositionCalculator__get_TotalPanelNum(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  return this->fields._VerticalPanelNum_k__BackingField * this->fields._HorizontalPanelNum_k__BackingField;
}


int32_t __fastcall SubmarinePanelPositionCalculator__get_VerticalPanelNum(
        SubmarinePanelPositionCalculator_o *this,
        const MethodInfo *method)
{
  return this->fields._VerticalPanelNum_k__BackingField;
}


void __fastcall SubmarinePanelPositionCalculator__set_HorizontalPanelNum(
        SubmarinePanelPositionCalculator_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._HorizontalPanelNum_k__BackingField = value;
}


void __fastcall SubmarinePanelPositionCalculator__set_OffsetX(
        SubmarinePanelPositionCalculator_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._OffsetX_k__BackingField = value;
}


void __fastcall SubmarinePanelPositionCalculator__set_OffsetY(
        SubmarinePanelPositionCalculator_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._OffsetY_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarinePanelPositionCalculator__set_PanelUnitSize(
        SubmarinePanelPositionCalculator_o *this,
        UnityEngine_Vector2_o value,
        const MethodInfo *method)
{
  this->fields._PanelUnitSize_k__BackingField = value;
}


void __fastcall SubmarinePanelPositionCalculator__set_VerticalPanelNum(
        SubmarinePanelPositionCalculator_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._VerticalPanelNum_k__BackingField = value;
}