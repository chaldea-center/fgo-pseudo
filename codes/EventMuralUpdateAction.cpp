void __fastcall EventMuralUpdateAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct EventMuralUpdateAction_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct EventMuralUpdateAction_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B12E7D & 1) == 0 )
  {
    sub_1BCA7E0(&EventMuralUpdateAction_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17426/*"bit_mural_update{0}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_16708/*"_f"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16722/*"_m"*/, v12, v13);
    byte_4B12E7D = 1;
  }
  EventMuralUpdateAction_TypeInfo->static_fields->ANIM_NAME = (struct System_String_o *)StringLiteral_17426/*"bit_mural_update{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventMuralUpdateAction_TypeInfo->static_fields,
    StringLiteral_17426/*"bit_mural_update{0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_16722/*"_m"*/;
  static_fields = EventMuralUpdateAction_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_END_MALE = (struct System_String_o *)StringLiteral_16722/*"_m"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SPRITE_NAME_END_MALE, v14, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_16708/*"_f"*/;
  v23 = EventMuralUpdateAction_TypeInfo->static_fields;
  v23->SPRITE_NAME_END_FEMALE = (struct System_String_o *)StringLiteral_16708/*"_f"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->SPRITE_NAME_END_FEMALE, v22, v24, v25, v26, v27, v28, v29);
}


void __fastcall EventMuralUpdateAction___ctor(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  this->fields.isPlayAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventMuralUpdateAction__Awake(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct CStateManager_EventMuralUpdateAction__o **p_fsm; // x20
  CStateManager_T__o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CStateManager_T__o *fsm; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  CStateManager_T__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  Il2CppObject *v34; // x22
  CStateManager_T__o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *v39; // x21
  const MethodInfo *v40; // x2

  if ( (byte_4B12E74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EventMuralUpdateAction___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_EventMuralUpdateAction__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_EventMuralUpdateAction__TypeInfo, v7, v8);
    sub_1BCA7E0(&EventMuralUpdateAction_StateNone_TypeInfo, v9, v10);
    sub_1BCA7E0(&EventMuralUpdateAction_StatePlay_TypeInfo, v11, v12);
    sub_1BCA7E0(&EventMuralUpdateAction_StateTouchWait_TypeInfo, v13, v14);
    byte_4B12E74 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v16 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_EventMuralUpdateAction__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v16,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_313FBC4 *)Method_CStateManager_EventMuralUpdateAction___ctor__);
    this->fields.fsm = (struct CStateManager_EventMuralUpdateAction__o *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v27 = (Il2CppObject *)sub_1BCAA2C(EventMuralUpdateAction_StateNone_TypeInfo, v24, v25, v26);
    System_Object___ctor(v27, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v27,
      (const MethodInfo_313FC6C *)Method_CStateManager_EventMuralUpdateAction__add__);
    v30 = (CStateManager_T__o *)*p_fsm;
    v34 = (Il2CppObject *)sub_1BCAA2C(EventMuralUpdateAction_StatePlay_TypeInfo, v31, v32, v33);
    System_Object___ctor(v34, 0LL);
    if ( !v30
      || (CStateManager_object___add(
            v30,
            1,
            (IState_T__o *)v34,
            (const MethodInfo_313FC6C *)Method_CStateManager_EventMuralUpdateAction__add__),
          v35 = (CStateManager_T__o *)*p_fsm,
          v39 = (Il2CppObject *)sub_1BCAA2C(EventMuralUpdateAction_StateTouchWait_TypeInfo, v36, v37, v38),
          System_Object___ctor(v39, 0LL),
          !v35) )
    {
LABEL_9:
      sub_1BCAA3C(v28, v29);
    }
    CStateManager_object___add(
      v35,
      2,
      (IState_T__o *)v39,
      (const MethodInfo_313FC6C *)Method_CStateManager_EventMuralUpdateAction__add__);
    EventMuralUpdateAction__SetState(this, 0, v40);
  }
  BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.muralObjectList, 0LL);
}


void __fastcall EventMuralUpdateAction__CheckAssertions(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.muralObjectList, 0LL);
}


int32_t __fastcall EventMuralUpdateAction__GetState(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventMuralUpdateAction_o *v3; // x19
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x8

  v3 = this;
  if ( (byte_4B12E7B & 1) == 0 )
  {
    this = (EventMuralUpdateAction_o *)sub_1BCA7E0(&Method_CStateManager_EventMuralUpdateAction__getState__, method, v2);
    byte_4B12E7B = 1;
  }
  fsm = v3->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(this, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Animation_o *gameObject; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  struct EventMuralEntity_o **p_eventMuralEntity; // x21
  System_String_o *ANIM_NAME; // x20
  Il2CppObject *v30; // x0
  struct System_String_o *v31; // x0
  System_String_o **p_playAnimationName; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  UnityEngine_Animation_o **p_animation; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  Il2CppObject *v47; // x0
  SimpleAnimation_o **p_simpleAnimation; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  UnityEngine_Object_o *simpleAnimation; // x23
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v58; // x23
  __int64 v59; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v61; // x0
  UnityEngine_Object_o *v62; // x22
  UnityEngine_Animation_c *v63; // x8
  UnityEngine_Animation_o *v64; // x20
  __int64 v65; // x9
  SimpleAnimation_State_c **v66; // x10
  __int64 v67; // x0
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B12E76 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_Component_GetComponentInChildren_Animation___,
      *(_QWORD *)&eventMuralId,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMuralMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&EventMuralUpdateAction_TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v23, v24);
    byte_4B12E76 = 1;
  }
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  EventMuralUpdateAction__SetState(this, 0, v27);
  this->fields.eventMuralId = eventMuralId;
  this->fields.isPlayAnim = isPlayAnim;
  if ( !isPlayAnim )
  {
    this->fields.eventId = eventId;
    return;
  }
  gameObject = (UnityEngine_Animation_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_51;
  gameObject = (UnityEngine_Animation_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)gameObject,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMuralMaster___);
  if ( !gameObject )
    goto LABEL_51;
  p_eventMuralEntity = &this->fields.eventMuralEntity;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
          (Il2CppObject **)&this->fields.eventMuralEntity,
          eventMuralId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__) )
    return;
  gameObject = (UnityEngine_Animation_o *)EventMuralUpdateAction_TypeInfo;
  if ( !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo, v26);
  if ( !*p_eventMuralEntity )
    goto LABEL_51;
  ANIM_NAME = EventMuralUpdateAction_TypeInfo->static_fields->ANIM_NAME;
  id = (*p_eventMuralEntity)->fields.id;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v31 = System_String__Format(ANIM_NAME, v30, 0LL);
  this->fields.playAnimationName = v31;
  p_playAnimationName = &this->fields.playAnimationName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playAnimationName, (int64_t)v31, v33, v34, v35, v36, v37, v38);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_51;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           (UnityEngine_Component_o *)gameObject,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
  p_animation = &this->fields.animation;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animation,
    (int64_t)ComponentInChildren_object__49322392,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_51;
  v47 = UnityEngine_Component__GetComponentInChildren_object__49322392(
          (UnityEngine_Component_o *)gameObject,
          (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)v47;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.simpleAnimation, (int64_t)v47, v49, v50, v51, v52, v53, v54);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
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
        v58 = gameObject;
        v59 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v59;
            p_offset += 2;
            if ( !v59 )
              goto LABEL_22;
          }
          v61 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_22:
          v61 = sub_1C1C7C0(gameObject, SimpleAnimation_State_TypeInfo, 14LL);
        }
        gameObject = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v61)(
                                                  v58,
                                                  *(_QWORD *)(v61 + 8));
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
                    v63 = gameObject->klass;
                    v64 = gameObject;
                    v65 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
                    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
                    {
                      v66 = (SimpleAnimation_State_c **)&v63->_1.interfaceOffsets->offset;
                      while ( *(v66 - 1) != SimpleAnimation_State_TypeInfo )
                      {
                        --v65;
                        v66 += 2;
                        if ( !v65 )
                          goto LABEL_46;
                      }
                      v67 = (__int64)(&v63[1]._1.namespaze + 2 * *(_DWORD *)v66);
                    }
                    else
                    {
LABEL_46:
                      v67 = sub_1C1C7C0(gameObject, SimpleAnimation_State_TypeInfo, 6LL);
                    }
                    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v67)(
                      v64,
                      *(_QWORD *)(v67 + 8),
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
    sub_1BCAA3C(gameObject, v26);
  }
  v62 = (UnityEngine_Object_o *)*p_animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
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
  EventMuralUpdateAction__SetAnimationEvent(this, v26);
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
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v24; // x0
  System_Action_o *v25; // x21

  if ( (byte_4B12E79 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_EventMuralUpdateAction__Play_b__26_0__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    byte_4B12E79 = 1;
  }
  this->fields.endAct = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)end_act, (int64_t)method, v4, v5, v6, v7, v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v24 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v20);
      v24 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v24->static_fields->DEFAULT_FADE_TIME;
  }
  v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_EventMuralUpdateAction__Play_b__26_0__, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v25, 0LL);
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
    sub_1BCAA3C(gameObject, v19);
  }
}


void __fastcall EventMuralUpdateAction__SetAnimationEvent(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B12E7A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventMuralUpdateAction_OnPlayEnd__, v5, v6);
    byte_4B12E7A = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventMuralUpdateAction_OnPlayEnd__, 0LL);
  if ( !effectActionComponent )
    sub_1BCAA3C(v9, v10);
  effectActionComponent->fields.endAction = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&effectActionComponent->fields.endAction,
    (int64_t)v8,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMuralUpdateAction__SetState(
        EventMuralUpdateAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B12E7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EventMuralUpdateAction__setState__, *(_QWORD *)&state, method);
    byte_4B12E7C = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_EventMuralUpdateAction__setState__);
}


void __fastcall EventMuralUpdateAction__Setup(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Component_o *transform; // x0
  __int64 v29; // x1
  EventMuralEntity_array *OpenedEntitiesFromId; // x0
  System_Object_array *v31; // x20
  __int64 v32; // x2
  __int64 v33; // x3
  struct UnityEngine_GameObject_array *muralObjectList; // x24
  int klass_high; // w28
  unsigned __int64 v36; // x25
  __int64 v37; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  UnityEngine_Object_o **v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Func_object__bool__o *v49; // x23
  __int64 v50; // x2
  __int64 v51; // x3
  System_Func_object__bool__o *v52; // x0
  __int64 *v53; // x8
  System_Func_T__bool__o *v54; // x23
  UnityEngine_Object_o *v55; // x22
  UnityEngine_Object_o *muralMaleObject; // x23
  bool v57; // w0
  UnityEngine_Object_o *v58; // x22
  UnityEngine_Object_o *muralFemaleObject; // x23
  bool v60; // w0
  bool v61; // w1
  UILabel_o *detailText; // x20
  struct EventMuralEntity_o *eventMuralEntity; // x8
  System_String_o *message; // x1
  System_String_o *v65; // x21
  Il2CppObject *v66; // x22
  Il2CppObject *v67; // x0
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x2
  int32_t v70; // [xsp+0h] [xbp-70h] BYREF
  int32_t v71; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t total[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B12E77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventMuralEntity___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMuralMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_EventMuralEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__, v18, v19);
    sub_1BCA7E0(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__, v20, v21);
    sub_1BCA7E0(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__, v22, v23);
    sub_1BCA7E0(&EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_5713/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, v26, v27);
    byte_4B12E77 = 1;
  }
  *(_QWORD *)total = 0LL;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_49;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_49;
  BYTE5(transform[4].monitor) = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMuralMaster___);
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
  v31 = (System_Object_array *)OpenedEntitiesFromId;
  transform = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !transform )
    goto LABEL_49;
  muralObjectList = this->fields.muralObjectList;
  if ( !muralObjectList )
    goto LABEL_49;
  if ( (int)muralObjectList->max_length >= 1 )
  {
    klass_high = HIDWORD(transform[3].klass);
    v36 = 0LL;
    while ( 1 )
    {
      v37 = sub_1BCAA2C(EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo, v29, v32, v33);
      System_Object___ctor((Il2CppObject *)v37, 0LL);
      if ( v36 >= muralObjectList->max_length )
        sub_1BCAA44(transform, v29);
      if ( !v37 )
        goto LABEL_49;
      v44 = (int64_t)muralObjectList->m_Items[v36];
      *(_QWORD *)(v37 + 16) = v44;
      v45 = (UnityEngine_Object_o **)(v37 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 16), v44, v38, v39, v40, v41, v42, v43);
      v49 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventMuralEntity__bool__TypeInfo, v46, v47, v48);
      System_Func_object__bool____ctor(
        v49,
        (Il2CppObject *)v37,
        Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__,
        0LL);
      if ( !BasicHelper__Any_object__49274176(
              v31,
              (System_Func_T__bool__o *)v49,
              (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_EventMuralEntity___) )
      {
        if ( klass_high == 2 )
        {
          v52 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventMuralEntity__bool__TypeInfo, v29, v50, v51);
          v53 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__;
        }
        else
        {
          if ( klass_high != 1 )
            break;
          v52 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventMuralEntity__bool__TypeInfo, v29, v50, v51);
          v53 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__;
        }
        v54 = (System_Func_T__bool__o *)v52;
        System_Func_object__bool____ctor(v52, (Il2CppObject *)v37, *v53, 0LL);
        if ( !BasicHelper__Any_object__49274176(
                v31,
                v54,
                (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_EventMuralEntity___) )
          break;
      }
      v55 = *v45;
      muralMaleObject = (UnityEngine_Object_o *)this->fields.muralMaleObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      v57 = UnityEngine_Object__op_Equality(v55, muralMaleObject, 0LL);
      if ( klass_high != 1 && v57 )
        break;
      v58 = *v45;
      muralFemaleObject = (UnityEngine_Object_o *)this->fields.muralFemaleObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      v60 = UnityEngine_Object__op_Equality(v58, muralFemaleObject, 0LL);
      if ( klass_high != 2 && v60 )
        break;
      transform = (UnityEngine_Component_o *)*v45;
      if ( !*v45 )
        goto LABEL_49;
      v61 = 1;
LABEL_34:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v61, 0LL);
      if ( (__int64)++v36 >= (int)muralObjectList->max_length )
        goto LABEL_38;
    }
    transform = (UnityEngine_Component_o *)*v45;
    if ( !*v45 )
      goto LABEL_49;
    v61 = 0;
    goto LABEL_34;
  }
LABEL_38:
  detailText = this->fields.detailText;
  if ( !this->fields.isPlayAnim )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_5713/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, 0LL);
    v71 = total[0];
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
    v70 = total[1];
    v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
    transform = (UnityEngine_Component_o *)System_String__Format_62415592(v65, v66, v67, 0LL);
    if ( detailText )
    {
      message = (System_String_o *)transform;
      goto LABEL_46;
    }
LABEL_49:
    sub_1BCAA3C(transform, v29);
  }
  eventMuralEntity = this->fields.eventMuralEntity;
  if ( !eventMuralEntity || !detailText )
    goto LABEL_49;
  message = eventMuralEntity->fields.message;
LABEL_46:
  UILabel__set_text(detailText, message, 0LL);
  EventMuralUpdateAction__SetupScreenTouchInfo(this, v68);
  transform = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !transform )
    goto LABEL_49;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  EventMuralUpdateAction__SetState(this, 1, v69);
}


void __fastcall EventMuralUpdateAction__SetupScreenTouchInfo(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PartyOrganizationUtility_o *p_screenTouchInfo; // x19
  UnityEngine_Object_o *screenTouchInfo; // x21
  __int64 v10; // x1
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v13; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  Il2CppObject *Component_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B12E78 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B12E78 = 1;
  }
  p_screenTouchInfo = (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v13 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0LL), !v13)
      || (ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v13, Instance, 0, 0LL),
          GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, 0LL),
          !ScreeenTouchInfo) )
    {
LABEL_13:
      sub_1BCAA3C(Instance, v10);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         ScreeenTouchInfo,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_screenTouchInfo->klass = (PartyOrganizationUtility_c *)Component_object;
    sub_1BCA784(p_screenTouchInfo, (int64_t)Component_object, v16, v17, v18, v19, v20, v21);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B12E75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EventMuralUpdateAction__update__, method, v2);
    sub_1BCA7E0(&CTouch_TypeInfo, v4, v5);
    byte_4B12E75 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__process(0LL);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_313FCD4 *)Method_CStateManager_EventMuralUpdateAction__update__);
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
  __int64 v10; // x1
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v12; // x19
  System_String_o *v13; // x1

  if ( (byte_4B12E7E & 1) == 0 )
  {
    this = (EventMuralUpdateAction_StatePlay_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    byte_4B12E7E = 1;
  }
  if ( !that )
    goto LABEL_27;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
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
          SimpleAnimation__Play_64539336(v7, name, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1BCAA3C(this, that);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = that->fields.animation;
        if ( !v12 )
          goto LABEL_27;
        this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Animation__get_clip(v12, 0LL);
        if ( !this )
          goto LABEL_27;
        v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        UnityEngine_Animation__Play_69899248(v12, v13, 0LL);
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
    sub_1BCAA3C(this, that);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x19
  __int64 v27; // x1
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x2

  if ( (byte_4B12E7F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CTouch_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_EventMuralUpdateAction_StateTouchWait_update__, v11, v12);
    sub_1BCA7E0(&Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v13, v14);
    sub_1BCA7E0(&EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v15, v16);
    byte_4B12E7F = 1;
  }
  v17 = sub_1BCAA2C(EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = that;
  v26 = v17 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)that, v20, v21, v22, v23, v24, v25);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v27);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v26 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v26 + 128LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v28 = Method_EventMuralUpdateAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventMuralUpdateAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v28 = (_QWORD *)sub_1BCA7F8(Method_EventMuralUpdateAction_StateTouchWait_update__);
          v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
          OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v34 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v30);
            v34 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
          v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
          System_Action___ctor(
            v36,
            (Il2CppObject *)v17,
            Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v26;
            if ( *(_QWORD *)v26 )
            {
              EventMuralUpdateAction__SetState((EventMuralUpdateAction_o *)isTouchPush, 0, v37);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(isTouchPush, v19);
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
    sub_1BCAA3C(this, method);
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
  __int64 v3; // x3
  EventMuralUpdateAction___c__DisplayClass24_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__3; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v5 = this;
  if ( (byte_4B12E80 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, ent, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_1BCA7E0(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__,
                                                               v8,
                                                               v9);
    byte_4B12E80 = 1;
  }
  if ( !ent )
    sub_1BCAA3C(this, ent);
  imageIds = ent->fields.imageIds;
  _9__3 = v5->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, ent, method, v3);
    System_Func_int__bool____ctor(
      _9__3,
      (Il2CppObject *)v5,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__,
      0LL);
    v5->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__3, (int64_t)_9__3, v12, v13, v14, v15, v16, v17);
  }
  return BasicHelper__Any_int__49273364(
           imageIds,
           (System_Func_T__bool__o *)_9__3,
           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__1(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventMuralUpdateAction___c__DisplayClass24_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__4; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v5 = this;
  if ( (byte_4B12E82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, ent, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_1BCA7E0(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__,
                                                               v8,
                                                               v9);
    byte_4B12E82 = 1;
  }
  if ( !ent )
    sub_1BCAA3C(this, ent);
  imageIds = ent->fields.imageIds;
  _9__4 = v5->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, ent, method, v3);
    System_Func_int__bool____ctor(
      _9__4,
      (Il2CppObject *)v5,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__,
      0LL);
    v5->fields.__9__4 = _9__4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__4, (int64_t)_9__4, v12, v13, v14, v15, v16, v17);
  }
  return BasicHelper__Any_int__49273364(
           imageIds,
           (System_Func_T__bool__o *)_9__4,
           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__2(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventMuralUpdateAction___c__DisplayClass24_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__5; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v5 = this;
  if ( (byte_4B12E84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, ent, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_1BCA7E0(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__,
                                                               v8,
                                                               v9);
    byte_4B12E84 = 1;
  }
  if ( !ent )
    sub_1BCAA3C(this, ent);
  imageIds = ent->fields.imageIds;
  _9__5 = v5->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, ent, method, v3);
    System_Func_int__bool____ctor(
      _9__5,
      (Il2CppObject *)v5,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__,
      0LL);
    v5->fields.__9__5 = _9__5;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__5, (int64_t)_9__5, v12, v13, v14, v15, v16, v17);
  }
  return BasicHelper__Any_int__49273364(
           imageIds,
           (System_Func_T__bool__o *)_9__5,
           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
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
  if ( (byte_4B12E81 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5060/*"D2"*/, *(_QWORD *)&id, method);
    byte_4B12E81 = 1;
  }
  v4 = System_Int32__ToString_63206828((int32_t)&v10, (System_String_o *)StringLiteral_5060/*"D2"*/, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_1BCAA3C(v4, v5);
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
  __int64 v5; // x2
  System_String_o *v6; // x0
  __int64 v7; // x1
  EventMuralUpdateAction_c *v8; // x8
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v13; // x19
  System_String_o *name; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = id;
  if ( (byte_4B12E83 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMuralUpdateAction_TypeInfo, *(_QWORD *)&id, method);
    sub_1BCA7E0(&StringLiteral_5060/*"D2"*/, v4, v5);
    byte_4B12E83 = 1;
  }
  v6 = System_Int32__ToString_63206828((int32_t)&v16, (System_String_o *)StringLiteral_5060/*"D2"*/, 0LL);
  v8 = EventMuralUpdateAction_TypeInfo;
  v9 = v6;
  if ( !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo, v7);
    v8 = EventMuralUpdateAction_TypeInfo;
  }
  v10 = System_String__Concat_62401220(v9, v8->static_fields->SPRITE_NAME_END_MALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_1BCAA3C(v10, v11);
  v13 = v10;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v13, name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__5(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  __int64 v7; // x1
  EventMuralUpdateAction_c *v8; // x8
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v13; // x19
  System_String_o *name; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = id;
  if ( (byte_4B12E85 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMuralUpdateAction_TypeInfo, *(_QWORD *)&id, method);
    sub_1BCA7E0(&StringLiteral_5060/*"D2"*/, v4, v5);
    byte_4B12E85 = 1;
  }
  v6 = System_Int32__ToString_63206828((int32_t)&v16, (System_String_o *)StringLiteral_5060/*"D2"*/, 0LL);
  v8 = EventMuralUpdateAction_TypeInfo;
  v9 = v6;
  if ( !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo, v7);
    v8 = EventMuralUpdateAction_TypeInfo;
  }
  v10 = System_String__Concat_62401220(v9, v8->static_fields->SPRITE_NAME_END_FEMALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_1BCAA3C(v10, v11);
  v13 = v10;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v13, name, 0LL);
}