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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.componentList, 0LL, v2, v3, v4, v5, v6, v7);
  SwitchUIWidgetComponent__ClearParam(this, v9);
}


void __fastcall SwitchUIWidgetComponent__ClearParam(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v6);
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return 0;
  SwitchUIWidgetComponent__Set_31534784(this, count, v7);
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
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1

  if ( (byte_418B207 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, componentList);
    byte_418B207 = 1;
  }
  p_componentList = (BattleServantConfConponent_o *)&this->fields.componentList;
  if ( componentList )
  {
    p_componentList->klass = (BattleServantConfConponent_c *)componentList;
    sub_B2C2F8(
      p_componentList,
      (System_Int32_array **)componentList,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(
            (SwitchParameterDisplayManager_o *)Instance,
            (SwitchParameterDisplayComponent_o *)this,
            v13),
          (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
    {
      sub_B2C434(Instance, v12);
    }
    SwitchUIWidgetComponent__Set_31534784(this, (int32_t)Instance->fields.webViewBase, v14);
  }
  else
  {
    this->fields.componentList = 0LL;
    sub_B2C2F8(p_componentList, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C434(0LL, method);
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
  System_Int32_array **v4; // x20
  SwitchUIWidgetComponent_o *v5; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x0

  componentList = this->fields.componentList;
  if ( !componentList )
    goto LABEL_5;
  if ( componentList->max_length <= num )
  {
    v12 = sub_B2C460(this);
    sub_B2C400(v12, 0LL);
  }
  v4 = (System_Int32_array **)componentList->m_Items[num];
  v5 = this;
  this = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
LABEL_5:
    sub_B2C434(this, *(_QWORD *)&num);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v5->fields.component = (struct UIWidget_o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->fields.component, v4, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SwitchUIWidgetComponent__Set_31534784(
        SwitchUIWidgetComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  struct UIWidget_array *componentList; // x8
  __int64 v6; // x8
  __int64 v7; // x1
  float *component; // x0
  int v9; // w20
  struct UIWidget_o *v10; // x8
  struct UIWidget_array *v11; // x8
  unsigned __int64 v12; // x21
  unsigned __int64 max_length; // x9
  __int64 v14; // x0

  if ( (byte_418B208 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, *(_QWORD *)&count);
    byte_418B208 = 1;
  }
  componentList = this->fields.componentList;
  if ( componentList && (v6 = *(_QWORD *)&componentList->max_length) != 0 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      SwitchUIWidgetComponent__SetParam(this, 0, method);
      component = (float *)this->fields.component;
      if ( component )
      {
        (*(void (__fastcall **)(float *, _QWORD, float))(*(_QWORD *)component + 440LL))(
          component,
          *(_QWORD *)(*(_QWORD *)component + 448LL),
          1.0);
        return;
      }
LABEL_19:
      sub_B2C434(component, v7);
    }
    v9 = count % (int)v6;
    SwitchUIWidgetComponent__SetParam(this, v9, method);
    component = (float *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !component )
      goto LABEL_19;
    v10 = this->fields.component;
    if ( !v10 )
      goto LABEL_19;
    component = (float *)((__int64 (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v10->klass->vtable._8_set_alpha.method)(
                           this->fields.component,
                           v10->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                           component[11]);
    v11 = this->fields.componentList;
    if ( !v11 )
      goto LABEL_19;
    v12 = 0LL;
    while ( 1 )
    {
      max_length = v11->max_length;
      if ( (__int64)v12 >= (int)max_length )
        break;
      if ( v9 != v12 )
      {
        if ( v12 >= max_length )
        {
          v14 = sub_B2C460(component);
          sub_B2C400(v14, 0LL);
        }
        component = (float *)v11->m_Items[v12];
        if ( !component )
          goto LABEL_19;
        component = (float *)(*(__int64 (__fastcall **)(float *, _QWORD, float))(*(_QWORD *)component + 440LL))(
                               component,
                               *(_QWORD *)(*(_QWORD *)component + 448LL),
                               0.0);
        v11 = this->fields.componentList;
      }
      ++v12;
      if ( !v11 )
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
      sub_B2C434(0LL, method);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))component->klass->vtable._8_set_alpha.method)(
      component,
      component->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      *(long double *)&alpha);
  }
  return 1;
}