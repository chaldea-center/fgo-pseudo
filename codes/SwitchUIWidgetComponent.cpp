void __fastcall SwitchUIWidgetComponent___ctor(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SwitchUIWidgetComponent__Clear(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  const MethodInfo *v5; // x1

  this->fields.componentList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.componentList, 0, v2, v3);
  SwitchUIWidgetComponent__ClearParam(this, v5);
}


void __fastcall SwitchUIWidgetComponent__ClearParam(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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
  bool activeSelf; // w21

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( activeSelf )
    SwitchUIWidgetComponent__Set_37944920(this, count, v6);
  return activeSelf;
}


void __fastcall SwitchUIWidgetComponent__Set(
        SwitchUIWidgetComponent_o *this,
        UIWidget_array *componentList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_componentList; // x0
  SwitchParameterDisplayManager_o *Instance; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  if ( (byte_49FB9E1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, componentList);
    byte_49FB9E1 = 1;
  }
  p_componentList = (ServantStatusBattleListViewItem_o *)&this->fields.componentList;
  if ( componentList )
  {
    p_componentList->klass = (ServantStatusBattleListViewItem_c *)componentList;
    sub_1B6406C(p_componentList, (int32_t)componentList, (int32_t)method, v3);
    Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(Instance, (SwitchParameterDisplayComponent_o *)this, 0LL),
          (Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
    {
      sub_1B64324(Instance);
    }
    SwitchUIWidgetComponent__Set_37944920(this, Instance->fields.count, v8);
  }
  else
  {
    this->fields.componentList = 0LL;
    sub_1B6406C(p_componentList, 0, (int32_t)method, v3);
    SwitchUIWidgetComponent__ClearParam(this, v9);
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
    sub_1B64324(0LL);
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
  int32_t v6; // w2
  int32_t v7; // w3

  componentList = this->fields.componentList;
  if ( !componentList )
    goto LABEL_5;
  if ( componentList->max_length <= num )
    sub_1B6432C(this, *(_QWORD *)&num);
  v4 = componentList->m_Items[num];
  v5 = this;
  this = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
LABEL_5:
    sub_1B64324(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v5->fields.component = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.component, (int32_t)v4, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SwitchUIWidgetComponent__Set_37944920(
        SwitchUIWidgetComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  struct UIWidget_array *componentList; // x8
  __int64 v6; // x8
  float *component; // x0
  int v8; // w20
  struct UIWidget_o *v9; // x8
  __int64 v10; // x1
  struct UIWidget_array *v11; // x8
  unsigned __int64 v12; // x21
  unsigned __int64 max_length; // x9

  if ( (byte_49FB9E2 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, *(_QWORD *)&count);
    byte_49FB9E2 = 1;
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
      sub_1B64324(component);
    }
    v8 = count % (int)v6;
    SwitchUIWidgetComponent__SetParam(this, v8, method);
    component = (float *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !component )
      goto LABEL_19;
    v9 = this->fields.component;
    if ( !v9 )
      goto LABEL_19;
    component = (float *)((__int64 (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v9->klass->vtable._8_set_alpha.method)(
                           this->fields.component,
                           v9->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                           component[13]);
    v11 = this->fields.componentList;
    if ( !v11 )
      goto LABEL_19;
    v12 = 0LL;
    while ( 1 )
    {
      max_length = v11->max_length;
      if ( (__int64)v12 >= (int)max_length )
        break;
      if ( v8 != v12 )
      {
        if ( v12 >= max_length )
          sub_1B6432C(component, v10);
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
      sub_1B64324(0LL);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))component->klass->vtable._8_set_alpha.method)(
      component,
      component->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      *(long double *)&alpha);
  }
  return 1;
}