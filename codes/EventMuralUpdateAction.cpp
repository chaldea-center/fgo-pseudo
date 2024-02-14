void __fastcall EventMuralUpdateAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct EventMuralUpdateAction_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct EventMuralUpdateAction_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4214D11 & 1) == 0 )
  {
    sub_B0D8A4(&EventMuralUpdateAction_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_16830/*"bit_mural_update{0}"*/, v8);
    sub_B0D8A4(&StringLiteral_16191/*"_f"*/, v9);
    sub_B0D8A4(&StringLiteral_16203/*"_m"*/, v10);
    byte_4214D11 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventMuralUpdateAction_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_16830/*"bit_mural_update{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16830/*"bit_mural_update{0}"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = EventMuralUpdateAction_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_16203/*"_m"*/;
  v13->SPRITE_NAME_END_MALE = (struct System_String_o *)StringLiteral_16203/*"_m"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->SPRITE_NAME_END_MALE, v14, v15, v16, v17, v18, v19, v20);
  v21 = EventMuralUpdateAction_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_16191/*"_f"*/;
  v21->SPRITE_NAME_END_FEMALE = (struct System_String_o *)StringLiteral_16191/*"_f"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v21->SPRITE_NAME_END_FEMALE, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall EventMuralUpdateAction___ctor(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  this->fields.isPlayAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventMuralUpdateAction__Awake(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CStateManager_EventMuralUpdateAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  EventMuralUpdateAction_StateNone_o *v20; // x22
  __int64 v21; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  EventMuralUpdateAction_StatePlay_o *v25; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  EventMuralUpdateAction_StateTouchWait_o *v29; // x21
  const MethodInfo *v30; // x2

  if ( (byte_4214D08 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_EventMuralUpdateAction___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_EventMuralUpdateAction__add__, v4);
    sub_B0D8A4(&CStateManager_EventMuralUpdateAction__TypeInfo, v5);
    sub_B0D8A4(&EventMuralUpdateAction_StateNone_TypeInfo, v6);
    sub_B0D8A4(&EventMuralUpdateAction_StatePlay_TypeInfo, v7);
    sub_B0D8A4(&EventMuralUpdateAction_StateTouchWait_TypeInfo, v8);
    byte_4214D08 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v10 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                                CStateManager_EventMuralUpdateAction__TypeInfo,
                                                                method,
                                                                v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v10,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2AAF784 *)Method_CStateManager_EventMuralUpdateAction___ctor__);
    this->fields.fsm = (struct CStateManager_EventMuralUpdateAction__o *)v10;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    fsm = this->fields.fsm;
    v20 = (EventMuralUpdateAction_StateNone_o *)sub_B0D974(EventMuralUpdateAction_StateNone_TypeInfo, v18, v19);
    EventMuralUpdateAction_StateNone___ctor(v20, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v20,
      (const MethodInfo_2AAF850 *)Method_CStateManager_EventMuralUpdateAction__add__);
    v22 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v25 = (EventMuralUpdateAction_StatePlay_o *)sub_B0D974(EventMuralUpdateAction_StatePlay_TypeInfo, v23, v24);
    EventMuralUpdateAction_StatePlay___ctor(v25, 0LL);
    if ( !v22
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v22,
            1,
            (IState_T__o *)v25,
            (const MethodInfo_2AAF850 *)Method_CStateManager_EventMuralUpdateAction__add__),
          v26 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v29 = (EventMuralUpdateAction_StateTouchWait_o *)sub_B0D974(
                                                             EventMuralUpdateAction_StateTouchWait_TypeInfo,
                                                             v27,
                                                             v28),
          EventMuralUpdateAction_StateTouchWait___ctor(v29, 0LL),
          !v26) )
    {
LABEL_9:
      sub_B0D97C(v21);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v26,
      2,
      (IState_T__o *)v29,
      (const MethodInfo_2AAF850 *)Method_CStateManager_EventMuralUpdateAction__add__);
    EventMuralUpdateAction__SetState(this, 0, v30);
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
  if ( (byte_4214D0F & 1) == 0 )
  {
    this = (EventMuralUpdateAction_o *)sub_B0D8A4(&Method_CStateManager_EventMuralUpdateAction__getState__, method);
    byte_4214D0F = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B0D97C(this);
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
  const MethodInfo *v18; // x2
  struct EventMuralEntity_o **p_eventMuralEntity; // x21
  System_String_o *ANIM_NAME; // x20
  Il2CppObject *v21; // x0
  struct System_String_o *v22; // x0
  System_String_o **p_playAnimationName; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct SimpleAnimation_o *v38; // x0
  SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v48; // x23
  unsigned __int64 v49; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v51; // x0
  UnityEngine_Object_o *v52; // x22
  const MethodInfo *v53; // x1
  UnityEngine_Animation_c *v54; // x8
  UnityEngine_Animation_o *v55; // x20
  unsigned __int64 v56; // x10
  SimpleAnimation_State_c **v57; // x11
  __int64 v58; // x0
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4214D0A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&eventMuralId);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMuralMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(&EventMuralUpdateAction_TypeInfo, v12);
    sub_B0D8A4(&int_TypeInfo, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v16);
    byte_4214D0A = 1;
  }
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  EventMuralUpdateAction__SetState(this, 0, v18);
  this->fields.eventMuralId = eventMuralId;
  this->fields.isPlayAnim = isPlayAnim;
  if ( !isPlayAnim )
  {
    this->fields.eventId = eventId;
    return;
  }
  gameObject = (UnityEngine_Animation_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_54;
  gameObject = (UnityEngine_Animation_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)gameObject,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMuralMaster___);
  if ( !gameObject )
    goto LABEL_54;
  p_eventMuralEntity = &this->fields.eventMuralEntity;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
          (WarEntity_o **)&this->fields.eventMuralEntity,
          eventMuralId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__) )
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
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v22 = System_String__Format(ANIM_NAME, v21, 0LL);
  this->fields.playAnimationName = v22;
  p_playAnimationName = &this->fields.playAnimationName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.playAnimationName,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_54;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = ComponentInChildren_UIWidget;
  p_animation = &this->fields.animation;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_54;
  v38 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)gameObject,
                                      (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = v38;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)v38,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
        v48 = gameObject;
        if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
        {
          v49 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v49;
            p_offset += 2;
            if ( v49 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
              goto LABEL_24;
          }
          v51 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_24:
          v51 = sub_AA67A0(gameObject, SimpleAnimation_State_TypeInfo, 14LL);
        }
        gameObject = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v51)(
                                                  v48,
                                                  *(_QWORD *)(v51 + 8));
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
                    v54 = gameObject->klass;
                    v55 = gameObject;
                    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
                    {
                      v56 = 0LL;
                      v57 = (SimpleAnimation_State_c **)&v54->_1.interfaceOffsets->offset;
                      while ( *(v57 - 1) != SimpleAnimation_State_TypeInfo )
                      {
                        ++v56;
                        v57 += 2;
                        if ( v56 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
                          goto LABEL_49;
                      }
                      v58 = (__int64)(&v54[1]._1.namespaze + 2 * *(_DWORD *)v57);
                    }
                    else
                    {
LABEL_49:
                      v58 = sub_AA67A0(gameObject, SimpleAnimation_State_TypeInfo, 6LL);
                    }
                    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v58)(
                      v55,
                      *(_QWORD *)(v58 + 8),
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
    sub_B0D97C(gameObject);
  }
  v52 = (UnityEngine_Object_o *)*p_animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
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
  EventMuralUpdateAction__SetAnimationEvent(this, v53);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v19; // x0
  System_Action_o *v20; // x21

  if ( (byte_4214D0D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, end_act);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v12);
    sub_B0D8A4(&Method_EventMuralUpdateAction__Play_b__26_0__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4214D0D = 1;
  }
  this->fields.endAct = end_act;
  sub_B0D840(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v19 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v19 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v19->static_fields->DEFAULT_FADE_TIME;
  }
  v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_EventMuralUpdateAction__Play_b__26_0__, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__maskFadein(Instance, fade_in_time, v20, 0LL);
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
    sub_B0D97C(gameObject);
  }
}


void __fastcall EventMuralUpdateAction__SetAnimationEvent(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4214D0E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventMuralUpdateAction_OnPlayEnd__, v4);
    byte_4214D0E = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventMuralUpdateAction_OnPlayEnd__, 0LL);
  if ( !effectActionComponent )
    sub_B0D97C(v7);
  effectActionComponent->fields.endAction = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&effectActionComponent->fields.endAction,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMuralUpdateAction__SetState(
        EventMuralUpdateAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x0

  if ( (byte_4214D10 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_EventMuralUpdateAction__setState__, *(_QWORD *)&state);
    byte_4214D10 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_EventMuralUpdateAction__setState__);
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
  __int64 v15; // x1
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v17; // x4
  EventMuralEntity_array *OpenedEntitiesFromId; // x0
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  struct UnityEngine_GameObject_array *muralObjectList; // x24
  int klass_high; // w26
  unsigned __int64 v24; // x25
  bool v25; // w1
  __int64 v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  UnityEngine_Object_o **v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v40; // x0
  __int64 *v41; // x8
  System_Func_T__bool__o *v42; // x23
  UnityEngine_Object_o *v43; // x22
  UnityEngine_Object_o *muralMaleObject; // x23
  bool v45; // w0
  UnityEngine_Object_o *v46; // x22
  UnityEngine_Object_o *muralFemaleObject; // x23
  bool v48; // w0
  UILabel_o *detailText; // x20
  struct EventMuralEntity_o *eventMuralEntity; // x8
  System_String_o *message; // x1
  System_String_o *v52; // x21
  Il2CppObject *v53; // x22
  Il2CppObject *v54; // x0
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x2
  __int64 v57; // x0
  int32_t v58; // [xsp+0h] [xbp-60h] BYREF
  int32_t v59; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t total[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4214D0B & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_EventMuralEntity___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMuralMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Func_EventMuralEntity__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_EventMuralEntity__bool__TypeInfo, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__, v11);
    sub_B0D8A4(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__, v12);
    sub_B0D8A4(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__, v13);
    sub_B0D8A4(&EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_5653/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, v15);
    byte_4214D0B = 1;
  }
  *(_QWORD *)total = 0LL;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_52;
  BYTE5(transform[4].klass) = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMuralMaster___);
  if ( this->fields.isPlayAnim )
  {
    if ( !transform )
      goto LABEL_52;
    OpenedEntitiesFromId = EventMuralMaster__GetOpenedEntitiesFromId(
                             (EventMuralMaster_o *)transform,
                             this->fields.eventMuralId,
                             total,
                             &total[1],
                             v17);
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
                             v17);
  }
  v19 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)OpenedEntitiesFromId;
  transform = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !transform )
    goto LABEL_52;
  muralObjectList = this->fields.muralObjectList;
  if ( !muralObjectList )
    goto LABEL_52;
  if ( (int)muralObjectList->max_length >= 1 )
  {
    klass_high = HIDWORD(transform[3].klass);
    v24 = 0LL;
    while ( 1 )
    {
      v26 = sub_B0D974(EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo, v20, v21);
      EventMuralUpdateAction___c__DisplayClass24_0___ctor((EventMuralUpdateAction___c__DisplayClass24_0_o *)v26, 0LL);
      if ( v24 >= muralObjectList->max_length )
      {
        v57 = sub_B0D9A8(transform);
        sub_B0D948(v57, 0LL);
      }
      if ( !v26 )
        goto LABEL_52;
      v33 = (System_Int32_array **)muralObjectList->m_Items[v24];
      *(_QWORD *)(v26 + 16) = v33;
      v34 = (UnityEngine_Object_o **)(v26 + 16);
      sub_B0D840((BattleServantConfConponent_o *)(v26 + 16), v33, v27, v28, v29, v30, v31, v32);
      v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_EventMuralEntity__bool__TypeInfo,
                                                                                 v35,
                                                                                 v36);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v37,
        (Il2CppObject *)v26,
        Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__,
        (const MethodInfo_26189B8 *)Method_System_Func_EventMuralEntity__bool___ctor__);
      if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
              v19,
              (System_Func_T__bool__o *)v37,
              (const MethodInfo_17071E4 *)Method_BasicHelper_Any_EventMuralEntity___) )
      {
        if ( klass_high == 2 )
        {
          v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_EventMuralEntity__bool__TypeInfo,
                                                                                     v38,
                                                                                     v39);
          v41 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__;
        }
        else
        {
          if ( klass_high != 1 )
            break;
          v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_EventMuralEntity__bool__TypeInfo,
                                                                                     v38,
                                                                                     v39);
          v41 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__;
        }
        v42 = (System_Func_T__bool__o *)v40;
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v40,
          (Il2CppObject *)v26,
          *v41,
          (const MethodInfo_26189B8 *)Method_System_Func_EventMuralEntity__bool___ctor__);
        if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                v19,
                v42,
                (const MethodInfo_17071E4 *)Method_BasicHelper_Any_EventMuralEntity___) )
          break;
      }
      v43 = *v34;
      muralMaleObject = (UnityEngine_Object_o *)this->fields.muralMaleObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v45 = UnityEngine_Object__op_Equality(v43, muralMaleObject, 0LL);
      if ( klass_high != 1 && v45 )
        break;
      v46 = *v34;
      muralFemaleObject = (UnityEngine_Object_o *)this->fields.muralFemaleObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v48 = UnityEngine_Object__op_Equality(v46, muralFemaleObject, 0LL);
      if ( klass_high != 2 && v48 )
        break;
      transform = (UnityEngine_Component_o *)*v34;
      if ( !*v34 )
        goto LABEL_52;
      v25 = 1;
LABEL_39:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v25, 0LL);
      if ( (__int64)++v24 >= (int)muralObjectList->max_length )
        goto LABEL_40;
    }
    transform = (UnityEngine_Component_o *)*v34;
    if ( !*v34 )
      goto LABEL_52;
    v25 = 0;
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
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_5653/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, 0LL);
    v59 = total[0];
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
    v58 = total[1];
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
    transform = (UnityEngine_Component_o *)System_String__Format_43845440(v52, v53, v54, 0LL);
    if ( detailText )
    {
      message = (System_String_o *)transform;
      goto LABEL_49;
    }
LABEL_52:
    sub_B0D97C(transform);
  }
  eventMuralEntity = this->fields.eventMuralEntity;
  if ( !eventMuralEntity || !detailText )
    goto LABEL_52;
  message = eventMuralEntity->fields.message;
LABEL_49:
  UILabel__set_text(detailText, message, 0LL);
  EventMuralUpdateAction__SetupScreenTouchInfo(this, v55);
  transform = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !transform )
    goto LABEL_52;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  EventMuralUpdateAction__SetState(this, 1, v56);
}


void __fastcall EventMuralUpdateAction__SetupScreenTouchInfo(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleServantConfConponent_o *p_screenTouchInfo; // x19
  UnityEngine_Object_o *screenTouchInfo; // x21
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v9; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4214D0C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4214D0C = 1;
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
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v9 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0LL), !v9)
      || (ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v9, Instance, 0, 0LL),
          GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, 0LL),
          !ScreeenTouchInfo) )
    {
LABEL_14:
      sub_B0D97C(Instance);
    }
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       ScreeenTouchInfo,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_screenTouchInfo->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
    sub_B0D840(p_screenTouchInfo, Component_srcLineSprite, v12, v13, v14, v15, v16, v17);
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
  __int64 v3; // x1
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x0

  if ( (byte_4214D09 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_EventMuralUpdateAction__update__, method);
    sub_B0D8A4(&CTouch_TypeInfo, v3);
    byte_4214D09 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_EventMuralUpdateAction__update__);
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

  if ( (byte_4211BA2 & 1) == 0 )
  {
    this = (EventMuralUpdateAction_StatePlay_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    byte_4211BA2 = 1;
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
          SimpleAnimation__Play_50482404(v7, name, 0LL);
          return;
        }
      }
LABEL_31:
      sub_B0D97C(this);
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
        UnityEngine_Animation__Play_50564840(v11, v12, 0LL);
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
    sub_B0D97C(this);
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
  EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_o *v10; // x20
  UnityEngine_Component_o *isTouchPush; // x0
  EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v18; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x22

  if ( (byte_4211BA3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&CTouch_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_EventMuralUpdateAction_StateTouchWait_update__, v7);
    sub_B0D8A4(&Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_B0D8A4(&EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_4211BA3 = 1;
  }
  v10 = (EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B0D974(
                                                                          EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo,
                                                                          that,
                                                                          method);
  EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_20;
  v10->fields.that = that;
  p_fields = &v10->fields;
  sub_B0D840(&v10->fields, that);
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
          v13 = Method_EventMuralUpdateAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventMuralUpdateAction_StateTouchWait_update__ + 75) & 2) != 0 )
            v13 = (_QWORD *)sub_B0D8AC(Method_EventMuralUpdateAction_StateTouchWait_update__);
          v14 = (System_Reflection_MethodBase_o *)sub_B0D888(v13, v13[3]);
          OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v18 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v18 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
          v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
          System_Action___ctor(
            v20,
            (Il2CppObject *)v10,
            Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v20, 0LL);
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
    sub_B0D97C(isTouchPush);
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
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *monitor; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_4211B9C & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, ent);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_B0D8A4(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__,
                                                               v7);
    byte_4211B9C = 1;
  }
  if ( !ent )
    sub_B0D97C(this);
  imageIds = ent->fields.imageIds;
  monitor = (System_Func_int__bool__o *)v4[1].monitor;
  if ( !monitor )
  {
    monitor = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, ent, method);
    System_Func_int__bool____ctor(
      monitor,
      v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v4[1].monitor = monitor;
    sub_B0D840(&v4[1].monitor, monitor);
  }
  return BasicHelper__Any_int__24145568(
           imageIds,
           (System_Func_T__bool__o *)monitor,
           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__1(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *klass; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_4211B9E & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, ent);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_B0D8A4(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__,
                                                               v7);
    byte_4211B9E = 1;
  }
  if ( !ent )
    sub_B0D97C(this);
  imageIds = ent->fields.imageIds;
  klass = (System_Func_int__bool__o *)v4[2].klass;
  if ( !klass )
  {
    klass = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, ent, method);
    System_Func_int__bool____ctor(
      klass,
      v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B0D840(&v4[2], klass);
  }
  return BasicHelper__Any_int__24145568(
           imageIds,
           (System_Func_T__bool__o *)klass,
           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__2(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *monitor; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_4211BA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, ent);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_B0D8A4(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__,
                                                               v7);
    byte_4211BA0 = 1;
  }
  if ( !ent )
    sub_B0D97C(this);
  imageIds = ent->fields.imageIds;
  monitor = (System_Func_int__bool__o *)v4[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, ent, method);
    System_Func_int__bool____ctor(
      monitor,
      v4,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v4[2].monitor = monitor;
    sub_B0D840(&v4[2].monitor, monitor);
  }
  return BasicHelper__Any_int__24145568(
           imageIds,
           (System_Func_T__bool__o *)monitor,
           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__3(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  UnityEngine_Object_o *obj; // x8
  System_String_o *v6; // x19
  System_String_o *name; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = id;
  if ( (byte_4211B9D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4562/*"D2"*/, *(_QWORD *)&id);
    byte_4211B9D = 1;
  }
  v4 = System_Int32__ToString_38473032((int32_t)&v9, (System_String_o *)StringLiteral_4562/*"D2"*/, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B0D97C(v4);
  v6 = v4;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v6, name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__4(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x20
  EventMuralUpdateAction_c *v6; // x8
  System_String_o *v7; // x0
  UnityEngine_Object_o *obj; // x8
  System_String_o *v9; // x19
  System_String_o *name; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = id;
  if ( (byte_4211B9F & 1) == 0 )
  {
    sub_B0D8A4(&EventMuralUpdateAction_TypeInfo, *(_QWORD *)&id);
    sub_B0D8A4(&StringLiteral_4562/*"D2"*/, v4);
    byte_4211B9F = 1;
  }
  v5 = System_Int32__ToString_38473032((int32_t)&v12, (System_String_o *)StringLiteral_4562/*"D2"*/, 0LL);
  v6 = EventMuralUpdateAction_TypeInfo;
  if ( (BYTE3(EventMuralUpdateAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v6 = EventMuralUpdateAction_TypeInfo;
  }
  v7 = System_String__Concat_43849904(v5, v6->static_fields->SPRITE_NAME_END_MALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B0D97C(v7);
  v9 = v7;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v9, name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__5(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x20
  EventMuralUpdateAction_c *v6; // x8
  System_String_o *v7; // x0
  UnityEngine_Object_o *obj; // x8
  System_String_o *v9; // x19
  System_String_o *name; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = id;
  if ( (byte_4211BA1 & 1) == 0 )
  {
    sub_B0D8A4(&EventMuralUpdateAction_TypeInfo, *(_QWORD *)&id);
    sub_B0D8A4(&StringLiteral_4562/*"D2"*/, v4);
    byte_4211BA1 = 1;
  }
  v5 = System_Int32__ToString_38473032((int32_t)&v12, (System_String_o *)StringLiteral_4562/*"D2"*/, 0LL);
  v6 = EventMuralUpdateAction_TypeInfo;
  if ( (BYTE3(EventMuralUpdateAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v6 = EventMuralUpdateAction_TypeInfo;
  }
  v7 = System_String__Concat_43849904(v5, v6->static_fields->SPRITE_NAME_END_FEMALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B0D97C(v7);
  v9 = v7;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v9, name, 0LL);
}