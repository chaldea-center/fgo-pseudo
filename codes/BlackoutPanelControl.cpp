void __fastcall BlackoutPanelControl___ctor(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B3FA64 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B3FA64 = 1;
  }
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C(&this->fields.eventName);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlackoutPanelControl__Hide(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v3);
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
    sub_1BDBAD4(0LL, message);
  UILabel__set_text(blackoutLabel, message, 0LL);
}


void __fastcall BlackoutPanelControl__SetEventName(
        BlackoutPanelControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  this->fields.eventName = eventName;
  sub_1BDB81C(&this->fields.eventName);
}


void __fastcall BlackoutPanelControl__SetTextCenter(
        BlackoutPanelControl_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Component_o *blackoutLabel; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x21

  blackoutLabel = (UnityEngine_Component_o *)this->fields.blackoutLabel;
  if ( !blackoutLabel )
    goto LABEL_7;
  gameObject = UnityEngine_Component__get_gameObject(blackoutLabel, 0LL);
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4B3E911 = 1;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  blackoutLabel = (UnityEngine_Component_o *)this->fields.blackoutLabel;
  if ( !blackoutLabel
    || (UILabel__set_alignment((UILabel_o *)blackoutLabel, 2, 0LL),
        (blackoutLabel = (UnityEngine_Component_o *)this->fields.blackoutLabel) == 0LL) )
  {
LABEL_7:
    sub_1BDBAD4(blackoutLabel, message);
  }
  UILabel__set_text((UILabel_o *)blackoutLabel, message, 0LL);
}


void __fastcall BlackoutPanelControl__Show(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}