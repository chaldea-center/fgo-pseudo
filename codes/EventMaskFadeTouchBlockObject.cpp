void EventMaskFadeTouchBlockObject___ctor(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventMaskFadeTouchBlockObject__OnClickObject(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  struct System_Action_o *onClickCallback; // x8
  MissionNaviTransitionBoardItem_o *p_onClickCallback; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  p_onClickCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.onClickCallback;
  onClickCallback = this->fields.onClickCallback;
  if ( onClickCallback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))onClickCallback->fields.invoke_impl)(
      onClickCallback->fields.method_code,
      onClickCallback->fields.method);
    p_onClickCallback->klass = 0;
    sub_2213A04(p_onClickCallback, 0, v4, v5, v6, v7, v8, v9);
  }
}


void EventMaskFadeTouchBlockObject__RemoveCallback(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_onClickCallback; // x19
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.onClickCallback;
    if ( onClickCallback )
    {
      p_onClickCallback->klass = 0;
      sub_2213A04(p_onClickCallback, 0, v3, v4, v5, v6, v7, v8);
    }
  }
}


void EventMaskFadeTouchBlockObject__SetCallback(
        EventMaskFadeTouchBlockObject_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_onClickCallback; // x20
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.onClickCallback;
    if ( !onClickCallback )
    {
      p_onClickCallback->klass = (MissionNaviTransitionBoardItem_c *)callback;
      sub_2213A04(p_onClickCallback, (int32_t)callback, v5, v6, v7, v8, v9, v10);
    }
  }
}