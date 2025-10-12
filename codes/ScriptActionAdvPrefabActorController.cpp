void ScriptActionAdvPrefabActorController___ctor(
        ScriptActionAdvPrefabActorController_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptActionAdvPrefabActorController__Awake(
        ScriptActionAdvPrefabActorController_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  UnityEngine_Animator_o **p_animator; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *animator; // x21
  System_Object_array *Behaviours_object; // x20
  System_Action_object__o *v9; // x21

  if ( (byte_4C3967C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_ScriptActionAdvPrefabActorGoNextState__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Animator_GetBehaviours_ScriptActionAdvPrefabActorGoNextState___);
    sub_1C32C20(&Method_System_Array_ForEach_ScriptActionAdvPrefabActorGoNextState___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animator___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ScriptActionAdvPrefabActorController__Awake_b__10_0__);
    byte_4C3967C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animator___);
  this->fields.animator = (struct UnityEngine_Animator_o *)Component_object;
  p_animator = &this->fields.animator;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animator, (int32_t)Component_object, v5, v6);
  animator = (UnityEngine_Object_o *)this->fields.animator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animator, 0, 0) )
  {
    if ( !*p_animator )
      sub_1C32E7C(0);
    Behaviours_object = UnityEngine_Animator__GetBehaviours_object_(
                          *p_animator,
                          (const MethodInfo_31AA618 *)Method_UnityEngine_Animator_GetBehaviours_ScriptActionAdvPrefabActorGoNextState___);
    v9 = (System_Action_object__o *)sub_1C32E6C(System_Action_ScriptActionAdvPrefabActorGoNextState__TypeInfo);
    System_Action_object____ctor(
      v9,
      (Il2CppObject *)this,
      Method_ScriptActionAdvPrefabActorController__Awake_b__10_0__,
      0);
    System_Array__ForEach_object_(
      Behaviours_object,
      (System_Action_T__o *)v9,
      (const MethodInfo_31E4100 *)Method_System_Array_ForEach_ScriptActionAdvPrefabActorGoNextState___);
  }
  this->fields._IsGoNext_k__BackingField = 1;
}


void ScriptActionAdvPrefabActorController__GoNext(
        ScriptActionAdvPrefabActorController_o *this,
        const MethodInfo *method)
{
  this->fields._IsGoNext_k__BackingField = 1;
}


void ScriptActionAdvPrefabActorController__Hide(ScriptActionAdvPrefabActorController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ScriptActionAdvPrefabActorController__HideActor(
        ScriptActionAdvPrefabActorController_o *this,
        System_String_o *actorName,
        const MethodInfo *method)
{
  Il2CppObject *ComponentInParent_object__51200636; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C39683 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInParent_ScriptActionAdvPrefabController___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39683 = 1;
  }
  ComponentInParent_object__51200636 = UnityEngine_Component__GetComponentInParent_object__51200636(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_30D427C *)Method_UnityEngine_Component_GetComponentInParent_ScriptActionAdvPrefabController___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__51200636, 0, 0);
  if ( v6 )
  {
    if ( !ComponentInParent_object__51200636 )
      sub_1C32E7C(v6);
    ScriptActionAdvPrefabController__SetHide(
      (ScriptActionAdvPrefabController_o *)ComponentInParent_object__51200636,
      actorName,
      v7);
  }
}


void ScriptActionAdvPrefabActorController__Pause(
        ScriptActionAdvPrefabActorController_o *this,
        bool pause,
        const MethodInfo *method)
{
  UnityEngine_Animator_o *animator; // x0
  float v4; // s0

  animator = this->fields.animator;
  if ( !animator )
    sub_1C32E7C(0);
  v4 = 1.0;
  if ( pause )
    v4 = 0.0;
  UnityEngine_Animator__set_speed(animator, v4, 0);
}


