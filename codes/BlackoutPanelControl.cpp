void BlackoutPanelControl___ctor(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C221E3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C221E3 = 1;
  }
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434(&this->fields.eventName);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BlackoutPanelControl__Hide(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void BlackoutPanelControl__SetBlackoutText(
        BlackoutPanelControl_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UILabel_o *blackoutLabel; // x0

  blackoutLabel = this->fields.blackoutLabel;
  if ( !blackoutLabel )
    sub_1C2D6EC(0, message);
  UILabel__set_text(blackoutLabel, message, 0);
}


void BlackoutPanelControl__SetEventName(
        BlackoutPanelControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  this->fields.eventName = eventName;
  sub_1C2D434(&this->fields.eventName);
}


void BlackoutPanelControl__SetTextCenter(
        BlackoutPanelControl_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Component_o *blackoutLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x21

  blackoutLabel = (UnityEngine_Component_o *)this->fields.blackoutLabel;
  if ( !blackoutLabel )
    goto LABEL_7;
  gameObject = UnityEngine_Component__get_gameObject(blackoutLabel, 0);
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  blackoutLabel = (UnityEngine_Component_o *)this->fields.blackoutLabel;
  if ( !blackoutLabel
    || (UILabel__set_alignment((UILabel_o *)blackoutLabel, 2, 0),
        (blackoutLabel = (UnityEngine_Component_o *)this->fields.blackoutLabel) == 0) )
  {
LABEL_7:
    sub_1C2D6EC(blackoutLabel, message);
  }
  UILabel__set_text((UILabel_o *)blackoutLabel, message, 0);
}


void BlackoutPanelControl__Show(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}