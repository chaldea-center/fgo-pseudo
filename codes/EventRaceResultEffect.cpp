void __fastcall EventRaceResultEffect___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E8E30 & 1) == 0 )
  {
    sub_B5D5C4(&EventRaceResultEffect_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21965/*"raceresults_team_{0}"*/, v8, v9, v10);
    byte_42E8E30 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRaceResultEffect_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_21965/*"raceresults_team_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21965/*"raceresults_team_{0}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
  EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE = 16;
}


void __fastcall EventRaceResultEffect___ctor(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRaceResultEffect__Awake(EventRaceResultEffect_o *this, const MethodInfo *method)
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
  struct CStateManager_EventRaceResultEffect__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x21
  EventRaceResultEffect_StateNone_o *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v32; // x21
  EventRaceResultEffect_StatePlay_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x20
  EventRaceResultEffect_StateTouchWait_o *v35; // x21
  const MethodInfo *v36; // x2

  if ( (byte_42E8E28 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EventRaceResultEffect___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_EventRaceResultEffect__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_EventRaceResultEffect__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&EventRaceResultEffect_StateNone_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&EventRaceResultEffect_StatePlay_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&EventRaceResultEffect_StateTouchWait_TypeInfo, v17, v18, v19);
    byte_42E8E28 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v21 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_EventRaceResultEffect__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v21,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2BB2630 *)Method_CStateManager_EventRaceResultEffect___ctor__);
    this->fields.mFSM = (struct CStateManager_EventRaceResultEffect__o *)v21;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    mFSM = this->fields.mFSM;
    v29 = (EventRaceResultEffect_StateNone_o *)sub_B5D694(EventRaceResultEffect_StateNone_TypeInfo);
    EventRaceResultEffect_StateNone___ctor(v29, 0LL);
    if ( !mFSM )
      goto LABEL_8;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v29,
      (const MethodInfo_2BB26FC *)Method_CStateManager_EventRaceResultEffect__add__);
    v32 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v33 = (EventRaceResultEffect_StatePlay_o *)sub_B5D694(EventRaceResultEffect_StatePlay_TypeInfo);
    EventRaceResultEffect_StatePlay___ctor(v33, 0LL);
    if ( !v32
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v32,
            1,
            (IState_T__o *)v33,
            (const MethodInfo_2BB26FC *)Method_CStateManager_EventRaceResultEffect__add__),
          v34 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v35 = (EventRaceResultEffect_StateTouchWait_o *)sub_B5D694(EventRaceResultEffect_StateTouchWait_TypeInfo),
          EventRaceResultEffect_StateTouchWait___ctor(v35, 0LL),
          !v34) )
    {
LABEL_8:
      sub_B5D69C(v30, v31);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v34,
      2,
      (IState_T__o *)v35,
      (const MethodInfo_2BB26FC *)Method_CStateManager_EventRaceResultEffect__add__);
    EventRaceResultEffect__SetState(this, 0, v36);
  }
}


int32_t __fastcall EventRaceResultEffect__GetState(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventRaceResultEffect_o *v4; // x19
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E8E2E & 1) == 0 )
  {
    this = (EventRaceResultEffect_o *)sub_B5D5C4(
                                        &Method_CStateManager_EventRaceResultEffect__getState__,
                                        (_DWORD)method,
                                        v2,
                                        v3);
    byte_42E8E2E = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
  return mFSM->fields.m_state;
}


System_String_o *__fastcall EventRaceResultEffect__MakeRestDistanceStr(
        EventRaceResultEffect_o *this,
        int64_t restDistance,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x20
  Il2CppObject *v12; // x0
  int64_t v14; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8E2C & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, restDistance, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5756/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, v8, v9, v10);
    byte_42E8E2C = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5756/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, 0LL);
  v14 = restDistance;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
  return System_String__Format(v11, v12, 0LL);
}


System_String_o *__fastcall EventRaceResultEffect__MakeTimeStr(
        EventRaceResultEffect_o *this,
        int64_t utime,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t v11; // x20
  int v12; // w22
  int v13; // w21
  System_String_o *v14; // x19
  Il2CppObject *v15; // x20
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  int v19; // [xsp+Ch] [xbp-34h] BYREF
  int v20; // [xsp+18h] [xbp-28h] BYREF
  int v21; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E8E2B & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, utime, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5761/*"EVENT_RACE_RESULT_TIME_STR"*/, v8, v9, v10);
    byte_42E8E2B = 1;
  }
  v11 = utime / 3600;
  v12 = (int)utime % 60;
  v13 = utime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5761/*"EVENT_RACE_RESULT_TIME_STR"*/, 0LL);
  v21 = v11;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v20 = v13;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v19 = v12;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  return System_String__Format_44578852(v14, v15, v16, v17, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  struct SimpleAnimation_o *mSimpleAnimation; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v32; // x20
  System_String_o *v33; // x0
  __int64 v34; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v36; // x20
  unsigned __int64 v37; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v39; // x0
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *name; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v44; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v46; // x0
  __int64 *v47; // x8
  const MethodInfo *v48; // x2
  AvalonSceneManager_c *v49; // x8
  System_Action_o *v50; // x21

  if ( (byte_42E8E2D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_EventRaceResultEffect__Play_b__17_0__, v13, v14, v15);
    sub_B5D5C4(&Method_EventRaceResultEffect__Play_b__17_1__, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22, v23, v24);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v25, v26, v27);
    byte_42E8E2D = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B5D560(
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
        EventRaceResultEffect__SetState(this, 0, v48);
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
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v44 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v44 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v44->static_fields->DEFAULT_FADE_TIME;
            v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            v47 = &Method_EventRaceResultEffect__Play_b__17_1__;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_37:
    sub_B5D69C(gameObject, v29);
  }
  v32 = this->fields.mSimpleAnimation;
  if ( !v32 )
    goto LABEL_37;
  gameObject = (UnityEngine_GameObject_o *)v32[1].monitor;
  if ( !gameObject )
    goto LABEL_37;
  v33 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v32, v33, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  klass = gameObject->klass;
  v36 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v37;
      p_offset += 2;
      if ( v37 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v39 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v39 = sub_AF54C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL, v34);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v39)(v36, *(_QWORD *)(v39 + 8), 0.0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v49 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v49 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v49->static_fields->DEFAULT_FADE_TIME;
  v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  v47 = &Method_EventRaceResultEffect__Play_b__17_0__;
LABEL_35:
  v50 = v46;
  System_Action___ctor(v46, (Il2CppObject *)this, *v47, 0LL);
  if ( !Instance )
    goto LABEL_37;
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v50, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceResultEffect__SetState(EventRaceResultEffect_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x0

  if ( (byte_42E8E2F & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EventRaceResultEffect__setState__, state, (_DWORD)method, v3);
    byte_42E8E2F = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_EventRaceResultEffect__setState__);
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
  UISprite_o *UIAtlasBySpriteName; // x0
  UIWidget_OnPostFillCallback_c *klass; // x8
  __int64 v31; // x9
  struct UISprite_array *teams; // x8
  System_Collections_Generic_List_UIAtlas__o *v33; // x24
  __int64 v34; // x28
  System_String_o *v35; // x25
  Il2CppObject *v36; // x0
  struct UISprite_array *v37; // x8
  UISprite_o *v38; // x26
  System_String_o *v39; // x25
  struct UISprite_array *v40; // x8
  struct UISprite_array *v41; // x8
  const MethodInfo *v42; // x2
  struct UILabel_array *teamTimes; // x8
  UILabel_o *v44; // x25
  const MethodInfo *v45; // x2
  struct UILabel_array *v46; // x8
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct UnityEngine_Animation_o *v54; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  ExUITexture_o *v62; // x21
  Il2CppObject *v63; // x0
  __int64 v64; // x0
  int v66; // [xsp+18h] [xbp-58h] BYREF
  int32_t v67; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42E8E2A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentInChildren_Animation___,
      eventId,
      (_DWORD)teamIconIds,
      goalTimes);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v11, v12, v13);
    sub_B5D5C4(&EventRaceResultEffect_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&int_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11135/*"RACE_TARGET_GOAL_RANK"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_2708/*"Back/back{0}"*/, v26, v27, v28);
    byte_42E8E2A = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, eventId, (_DWORD)teamIconIds, goalTimes);
    byte_42E4B1E = 1;
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
  v31 = *(_QWORD *)&klass->_2.static_fields_size;
  if ( !v31 )
    goto LABEL_52;
  teams = this->fields.teams;
  if ( !teams )
    goto LABEL_52;
  v33 = *(System_Collections_Generic_List_UIAtlas__o **)(v31 + 288);
  v34 = 0LL;
  while ( (int)v34 < (signed int)teams->max_length )
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
    if ( (unsigned int)v34 >= teamIconIds->max_length )
      goto LABEL_53;
    v35 = (System_String_o *)UIAtlasBySpriteName->fields.onPostFill->klass;
    v67 = teamIconIds->m_Items[v34 + 1];
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
    UIAtlasBySpriteName = (UISprite_o *)System_String__Format(v35, v36, 0LL);
    v37 = this->fields.teams;
    if ( !v37 )
      goto LABEL_52;
    if ( (unsigned int)v34 >= v37->max_length )
      goto LABEL_53;
    v38 = v37->m_Items[v34];
    v39 = (System_String_o *)UIAtlasBySpriteName;
    UIAtlasBySpriteName = (UISprite_o *)UIAtlas__GetUIAtlasBySpriteName(
                                          v33,
                                          (System_String_o *)UIAtlasBySpriteName,
                                          0LL);
    if ( !v38 )
      goto LABEL_52;
    UISprite__set_atlas(v38, (UIAtlas_o *)UIAtlasBySpriteName, 0LL);
    v40 = this->fields.teams;
    if ( !v40 )
      goto LABEL_52;
    if ( (unsigned int)v34 >= v40->max_length )
      goto LABEL_53;
    UIAtlasBySpriteName = v40->m_Items[v34];
    if ( !UIAtlasBySpriteName )
      goto LABEL_52;
    UISprite__set_spriteName(UIAtlasBySpriteName, v39, 0LL);
    v41 = this->fields.teams;
    if ( !v41 )
      goto LABEL_52;
    if ( (unsigned int)v34 >= v41->max_length )
      goto LABEL_53;
    UIAtlasBySpriteName = v41->m_Items[v34];
    if ( !UIAtlasBySpriteName )
      goto LABEL_52;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.method)(
      UIAtlasBySpriteName,
      UIAtlasBySpriteName->klass->vtable._34_get_minWidth.methodPtr);
    UIAtlasBySpriteName = (UISprite_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11135/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    teamTimes = this->fields.teamTimes;
    if ( !teamTimes )
      goto LABEL_52;
    if ( (unsigned int)v34 >= teamTimes->max_length )
      goto LABEL_53;
    v44 = teamTimes->m_Items[v34];
    if ( (int)v34 >= (int)UIAtlasBySpriteName )
    {
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
      if ( (BYTE3(EventRaceResultEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      }
      if ( !v44 )
        goto LABEL_52;
      UILabel__set_fontSize(v44, EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE, 0LL);
      v46 = this->fields.teamTimes;
      if ( !v46 )
        goto LABEL_52;
      if ( (unsigned int)v34 >= v46->max_length )
        goto LABEL_53;
      if ( !restDistances )
        goto LABEL_52;
      if ( (unsigned int)v34 >= restDistances->max_length )
        goto LABEL_53;
      v44 = v46->m_Items[v34];
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeRestDistanceStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            restDistances->m_Items[v34],
                                            v45);
      if ( !v44 )
        goto LABEL_52;
    }
    else
    {
      if ( !goalTimes )
        goto LABEL_52;
      if ( (unsigned int)v34 >= goalTimes->max_length )
      {
LABEL_53:
        v64 = sub_B5D6C8(UIAtlasBySpriteName);
        sub_B5D668(v64, 0LL);
      }
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeTimeStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            goalTimes->m_Items[v34],
                                            v42);
      if ( !v44 )
        goto LABEL_52;
    }
    UILabel__set_text(v44, (System_String_o *)UIAtlasBySpriteName, 0LL);
    teams = this->fields.teams;
    ++v34;
    if ( !teams )
      goto LABEL_52;
  }
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_52;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                               (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_52;
  v54 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                            (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = v54;
  p_mAnimation = &this->fields.mAnimation;
  sub_B5D560((BattleServantConfConponent_o *)p_mAnimation, (System_Int32_array **)v54, v56, v57, v58, v59, v60, v61);
  v62 = (ExUITexture_o *)*(p_mAnimation - 7);
  v66 = *((_DWORD *)p_mAnimation - 8);
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
  UIAtlasBySpriteName = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_2708/*"Back/back{0}"*/, v63, 0LL);
  if ( !v62 )
LABEL_52:
    sub_B5D69C(UIAtlasBySpriteName, *(_QWORD *)&eventId);
  ExUITexture__SetAssetImage(v62, (System_String_o *)UIAtlasBySpriteName, onSetupEnd, 0LL);
}


