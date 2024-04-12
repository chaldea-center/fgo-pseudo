void __fastcall EventMuralUpdateAction___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct EventMuralUpdateAction_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct EventMuralUpdateAction_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42B0556 & 1) == 0 )
  {
    sub_B52984(&EventMuralUpdateAction_TypeInfo);
    sub_B52984(&StringLiteral_16896/*"bit_mural_update{0}"*/);
    sub_B52984(&StringLiteral_16251/*"_f"*/);
    sub_B52984(&StringLiteral_16263/*"_m"*/);
    byte_42B0556 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventMuralUpdateAction_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_16896/*"bit_mural_update{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16896/*"bit_mural_update{0}"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventMuralUpdateAction_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_16263/*"_m"*/;
  v9->SPRITE_NAME_END_MALE = (struct System_String_o *)StringLiteral_16263/*"_m"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->SPRITE_NAME_END_MALE, v10, v11, v12, v13, v14, v15, v16);
  v17 = EventMuralUpdateAction_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_16251/*"_f"*/;
  v17->SPRITE_NAME_END_FEMALE = (struct System_String_o *)StringLiteral_16251/*"_f"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->SPRITE_NAME_END_FEMALE, v18, v19, v20, v21, v22, v23, v24);
}


void __fastcall EventMuralUpdateAction___ctor(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  this->fields.isPlayAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventMuralUpdateAction__Awake(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  struct CStateManager_EventMuralUpdateAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x21
  EventMuralUpdateAction_StateNone_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  EventMuralUpdateAction_StatePlay_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x20
  EventMuralUpdateAction_StateTouchWait_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_42B054D & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_EventMuralUpdateAction___ctor__);
    sub_B52984(&Method_CStateManager_EventMuralUpdateAction__add__);
    sub_B52984(&CStateManager_EventMuralUpdateAction__TypeInfo);
    sub_B52984(&EventMuralUpdateAction_StateNone_TypeInfo);
    sub_B52984(&EventMuralUpdateAction_StatePlay_TypeInfo);
    sub_B52984(&EventMuralUpdateAction_StateTouchWait_TypeInfo);
    byte_42B054D = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B52A54(CStateManager_EventMuralUpdateAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2B925C4 *)Method_CStateManager_EventMuralUpdateAction___ctor__);
    this->fields.fsm = (struct CStateManager_EventMuralUpdateAction__o *)v4;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.fsm, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    fsm = this->fields.fsm;
    v12 = (EventMuralUpdateAction_StateNone_o *)sub_B52A54(EventMuralUpdateAction_StateNone_TypeInfo);
    EventMuralUpdateAction_StateNone___ctor(v12, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2B92690 *)Method_CStateManager_EventMuralUpdateAction__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v16 = (EventMuralUpdateAction_StatePlay_o *)sub_B52A54(EventMuralUpdateAction_StatePlay_TypeInfo);
    EventMuralUpdateAction_StatePlay___ctor(v16, 0LL);
    if ( !v15
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_2B92690 *)Method_CStateManager_EventMuralUpdateAction__add__),
          v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v18 = (EventMuralUpdateAction_StateTouchWait_o *)sub_B52A54(EventMuralUpdateAction_StateTouchWait_TypeInfo),
          EventMuralUpdateAction_StateTouchWait___ctor(v18, 0LL),
          !v17) )
    {
LABEL_9:
      sub_B52A5C(v13, v14);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_2B92690 *)Method_CStateManager_EventMuralUpdateAction__add__);
    EventMuralUpdateAction__SetState(this, 0, v19);
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
  if ( (byte_42B0554 & 1) == 0 )
  {
    this = (EventMuralUpdateAction_o *)sub_B52984(&Method_CStateManager_EventMuralUpdateAction__getState__);
    byte_42B0554 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B52A5C(this, method);
  return fsm->fields.m_state;
}


void __fastcall EventMuralUpdateAction__Init(
        EventMuralUpdateAction_o *this,
        int32_t eventMuralId,
        int32_t eventId,
        bool isPlayAnim,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *gameObject; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  struct EventMuralEntity_o **p_eventMuralEntity; // x21
  System_String_o *ANIM_NAME; // x20
  Il2CppObject *v14; // x0
  struct System_String_o *v15; // x0
  System_String_o **p_playAnimationName; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct SimpleAnimation_o *v31; // x0
  SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  __int64 v40; // x3
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v42; // x23
  unsigned __int64 v43; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v45; // x0
  UnityEngine_Object_o *v46; // x22
  __int64 v47; // x3
  UnityEngine_Animation_c *v48; // x8
  UnityEngine_Animation_o *v49; // x20
  unsigned __int64 v50; // x10
  SimpleAnimation_State_c **v51; // x11
  __int64 v52; // x0
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B054F & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMuralMaster___);
    sub_B52984(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
    sub_B52984(&EventMuralUpdateAction_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B054F = 1;
  }
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  EventMuralUpdateAction__SetState(this, 0, v11);
  this->fields.eventMuralId = eventMuralId;
  this->fields.isPlayAnim = isPlayAnim;
  if ( !isPlayAnim )
  {
    this->fields.eventId = eventId;
    return;
  }
  gameObject = (UnityEngine_Animation_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_54;
  gameObject = (UnityEngine_Animation_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)gameObject,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMuralMaster___);
  if ( !gameObject )
    goto LABEL_54;
  p_eventMuralEntity = &this->fields.eventMuralEntity;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
          (WarEntity_o **)&this->fields.eventMuralEntity,
          eventMuralId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__) )
    return;
  gameObject = (UnityEngine_Animation_o *)EventMuralUpdateAction_TypeInfo;
  if ( (BYTE3(EventMuralUpdateAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
  }
  if ( !*p_eventMuralEntity )
    goto LABEL_54;
  ANIM_NAME = EventMuralUpdateAction_TypeInfo->static_fields->ANIM_NAME;
  id = (*p_eventMuralEntity)->fields.id;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v15 = System_String__Format(ANIM_NAME, v14, 0LL);
  this->fields.playAnimationName = v15;
  p_playAnimationName = &this->fields.playAnimationName;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.playAnimationName,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_54;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = ComponentInChildren_UIWidget;
  p_animation = &this->fields.animation;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_54;
  v31 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)gameObject,
                                      (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = v31;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
        v42 = gameObject;
        if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
        {
          v43 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v43;
            p_offset += 2;
            if ( v43 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
              goto LABEL_24;
          }
          v45 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_24:
          v45 = sub_AEB880(gameObject, SimpleAnimation_State_TypeInfo, 14LL, v40);
        }
        gameObject = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v45)(
                                                  v42,
                                                  *(_QWORD *)(v45 + 8));
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
                    v48 = gameObject->klass;
                    v49 = gameObject;
                    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
                    {
                      v50 = 0LL;
                      v51 = (SimpleAnimation_State_c **)&v48->_1.interfaceOffsets->offset;
                      while ( *(v51 - 1) != SimpleAnimation_State_TypeInfo )
                      {
                        ++v50;
                        v51 += 2;
                        if ( v50 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
                          goto LABEL_49;
                      }
                      v52 = (__int64)(&v48[1]._1.namespaze + 2 * *(_DWORD *)v51);
                    }
                    else
                    {
LABEL_49:
                      v52 = sub_AEB880(gameObject, SimpleAnimation_State_TypeInfo, 6LL, v47);
                    }
                    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v52)(
                      v49,
                      *(_QWORD *)(v52 + 8),
                      0.0);
                    goto LABEL_52;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_54:
    sub_B52A5C(gameObject, v10);
  }
  v46 = (UnityEngine_Object_o *)*p_animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
  {
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_54;
    gameObject = (UnityEngine_Animation_o *)UnityEngine_Animation__GetClip(gameObject, *p_playAnimationName, 0LL);
    if ( !*p_animation )
      goto LABEL_54;
    UnityEngine_Animation__set_clip(*p_animation, (UnityEngine_AnimationClip_o *)gameObject, 0LL);
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_54;
    gameObject = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(gameObject, *p_playAnimationName, 0LL);
    if ( !gameObject )
      goto LABEL_54;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    gameObject = *p_animation;
    if ( !*p_animation )
      goto LABEL_54;
    gameObject = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(gameObject, *p_playAnimationName, 0LL);
    if ( !gameObject )
      goto LABEL_54;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
  }
LABEL_52:
  EventMuralUpdateAction__SetAnimationEvent(this, v10);
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
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x0
  System_Action_o *v16; // x21

  if ( (byte_42B0552 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_EventMuralUpdateAction__Play_b__26_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B0552 = 1;
  }
  this->fields.endAct = end_act;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v15 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v15->static_fields->DEFAULT_FADE_TIME;
  }
  v16 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EventMuralUpdateAction__Play_b__26_0__, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__maskFadein(Instance, fade_in_time, v16, 0LL);
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
LABEL_15:
    sub_B52A5C(gameObject, v13);
  }
}


void __fastcall EventMuralUpdateAction__SetAnimationEvent(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42B0553 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventMuralUpdateAction_OnPlayEnd__);
    byte_42B0553 = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventMuralUpdateAction_OnPlayEnd__, 0LL);
  if ( !effectActionComponent )
    sub_B52A5C(v5, v6);
  effectActionComponent->fields.endAction = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&effectActionComponent->fields.endAction,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMuralUpdateAction__SetState(
        EventMuralUpdateAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x0

  if ( (byte_42B0555 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_EventMuralUpdateAction__setState__);
    byte_42B0555 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B52A5C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2B92734 *)Method_CStateManager_EventMuralUpdateAction__setState__);
}


void __fastcall EventMuralUpdateAction__Setup(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  EventMuralEntity_array *OpenedEntitiesFromId; // x0
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v7; // x20
  struct UnityEngine_GameObject_array *muralObjectList; // x24
  int klass_high; // w26
  unsigned __int64 v10; // x25
  bool v11; // w1
  __int64 v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  UnityEngine_Object_o **v20; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x0
  __int64 *v23; // x8
  System_Func_T__bool__o *v24; // x23
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Object_o *muralMaleObject; // x23
  bool v27; // w0
  UnityEngine_Object_o *v28; // x22
  UnityEngine_Object_o *muralFemaleObject; // x23
  bool v30; // w0
  UILabel_o *detailText; // x20
  struct EventMuralEntity_o *eventMuralEntity; // x8
  System_String_o *message; // x1
  System_String_o *v34; // x21
  Il2CppObject *v35; // x22
  Il2CppObject *v36; // x0
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  __int64 v39; // x0
  int32_t v40; // [xsp+0h] [xbp-60h] BYREF
  int32_t v41; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t total[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B0550 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_EventMuralEntity___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_B52984(&Method_DataManager_GetMaster_EventMuralMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Func_EventMuralEntity__bool___ctor__);
    sub_B52984(&System_Func_EventMuralEntity__bool__TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__);
    sub_B52984(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__);
    sub_B52984(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__);
    sub_B52984(&EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo);
    sub_B52984(&StringLiteral_5679/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/);
    byte_42B0550 = 1;
  }
  *(_QWORD *)total = 0LL;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_52;
  BYTE5(transform[4].klass) = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMuralMaster___);
  if ( this->fields.isPlayAnim )
  {
    if ( !transform )
      goto LABEL_52;
    OpenedEntitiesFromId = EventMuralMaster__GetOpenedEntitiesFromId(
                             (EventMuralMaster_o *)transform,
                             this->fields.eventMuralId,
                             total,
                             &total[1],
                             v5);
  }
  else
  {
    if ( !transform )
      goto LABEL_52;
    OpenedEntitiesFromId = EventMuralMaster__GetOpenedEntitiesFromEventId(
                             (EventMuralMaster_o *)transform,
                             this->fields.eventId,
                             total,
                             &total[1],
                             v5);
  }
  v7 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)OpenedEntitiesFromId;
  transform = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !transform )
    goto LABEL_52;
  muralObjectList = this->fields.muralObjectList;
  if ( !muralObjectList )
    goto LABEL_52;
  if ( (int)muralObjectList->max_length >= 1 )
  {
    klass_high = HIDWORD(transform[3].klass);
    v10 = 0LL;
    while ( 1 )
    {
      v12 = sub_B52A54(EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo);
      EventMuralUpdateAction___c__DisplayClass24_0___ctor((EventMuralUpdateAction___c__DisplayClass24_0_o *)v12, 0LL);
      if ( v10 >= muralObjectList->max_length )
      {
        v39 = sub_B52A88(transform);
        sub_B52A28(v39, 0LL);
      }
      if ( !v12 )
        goto LABEL_52;
      v19 = (System_Int32_array **)muralObjectList->m_Items[v10];
      *(_QWORD *)(v12 + 16) = v19;
      v20 = (UnityEngine_Object_o **)(v12 + 16);
      sub_B52920((BattleServantConfConponent_o *)(v12 + 16), v19, v13, v14, v15, v16, v17, v18);
      v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventMuralEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v21,
        (Il2CppObject *)v12,
        Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_EventMuralEntity__bool___ctor__);
      if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
              v7,
              (System_Func_T__bool__o *)v21,
              (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_EventMuralEntity___) )
      {
        if ( klass_high == 2 )
        {
          v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventMuralEntity__bool__TypeInfo);
          v23 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__;
        }
        else
        {
          if ( klass_high != 1 )
            break;
          v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventMuralEntity__bool__TypeInfo);
          v23 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__;
        }
        v24 = (System_Func_T__bool__o *)v22;
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v22,
          (Il2CppObject *)v12,
          *v23,
          (const MethodInfo_2BC90BC *)Method_System_Func_EventMuralEntity__bool___ctor__);
        if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                v7,
                v24,
                (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_EventMuralEntity___) )
          break;
      }
      v25 = *v20;
      muralMaleObject = (UnityEngine_Object_o *)this->fields.muralMaleObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v27 = UnityEngine_Object__op_Equality(v25, muralMaleObject, 0LL);
      if ( klass_high != 1 && v27 )
        break;
      v28 = *v20;
      muralFemaleObject = (UnityEngine_Object_o *)this->fields.muralFemaleObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v30 = UnityEngine_Object__op_Equality(v28, muralFemaleObject, 0LL);
      if ( klass_high != 2 && v30 )
        break;
      transform = (UnityEngine_Component_o *)*v20;
      if ( !*v20 )
        goto LABEL_52;
      v11 = 1;
LABEL_39:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v11, 0LL);
      if ( (__int64)++v10 >= (int)muralObjectList->max_length )
        goto LABEL_40;
    }
    transform = (UnityEngine_Component_o *)*v20;
    if ( !*v20 )
      goto LABEL_52;
    v11 = 0;
    goto LABEL_39;
  }
LABEL_40:
  detailText = this->fields.detailText;
  if ( !this->fields.isPlayAnim )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5679/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, 0LL);
    v41 = total[0];
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    v40 = total[1];
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    transform = (UnityEngine_Component_o *)System_String__Format_44563852(v34, v35, v36, 0LL);
    if ( detailText )
    {
      message = (System_String_o *)transform;
      goto LABEL_49;
    }
LABEL_52:
    sub_B52A5C(transform, v4);
  }
  eventMuralEntity = this->fields.eventMuralEntity;
  if ( !eventMuralEntity || !detailText )
    goto LABEL_52;
  message = eventMuralEntity->fields.message;
LABEL_49:
  UILabel__set_text(detailText, message, 0LL);
  EventMuralUpdateAction__SetupScreenTouchInfo(this, v37);
  transform = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !transform )
    goto LABEL_52;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  EventMuralUpdateAction__SetState(this, 1, v38);
}


void __fastcall EventMuralUpdateAction__SetupScreenTouchInfo(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_screenTouchInfo; // x19
  UnityEngine_Object_o *screenTouchInfo; // x21
  __int64 v5; // x1
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v8; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B0551 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B0551 = 1;
  }
  p_screenTouchInfo = (BattleServantConfConponent_o *)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v8 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0LL), !v8)
      || (ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v8, Instance, 0, 0LL),
          GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, 0LL),
          !ScreeenTouchInfo) )
    {
LABEL_14:
      sub_B52A5C(Instance, v5);
    }
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       ScreeenTouchInfo,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_screenTouchInfo->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
    sub_B52920(p_screenTouchInfo, Component_srcLineSprite, v11, v12, v13, v14, v15, v16);
  }
  Instance = (UnityEngine_Transform_o *)p_screenTouchInfo->klass;
  if ( !p_screenTouchInfo->klass )
    goto LABEL_14;
  Instance = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


void __fastcall EventMuralUpdateAction__Update(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x0

  if ( (byte_42B054E & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_EventMuralUpdateAction__update__);
    sub_B52984(&CTouch_TypeInfo);
    byte_42B054E = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2B9270C *)Method_CStateManager_EventMuralUpdateAction__update__);
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

  if ( (byte_42AD939 & 1) == 0 )
  {
    this = (EventMuralUpdateAction_StatePlay_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD939 = 1;
  }
  if ( !that )
    goto LABEL_31;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    this = (EventMuralUpdateAction_StatePlay_o *)that->fields.simpleAnimation;
    if ( !this )
      goto LABEL_31;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    v5 = that->fields.simpleAnimation;
    if ( !v5 )
      goto LABEL_31;
    monitor = (UnityEngine_Object_o *)v5[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
          SimpleAnimation__Play_16625408(v7, name, 0LL);
          return;
        }
      }
LABEL_31:
      sub_B52A5C(this, that);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
    {
      this = (EventMuralUpdateAction_StatePlay_o *)that->fields.animation;
      if ( !this )
        goto LABEL_31;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (EventMuralUpdateAction_StatePlay_o *)that->fields.animation;
      if ( !this )
        goto LABEL_31;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = that->fields.animation;
        if ( !v11 )
          goto LABEL_31;
        this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Animation__get_clip(v11, 0LL);
        if ( !this )
          goto LABEL_31;
        v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        UnityEngine_Animation__Play_51067744(v11, v12, 0LL);
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
    sub_B52A5C(this, that);
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
  EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_o *v4; // x20
  UnityEngine_Component_o *isTouchPush; // x0
  __int64 v6; // x1
  EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x22

  if ( (byte_42AD93A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&CTouch_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventMuralUpdateAction_StateTouchWait_update__);
    sub_B52984(&Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_B52984(&EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_42AD93A = 1;
  }
  v4 = (EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B52A54(EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_20;
  v4->fields.that = that;
  p_fields = &v4->fields;
  sub_B52920(&v4->fields);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_Component_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( p_fields->that )
    {
      isTouchPush = (UnityEngine_Component_o *)p_fields->that->fields.screenTouchInfo;
      if ( isTouchPush )
      {
        isTouchPush = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0LL);
          v8 = Method_EventMuralUpdateAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventMuralUpdateAction_StateTouchWait_update__ + 75) & 2) != 0 )
            v8 = (_QWORD *)sub_B5298C(Method_EventMuralUpdateAction_StateTouchWait_update__);
          v9 = (System_Reflection_MethodBase_o *)sub_B52968(v8, v8[3]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v11 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v11 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
          v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v13,
            (Il2CppObject *)v4,
            Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
            isTouchPush = (UnityEngine_Component_o *)p_fields->that;
            if ( p_fields->that )
            {
              EventMuralUpdateAction__SetState((EventMuralUpdateAction_o *)isTouchPush, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_20:
    sub_B52A5C(isTouchPush, v6);
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
    sub_B52A5C(this, method);
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
  Il2CppObject *v4; // x19
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *monitor; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42AD933 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_B52984(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__);
    byte_42AD933 = 1;
  }
  if ( !ent )
    sub_B52A5C(this, ent);
  imageIds = ent->fields.imageIds;
  monitor = (System_Func_int__bool__o *)v4[1].monitor;
  if ( !monitor )
  {
    monitor = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      monitor,
      v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__,
      (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
    v4[1].monitor = monitor;
    sub_B52920(&v4[1].monitor);
  }
  return BasicHelper__Any_int__27531732(
           imageIds,
           (System_Func_T__bool__o *)monitor,
           (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__1(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *klass; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42AD935 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_B52984(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__);
    byte_42AD935 = 1;
  }
  if ( !ent )
    sub_B52A5C(this, ent);
  imageIds = ent->fields.imageIds;
  klass = (System_Func_int__bool__o *)v4[2].klass;
  if ( !klass )
  {
    klass = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      klass,
      v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__,
      (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B52920(&v4[2]);
  }
  return BasicHelper__Any_int__27531732(
           imageIds,
           (System_Func_T__bool__o *)klass,
           (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__2(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *monitor; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42AD937 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_B52984(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__);
    byte_42AD937 = 1;
  }
  if ( !ent )
    sub_B52A5C(this, ent);
  imageIds = ent->fields.imageIds;
  monitor = (System_Func_int__bool__o *)v4[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      monitor,
      v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__,
      (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
    v4[2].monitor = monitor;
    sub_B52920(&v4[2].monitor);
  }
  return BasicHelper__Any_int__27531732(
           imageIds,
           (System_Func_T__bool__o *)monitor,
           (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832);
}


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
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = id;
  if ( (byte_42AD934 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_4586/*"D2"*/);
    byte_42AD934 = 1;
  }
  v4 = System_Int32__ToString_39387012((int32_t)&v10, (System_String_o *)StringLiteral_4586/*"D2"*/, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B52A5C(v4, v5);
  v7 = v4;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v7, name, 0LL);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__4(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  EventMuralUpdateAction_c *v5; // x8
  System_String_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v9; // x19
  System_String_o *name; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = id;
  if ( (byte_42AD936 & 1) == 0 )
  {
    sub_B52984(&EventMuralUpdateAction_TypeInfo);
    sub_B52984(&StringLiteral_4586/*"D2"*/);
    byte_42AD936 = 1;
  }
  v4 = System_Int32__ToString_39387012((int32_t)&v12, (System_String_o *)StringLiteral_4586/*"D2"*/, 0LL);
  v5 = EventMuralUpdateAction_TypeInfo;
  if ( (BYTE3(EventMuralUpdateAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v5 = EventMuralUpdateAction_TypeInfo;
  }
  v6 = System_String__Concat_44568316(v4, v5->static_fields->SPRITE_NAME_END_MALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B52A5C(v6, v7);
  v9 = v6;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v9, name, 0LL);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__5(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  EventMuralUpdateAction_c *v5; // x8
  System_String_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v9; // x19
  System_String_o *name; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = id;
  if ( (byte_42AD938 & 1) == 0 )
  {
    sub_B52984(&EventMuralUpdateAction_TypeInfo);
    sub_B52984(&StringLiteral_4586/*"D2"*/);
    byte_42AD938 = 1;
  }
  v4 = System_Int32__ToString_39387012((int32_t)&v12, (System_String_o *)StringLiteral_4586/*"D2"*/, 0LL);
  v5 = EventMuralUpdateAction_TypeInfo;
  if ( (BYTE3(EventMuralUpdateAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v5 = EventMuralUpdateAction_TypeInfo;
  }
  v6 = System_String__Concat_44568316(v4, v5->static_fields->SPRITE_NAME_END_FEMALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B52A5C(v6, v7);
  v9 = v6;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v9, name, 0LL);
}