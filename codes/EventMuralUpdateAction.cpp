void __fastcall EventMuralUpdateAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct EventMuralUpdateAction_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct EventMuralUpdateAction_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FB27E & 1) == 0 )
  {
    sub_1B64870(&EventMuralUpdateAction_TypeInfo, v1);
    sub_1B64870(&StringLiteral_17185/*"bit_mural_update{0}"*/, v4);
    sub_1B64870(&StringLiteral_16472/*"_f"*/, v5);
    sub_1B64870(&StringLiteral_16486/*"_m"*/, v6);
    byte_49FB27E = 1;
  }
  EventMuralUpdateAction_TypeInfo->static_fields->ANIM_NAME = (struct System_String_o *)StringLiteral_17185/*"bit_mural_update{0}"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)EventMuralUpdateAction_TypeInfo->static_fields,
    StringLiteral_17185/*"bit_mural_update{0}"*/,
    v2,
    v3);
  v7 = StringLiteral_16486/*"_m"*/;
  static_fields = EventMuralUpdateAction_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_END_MALE = (struct System_String_o *)StringLiteral_16486/*"_m"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->SPRITE_NAME_END_MALE, v7, v9, v10);
  v11 = StringLiteral_16472/*"_f"*/;
  v12 = EventMuralUpdateAction_TypeInfo->static_fields;
  v12->SPRITE_NAME_END_FEMALE = (struct System_String_o *)StringLiteral_16472/*"_f"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v12->SPRITE_NAME_END_FEMALE, v11, v13, v14);
}


void __fastcall EventMuralUpdateAction___ctor(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  this->fields.isPlayAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventMuralUpdateAction__Awake(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CStateManager_EventMuralUpdateAction__o **p_fsm; // x20
  CStateManager_T__o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x20
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_49FB275 & 1) == 0 )
  {
    sub_1B64870(&Method_CStateManager_EventMuralUpdateAction___ctor__, method);
    sub_1B64870(&Method_CStateManager_EventMuralUpdateAction__add__, v3);
    sub_1B64870(&CStateManager_EventMuralUpdateAction__TypeInfo, v4);
    sub_1B64870(&EventMuralUpdateAction_StateNone_TypeInfo, v5);
    sub_1B64870(&EventMuralUpdateAction_StatePlay_TypeInfo, v6);
    sub_1B64870(&EventMuralUpdateAction_StateTouchWait_TypeInfo, v7);
    byte_49FB275 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v9 = (CStateManager_T__o *)sub_1B64ABC(CStateManager_EventMuralUpdateAction__TypeInfo);
    CStateManager_object____ctor(
      v9,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3063598 *)Method_CStateManager_EventMuralUpdateAction___ctor__);
    this->fields.fsm = (struct CStateManager_EventMuralUpdateAction__o *)v9;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v9, v10, v11);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v13 = (Il2CppObject *)sub_1B64ABC(EventMuralUpdateAction_StateNone_TypeInfo);
    System_Object___ctor(v13, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3063640 *)Method_CStateManager_EventMuralUpdateAction__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (Il2CppObject *)sub_1B64ABC(EventMuralUpdateAction_StatePlay_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !v16
      || (CStateManager_object___add(
            v16,
            1,
            (IState_T__o *)v17,
            (const MethodInfo_3063640 *)Method_CStateManager_EventMuralUpdateAction__add__),
          v18 = (CStateManager_T__o *)*p_fsm,
          v19 = (Il2CppObject *)sub_1B64ABC(EventMuralUpdateAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v19, 0LL),
          !v18) )
    {
LABEL_9:
      sub_1B64ACC(v14, v15);
    }
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_3063640 *)Method_CStateManager_EventMuralUpdateAction__add__);
    EventMuralUpdateAction__SetState(this, 0, v20);
  }
  BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.muralObjectList, 0LL);
}


void __fastcall EventMuralUpdateAction__CheckAssertions(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.muralObjectList, 0LL);
}


int32_t __fastcall EventMuralUpdateAction__GetState(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  EventMuralUpdateAction_o *v2; // x19
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x8

  v2 = this;
  if ( (byte_49FB27C & 1) == 0 )
  {
    this = (EventMuralUpdateAction_o *)sub_1B64870(&Method_CStateManager_EventMuralUpdateAction__getState__, method);
    byte_49FB27C = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1B64ACC(this, method);
  return fsm->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMuralUpdateAction__Init(
        EventMuralUpdateAction_o *this,
        int32_t eventMuralId,
        int32_t eventId,
        bool isPlayAnim,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Animation_o *gameObject; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  struct EventMuralEntity_o **p_eventMuralEntity; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_String_o *ANIM_NAME; // x20
  Il2CppObject *v25; // x0
  struct System_String_o *v26; // x0
  System_String_o **p_playAnimationName; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *ComponentInChildren_object__48440272; // x0
  UnityEngine_Animation_o **p_animation; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x0
  SimpleAnimation_o **p_simpleAnimation; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  UnityEngine_Object_o *simpleAnimation; // x23
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v40; // x23
  __int64 v41; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v43; // x0
  UnityEngine_Object_o *v44; // x22
  UnityEngine_Animation_c *v45; // x8
  UnityEngine_Animation_o *v46; // x20
  __int64 v47; // x9
  SimpleAnimation_State_c **v48; // x10
  __int64 v49; // x0
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB277 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&eventMuralId);
    sub_1B64870(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMuralMaster___, v10);
    sub_1B64870(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v11);
    sub_1B64870(&EventMuralUpdateAction_TypeInfo, v12);
    sub_1B64870(&int_TypeInfo, v13);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v14);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B64870(&SimpleAnimation_State_TypeInfo, v16);
    byte_49FB277 = 1;
  }
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  EventMuralUpdateAction__SetState(this, 0, v19);
  this->fields.eventMuralId = eventMuralId;
  this->fields.isPlayAnim = isPlayAnim;
  if ( !isPlayAnim )
  {
    this->fields.eventId = eventId;
    return;
  }
  gameObject = (UnityEngine_Animation_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_51;
  gameObject = (UnityEngine_Animation_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)gameObject,
                                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMuralMaster___);
  if ( !gameObject )
    goto LABEL_51;
  p_eventMuralEntity = &this->fields.eventMuralEntity;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
          (Il2CppObject **)&this->fields.eventMuralEntity,
          eventMuralId,
          (const MethodInfo_30D61D4 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__) )
    return;
  gameObject = (UnityEngine_Animation_o *)EventMuralUpdateAction_TypeInfo;
  if ( !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
  if ( !*p_eventMuralEntity )
    goto LABEL_51;
  ANIM_NAME = EventMuralUpdateAction_TypeInfo->static_fields->ANIM_NAME;
  id = (*p_eventMuralEntity)->fields.id;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v21, v22, v23);
  v26 = System_String__Format(ANIM_NAME, v25, 0LL);
  this->fields.playAnimationName = v26;
  p_playAnimationName = &this->fields.playAnimationName;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.playAnimationName, (int32_t)v26, v28, v29);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_51;
  ComponentInChildren_object__48440272 = UnityEngine_Component__GetComponentInChildren_object__48440272(
                                           (UnityEngine_Component_o *)gameObject,
                                           (const MethodInfo_2E323D0 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48440272;
  p_animation = &this->fields.animation;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.animation,
    (int32_t)ComponentInChildren_object__48440272,
    v32,
    v33);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_51;
  v34 = UnityEngine_Component__GetComponentInChildren_object__48440272(
          (UnityEngine_Component_o *)gameObject,
          (const MethodInfo_2E323D0 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)v34;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimation, (int32_t)v34, v36, v37);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Animation_o *)*p_simpleAnimation;
    if ( *p_simpleAnimation )
    {
      gameObject = (UnityEngine_Animation_o *)SimpleAnimation__get_Item(
                                                (SimpleAnimation_o *)gameObject,
                                                *p_playAnimationName,
                                                0LL);
      if ( gameObject )
      {
        klass = gameObject->klass;
        v40 = gameObject;
        v41 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v41;
            p_offset += 2;
            if ( !v41 )
              goto LABEL_22;
          }
          v43 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_22:
          v43 = sub_1BB6850(gameObject, SimpleAnimation_State_TypeInfo, 14LL);
        }
        gameObject = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v43)(
                                                  v40,
                                                  *(_QWORD *)(v43 + 8));
        if ( *p_simpleAnimation )
        {
          SimpleAnimation__set_clip(*p_simpleAnimation, (UnityEngine_AnimationClip_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Animation_o *)*p_simpleAnimation;
          if ( *p_simpleAnimation )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
            gameObject = *p_animation;
            if ( *p_animation )
            {
              gameObject = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(
                                                        gameObject,
                                                        *p_playAnimationName,
                                                        0LL);
              if ( gameObject )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
                gameObject = (UnityEngine_Animation_o *)*p_simpleAnimation;
                if ( *p_simpleAnimation )
                {
                  gameObject = (UnityEngine_Animation_o *)SimpleAnimation__get_Item(
                                                            (SimpleAnimation_o *)gameObject,
                                                            *p_playAnimationName,
                                                            0LL);
                  if ( gameObject )
                  {
                    v45 = gameObject->klass;
                    v46 = gameObject;
                    v47 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
                    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
                    {
                      v48 = (SimpleAnimation_State_c **)&v45->_1.interfaceOffsets->offset;
                      while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
                      {
                        --v47;
                        v48 += 2;
                        if ( !v47 )
                          goto LABEL_46;
                      }
                      v49 = (__int64)(&v45[1]._1.namespaze + 2 * *(_DWORD *)v48);
                    }
                    else
                    {
LABEL_46:
                      v49 = sub_1BB6850(gameObject, SimpleAnimation_State_TypeInfo, 6LL);
                    }
                    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v49)(
                      v46,
                      *(_QWORD *)(v49 + 8),
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
    sub_1B64ACC(gameObject, v18);
  }
  v44 = (UnityEngine_Object_o *)*p_animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
  {
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_51;
    gameObject = (UnityEngine_Animation_o *)UnityEngine_Animation__GetClip(gameObject, *p_playAnimationName, 0LL);
    if ( !*p_animation )
      goto LABEL_51;
    UnityEngine_Animation__set_clip(*p_animation, (UnityEngine_AnimationClip_o *)gameObject, 0LL);
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_51;
    gameObject = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(gameObject, *p_playAnimationName, 0LL);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_51;
    gameObject = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(gameObject, *p_playAnimationName, 0LL);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
  }
LABEL_49:
  EventMuralUpdateAction__SetAnimationEvent(this, v18);
}


void __fastcall EventMuralUpdateAction__OnPlayEnd(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventMuralUpdateAction__SetState(this, 2, v2);
}


void __fastcall EventMuralUpdateAction__Play(
        EventMuralUpdateAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v14; // x0
  System_Action_o *v15; // x21

  if ( (byte_49FB27A & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, end_act);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v8);
    sub_1B64870(&Method_EventMuralUpdateAction__Play_b__26_0__, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_49FB27A = 1;
  }
  this->fields.endAct = end_act;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)end_act, (int32_t)method, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v14 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v14 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v14->static_fields->DEFAULT_FADE_TIME;
  }
  v15 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventMuralUpdateAction__Play_b__26_0__, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v15, 0LL);
  if ( this->fields.isPlayAnim )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)gameObject,
                                                 this->fields.playAnimationName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 1.0, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1B64ACC(gameObject, v12);
  }
}


void __fastcall EventMuralUpdateAction__SetAnimationEvent(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FB27B & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_EventMuralUpdateAction_OnPlayEnd__, v3);
    byte_49FB27B = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v5 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EventMuralUpdateAction_OnPlayEnd__, 0LL);
  if ( !effectActionComponent )
    sub_1B64ACC(v6, v7);
  effectActionComponent->fields.endAction = v5;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&effectActionComponent->fields.endAction, (int32_t)v5, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMuralUpdateAction__SetState(
        EventMuralUpdateAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_49FB27D & 1) == 0 )
  {
    sub_1B64870(&Method_CStateManager_EventMuralUpdateAction__setState__, *(_QWORD *)&state);
    byte_49FB27D = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B64ACC(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_30636CC *)Method_CStateManager_EventMuralUpdateAction__setState__);
}


void __fastcall EventMuralUpdateAction__Setup(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v16; // x1
  EventMuralEntity_array *OpenedEntitiesFromId; // x0
  System_Object_array *v18; // x20
  struct UnityEngine_GameObject_array *muralObjectList; // x24
  int klass_high; // w28
  unsigned __int64 v21; // x25
  __int64 v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_GameObject_o *v25; // x1
  UnityEngine_Object_o **v26; // x21
  System_Func_object__bool__o *v27; // x23
  System_Func_object__bool__o *v28; // x0
  __int64 *v29; // x8
  System_Func_T__bool__o *v30; // x23
  UnityEngine_Object_o *v31; // x22
  UnityEngine_Object_o *muralMaleObject; // x23
  bool v33; // w0
  UnityEngine_Object_o *v34; // x22
  UnityEngine_Object_o *muralFemaleObject; // x23
  bool v36; // w0
  bool v37; // w1
  UILabel_o *detailText; // x20
  struct EventMuralEntity_o *eventMuralEntity; // x8
  System_String_o *message; // x1
  System_String_o *v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x22
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x2
  int32_t v52; // [xsp+0h] [xbp-70h] BYREF
  int32_t v53; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t total[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FB278 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_EventMuralEntity___, method);
    sub_1B64870(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v3);
    sub_1B64870(&Method_DataManager_GetMaster_EventMuralMaster___, v4);
    sub_1B64870(&DataManager_TypeInfo, v5);
    sub_1B64870(&System_Func_EventMuralEntity__bool__TypeInfo, v6);
    sub_1B64870(&int_TypeInfo, v7);
    sub_1B64870(&LocalizationManager_TypeInfo, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__, v10);
    sub_1B64870(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__, v11);
    sub_1B64870(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__, v12);
    sub_1B64870(&EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo, v13);
    sub_1B64870(&StringLiteral_5603/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, v14);
    byte_49FB278 = 1;
  }
  *(_QWORD *)total = 0LL;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_49;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__48440272(
                                           transform,
                                           (const MethodInfo_2E323D0 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_49;
  BYTE5(transform[4].monitor) = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventMuralMaster___);
  if ( this->fields.isPlayAnim )
  {
    if ( !transform )
      goto LABEL_49;
    OpenedEntitiesFromId = EventMuralMaster__GetOpenedEntitiesFromId(
                             (EventMuralMaster_o *)transform,
                             this->fields.eventMuralId,
                             total,
                             &total[1],
                             0LL);
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
                             0LL);
  }
  v18 = (System_Object_array *)OpenedEntitiesFromId;
  transform = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !transform )
    goto LABEL_49;
  muralObjectList = this->fields.muralObjectList;
  if ( !muralObjectList )
    goto LABEL_49;
  if ( (int)muralObjectList->max_length >= 1 )
  {
    klass_high = HIDWORD(transform[3].klass);
    v21 = 0LL;
    while ( 1 )
    {
      v22 = sub_1B64ABC(EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v22, 0LL);
      if ( v21 >= muralObjectList->max_length )
        sub_1B64AD4(transform, v16);
      if ( !v22 )
        goto LABEL_49;
      v25 = muralObjectList->m_Items[v21];
      *(_QWORD *)(v22 + 16) = v25;
      v26 = (UnityEngine_Object_o **)(v22 + 16);
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)v25, v23, v24);
      v27 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_EventMuralEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v27,
        (Il2CppObject *)v22,
        Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__,
        0LL);
      if ( !BasicHelper__Any_object__48393208(
              v18,
              (System_Func_T__bool__o *)v27,
              (const MethodInfo_2E26BF8 *)Method_BasicHelper_Any_EventMuralEntity___) )
      {
        if ( klass_high == 2 )
        {
          v28 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_EventMuralEntity__bool__TypeInfo);
          v29 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__;
        }
        else
        {
          if ( klass_high != 1 )
            break;
          v28 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_EventMuralEntity__bool__TypeInfo);
          v29 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__;
        }
        v30 = (System_Func_T__bool__o *)v28;
        System_Func_object__bool____ctor(v28, (Il2CppObject *)v22, *v29, 0LL);
        if ( !BasicHelper__Any_object__48393208(
                v18,
                v30,
                (const MethodInfo_2E26BF8 *)Method_BasicHelper_Any_EventMuralEntity___) )
          break;
      }
      v31 = *v26;
      muralMaleObject = (UnityEngine_Object_o *)this->fields.muralMaleObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v33 = UnityEngine_Object__op_Equality(v31, muralMaleObject, 0LL);
      if ( klass_high != 1 && v33 )
        break;
      v34 = *v26;
      muralFemaleObject = (UnityEngine_Object_o *)this->fields.muralFemaleObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v36 = UnityEngine_Object__op_Equality(v34, muralFemaleObject, 0LL);
      if ( klass_high != 2 && v36 )
        break;
      transform = (UnityEngine_Component_o *)*v26;
      if ( !*v26 )
        goto LABEL_49;
      v37 = 1;
LABEL_34:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v37, 0LL);
      if ( (__int64)++v21 >= (int)muralObjectList->max_length )
        goto LABEL_38;
    }
    transform = (UnityEngine_Component_o *)*v26;
    if ( !*v26 )
      goto LABEL_49;
    v37 = 0;
    goto LABEL_34;
  }
LABEL_38:
  detailText = this->fields.detailText;
  if ( !this->fields.isPlayAnim )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5603/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, 0LL);
    v53 = total[0];
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v42, v43, v44);
    v52 = total[1];
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v46, v47, v48);
    transform = (UnityEngine_Component_o *)System_String__Format_61397948(v41, v45, v49, 0LL);
    if ( detailText )
    {
      message = (System_String_o *)transform;
      goto LABEL_46;
    }
LABEL_49:
    sub_1B64ACC(transform, v16);
  }
  eventMuralEntity = this->fields.eventMuralEntity;
  if ( !eventMuralEntity || !detailText )
    goto LABEL_49;
  message = eventMuralEntity->fields.message;
LABEL_46:
  UILabel__set_text(detailText, message, 0LL);
  EventMuralUpdateAction__SetupScreenTouchInfo(this, v50);
  transform = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !transform )
    goto LABEL_49;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  EventMuralUpdateAction__SetState(this, 1, v51);
}


void __fastcall EventMuralUpdateAction__SetupScreenTouchInfo(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantStatusBattleListViewItem_o *p_screenTouchInfo; // x19
  UnityEngine_Object_o *screenTouchInfo; // x21
  __int64 v7; // x1
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v10; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  const MethodInfo *v12; // x1
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FB279 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FB279 = 1;
  }
  p_screenTouchInfo = (ServantStatusBattleListViewItem_o *)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v10 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0LL), !v10)
      || (ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v10, Instance, 0, 0LL),
          GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, v12),
          !ScreeenTouchInfo) )
    {
LABEL_13:
      sub_1B64ACC(Instance, v7);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         ScreeenTouchInfo,
                         (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_screenTouchInfo->klass = (ServantStatusBattleListViewItem_c *)Component_object;
    sub_1B64814(p_screenTouchInfo, (int32_t)Component_object, v14, v15);
  }
  Instance = (UnityEngine_Transform_o *)p_screenTouchInfo->klass;
  if ( !p_screenTouchInfo->klass )
    goto LABEL_13;
  Instance = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


void __fastcall EventMuralUpdateAction__Update(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CStateManager_T__o *fsm; // x0

  if ( (byte_49FB276 & 1) == 0 )
  {
    sub_1B64870(&Method_CStateManager_EventMuralUpdateAction__update__, method);
    sub_1B64870(&CTouch_TypeInfo, v3);
    byte_49FB276 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_30636A8 *)Method_CStateManager_EventMuralUpdateAction__update__);
}


void __fastcall EventMuralUpdateAction___Play_b__26_0(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.isPlayAnim )
    EventMuralUpdateAction__SetState(this, 2, v2);
}


void __fastcall EventMuralUpdateAction_StateNone___ctor(
        EventMuralUpdateAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMuralUpdateAction_StateNone__begin(
        EventMuralUpdateAction_StateNone_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMuralUpdateAction_StateNone__end(
        EventMuralUpdateAction_StateNone_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMuralUpdateAction_StateNone__update(
        EventMuralUpdateAction_StateNone_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMuralUpdateAction_StatePlay___ctor(
        EventMuralUpdateAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMuralUpdateAction_StatePlay__begin(
        EventMuralUpdateAction_StatePlay_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v7; // x19
  System_String_o *name; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v11; // x19
  System_String_o *v12; // x1

  if ( (byte_49FB27F & 1) == 0 )
  {
    this = (EventMuralUpdateAction_StatePlay_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, that);
    byte_49FB27F = 1;
  }
  if ( !that )
    goto LABEL_27;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    this = (EventMuralUpdateAction_StatePlay_o *)that->fields.simpleAnimation;
    if ( !this )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    v5 = that->fields.simpleAnimation;
    if ( !v5 )
      goto LABEL_27;
    monitor = (UnityEngine_Object_o *)v5[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = that->fields.simpleAnimation;
      if ( v7 )
      {
        this = (EventMuralUpdateAction_StatePlay_o *)v7[1].monitor;
        if ( this )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          SimpleAnimation__Play_63521240(v7, name, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1B64ACC(this, that);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
    {
      this = (EventMuralUpdateAction_StatePlay_o *)that->fields.animation;
      if ( !this )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (EventMuralUpdateAction_StatePlay_o *)that->fields.animation;
      if ( !this )
        goto LABEL_27;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = that->fields.animation;
        if ( !v11 )
          goto LABEL_27;
        this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Animation__get_clip(v11, 0LL);
        if ( !this )
          goto LABEL_27;
        v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        UnityEngine_Animation__Play_68881008(v11, v12, 0LL);
      }
    }
  }
}


void __fastcall EventMuralUpdateAction_StatePlay__end(
        EventMuralUpdateAction_StatePlay_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMuralUpdateAction_StatePlay__update(
        EventMuralUpdateAction_StatePlay_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMuralUpdateAction_StateTouchWait___ctor(
        EventMuralUpdateAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMuralUpdateAction_StateTouchWait__begin(
        EventMuralUpdateAction_StateTouchWait_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (EventMuralUpdateAction_StateTouchWait_o *)that->fields.screenTouchInfo) == 0LL
    || (this = (EventMuralUpdateAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL )
  {
    sub_1B64ACC(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall EventMuralUpdateAction_StateTouchWait__end(
        EventMuralUpdateAction_StateTouchWait_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMuralUpdateAction_StateTouchWait__update(
        EventMuralUpdateAction_StateTouchWait_o *this,
        EventMuralUpdateAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x19
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x2

  if ( (byte_49FB280 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, that);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v4);
    sub_1B64870(&CTouch_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_EventMuralUpdateAction_StateTouchWait_update__, v7);
    sub_1B64870(&Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_1B64870(&EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_49FB280 = 1;
  }
  v10 = sub_1B64ABC(EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)(v10 + 16) = that;
  v15 = v10 + 16;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)that, v13, v14);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v15 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v15 + 128LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v16 = Method_EventMuralUpdateAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventMuralUpdateAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_1B64888(Method_EventMuralUpdateAction_StateTouchWait_update__);
          v17 = (System_Reflection_MethodBase_o *)sub_1B64854(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v19 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v19 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
          v21 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(
            v21,
            (Il2CppObject *)v10,
            Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v21, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v15;
            if ( *(_QWORD *)v15 )
            {
              EventMuralUpdateAction__SetState((EventMuralUpdateAction_o *)isTouchPush, 0, v22);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1B64ACC(isTouchPush, v12);
  }
}


void __fastcall EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0___ctor(
        EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct EventMuralUpdateAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1B64ACC(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}


void __fastcall EventMuralUpdateAction___c__DisplayClass24_0___ctor(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__0(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  EventMuralUpdateAction___c__DisplayClass24_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__3; // x22
  int32_t v9; // w2
  int32_t v10; // w3

  v4 = this;
  if ( (byte_49FB281 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_int____75717888, ent);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v5);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_1B64870(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__,
                                                               v6);
    byte_49FB281 = 1;
  }
  if ( !ent )
    sub_1B64ACC(this, ent);
  imageIds = ent->fields.imageIds;
  _9__3 = v4->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__3,
      (Il2CppObject *)v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__,
      0LL);
    v4->fields.__9__3 = _9__3;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  return BasicHelper__Any_int__48392396(
           imageIds,
           (System_Func_T__bool__o *)_9__3,
           (const MethodInfo_2E268CC *)Method_BasicHelper_Any_int____75717888);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__1(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  EventMuralUpdateAction___c__DisplayClass24_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__4; // x22
  int32_t v9; // w2
  int32_t v10; // w3

  v4 = this;
  if ( (byte_49FB283 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_int____75717888, ent);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v5);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_1B64870(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__,
                                                               v6);
    byte_49FB283 = 1;
  }
  if ( !ent )
    sub_1B64ACC(this, ent);
  imageIds = ent->fields.imageIds;
  _9__4 = v4->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__,
      0LL);
    v4->fields.__9__4 = _9__4;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.__9__4, (int32_t)_9__4, v9, v10);
  }
  return BasicHelper__Any_int__48392396(
           imageIds,
           (System_Func_T__bool__o *)_9__4,
           (const MethodInfo_2E268CC *)Method_BasicHelper_Any_int____75717888);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__2(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  EventMuralUpdateAction___c__DisplayClass24_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__5; // x22
  int32_t v9; // w2
  int32_t v10; // w3

  v4 = this;
  if ( (byte_49FB285 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_int____75717888, ent);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v5);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_1B64870(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__,
                                                               v6);
    byte_49FB285 = 1;
  }
  if ( !ent )
    sub_1B64ACC(this, ent);
  imageIds = ent->fields.imageIds;
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__,
      0LL);
    v4->fields.__9__5 = _9__5;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v9, v10);
  }
  return BasicHelper__Any_int__48392396(
           imageIds,
           (System_Func_T__bool__o *)_9__5,
           (const MethodInfo_2E268CC *)Method_BasicHelper_Any_int____75717888);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__3(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
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
  if ( (byte_49FB282 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_4964/*"D2"*/, *(_QWORD *)&id);
    byte_49FB282 = 1;
  }
  v4 = System_Int32__ToString_62188848((int32_t)&v10, (System_String_o *)StringLiteral_4964/*"D2"*/, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_1B64ACC(v4, v5);
  v7 = v4;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v7, name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__4(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x0
  EventMuralUpdateAction_c *v6; // x8
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v11; // x19
  System_String_o *name; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = id;
  if ( (byte_49FB284 & 1) == 0 )
  {
    sub_1B64870(&EventMuralUpdateAction_TypeInfo, *(_QWORD *)&id);
    sub_1B64870(&StringLiteral_4964/*"D2"*/, v4);
    byte_49FB284 = 1;
  }
  v5 = System_Int32__ToString_62188848((int32_t)&v14, (System_String_o *)StringLiteral_4964/*"D2"*/, 0LL);
  v6 = EventMuralUpdateAction_TypeInfo;
  v7 = v5;
  if ( !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v6 = EventMuralUpdateAction_TypeInfo;
  }
  v8 = System_String__Concat_61383576(v7, v6->static_fields->SPRITE_NAME_END_MALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_1B64ACC(v8, v9);
  v11 = v8;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v11, name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__5(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x0
  EventMuralUpdateAction_c *v6; // x8
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v11; // x19
  System_String_o *name; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = id;
  if ( (byte_49FB286 & 1) == 0 )
  {
    sub_1B64870(&EventMuralUpdateAction_TypeInfo, *(_QWORD *)&id);
    sub_1B64870(&StringLiteral_4964/*"D2"*/, v4);
    byte_49FB286 = 1;
  }
  v5 = System_Int32__ToString_62188848((int32_t)&v14, (System_String_o *)StringLiteral_4964/*"D2"*/, 0LL);
  v6 = EventMuralUpdateAction_TypeInfo;
  v7 = v5;
  if ( !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v6 = EventMuralUpdateAction_TypeInfo;
  }
  v8 = System_String__Concat_61383576(v7, v6->static_fields->SPRITE_NAME_END_FEMALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_1B64ACC(v8, v9);
  v11 = v8;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v11, name, 0LL);
}