void FSWidgetSize___ctor(FSWidgetSize_o *this, const MethodInfo *method)
{
  this->fields.size_16_9 = 0;
  this->fields.size_21_9 = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FSWidgetSize__Awake(FSWidgetSize_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    FSWidgetSize__SetSize(this, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t FSWidgetSize__GetSize(
        FSWidgetSize_o *this,
        int32_t size_16_9,
        int32_t size_21_9,
        bool fix,
        const MethodInfo *method)
{
  FSUtility_c *v8; // x0
  int32_t width; // w21
  int32_t height; // w0
  __int64 v12; // x1
  float v13; // s0
  float v14; // s1
  float v15; // s1
  float v16; // s0
  float v17; // s9
  float v18; // s8
  int32_t v19; // w9

  if ( (byte_59722B5 & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    byte_59722B5 = 1;
  }
  if ( fix )
  {
    v8 = FSUtility_TypeInfo;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, *(_QWORD *)&size_16_9);
    if ( FSUtility__IsUnderVista((const MethodInfo *)v8) )
      return size_16_9;
    else
      return size_21_9;
  }
  else
  {
    width = UnityEngine_Screen__get_width(0);
    height = UnityEngine_Screen__get_height(0);
    v13 = (float)width / (float)height;
    v14 = 2.3333;
    if ( v13 <= 2.3333 )
      v14 = (float)width / (float)height;
    v15 = (float)(v14 + -1.7778) / 0.55556;
    if ( v13 >= 1.7778 )
      v16 = v15;
    else
      v16 = 0.0;
    v17 = v16 * (float)(size_21_9 - size_16_9);
    if ( !byte_596A15B )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A15B = 1;
    }
    v18 = v17 + (float)size_16_9;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
    v19 = vcvtps_s32_f32(v18);
    if ( ceilf(v18) == INFINITY )
      return 0x80000000;
    else
      return v19;
  }
}


void FSWidgetSize__SetSize(FSWidgetSize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x4
  __int64 Size; // x0
  __int64 v8; // x1
  FSWidgetSize_o *v9; // x0
  const MethodInfo *v10; // x4
  int32_t v11; // w1

  if ( (byte_59722B4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722B4 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v5 )
  {
    Size = FSWidgetSize__GetSize(
             (FSWidgetSize_o *)v5,
             this->fields.size_16_9.fields.m_X,
             this->fields.size_21_9.fields.m_X,
             this->fields.fixWidth,
             v6);
    if ( !Component_object )
      sub_2213CDC(Size, v8);
    UIWidget__set_width((UIWidget_o *)Component_object, Size, 0);
    v11 = FSWidgetSize__GetSize(
            v9,
            this->fields.size_16_9.fields.m_Y,
            this->fields.size_21_9.fields.m_Y,
            this->fields.fixHeight,
            v10);
    UIWidget__set_height((UIWidget_o *)Component_object, v11, 0);
  }
}