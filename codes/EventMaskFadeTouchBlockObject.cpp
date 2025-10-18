void EventMaskFadeTouchBlockObject___ctor(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventMaskFadeTouchBlockObject__OnClickObject(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  struct System_Action_o *onClickCallback; // x8
  CGThumbnailListItem_o *p_onClickCallback; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  p_onClickCallback = (CGThumbnailListItem_o *)&this->fields.onClickCallback;
  onClickCallback = this->fields.onClickCallback;
  if ( onClickCallback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))onClickCallback->fields.invoke_impl)(
      onClickCallback->fields.method_code,
      onClickCallback->fields.method);
    p_onClickCallback->klass = 0;
    sub_1C36FFC(p_onClickCallback, 0, v4, v5);
  }
}


void EventMaskFadeTouchBlockObject__RemoveCallback(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_onClickCallback; // x19
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (CGThumbnailListItem_o *)&this->fields.onClickCallback;
    if ( onClickCallback )
    {
      p_onClickCallback->klass = 0;
      sub_1C36FFC(p_onClickCallback, 0, v3, v4);
    }
  }
}


void EventMaskFadeTouchBlockObject__SetCallback(
        EventMaskFadeTouchBlockObject_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_onClickCallback; // x20
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (CGThumbnailListItem_o *)&this->fields.onClickCallback;
    if ( !onClickCallback )
    {
      p_onClickCallback->klass = (CGThumbnailListItem_c *)callback;
      sub_1C36FFC(p_onClickCallback, (int32_t)callback, v5, v6);
    }
  }
}