void __fastcall EventRaceResultEffect__Update(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x0

  if ( (byte_42E8E29 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EventRaceResultEffect__update__, (_DWORD)method, v2, v3);
    byte_42E8E29 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_EventRaceResultEffect__update__);
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
  __int64 v3; // x3
  EventRaceResultEffect_StatePlay_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v10; // x21
  System_String_o *v11; // x0
  EventRaceResultEffect_StatePlay_Fields *p_fields; // x19
  __int64 v13; // x3
  struct SimpleAnimation_State_o *mSimpleAnimState; // x20
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v20; // x21
  System_String_o *name; // x0
  EventRaceResultEffect_StatePlay_o **p_mAnimState; // x19
  __int64 v23; // x3
  struct SimpleAnimation_State_o *v24; // x19
  SimpleAnimation_State_c *v25; // x8
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **v27; // x11
  __int64 v28; // x0

  v5 = this;
  if ( (byte_42E658D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (EventRaceResultEffect_StatePlay_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v6, v7, v8);
    byte_42E658D = 1;
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
    v20 = that->fields.mAnimation;
    if ( v20 )
    {
      this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        v5->fields.mAnimState = UnityEngine_Animation__get_Item(v20, name, 0LL);
        p_mAnimState = (EventRaceResultEffect_StatePlay_o **)&v5->fields.mAnimState;
        sub_B5D560(p_mAnimState);
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
    sub_B5D69C(this, that);
  }
  v10 = that->fields.mSimpleAnimation;
  if ( !v10 )
    goto LABEL_37;
  this = (EventRaceResultEffect_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_37;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v5->fields.mSimpleAnimState = SimpleAnimation__get_Item(v10, v11, 0LL);
  p_fields = &v5->fields;
  sub_B5D560(p_fields);
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
    v16 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v16;
      p_offset += 2;
      if ( v16 >= *(unsigned __int16 *)&mSimpleAnimState->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AF54C0(p_fields->mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL, v13);
  }
  this = (EventRaceResultEffect_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))p_method)(
                                                mSimpleAnimState,
                                                *(_QWORD *)(p_method + 8),
                                                0.0);
  v24 = p_fields->mSimpleAnimState;
  if ( !v24 )
    goto LABEL_37;
  v25 = v24->klass;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = (SimpleAnimation_State_c **)&v25->_1.interfaceOffsets->offset;
    while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v26;
      v27 += 2;
      if ( v26 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v28 = (__int64)&v25->vtable[*(_DWORD *)v27 + 8].method;
  }
  else
  {
LABEL_34:
    v28 = sub_AF54C0(v24, SimpleAnimation_State_TypeInfo, 8LL, v23);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v28)(v24, *(_QWORD *)(v28 + 8), 1.0);
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
  __int64 v3; // x3
  struct SimpleAnimation_o *mSimpleAnimation; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *v8; // x0

  if ( (byte_42E658E & 1) == 0 )
  {
    this = (EventRaceResultEffect_StatePlay_o *)sub_B5D5C4(
                                                  &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                  (_DWORD)that,
                                                  (_DWORD)method,
                                                  v3);
    byte_42E658E = 1;
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
    this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( UnityEngine_Animation__IsPlaying(mAnimation, v8, 0LL) )
    return;
  this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_16:
    sub_B5D69C(this, that);
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
    sub_B5D69C(this, that);
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
  EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_o *v23; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v25; // x1
  EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v28; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x22

  if ( (byte_42E5643 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CTouch_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__, v17, v18, v19);
    sub_B5D5C4(&EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo, v20, v21, v22);
    byte_42E5643 = 1;
  }
  v23 = (EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_o *)sub_B5D694(EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_21;
  v23->fields.that = that;
  p_fields = &v23->fields;
  sub_B5D560(&v23->fields);
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v28 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
          v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v30,
            (Il2CppObject *)v23,
            Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v30, 0LL);
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
    sub_B5D69C(isTouchPush, v25);
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
    sub_B5D69C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}