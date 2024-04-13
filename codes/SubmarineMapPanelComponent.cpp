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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._OnClickPanel_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SubmarineMapPanelComponent__OnPanelFadeOutFinished(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  UIWidget_o *Component_UIWidget; // x0
  __int64 v6; // x1

  if ( (byte_42E7B8D & 1) == 0 )
  {
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7B8D = 1;
  }
  SubmarineMapPanelComponent__SetClosedPanelVisible(this, 0, v2);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         this->fields.closedPanel,
                         (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_UIWidget )
    sub_B5D69C(0LL, v6);
  TweenAlpha__set_value((TweenAlpha_o *)Component_UIWidget, 1.0, 0LL);
}


void __fastcall SubmarineMapPanelComponent__SetClosedPanelTexture(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        UnityEngine_Texture2D_o *texture,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_GameObject_o *closedPanel; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  float X_k__BackingField; // s8
  int v13; // w22
  int v14; // w0
  int v15; // w9
  float Y_k__BackingField; // s9
  float v17; // s8
  int v18; // w22
  int v19; // w0
  int v20; // w9
  float Width_k__BackingField; // s10
  float v22; // s9
  int v23; // w0
  float Height_k__BackingField; // s11
  int v25; // w21
  int v26; // w0
  float v27; // s4
  float v28; // s5
  float v29; // s6
  float v30; // s7
  MethodInfo v31; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Rect_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7B8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, (_DWORD)objDomain, (_DWORD)texture, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E7B8B = 1;
  }
  v31.methodPointer = 0LL;
  v31.invoker_method = 0LL;
  closedPanel = this->fields.closedPanel;
  if ( !closedPanel )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      closedPanel,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
      v13 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
              texture,
              texture->klass->vtable._5_set_width.methodPtr);
      v14 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
              texture,
              texture->klass->vtable._5_set_width.methodPtr);
      v15 = v13 >= 0 ? v13 : v13 + 1;
      Y_k__BackingField = objDomain->fields._Y_k__BackingField;
      v17 = (float)(X_k__BackingField + (float)(v15 >> 1)) / (float)v14;
      v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
              texture,
              texture->klass->vtable._7_set_height.methodPtr);
      v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
              texture,
              texture->klass->vtable._7_set_height.methodPtr);
      v20 = v18 >= 0 ? v18 : v18 + 1;
      Width_k__BackingField = objDomain->fields._Width_k__BackingField;
      v22 = (float)(Y_k__BackingField + (float)(v20 >> 1)) / (float)v19;
      v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
              texture,
              texture->klass->vtable._5_set_width.methodPtr);
      Height_k__BackingField = objDomain->fields._Height_k__BackingField;
      v25 = v23;
      v26 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
              texture,
              texture->klass->vtable._7_set_height.methodPtr);
      v32.fields.m_Width = Width_k__BackingField / (float)v25;
      v32.fields.m_Height = Height_k__BackingField / (float)v26;
      v32.fields.m_XMin = v17;
      v32.fields.m_YMin = v22;
      UnityEngine_Rect___ctor(v32, v27, v28, v29, v30, &v31);
      if ( Component_srcLineSprite )
      {
        *(_QWORD *)&v33.fields.m_Width = v31.invoker_method;
        *(_QWORD *)&v33.fields.m_XMin = v31.methodPointer;
        UITexture__set_uvRect((UITexture_o *)Component_srcLineSprite, v33, 0LL);
        ((void (__fastcall *)(UnityEngine_Object_o *, UnityEngine_Texture2D_o *, const char *))Component_srcLineSprite->klass[2]._1.gc_desc)(
          Component_srcLineSprite,
          texture,
          Component_srcLineSprite->klass[2]._1.name);
        return;
      }
    }
LABEL_19:
    sub_B5D69C(closedPanel, objDomain);
  }
}


void __fastcall SubmarineMapPanelComponent__SetClosedPanelVisible(
        SubmarineMapPanelComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *closedPanel; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42E7B89 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, (_DWORD)method, v3);
    byte_42E7B89 = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0LL, 0LL) )
  {
    v8 = this->fields.closedPanel;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, value, 0LL);
  }
}


void __fastcall SubmarineMapPanelComponent__SetSize(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        const MethodInfo *method)
{
  if ( !objDomain )
    sub_B5D69C(this, 0LL);
  SubmarineMapPanelComponent__SetSize_23647036(
    this,
    objDomain->fields._Width_k__BackingField,
    objDomain->fields._Height_k__BackingField,
    (const MethodInfo *)objDomain);
}


void __fastcall SubmarineMapPanelComponent__SetSize_23647036(
        SubmarineMapPanelComponent_o *this,
        float width,
        float height,
        const MethodInfo *method)
{
  int v4; // w2
  __int64 v5; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  double v15; // d0
  double v16; // d0

  if ( (byte_42E7B8A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, (_DWORD)method, v4, v5);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E7B8A = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v13 )
  {
    if ( !Component_WebViewObject )
      sub_B5D69C(v13, v14);
    v15 = width;
    if ( width == INFINITY )
      v15 = -width;
    UIWidget__set_width((UIWidget_o *)Component_WebViewObject, (int)v15, 0LL);
    v16 = height;
    if ( height == INFINITY )
      v16 = -v16;
    UIWidget__set_height((UIWidget_o *)Component_WebViewObject, (int)v16, 0LL);
  }
}


void __fastcall SubmarineMapPanelComponent__ShowOpenPanelAnim(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UIWidget_o *Component_UIWidget; // x0
  __int64 v18; // x1
  UITweener_o *v19; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onFinished; // x20
  EventDelegate_Callback_o *v21; // x21
  EventDelegate_o *v22; // x19

  if ( (byte_42E7B8C & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__, v14, v15, v16);
    byte_42E7B8C = 1;
  }
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         this->fields.closedPanel,
                         (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_UIWidget )
    goto LABEL_6;
  v19 = (UITweener_o *)Component_UIWidget;
  *(_QWORD *)&Component_UIWidget->fields.mRootSet = 1065353216LL;
  LODWORD(Component_UIWidget->fields.topAnchor) = 1056964608;
  UITweener__ResetToBeginning((UITweener_o *)Component_UIWidget, 0LL);
  UITweener__PlayForward(v19, 0LL);
  onFinished = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19->fields.onFinished;
  v21 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v21,
    (Il2CppObject *)this,
    Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__,
    0LL);
  v22 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
  EventDelegate___ctor_29822308(v22, v21, 0LL);
  if ( !onFinished )
LABEL_6:
    sub_B5D69C(Component_UIWidget, v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    onFinished,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickPanel_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}