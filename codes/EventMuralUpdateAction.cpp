void EventMuralUpdateAction___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct EventMuralUpdateAction_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct EventMuralUpdateAction_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C343EA & 1) == 0 )
  {
    sub_1C32C20(&EventMuralUpdateAction_TypeInfo);
    sub_1C32C20(&StringLiteral_17223/*"bit_mural_update{0}"*/);
    sub_1C32C20(&StringLiteral_16548/*"_f"*/);
    sub_1C32C20(&StringLiteral_16563/*"_m"*/);
    byte_4C343EA = 1;
  }
  EventMuralUpdateAction_TypeInfo->static_fields->ANIM_NAME = (struct System_String_o *)StringLiteral_17223/*"bit_mural_update{0}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)EventMuralUpdateAction_TypeInfo->static_fields, StringLiteral_17223/*"bit_mural_update{0}"*/, v1, v2);
  v3 = StringLiteral_16563/*"_m"*/;
  static_fields = EventMuralUpdateAction_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_END_MALE = (struct System_String_o *)StringLiteral_16563/*"_m"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->SPRITE_NAME_END_MALE, v3, v5, v6);
  v7 = StringLiteral_16548/*"_f"*/;
  v8 = EventMuralUpdateAction_TypeInfo->static_fields;
  v8->SPRITE_NAME_END_FEMALE = (struct System_String_o *)StringLiteral_16548/*"_f"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->SPRITE_NAME_END_FEMALE, v7, v9, v10);
}


void EventMuralUpdateAction___ctor(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  this->fields.isPlayAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventMuralUpdateAction__Awake(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  struct CStateManager_EventMuralUpdateAction__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  CStateManager_T__o *v10; // x21
  Il2CppObject *v11; // x22
  CStateManager_T__o *v12; // x20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4C343E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_EventMuralUpdateAction___ctor__);
    sub_1C32C20(&Method_CStateManager_EventMuralUpdateAction__add__);
    sub_1C32C20(&CStateManager_EventMuralUpdateAction__TypeInfo);
    sub_1C32C20(&EventMuralUpdateAction_StateNone_TypeInfo);
    sub_1C32C20(&EventMuralUpdateAction_StatePlay_TypeInfo);
    sub_1C32C20(&EventMuralUpdateAction_StateTouchWait_TypeInfo);
    byte_4C343E1 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C32E6C(CStateManager_EventMuralUpdateAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3322708 *)Method_CStateManager_EventMuralUpdateAction___ctor__);
    this->fields.fsm = (struct CStateManager_EventMuralUpdateAction__o *)v4;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v8 = (Il2CppObject *)sub_1C32E6C(EventMuralUpdateAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_33227B0 *)Method_CStateManager_EventMuralUpdateAction__add__);
    v10 = (CStateManager_T__o *)*p_fsm;
    v11 = (Il2CppObject *)sub_1C32E6C(EventMuralUpdateAction_StatePlay_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !v10
      || (CStateManager_object___add(
            v10,
            1,
            (IState_T__o *)v11,
            (const MethodInfo_33227B0 *)Method_CStateManager_EventMuralUpdateAction__add__),
          v12 = (CStateManager_T__o *)*p_fsm,
          v13 = (Il2CppObject *)sub_1C32E6C(EventMuralUpdateAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v13, 0),
          !v12) )
    {
LABEL_9:
      sub_1C32E7C(v9);
    }
    CStateManager_object___add(
      v12,
      2,
      (IState_T__o *)v13,
      (const MethodInfo_33227B0 *)Method_CStateManager_EventMuralUpdateAction__add__);
    EventMuralUpdateAction__SetState(this, 0, v14);
  }
  BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.muralObjectList, 0);
}


void EventMuralUpdateAction__CheckAssertions(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.muralObjectList, 0);
}


int32_t EventMuralUpdateAction__GetState(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  EventMuralUpdateAction_o *v2; // x19
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4C343E8 & 1) == 0 )
  {
    this = (EventMuralUpdateAction_o *)sub_1C32C20(&Method_CStateManager_EventMuralUpdateAction__getState__);
    byte_4C343E8 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C32E7C(this);
  return fsm->fields.m_state;
}


void EventMuralUpdateAction__Init(
        EventMuralUpdateAction_o *this,
        int32_t eventMuralId,
        int32_t eventId,
        bool isPlayAnim,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *gameObject; // x0
  const MethodInfo *v10; // x2
  struct EventMuralEntity_o **p_eventMuralEntity; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  System_String_o *ANIM_NAME; // x20
  Il2CppObject *v19; // x0
  struct System_String_o *v20; // x0
  System_String_o **p_playAnimationName; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *ComponentInChildren_object__51199524; // x0
  UnityEngine_Animation_o **p_animation; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  SimpleAnimation_o **p_simpleAnimation; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_Object_o *simpleAnimation; // x23
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v34; // x23
  __int64 v35; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v37; // x0
  UnityEngine_Object_o *v38; // x22
  const MethodInfo *v39; // x1
  UnityEngine_Animation_c *v40; // x8
  UnityEngine_Animation_o *v41; // x20
  __int64 v42; // x9
  SimpleAnimation_State_c **v43; // x10
  __int64 v44; // x0
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C343E3 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMuralMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
    sub_1C32C20(&EventMuralUpdateAction_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C343E3 = 1;
  }
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  EventMuralUpdateAction__SetState(this, 0, v10);
  this->fields.eventMuralId = eventMuralId;
  this->fields.isPlayAnim = isPlayAnim;
  if ( !isPlayAnim )
  {
    this->fields.eventId = eventId;
    return;
  }
  gameObject = (UnityEngine_Animation_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_51;
  gameObject = (UnityEngine_Animation_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)gameObject,
                                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMuralMaster___);
  if ( !gameObject )
    goto LABEL_51;
  p_eventMuralEntity = &this->fields.eventMuralEntity;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
          (Il2CppObject **)&this->fields.eventMuralEntity,
          eventMuralId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__) )
    return;
  gameObject = (UnityEngine_Animation_o *)EventMuralUpdateAction_TypeInfo;
  if ( !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
  if ( !*p_eventMuralEntity )
    goto LABEL_51;
  ANIM_NAME = EventMuralUpdateAction_TypeInfo->static_fields->ANIM_NAME;
  id = (*p_eventMuralEntity)->fields.id;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v12, v13, v14, v15, v16, v17);
  v20 = System_String__Format(ANIM_NAME, v19, 0);
  this->fields.playAnimationName = v20;
  p_playAnimationName = &this->fields.playAnimationName;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playAnimationName, (int32_t)v20, v22, v23);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_51;
  ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                           (UnityEngine_Component_o *)gameObject,
                                           (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51199524;
  p_animation = &this->fields.animation;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animation, (int32_t)ComponentInChildren_object__51199524, v26, v27);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_51;
  v28 = UnityEngine_Component__GetComponentInChildren_object__51199524(
          (UnityEngine_Component_o *)gameObject,
          (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)v28;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.simpleAnimation, (int32_t)v28, v30, v31);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_Animation_o *)*p_simpleAnimation;
    if ( *p_simpleAnimation )
    {
      gameObject = (UnityEngine_Animation_o *)SimpleAnimation__get_Item(
                                                (SimpleAnimation_o *)gameObject,
                                                *p_playAnimationName,
                                                0);
      if ( gameObject )
      {
        klass = gameObject->klass;
        v34 = gameObject;
        v35 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
        if ( *(_WORD *)&gameObject->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v35;
            p_offset += 2;
            if ( !v35 )
              goto LABEL_22;
          }
          v37 = (__int64)(&klass[1]._1.properties + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_22:
          v37 = sub_1C83438(gameObject, SimpleAnimation_State_TypeInfo, 14);
        }
        gameObject = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v37)(
                                                  v34,
                                                  *(_QWORD *)(v37 + 8));
        if ( *p_simpleAnimation )
        {
          SimpleAnimation__set_clip(*p_simpleAnimation, (UnityEngine_AnimationClip_o *)gameObject, 0);
          gameObject = (UnityEngine_Animation_o *)*p_simpleAnimation;
          if ( *p_simpleAnimation )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
            gameObject = *p_animation;
            if ( *p_animation )
            {
              gameObject = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(
                                                        gameObject,
                                                        *p_playAnimationName,
                                                        0);
              if ( gameObject )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
                gameObject = (UnityEngine_Animation_o *)*p_simpleAnimation;
                if ( *p_simpleAnimation )
                {
                  gameObject = (UnityEngine_Animation_o *)SimpleAnimation__get_Item(
                                                            (SimpleAnimation_o *)gameObject,
                                                            *p_playAnimationName,
                                                            0);
                  if ( gameObject )
                  {
                    v40 = gameObject->klass;
                    v41 = gameObject;
                    v42 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
                    if ( *(_WORD *)&gameObject->klass->_2.rank )
                    {
                      v43 = (SimpleAnimation_State_c **)&v40->_1.interfaceOffsets->offset;
                      while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
                      {
                        --v42;
                        v43 += 2;
                        if ( !v42 )
                          goto LABEL_46;
                      }
                      v44 = (__int64)(&v40[1]._1.name + 2 * *(_DWORD *)v43);
                    }
                    else
                    {
LABEL_46:
                      v44 = sub_1C83438(gameObject, SimpleAnimation_State_TypeInfo, 6);
                    }
                    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v44)(
                      v41,
                      *(_QWORD *)(v44 + 8),
                      0.0);
                    goto LABEL_49;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_1C32E7C(gameObject);
  }
  v38 = (UnityEngine_Object_o *)*p_animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v38, 0, 0) )
  {
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_51;
    gameObject = (UnityEngine_Animation_o *)UnityEngine_Animation__GetClip(gameObject, *p_playAnimationName, 0);
    if ( !*p_animation )
      goto LABEL_51;
    UnityEngine_Animation__set_clip(*p_animation, (UnityEngine_AnimationClip_o *)gameObject, 0);
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_51;
    gameObject = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(gameObject, *p_playAnimationName, 0);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_51;
    gameObject = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(gameObject, *p_playAnimationName, 0);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
  }
LABEL_49:
  EventMuralUpdateAction__SetAnimationEvent(this, v39);
}


void EventMuralUpdateAction__OnPlayEnd(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventMuralUpdateAction__SetState(this, 2, v2);
}


void EventMuralUpdateAction__Play(
        EventMuralUpdateAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v10; // x0
  System_Action_o *v11; // x21

  if ( (byte_4C343E6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_EventMuralUpdateAction__Play_b__26_0__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C343E6 = 1;
  }
  this->fields.endAct = end_act;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)end_act, (int32_t)method, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v10 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v10->static_fields->DEFAULT_FADE_TIME;
  }
  v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventMuralUpdateAction__Play_b__26_0__, 0);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v11, 0);
  if ( this->fields.isPlayAnim )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)gameObject,
                                                 this->fields.playAnimationName,
                                                 0);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 1.0, 0);
        return;
      }
    }
LABEL_14:
    sub_1C32E7C(gameObject);
  }
}


void EventMuralUpdateAction__SetAnimationEvent(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C343E7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventMuralUpdateAction_OnPlayEnd__);
    byte_4C343E7 = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventMuralUpdateAction_OnPlayEnd__, 0);
  if ( !effectActionComponent )
    sub_1C32E7C(v5);
  effectActionComponent->fields.endAction = v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&effectActionComponent->fields.endAction, (int32_t)v4, v6, v7);
}


void EventMuralUpdateAction__SetState(EventMuralUpdateAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C343E9 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_EventMuralUpdateAction__setState__);
    byte_4C343E9 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C32E7C(0);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_332283C *)Method_CStateManager_EventMuralUpdateAction__setState__);
}


void EventMuralUpdateAction__Setup(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  EventMuralEntity_array *OpenedEntitiesFromId; // x0
  System_Object_array *v5; // x20
  struct UnityEngine_GameObject_array *muralObjectList; // x24
  int klass_high; // w28
  unsigned __int64 v8; // x25
  __int64 v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *v12; // x1
  UnityEngine_Object_o **v13; // x21
  System_Func_object__bool__o *v14; // x23
  System_Func_object__bool__o *v15; // x0
  intptr_t *v16; // x8
  System_Func_T__bool__o *v17; // x23
  UnityEngine_Object_o *v18; // x22
  UnityEngine_Object_o *muralMaleObject; // x23
  bool v20; // w0
  UnityEngine_Object_o *v21; // x22
  UnityEngine_Object_o *muralFemaleObject; // x23
  bool v23; // w0
  bool v24; // w1
  UILabel_o *detailText; // x20
  struct EventMuralEntity_o *eventMuralEntity; // x8
  System_String_o *message; // x1
  System_String_o *v28; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *v35; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x2
  int32_t v45; // [xsp+0h] [xbp-70h] BYREF
  int32_t v46; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t total[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C343E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_EventMuralEntity___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMuralMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Func_EventMuralEntity__bool__TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__);
    sub_1C32C20(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__);
    sub_1C32C20(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__);
    sub_1C32C20(&EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo);
    sub_1C32C20(&StringLiteral_5619/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/);
    byte_4C343E4 = 1;
  }
  *(_QWORD *)total = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_49;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__51199524(
                                           transform,
                                           (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_49;
  BYTE5(transform[4].monitor) = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMuralMaster___);
  if ( this->fields.isPlayAnim )
  {
    if ( !transform )
      goto LABEL_49;
    OpenedEntitiesFromId = EventMuralMaster__GetOpenedEntitiesFromId(
                             (EventMuralMaster_o *)transform,
                             this->fields.eventMuralId,
                             total,
                             &total[1],
                             0);
  }
  else
  {
    if ( !transform )
      goto LABEL_49;
    OpenedEntitiesFromId = EventMuralMaster__GetOpenedEntitiesFromEventId(
                             (EventMuralMaster_o *)transform,
                             this->fields.eventId,
                             total,
                             &total[1],
                             0);
  }
  v5 = (System_Object_array *)OpenedEntitiesFromId;
  transform = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0);
  if ( !transform )
    goto LABEL_49;
  muralObjectList = this->fields.muralObjectList;
  if ( !muralObjectList )
    goto LABEL_49;
  if ( SLODWORD(muralObjectList->max_length) >= 1 )
  {
    klass_high = HIDWORD(transform[3].klass);
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_1C32E6C(EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0);
      if ( v8 >= LODWORD(muralObjectList->max_length) )
        sub_1C32E84(transform);
      if ( !v9 )
        goto LABEL_49;
      v12 = muralObjectList->m_Items[v8];
      *(_QWORD *)(v9 + 16) = v12;
      v13 = (UnityEngine_Object_o **)(v9 + 16);
      sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v12, v10, v11);
      v14 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventMuralEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v14,
        (Il2CppObject *)v9,
        Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__,
        0);
      if ( !BasicHelper__Any_object__51144764(
              v5,
              (System_Func_T__bool__o *)v14,
              (const MethodInfo_30C683C *)Method_BasicHelper_Any_EventMuralEntity___) )
      {
        if ( klass_high == 2 )
        {
          v15 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventMuralEntity__bool__TypeInfo);
          v16 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__;
        }
        else
        {
          if ( klass_high != 1 )
            break;
          v15 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventMuralEntity__bool__TypeInfo);
          v16 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__;
        }
        v17 = (System_Func_T__bool__o *)v15;
        System_Func_object__bool____ctor(v15, (Il2CppObject *)v9, *v16, 0);
        if ( !BasicHelper__Any_object__51144764(
                v5,
                v17,
                (const MethodInfo_30C683C *)Method_BasicHelper_Any_EventMuralEntity___) )
          break;
      }
      v18 = *v13;
      muralMaleObject = (UnityEngine_Object_o *)this->fields.muralMaleObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v20 = UnityEngine_Object__op_Equality(v18, muralMaleObject, 0);
      if ( klass_high != 1 && v20 )
        break;
      v21 = *v13;
      muralFemaleObject = (UnityEngine_Object_o *)this->fields.muralFemaleObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v23 = UnityEngine_Object__op_Equality(v21, muralFemaleObject, 0);
      if ( klass_high != 2 && v23 )
        break;
      transform = (UnityEngine_Component_o *)*v13;
      if ( !*v13 )
        goto LABEL_49;
      v24 = 1;
LABEL_34:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v24, 0);
      if ( (__int64)++v8 >= SLODWORD(muralObjectList->max_length) )
        goto LABEL_38;
    }
    transform = (UnityEngine_Component_o *)*v13;
    if ( !*v13 )
      goto LABEL_49;
    v24 = 0;
    goto LABEL_34;
  }
LABEL_38:
  detailText = this->fields.detailText;
  if ( !this->fields.isPlayAnim )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5619/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, 0);
    v46 = total[0];
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v29, v30, v31, v32, v33, v34);
    v45 = total[1];
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v36, v37, v38, v39, v40, v41);
    transform = (UnityEngine_Component_o *)System_String__Format_63559836(v28, v35, v42, 0);
    if ( detailText )
    {
      message = (System_String_o *)transform;
      goto LABEL_46;
    }
LABEL_49:
    sub_1C32E7C(transform);
  }
  eventMuralEntity = this->fields.eventMuralEntity;
  if ( !eventMuralEntity || !detailText )
    goto LABEL_49;
  message = eventMuralEntity->fields.message;
LABEL_46:
  UILabel__set_text(detailText, message, 0);
  EventMuralUpdateAction__SetupScreenTouchInfo(this, v43);
  transform = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !transform )
    goto LABEL_49;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !transform )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  EventMuralUpdateAction__SetState(this, 1, v44);
}


void EventMuralUpdateAction__SetupScreenTouchInfo(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_screenTouchInfo; // x19
  UnityEngine_Object_o *screenTouchInfo; // x21
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v7; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  const MethodInfo *v9; // x1
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C343E5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C343E5 = 1;
  }
  p_screenTouchInfo = (CGThumbnailListItem_o *)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v7 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0), !v7)
      || (ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v7, Instance, 0, 0),
          GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, v9),
          !ScreeenTouchInfo) )
    {
LABEL_13:
      sub_1C32E7C(Instance);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         ScreeenTouchInfo,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_screenTouchInfo->klass = (CGThumbnailListItem_c *)Component_object;
    sub_1C32BC4(p_screenTouchInfo, (int32_t)Component_object, v11, v12);
  }
  Instance = (UnityEngine_Transform_o *)p_screenTouchInfo->klass;
  if ( !p_screenTouchInfo->klass )
    goto LABEL_13;
  Instance = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
}


void EventMuralUpdateAction__Update(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C343E2 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_EventMuralUpdateAction__update__);
    sub_1C32C20(&CTouch_TypeInfo);
    byte_4C343E2 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3322818 *)Method_CStateManager_EventMuralUpdateAction__update__);
}


void EventMuralUpdateAction___Play_b__26_0(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.isPlayAnim )
    EventMuralUpdateAction__SetState(this, 2, v2);
}


void EventMuralUpdateAction_StateNone___ctor(EventMuralUpdateAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMuralUpdateAction_StateNone__begin(
        EventMuralUpdateAction_StateNone_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void EventMuralUpdateAction_StateNone__end(
        EventMuralUpdateAction_StateNone_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void EventMuralUpdateAction_StateNone__update(
        EventMuralUpdateAction_StateNone_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void EventMuralUpdateAction_StatePlay___ctor(EventMuralUpdateAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMuralUpdateAction_StatePlay__begin(
        EventMuralUpdateAction_StatePlay_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x8
  UnityEngine_Object_o *m_Clip; // x20
  struct SimpleAnimation_o *v7; // x19
  System_String_o *name; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v11; // x19
  System_String_o *v12; // x1

  if ( (byte_4C343EB & 1) == 0 )
  {
    this = (EventMuralUpdateAction_StatePlay_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C343EB = 1;
  }
  if ( !that )
    goto LABEL_27;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    this = (EventMuralUpdateAction_StatePlay_o *)that->fields.simpleAnimation;
    if ( !this )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    v5 = that->fields.simpleAnimation;
    if ( !v5 )
      goto LABEL_27;
    m_Clip = (UnityEngine_Object_o *)v5->fields.m_Clip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = that->fields.simpleAnimation;
      if ( v7 )
      {
        this = (EventMuralUpdateAction_StatePlay_o *)v7->fields.m_Clip;
        if ( this )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          SimpleAnimation__Play_66464300(v7, name, 0);
          return;
        }
      }
LABEL_27:
      sub_1C32E7C(this);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
    {
      this = (EventMuralUpdateAction_StatePlay_o *)that->fields.animation;
      if ( !this )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
      this = (EventMuralUpdateAction_StatePlay_o *)that->fields.animation;
      if ( !this )
        goto LABEL_27;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Object__op_Inequality(clip, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = that->fields.animation;
        if ( !v11 )
          goto LABEL_27;
        this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Animation__get_clip(v11, 0);
        if ( !this )
          goto LABEL_27;
        v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        UnityEngine_Animation__Play_70968924(v11, v12, 0);
      }
    }
  }
}


void EventMuralUpdateAction_StatePlay__end(
        EventMuralUpdateAction_StatePlay_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void EventMuralUpdateAction_StatePlay__update(
        EventMuralUpdateAction_StatePlay_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void EventMuralUpdateAction_StateTouchWait___ctor(
        EventMuralUpdateAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMuralUpdateAction_StateTouchWait__begin(
        EventMuralUpdateAction_StateTouchWait_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (EventMuralUpdateAction_StateTouchWait_o *)that->fields.screenTouchInfo) == 0
    || (this = (EventMuralUpdateAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0)) == 0 )
  {
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void EventMuralUpdateAction_StateTouchWait__end(
        EventMuralUpdateAction_StateTouchWait_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void EventMuralUpdateAction_StateTouchWait__update(
        EventMuralUpdateAction_StateTouchWait_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x19
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x2

  if ( (byte_4C343EC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&CTouch_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_EventMuralUpdateAction_StateTouchWait_update__);
    sub_1C32C20(&Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C32C20(&EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4C343EC = 1;
  }
  v4 = sub_1C32E6C(EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v8 = v4 + 16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v8 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v8 + 128LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v9 = Method_EventMuralUpdateAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventMuralUpdateAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1C32C38(Method_EventMuralUpdateAction_StateTouchWait_update__);
          v10 = (System_Reflection_MethodBase_o *)sub_1C32C04(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v12 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v12 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
          v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v14,
            (Il2CppObject *)v4,
            Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v14, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v8;
            if ( *(_QWORD *)v8 )
            {
              EventMuralUpdateAction__SetState((EventMuralUpdateAction_o *)isTouchPush, 0, v15);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C32E7C(isTouchPush);
  }
}


void EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0___ctor(
        EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct EventMuralUpdateAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C32E7C(this);
  ActionExtensions__Call(that->fields.endAct, 0);
}


void EventMuralUpdateAction___c__DisplayClass24_0___ctor(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__0(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  EventMuralUpdateAction___c__DisplayClass24_0_o *v4; // x19
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__3; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v4 = this;
  if ( (byte_4C343ED & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_1C32C20(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__);
    byte_4C343ED = 1;
  }
  if ( !ent )
    sub_1C32E7C(this);
  imageIds = ent->fields.imageIds;
  _9__3 = v4->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__3,
      (Il2CppObject *)v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__,
      0);
    v4->fields.__9__3 = _9__3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__9__3, (int32_t)_9__3, v7, v8);
  }
  return BasicHelper__Any_int__51143952(
           imageIds,
           (System_Func_T__bool__o *)_9__3,
           (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
}


bool EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__1(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  EventMuralUpdateAction___c__DisplayClass24_0_o *v4; // x19
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__4; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v4 = this;
  if ( (byte_4C343EF & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_1C32C20(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__);
    byte_4C343EF = 1;
  }
  if ( !ent )
    sub_1C32E7C(this);
  imageIds = ent->fields.imageIds;
  _9__4 = v4->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__,
      0);
    v4->fields.__9__4 = _9__4;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__9__4, (int32_t)_9__4, v7, v8);
  }
  return BasicHelper__Any_int__51143952(
           imageIds,
           (System_Func_T__bool__o *)_9__4,
           (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
}


bool EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__2(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  EventMuralUpdateAction___c__DisplayClass24_0_o *v4; // x19
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__5; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v4 = this;
  if ( (byte_4C343F1 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_1C32C20(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__);
    byte_4C343F1 = 1;
  }
  if ( !ent )
    sub_1C32E7C(this);
  imageIds = ent->fields.imageIds;
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v7, v8);
  }
  return BasicHelper__Any_int__51143952(
           imageIds,
           (System_Func_T__bool__o *)_9__5,
           (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
}


bool EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__3(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  UnityEngine_Object_o *obj; // x8
  System_String_o *v6; // x19
  System_String_o *name; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = id;
  if ( (byte_4C343EE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4952/*"D2"*/);
    byte_4C343EE = 1;
  }
  v4 = System_Int32__ToString_65028652((int32_t)&v9, (System_String_o *)StringLiteral_4952/*"D2"*/, 0);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_1C32E7C(v4);
  v6 = v4;
  name = UnityEngine_Object__get_name(obj, 0);
  return System_String__op_Equality(v6, name, 0);
}


