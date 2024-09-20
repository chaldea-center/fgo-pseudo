void __fastcall BlackoutPanelControl___ctor(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  void *v3; // x1

  if ( (byte_4A5665C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5665C = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(&this->fields.eventName, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlackoutPanelControl__Hide(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
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
    sub_1B8880C(0LL, message);
  UILabel__set_text(blackoutLabel, message, 0LL);
}


void __fastcall BlackoutPanelControl__SetEventName(
        BlackoutPanelControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  this->fields.eventName = eventName;
  sub_1B88554(&this->fields.eventName, eventName);
}


void __fastcall BlackoutPanelControl__Show(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}