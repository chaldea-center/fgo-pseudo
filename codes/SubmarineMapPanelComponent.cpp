void __fastcall SubmarineMapPanelComponent___ctor(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SubmarineMapPanelComponent__ClickPanel(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  System_Action_o *OnClickPanel_k__BackingField; // x0

  OnClickPanel_k__BackingField = this->fields._OnClickPanel_k__BackingField;
  if ( OnClickPanel_k__BackingField )
    ActionExtensions__Call(OnClickPanel_k__BackingField, 0LL);
}


void __fastcall SubmarineMapPanelComponent__Initialize(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickPanel_k__BackingField = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields._OnClickPanel_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SubmarineMapPanelComponent__OnPanelFadeOutFinished(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UIWidget_o *Component_UIWidget; // x0
  __int64 v5; // x1

  if ( (byte_438A612 & 1) == 0 )
  {
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_438A612 = 1;
  }
  SubmarineMapPanelComponent__SetClosedPanelVisible(this, 0, v2);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         this->fields.closedPanel,
                         (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_UIWidget )
    sub_B7769C(0LL, v5);
  TweenAlpha__set_value((TweenAlpha_o *)Component_UIWidget, 1.0, 0LL);
}


void __fastcall SubmarineMapPanelComponent__SetClosedPanelTexture(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        UnityEngine_Texture2D_o *texture,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *closedPanel; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  float X_k__BackingField; // s8
  int v10; // w22
  int v11; // w0
  int v12; // w9
  float Y_k__BackingField; // s9
  float v14; // s8
  int v15; // w22
  int v16; // w0
  int v17; // w9
  float Width_k__BackingField; // s10
  float v19; // s9
  int v20; // w0
  float Height_k__BackingField; // s11
  int v22; // w21
  int v23; // w0
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  MethodInfo v28; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Rect_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438A610 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A610 = 1;
  }
  v28.methodPointer = 0LL;
  v28.invoker_method = 0LL;
  closedPanel = this->fields.closedPanel;
  if ( !closedPanel )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      closedPanel,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  closedPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)closedPanel & 1) == 0 )
  {
    if ( objDomain && texture )
    {
      X_k__BackingField = objDomain->fields._X_k__BackingField;
      v10 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
              texture,
              texture->klass->vtable._5_set_width.methodPtr);
      v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
              texture,
              texture->klass->vtable._5_set_width.methodPtr);
      v12 = v10 >= 0 ? v10 : v10 + 1;
      Y_k__BackingField = objDomain->fields._Y_k__BackingField;
      v14 = (float)(X_k__BackingField + (float)(v12 >> 1)) / (float)v11;
      v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
              texture,
              texture->klass->vtable._7_set_height.methodPtr);
      v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
              texture,
              texture->klass->vtable._7_set_height.methodPtr);
      v17 = v15 >= 0 ? v15 : v15 + 1;
      Width_k__BackingField = objDomain->fields._Width_k__BackingField;
      v19 = (float)(Y_k__BackingField + (float)(v17 >> 1)) / (float)v16;
      v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
              texture,
              texture->klass->vtable._5_set_width.methodPtr);
      Height_k__BackingField = objDomain->fields._Height_k__BackingField;
      v22 = v20;
      v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
              texture,
              texture->klass->vtable._7_set_height.methodPtr);
      v29.fields.m_Width = Width_k__BackingField / (float)v22;
      v29.fields.m_Height = Height_k__BackingField / (float)v23;
      v29.fields.m_XMin = v14;
      v29.fields.m_YMin = v19;
      UnityEngine_Rect___ctor(v29, v24, v25, v26, v27, &v28);
      if ( Component_srcLineSprite )
      {
        *(_QWORD *)&v30.fields.m_Width = v28.invoker_method;
        *(_QWORD *)&v30.fields.m_XMin = v28.methodPointer;
        UITexture__set_uvRect((UITexture_o *)Component_srcLineSprite, v30, 0LL);
        ((void (__fastcall *)(UnityEngine_Object_o *, UnityEngine_Texture2D_o *, const char *))Component_srcLineSprite->klass[2]._1.gc_desc)(
          Component_srcLineSprite,
          texture,
          Component_srcLineSprite->klass[2]._1.name);
        return;
      }
    }
LABEL_19:
    sub_B7769C(closedPanel, objDomain);
  }
}


void __fastcall SubmarineMapPanelComponent__SetClosedPanelVisible(
        SubmarineMapPanelComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closedPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_438A60E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A60E = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0LL, 0LL) )
  {
    v7 = this->fields.closedPanel;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, value, 0LL);
  }
}


void __fastcall SubmarineMapPanelComponent__SetSize(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        const MethodInfo *method)
{
  if ( !objDomain )
    sub_B7769C(this, 0LL);
  SubmarineMapPanelComponent__SetSize_23983424(
    this,
    objDomain->fields._Width_k__BackingField,
    objDomain->fields._Height_k__BackingField,
    (const MethodInfo *)objDomain);
}


void __fastcall SubmarineMapPanelComponent__SetSize_23983424(
        SubmarineMapPanelComponent_o *this,
        float width,
        float height,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  double v10; // d0
  double v11; // d0

  if ( (byte_438A60F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A60F = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v8 )
  {
    if ( !Component_WebViewObject )
      sub_B7769C(v8, v9);
    v10 = width;
    if ( width == INFINITY )
      v10 = -width;
    UIWidget__set_width((UIWidget_o *)Component_WebViewObject, (int)v10, 0LL);
    v11 = height;
    if ( height == INFINITY )
      v11 = -v11;
    UIWidget__set_height((UIWidget_o *)Component_WebViewObject, (int)v11, 0LL);
  }
}


void __fastcall SubmarineMapPanelComponent__ShowOpenPanelAnim(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  UIWidget_o *Component_UIWidget; // x0
  __int64 v4; // x1
  UITweener_o *v5; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onFinished; // x20
  EventDelegate_Callback_o *v7; // x21
  EventDelegate_o *v8; // x19

  if ( (byte_438A611 & 1) == 0 )
  {
    sub_B775C4(&EventDelegate_Callback_TypeInfo);
    sub_B775C4(&EventDelegate_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B775C4(&Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__);
    byte_438A611 = 1;
  }
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         this->fields.closedPanel,
                         (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_UIWidget )
    goto LABEL_6;
  v5 = (UITweener_o *)Component_UIWidget;
  *(_QWORD *)&Component_UIWidget->fields.mRootSet = 1065353216LL;
  LODWORD(Component_UIWidget->fields.topAnchor) = 1056964608;
  UITweener__ResetToBeginning((UITweener_o *)Component_UIWidget, 0LL);
  UITweener__PlayForward(v5, 0LL);
  onFinished = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.onFinished;
  v7 = (EventDelegate_Callback_o *)sub_B77694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__,
    0LL);
  v8 = (EventDelegate_o *)sub_B77694(EventDelegate_TypeInfo);
  EventDelegate___ctor_30345520(v8, v7, 0LL);
  if ( !onFinished )
LABEL_6:
    sub_B7769C(Component_UIWidget, v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    onFinished,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
}


System_Action_o *__fastcall SubmarineMapPanelComponent__get_OnClickPanel(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickPanel_k__BackingField;
}


void __fastcall SubmarineMapPanelComponent__set_OnClickPanel(
        SubmarineMapPanelComponent_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickPanel_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._OnClickPanel_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}