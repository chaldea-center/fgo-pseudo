void __fastcall SwitchUIWidgetComponent___ctor(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SwitchUIWidgetComponent__Clear(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.componentList = 0LL;
  sub_B5D560(&this->fields.componentList);
  SwitchUIWidgetComponent__ClearParam(this, v3);
}


void __fastcall SwitchUIWidgetComponent__ClearParam(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
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
    sub_B5D69C(0LL, v6);
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return 0;
  SwitchUIWidgetComponent__Set_19906500(this, count, v7);
  return 1;
}


void __fastcall SwitchUIWidgetComponent__Set(
        SwitchUIWidgetComponent_o *this,
        UIWidget_array *componentList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct UIWidget_array **p_componentList; // x0
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_42E5B05 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__,
      (_DWORD)componentList,
      (_DWORD)method,
      v3);
    byte_42E5B05 = 1;
  }
  p_componentList = &this->fields.componentList;
  if ( componentList )
  {
    *p_componentList = componentList;
    sub_B5D560(p_componentList);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(
            (SwitchParameterDisplayManager_o *)Instance,
            (SwitchParameterDisplayComponent_o *)this,
            v9),
          (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
    {
      sub_B5D69C(Instance, v8);
    }
    SwitchUIWidgetComponent__Set_19906500(this, (int32_t)Instance->fields.webViewBase, v10);
  }
  else
  {
    this->fields.componentList = 0LL;
    sub_B5D560(p_componentList);
    SwitchUIWidgetComponent__ClearParam(this, v11);
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
    sub_B5D69C(0LL, method);
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
  SwitchUIWidgetComponent_o *v5; // x19
  __int64 v6; // x0

  componentList = this->fields.componentList;
  if ( !componentList )
    goto LABEL_5;
  if ( componentList->max_length <= num )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  v4 = componentList->m_Items[num];
  v5 = this;
  this = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
LABEL_5:
    sub_B5D69C(this, *(_QWORD *)&num);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v5->fields.component = v4;
  sub_B5D560(&v5->fields.component);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SwitchUIWidgetComponent__Set_19906500(
        SwitchUIWidgetComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct UIWidget_array *componentList; // x8
  __int64 v7; // x8
  __int64 v8; // x1
  float *component; // x0
  int v10; // w20
  struct UIWidget_o *v11; // x8
  struct UIWidget_array *v12; // x8
  unsigned __int64 v13; // x21
  unsigned __int64 max_length; // x9
  __int64 v15; // x0

  if ( (byte_42E5B06 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, count, (_DWORD)method, v3);
    byte_42E5B06 = 1;
  }
  componentList = this->fields.componentList;
  if ( componentList && (v7 = *(_QWORD *)&componentList->max_length) != 0 )
  {
    if ( (_DWORD)v7 == 1 )
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
      sub_B5D69C(component, v8);
    }
    v10 = count % (int)v7;
    SwitchUIWidgetComponent__SetParam(this, v10, method);
    component = (float *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !component )
      goto LABEL_19;
    v11 = this->fields.component;
    if ( !v11 )
      goto LABEL_19;
    component = (float *)((__int64 (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v11->klass->vtable._8_set_alpha.method)(
                           this->fields.component,
                           v11->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                           component[11]);
    v12 = this->fields.componentList;
    if ( !v12 )
      goto LABEL_19;
    v13 = 0LL;
    while ( 1 )
    {
      max_length = v12->max_length;
      if ( (__int64)v13 >= (int)max_length )
        break;
      if ( v10 != v13 )
      {
        if ( v13 >= max_length )
        {
          v15 = sub_B5D6C8(component);
          sub_B5D668(v15, 0LL);
        }
        component = (float *)v12->m_Items[v13];
        if ( !component )
          goto LABEL_19;
        component = (float *)(*(__int64 (__fastcall **)(float *, _QWORD, float))(*(_QWORD *)component + 440LL))(
                               component,
                               *(_QWORD *)(*(_QWORD *)component + 448LL),
                               0.0);
        v12 = this->fields.componentList;
      }
      ++v13;
      if ( !v12 )
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
      sub_B5D69C(0LL, method);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))component->klass->vtable._8_set_alpha.method)(
      component,
      component->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      *(long double *)&alpha);
  }
  return 1;
}