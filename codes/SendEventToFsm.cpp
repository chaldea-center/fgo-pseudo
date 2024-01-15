void __fastcall SendEventToFsm___ctor(SendEventToFsm_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40F93CB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21031/*"none"*/, method);
    byte_40F93CB = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_21031/*"none"*/;
  this->fields.sendEvent = (struct System_String_o *)StringLiteral_21031/*"none"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.sendEvent, v9, v2, v3, v4, v5, v6, v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SendEventToFsm__OnClick(SendEventToFsm_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) && !this->fields.trigger )
    SendEventToFsm__Send(this, v3);
}


void __fastcall SendEventToFsm__OnDoubleClick(SendEventToFsm_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) && this->fields.trigger == 5 )
    SendEventToFsm__Send(this, v3);
}


void __fastcall SendEventToFsm__OnEnable(SendEventToFsm_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w1
  const MethodInfo *v5; // x2

  if ( (byte_40F93C8 & 1) == 0 )
  {
    sub_B16FFC(&UICamera_TypeInfo, method);
    byte_40F93C8 = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0LL);
    SendEventToFsm__OnHover(this, IsHighlighted, v5);
  }
}


void __fastcall SendEventToFsm__OnHover(SendEventToFsm_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t trigger; // w8

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    trigger = this->fields.trigger;
    if ( isOver )
    {
      if ( trigger != 1 )
        return;
LABEL_6:
      SendEventToFsm__Send(this, v5);
      return;
    }
    if ( trigger == 2 )
      goto LABEL_6;
  }
}


void __fastcall SendEventToFsm__OnPress(SendEventToFsm_o *this, bool isPressed, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t trigger; // w8

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    trigger = this->fields.trigger;
    if ( isPressed )
    {
      if ( trigger != 3 )
        return;
LABEL_6:
      SendEventToFsm__Send(this, v5);
      return;
    }
    if ( trigger == 4 )
      goto LABEL_6;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SendEventToFsm__OnSelect(SendEventToFsm_o *this, bool isSelected, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UICamera_c *v6; // x0

  if ( (byte_40F93C9 & 1) == 0 )
  {
    sub_B16FFC(&UICamera_TypeInfo, isSelected);
    byte_40F93C9 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    if ( !isSelected )
      goto LABEL_9;
    v6 = UICamera_TypeInfo;
    if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v6 = UICamera_TypeInfo;
    }
    if ( v6->static_fields->currentScheme == 2 )
LABEL_9:
      SendEventToFsm__OnHover(this, isSelected, v5);
  }
}


void __fastcall SendEventToFsm__Send(SendEventToFsm_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x20
  PlayMakerFSM_o *v4; // x0

  if ( (byte_40F93CA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F93CA = 1;
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetFSM, 0LL, 0LL) )
  {
    v4 = this->fields.targetFSM;
    if ( !v4 )
      sub_B170D4();
    PlayMakerFSM__SendEvent(v4, this->fields.sendEvent, 0LL);
  }
}


void __fastcall SendEventToFsm__Start(SendEventToFsm_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 1;
}