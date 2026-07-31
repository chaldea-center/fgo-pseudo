void ScriptActionAdvPrefabActorGoNextState___ctor(
        ScriptActionAdvPrefabActorGoNextState_o *this,
        const MethodInfo *method)
{
  UnityEngine_StateMachineBehaviour___ctor((UnityEngine_StateMachineBehaviour_o *)this, 0);
}


void ScriptActionAdvPrefabActorGoNextState__OnStateEnter(
        ScriptActionAdvPrefabActorGoNextState_o *this,
        UnityEngine_Animator_o *animator,
        UnityEngine_AnimatorStateInfo_o *stateInfo,
        int32_t layerIndex,
        const MethodInfo *method)
{
  ScriptActionAdvPrefabActorController_o *owner; // x0
  __int128 v10; // q1
  int32_t m_Loop; // w8
  UnityEngine_AnimatorStateInfo_o v12; // [xsp+0h] [xbp-60h] BYREF

  owner = this->fields.owner;
  if ( !owner )
    sub_21FFECC(0, animator);
  ScriptActionAdvPrefabActorController__GoNext(owner, 0);
  v10 = *(_OWORD *)&stateInfo->fields.m_Length;
  m_Loop = stateInfo->fields.m_Loop;
  *(_OWORD *)&v12.fields.m_Name = *(_OWORD *)&stateInfo->fields.m_Name;
  *(_OWORD *)&v12.fields.m_Length = v10;
  v12.fields.m_Loop = m_Loop;
  UnityEngine_StateMachineBehaviour__OnStateEnter(
    (UnityEngine_StateMachineBehaviour_o *)this,
    animator,
    &v12,
    layerIndex,
    0);
}


void ScriptActionAdvPrefabActorGoNextState__SetOwner(
        ScriptActionAdvPrefabActorGoNextState_o *this,
        ScriptActionAdvPrefabActorController_o *owner,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.owner = owner;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.owner,
    (int32_t)owner,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}