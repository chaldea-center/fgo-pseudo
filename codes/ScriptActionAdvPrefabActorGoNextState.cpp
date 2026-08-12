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
  struct ScriptActionAdvPrefabActorController_o *owner; // x8
  __int128 v6; // q0
  __int128 v7; // q1
  UnityEngine_AnimatorStateInfo_o v8; // [xsp+0h] [xbp-40h] BYREF

  owner = this->fields.owner;
  if ( !owner )
    sub_2213CDC(this, animator);
  owner->fields._IsGoNext_k__BackingField = 1;
  v6 = *(_OWORD *)&stateInfo->fields.m_Name;
  v7 = *(_OWORD *)&stateInfo->fields.m_Length;
  v8.fields.m_Loop = stateInfo->fields.m_Loop;
  *(_OWORD *)&v8.fields.m_Name = v6;
  *(_OWORD *)&v8.fields.m_Length = v7;
  UnityEngine_StateMachineBehaviour__OnStateEnter(
    (UnityEngine_StateMachineBehaviour_o *)this,
    animator,
    &v8,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.owner,
    (int32_t)owner,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}