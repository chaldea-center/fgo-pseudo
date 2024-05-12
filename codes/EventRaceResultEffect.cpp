void __fastcall EventRaceResultEffect___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438BD32 & 1) == 0 )
  {
    sub_B775C4(&EventRaceResultEffect_TypeInfo);
    sub_B775C4(&StringLiteral_22131/*"raceresults_team_{0}"*/);
    byte_438BD32 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRaceResultEffect_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_22131/*"raceresults_team_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22131/*"raceresults_team_{0}"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE = 16;
}


void __fastcall EventRaceResultEffect___ctor(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRaceResultEffect__Awake(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  struct CStateManager_EventRaceResultEffect__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x21
  EventRaceResultEffect_StateNone_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  EventRaceResultEffect_StatePlay_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x20
  EventRaceResultEffect_StateTouchWait_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_438BD2A & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_EventRaceResultEffect___ctor__);
    sub_B775C4(&Method_CStateManager_EventRaceResultEffect__add__);
    sub_B775C4(&CStateManager_EventRaceResultEffect__TypeInfo);
    sub_B775C4(&EventRaceResultEffect_StateNone_TypeInfo);
    sub_B775C4(&EventRaceResultEffect_StatePlay_TypeInfo);
    sub_B775C4(&EventRaceResultEffect_StateTouchWait_TypeInfo);
    byte_438BD2A = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B77694(CStateManager_EventRaceResultEffect__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2CBF0B0 *)Method_CStateManager_EventRaceResultEffect___ctor__);
    this->fields.mFSM = (struct CStateManager_EventRaceResultEffect__o *)v4;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    mFSM = this->fields.mFSM;
    v12 = (EventRaceResultEffect_StateNone_o *)sub_B77694(EventRaceResultEffect_StateNone_TypeInfo);
    EventRaceResultEffect_StateNone___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_8;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2CBF17C *)Method_CStateManager_EventRaceResultEffect__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v16 = (EventRaceResultEffect_StatePlay_o *)sub_B77694(EventRaceResultEffect_StatePlay_TypeInfo);
    EventRaceResultEffect_StatePlay___ctor(v16, 0LL);
    if ( !v15
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_2CBF17C *)Method_CStateManager_EventRaceResultEffect__add__),
          v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v18 = (EventRaceResultEffect_StateTouchWait_o *)sub_B77694(EventRaceResultEffect_StateTouchWait_TypeInfo),
          EventRaceResultEffect_StateTouchWait___ctor(v18, 0LL),
          !v17) )
    {
LABEL_8:
      sub_B7769C(v13, v14);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_2CBF17C *)Method_CStateManager_EventRaceResultEffect__add__);
    EventRaceResultEffect__SetState(this, 0, v19);
  }
}


int32_t __fastcall EventRaceResultEffect__GetState(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  EventRaceResultEffect_o *v2; // x19
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x8

  v2 = this;
  if ( (byte_438BD30 & 1) == 0 )
  {
    this = (EventRaceResultEffect_o *)sub_B775C4(&Method_CStateManager_EventRaceResultEffect__getState__);
    byte_438BD30 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(this, method);
  return mFSM->fields.m_state;
}


System_String_o *__fastcall EventRaceResultEffect__MakeRestDistanceStr(
        EventRaceResultEffect_o *this,
        int64_t restDistance,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int64_t v8; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438BD2E & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5823/*"EVENT_RACE_RESULT_PATH_LENGTH"*/);
    byte_438BD2E = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5823/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, 0LL);
  v8 = restDistance;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v8, v5);
  return System_String__Format(v4, v6, 0LL);
}


System_String_o *__fastcall EventRaceResultEffect__MakeTimeStr(
        EventRaceResultEffect_o *this,
        int64_t utime,
        const MethodInfo *method)
{
  int64_t v4; // x20
  int v5; // w22
  int v6; // w21
  System_String_o *v7; // x19
  __int64 v8; // x2
  Il2CppObject *v9; // x20
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  int v15; // [xsp+Ch] [xbp-34h] BYREF
  int v16; // [xsp+18h] [xbp-28h] BYREF
  int v17; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_438BD2D & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5828/*"EVENT_RACE_RESULT_TIME_STR"*/);
    byte_438BD2D = 1;
  }
  v4 = utime / 3600;
  v5 = (int)utime % 60;
  v6 = utime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5828/*"EVENT_RACE_RESULT_TIME_STR"*/, 0LL);
  v17 = v4;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v8);
  v16 = v6;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v10);
  v15 = v5;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v12);
  return System_String__Format_44903000(v7, v9, v11, v13, 0LL);
}


