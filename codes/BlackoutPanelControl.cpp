void __fastcall BlackoutPanelControl___ctor(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *v4; // x1

  if ( (byte_4B1157E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1157E = 1;
  }
  v4 = StringLiteral_1/*""*/;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.eventName, v4);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlackoutPanelControl__Hide(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
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
    sub_1BCAA3C(0LL, message);
  UILabel__set_text(blackoutLabel, message, 0LL);
}


void __fastcall BlackoutPanelControl__SetEventName(
        BlackoutPanelControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  this->fields.eventName = eventName;
  sub_1BCA784(&this->fields.eventName, eventName);
}


void __fastcall BlackoutPanelControl__Show(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}