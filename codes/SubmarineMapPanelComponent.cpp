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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields._OnClickPanel_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SubmarineMapPanelComponent__OnPanelFadeOutFinished(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UIWidget_o *Component_UIWidget; // x0

  if ( (byte_421364A & 1) == 0 )
  {
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method);
    byte_421364A = 1;
  }
  SubmarineMapPanelComponent__SetClosedPanelVisible(this, 0, v2);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         this->fields.closedPanel,
                         (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_UIWidget )
    sub_B0D97C(0LL);
  TweenAlpha__set_value((TweenAlpha_o *)Component_UIWidget, 1.0, 0LL);
}


void __fastcall SubmarineMapPanelComponent__SetClosedPanelTexture(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        UnityEngine_Texture2D_o *texture,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *closedPanel; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  float X_k__BackingField; // s8
  int v11; // w22
  int v12; // w0
  int v13; // w9
  float Y_k__BackingField; // s9
  float v15; // s8
  int v16; // w22
  int v17; // w0
  int v18; // w9
  float Width_k__BackingField; // s10
  float v20; // s9
  int v21; // w0
  float Height_k__BackingField; // s11
  int v23; // w21
  int v24; // w0
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float v28; // s7
  MethodInfo v29; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Rect_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4213648 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, objDomain);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4213648 = 1;
  }
  v29.methodPointer = 0LL;
  v29.invoker_method = 0LL;
  closedPanel = this->fields.closedPanel;
  if ( !closedPanel )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      closedPanel,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
      v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
              texture,
              texture->klass->vtable._5_set_width.methodPtr);
      v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
              texture,
              texture->klass->vtable._5_set_width.methodPtr);
      v13 = v11 >= 0 ? v11 : v11 + 1;
      Y_k__BackingField = objDomain->fields._Y_k__BackingField;
      v15 = (float)(X_k__BackingField + (float)(v13 >> 1)) / (float)v12;
      v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
              texture,
              texture->klass->vtable._7_set_height.methodPtr);
      v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
              texture,
              texture->klass->vtable._7_set_height.methodPtr);
      v18 = v16 >= 0 ? v16 : v16 + 1;
      Width_k__BackingField = objDomain->fields._Width_k__BackingField;
      v20 = (float)(Y_k__BackingField + (float)(v18 >> 1)) / (float)v17;
      v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
              texture,
              texture->klass->vtable._5_set_width.methodPtr);
      Height_k__BackingField = objDomain->fields._Height_k__BackingField;
      v23 = v21;
      v24 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
              texture,
              texture->klass->vtable._7_set_height.methodPtr);
      v30.fields.m_Width = Width_k__BackingField / (float)v23;
      v30.fields.m_Height = Height_k__BackingField / (float)v24;
      v30.fields.m_XMin = v15;
      v30.fields.m_YMin = v20;
      UnityEngine_Rect___ctor(v30, v25, v26, v27, v28, &v29);
      if ( Component_srcLineSprite )
      {
        *(_QWORD *)&v31.fields.m_Width = v29.invoker_method;
        *(_QWORD *)&v31.fields.m_XMin = v29.methodPointer;
        UITexture__set_uvRect((UITexture_o *)Component_srcLineSprite, v31, 0LL);
        ((void (__fastcall *)(UnityEngine_Object_o *, UnityEngine_Texture2D_o *, const char *))Component_srcLineSprite->klass[2]._1.gc_desc)(
          Component_srcLineSprite,
          texture,
          Component_srcLineSprite->klass[2]._1.name);
        return;
      }
    }
LABEL_19:
    sub_B0D97C(closedPanel);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapPanelComponent__SetClosedPanelVisible(
        SubmarineMapPanelComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closedPanel; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4213646 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, value);
    byte_4213646 = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0LL, 0LL) )
  {
    v6 = this->fields.closedPanel;
    if ( !v6 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v6, value, 0LL);
  }
}


void __fastcall SubmarineMapPanelComponent__SetSize(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        const MethodInfo *method)
{
  if ( !objDomain )
    sub_B0D97C(this);
  SubmarineMapPanelComponent__SetSize_22341440(
    this,
    objDomain->fields._Width_k__BackingField,
    objDomain->fields._Height_k__BackingField,
    (const MethodInfo *)objDomain);
}


void __fastcall SubmarineMapPanelComponent__SetSize_22341440(
        SubmarineMapPanelComponent_o *this,
        float width,
        float height,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x19
  _BOOL8 v9; // x0
  double v10; // d0
  double v11; // d0

  if ( (byte_4213647 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4213647 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v9 )
  {
    if ( !Component_WebViewObject )
      sub_B0D97C(v9);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UIWidget_o *Component_UIWidget; // x0
  UITweener_o *v8; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onFinished; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  EventDelegate_Callback_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  EventDelegate_o *v15; // x19

  if ( (byte_4213649 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&EventDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_B0D8A4(&Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__, v6);
    byte_4213649 = 1;
  }
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         this->fields.closedPanel,
                         (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_UIWidget )
    goto LABEL_6;
  v8 = (UITweener_o *)Component_UIWidget;
  *(_QWORD *)&Component_UIWidget->fields.mRootSet = 1065353216LL;
  LODWORD(Component_UIWidget->fields.topAnchor) = 1056964608;
  UITweener__ResetToBeginning((UITweener_o *)Component_UIWidget, 0LL);
  UITweener__PlayForward(v8, 0LL);
  onFinished = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v8->fields.onFinished;
  v12 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v10, v11);
  EventDelegate_Callback___ctor(
    v12,
    (Il2CppObject *)this,
    Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__,
    0LL);
  v15 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v13, v14);
  EventDelegate___ctor_28889248(v15, v12, 0LL);
  if ( !onFinished )
LABEL_6:
    sub_B0D97C(Component_UIWidget);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    onFinished,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._OnClickPanel_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}