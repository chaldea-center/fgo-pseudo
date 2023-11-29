void __fastcall SwitchUIWidgetComponent___ctor(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SwitchUIWidgetComponent__Clear(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.componentList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.componentList, 0LL, v2, v3, v4, v5, v6, v7);
  SwitchUIWidgetComponent__ClearParam(this, v9);
}


void __fastcall SwitchUIWidgetComponent__ClearParam(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall SwitchUIWidgetComponent__OnDestroy(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall SwitchUIWidgetComponent__ParameterChange(
        SwitchUIWidgetComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return 0;
  SwitchUIWidgetComponent__Set_31555476(this, count, v6);
  return 1;
}


void __fastcall SwitchUIWidgetComponent__Set(
        SwitchUIWidgetComponent_o *this,
        UIWidget_array *componentList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_componentList; // x0
  SwitchParameterDisplayManager_o *Instance; // x0
  const MethodInfo *v12; // x2
  WebViewManager_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1

  if ( (byte_40FD691 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, componentList);
    byte_40FD691 = 1;
  }
  p_componentList = (BattleServantConfConponent_o *)&this->fields.componentList;
  if ( componentList )
  {
    p_componentList->klass = (BattleServantConfConponent_c *)componentList;
    sub_B16F98(
      p_componentList,
      (System_Int32_array **)componentList,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(Instance, (SwitchParameterDisplayComponent_o *)this, v12),
          (v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
    {
      sub_B170D4();
    }
    SwitchUIWidgetComponent__Set_31555476(this, (int32_t)v13->fields.webViewBase, v14);
  }
  else
  {
    this->fields.componentList = 0LL;
    sub_B16F98(p_componentList, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SwitchUIWidgetComponent__ClearParam(this, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SwitchUIWidgetComponent__SetAlpha(
        SwitchUIWidgetComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct UIWidget_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B170D4();
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))component->klass->vtable._8_set_alpha.method)(
    component,
    component->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    *(long double *)&alpha);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SwitchUIWidgetComponent__SetParam(
        SwitchUIWidgetComponent_o *this,
        int32_t num,
        const MethodInfo *method)
{
  struct UIWidget_array *componentList; // x8
  struct UIWidget_o *v4; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  componentList = this->fields.componentList;
  if ( !componentList )
    goto LABEL_5;
  if ( componentList->max_length <= num )
  {
    sub_B17100(this, *(_QWORD *)&num, method);
    sub_B170A0();
  }
  v4 = componentList->m_Items[num];
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_5:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.component = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.component,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SwitchUIWidgetComponent__Set_31555476(
        SwitchUIWidgetComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  struct UIWidget_array *componentList; // x8
  __int64 v6; // x8
  struct UIWidget_o *component; // x0
  int v8; // w20
  WebViewManager_o *Instance; // x0
  struct UIWidget_o *v10; // x8
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UIWidget_array *v14; // x8
  unsigned __int64 v15; // x21
  unsigned __int64 max_length; // x9
  UIWidget_o *v17; // x0

  if ( (byte_40FD692 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, *(_QWORD *)&count);
    byte_40FD692 = 1;
  }
  componentList = this->fields.componentList;
  if ( componentList && (v6 = *(_QWORD *)&componentList->max_length) != 0 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      SwitchUIWidgetComponent__SetParam(this, 0, method);
      component = this->fields.component;
      if ( component )
      {
        ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))component->klass->vtable._8_set_alpha.method)(
          component,
          component->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0);
        return;
      }
LABEL_19:
      sub_B170D4();
    }
    v8 = count % (int)v6;
    SwitchUIWidgetComponent__SetParam(this, v8, method);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    v10 = this->fields.component;
    if ( !v10 )
      goto LABEL_19;
    v11 = ((__int64 (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v10->klass->vtable._8_set_alpha.method)(
            this->fields.component,
            v10->klass->vtable._9_CalculateFinalAlpha.methodPtr,
            *((float *)&Instance->fields.webViewBase + 1));
    v14 = this->fields.componentList;
    if ( !v14 )
      goto LABEL_19;
    v15 = 0LL;
    while ( 1 )
    {
      max_length = v14->max_length;
      if ( (__int64)v15 >= (int)max_length )
        break;
      if ( v8 != v15 )
      {
        if ( v15 >= max_length )
        {
          sub_B17100(v11, v12, v13);
          sub_B170A0();
        }
        v17 = v14->m_Items[v15];
        if ( !v17 )
          goto LABEL_19;
        v11 = ((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer, float))v17->klass->vtable._8_set_alpha.method)(
                v17,
                v17->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                0.0);
        v14 = this->fields.componentList;
      }
      ++v15;
      if ( !v14 )
        goto LABEL_19;
    }
  }
  else
  {
    SwitchUIWidgetComponent__ClearParam(this, *(const MethodInfo **)&count);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SwitchUIWidgetComponent__UpdateAlpha(
        SwitchUIWidgetComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct UIWidget_array *componentList; // x8
  struct UIWidget_o *component; // x0

  componentList = this->fields.componentList;
  if ( componentList && (int)componentList->max_length >= 2 )
  {
    component = this->fields.component;
    if ( !component )
      sub_B170D4();
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))component->klass->vtable._8_set_alpha.method)(
      component,
      component->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      *(long double *)&alpha);
  }
  return 1;
}