bool EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__4(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  EventMuralUpdateAction_c *v5; // x8
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  UnityEngine_Object_o *obj; // x8
  System_String_o *v9; // x19
  System_String_o *name; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = id;
  if ( (byte_4C343F0 & 1) == 0 )
  {
    sub_1C32C20(&EventMuralUpdateAction_TypeInfo);
    sub_1C32C20(&StringLiteral_4952/*"D2"*/);
    byte_4C343F0 = 1;
  }
  v4 = System_Int32__ToString_65028652((int32_t)&v12, (System_String_o *)StringLiteral_4952/*"D2"*/, 0);
  v5 = EventMuralUpdateAction_TypeInfo;
  v6 = v4;
  if ( !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v5 = EventMuralUpdateAction_TypeInfo;
  }
  v7 = System_String__Concat_63518544(v6, v5->static_fields->SPRITE_NAME_END_MALE, 0);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_1C32E7C(v7);
  v9 = v7;
  name = UnityEngine_Object__get_name(obj, 0);
  return System_String__op_Equality(v9, name, 0);
}


bool EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__5(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  EventMuralUpdateAction_c *v5; // x8
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  UnityEngine_Object_o *obj; // x8
  System_String_o *v9; // x19
  System_String_o *name; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = id;
  if ( (byte_4C343F2 & 1) == 0 )
  {
    sub_1C32C20(&EventMuralUpdateAction_TypeInfo);
    sub_1C32C20(&StringLiteral_4952/*"D2"*/);
    byte_4C343F2 = 1;
  }
  v4 = System_Int32__ToString_65028652((int32_t)&v12, (System_String_o *)StringLiteral_4952/*"D2"*/, 0);
  v5 = EventMuralUpdateAction_TypeInfo;
  v6 = v4;
  if ( !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v5 = EventMuralUpdateAction_TypeInfo;
  }
  v7 = System_String__Concat_63518544(v6, v5->static_fields->SPRITE_NAME_END_FEMALE, 0);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_1C32E7C(v7);
  v9 = v7;
  name = UnityEngine_Object__get_name(obj, 0);
  return System_String__op_Equality(v9, name, 0);
}