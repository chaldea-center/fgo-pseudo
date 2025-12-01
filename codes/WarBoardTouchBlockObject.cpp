void WarBoardTouchBlockObject___ctor(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool WarBoardTouchBlockObject__Activate(
        WarBoardTouchBlockObject_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  bool isActiveAndEnabled; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1

  isActiveAndEnabled = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0);
  if ( !isActiveAndEnabled )
  {
    this->fields.onClickCallback = callback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.onClickCallback,
      (int32_t)callback,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C71608(0, v13);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  return !isActiveAndEnabled;
}


void WarBoardTouchBlockObject__Deactivate(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.onClickCallback = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onClickCallback, 0, v5, v6, v7, v8, v9, v10);
}


void WarBoardTouchBlockObject__OnClickObject(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
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
    sub_1C71354(p_onClickCallback, 0, v4, v5, v6, v7, v8, v9);
  }
}


void WarBoardTouchBlockObject__RemoveCallback(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
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
      sub_1C71354(p_onClickCallback, 0, v3, v4, v5, v6, v7, v8);
    }
  }
}


void WarBoardTouchBlockObject__SetCallback(
        WarBoardTouchBlockObject_o *this,
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
      sub_1C71354(p_onClickCallback, (int32_t)callback, v5, v6, v7, v8, v9, v10);
    }
  }
}