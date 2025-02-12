void __fastcall WarBoardTouchBlockObject___ctor(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall WarBoardTouchBlockObject__Activate(
        WarBoardTouchBlockObject_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  bool isActiveAndEnabled; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1

  isActiveAndEnabled = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL);
  if ( !isActiveAndEnabled )
  {
    this->fields.onClickCallback = callback;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.onClickCallback, (int64_t)callback, v5, v6, v7, v8, v9, v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1C1AE30(0LL, v13);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  return !isActiveAndEnabled;
}


void __fastcall WarBoardTouchBlockObject__Deactivate(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onClickCallback = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.onClickCallback, 0LL, v5, v6, v7, v8, v9, v10);
}


void __fastcall WarBoardTouchBlockObject__OnClickObject(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  struct System_Action_o *onClickCallback; // x8
  PartyOrganizationUtility_o *p_onClickCallback; // x19
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  p_onClickCallback = (PartyOrganizationUtility_o *)&this->fields.onClickCallback;
  onClickCallback = this->fields.onClickCallback;
  if ( onClickCallback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickCallback->fields.m_target)(
      onClickCallback->fields.original_method_info,
      *(_QWORD *)&onClickCallback->fields.extra_arg);
    p_onClickCallback->klass = 0LL;
    sub_1C1AB78(p_onClickCallback, 0LL, v4, v5, v6, v7, v8, v9);
  }
}


void __fastcall WarBoardTouchBlockObject__RemoveCallback(WarBoardTouchBlockObject_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_onClickCallback; // x19
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (PartyOrganizationUtility_o *)&this->fields.onClickCallback;
    if ( onClickCallback )
    {
      p_onClickCallback->klass = 0LL;
      sub_1C1AB78(p_onClickCallback, 0LL, v3, v4, v5, v6, v7, v8);
    }
  }
}


void __fastcall WarBoardTouchBlockObject__SetCallback(
        WarBoardTouchBlockObject_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_onClickCallback; // x20
  struct System_Action_o *onClickCallback; // t1

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    onClickCallback = this->fields.onClickCallback;
    p_onClickCallback = (PartyOrganizationUtility_o *)&this->fields.onClickCallback;
    if ( !onClickCallback )
    {
      p_onClickCallback->klass = (PartyOrganizationUtility_c *)callback;
      sub_1C1AB78(p_onClickCallback, (int64_t)callback, v5, v6, v7, v8, v9, v10);
    }
  }
}