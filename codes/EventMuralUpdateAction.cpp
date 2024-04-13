void __fastcall EventMuralUpdateAction___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct EventMuralUpdateAction_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct EventMuralUpdateAction_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E9078 & 1) == 0 )
  {
    sub_B5D5C4(&EventMuralUpdateAction_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16987/*"bit_mural_update{0}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16336/*"_f"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16348/*"_m"*/, v14, v15, v16);
    byte_42E9078 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventMuralUpdateAction_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_16987/*"bit_mural_update{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16987/*"bit_mural_update{0}"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = EventMuralUpdateAction_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_16348/*"_m"*/;
  v19->SPRITE_NAME_END_MALE = (struct System_String_o *)StringLiteral_16348/*"_m"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->SPRITE_NAME_END_MALE, v20, v21, v22, v23, v24, v25, v26);
  v27 = EventMuralUpdateAction_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_16336/*"_f"*/;
  v27->SPRITE_NAME_END_FEMALE = (struct System_String_o *)StringLiteral_16336/*"_f"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->SPRITE_NAME_END_FEMALE, v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall EventMuralUpdateAction___ctor(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  this->fields.isPlayAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventMuralUpdateAction__Awake(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct CStateManager_EventMuralUpdateAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x21
  EventMuralUpdateAction_StateNone_o *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v32; // x21
  EventMuralUpdateAction_StatePlay_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x20
  EventMuralUpdateAction_StateTouchWait_o *v35; // x21
  const MethodInfo *v36; // x2

  if ( (byte_42E906F & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EventMuralUpdateAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_EventMuralUpdateAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_EventMuralUpdateAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&EventMuralUpdateAction_StateNone_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&EventMuralUpdateAction_StatePlay_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&EventMuralUpdateAction_StateTouchWait_TypeInfo, v17, v18, v19);
    byte_42E906F = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v21 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_EventMuralUpdateAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v21,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2BB2630 *)Method_CStateManager_EventMuralUpdateAction___ctor__);
    this->fields.fsm = (struct CStateManager_EventMuralUpdateAction__o *)v21;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    fsm = this->fields.fsm;
    v29 = (EventMuralUpdateAction_StateNone_o *)sub_B5D694(EventMuralUpdateAction_StateNone_TypeInfo);
    EventMuralUpdateAction_StateNone___ctor(v29, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v29,
      (const MethodInfo_2BB26FC *)Method_CStateManager_EventMuralUpdateAction__add__);
    v32 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v33 = (EventMuralUpdateAction_StatePlay_o *)sub_B5D694(EventMuralUpdateAction_StatePlay_TypeInfo);
    EventMuralUpdateAction_StatePlay___ctor(v33, 0LL);
    if ( !v32
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v32,
            1,
            (IState_T__o *)v33,
            (const MethodInfo_2BB26FC *)Method_CStateManager_EventMuralUpdateAction__add__),
          v34 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v35 = (EventMuralUpdateAction_StateTouchWait_o *)sub_B5D694(EventMuralUpdateAction_StateTouchWait_TypeInfo),
          EventMuralUpdateAction_StateTouchWait___ctor(v35, 0LL),
          !v34) )
    {
LABEL_9:
      sub_B5D69C(v30, v31);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v34,
      2,
      (IState_T__o *)v35,
      (const MethodInfo_2BB26FC *)Method_CStateManager_EventMuralUpdateAction__add__);
    EventMuralUpdateAction__SetState(this, 0, v36);
  }
  BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.muralObjectList, 0LL);
}


void __fastcall EventMuralUpdateAction__CheckAssertions(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.muralObjectList, 0LL);
}


int32_t __fastcall EventMuralUpdateAction__GetState(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventMuralUpdateAction_o *v4; // x19
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x8

  v4 = this;
  if ( (byte_42E9076 & 1) == 0 )
  {
    this = (EventMuralUpdateAction_o *)sub_B5D5C4(
                                         &Method_CStateManager_EventMuralUpdateAction__getState__,
                                         (_DWORD)method,
                                         v2,
                                         v3);
    byte_42E9076 = 1;
  }
  fsm = v4->fields.fsm;
  if ( !fsm )
    sub_B5D69C(this, method);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  UnityEngine_Animation_o *gameObject; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  struct EventMuralEntity_o **p_eventMuralEntity; // x21
  System_String_o *ANIM_NAME; // x20
  Il2CppObject *v38; // x0
  struct System_String_o *v39; // x0
  System_String_o **p_playAnimationName; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct SimpleAnimation_o *v55; // x0
  SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  __int64 v64; // x3
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v66; // x23
  unsigned __int64 v67; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v69; // x0
  UnityEngine_Object_o *v70; // x22
  __int64 v71; // x3
  UnityEngine_Animation_c *v72; // x8
  UnityEngine_Animation_o *v73; // x20
  unsigned __int64 v74; // x10
  SimpleAnimation_State_c **v75; // x11
  __int64 v76; // x0
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9071 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, eventMuralId, eventId, isPlayAnim);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMuralMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&EventMuralUpdateAction_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&int_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v30, v31, v32);
    byte_42E9071 = 1;
  }
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  EventMuralUpdateAction__SetState(this, 0, v35);
  this->fields.eventMuralId = eventMuralId;
  this->fields.isPlayAnim = isPlayAnim;
  if ( !isPlayAnim )
  {
    this->fields.eventId = eventId;
    return;
  }
  gameObject = (UnityEngine_Animation_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_54;
  gameObject = (UnityEngine_Animation_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)gameObject,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMuralMaster___);
  if ( !gameObject )
    goto LABEL_54;
  p_eventMuralEntity = &this->fields.eventMuralEntity;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
          (WarEntity_o **)&this->fields.eventMuralEntity,
          eventMuralId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__) )
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
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v39 = System_String__Format(ANIM_NAME, v38, 0LL);
  this->fields.playAnimationName = v39;
  p_playAnimationName = &this->fields.playAnimationName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playAnimationName,
    (System_Int32_array **)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_54;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = ComponentInChildren_UIWidget;
  p_animation = &this->fields.animation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  gameObject = (UnityEngine_Animation_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_54;
  v55 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)gameObject,
                                      (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = v55;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)v55,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
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
        v66 = gameObject;
        if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
        {
          v67 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v67;
            p_offset += 2;
            if ( v67 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
              goto LABEL_24;
          }
          v69 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_24:
          v69 = sub_AF54C0(gameObject, SimpleAnimation_State_TypeInfo, 14LL, v64);
        }
        gameObject = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v69)(
                                                  v66,
                                                  *(_QWORD *)(v69 + 8));
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
                    v72 = gameObject->klass;
                    v73 = gameObject;
                    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
                    {
                      v74 = 0LL;
                      v75 = (SimpleAnimation_State_c **)&v72->_1.interfaceOffsets->offset;
                      while ( *(v75 - 1) != SimpleAnimation_State_TypeInfo )
                      {
                        ++v74;
                        v75 += 2;
                        if ( v74 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
                          goto LABEL_49;
                      }
                      v76 = (__int64)(&v72[1]._1.namespaze + 2 * *(_DWORD *)v75);
                    }
                    else
                    {
LABEL_49:
                      v76 = sub_AF54C0(gameObject, SimpleAnimation_State_TypeInfo, 6LL, v71);
                    }
                    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v76)(
                      v73,
                      *(_QWORD *)(v76 + 8),
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
    sub_B5D69C(gameObject, v34);
  }
  v70 = (UnityEngine_Object_o *)*p_animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
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
  EventMuralUpdateAction__SetAnimationEvent(this, v34);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v24; // x0
  System_Action_o *v25; // x21

  if ( (byte_42E9074 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v4);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_EventMuralUpdateAction__Play_b__26_0__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    byte_42E9074 = 1;
  }
  this->fields.endAct = end_act;
  sub_B5D560(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v24 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v24 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v24->static_fields->DEFAULT_FADE_TIME;
  }
  v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_EventMuralUpdateAction__Play_b__26_0__, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__maskFadein(Instance, fade_in_time, v25, 0LL);
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
    sub_B5D69C(gameObject, v22);
  }
}


void __fastcall EventMuralUpdateAction__SetAnimationEvent(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E9075 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventMuralUpdateAction_OnPlayEnd__, v5, v6, v7);
    byte_42E9075 = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventMuralUpdateAction_OnPlayEnd__, 0LL);
  if ( !effectActionComponent )
    sub_B5D69C(v10, v11);
  effectActionComponent->fields.endAction = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&effectActionComponent->fields.endAction,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMuralUpdateAction__SetState(
        EventMuralUpdateAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x0

  if ( (byte_42E9077 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EventMuralUpdateAction__setState__, state, (_DWORD)method, v3);
    byte_42E9077 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_EventMuralUpdateAction__setState__);
}


void __fastcall EventMuralUpdateAction__Setup(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  UnityEngine_Component_o *transform; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x4
  EventMuralEntity_array *OpenedEntitiesFromId; // x0
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v48; // x20
  struct UnityEngine_GameObject_array *muralObjectList; // x24
  int klass_high; // w26
  unsigned __int64 v51; // x25
  bool v52; // w1
  __int64 v53; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  UnityEngine_Object_o **v61; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v62; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v63; // x0
  __int64 *v64; // x8
  System_Func_T__bool__o *v65; // x23
  UnityEngine_Object_o *v66; // x22
  UnityEngine_Object_o *muralMaleObject; // x23
  bool v68; // w0
  UnityEngine_Object_o *v69; // x22
  UnityEngine_Object_o *muralFemaleObject; // x23
  bool v71; // w0
  UILabel_o *detailText; // x20
  struct EventMuralEntity_o *eventMuralEntity; // x8
  System_String_o *message; // x1
  System_String_o *v75; // x21
  Il2CppObject *v76; // x22
  Il2CppObject *v77; // x0
  const MethodInfo *v78; // x1
  const MethodInfo *v79; // x2
  __int64 v80; // x0
  int32_t v81; // [xsp+0h] [xbp-60h] BYREF
  int32_t v82; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t total[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E9072 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_EventMuralEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMuralMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_EventMuralEntity__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_EventMuralEntity__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__, v29, v30, v31);
    sub_B5D5C4(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__, v32, v33, v34);
    sub_B5D5C4(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__, v35, v36, v37);
    sub_B5D5C4(&EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_5714/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, v41, v42, v43);
    byte_42E9072 = 1;
  }
  *(_QWORD *)total = 0LL;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_52;
  BYTE5(transform[4].klass) = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMuralMaster___);
  if ( this->fields.isPlayAnim )
  {
    if ( !transform )
      goto LABEL_52;
    OpenedEntitiesFromId = EventMuralMaster__GetOpenedEntitiesFromId(
                             (EventMuralMaster_o *)transform,
                             this->fields.eventMuralId,
                             total,
                             &total[1],
                             v46);
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
                             v46);
  }
  v48 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)OpenedEntitiesFromId;
  transform = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !transform )
    goto LABEL_52;
  muralObjectList = this->fields.muralObjectList;
  if ( !muralObjectList )
    goto LABEL_52;
  if ( (int)muralObjectList->max_length >= 1 )
  {
    klass_high = HIDWORD(transform[3].klass);
    v51 = 0LL;
    while ( 1 )
    {
      v53 = sub_B5D694(EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo);
      EventMuralUpdateAction___c__DisplayClass24_0___ctor((EventMuralUpdateAction___c__DisplayClass24_0_o *)v53, 0LL);
      if ( v51 >= muralObjectList->max_length )
      {
        v80 = sub_B5D6C8(transform);
        sub_B5D668(v80, 0LL);
      }
      if ( !v53 )
        goto LABEL_52;
      v60 = (System_Int32_array **)muralObjectList->m_Items[v51];
      *(_QWORD *)(v53 + 16) = v60;
      v61 = (UnityEngine_Object_o **)(v53 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v53 + 16), v60, v54, v55, v56, v57, v58, v59);
      v62 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventMuralEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v62,
        (Il2CppObject *)v53,
        Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_EventMuralEntity__bool___ctor__);
      if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
              v48,
              (System_Func_T__bool__o *)v62,
              (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_EventMuralEntity___) )
      {
        if ( klass_high == 2 )
        {
          v63 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventMuralEntity__bool__TypeInfo);
          v64 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__;
        }
        else
        {
          if ( klass_high != 1 )
            break;
          v63 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventMuralEntity__bool__TypeInfo);
          v64 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__;
        }
        v65 = (System_Func_T__bool__o *)v63;
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v63,
          (Il2CppObject *)v53,
          *v64,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_EventMuralEntity__bool___ctor__);
        if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                v48,
                v65,
                (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_EventMuralEntity___) )
          break;
      }
      v66 = *v61;
      muralMaleObject = (UnityEngine_Object_o *)this->fields.muralMaleObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v68 = UnityEngine_Object__op_Equality(v66, muralMaleObject, 0LL);
      if ( klass_high != 1 && v68 )
        break;
      v69 = *v61;
      muralFemaleObject = (UnityEngine_Object_o *)this->fields.muralFemaleObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v71 = UnityEngine_Object__op_Equality(v69, muralFemaleObject, 0LL);
      if ( klass_high != 2 && v71 )
        break;
      transform = (UnityEngine_Component_o *)*v61;
      if ( !*v61 )
        goto LABEL_52;
      v52 = 1;
LABEL_39:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v52, 0LL);
      if ( (__int64)++v51 >= (int)muralObjectList->max_length )
        goto LABEL_40;
    }
    transform = (UnityEngine_Component_o *)*v61;
    if ( !*v61 )
      goto LABEL_52;
    v52 = 0;
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
    v75 = LocalizationManager__Get((System_String_o *)StringLiteral_5714/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, 0LL);
    v82 = total[0];
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
    v81 = total[1];
    v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
    transform = (UnityEngine_Component_o *)System_String__Format_44573324(v75, v76, v77, 0LL);
    if ( detailText )
    {
      message = (System_String_o *)transform;
      goto LABEL_49;
    }
LABEL_52:
    sub_B5D69C(transform, v45);
  }
  eventMuralEntity = this->fields.eventMuralEntity;
  if ( !eventMuralEntity || !detailText )
    goto LABEL_52;
  message = eventMuralEntity->fields.message;
LABEL_49:
  UILabel__set_text(detailText, message, 0LL);
  EventMuralUpdateAction__SetupScreenTouchInfo(this, v78);
  transform = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !transform )
    goto LABEL_52;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  EventMuralUpdateAction__SetState(this, 1, v79);
}


void __fastcall EventMuralUpdateAction__SetupScreenTouchInfo(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *p_screenTouchInfo; // x19
  UnityEngine_Object_o *screenTouchInfo; // x21
  __int64 v13; // x1
  UnityEngine_Transform_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v16; // x20
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42E9073 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E9073 = 1;
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
    Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v16 = (CommonUI_o *)Instance, Instance = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0LL), !v16)
      || (ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v16, Instance, 0, 0LL),
          GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, 0LL),
          !ScreeenTouchInfo) )
    {
LABEL_14:
      sub_B5D69C(Instance, v13);
    }
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       ScreeenTouchInfo,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_screenTouchInfo->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
    sub_B5D560(p_screenTouchInfo, Component_srcLineSprite, v19, v20, v21, v22, v23, v24);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x0

  if ( (byte_42E9070 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EventMuralUpdateAction__update__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CTouch_TypeInfo, v5, v6, v7);
    byte_42E9070 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2BB2778 *)Method_CStateManager_EventMuralUpdateAction__update__);
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
  __int64 v3; // x3
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v8; // x19
  System_String_o *name; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v12; // x19
  System_String_o *v13; // x1

  if ( (byte_42E6577 & 1) == 0 )
  {
    this = (EventMuralUpdateAction_StatePlay_o *)sub_B5D5C4(
                                                   &UnityEngine_Object_TypeInfo,
                                                   (_DWORD)that,
                                                   (_DWORD)method,
                                                   v3);
    byte_42E6577 = 1;
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
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_31;
    monitor = (UnityEngine_Object_o *)v6[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v8 = that->fields.simpleAnimation;
      if ( v8 )
      {
        this = (EventMuralUpdateAction_StatePlay_o *)v8[1].monitor;
        if ( this )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          SimpleAnimation__Play_16676044(v8, name, 0LL);
          return;
        }
      }
LABEL_31:
      sub_B5D69C(this, that);
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
        v12 = that->fields.animation;
        if ( !v12 )
          goto LABEL_31;
        this = (EventMuralUpdateAction_StatePlay_o *)UnityEngine_Animation__get_clip(v12, 0LL);
        if ( !this )
          goto LABEL_31;
        v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        UnityEngine_Animation__Play_51249124(v12, v13, 0LL);
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
    sub_B5D69C(this, that);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_o *v23; // x20
  UnityEngine_Component_o *isTouchPush; // x0
  __int64 v25; // x1
  EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x22

  if ( (byte_42E6578 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CTouch_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_EventMuralUpdateAction_StateTouchWait_update__, v14, v15, v16);
    sub_B5D5C4(&Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v17, v18, v19);
    sub_B5D5C4(&EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v20, v21, v22);
    byte_42E6578 = 1;
  }
  v23 = (EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B5D694(EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_20;
  v23->fields.that = that;
  p_fields = &v23->fields;
  sub_B5D560(&v23->fields);
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
          v27 = Method_EventMuralUpdateAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventMuralUpdateAction_StateTouchWait_update__ + 75) & 2) != 0 )
            v27 = (_QWORD *)sub_B5D5CC(Method_EventMuralUpdateAction_StateTouchWait_update__);
          v28 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v27, v27[3]);
          OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v30 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v30 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
          v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v32,
            (Il2CppObject *)v23,
            Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v32, 0LL);
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
    sub_B5D69C(isTouchPush, v25);
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
    sub_B5D69C(this, method);
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
  Il2CppObject *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *monitor; // x22

  v5 = (Il2CppObject *)this;
  if ( (byte_42E6571 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)ent, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_B5D5C4(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__,
                                                               v12,
                                                               v13,
                                                               v14);
    byte_42E6571 = 1;
  }
  if ( !ent )
    sub_B5D69C(this, ent);
  imageIds = ent->fields.imageIds;
  monitor = (System_Func_int__bool__o *)v5[1].monitor;
  if ( !monitor )
  {
    monitor = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      monitor,
      v5,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v5[1].monitor = monitor;
    sub_B5D560(&v5[1].monitor);
  }
  return BasicHelper__Any_int__28142236(
           imageIds,
           (System_Func_T__bool__o *)monitor,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__1(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *klass; // x22

  v5 = (Il2CppObject *)this;
  if ( (byte_42E6573 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)ent, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_B5D5C4(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__,
                                                               v12,
                                                               v13,
                                                               v14);
    byte_42E6573 = 1;
  }
  if ( !ent )
    sub_B5D69C(this, ent);
  imageIds = ent->fields.imageIds;
  klass = (System_Func_int__bool__o *)v5[2].klass;
  if ( !klass )
  {
    klass = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      klass,
      v5,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v5[2].klass = (Il2CppClass *)klass;
    sub_B5D560(&v5[2]);
  }
  return BasicHelper__Any_int__28142236(
           imageIds,
           (System_Func_T__bool__o *)klass,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__2(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *monitor; // x22

  v5 = (Il2CppObject *)this;
  if ( (byte_42E6575 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)ent, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    this = (EventMuralUpdateAction___c__DisplayClass24_0_o *)sub_B5D5C4(
                                                               &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__,
                                                               v12,
                                                               v13,
                                                               v14);
    byte_42E6575 = 1;
  }
  if ( !ent )
    sub_B5D69C(this, ent);
  imageIds = ent->fields.imageIds;
  monitor = (System_Func_int__bool__o *)v5[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      monitor,
      v5,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v5[2].monitor = monitor;
    sub_B5D560(&v5[2].monitor);
  }
  return BasicHelper__Any_int__28142236(
           imageIds,
           (System_Func_T__bool__o *)monitor,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__3(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v8; // x19
  System_String_o *name; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = id;
  if ( (byte_42E6572 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4619/*"D2"*/, id, (_DWORD)method, v3);
    byte_42E6572 = 1;
  }
  v5 = System_Int32__ToString_39741776((int32_t)&v11, (System_String_o *)StringLiteral_4619/*"D2"*/, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B5D69C(v5, v6);
  v8 = v5;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v8, name, 0LL);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__4(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x20
  EventMuralUpdateAction_c *v9; // x8
  System_String_o *v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v13; // x19
  System_String_o *name; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = id;
  if ( (byte_42E6574 & 1) == 0 )
  {
    sub_B5D5C4(&EventMuralUpdateAction_TypeInfo, id, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_4619/*"D2"*/, v5, v6, v7);
    byte_42E6574 = 1;
  }
  v8 = System_Int32__ToString_39741776((int32_t)&v16, (System_String_o *)StringLiteral_4619/*"D2"*/, 0LL);
  v9 = EventMuralUpdateAction_TypeInfo;
  if ( (BYTE3(EventMuralUpdateAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v9 = EventMuralUpdateAction_TypeInfo;
  }
  v10 = System_String__Concat_44577788(v8, v9->static_fields->SPRITE_NAME_END_MALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B5D69C(v10, v11);
  v13 = v10;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v13, name, 0LL);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__5(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x20
  EventMuralUpdateAction_c *v9; // x8
  System_String_o *v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *obj; // x8
  System_String_o *v13; // x19
  System_String_o *name; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = id;
  if ( (byte_42E6576 & 1) == 0 )
  {
    sub_B5D5C4(&EventMuralUpdateAction_TypeInfo, id, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_4619/*"D2"*/, v5, v6, v7);
    byte_42E6576 = 1;
  }
  v8 = System_Int32__ToString_39741776((int32_t)&v16, (System_String_o *)StringLiteral_4619/*"D2"*/, 0LL);
  v9 = EventMuralUpdateAction_TypeInfo;
  if ( (BYTE3(EventMuralUpdateAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v9 = EventMuralUpdateAction_TypeInfo;
  }
  v10 = System_String__Concat_44577788(v8, v9->static_fields->SPRITE_NAME_END_FEMALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B5D69C(v10, v11);
  v13 = v10;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v13, name, 0LL);
}