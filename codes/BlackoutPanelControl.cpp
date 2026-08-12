void BlackoutPanelControl___ctor(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596B435 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B435 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BlackoutPanelControl__Hide(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
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
    sub_2213CDC(0, message);
  UILabel__set_text(blackoutLabel, message, 0);
}


void BlackoutPanelControl__SetEventName(
        BlackoutPanelControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.eventName = eventName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventName,
    (int32_t)eventName,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  blackoutLabel = (UnityEngine_Component_o *)this->fields.blackoutLabel;
  if ( !blackoutLabel
    || (UILabel__set_alignment((UILabel_o *)blackoutLabel, 2, 0),
        (blackoutLabel = (UnityEngine_Component_o *)this->fields.blackoutLabel) == 0) )
  {
LABEL_7:
    sub_2213CDC(blackoutLabel, message);
  }
  UILabel__set_text((UILabel_o *)blackoutLabel, message, 0);
}


void BlackoutPanelControl__Show(BlackoutPanelControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}