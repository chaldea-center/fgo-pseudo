void __fastcall FlashingIconComponent___ctor(FlashingIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall FlashingIconComponent__Awake(FlashingIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    sub_B5D69C(0LL, method);
  UnityEngine_Behaviour__set_enabled(widget, 0, 0LL);
}


void __fastcall FlashingIconComponent__Clear(FlashingIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Behaviour_o *widget; // x0
  UnityEngine_Object_o *Instance; // x20
  const MethodInfo *v10; // x2

  if ( (byte_42E69EE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v5, v6, v7);
    byte_42E69EE = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_13;
  if ( UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(widget, 0, 0LL);
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__RemoveIcon((FlashingIconManager_o *)widget, this, v10);
        return;
      }
LABEL_13:
      sub_B5D69C(widget, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Behaviour_o *widget; // x0
  UnityEngine_Object_o *Instance; // x20
  const MethodInfo *v10; // x3

  if ( (byte_42E69EF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v5, v6, v7);
    byte_42E69EF = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_13;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(widget, 1, 0LL);
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__AddIcon((FlashingIconManager_o *)widget, this, 0, 0.0, v10);
        return;
      }
LABEL_13:
      sub_B5D69C(widget, method);
    }
  }
}


void __fastcall FlashingIconComponent__SetFast(FlashingIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Behaviour_o *widget; // x0
  UnityEngine_Object_o *Instance; // x20
  const MethodInfo *v10; // x3

  if ( (byte_42E69F1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v5, v6, v7);
    byte_42E69F1 = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_13;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(widget, 1, 0LL);
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__AddIcon((FlashingIconManager_o *)widget, this, 1, 0.0, v10);
        return;
      }
LABEL_13:
      sub_B5D69C(widget, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FlashingIconComponent__SetFast_21674932(
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
void __fastcall FlashingIconComponent__Set_21625204(
        FlashingIconComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  if ( isDisp )
    FlashingIconComponent__Set(this, (const MethodInfo *)isDisp);
  else
    FlashingIconComponent__Clear(this, (const MethodInfo *)isDisp);
}


void __fastcall FlashingIconComponent__Set_21674436(
        FlashingIconComponent_o *this,
        float cycleTime,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Behaviour_o *widget; // x0
  UnityEngine_Object_o *Instance; // x20
  const MethodInfo *v12; // x3

  if ( (byte_42E69F0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v7, v8, v9);
    byte_42E69F0 = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_13;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( !widget )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled(widget, 1, 0LL);
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      widget = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
      if ( widget )
      {
        FlashingIconManager__AddIcon((FlashingIconManager_o *)widget, this, 0, cycleTime, v12);
        return;
      }
LABEL_13:
      sub_B5D69C(widget, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FlashingIconComponent__UpdateIcon(FlashingIconComponent_o *this, float alpha, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  long double v5; // q8
  UnityEngine_Object_o *widget; // x20
  __int64 v8; // x1
  struct UIWidget_o *v10; // x0

  v5 = *(long double *)&alpha;
  if ( (byte_42E69F2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E69F2 = 1;
  }
  widget = (UnityEngine_Object_o *)this->fields.widget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(widget, 0LL, 0LL) )
    return 0;
  v10 = this->fields.widget;
  if ( !v10 )
    sub_B5D69C(0LL, v8);
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v10->klass->vtable._8_set_alpha.method)(
    v10,
    v10->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    v5);
  return 1;
}