bool ScriptActionAdvPrefabActorController__PlayAnimator(
        ScriptActionAdvPrefabActorController_o *this,
        System_String_o *trigger,
        const MethodInfo *method)
{
  UnityEngine_Object_o *animator; // x21
  bool v6; // w21
  UnityEngine_Animator_o *v7; // x0

  if ( (byte_4C3967E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3967E = 1;
  }
  animator = (UnityEngine_Object_o *)this->fields.animator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(animator, 0, 0);
  if ( !v6 )
  {
    v7 = this->fields.animator;
    this->fields._IsGoNext_k__BackingField = 0;
    if ( !v7 )
      sub_1C32E7C(0);
    UnityEngine_Animator__SetTrigger(v7, trigger, 0);
  }
  return !v6;
}


void ScriptActionAdvPrefabActorController__PlaySE(
        ScriptActionAdvPrefabActorController_o *this,
        System_String_o *se,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C39680 & 1) == 0 )
  {
    sub_1C32C20(&Method_ScriptActionAdvPrefabActorController_PlaySE__);
    byte_4C39680 = 1;
  }
  v4 = Method_ScriptActionAdvPrefabActorController_PlaySE__;
  if ( (*((_BYTE *)Method_ScriptActionAdvPrefabActorController_PlaySE__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C32C38(Method_ScriptActionAdvPrefabActorController_PlaySE__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
  OverwriteAssetSoundName__PlaySe(v5, se, 0, 0);
}


void ScriptActionAdvPrefabActorController__PlayVoice(
        ScriptActionAdvPrefabActorController_o *this,
        System_String_o *voice,
        const MethodInfo *method)
{
  if ( (byte_4C39681 & 1) == 0 )
  {
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C39681 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playVoice(voice, 0, 0);
}


bool ScriptActionAdvPrefabActorController__SetDisplay(
        ScriptActionAdvPrefabActorController_o *this,
        int32_t genderType,
        const MethodInfo *method)
{
  int32_t displayCond; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  bool v6; // w19

  displayCond = this->fields.displayCond;
  if ( displayCond )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( genderType == 1 && displayCond == 2 )
    {
      if ( !gameObject )
        goto LABEL_14;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_14;
      if ( genderType != 2 || displayCond != 4 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        return 0;
      }
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
LABEL_14:
      sub_1C32E7C(gameObject);
  }
  v6 = 1;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  return v6;
}


void ScriptActionAdvPrefabActorController__SetGender(
        ScriptActionAdvPrefabActorController_o *this,
        int32_t genderType,
        const MethodInfo *method)
{
  UnityEngine_Object_o *animator; // x21
  UnityEngine_Animator_o *v6; // x0

  if ( (byte_4C3967D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_19757/*"gender"*/);
    byte_4C3967D = 1;
  }
  animator = (UnityEngine_Object_o *)this->fields.animator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animator, 0, 0) )
  {
    v6 = this->fields.animator;
    if ( !v6 )
      sub_1C32E7C(0);
    UnityEngine_Animator__SetInteger(v6, (System_String_o *)StringLiteral_19757/*"gender"*/, genderType, 0);
  }
}


void ScriptActionAdvPrefabActorController__Show(ScriptActionAdvPrefabActorController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void ScriptActionAdvPrefabActorController__ShowActor(
        ScriptActionAdvPrefabActorController_o *this,
        System_String_o *actorName,
        const MethodInfo *method)
{
  Il2CppObject *ComponentInParent_object__51200636; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C39682 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInParent_ScriptActionAdvPrefabController___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39682 = 1;
  }
  ComponentInParent_object__51200636 = UnityEngine_Component__GetComponentInParent_object__51200636(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_30D427C *)Method_UnityEngine_Component_GetComponentInParent_ScriptActionAdvPrefabController___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__51200636, 0, 0);
  if ( v6 )
  {
    if ( !ComponentInParent_object__51200636 )
      sub_1C32E7C(v6);
    ScriptActionAdvPrefabController__SetShow(
      (ScriptActionAdvPrefabController_o *)ComponentInParent_object__51200636,
      actorName,
      v7);
  }
}


void ScriptActionAdvPrefabActorController__Update(
        ScriptActionAdvPrefabActorController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *FollowTarget; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x20
  UnityEngine_Transform_o *v6; // x20
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o eulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3967F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3967F = 1;
  }
  FollowTarget = (UnityEngine_Object_o *)this->fields.FollowTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(FollowTarget, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this->fields.FollowTarget )
      goto LABEL_12;
    v5 = transform;
    position = UnityEngine_Transform__get_position(this->fields.FollowTarget, 0);
    if ( !v5
      || (v8.fields.z = position.fields.z + this->fields.followOffsetPosition.fields.z,
          v8.fields.y = position.fields.y + this->fields.followOffsetPosition.fields.y,
          v8.fields.x = position.fields.x + this->fields.followOffsetPosition.fields.x,
          UnityEngine_Transform__set_position(v5, v8, 0),
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0),
          !this->fields.FollowTarget)
      || (v6 = transform, eulerAngles = UnityEngine_Transform__get_eulerAngles(this->fields.FollowTarget, 0), !v6) )
    {
LABEL_12:
      sub_1C32E7C(transform);
    }
    v10.fields.z = eulerAngles.fields.z + this->fields.followOffsetAngle.fields.z;
    v10.fields.y = eulerAngles.fields.y + this->fields.followOffsetAngle.fields.y;
    v10.fields.x = eulerAngles.fields.x + this->fields.followOffsetAngle.fields.x;
    UnityEngine_Transform__set_eulerAngles(v6, v10, 0);
  }
}


void ScriptActionAdvPrefabActorController___Awake_b__10_0(
        ScriptActionAdvPrefabActorController_o *this,
        ScriptActionAdvPrefabActorGoNextState_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !x )
    sub_1C32E7C(this);
  x->fields.owner = this;
  sub_1C32BC4((CGThumbnailListItem_o *)&x->fields.owner, (int32_t)this, (int32_t)method, v3);
}


bool ScriptActionAdvPrefabActorController__get_IsGoNext(
        ScriptActionAdvPrefabActorController_o *this,
        const MethodInfo *method)
{
  return this->fields._IsGoNext_k__BackingField;
}


void ScriptActionAdvPrefabActorController__set_IsGoNext(
        ScriptActionAdvPrefabActorController_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGoNext_k__BackingField = value;
}