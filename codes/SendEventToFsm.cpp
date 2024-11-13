void __fastcall SendEventToFsm___ctor(SendEventToFsm_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B1570E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22352/*"none"*/, method, v2);
    byte_4B1570E = 1;
  }
  v9 = StringLiteral_22352/*"none"*/;
  this->fields.sendEvent = (struct System_String_o *)StringLiteral_22352/*"none"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sendEvent, v9, v2, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w1
  const MethodInfo *v7; // x2

  if ( (byte_4B1570B & 1) == 0 )
  {
    sub_1BCA7E0(&UICamera_TypeInfo, method, v2);
    byte_4B1570B = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v4);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0LL);
    SendEventToFsm__OnHover(this, IsHighlighted, v7);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UICamera_c *v7; // x0

  if ( (byte_4B1570C & 1) == 0 )
  {
    sub_1BCA7E0(&UICamera_TypeInfo, isSelected, method);
    byte_4B1570C = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v7 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v7 = UICamera_TypeInfo;
    }
    if ( v7->static_fields->currentScheme == 2 )
LABEL_8:
      SendEventToFsm__OnHover(this, isSelected, v6);
  }
}


void __fastcall SendEventToFsm__Send(SendEventToFsm_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetFSM; // x20
  __int64 v5; // x1
  PlayMakerFSM_o *v6; // x0

  if ( (byte_4B1570D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1570D = 1;
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetFSM, 0LL, 0LL) )
  {
    v6 = this->fields.targetFSM;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    PlayMakerFSM__SendEvent(v6, this->fields.sendEvent, 0LL);
  }
}


void __fastcall SendEventToFsm__Start(SendEventToFsm_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 1;
}