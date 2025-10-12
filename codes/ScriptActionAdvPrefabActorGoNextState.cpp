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
    sub_1C32E7C(this);
  owner->fields._IsGoNext_k__BackingField = 1;
  v7 = *(_OWORD *)&stateInfo->fields.m_Name;
  v6 = *(_OWORD *)&stateInfo->fields.m_Length;
  v8.fields.m_Loop = stateInfo->fields.m_Loop;
  *(_OWORD *)&v8.fields.m_Name = v7;
  *(_OWORD *)&v8.fields.m_Length = v6;
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
  const MethodInfo *v3; // x3

  this->fields.owner = owner;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.owner, (int32_t)owner, (int32_t)method, v3);
}