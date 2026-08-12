void EventMuralUpdateAction___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventMuralUpdateAction_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventMuralUpdateAction_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596CFF2 & 1) == 0 )
  {
    sub_2213A60(&EventMuralUpdateAction_TypeInfo);
    sub_2213A60(&StringLiteral_17964/*"bit_mural_update{0}"*/);
    sub_2213A60(&StringLiteral_17222/*"_f"*/);
    sub_2213A60(&StringLiteral_17238/*"_m"*/);
    byte_596CFF2 = 1;
  }
  v7 = StringLiteral_17964/*"bit_mural_update{0}"*/;
  EventMuralUpdateAction_TypeInfo->static_fields->ANIM_NAME = (struct System_String_o *)StringLiteral_17964/*"bit_mural_update{0}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventMuralUpdateAction_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_17238/*"_m"*/;
  static_fields = EventMuralUpdateAction_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_END_MALE = (struct System_String_o *)StringLiteral_17238/*"_m"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SPRITE_NAME_END_MALE,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_17222/*"_f"*/;
  v17 = EventMuralUpdateAction_TypeInfo->static_fields;
  v17->SPRITE_NAME_END_FEMALE = (struct System_String_o *)StringLiteral_17222/*"_f"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->SPRITE_NAME_END_FEMALE, v16, v18, v19, v20, v21, v22, v23);
}


void EventMuralUpdateAction___ctor(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596CFF1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CFF1 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.localizationKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.localizationKey, v9, v2, v3, v4, v5, v6, v7);
  this->fields.isPlayAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventMuralUpdateAction__Awake(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  struct CStateManager_EventMuralUpdateAction__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_596CFE8 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_EventMuralUpdateAction___ctor__);
    sub_2213A60(&Method_CStateManager_EventMuralUpdateAction__add__);
    sub_2213A60(&CStateManager_EventMuralUpdateAction__TypeInfo);
    sub_2213A60(&EventMuralUpdateAction_StateNone_TypeInfo);
    sub_2213A60(&EventMuralUpdateAction_StatePlay_TypeInfo);
    sub_2213A60(&EventMuralUpdateAction_StateTouchWait_TypeInfo);
    byte_596CFE8 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_2213CCC(CStateManager_EventMuralUpdateAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3E83D54 *)Method_CStateManager_EventMuralUpdateAction___ctor__);
    this->fields.fsm = (struct CStateManager_EventMuralUpdateAction__o *)v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v12 = (Il2CppObject *)sub_2213CCC(EventMuralUpdateAction_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E83E04 *)Method_CStateManager_EventMuralUpdateAction__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (Il2CppObject *)sub_2213CCC(EventMuralUpdateAction_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15
      || (CStateManager_object___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_3E83E04 *)Method_CStateManager_EventMuralUpdateAction__add__),
          v17 = (CStateManager_T__o *)*p_fsm,
          v18 = (Il2CppObject *)sub_2213CCC(EventMuralUpdateAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v18, 0),
          !v17) )
    {
LABEL_9:
      sub_2213CDC(v13, v14);
    }
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_3E83E04 *)Method_CStateManager_EventMuralUpdateAction__add__);
    EventMuralUpdateAction__SetState(this, 0, v19);
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
  if ( (byte_596CFEF & 1) == 0 )
  {
    this = (EventMuralUpdateAction_o *)sub_2213A60(&Method_CStateManager_EventMuralUpdateAction__getState__);
    byte_596CFEF = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_2213CDC(this, method);
  return fsm->fields.m_state;
}


void EventMuralUpdateAction__Init(
        EventMuralUpdateAction_o *this,
        int32_t eventMuralId,
        int32_t eventId,
        bool isPlayAnim,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x2
  struct EventMuralEntity_o *eventMuralEntity; // x8
  System_String_o *ANIM_NAME; // x20
  Il2CppObject *v15; // x0
  struct System_String_o *v16; // x0
  System_String_o **p_playAnimationName; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  UnityEngine_Animation_o **p_animation; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppObject *v32; // x0
  SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  __int64 v41; // x2
  UnityEngine_Object_o *simpleAnimation; // x23
  __int64 v43; // x2
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_GameObject_o *v45; // x23
  __int64 v46; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v48; // x0
  UnityEngine_Object_o *v49; // x22
  UnityEngine_TrackedReference_o *Item; // x20
  UnityEngine_Animation_c *v51; // x8
  UnityEngine_GameObject_o *v52; // x20
  __int64 v53; // x9
  SimpleAnimation_State_c **v54; // x10
  __int64 v55; // x0
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596CFEA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMuralMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
    sub_2213A60(&EventMuralUpdateAction_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596CFEA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  EventMuralUpdateAction__SetState(this, 0, v11);
  this->fields.eventMuralId = eventMuralId;
  this->fields.isPlayAnim = isPlayAnim;
  if ( !isPlayAnim )
  {
    this->fields.eventId = eventId;
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_50;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMuralMaster___);
  if ( !gameObject )
    goto LABEL_50;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
          (Il2CppObject **)&this->fields.eventMuralEntity,
          eventMuralId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__) )
    return;
  gameObject = (UnityEngine_GameObject_o *)EventMuralUpdateAction_TypeInfo;
  if ( !*(&EventMuralUpdateAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo, v10, v12);
  eventMuralEntity = this->fields.eventMuralEntity;
  if ( !eventMuralEntity )
    goto LABEL_50;
  ANIM_NAME = EventMuralUpdateAction_TypeInfo->static_fields->ANIM_NAME;
  id = eventMuralEntity->fields.id;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
  v16 = System_String__Format(ANIM_NAME, v15, 0);
  this->fields.playAnimationName = v16;
  p_playAnimationName = &this->fields.playAnimationName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playAnimationName,
    (int32_t)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           (UnityEngine_Component_o *)gameObject,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__58855044;
  p_animation = &this->fields.animation;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animation,
    (int32_t)ComponentInChildren_object__58855044,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_50;
  v32 = UnityEngine_Component__GetComponentInChildren_object__58855044(
          (UnityEngine_Component_o *)gameObject,
          (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)v32;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimation,
    (int32_t)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_simpleAnimation;
    if ( *p_simpleAnimation )
    {
      gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                 (SimpleAnimation_o *)gameObject,
                                                 *p_playAnimationName,
                                                 0);
      if ( gameObject )
      {
        klass = (UnityEngine_Animation_c *)gameObject->klass;
        v45 = gameObject;
        v46 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
        if ( *(_WORD *)&gameObject->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v46;
            p_offset += 2;
            if ( !v46 )
              goto LABEL_22;
          }
          v48 = (__int64)(&klass[1]._1.properties + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_22:
          v48 = sub_224BC3C(gameObject, SimpleAnimation_State_TypeInfo, 14);
        }
        gameObject = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v48)(
                                                   v45,
                                                   *(_QWORD *)(v48 + 8));
        if ( *p_simpleAnimation )
        {
          SimpleAnimation__set_clip(*p_simpleAnimation, (UnityEngine_AnimationClip_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)*p_simpleAnimation;
          if ( *p_simpleAnimation )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
            gameObject = (UnityEngine_GameObject_o *)*p_animation;
            if ( *p_animation )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)gameObject,
                                                         *p_playAnimationName,
                                                         0);
              if ( gameObject )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
                gameObject = (UnityEngine_GameObject_o *)*p_simpleAnimation;
                if ( *p_simpleAnimation )
                {
                  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                             (SimpleAnimation_o *)gameObject,
                                                             *p_playAnimationName,
                                                             0);
                  if ( gameObject )
                  {
                    v51 = (UnityEngine_Animation_c *)gameObject->klass;
                    v52 = gameObject;
                    v53 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
                    if ( *(_WORD *)&gameObject->klass->_2.rank )
                    {
                      v54 = (SimpleAnimation_State_c **)&v51->_1.interfaceOffsets->offset;
                      while ( *(v54 - 1) != SimpleAnimation_State_TypeInfo )
                      {
                        --v53;
                        v54 += 2;
                        if ( !v53 )
                          goto LABEL_45;
                      }
                      v55 = (__int64)(&v51[1]._1.name + 2 * *(_DWORD *)v54);
                    }
                    else
                    {
LABEL_45:
                      v55 = sub_224BC3C(gameObject, SimpleAnimation_State_TypeInfo, 6);
                    }
                    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, double))v55)(
                      v52,
                      *(_QWORD *)(v55 + 8),
                      0.0);
                    goto LABEL_48;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_2213CDC(gameObject, v10);
  }
  v49 = (UnityEngine_Object_o *)*p_animation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v43);
  if ( UnityEngine_Object__op_Inequality(v49, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_animation;
    if ( !*p_animation )
      goto LABEL_50;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                               (UnityEngine_Animation_o *)gameObject,
                                               *p_playAnimationName,
                                               0);
    if ( !*p_animation )
      goto LABEL_50;
    UnityEngine_Animation__set_clip(*p_animation, (UnityEngine_AnimationClip_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)*p_animation;
    if ( !*p_animation )
      goto LABEL_50;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)*p_animation;
    if ( !*p_animation )
      goto LABEL_50;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)gameObject,
                                               *p_playAnimationName,
                                               0);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_50;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0);
      UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0);
    }
  }
LABEL_48:
  EventMuralUpdateAction__SetAnimationEvent(this, v10);
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
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v17; // x0
  System_Action_o *v18; // x21
  UnityEngine_TrackedReference_o *Item; // x20
  const MethodInfo *v20; // x2

  if ( (byte_596CFED & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_EventMuralUpdateAction__Play_b__28_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CFED = 1;
  }
  this->fields.endAct = end_act;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endAct,
    (int32_t)end_act,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v17 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v14, v15);
      v17 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v17->static_fields->DEFAULT_FADE_TIME;
  }
  v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_EventMuralUpdateAction__Play_b__28_0__, 0);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v18, 0);
  if ( this->fields.isPlayAnim )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
    if ( gameObject )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)gameObject,
                                                 this->fields.playAnimationName,
                                                 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_TrackedReference__op_Equality(Item, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        EventMuralUpdateAction__SetState(this, 2, v20);
        return;
      }
      if ( Item )
      {
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0);
        return;
      }
    }
LABEL_16:
    sub_2213CDC(gameObject, v13);
  }
}


void EventMuralUpdateAction__SetAnimationEvent(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596CFEE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventMuralUpdateAction_OnPlayEnd__);
    byte_596CFEE = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventMuralUpdateAction_OnPlayEnd__, 0);
  if ( !effectActionComponent )
    sub_2213CDC(v5, v6);
  effectActionComponent->fields.endAction = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&effectActionComponent->fields.endAction,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void EventMuralUpdateAction__SetState(EventMuralUpdateAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_596CFF0 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_EventMuralUpdateAction__setState__);
    byte_596CFF0 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_EventMuralUpdateAction__setState__);
}


void EventMuralUpdateAction__Setup(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  EventMuralEntity_array *OpenedEntitiesFromId; // x0
  System_Object_array *v7; // x20
  struct UnityEngine_GameObject_array *muralObjectList; // x24
  unsigned __int64 v9; // x25
  int klass_high; // w28
  __int64 v11; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_GameObject_o *v18; // x1
  UnityEngine_Object_o **v19; // x21
  System_Func_object__bool__o *v20; // x23
  __int64 v21; // x2
  System_Func_object__bool__o *v22; // x0
  intptr_t *v23; // x8
  System_Func_T__bool__o *v24; // x23
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Object_o *muralMaleObject; // x23
  __int64 v27; // x2
  UnityEngine_Object_o *v28; // x22
  UnityEngine_Object_o *muralFemaleObject; // x23
  bool v30; // w1
  struct EventMuralEntity_o *eventMuralEntity; // x8
  System_String_o *message; // x1
  bool IsNullOrEmpty; // w0
  __int64 v34; // x1
  __int64 v35; // x2
  struct UILabel_o *detailText; // x20
  System_String_o *v37; // x0
  struct System_String_o *localizationKey; // x21
  System_String_o *v39; // x21
  Il2CppObject *v40; // x22
  Il2CppObject *v41; // x0
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x2
  int32_t v44; // [xsp+0h] [xbp-70h] BYREF
  int32_t v45; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t total[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596CFEB & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_EventMuralEntity___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMuralMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_EventMuralEntity__bool__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__0__);
    sub_2213A60(&Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__1__);
    sub_2213A60(&Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__2__);
    sub_2213A60(&EventMuralUpdateAction___c__DisplayClass26_0_TypeInfo);
    sub_2213A60(&StringLiteral_5828/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/);
    byte_596CFEB = 1;
  }
  *(_QWORD *)total = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_54;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           transform,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_54;
  BYTE5(transform[4].monitor) = 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMuralMaster___);
  if ( this->fields.isPlayAnim )
  {
    if ( !transform )
      goto LABEL_54;
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
      goto LABEL_54;
    OpenedEntitiesFromId = EventMuralMaster__GetOpenedEntitiesFromEventId(
                             (EventMuralMaster_o *)transform,
                             this->fields.eventId,
                             total,
                             &total[1],
                             0);
  }
  v7 = (System_Object_array *)OpenedEntitiesFromId;
  transform = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0);
  if ( !transform )
    goto LABEL_54;
  muralObjectList = this->fields.muralObjectList;
  if ( !muralObjectList )
    goto LABEL_54;
  if ( SLODWORD(muralObjectList->max_length) >= 1 )
  {
    v9 = 0;
    klass_high = HIDWORD(transform[3].klass);
    while ( 1 )
    {
      v11 = sub_2213CCC(EventMuralUpdateAction___c__DisplayClass26_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      if ( v9 >= LODWORD(muralObjectList->max_length) )
        sub_2213CE4(transform);
      if ( !v11 )
        goto LABEL_54;
      v18 = muralObjectList->m_Items[v9];
      *(_QWORD *)(v11 + 16) = v18;
      v19 = (UnityEngine_Object_o **)(v11 + 16);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      v20 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventMuralEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v20,
        (Il2CppObject *)v11,
        Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__0__,
        0);
      if ( !BasicHelper__Any_object__58785420(
              v7,
              (System_Func_T__bool__o *)v20,
              (const MethodInfo_380FE8C *)Method_BasicHelper_Any_EventMuralEntity___) )
      {
        if ( klass_high == 2 )
        {
          v22 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventMuralEntity__bool__TypeInfo);
          v23 = &Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__2__;
        }
        else
        {
          if ( klass_high != 1 )
            break;
          v22 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventMuralEntity__bool__TypeInfo);
          v23 = &Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__1__;
        }
        v24 = (System_Func_T__bool__o *)v22;
        System_Func_object__bool____ctor(v22, (Il2CppObject *)v11, *v23, 0);
        if ( !BasicHelper__Any_object__58785420(
                v7,
                v24,
                (const MethodInfo_380FE8C *)Method_BasicHelper_Any_EventMuralEntity___) )
          break;
      }
      v25 = *v19;
      muralMaleObject = (UnityEngine_Object_o *)this->fields.muralMaleObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v21);
      if ( UnityEngine_Object__op_Equality(v25, muralMaleObject, 0) && klass_high != 1 )
        break;
      v28 = *v19;
      muralFemaleObject = (UnityEngine_Object_o *)this->fields.muralFemaleObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v27);
      if ( UnityEngine_Object__op_Equality(v28, muralFemaleObject, 0) && klass_high != 2 )
        break;
      transform = (UnityEngine_Component_o *)*v19;
      if ( !*v19 )
        goto LABEL_54;
      v30 = 1;
LABEL_34:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v30, 0);
      if ( (__int64)++v9 >= SLODWORD(muralObjectList->max_length) )
        goto LABEL_38;
    }
    transform = (UnityEngine_Component_o *)*v19;
    if ( !*v19 )
      goto LABEL_54;
    v30 = 0;
    goto LABEL_34;
  }
LABEL_38:
  if ( !this->fields.isPlayAnim )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.localizationKey, 0);
    detailText = this->fields.detailText;
    if ( IsNullOrEmpty )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
      v37 = (System_String_o *)StringLiteral_5828/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/;
    }
    else
    {
      localizationKey = this->fields.localizationKey;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
      v37 = localizationKey;
    }
    v39 = LocalizationManager__Get(v37, 0);
    v45 = total[0];
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v45);
    v44 = total[1];
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v44);
    transform = (UnityEngine_Component_o *)System_String__Format_75697880(v39, v40, v41, 0);
    if ( detailText )
    {
      message = (System_String_o *)transform;
      transform = (UnityEngine_Component_o *)detailText;
      goto LABEL_51;
    }
LABEL_54:
    sub_2213CDC(transform, v4);
  }
  eventMuralEntity = this->fields.eventMuralEntity;
  if ( !eventMuralEntity )
    goto LABEL_54;
  transform = (UnityEngine_Component_o *)this->fields.detailText;
  if ( !transform )
    goto LABEL_54;
  message = eventMuralEntity->fields.message;
LABEL_51:
  UILabel__set_text((UILabel_o *)transform, message, 0);
  EventMuralUpdateAction__SetupScreenTouchInfo(this, v42);
  transform = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !transform )
    goto LABEL_54;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !transform )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  EventMuralUpdateAction__SetState(this, 1, v43);
}


void EventMuralUpdateAction__SetupScreenTouchInfo(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_screenTouchInfo; // x19
  UnityEngine_Object_o *screenTouchInfo; // x21
  __int64 v6; // x1
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v9; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  const MethodInfo *v11; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596CFEC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CFEC = 1;
  }
  p_screenTouchInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v9 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0), !v9)
      || (ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v9, Instance, 0, 0),
          GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, v11),
          !ScreeenTouchInfo) )
    {
LABEL_13:
      sub_2213CDC(Instance, v6);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         ScreeenTouchInfo,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_screenTouchInfo->klass = (MissionNaviTransitionBoardItem_c *)Component_object;
    sub_2213A04(p_screenTouchInfo, (int32_t)Component_object, v13, v14, v15, v16, v17, v18);
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
  __int64 v2; // x2
  CStateManager_T__o *fsm; // x0

  if ( (byte_596CFE9 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_EventMuralUpdateAction__update__);
    sub_2213A60(&CTouch_TypeInfo);
    byte_596CFE9 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3E83E6C *)Method_CStateManager_EventMuralUpdateAction__update__);
}


void EventMuralUpdateAction___Play_b__28_0(EventMuralUpdateAction_o *this, const MethodInfo *method)
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
  __int64 v5; // x2
  __int64 v6; // x2
  struct SimpleAnimation_o *v7; // x8
  UnityEngine_Object_o *m_Clip; // x20
  struct SimpleAnimation_o *v9; // x19
  System_String_o *name; // x1
  UnityEngine_Object_o *animation; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v15; // x19
  System_String_o *v16; // x1

  if ( (byte_596CFF3 & 1) == 0 )
  {
    this = (EventMuralUpdateAction_StatePlay_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CFF3 = 1;
  }
  if ( !that )
    goto LABEL_27;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    this = (EventMuralUpdateAction_StatePlay_o *)that->fields.simpleAnimation;
    if ( !this )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    v7 = that->fields.simpleAnimation;
    if ( !v7 )
      goto LABEL_27;
    m_Clip = (UnityEngine_Object_o *)v7->fields.m_Clip;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v6);
    this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = that->fields.simpleAnimation;
      if ( v9 )
      {
        this = (EventMuralUpdateAction_StatePlay_o *)v9->fields.m_Clip;
        if ( this )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          SimpleAnimation__Play_78552168(v9, name, 0);
          return;
        }
      }
LABEL_27:
      sub_2213CDC(this, that);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Object__op_Inequality(clip, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v15 = that->fields.animation;
        if ( !v15 )
          goto LABEL_27;
        this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Animation__get_clip(v15, 0);
        if ( !this )
          goto LABEL_27;
        v16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        UnityEngine_Animation__Play_83078544(v15, v16, 0);
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
    sub_2213CDC(this, that);
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
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x2

  if ( (byte_596CFF4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventMuralUpdateAction_StateTouchWait_update__);
    sub_2213A60(&Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_2213A60(&EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_596CFF4 = 1;
  }
  v4 = sub_2213CCC(EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14, v15);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v13 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 128LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v16 = Method_EventMuralUpdateAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventMuralUpdateAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_2213A78(Method_EventMuralUpdateAction_StateTouchWait_update__);
          v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = AvalonSceneManager_TypeInfo;
          if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v18, v19);
            v21 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
          v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v23,
            (Il2CppObject *)v4,
            Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v23, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v13;
            if ( *(_QWORD *)v13 )
            {
              EventMuralUpdateAction__SetState((EventMuralUpdateAction_o *)isTouchPush, 0, v24);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_2213CDC(isTouchPush, v6);
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
    sub_2213CDC(this, method);
  ActionExtensions__Call(that->fields.endAct, 0);
}


void EventMuralUpdateAction___c__DisplayClass26_0___ctor(
        EventMuralUpdateAction___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventMuralUpdateAction___c__DisplayClass26_0___Setup_b__0(
        EventMuralUpdateAction___c__DisplayClass26_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  EventMuralUpdateAction___c__DisplayClass26_0_o *v4; // x19
  System_Func_int__bool__o *_9__3; // x22
  System_Int32_array *imageIds; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v4 = this;
  if ( (byte_596CFF5 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    this = (EventMuralUpdateAction___c__DisplayClass26_0_o *)sub_2213A60(&Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__3__);
    byte_596CFF5 = 1;
  }
  if ( !ent )
    sub_2213CDC(this, ent);
  _9__3 = v4->fields.__9__3;
  imageIds = ent->fields.imageIds;
  if ( !_9__3 )
  {
    _9__3 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__3,
      (Il2CppObject *)v4,
      Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__3__,
      0);
    v4->fields.__9__3 = _9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__3, (int32_t)_9__3, v7, v8, v9, v10, v11, v12);
  }
  return BasicHelper__Any_int__58784608(
           imageIds,
           (System_Func_T__bool__o *)_9__3,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
}


bool EventMuralUpdateAction___c__DisplayClass26_0___Setup_b__1(
        EventMuralUpdateAction___c__DisplayClass26_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  EventMuralUpdateAction___c__DisplayClass26_0_o *v4; // x19
  System_Func_int__bool__o *_9__4; // x22
  System_Int32_array *imageIds; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v4 = this;
  if ( (byte_596CFF7 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    this = (EventMuralUpdateAction___c__DisplayClass26_0_o *)sub_2213A60(&Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__4__);
    byte_596CFF7 = 1;
  }
  if ( !ent )
    sub_2213CDC(this, ent);
  _9__4 = v4->fields.__9__4;
  imageIds = ent->fields.imageIds;
  if ( !_9__4 )
  {
    _9__4 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__4__,
      0);
    v4->fields.__9__4 = _9__4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__4, (int32_t)_9__4, v7, v8, v9, v10, v11, v12);
  }
  return BasicHelper__Any_int__58784608(
           imageIds,
           (System_Func_T__bool__o *)_9__4,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
}


bool EventMuralUpdateAction___c__DisplayClass26_0___Setup_b__2(
        EventMuralUpdateAction___c__DisplayClass26_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  EventMuralUpdateAction___c__DisplayClass26_0_o *v4; // x19
  System_Func_int__bool__o *_9__5; // x22
  System_Int32_array *imageIds; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v4 = this;
  if ( (byte_596CFF9 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    this = (EventMuralUpdateAction___c__DisplayClass26_0_o *)sub_2213A60(&Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__5__);
    byte_596CFF9 = 1;
  }
  if ( !ent )
    sub_2213CDC(this, ent);
  _9__5 = v4->fields.__9__5;
  imageIds = ent->fields.imageIds;
  if ( !_9__5 )
  {
    _9__5 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventMuralUpdateAction___c__DisplayClass26_0__Setup_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v7, v8, v9, v10, v11, v12);
  }
  return BasicHelper__Any_int__58784608(
           imageIds,
           (System_Func_T__bool__o *)_9__5,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
}


bool EventMuralUpdateAction___c__DisplayClass26_0___Setup_b__3(
        EventMuralUpdateAction___c__DisplayClass26_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v7; // x19
  System_String_o *name; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = id;
  if ( (byte_596CFF6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5141/*"D2"*/);
    byte_596CFF6 = 1;
  }
  v4 = System_Int32__ToString_77138656((int32_t)&v10, (System_String_o *)StringLiteral_5141/*"D2"*/, 0);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_2213CDC(v4, v5);
  v7 = v4;
  name = UnityEngine_Object__get_name(obj, 0);
  return System_String__op_Equality(v7, name, 0);
}


