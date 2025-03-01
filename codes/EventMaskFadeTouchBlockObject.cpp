void __fastcall EventMaskFadeTouchBlockObject___ctor(EventMaskFadeTouchBlockObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventMaskFadeTouchBlockObject__OnClickObject(
        EventMaskFadeTouchBlockObject_o *this,
        const MethodInfo *method)
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
    sub_1C2E0D0(p_onClickCallback, 0LL, v4, v5, v6, v7, v8, v9);
  }
}


void __fastcall EventMaskFadeTouchBlockObject__RemoveCallback(
        EventMaskFadeTouchBlockObject_o *this,
        const MethodInfo *method)
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
      sub_1C2E0D0(p_onClickCallback, 0LL, v3, v4, v5, v6, v7, v8);
    }
  }
}


void __fastcall EventMaskFadeTouchBlockObject__SetCallback(
        EventMaskFadeTouchBlockObject_o *this,
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
      sub_1C2E0D0(p_onClickCallback, (int64_t)callback, v5, v6, v7, v8, v9, v10);
    }
  }
}