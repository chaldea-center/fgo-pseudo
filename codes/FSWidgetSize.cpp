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


int32_t __fastcall FSWidgetSize__GetSize(
        FSWidgetSize_o *this,
        int32_t size_16_9,
        int32_t size_21_9,
        bool fix,
        const MethodInfo *method)
{
  int32_t width; // w21
  float height; // s9
  float v11; // s8
  float v12; // s1
  float v13; // s0
  int32_t v14; // w8

  if ( (byte_4A5C8D4 & 1) != 0 )
  {
    if ( fix )
    {
LABEL_3:
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( FSUtility__IsUnderVista(0LL) )
        return size_16_9;
      else
        return size_21_9;
    }
  }
  else
  {
    sub_1B885B0(&FSUtility_TypeInfo);
    byte_4A5C8D4 = 1;
    if ( fix )
      goto LABEL_3;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = (float)UnityEngine_Screen__get_height(0LL);
  if ( !byte_4A5638E )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5638E = 1;
  }
  v11 = (float)width / height;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = (float)(fminf(v11, 2.3333) + -1.7778) / 0.55556;
  if ( v11 < 1.7778 )
    v12 = 0.0;
  v13 = (float)(v12 * (float)(size_21_9 - size_16_9)) + (float)size_16_9;
  v14 = vcvtps_s32_f32(v13);
  if ( ceilf(v13) == INFINITY )
    return 0x80000000;
  else
    return v14;
}


void __fastcall FSWidgetSize__SetSize(FSWidgetSize_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x4
  __int64 Size; // x0
  __int64 v7; // x1
  FSWidgetSize_o *v8; // x0
  const MethodInfo *v9; // x4
  int32_t v10; // w1

  if ( (byte_4A5C8D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C8D3 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v4 )
  {
    Size = FSWidgetSize__GetSize(
             (FSWidgetSize_o *)v4,
             this->fields.size_16_9.fields.m_X,
             this->fields.size_21_9.fields.m_X,
             this->fields.fixWidth,
             v5);
    if ( !Component_object )
      sub_1B8880C(Size, v7);
    UIWidget__set_width((UIWidget_o *)Component_object, Size, 0LL);
    v10 = FSWidgetSize__GetSize(
            v8,
            this->fields.size_16_9.fields.m_Y,
            this->fields.size_21_9.fields.m_Y,
            this->fields.fixHeight,
            v9);
    UIWidget__set_height((UIWidget_o *)Component_object, v10, 0LL);
  }
}