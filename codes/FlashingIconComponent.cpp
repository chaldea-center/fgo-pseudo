void __fastcall FlashingIconComponent___ctor(FlashingIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall FlashingIconComponent__Awake(FlashingIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    sub_B170D4();
  UnityEngine_Behaviour__set_enabled(widget, 0, 0LL);
}


void __fastcall FlashingIconComponent__Clear(FlashingIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *widget; // x0
  UnityEngine_Behaviour_o *v5; // x0
  UnityEngine_Object_o *Instance; // x20
  FlashingIconManager_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_40F8EA9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v3);
    byte_40F8EA9 = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_13;
  if ( UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !v5 )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(v5, 0, 0LL);
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v7 = (FlashingIconManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( v7 )
      {
        FlashingIconManager__RemoveIcon(v7, this, v8);
        return;
      }
LABEL_13:
      sub_B170D4();
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
  UnityEngine_Behaviour_o *v5; // x0
  UnityEngine_Object_o *Instance; // x20
  FlashingIconManager_o *v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_40F8EAA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v3);
    byte_40F8EAA = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_13;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !v5 )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v7 = (FlashingIconManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( v7 )
      {
        FlashingIconManager__AddIcon(v7, this, 0, 0.0, v8);
        return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
}


void __fastcall FlashingIconComponent__SetFast(FlashingIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *widget; // x0
  UnityEngine_Behaviour_o *v5; // x0
  UnityEngine_Object_o *Instance; // x20
  FlashingIconManager_o *v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_40F8EAC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v3);
    byte_40F8EAC = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_13;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !v5 )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v7 = (FlashingIconManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( v7 )
      {
        FlashingIconManager__AddIcon(v7, this, 1, 0.0, v8);
        return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FlashingIconComponent__SetFast_23223104(
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
void __fastcall FlashingIconComponent__Set_23222596(
        FlashingIconComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  if ( isDisp )
    FlashingIconComponent__Set(this, (const MethodInfo *)isDisp);
  else
    FlashingIconComponent__Clear(this, (const MethodInfo *)isDisp);
}


void __fastcall FlashingIconComponent__Set_23222608(
        FlashingIconComponent_o *this,
        float cycleTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *widget; // x0
  UnityEngine_Behaviour_o *v7; // x0
  UnityEngine_Object_o *Instance; // x20
  FlashingIconManager_o *v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_40F8EAB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v5);
    byte_40F8EAB = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_13;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !v7 )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v9 = (FlashingIconManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( v9 )
      {
        FlashingIconManager__AddIcon(v9, this, 0, cycleTime, v10);
        return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FlashingIconComponent__UpdateIcon(FlashingIconComponent_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *widget; // x20
  struct UIWidget_o *v7; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_40F8EAD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8EAD = 1;
  }
  widget = (UnityEngine_Object_o *)this->fields.widget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(widget, 0LL, 0LL) )
    return 0;
  v7 = this->fields.widget;
  if ( !v7 )
    sub_B170D4();
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v7->klass->vtable._8_set_alpha.method)(
    v7,
    v7->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    v3);
  return 1;
}