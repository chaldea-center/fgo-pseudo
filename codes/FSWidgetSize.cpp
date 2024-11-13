void __fastcall FSWidgetSize___ctor(FSWidgetSize_o *this, const MethodInfo *method)
{
  this->fields.size_16_9 = 0LL;
  this->fields.size_21_9 = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FSWidgetSize__Awake(FSWidgetSize_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) )
    FSWidgetSize__SetSize(this, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FSWidgetSize__GetSize(
        FSWidgetSize_o *this,
        int32_t size_16_9,
        int32_t size_21_9,
        bool fix,
        const MethodInfo *method)
{
  FSUtility_c *v8; // x0
  int32_t width; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  float height; // s9
  float v14; // s8
  float v15; // s1
  float v16; // s0
  int32_t v17; // w8

  if ( (byte_4B17992 & 1) != 0 )
  {
    if ( fix )
    {
LABEL_3:
      v8 = FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, *(_QWORD *)&size_16_9);
      if ( FSUtility__IsUnderVista((const MethodInfo *)v8) )
        return size_16_9;
      else
        return size_21_9;
    }
  }
  else
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, *(_QWORD *)&size_16_9, *(_QWORD *)&size_21_9);
    byte_4B17992 = 1;
    if ( fix )
      goto LABEL_3;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = (float)UnityEngine_Screen__get_height(0LL);
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v11, v12);
    byte_4B1103A = 1;
  }
  v14 = (float)width / height;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11);
  v15 = (float)(fminf(v14, 2.3333) + -1.7778) / 0.55556;
  if ( v14 < 1.7778 )
    v15 = 0.0;
  v16 = (float)(v15 * (float)(size_21_9 - size_16_9)) + (float)size_16_9;
  v17 = vcvtps_s32_f32(v16);
  if ( ceilf(v16) == INFINITY )
    return 0x80000000;
  else
    return v17;
}


void __fastcall FSWidgetSize__SetSize(FSWidgetSize_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x4
  __int64 Size; // x0
  __int64 v11; // x1
  FSWidgetSize_o *v12; // x0
  const MethodInfo *v13; // x4
  int32_t v14; // w1

  if ( (byte_4B17991 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17991 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v8 )
  {
    Size = FSWidgetSize__GetSize(
             (FSWidgetSize_o *)v8,
             this->fields.size_16_9.fields.m_X,
             this->fields.size_21_9.fields.m_X,
             this->fields.fixWidth,
             v9);
    if ( !Component_object )
      sub_1BCAA3C(Size, v11);
    UIWidget__set_width((UIWidget_o *)Component_object, Size, 0LL);
    v14 = FSWidgetSize__GetSize(
            v12,
            this->fields.size_16_9.fields.m_Y,
            this->fields.size_21_9.fields.m_Y,
            this->fields.fixHeight,
            v13);
    UIWidget__set_height((UIWidget_o *)Component_object, v14, 0LL);
  }
}