void __fastcall EventRaceResultEffect__Play(
        EventRaceResultEffect_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  struct SimpleAnimation_o *mSimpleAnimation; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v14; // x20
  System_String_o *v15; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v17; // x20
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v20; // x0
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *name; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x0
  __int64 *v28; // x8
  const MethodInfo *v29; // x2
  AvalonSceneManager_c *v30; // x8
  System_Action_o *v31; // x21

  if ( (byte_438BD2F & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_EventRaceResultEffect__Play_b__17_0__);
    sub_B775C4(&Method_EventRaceResultEffect__Play_b__17_1__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438BD2F = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = this->fields.mSimpleAnimation;
  if ( !mSimpleAnimation )
    goto LABEL_37;
  monitor = (UnityEngine_Object_o *)mSimpleAnimation[1].monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
    if ( gameObject )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        ActionExtensions__Call(this->fields.mEndAct, 0LL);
        EventRaceResultEffect__SetState(this, 0, v29);
        return;
      }
      mAnimation = this->fields.mAnimation;
      if ( mAnimation )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
        if ( gameObject )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(mAnimation, name, 0LL);
          if ( gameObject )
          {
            UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v25 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v25 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
            v27 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
            v28 = &Method_EventRaceResultEffect__Play_b__17_1__;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_37:
    sub_B7769C(gameObject, v11);
  }
  v14 = this->fields.mSimpleAnimation;
  if ( !v14 )
    goto LABEL_37;
  gameObject = (UnityEngine_GameObject_o *)v14[1].monitor;
  if ( !gameObject )
    goto LABEL_37;
  v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v14, v15, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  klass = gameObject->klass;
  v17 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v18;
      p_offset += 2;
      if ( v18 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v20 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v20 = sub_B0F4C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v20)(v17, *(_QWORD *)(v20 + 8), 0.0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v30 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  v28 = &Method_EventRaceResultEffect__Play_b__17_0__;
LABEL_35:
  v31 = v27;
  System_Action___ctor(v27, (Il2CppObject *)this, *v28, 0LL);
  if ( !Instance )
    goto LABEL_37;
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v31, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceResultEffect__SetState(EventRaceResultEffect_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x0

  if ( (byte_438BD31 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_EventRaceResultEffect__setState__);
    byte_438BD31 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2CBF220 *)Method_CStateManager_EventRaceResultEffect__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceResultEffect__SetUp(
        EventRaceResultEffect_o *this,
        int32_t eventId,
        System_Int32_array *teamIconIds,
        System_Int64_array *goalTimes,
        System_Int64_array *restDistances,
        System_Action_o *onSetupEnd,
        const MethodInfo *method)
{
  UISprite_o *UIAtlasBySpriteName; // x0
  UIWidget_OnPostFillCallback_c *klass; // x8
  __int64 v13; // x9
  struct UISprite_array *teams; // x8
  System_Collections_Generic_List_UIAtlas__o *v15; // x24
  __int64 v16; // x28
  System_String_o *v17; // x25
  Il2CppObject *v18; // x0
  struct UISprite_array *v19; // x8
  UISprite_o *v20; // x26
  System_String_o *v21; // x25
  struct UISprite_array *v22; // x8
  struct UISprite_array *v23; // x8
  const MethodInfo *v24; // x2
  struct UILabel_array *teamTimes; // x8
  UILabel_o *v26; // x25
  const MethodInfo *v27; // x2
  struct UILabel_array *v28; // x8
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UnityEngine_Animation_o *v36; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  ExUITexture_o *v44; // x21
  __int64 v45; // x2
  Il2CppObject *v46; // x0
  __int64 v47; // x0
  int v49; // [xsp+18h] [xbp-58h] BYREF
  int32_t v50; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_438BD2C & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B775C4(&EventRaceResultEffect_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&StringLiteral_11215/*"RACE_TARGET_GOAL_RANK"*/);
    sub_B775C4(&StringLiteral_2762/*"Back/back{0}"*/);
    byte_438BD2C = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4387463 = 1;
  }
  UIAtlasBySpriteName = (UISprite_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    UIAtlasBySpriteName = (UISprite_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = UIAtlasBySpriteName->fields.onPostFill->klass;
  if ( !klass )
    goto LABEL_52;
  v13 = *(_QWORD *)&klass->_2.static_fields_size;
  if ( !v13 )
    goto LABEL_52;
  teams = this->fields.teams;
  if ( !teams )
    goto LABEL_52;
  v15 = *(System_Collections_Generic_List_UIAtlas__o **)(v13 + 288);
  v16 = 0LL;
  while ( (int)v16 < (signed int)teams->max_length )
  {
    UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    if ( (BYTE3(EventRaceResultEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    }
    if ( !teamIconIds )
      goto LABEL_52;
    if ( (unsigned int)v16 >= teamIconIds->max_length )
      goto LABEL_53;
    v17 = (System_String_o *)UIAtlasBySpriteName->fields.onPostFill->klass;
    v50 = teamIconIds->m_Items[v16 + 1];
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, teamIconIds);
    UIAtlasBySpriteName = (UISprite_o *)System_String__Format(v17, v18, 0LL);
    v19 = this->fields.teams;
    if ( !v19 )
      goto LABEL_52;
    if ( (unsigned int)v16 >= v19->max_length )
      goto LABEL_53;
    v20 = v19->m_Items[v16];
    v21 = (System_String_o *)UIAtlasBySpriteName;
    UIAtlasBySpriteName = (UISprite_o *)UIAtlas__GetUIAtlasBySpriteName(
                                          v15,
                                          (System_String_o *)UIAtlasBySpriteName,
                                          0LL);
    if ( !v20 )
      goto LABEL_52;
    UISprite__set_atlas(v20, (UIAtlas_o *)UIAtlasBySpriteName, 0LL);
    v22 = this->fields.teams;
    if ( !v22 )
      goto LABEL_52;
    if ( (unsigned int)v16 >= v22->max_length )
      goto LABEL_53;
    UIAtlasBySpriteName = v22->m_Items[v16];
    if ( !UIAtlasBySpriteName )
      goto LABEL_52;
    UISprite__set_spriteName(UIAtlasBySpriteName, v21, 0LL);
    v23 = this->fields.teams;
    if ( !v23 )
      goto LABEL_52;
    if ( (unsigned int)v16 >= v23->max_length )
      goto LABEL_53;
    UIAtlasBySpriteName = v23->m_Items[v16];
    if ( !UIAtlasBySpriteName )
      goto LABEL_52;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.method)(
      UIAtlasBySpriteName,
      UIAtlasBySpriteName->klass->vtable._34_get_minWidth.methodPtr);
    UIAtlasBySpriteName = (UISprite_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11215/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    teamTimes = this->fields.teamTimes;
    if ( !teamTimes )
      goto LABEL_52;
    if ( (unsigned int)v16 >= teamTimes->max_length )
      goto LABEL_53;
    v26 = teamTimes->m_Items[v16];
    if ( (int)v16 >= (int)UIAtlasBySpriteName )
    {
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
      if ( (BYTE3(EventRaceResultEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      }
      if ( !v26 )
        goto LABEL_52;
      UILabel__set_fontSize(v26, EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE, 0LL);
      v28 = this->fields.teamTimes;
      if ( !v28 )
        goto LABEL_52;
      if ( (unsigned int)v16 >= v28->max_length )
        goto LABEL_53;
      if ( !restDistances )
        goto LABEL_52;
      if ( (unsigned int)v16 >= restDistances->max_length )
        goto LABEL_53;
      v26 = v28->m_Items[v16];
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeRestDistanceStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            restDistances->m_Items[v16],
                                            v27);
      if ( !v26 )
        goto LABEL_52;
    }
    else
    {
      if ( !goalTimes )
        goto LABEL_52;
      if ( (unsigned int)v16 >= goalTimes->max_length )
      {
LABEL_53:
        v47 = sub_B776C8(UIAtlasBySpriteName);
        sub_B77668(v47, 0LL);
      }
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeTimeStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            goalTimes->m_Items[v16],
                                            v24);
      if ( !v26 )
        goto LABEL_52;
    }
    UILabel__set_text(v26, (System_String_o *)UIAtlasBySpriteName, 0LL);
    teams = this->fields.teams;
    ++v16;
    if ( !teams )
      goto LABEL_52;
  }
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_52;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                               (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_52;
  v36 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                            (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = v36;
  p_mAnimation = &this->fields.mAnimation;
  sub_B77560((BattleServantConfConponent_o *)p_mAnimation, (System_Int32_array **)v36, v38, v39, v40, v41, v42, v43);
  v44 = (ExUITexture_o *)*(p_mAnimation - 7);
  v49 = *((_DWORD *)p_mAnimation - 8);
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v45);
  UIAtlasBySpriteName = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_2762/*"Back/back{0}"*/, v46, 0LL);
  if ( !v44 )
LABEL_52:
    sub_B7769C(UIAtlasBySpriteName, *(_QWORD *)&eventId);
  ExUITexture__SetAssetImage(v44, (System_String_o *)UIAtlasBySpriteName, onSetupEnd, 0LL);
}


void __fastcall EventRaceResultEffect__Update(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x0

  if ( (byte_438BD2B & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_EventRaceResultEffect__update__);
    byte_438BD2B = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2CBF1F8 *)Method_CStateManager_EventRaceResultEffect__update__);
}


void __fastcall EventRaceResultEffect___Play_b__17_0(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventRaceResultEffect__SetState(this, 1, v2);
}


void __fastcall EventRaceResultEffect___Play_b__17_1(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventRaceResultEffect__SetState(this, 1, v2);
}


void __fastcall EventRaceResultEffect_StateNone___ctor(
        EventRaceResultEffect_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRaceResultEffect_StateNone__begin(
        EventRaceResultEffect_StateNone_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventRaceResultEffect_StateNone__end(
        EventRaceResultEffect_StateNone_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventRaceResultEffect_StateNone__update(
        EventRaceResultEffect_StateNone_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventRaceResultEffect_StatePlay___ctor(
        EventRaceResultEffect_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRaceResultEffect_StatePlay__begin(
        EventRaceResultEffect_StatePlay_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  EventRaceResultEffect_StatePlay_o *v4; // x19
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v6; // x21
  System_String_o *v7; // x0
  EventRaceResultEffect_StatePlay_Fields *p_fields; // x19
  struct SimpleAnimation_State_o *mSimpleAnimState; // x20
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v11; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v15; // x21
  System_String_o *name; // x0
  EventRaceResultEffect_StatePlay_o **p_mAnimState; // x19
  struct SimpleAnimation_State_o *v18; // x19
  SimpleAnimation_State_c *v19; // x8
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **v21; // x11
  __int64 v22; // x0

  v4 = this;
  if ( (byte_4387FF6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (EventRaceResultEffect_StatePlay_o *)sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_4387FF6 = 1;
  }
  if ( !that )
    goto LABEL_37;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v15 = that->fields.mAnimation;
    if ( v15 )
    {
      this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        v4->fields.mAnimState = UnityEngine_Animation__get_Item(v15, name, 0LL);
        p_mAnimState = (EventRaceResultEffect_StatePlay_o **)&v4->fields.mAnimState;
        sub_B77560(p_mAnimState);
        this = (EventRaceResultEffect_StatePlay_o *)that->fields.mAnimation;
        if ( this )
        {
          UnityEngine_Animation__Play((UnityEngine_Animation_o *)this, 0LL);
          this = *p_mAnimState;
          if ( *p_mAnimState )
          {
            UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
            this = *p_mAnimState;
            if ( *p_mAnimState )
            {
              UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_37:
    sub_B7769C(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_37;
  this = (EventRaceResultEffect_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_37;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v4->fields.mSimpleAnimState = SimpleAnimation__get_Item(v6, v7, 0LL);
  p_fields = &v4->fields;
  sub_B77560(p_fields);
  this = (EventRaceResultEffect_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_37;
  this = (EventRaceResultEffect_StatePlay_o *)SimpleAnimation__Play((SimpleAnimation_o *)this, 0LL);
  mSimpleAnimState = p_fields->mSimpleAnimState;
  if ( !p_fields->mSimpleAnimState )
    goto LABEL_37;
  klass = mSimpleAnimState->klass;
  if ( *(_WORD *)&mSimpleAnimState->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&mSimpleAnimState->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_16:
    p_method = sub_B0F4C0(p_fields->mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (EventRaceResultEffect_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))p_method)(
                                                mSimpleAnimState,
                                                *(_QWORD *)(p_method + 8),
                                                0.0);
  v18 = p_fields->mSimpleAnimState;
  if ( !v18 )
    goto LABEL_37;
  v19 = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = (SimpleAnimation_State_c **)&v19->_1.interfaceOffsets->offset;
    while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v20;
      v21 += 2;
      if ( v20 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 8].method;
  }
  else
  {
LABEL_34:
    v22 = sub_B0F4C0(v18, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v22)(v18, *(_QWORD *)(v22 + 8), 1.0);
}


void __fastcall EventRaceResultEffect_StatePlay__end(
        EventRaceResultEffect_StatePlay_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventRaceResultEffect_StatePlay__update(
        EventRaceResultEffect_StatePlay_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  struct SimpleAnimation_o *mSimpleAnimation; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *v7; // x0

  if ( (byte_4387FF7 & 1) == 0 )
  {
    this = (EventRaceResultEffect_StatePlay_o *)sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4387FF7 = 1;
  }
  if ( !that )
    goto LABEL_16;
  mSimpleAnimation = that->fields.mSimpleAnimation;
  if ( !mSimpleAnimation )
    goto LABEL_16;
  this = (EventRaceResultEffect_StatePlay_o *)mSimpleAnimation[1].monitor;
  if ( !this )
    goto LABEL_16;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (EventRaceResultEffect_StatePlay_o *)SimpleAnimation__IsPlaying(mSimpleAnimation, name, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_16;
    this = (EventRaceResultEffect_StatePlay_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_15:
      EventRaceResultEffect__SetState(that, 2, 0LL);
      return;
    }
  }
  mAnimation = that->fields.mAnimation;
  if ( !mAnimation )
    goto LABEL_16;
  this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
  if ( !this )
    goto LABEL_16;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( UnityEngine_Animation__IsPlaying(mAnimation, v7, 0LL) )
    return;
  this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_16:
    sub_B7769C(this, that);
  if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
    goto LABEL_15;
}


void __fastcall EventRaceResultEffect_StateTouchWait___ctor(
        EventRaceResultEffect_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRaceResultEffect_StateTouchWait__begin(
        EventRaceResultEffect_StateTouchWait_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  if ( !that || (this = (EventRaceResultEffect_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0LL )
    sub_B7769C(this, that);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall EventRaceResultEffect_StateTouchWait__end(
        EventRaceResultEffect_StateTouchWait_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventRaceResultEffect_StateTouchWait__update(
        EventRaceResultEffect_StateTouchWait_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_o *v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v6; // x1
  EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x22

  if ( (byte_4387FF8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_B775C4(&EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4387FF8 = 1;
  }
  v4 = (EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_o *)sub_B77694(EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_21;
  v4->fields.that = that;
  p_fields = &v4->fields;
  sub_B77560(&v4->fields);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( p_fields->that )
    {
      isTouchPush = p_fields->that->fields.mScreenTouchInfo;
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_GameObject__get_gameObject(isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v9 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v9 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
          v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(
            v11,
            (Il2CppObject *)v4,
            Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v11, 0LL);
            isTouchPush = (UnityEngine_GameObject_o *)p_fields->that;
            if ( p_fields->that )
            {
              EventRaceResultEffect__SetState((EventRaceResultEffect_o *)isTouchPush, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B7769C(isTouchPush, v6);
  }
}


void __fastcall EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0___ctor(
        EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0___update_b__0(
        EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct EventRaceResultEffect_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B7769C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}