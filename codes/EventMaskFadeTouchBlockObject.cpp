void EventMaskFadeTouchBlockObject___ctor(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventMaskFadeTouchBlockObject__OnClickObject(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  struct System_Action_o *onClickCallback; // x8
  GrandQuestFolderBoardItem_o *p_onClickCallback; // x19
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  p_onClickCallback = (GrandQuestFolderBoardItem_o *)&this->fields.onClickCallback;
  onClickCallback = this->fields.onClickCallback;
  if ( onClickCallback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))onClickCallback->fields.invoke_impl)(
      onClickCallback->fields.method_code,
      onClickCallback->fields.method);
    p_onClickCallback->klass = 0;
    sub_1C9403C(p_onClickCallback, 0, v4, v5, v6, v7, v8, v9);
  }
}


void EventMaskFadeTouchBlockObject__RemoveCallback(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_onClickCallback; // x19
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (GrandQuestFolderBoardItem_o *)&this->fields.onClickCallback;
    if ( onClickCallback )
    {
      p_onClickCallback->klass = 0;
      sub_1C9403C(p_onClickCallback, 0, v3, v4, v5, v6, v7, v8);
    }
  }
}


void EventMaskFadeTouchBlockObject__SetCallback(
        EventMaskFadeTouchBlockObject_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_onClickCallback; // x20
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (GrandQuestFolderBoardItem_o *)&this->fields.onClickCallback;
    if ( !onClickCallback )
    {
      p_onClickCallback->klass = (GrandQuestFolderBoardItem_c *)callback;
      sub_1C9403C(p_onClickCallback, (int32_t)callback, v5, v6, v7, v8, v9, v10);
    }
  }
}