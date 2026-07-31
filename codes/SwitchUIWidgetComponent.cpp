void SwitchUIWidgetComponent___ctor(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  this->fields._Alpha_k__BackingField = 1.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SwitchUIWidgetComponent__Clear(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields.isEnableSingle = 0;
  this->fields.componentList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.componentList, 0, v2, v3, v4, v5, v6, v7);
  SwitchUIWidgetComponent__ClearParam(this, v9);
}


void SwitchUIWidgetComponent__ClearParam(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void SwitchUIWidgetComponent__OnDestroy(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  ;
}


bool SwitchUIWidgetComponent__ParameterChange(SwitchUIWidgetComponent_o *this, int32_t count, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool activeSelf; // w21

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v6);
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0);
  if ( activeSelf )
    SwitchUIWidgetComponent__Set_48061448(this, count, v7);
  return activeSelf;
}


// local variable allocation has failed, the output may be wrong!
void SwitchUIWidgetComponent__Set(
        SwitchUIWidgetComponent_o *this,
        UIWidget_array *componentList,
        bool isEnableSingleFade,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  bool v10; // w21
  SwitchParameterDisplayManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1

  v10 = isEnableSingleFade;
  if ( (byte_5937C03 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_5937C03 = 1;
  }
  this->fields.isEnableSingle = v10;
  if ( componentList )
  {
    this->fields.componentList = componentList;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.componentList,
      (int32_t)componentList,
      (System_String_o *)isEnableSingleFade,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(Instance, (SwitchParameterDisplayComponent_o *)this, 0),
          (Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0) )
    {
      sub_21FFECC(Instance, v12);
    }
    SwitchUIWidgetComponent__Set_48061448(this, Instance->fields.count, v13);
  }
  else
  {
    this->fields.isEnableSingle = 0;
    this->fields.componentList = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.componentList,
      0,
      (System_String_o *)isEnableSingleFade,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    SwitchUIWidgetComponent__ClearParam(this, v14);
  }
}


void SwitchUIWidgetComponent__SetAlpha(SwitchUIWidgetComponent_o *this, float alpha, const MethodInfo *method)
{
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *component; // x20
  __int64 v7; // x1
  struct UIWidget_o *v8; // x0

  if ( (byte_5937C05 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937C05 = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  component = (UnityEngine_Object_o *)this->fields.component;
  this->fields._Alpha_k__BackingField = alpha;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, method);
  if ( !UnityEngine_Object__op_Equality(component, 0, 0) )
  {
    v8 = this->fields.component;
    if ( !v8 )
      sub_21FFECC(0, v7);
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))v8->klass->vtable._8_set_alpha.methodPtr)(
      v8,
      v8->klass->vtable._8_set_alpha.method,
      alpha);
  }
}


// local variable allocation has failed, the output may be wrong!
void SwitchUIWidgetComponent__SetParam(SwitchUIWidgetComponent_o *this, int32_t num, const MethodInfo *method)
{
  struct UIWidget_array *componentList; // x8
  SwitchUIWidgetComponent_o *v4; // x19
  struct UIWidget_o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  componentList = this->fields.componentList;
  if ( !componentList )
    goto LABEL_5;
  if ( LODWORD(componentList->max_length) <= num )
    sub_21FFED4(this);
  v4 = this;
  v5 = componentList->m_Items[num];
  this = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&num);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v4->fields.component = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.component, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void SwitchUIWidgetComponent__Set_48061448(SwitchUIWidgetComponent_o *this, int32_t count, const MethodInfo *method)
{
  struct UIWidget_array *componentList; // x8
  il2cpp_array_size_t max_length; // x8
  __int64 v7; // x20
  float *Instance; // x0
  const MethodInfo *v9; // x1
  struct UIWidget_array *v10; // x8
  unsigned __int64 v11; // x21
  unsigned __int64 max_length_low; // x9
  const MethodInfo *v13; // x1

  if ( (byte_5937C04 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_5937C04 = 1;
  }
  componentList = this->fields.componentList;
  if ( componentList && (max_length = componentList->max_length) != 0 )
  {
    if ( (_DWORD)max_length == 1 && !this->fields.isEnableSingle )
    {
      SwitchUIWidgetComponent__SetParam(this, 0, method);
      SwitchUIWidgetComponent__SetAlpha(this, 1.0, v13);
    }
    else
    {
      v7 = (unsigned int)(count % (int)max_length);
      SwitchUIWidgetComponent__SetParam(this, v7, method);
      Instance = (float *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( !Instance
        || (SwitchUIWidgetComponent__SetAlpha(this, Instance[13], v9), (v10 = this->fields.componentList) == 0) )
      {
LABEL_17:
        sub_21FFECC(Instance, v9);
      }
      if ( SLODWORD(v10->max_length) >= 2 )
      {
        v11 = 0;
        while ( 1 )
        {
          max_length_low = LODWORD(v10->max_length);
          if ( (__int64)v11 >= (int)max_length_low )
            break;
          if ( v7 != v11 )
          {
            if ( v11 >= max_length_low )
              sub_21FFED4(Instance);
            Instance = (float *)v10->m_Items[v11];
            if ( !Instance )
              goto LABEL_17;
            Instance = (float *)(*(__int64 (__fastcall **)(float *, _QWORD, double))(*(_QWORD *)Instance + 440LL))(
                                  Instance,
                                  *(_QWORD *)(*(_QWORD *)Instance + 448LL),
                                  0.0);
            v10 = this->fields.componentList;
          }
          ++v11;
          if ( !v10 )
            goto LABEL_17;
        }
      }
    }
  }
  else
  {
    SwitchUIWidgetComponent__ClearParam(this, *(const MethodInfo **)&count);
  }
}


bool SwitchUIWidgetComponent__UpdateAlpha(SwitchUIWidgetComponent_o *this, float alpha, const MethodInfo *method)
{
  struct UIWidget_array *componentList; // x8

  componentList = this->fields.componentList;
  if ( componentList && (SLODWORD(componentList->max_length) > 1 || this->fields.isEnableSingle) )
    SwitchUIWidgetComponent__SetAlpha(this, alpha, method);
  return 1;
}


float SwitchUIWidgetComponent__get_Alpha(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  return this->fields._Alpha_k__BackingField;
}


void SwitchUIWidgetComponent__set_Alpha(SwitchUIWidgetComponent_o *this, float value, const MethodInfo *method)
{
  this->fields._Alpha_k__BackingField = value;
}