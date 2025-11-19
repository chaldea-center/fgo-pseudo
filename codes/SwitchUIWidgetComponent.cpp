void SwitchUIWidgetComponent___ctor(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  this->fields._Alpha_k__BackingField = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SwitchUIWidgetComponent__Clear(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields.isEnableSingle = 0;
  this->fields.componentList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.componentList, 0, v2, v3);
  SwitchUIWidgetComponent__ClearParam(this, v5);
}


void SwitchUIWidgetComponent__ClearParam(SwitchUIWidgetComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v3);
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
    sub_1C6BC60(0, v6);
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0);
  if ( activeSelf )
    SwitchUIWidgetComponent__Set_41364988(this, count, v7);
  return activeSelf;
}


void SwitchUIWidgetComponent__Set(
        SwitchUIWidgetComponent_o *this,
        UIWidget_array *componentList,
        bool isEnableSingleFade,
        const MethodInfo *method)
{
  bool v6; // w21
  SwitchParameterDisplayManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  v6 = isEnableSingleFade;
  if ( (byte_4CB5877 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4CB5877 = 1;
  }
  this->fields.isEnableSingle = v6;
  if ( componentList )
  {
    this->fields.componentList = componentList;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.componentList,
      (int32_t)componentList,
      isEnableSingleFade,
      method);
    Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(Instance, (SwitchParameterDisplayComponent_o *)this, 0),
          (Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0) )
    {
      sub_1C6BC60(Instance, v8);
    }
    SwitchUIWidgetComponent__Set_41364988(this, Instance->fields.count, v9);
  }
  else
  {
    this->fields.isEnableSingle = 0;
    this->fields.componentList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.componentList, 0, isEnableSingleFade, method);
    SwitchUIWidgetComponent__ClearParam(this, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void SwitchUIWidgetComponent__SetAlpha(SwitchUIWidgetComponent_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *component; // x20
  __int64 v6; // x1
  struct UIWidget_o *v7; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_4CB5879 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5879 = 1;
  }
  this->fields._Alpha_k__BackingField = *(float *)&v3;
  component = (UnityEngine_Object_o *)this->fields.component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(component, 0, 0) )
  {
    v7 = this->fields.component;
    if ( !v7 )
      sub_1C6BC60(0, v6);
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, long double))v7->klass->vtable._8_set_alpha.methodPtr)(
      v7,
      v7->klass->vtable._8_set_alpha.method,
      v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void SwitchUIWidgetComponent__SetParam(SwitchUIWidgetComponent_o *this, int32_t num, const MethodInfo *method)
{
  struct UIWidget_array *componentList; // x8
  struct UIWidget_o *v4; // x20
  SwitchUIWidgetComponent_o *v5; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  componentList = this->fields.componentList;
  if ( !componentList )
    goto LABEL_5;
  if ( LODWORD(componentList->max_length) <= num )
    sub_1C6BC68(this);
  v4 = componentList->m_Items[num];
  v5 = this;
  this = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, *(_QWORD *)&num);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v5->fields.component = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.component, (int32_t)v4, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void SwitchUIWidgetComponent__Set_41364988(SwitchUIWidgetComponent_o *this, int32_t count, const MethodInfo *method)
{
  struct UIWidget_array *componentList; // x8
  il2cpp_array_size_t v6; // x8
  int32_t v7; // w20
  float *Instance; // x0
  const MethodInfo *v9; // x1
  struct UIWidget_array *v10; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v12; // x21
  const MethodInfo *v13; // x1

  if ( (byte_4CB5878 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4CB5878 = 1;
  }
  componentList = this->fields.componentList;
  if ( componentList && (v6 = componentList->max_length) != 0 )
  {
    if ( (_DWORD)v6 == 1 && !this->fields.isEnableSingle )
    {
      SwitchUIWidgetComponent__SetParam(this, 0, method);
      SwitchUIWidgetComponent__SetAlpha(this, 1.0, v13);
    }
    else
    {
      v7 = count % (int)v6;
      SwitchUIWidgetComponent__SetParam(this, v7, method);
      Instance = (float *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      SwitchUIWidgetComponent__SetAlpha(this, Instance[13], v9);
      v10 = this->fields.componentList;
      if ( !v10 )
        goto LABEL_19;
      max_length = v10->max_length;
      if ( (int)max_length >= 2 )
      {
        v12 = 0;
        while ( 1 )
        {
          if ( v7 != v12 )
          {
            if ( v12 >= (unsigned int)max_length )
              sub_1C6BC68(Instance);
            Instance = (float *)v10->m_Items[v12];
            if ( !Instance )
              break;
            Instance = (float *)(*(__int64 (__fastcall **)(float *, _QWORD, float))(*(_QWORD *)Instance + 440LL))(
                                  Instance,
                                  *(_QWORD *)(*(_QWORD *)Instance + 448LL),
                                  0.0);
            v10 = this->fields.componentList;
            if ( !v10 )
              break;
          }
          LODWORD(max_length) = v10->max_length;
          if ( (__int64)++v12 >= (int)max_length )
            return;
        }
LABEL_19:
        sub_1C6BC60(Instance, v9);
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