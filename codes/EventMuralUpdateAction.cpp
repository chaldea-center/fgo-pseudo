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

  if ( (byte_40FABE3 & 1) == 0 )
  {
    sub_B16FFC(&EventMuralUpdateAction_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16717/*"bit_mural_update{0}"*/, v8);
    sub_B16FFC(&StringLiteral_16080/*"_f"*/, v9);
    sub_B16FFC(&StringLiteral_16091/*"_m"*/, v10);
    byte_40FABE3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventMuralUpdateAction_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_16717/*"bit_mural_update{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16717/*"bit_mural_update{0}"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = EventMuralUpdateAction_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_16091/*"_m"*/;
  v13->SPRITE_NAME_END_MALE = (struct System_String_o *)StringLiteral_16091/*"_m"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v13->SPRITE_NAME_END_MALE, v14, v15, v16, v17, v18, v19, v20);
  v21 = EventMuralUpdateAction_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_16080/*"_f"*/;
  v21->SPRITE_NAME_END_FEMALE = (struct System_String_o *)StringLiteral_16080/*"_f"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v21->SPRITE_NAME_END_FEMALE, v22, v23, v24, v25, v26, v27, v28);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct CStateManager_EventMuralUpdateAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  EventMuralUpdateAction_StateNone_o *v24; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  EventMuralUpdateAction_StatePlay_o *v30; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  EventMuralUpdateAction_StateTouchWait_o *v36; // x21
  const MethodInfo *v37; // x2

  if ( (byte_40FABDA & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventMuralUpdateAction___ctor__, method);
    sub_B16FFC(&Method_CStateManager_EventMuralUpdateAction__add__, v6);
    sub_B16FFC(&CStateManager_EventMuralUpdateAction__TypeInfo, v7);
    sub_B16FFC(&EventMuralUpdateAction_StateNone_TypeInfo, v8);
    sub_B16FFC(&EventMuralUpdateAction_StatePlay_TypeInfo, v9);
    sub_B16FFC(&EventMuralUpdateAction_StateTouchWait_TypeInfo, v10);
    byte_40FABDA = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v12 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_EventMuralUpdateAction__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v12,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2907EF0 *)Method_CStateManager_EventMuralUpdateAction___ctor__);
    this->fields.fsm = (struct CStateManager_EventMuralUpdateAction__o *)v12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    fsm = this->fields.fsm;
    v24 = (EventMuralUpdateAction_StateNone_o *)sub_B170CC(
                                                  EventMuralUpdateAction_StateNone_TypeInfo,
                                                  v20,
                                                  v21,
                                                  v22,
                                                  v23);
    EventMuralUpdateAction_StateNone___ctor(v24, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v24,
      (const MethodInfo_2907FBC *)Method_CStateManager_EventMuralUpdateAction__add__);
    v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v30 = (EventMuralUpdateAction_StatePlay_o *)sub_B170CC(
                                                  EventMuralUpdateAction_StatePlay_TypeInfo,
                                                  v26,
                                                  v27,
                                                  v28,
                                                  v29);
    EventMuralUpdateAction_StatePlay___ctor(v30, 0LL);
    if ( !v25
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v25,
            1,
            (IState_T__o *)v30,
            (const MethodInfo_2907FBC *)Method_CStateManager_EventMuralUpdateAction__add__),
          v31 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v36 = (EventMuralUpdateAction_StateTouchWait_o *)sub_B170CC(
                                                             EventMuralUpdateAction_StateTouchWait_TypeInfo,
                                                             v32,
                                                             v33,
                                                             v34,
                                                             v35),
          EventMuralUpdateAction_StateTouchWait___ctor(v36, 0LL),
          !v31) )
    {
LABEL_9:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v31,
      2,
      (IState_T__o *)v36,
      (const MethodInfo_2907FBC *)Method_CStateManager_EventMuralUpdateAction__add__);
    EventMuralUpdateAction__SetState(this, 0, v37);
  }
  BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.muralObjectList, 0LL);
}


void __fastcall EventMuralUpdateAction__CheckAssertions(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.muralObjectList, 0LL);
}


int32_t __fastcall EventMuralUpdateAction__GetState(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x8

  if ( (byte_40FABE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventMuralUpdateAction__getState__, method);
    byte_40FABE1 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v18; // x2
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct EventMuralEntity_o **p_eventMuralEntity; // x21
  System_String_o *ANIM_NAME; // x20
  Il2CppObject *v23; // x0
  struct System_String_o *v24; // x0
  System_String_o **p_playAnimationName; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Component_o *v41; // x0
  struct SimpleAnimation_o *v42; // x0
  SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v53; // x23
  unsigned __int64 v54; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Animation_o *v57; // x22
  const MethodInfo *v58; // x1
  UnityEngine_AnimationClip_o *Clip; // x0
  UnityEngine_AnimationState_o *v60; // x0
  UnityEngine_AnimationState_o *v61; // x0
  UnityEngine_AnimationClip_o *v62; // x0
  UnityEngine_AnimationState_o *v63; // x0
  SimpleAnimation_State_o *v64; // x0
  SimpleAnimation_State_c *v65; // x8
  SimpleAnimation_State_o *v66; // x20
  unsigned __int64 v67; // x10
  SimpleAnimation_State_c **v68; // x11
  __int64 v69; // x0
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FABDC & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&eventMuralId);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMuralMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v11);
    sub_B16FFC(&EventMuralUpdateAction_TypeInfo, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v16);
    byte_40FABDC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  EventMuralUpdateAction__SetState(this, 0, v18);
  this->fields.eventMuralId = eventMuralId;
  this->fields.isPlayAnim = isPlayAnim;
  if ( !isPlayAnim )
  {
    this->fields.eventId = eventId;
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMuralMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  p_eventMuralEntity = &this->fields.eventMuralEntity;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          (WarEntity_o **)&this->fields.eventMuralEntity,
          eventMuralId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__) )
    return;
  if ( (BYTE3(EventMuralUpdateAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
  }
  if ( !*p_eventMuralEntity )
    goto LABEL_54;
  ANIM_NAME = EventMuralUpdateAction_TypeInfo->static_fields->ANIM_NAME;
  id = (*p_eventMuralEntity)->fields.id;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v24 = System_String__Format(ANIM_NAME, v23, 0LL);
  this->fields.playAnimationName = v24;
  p_playAnimationName = &this->fields.playAnimationName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playAnimationName,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = ComponentInChildren_UIWidget;
  p_animation = &this->fields.animation;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v41 )
    goto LABEL_54;
  v42 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      v41,
                                      (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = v42;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)v42,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    if ( *p_simpleAnimation )
    {
      Item = SimpleAnimation__get_Item(*p_simpleAnimation, *p_playAnimationName, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v53 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v54 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v54;
            p_offset += 2;
            if ( v54 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_24;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
        }
        else
        {
LABEL_24:
          p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 14LL);
        }
        v62 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                               v53,
                                               *(_QWORD *)(p_method + 8));
        if ( *p_simpleAnimation )
        {
          SimpleAnimation__set_clip(*p_simpleAnimation, v62, 0LL);
          if ( *p_simpleAnimation )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*p_simpleAnimation, 0, 0LL);
            if ( *p_animation )
            {
              v63 = UnityEngine_Animation__get_Item(*p_animation, *p_playAnimationName, 0LL);
              if ( v63 )
              {
                UnityEngine_AnimationState__set_speed(v63, 0.0, 0LL);
                if ( *p_simpleAnimation )
                {
                  v64 = SimpleAnimation__get_Item(*p_simpleAnimation, *p_playAnimationName, 0LL);
                  if ( v64 )
                  {
                    v65 = v64->klass;
                    v66 = v64;
                    if ( *(_WORD *)&v64->klass->_2.bitflags1 )
                    {
                      v67 = 0LL;
                      v68 = (SimpleAnimation_State_c **)&v65->_1.interfaceOffsets->offset;
                      while ( *(v68 - 1) != SimpleAnimation_State_TypeInfo )
                      {
                        ++v67;
                        v68 += 2;
                        if ( v67 >= *(unsigned __int16 *)&v64->klass->_2.bitflags1 )
                          goto LABEL_49;
                      }
                      v69 = (__int64)&v65->vtable[*(_DWORD *)v68 + 6].method;
                    }
                    else
                    {
LABEL_49:
                      v69 = sub_AAFEF8(v64, SimpleAnimation_State_TypeInfo, 6LL);
                    }
                    (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v69)(
                      v66,
                      *(_QWORD *)(v69 + 8),
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
    sub_B170D4();
  }
  v57 = *p_animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, 0LL, 0LL) )
  {
    if ( !*p_animation )
      goto LABEL_54;
    Clip = UnityEngine_Animation__GetClip(*p_animation, *p_playAnimationName, 0LL);
    if ( !*p_animation )
      goto LABEL_54;
    UnityEngine_Animation__set_clip(*p_animation, Clip, 0LL);
    if ( !*p_animation )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*p_animation, 0, 0LL);
    if ( !*p_animation )
      goto LABEL_54;
    v60 = UnityEngine_Animation__get_Item(*p_animation, *p_playAnimationName, 0LL);
    if ( !v60 )
      goto LABEL_54;
    UnityEngine_AnimationState__set_speed(v60, 0.0, 0LL);
    if ( !*p_animation )
      goto LABEL_54;
    v61 = UnityEngine_Animation__get_Item(*p_animation, *p_playAnimationName, 0LL);
    if ( !v61 )
      goto LABEL_54;
    UnityEngine_AnimationState__set_normalizedTime(v61, 0.0, 0LL);
  }
LABEL_52:
  EventMuralUpdateAction__SetAnimationEvent(this, v58);
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
  __int64 v18; // x3
  __int64 v19; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x0
  System_Action_o *v22; // x21
  UnityEngine_Animation_o *animation; // x0
  UnityEngine_AnimationState_o *Item; // x0

  if ( (byte_40FABDF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v12);
    sub_B16FFC(&Method_EventMuralUpdateAction__Play_b__26_0__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_40FABDF = 1;
  }
  this->fields.endAct = end_act;
  sub_B16F98(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v21 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v21 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v21->static_fields->DEFAULT_FADE_TIME;
  }
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_EventMuralUpdateAction__Play_b__26_0__, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__maskFadein(Instance, fade_in_time, v22, 0LL);
  if ( this->fields.isPlayAnim )
  {
    animation = this->fields.animation;
    if ( animation )
    {
      Item = UnityEngine_Animation__get_Item(animation, this->fields.playAnimationName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_speed(Item, 1.0, 0LL);
        return;
      }
    }
LABEL_15:
    sub_B170D4();
  }
}


void __fastcall EventMuralUpdateAction__SetAnimationEvent(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FABE0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventMuralUpdateAction_OnPlayEnd__, v6);
    byte_40FABE0 = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventMuralUpdateAction_OnPlayEnd__, 0LL);
  if ( !effectActionComponent )
    sub_B170D4();
  effectActionComponent->fields.endAction = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&effectActionComponent->fields.endAction,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMuralUpdateAction__SetState(
        EventMuralUpdateAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x0

  if ( (byte_40FABE2 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventMuralUpdateAction__setState__, *(_QWORD *)&state);
    byte_40FABE2 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_EventMuralUpdateAction__setState__);
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
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  EventMuralMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v19; // x4
  EventMuralEntity_array *OpenedEntitiesFromId; // x0
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v21; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct UnityEngine_GameObject_array *muralObjectList; // x24
  int32_t genderType; // w26
  unsigned __int64 v29; // x25
  UnityEngine_GameObject_o *v30; // x0
  bool v31; // w1
  __int64 v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  UnityEngine_Object_o **v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x0
  __int64 *v53; // x8
  System_Func_T__bool__o *v54; // x23
  UnityEngine_Object_o *v55; // x22
  UnityEngine_Object_o *muralMaleObject; // x23
  bool v57; // w0
  UnityEngine_Object_o *v58; // x22
  UnityEngine_Object_o *muralFemaleObject; // x23
  bool v60; // w0
  UILabel_o *detailText; // x20
  struct EventMuralEntity_o *eventMuralEntity; // x8
  System_String_o *message; // x1
  System_String_o *v64; // x21
  Il2CppObject *v65; // x22
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  const MethodInfo *v68; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v71; // x2
  int32_t v72; // [xsp+0h] [xbp-60h] BYREF
  int32_t v73; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t total[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FABDD & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_EventMuralEntity___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMuralMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_System_Func_EventMuralEntity__bool___ctor__, v6);
    sub_B16FFC(&System_Func_EventMuralEntity__bool__TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__, v11);
    sub_B16FFC(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__, v12);
    sub_B16FFC(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__, v13);
    sub_B16FFC(&EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_5621/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, v15);
    byte_40FABDD = 1;
  }
  *(_QWORD *)total = 0LL;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                   transform,
                                   (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !ComponentInChildren_UIWidget )
    goto LABEL_52;
  *(&ComponentInChildren_UIWidget->fields.mAnchorsCached + 5) = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventMuralMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMuralMaster___);
  if ( this->fields.isPlayAnim )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_52;
    OpenedEntitiesFromId = EventMuralMaster__GetOpenedEntitiesFromId(
                             Master_WarQuestSelectionMaster,
                             this->fields.eventMuralId,
                             total,
                             &total[1],
                             v19);
  }
  else
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_52;
    OpenedEntitiesFromId = EventMuralMaster__GetOpenedEntitiesFromEventId(
                             Master_WarQuestSelectionMaster,
                             this->fields.eventId,
                             total,
                             &total[1],
                             v19);
  }
  v21 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)OpenedEntitiesFromId;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_52;
  muralObjectList = this->fields.muralObjectList;
  if ( !muralObjectList )
    goto LABEL_52;
  if ( (int)muralObjectList->max_length >= 1 )
  {
    genderType = SelfUserGame->fields.genderType;
    v29 = 0LL;
    while ( 1 )
    {
      v32 = sub_B170CC(EventMuralUpdateAction___c__DisplayClass24_0_TypeInfo, v23, v24, v25, v26);
      EventMuralUpdateAction___c__DisplayClass24_0___ctor((EventMuralUpdateAction___c__DisplayClass24_0_o *)v32, 0LL);
      if ( v29 >= muralObjectList->max_length )
      {
        sub_B17100(v33, v34, v35);
        sub_B170A0();
      }
      if ( !v32 )
        goto LABEL_52;
      v41 = (System_Int32_array **)muralObjectList->m_Items[v29];
      *(_QWORD *)(v32 + 16) = v41;
      v42 = (UnityEngine_Object_o **)(v32 + 16);
      sub_B16F98((BattleServantConfConponent_o *)(v32 + 16), v41, v35, v36, v37, v38, v39, v40);
      v47 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_EventMuralEntity__bool__TypeInfo,
                                                                                 v43,
                                                                                 v44,
                                                                                 v45,
                                                                                 v46);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v47,
        (Il2CppObject *)v32,
        Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_EventMuralEntity__bool___ctor__);
      if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
              v21,
              (System_Func_T__bool__o *)v47,
              (const MethodInfo_18B6074 *)Method_BasicHelper_Any_EventMuralEntity___) )
      {
        if ( genderType == 2 )
        {
          v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_EventMuralEntity__bool__TypeInfo,
                                                                                     v48,
                                                                                     v49,
                                                                                     v50,
                                                                                     v51);
          v53 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__2__;
        }
        else
        {
          if ( genderType != 1 )
            break;
          v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_EventMuralEntity__bool__TypeInfo,
                                                                                     v48,
                                                                                     v49,
                                                                                     v50,
                                                                                     v51);
          v53 = &Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__1__;
        }
        v54 = (System_Func_T__bool__o *)v52;
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v52,
          (Il2CppObject *)v32,
          *v53,
          (const MethodInfo_2B6AB40 *)Method_System_Func_EventMuralEntity__bool___ctor__);
        if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                v21,
                v54,
                (const MethodInfo_18B6074 *)Method_BasicHelper_Any_EventMuralEntity___) )
          break;
      }
      v55 = *v42;
      muralMaleObject = (UnityEngine_Object_o *)this->fields.muralMaleObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v57 = UnityEngine_Object__op_Equality(v55, muralMaleObject, 0LL);
      if ( genderType != 1 && v57 )
        break;
      v58 = *v42;
      muralFemaleObject = (UnityEngine_Object_o *)this->fields.muralFemaleObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v60 = UnityEngine_Object__op_Equality(v58, muralFemaleObject, 0LL);
      if ( genderType != 2 && v60 )
        break;
      v30 = (UnityEngine_GameObject_o *)*v42;
      if ( !*v42 )
        goto LABEL_52;
      v31 = 1;
LABEL_39:
      UnityEngine_GameObject__SetActive(v30, v31, 0LL);
      if ( (__int64)++v29 >= (int)muralObjectList->max_length )
        goto LABEL_40;
    }
    v30 = (UnityEngine_GameObject_o *)*v42;
    if ( !*v42 )
      goto LABEL_52;
    v31 = 0;
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
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_5621/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, 0LL);
    v73 = total[0];
    v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
    v72 = total[1];
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
    v67 = System_String__Format_43739268(v64, v65, v66, 0LL);
    if ( detailText )
    {
      message = v67;
      goto LABEL_49;
    }
LABEL_52:
    sub_B170D4();
  }
  eventMuralEntity = this->fields.eventMuralEntity;
  if ( !eventMuralEntity || !detailText )
    goto LABEL_52;
  message = eventMuralEntity->fields.message;
LABEL_49:
  UILabel__set_text(detailText, message, 0LL);
  EventMuralUpdateAction__SetupScreenTouchInfo(this, v68);
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  EventMuralUpdateAction__SetState(this, 1, v71);
}


void __fastcall EventMuralUpdateAction__SetupScreenTouchInfo(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleServantConfConponent_o *p_screenTouchInfo; // x19
  UnityEngine_Object_o *screenTouchInfo; // x21
  WebViewManager_o *Instance; // x0
  UnityEngine_GameObject_o *screenTouchInfoRoot; // x8
  CommonUI_o *v9; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FABDE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FABDE = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    screenTouchInfoRoot = this->fields.screenTouchInfoRoot;
    if ( !screenTouchInfoRoot
      || (v9 = (CommonUI_o *)Instance, transform = UnityEngine_GameObject__get_transform(screenTouchInfoRoot, 0LL), !v9)
      || (ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v9, transform, 0, 0LL),
          GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, 0.0, 0LL),
          !ScreeenTouchInfo) )
    {
LABEL_14:
      sub_B170D4();
    }
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       ScreeenTouchInfo,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_screenTouchInfo->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
    sub_B16F98(p_screenTouchInfo, Component_srcLineSprite, v13, v14, v15, v16, v17, v18);
  }
  if ( !p_screenTouchInfo->klass )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p_screenTouchInfo->klass, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall EventMuralUpdateAction__Update(EventMuralUpdateAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CStateManager_EventMuralUpdateAction__o *fsm; // x0

  if ( (byte_40FABDB & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventMuralUpdateAction__update__, method);
    sub_B16FFC(&CTouch_TypeInfo, v3);
    byte_40FABDB = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2908038 *)Method_CStateManager_EventMuralUpdateAction__update__);
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
  UnityEngine_Behaviour_o *v5; // x0
  struct SimpleAnimation_o *v6; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v8; // x19
  UnityEngine_Object_o *v9; // x0
  System_String_o *name; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Behaviour_o *v12; // x0
  UnityEngine_Animation_o *v13; // x0
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v15; // x19
  UnityEngine_Object_o *v16; // x0
  System_String_o *v17; // x1

  if ( (byte_40F7009 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    byte_40F7009 = 1;
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
    v5 = (UnityEngine_Behaviour_o *)that->fields.simpleAnimation;
    if ( !v5 )
      goto LABEL_31;
    UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_31;
    monitor = (UnityEngine_Object_o *)v6[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v8 = that->fields.simpleAnimation;
      if ( v8 )
      {
        v9 = (UnityEngine_Object_o *)v8[1].monitor;
        if ( v9 )
        {
          name = UnityEngine_Object__get_name(v9, 0LL);
          SimpleAnimation__Play_16380456(v8, name, 0LL);
          return;
        }
      }
LABEL_31:
      sub_B170D4();
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
      v12 = (UnityEngine_Behaviour_o *)that->fields.animation;
      if ( !v12 )
        goto LABEL_31;
      UnityEngine_Behaviour__set_enabled(v12, 1, 0LL);
      v13 = that->fields.animation;
      if ( !v13 )
        goto LABEL_31;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v13, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(clip, 0LL, 0LL) )
      {
        v15 = that->fields.animation;
        if ( !v15 )
          goto LABEL_31;
        v16 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v15, 0LL);
        if ( !v16 )
          goto LABEL_31;
        v17 = UnityEngine_Object__get_name(v16, 0LL);
        UnityEngine_Animation__Play_49744236(v15, v17, 0LL);
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
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !that
    || (screenTouchInfo = (UnityEngine_Component_o *)that->fields.screenTouchInfo) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  EventMuralUpdateAction_o **v19; // x19
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v29; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x22

  if ( (byte_40F700A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&CTouch_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_EventMuralUpdateAction_StateTouchWait_update__, v9);
    sub_B16FFC(&Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v10);
    sub_B16FFC(&EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v11);
    byte_40F700A = 1;
  }
  v12 = sub_B170CC(EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_20;
  *(_QWORD *)(v12 + 16) = that;
  v19 = (EventMuralUpdateAction_o **)(v12 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)that, v13, v14, v15, v16, v17, v18);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
    if ( *v19 )
    {
      screenTouchInfo = (UnityEngine_Component_o *)(*v19)->fields.screenTouchInfo;
      if ( screenTouchInfo )
      {
        gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          v22 = Method_EventMuralUpdateAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventMuralUpdateAction_StateTouchWait_update__ + 75) & 2) != 0 )
            v22 = (_QWORD *)sub_B17004(Method_EventMuralUpdateAction_StateTouchWait_update__);
          v23 = (System_Reflection_MethodBase_o *)sub_B16FE0(v22, v22[3]);
          OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v29 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v29 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
          v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
          System_Action___ctor(
            v31,
            (Il2CppObject *)v12,
            Method_EventMuralUpdateAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v31, 0LL);
            if ( *v19 )
            {
              EventMuralUpdateAction__SetState(*v19, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_20:
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__3; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7003 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, ent);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__, v9);
    byte_40F7003 = 1;
  }
  if ( !ent )
    sub_B170D4();
  imageIds = ent->fields.imageIds;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, ent, method, v3, v4);
    System_Func_int__bool____ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__3__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  return BasicHelper__Any_int__25910576(
           imageIds,
           (System_Func_T__bool__o *)_9__3,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__1(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__4; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7005 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, ent);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__, v9);
    byte_40F7005 = 1;
  }
  if ( !ent )
    sub_B170D4();
  imageIds = ent->fields.imageIds;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, ent, method, v3, v4);
    System_Func_int__bool____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__4__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    this->fields.__9__4 = _9__4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__4,
      (System_Int32_array **)_9__4,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  return BasicHelper__Any_int__25910576(
           imageIds,
           (System_Func_T__bool__o *)_9__4,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
}


bool __fastcall EventMuralUpdateAction___c__DisplayClass24_0___Setup_b__2(
        EventMuralUpdateAction___c__DisplayClass24_0_o *this,
        EventMuralEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Int32_array *imageIds; // x20
  System_Func_int__bool__o *_9__5; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7007 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, ent);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__, v9);
    byte_40F7007 = 1;
  }
  if ( !ent )
    sub_B170D4();
  imageIds = ent->fields.imageIds;
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, ent, method, v3, v4);
    System_Func_int__bool____ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_EventMuralUpdateAction___c__DisplayClass24_0__Setup_b__5__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    this->fields.__9__5 = _9__5;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__5,
      (System_Int32_array **)_9__5,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  return BasicHelper__Any_int__25910576(
           imageIds,
           (System_Func_T__bool__o *)_9__5,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
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
  if ( (byte_40F7004 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4532/*"D2"*/, *(_QWORD *)&id);
    byte_40F7004 = 1;
  }
  v4 = System_Int32__ToString_38275808((int32_t)&v9, (System_String_o *)StringLiteral_4532/*"D2"*/, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B170D4();
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
  if ( (byte_40F7006 & 1) == 0 )
  {
    sub_B16FFC(&EventMuralUpdateAction_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&StringLiteral_4532/*"D2"*/, v4);
    byte_40F7006 = 1;
  }
  v5 = System_Int32__ToString_38275808((int32_t)&v12, (System_String_o *)StringLiteral_4532/*"D2"*/, 0LL);
  v6 = EventMuralUpdateAction_TypeInfo;
  if ( (BYTE3(EventMuralUpdateAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v6 = EventMuralUpdateAction_TypeInfo;
  }
  v7 = System_String__Concat_43743732(v5, v6->static_fields->SPRITE_NAME_END_MALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B170D4();
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
  if ( (byte_40F7008 & 1) == 0 )
  {
    sub_B16FFC(&EventMuralUpdateAction_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&StringLiteral_4532/*"D2"*/, v4);
    byte_40F7008 = 1;
  }
  v5 = System_Int32__ToString_38275808((int32_t)&v12, (System_String_o *)StringLiteral_4532/*"D2"*/, 0LL);
  v6 = EventMuralUpdateAction_TypeInfo;
  if ( (BYTE3(EventMuralUpdateAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMuralUpdateAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMuralUpdateAction_TypeInfo);
    v6 = EventMuralUpdateAction_TypeInfo;
  }
  v7 = System_String__Concat_43743732(v5, v6->static_fields->SPRITE_NAME_END_FEMALE, 0LL);
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !obj )
    sub_B170D4();
  v9 = v7;
  name = UnityEngine_Object__get_name(obj, 0LL);
  return System_String__op_Equality(v9, name, 0LL);
}