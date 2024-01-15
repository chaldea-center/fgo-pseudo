void __fastcall EventRaceResultEffect___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FACB8 & 1) == 0 )
  {
    sub_B16FFC(&EventRaceResultEffect_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_21580/*"raceresults_team_{0}"*/, v8);
    byte_40FACB8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRaceResultEffect_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_21580/*"raceresults_team_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21580/*"raceresults_team_{0}"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
  EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE = 16;
}


void __fastcall EventRaceResultEffect___ctor(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRaceResultEffect__Awake(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct CStateManager_EventRaceResultEffect__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  EventRaceResultEffect_StateNone_o *v24; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  EventRaceResultEffect_StatePlay_o *v30; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  EventRaceResultEffect_StateTouchWait_o *v36; // x21
  const MethodInfo *v37; // x2

  if ( (byte_40FACB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventRaceResultEffect___ctor__, method);
    sub_B16FFC(&Method_CStateManager_EventRaceResultEffect__add__, v6);
    sub_B16FFC(&CStateManager_EventRaceResultEffect__TypeInfo, v7);
    sub_B16FFC(&EventRaceResultEffect_StateNone_TypeInfo, v8);
    sub_B16FFC(&EventRaceResultEffect_StatePlay_TypeInfo, v9);
    sub_B16FFC(&EventRaceResultEffect_StateTouchWait_TypeInfo, v10);
    byte_40FACB0 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v12 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_EventRaceResultEffect__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v12,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2907EF0 *)Method_CStateManager_EventRaceResultEffect___ctor__);
    this->fields.mFSM = (struct CStateManager_EventRaceResultEffect__o *)v12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    mFSM = this->fields.mFSM;
    v24 = (EventRaceResultEffect_StateNone_o *)sub_B170CC(EventRaceResultEffect_StateNone_TypeInfo, v20, v21, v22, v23);
    EventRaceResultEffect_StateNone___ctor(v24, 0LL);
    if ( !mFSM )
      goto LABEL_8;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v24,
      (const MethodInfo_2907FBC *)Method_CStateManager_EventRaceResultEffect__add__);
    v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v30 = (EventRaceResultEffect_StatePlay_o *)sub_B170CC(EventRaceResultEffect_StatePlay_TypeInfo, v26, v27, v28, v29);
    EventRaceResultEffect_StatePlay___ctor(v30, 0LL);
    if ( !v25
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v25,
            1,
            (IState_T__o *)v30,
            (const MethodInfo_2907FBC *)Method_CStateManager_EventRaceResultEffect__add__),
          v31 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v36 = (EventRaceResultEffect_StateTouchWait_o *)sub_B170CC(
                                                            EventRaceResultEffect_StateTouchWait_TypeInfo,
                                                            v32,
                                                            v33,
                                                            v34,
                                                            v35),
          EventRaceResultEffect_StateTouchWait___ctor(v36, 0LL),
          !v31) )
    {
LABEL_8:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v31,
      2,
      (IState_T__o *)v36,
      (const MethodInfo_2907FBC *)Method_CStateManager_EventRaceResultEffect__add__);
    EventRaceResultEffect__SetState(this, 0, v37);
  }
}


int32_t __fastcall EventRaceResultEffect__GetState(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x8

  if ( (byte_40FACB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventRaceResultEffect__getState__, method);
    byte_40FACB6 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  return mFSM->fields.m_state;
}


System_String_o *__fastcall EventRaceResultEffect__MakeRestDistanceStr(
        EventRaceResultEffect_o *this,
        int64_t restDistance,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x20
  Il2CppObject *v7; // x0
  int64_t v9; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FACB4 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, restDistance);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5663/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, v5);
    byte_40FACB4 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, 0LL);
  v9 = restDistance;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v9);
  return System_String__Format(v6, v7, 0LL);
}


System_String_o *__fastcall EventRaceResultEffect__MakeTimeStr(
        EventRaceResultEffect_o *this,
        int64_t utime,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t v6; // x20
  int v7; // w22
  int v8; // w21
  System_String_o *v9; // x19
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  int v14; // [xsp+Ch] [xbp-34h] BYREF
  int v15; // [xsp+18h] [xbp-28h] BYREF
  int v16; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40FACB3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, utime);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5668/*"EVENT_RACE_RESULT_TIME_STR"*/, v5);
    byte_40FACB3 = 1;
  }
  v6 = utime / 3600;
  v7 = (int)utime % 60;
  v8 = utime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5668/*"EVENT_RACE_RESULT_TIME_STR"*/, 0LL);
  v16 = v6;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v15 = v8;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v14 = v7;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return System_String__Format_43744796(v9, v10, v11, v12, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct SimpleAnimation_o *mSimpleAnimation; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v19; // x20
  UnityEngine_Object_o *v20; // x0
  System_String_o *v21; // x0
  SimpleAnimation_State_o *v22; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v24; // x20
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Animation_o *mAnimation; // x0
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v30; // x20
  UnityEngine_Object_o *v31; // x0
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v39; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x0
  __int64 *v42; // x8
  const MethodInfo *v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  AvalonSceneManager_c *v48; // x8
  System_Action_o *v49; // x21

  if ( (byte_40FACB5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v10);
    sub_B16FFC(&Method_EventRaceResultEffect__Play_b__17_0__, v11);
    sub_B16FFC(&Method_EventRaceResultEffect__Play_b__17_1__, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v15);
    byte_40FACB5 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B16F98(
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
  if ( !UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    mAnimation = this->fields.mAnimation;
    if ( mAnimation )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(mAnimation, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(clip, 0LL, 0LL) )
      {
        ActionExtensions__Call(this->fields.mEndAct, 0LL);
        EventRaceResultEffect__SetState(this, 0, v43);
        return;
      }
      v30 = this->fields.mAnimation;
      if ( v30 )
      {
        v31 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
        if ( v31 )
        {
          name = UnityEngine_Object__get_name(v31, 0LL);
          Item = UnityEngine_Animation__get_Item(v30, name, 0LL);
          if ( Item )
          {
            UnityEngine_AnimationState__set_speed(Item, 0.0, 0LL);
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v39 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v39 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
            v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37);
            v42 = &Method_EventRaceResultEffect__Play_b__17_1__;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_37:
    sub_B170D4();
  }
  v19 = this->fields.mSimpleAnimation;
  if ( !v19 )
    goto LABEL_37;
  v20 = (UnityEngine_Object_o *)v19[1].monitor;
  if ( !v20 )
    goto LABEL_37;
  v21 = UnityEngine_Object__get_name(v20, 0LL);
  v22 = SimpleAnimation__get_Item(v19, v21, 0LL);
  if ( !v22 )
    goto LABEL_37;
  klass = v22->klass;
  v24 = v22;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v25;
      p_offset += 2;
      if ( v25 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AAFEF8(v22, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v24, *(_QWORD *)(p_method + 8), 0.0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v48 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v48 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v48->static_fields->DEFAULT_FADE_TIME;
  v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v46, v47);
  v42 = &Method_EventRaceResultEffect__Play_b__17_0__;
LABEL_35:
  v49 = v41;
  System_Action___ctor(v41, (Il2CppObject *)this, *v42, 0LL);
  if ( !Instance )
    goto LABEL_37;
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v49, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceResultEffect__SetState(EventRaceResultEffect_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x0

  if ( (byte_40FACB7 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventRaceResultEffect__setState__, *(_QWORD *)&state);
    byte_40FACB7 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_EventRaceResultEffect__setState__);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  TerminalSceneComponent_c *v17; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x9
  struct UISprite_array *teams; // x8
  System_Collections_Generic_List_UIAtlas__o *spotList; // x24
  __int64 v22; // x28
  void *Value; // x0
  System_String_o *v24; // x25
  Il2CppObject *v25; // x0
  struct UISprite_array *v26; // x8
  UISprite_o *v27; // x26
  System_String_o *v28; // x25
  UIAtlas_o *UIAtlasBySpriteName; // x0
  struct UISprite_array *v30; // x8
  UISprite_o *v31; // x0
  struct UISprite_array *v32; // x8
  UISprite_o *v33; // x0
  struct UILabel_array *teamTimes; // x8
  UILabel_o *v35; // x25
  System_String_o *RestDistanceStr; // x0
  struct UILabel_array *v37; // x8
  UnityEngine_Component_o *transform; // x0
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Component_o *v46; // x0
  struct UnityEngine_Animation_o *v47; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  ExUITexture_o *v55; // x21
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  int v59; // [xsp+18h] [xbp-58h] BYREF
  int32_t v60; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40FACB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v11);
    sub_B16FFC(&EventRaceResultEffect_TypeInfo, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_10966/*"RACE_TARGET_GOAL_RANK"*/, v15);
    sub_B16FFC(&StringLiteral_2643/*"Back/back{0}"*/, v16);
    byte_40FACB2 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, *(_QWORD *)&eventId);
    byte_40F6042 = 1;
  }
  v17 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v17 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v17->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_52;
  mTerminalMap = mInstance->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_52;
  teams = this->fields.teams;
  if ( !teams )
    goto LABEL_52;
  spotList = (System_Collections_Generic_List_UIAtlas__o *)mTerminalMap->fields.spotList;
  v22 = 0LL;
  while ( (int)v22 < (signed int)teams->max_length )
  {
    Value = EventRaceResultEffect_TypeInfo;
    if ( (BYTE3(EventRaceResultEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      Value = EventRaceResultEffect_TypeInfo;
    }
    if ( !teamIconIds )
      goto LABEL_52;
    if ( (unsigned int)v22 >= teamIconIds->max_length )
      goto LABEL_53;
    v24 = (System_String_o *)**((_QWORD **)Value + 23);
    v60 = teamIconIds->m_Items[v22 + 1];
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
    Value = System_String__Format(v24, v25, 0LL);
    v26 = this->fields.teams;
    if ( !v26 )
      goto LABEL_52;
    if ( (unsigned int)v22 >= v26->max_length )
      goto LABEL_53;
    v27 = v26->m_Items[v22];
    v28 = (System_String_o *)Value;
    UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(spotList, (System_String_o *)Value, 0LL);
    if ( !v27 )
      goto LABEL_52;
    UISprite__set_atlas(v27, UIAtlasBySpriteName, 0LL);
    v30 = this->fields.teams;
    if ( !v30 )
      goto LABEL_52;
    if ( (unsigned int)v22 >= v30->max_length )
      goto LABEL_53;
    v31 = v30->m_Items[v22];
    if ( !v31 )
      goto LABEL_52;
    UISprite__set_spriteName(v31, v28, 0LL);
    v32 = this->fields.teams;
    if ( !v32 )
      goto LABEL_52;
    if ( (unsigned int)v22 >= v32->max_length )
      goto LABEL_53;
    v33 = v32->m_Items[v22];
    if ( !v33 )
      goto LABEL_52;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v33->klass->vtable._33_MakePixelPerfect.method)(
      v33,
      v33->klass->vtable._34_get_minWidth.methodPtr);
    Value = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_10966/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    teamTimes = this->fields.teamTimes;
    if ( !teamTimes )
      goto LABEL_52;
    if ( (unsigned int)v22 >= teamTimes->max_length )
      goto LABEL_53;
    v35 = teamTimes->m_Items[v22];
    if ( (int)v22 >= (int)Value )
    {
      if ( (BYTE3(EventRaceResultEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      }
      if ( !v35 )
        goto LABEL_52;
      UILabel__set_fontSize(v35, EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE, 0LL);
      v37 = this->fields.teamTimes;
      if ( !v37 )
        goto LABEL_52;
      if ( (unsigned int)v22 >= v37->max_length )
        goto LABEL_53;
      if ( !restDistances )
        goto LABEL_52;
      if ( (unsigned int)v22 >= restDistances->max_length )
        goto LABEL_53;
      v35 = v37->m_Items[v22];
      RestDistanceStr = EventRaceResultEffect__MakeRestDistanceStr(
                          (EventRaceResultEffect_o *)Value,
                          restDistances->m_Items[v22],
                          (const MethodInfo *)teamIconIds);
      if ( !v35 )
        goto LABEL_52;
    }
    else
    {
      if ( !goalTimes )
        goto LABEL_52;
      if ( (unsigned int)v22 >= goalTimes->max_length )
      {
LABEL_53:
        sub_B17100(Value, *(_QWORD *)&eventId, teamIconIds);
        sub_B170A0();
      }
      RestDistanceStr = EventRaceResultEffect__MakeTimeStr(
                          (EventRaceResultEffect_o *)Value,
                          goalTimes->m_Items[v22],
                          (const MethodInfo *)teamIconIds);
      if ( !v35 )
        goto LABEL_52;
    }
    UILabel__set_text(v35, RestDistanceStr, 0LL);
    teams = this->fields.teams;
    ++v22;
    if ( !teams )
      goto LABEL_52;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               transform,
                                                               (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v46 )
    goto LABEL_52;
  v47 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            v46,
                                            (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = v47;
  p_mAnimation = &this->fields.mAnimation;
  sub_B16F98((BattleServantConfConponent_o *)p_mAnimation, (System_Int32_array **)v47, v49, v50, v51, v52, v53, v54);
  v55 = (ExUITexture_o *)*(p_mAnimation - 7);
  v59 = *((_DWORD *)p_mAnimation - 8);
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
  v57 = System_String__Format((System_String_o *)StringLiteral_2643/*"Back/back{0}"*/, v56, 0LL);
  if ( !v55 )
LABEL_52:
    sub_B170D4();
  ExUITexture__SetAssetImage(v55, v57, onSetupEnd, 0LL);
}


void __fastcall EventRaceResultEffect__Update(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x0

  if ( (byte_40FACB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventRaceResultEffect__update__, method);
    byte_40FACB1 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_EventRaceResultEffect__update__);
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
  __int64 v5; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v7; // x21
  UnityEngine_Object_o *monitor; // x0
  System_String_o *v9; // x0
  struct SimpleAnimation_State_o *v10; // x0
  BattleServantConfConponent_o *p_fields; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  SimpleAnimation_o *v18; // x0
  BattleServantConfConponent_c *klass; // x20
  _QWORD *image; // x8
  unsigned __int64 v21; // x10
  SimpleAnimation_State_c **v22; // x11
  __int64 v23; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v25; // x21
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  struct UnityEngine_AnimationState_o *Item; // x0
  struct UnityEngine_AnimationState_o **p_mAnimState; // x19
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Animation_o *v36; // x0
  BattleServantConfConponent_c *v37; // x19
  _QWORD *v38; // x8
  unsigned __int64 v39; // x10
  SimpleAnimation_State_c **v40; // x11
  __int64 v41; // x0

  if ( (byte_40F701D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v5);
    byte_40F701D = 1;
  }
  if ( !that )
    goto LABEL_37;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
      return;
    v25 = that->fields.mAnimation;
    if ( v25 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        Item = UnityEngine_Animation__get_Item(v25, name, 0LL);
        this->fields.mAnimState = Item;
        p_mAnimState = &this->fields.mAnimState;
        sub_B16F98(
          (BattleServantConfConponent_o *)p_mAnimState,
          (System_Int32_array **)Item,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        v36 = that->fields.mAnimation;
        if ( v36 )
        {
          UnityEngine_Animation__Play(v36, 0LL);
          if ( *p_mAnimState )
          {
            UnityEngine_AnimationState__set_normalizedTime(*p_mAnimState, 0.0, 0LL);
            if ( *p_mAnimState )
            {
              UnityEngine_AnimationState__set_speed(*p_mAnimState, 1.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_37:
    sub_B170D4();
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_37;
  monitor = (UnityEngine_Object_o *)v7[1].monitor;
  if ( !monitor )
    goto LABEL_37;
  v9 = UnityEngine_Object__get_name(monitor, 0LL);
  v10 = SimpleAnimation__get_Item(v7, v9, 0LL);
  this->fields.mSimpleAnimState = v10;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  sub_B16F98(p_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  v18 = that->fields.mSimpleAnimation;
  if ( !v18 )
    goto LABEL_37;
  SimpleAnimation__Play(v18, 0LL);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_37;
  image = klass->_1.image;
  if ( *((_WORD *)klass->_1.image + 149) )
  {
    v21 = 0LL;
    v22 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v21;
      v22 += 2;
      if ( v21 >= *((unsigned __int16 *)klass->_1.image + 149) )
        goto LABEL_16;
    }
    v23 = (__int64)&image[2 * *(_DWORD *)v22 + 51];
  }
  else
  {
LABEL_16:
    v23 = sub_AAFEF8(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v23)(klass, *(_QWORD *)(v23 + 8), 0.0);
  v37 = p_fields->klass;
  if ( !v37 )
    goto LABEL_37;
  v38 = v37->_1.image;
  if ( *((_WORD *)v37->_1.image + 149) )
  {
    v39 = 0LL;
    v40 = (SimpleAnimation_State_c **)(v38[22] + 8LL);
    while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v39;
      v40 += 2;
      if ( v39 >= *((unsigned __int16 *)v37->_1.image + 149) )
        goto LABEL_34;
    }
    v41 = (__int64)&v38[2 * *(_DWORD *)v40 + 55];
  }
  else
  {
LABEL_34:
    v41 = sub_AAFEF8(v37, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v41)(v37, *(_QWORD *)(v41 + 8), 1.0);
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
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  CommonUI_o *Instance; // x0
  UnityEngine_Animation_o *mAnimation; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v10; // x0
  CommonUI_o *v11; // x0

  if ( (byte_40F701E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, that);
    byte_40F701E = 1;
  }
  if ( !that )
    goto LABEL_16;
  mSimpleAnimation = that->fields.mSimpleAnimation;
  if ( !mSimpleAnimation )
    goto LABEL_16;
  monitor = (UnityEngine_Object_o *)mSimpleAnimation[1].monitor;
  if ( !monitor )
    goto LABEL_16;
  name = UnityEngine_Object__get_name(monitor, 0LL);
  if ( !SimpleAnimation__IsPlaying(mSimpleAnimation, name, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    if ( !CommonUI__maskFadeIsBusy(Instance, 0LL) )
    {
LABEL_15:
      EventRaceResultEffect__SetState(that, 2, 0LL);
      return;
    }
  }
  mAnimation = that->fields.mAnimation;
  if ( !mAnimation )
    goto LABEL_16;
  clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
  if ( !clip )
    goto LABEL_16;
  v10 = UnityEngine_Object__get_name(clip, 0LL);
  if ( UnityEngine_Animation__IsPlaying(mAnimation, v10, 0LL) )
    return;
  v11 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v11 )
LABEL_16:
    sub_B170D4();
  if ( !CommonUI__maskFadeIsBusy(v11, 0LL) )
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
  UnityEngine_GameObject_o *mScreenTouchInfo; // x0

  if ( !that || (mScreenTouchInfo = that->fields.mScreenTouchInfo) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(mScreenTouchInfo, 1, 0LL);
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
  EventRaceResultEffect_o **v19; // x19
  UnityEngine_GameObject_o *mScreenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x22

  if ( (byte_40F701F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&CTouch_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__, v10);
    sub_B16FFC(&EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo, v11);
    byte_40F701F = 1;
  }
  v12 = sub_B170CC(EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0___ctor(
    (EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_21;
  *(_QWORD *)(v12 + 16) = that;
  v19 = (EventRaceResultEffect_o **)(v12 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)that, v13, v14, v15, v16, v17, v18);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
    if ( *v19 )
    {
      mScreenTouchInfo = (*v19)->fields.mScreenTouchInfo;
      if ( mScreenTouchInfo )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(mScreenTouchInfo, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v27 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v27 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
          v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
          System_Action___ctor(
            v29,
            (Il2CppObject *)v12,
            Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v29, 0LL);
            if ( *v19 )
            {
              EventRaceResultEffect__SetState(*v19, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
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
    sub_B170D4();
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}