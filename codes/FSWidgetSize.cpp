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
  FSUtility_c *v8; // x0
  int32_t width; // w21
  float height; // s9
  float v12; // s8
  float v13; // s1
  float v14; // s0
  int32_t v15; // w8

  if ( (byte_4BDDD69 & 1) != 0 )
  {
    if ( fix )
    {
LABEL_3:
      v8 = FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( FSUtility__IsUnderVista((const MethodInfo *)v8) )
        return size_16_9;
      else
        return size_21_9;
    }
  }
  else
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BDDD69 = 1;
    if ( fix )
      goto LABEL_3;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = (float)UnityEngine_Screen__get_height(0LL);
  if ( !byte_4BD7265 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD7265 = 1;
  }
  v12 = (float)width / height;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = (float)(fminf(v12, 2.3333) + -1.7778) / 0.55556;
  if ( v12 < 1.7778 )
    v13 = 0.0;
  v14 = (float)(v13 * (float)(size_21_9 - size_16_9)) + (float)size_16_9;
  v15 = vcvtps_s32_f32(v14);
  if ( ceilf(v14) == INFINITY )
    return 0x80000000;
  else
    return v15;
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

  if ( (byte_4BDDD68 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDD68 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
      sub_1C22094(Size, v7);
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