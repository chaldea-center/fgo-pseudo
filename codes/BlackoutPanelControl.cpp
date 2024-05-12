void __fastcall BlackoutPanelControl___ctor(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_438A987 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438A987 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.eventName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlackoutPanelControl__Hide(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall BlackoutPanelControl__SetBlackoutText(
        BlackoutPanelControl_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UILabel_o *blackoutLabel; // x0

  blackoutLabel = this->fields.blackoutLabel;
  if ( !blackoutLabel )
    sub_B7769C(0LL, message);
  UILabel__set_text(blackoutLabel, message, 0LL);
}


void __fastcall BlackoutPanelControl__SetEventName(
        BlackoutPanelControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventName = eventName;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventName,
    (System_Int32_array **)eventName,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BlackoutPanelControl__Show(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}