bool EventMuralUpdateAction___c__DisplayClass26_0___Setup_b__4(
        EventMuralUpdateAction___c__DisplayClass26_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  EventMuralUpdateAction_c *v7; // x8
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v12; // x19
  System_String_o *name; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = id;
  if ( (byte_596CFF8 & 1) == 0 )
  {
    sub_2213A60(&EventMuralUpdateAction_TypeInfo);
    sub_2213A60(&StringLiteral_5141/*"D2"*/);
    byte_596CFF8 = 1;
  }
  v4 = System_Int32__ToString_77138656((int32_t)&v15, (System_String_o *)StringLiteral_5141/*"D2"*/, 0);
  v7 = EventMuralUpdateAction_TypeInfo;
  v8 = v4;
  if ( !*(&EventMuralUpdateAction_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo, v5, v6);
    v7 = EventMuralUpdateAction_TypeInfo;
  }
  v9 = System_String__Concat_75651716(v8, v7->static_fields->SPRITE_NAME_END_MALE, 0);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_2213CDC(v9, v10);
  v12 = v9;
  name = UnityEngine_Object__get_name(obj, 0);
  return System_String__op_Equality(v12, name, 0);
}


bool EventMuralUpdateAction___c__DisplayClass26_0___Setup_b__5(
        EventMuralUpdateAction___c__DisplayClass26_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  EventMuralUpdateAction_c *v7; // x8
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v12; // x19
  System_String_o *name; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = id;
  if ( (byte_596CFFA & 1) == 0 )
  {
    sub_2213A60(&EventMuralUpdateAction_TypeInfo);
    sub_2213A60(&StringLiteral_5141/*"D2"*/);
    byte_596CFFA = 1;
  }
  v4 = System_Int32__ToString_77138656((int32_t)&v15, (System_String_o *)StringLiteral_5141/*"D2"*/, 0);
  v7 = EventMuralUpdateAction_TypeInfo;
  v8 = v4;
  if ( !*(&EventMuralUpdateAction_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo, v5, v6);
    v7 = EventMuralUpdateAction_TypeInfo;
  }
  v9 = System_String__Concat_75651716(v8, v7->static_fields->SPRITE_NAME_END_FEMALE, 0);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_2213CDC(v9, v10);
  v12 = v9;
  name = UnityEngine_Object__get_name(obj, 0);
  return System_String__op_Equality(v12, name, 0);
}