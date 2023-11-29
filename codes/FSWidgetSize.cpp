void __fastcall FSWidgetSize___ctor(FSWidgetSize_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.size_16_9.fields.m_Y = 0LL;
  *(_QWORD *)&this->fields.size_21_9.fields.m_Y = 0LL;
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
  int32_t height; // w0
  float v12; // s0

  if ( (byte_40F9F90 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, *(_QWORD *)&size_16_9);
    byte_40F9F90 = 1;
  }
  if ( fix )
  {
    v8 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( FSUtility__IsUnderVista((const MethodInfo *)v8) )
      return size_16_9;
    else
      return size_21_9;
  }
  else
  {
    width = UnityEngine_Screen__get_width(0LL);
    height = UnityEngine_Screen__get_height(0LL);
    v12 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
    return UnityEngine_Mathf__CeilToInt(
             (float)((float)((float)(v12 + -1.7778) / 0.55556) * (float)(size_21_9 - size_16_9)) + (float)size_16_9,
             0LL);
  }
}


void __fastcall FSWidgetSize__SetSize(FSWidgetSize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x4
  int32_t Size; // w0
  FSWidgetSize_o *v8; // x0
  const MethodInfo *v9; // x4
  int32_t v10; // w1

  if ( (byte_40F9F8F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9F8F = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v5 )
  {
    Size = FSWidgetSize__GetSize(
             (FSWidgetSize_o *)v5,
             this->fields.size_16_9.fields.m_Y,
             this->fields.size_21_9.fields.m_Y,
             (bool)this[1].klass,
             v6);
    if ( !Component_WebViewObject )
      sub_B170D4();
    UIWidget__set_width((UIWidget_o *)Component_WebViewObject, Size, 0LL);
    v10 = FSWidgetSize__GetSize(
            v8,
            this->fields.size_21_9.fields.m_X,
            *(_DWORD *)&this->fields.fixWidth,
            BYTE1(this[1].klass),
            v9);
    UIWidget__set_height((UIWidget_o *)Component_WebViewObject, v10, 0LL);
  }
}