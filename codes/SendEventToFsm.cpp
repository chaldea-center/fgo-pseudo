void SendEventToFsm___ctor(SendEventToFsm_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_5937B6D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23350/*"none"*/);
    byte_5937B6D = 1;
  }
  v9 = StringLiteral_23350/*"none"*/;
  this->fields.sendEvent = (struct System_String_o *)StringLiteral_23350/*"none"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sendEvent, v9, v2, v3, v4, v5, v6, v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SendEventToFsm__OnClick(SendEventToFsm_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && !this->fields.trigger )
    SendEventToFsm__Send(this, v3);
}


void SendEventToFsm__OnDoubleClick(SendEventToFsm_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && this->fields.trigger == 5 )
    SendEventToFsm__Send(this, v3);
}


void SendEventToFsm__OnEnable(SendEventToFsm_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w8
  const MethodInfo *v6; // x2

  if ( (byte_5937B6A & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    byte_5937B6A = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    SendEventToFsm__OnHover(this, IsHighlighted, v6);
  }
}


void SendEventToFsm__OnHover(SendEventToFsm_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t trigger; // w8

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
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


void SendEventToFsm__OnPress(SendEventToFsm_o *this, bool isPressed, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t trigger; // w8

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
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


void SendEventToFsm__OnSelect(SendEventToFsm_o *this, bool isSelected, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UICamera_c *v7; // x0

  if ( (byte_5937B6B & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    byte_5937B6B = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v7 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v7 = UICamera_TypeInfo;
    }
    if ( v7->static_fields->currentScheme == 2 )
LABEL_8:
      SendEventToFsm__OnHover(this, isSelected, v6);
  }
}


void SendEventToFsm__Send(SendEventToFsm_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x20
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x0

  if ( (byte_5937B6C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B6C = 1;
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetFSM, 0, 0) )
  {
    v5 = this->fields.targetFSM;
    if ( !v5 )
      sub_21FFECC(0, v4);
    PlayMakerFSM__SendEvent(v5, this->fields.sendEvent, 0);
  }
}


void SendEventToFsm__Start(SendEventToFsm_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 1;
}