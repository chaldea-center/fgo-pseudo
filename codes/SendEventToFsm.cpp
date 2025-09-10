void SendEventToFsm___ctor(SendEventToFsm_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C26776 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22250/*"none"*/);
    byte_4C26776 = 1;
  }
  v5 = StringLiteral_22250/*"none"*/;
  this->fields.sendEvent = (struct System_String_o *)StringLiteral_22250/*"none"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sendEvent, v5, v2, v3);
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
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w1
  const MethodInfo *v5; // x2

  if ( (byte_4C26773 & 1) == 0 )
  {
    sub_1C2D490(&UICamera_TypeInfo);
    byte_4C26773 = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    SendEventToFsm__OnHover(this, IsHighlighted, v5);
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
  const MethodInfo *v5; // x2
  UICamera_c *v6; // x0

  if ( (byte_4C26774 & 1) == 0 )
  {
    sub_1C2D490(&UICamera_TypeInfo);
    byte_4C26774 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v6 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v6 = UICamera_TypeInfo;
    }
    if ( v6->static_fields->currentScheme == 2 )
LABEL_8:
      SendEventToFsm__OnHover(this, isSelected, v5);
  }
}


void SendEventToFsm__Send(SendEventToFsm_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x20
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x0

  if ( (byte_4C26775 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C26775 = 1;
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetFSM, 0, 0) )
  {
    v5 = this->fields.targetFSM;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
    PlayMakerFSM__SendEvent(v5, this->fields.sendEvent, 0);
  }
}


void SendEventToFsm__Start(SendEventToFsm_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 1;
}