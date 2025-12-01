void FlashingIconComponent___ctor(FlashingIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void FlashingIconComponent__Awake(FlashingIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    sub_1C71608(0, method);
  UnityEngine_Behaviour__set_enabled(widget, 0, 0);
}


void FlashingIconComponent__Clear(FlashingIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4CC67D9 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    byte_4CC67D9 = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled(widget, 0) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_12;
    UnityEngine_Behaviour__set_enabled(widget, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__RemoveIcon((FlashingIconManager_o *)widget, this, 0);
        return;
      }
LABEL_12:
      sub_1C71608(widget, method);
    }
  }
}


// attributes: thunk
void FlashingIconComponent__OnDestroy(FlashingIconComponent_o *this, const MethodInfo *method)
{
  FlashingIconComponent__Clear(this, method);
}


void FlashingIconComponent__Set(FlashingIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4CC67DA & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    byte_4CC67DA = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_12;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_12;
    UnityEngine_Behaviour__set_enabled(widget, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__AddIcon((FlashingIconManager_o *)widget, this, 0, 0.0, 0);
        return;
      }
LABEL_12:
      sub_1C71608(widget, method);
    }
  }
}


void FlashingIconComponent__SetFast(FlashingIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4CC67DC & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    byte_4CC67DC = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_12;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_12;
    UnityEngine_Behaviour__set_enabled(widget, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__AddIcon((FlashingIconManager_o *)widget, this, 1, 0.0, 0);
        return;
      }
LABEL_12:
      sub_1C71608(widget, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void FlashingIconComponent__SetFast_41175888(FlashingIconComponent_o *this, bool isDisp, const MethodInfo *method)
{
  if ( isDisp )
    FlashingIconComponent__SetFast(this, (const MethodInfo *)isDisp);
  else
    FlashingIconComponent__Clear(this, (const MethodInfo *)isDisp);
}


// local variable allocation has failed, the output may be wrong!
void FlashingIconComponent__Set_41175420(FlashingIconComponent_o *this, bool isDisp, const MethodInfo *method)
{
  if ( isDisp )
    FlashingIconComponent__Set(this, (const MethodInfo *)isDisp);
  else
    FlashingIconComponent__Clear(this, (const MethodInfo *)isDisp);
}


void FlashingIconComponent__Set_41175432(FlashingIconComponent_o *this, float cycleTime, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4CC67DB & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    byte_4CC67DB = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_12;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_12;
    UnityEngine_Behaviour__set_enabled(widget, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__AddIcon((FlashingIconManager_o *)widget, this, 0, cycleTime, 0);
        return;
      }
LABEL_12:
      sub_1C71608(widget, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool FlashingIconComponent__UpdateIcon(FlashingIconComponent_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *widget; // x20
  __int64 v6; // x1
  bool v7; // w20
  struct UIWidget_o *v8; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_4CC67DD & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC67DD = 1;
  }
  widget = (UnityEngine_Object_o *)this->fields.widget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(widget, 0, 0);
  if ( !v7 )
  {
    v8 = this->fields.widget;
    if ( !v8 )
      sub_1C71608(0, v6);
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, long double))v8->klass->vtable._8_set_alpha.methodPtr)(
      v8,
      v8->klass->vtable._8_set_alpha.method,
      v3);
  }
  return !v7;
}