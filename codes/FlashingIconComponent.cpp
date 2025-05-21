void __fastcall FlashingIconComponent___ctor(FlashingIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall FlashingIconComponent__Awake(FlashingIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    sub_1BDBAD4(0LL, method);
  UnityEngine_Behaviour__set_enabled(widget, 0, 0LL);
}


void __fastcall FlashingIconComponent__Clear(FlashingIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *widget; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4B43EC1 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v3);
    byte_4B43EC1 = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_12;
  if ( UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_12;
    UnityEngine_Behaviour__set_enabled(widget, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__RemoveIcon((FlashingIconManager_o *)widget, this, 0LL);
        return;
      }
LABEL_12:
      sub_1BDBAD4(widget, method);
    }
  }
}


// attributes: thunk
void __fastcall FlashingIconComponent__OnDestroy(FlashingIconComponent_o *this, const MethodInfo *method)
{
  FlashingIconComponent__Clear(this, method);
}


void __fastcall FlashingIconComponent__Set(FlashingIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *widget; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4B43EC2 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v3);
    byte_4B43EC2 = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_12;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_12;
    UnityEngine_Behaviour__set_enabled(widget, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__AddIcon((FlashingIconManager_o *)widget, this, 0, 0.0, 0LL);
        return;
      }
LABEL_12:
      sub_1BDBAD4(widget, method);
    }
  }
}


void __fastcall FlashingIconComponent__SetFast(FlashingIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *widget; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4B43EC4 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v3);
    byte_4B43EC4 = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_12;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_12;
    UnityEngine_Behaviour__set_enabled(widget, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__AddIcon((FlashingIconManager_o *)widget, this, 1, 0.0, 0LL);
        return;
      }
LABEL_12:
      sub_1BDBAD4(widget, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FlashingIconComponent__SetFast_39914376(
        FlashingIconComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  if ( isDisp )
    FlashingIconComponent__SetFast(this, (const MethodInfo *)isDisp);
  else
    FlashingIconComponent__Clear(this, (const MethodInfo *)isDisp);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FlashingIconComponent__Set_39913908(
        FlashingIconComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  if ( isDisp )
    FlashingIconComponent__Set(this, (const MethodInfo *)isDisp);
  else
    FlashingIconComponent__Clear(this, (const MethodInfo *)isDisp);
}


void __fastcall FlashingIconComponent__Set_39913920(
        FlashingIconComponent_o *this,
        float cycleTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *widget; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4B43EC3 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v5);
    byte_4B43EC3 = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_12;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_12;
    UnityEngine_Behaviour__set_enabled(widget, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__AddIcon((FlashingIconManager_o *)widget, this, 0, cycleTime, 0LL);
        return;
      }
LABEL_12:
      sub_1BDBAD4(widget, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FlashingIconComponent__UpdateIcon(FlashingIconComponent_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *widget; // x20
  __int64 v6; // x1
  bool v7; // w20
  struct UIWidget_o *v8; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_4B43EC5 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B43EC5 = 1;
  }
  widget = (UnityEngine_Object_o *)this->fields.widget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(widget, 0LL, 0LL);
  if ( !v7 )
  {
    v8 = this->fields.widget;
    if ( !v8 )
      sub_1BDBAD4(0LL, v6);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v8->klass->vtable._8_set_alpha.method)(
      v8,
      v8->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
  return !v7;
}