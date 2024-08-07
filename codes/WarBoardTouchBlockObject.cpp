void __fastcall WarBoardTouchBlockObject___ctor(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall WarBoardTouchBlockObject__Activate(
        WarBoardTouchBlockObject_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  bool isActiveAndEnabled; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  isActiveAndEnabled = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL);
  if ( !isActiveAndEnabled )
  {
    this->fields.onClickCallback = callback;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.onClickCallback, (int32_t)callback, v5, v6);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1B64C5C(0LL, v9);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  return !isActiveAndEnabled;
}


void __fastcall WarBoardTouchBlockObject__Deactivate(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64C5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onClickCallback = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.onClickCallback, 0, v5, v6);
}


void __fastcall WarBoardTouchBlockObject__OnClickObject(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  struct System_Action_o *onClickCallback; // x8
  ServantStatusBattleListViewItem_o *p_onClickCallback; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  p_onClickCallback = (ServantStatusBattleListViewItem_o *)&this->fields.onClickCallback;
  onClickCallback = this->fields.onClickCallback;
  if ( onClickCallback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickCallback->fields.m_target)(
      onClickCallback->fields.original_method_info,
      *(_QWORD *)&onClickCallback->fields.extra_arg);
    p_onClickCallback->klass = 0LL;
    sub_1B649A4(p_onClickCallback, 0, v4, v5);
  }
}


void __fastcall WarBoardTouchBlockObject__RemoveCallback(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_onClickCallback; // x19
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (ServantStatusBattleListViewItem_o *)&this->fields.onClickCallback;
    if ( onClickCallback )
    {
      p_onClickCallback->klass = 0LL;
      sub_1B649A4(p_onClickCallback, 0, v3, v4);
    }
  }
}


void __fastcall WarBoardTouchBlockObject__SetCallback(
        WarBoardTouchBlockObject_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_onClickCallback; // x20
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (ServantStatusBattleListViewItem_o *)&this->fields.onClickCallback;
    if ( !onClickCallback )
    {
      p_onClickCallback->klass = (ServantStatusBattleListViewItem_c *)callback;
      sub_1B649A4(p_onClickCallback, (int32_t)callback, v5, v6);
    }
  }
}