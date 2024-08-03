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
  float height; // s9
  float v13; // s8
  float v14; // s1
  float v15; // s0
  int32_t v16; // w8

  if ( (byte_49FDA85 & 1) != 0 )
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
    sub_1B640C8(&FSUtility_TypeInfo, *(_QWORD *)&size_16_9);
    byte_49FDA85 = 1;
    if ( fix )
      goto LABEL_3;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = (float)UnityEngine_Screen__get_height(0LL);
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, v11);
    byte_49F779D = 1;
  }
  v13 = (float)width / height;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v14 = (float)(fminf(v13, 2.3333) + -1.7778) / 0.55556;
  if ( v13 < 1.7778 )
    v14 = 0.0;
  v15 = (float)(v14 * (float)(size_21_9 - size_16_9)) + (float)size_16_9;
  v16 = vcvtps_s32_f32(v15);
  if ( ceilf(v15) == INFINITY )
    return 0x80000000;
  else
    return v16;
}


void __fastcall FSWidgetSize__SetSize(FSWidgetSize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x4
  __int64 Size; // x0
  FSWidgetSize_o *v8; // x0
  const MethodInfo *v9; // x4
  int32_t v10; // w1

  if ( (byte_49FDA84 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FDA84 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v5 )
  {
    Size = FSWidgetSize__GetSize(
             (FSWidgetSize_o *)v5,
             this->fields.size_16_9.fields.m_X,
             this->fields.size_21_9.fields.m_X,
             this->fields.fixWidth,
             v6);
    if ( !Component_object )
      sub_1B64324(Size);
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