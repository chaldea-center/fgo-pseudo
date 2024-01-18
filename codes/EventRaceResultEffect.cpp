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

  if ( (byte_4188705 & 1) == 0 )
  {
    sub_B2C35C(&EventRaceResultEffect_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_21672/*"raceresults_team_{0}"*/, v8);
    byte_4188705 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRaceResultEffect_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_21672/*"raceresults_team_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21672/*"raceresults_team_{0}"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
  EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE = 16;
}


void __fastcall EventRaceResultEffect___ctor(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRaceResultEffect__Awake(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CStateManager_EventRaceResultEffect__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x21
  EventRaceResultEffect_StateNone_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v20; // x21
  EventRaceResultEffect_StatePlay_o *v21; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v22; // x20
  EventRaceResultEffect_StateTouchWait_o *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_41886FD & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_EventRaceResultEffect___ctor__, method);
    sub_B2C35C(&Method_CStateManager_EventRaceResultEffect__add__, v3);
    sub_B2C35C(&CStateManager_EventRaceResultEffect__TypeInfo, v4);
    sub_B2C35C(&EventRaceResultEffect_StateNone_TypeInfo, v5);
    sub_B2C35C(&EventRaceResultEffect_StatePlay_TypeInfo, v6);
    sub_B2C35C(&EventRaceResultEffect_StateTouchWait_TypeInfo, v7);
    byte_41886FD = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v9 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_EventRaceResultEffect__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v9,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2A08354 *)Method_CStateManager_EventRaceResultEffect___ctor__);
    this->fields.mFSM = (struct CStateManager_EventRaceResultEffect__o *)v9;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    mFSM = this->fields.mFSM;
    v17 = (EventRaceResultEffect_StateNone_o *)sub_B2C42C(EventRaceResultEffect_StateNone_TypeInfo);
    EventRaceResultEffect_StateNone___ctor(v17, 0LL);
    if ( !mFSM )
      goto LABEL_8;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v17,
      (const MethodInfo_2A08420 *)Method_CStateManager_EventRaceResultEffect__add__);
    v20 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v21 = (EventRaceResultEffect_StatePlay_o *)sub_B2C42C(EventRaceResultEffect_StatePlay_TypeInfo);
    EventRaceResultEffect_StatePlay___ctor(v21, 0LL);
    if ( !v20
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v20,
            1,
            (IState_T__o *)v21,
            (const MethodInfo_2A08420 *)Method_CStateManager_EventRaceResultEffect__add__),
          v22 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v23 = (EventRaceResultEffect_StateTouchWait_o *)sub_B2C42C(EventRaceResultEffect_StateTouchWait_TypeInfo),
          EventRaceResultEffect_StateTouchWait___ctor(v23, 0LL),
          !v22) )
    {
LABEL_8:
      sub_B2C434(v18, v19);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v22,
      2,
      (IState_T__o *)v23,
      (const MethodInfo_2A08420 *)Method_CStateManager_EventRaceResultEffect__add__);
    EventRaceResultEffect__SetState(this, 0, v24);
  }
}


int32_t __fastcall EventRaceResultEffect__GetState(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  EventRaceResultEffect_o *v2; // x19
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x8

  v2 = this;
  if ( (byte_4188703 & 1) == 0 )
  {
    this = (EventRaceResultEffect_o *)sub_B2C35C(&Method_CStateManager_EventRaceResultEffect__getState__, method);
    byte_4188703 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
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

  if ( (byte_4188701 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, restDistance);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5679/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, v5);
    byte_4188701 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5679/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, 0LL);
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

  if ( (byte_4188700 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, utime);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5684/*"EVENT_RACE_RESULT_TIME_STR"*/, v5);
    byte_4188700 = 1;
  }
  v6 = utime / 3600;
  v7 = (int)utime % 60;
  v8 = utime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5684/*"EVENT_RACE_RESULT_TIME_STR"*/, 0LL);
  v16 = v6;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v15 = v8;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v14 = v7;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return System_String__Format_44306596(v9, v10, v11, v12, 0LL);
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
  __int64 v17; // x1
  struct SimpleAnimation_o *mSimpleAnimation; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v20; // x20
  System_String_o *v21; // x0
  __int64 v22; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v24; // x20
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v27; // x0
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *name; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v32; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v34; // x0
  __int64 *v35; // x8
  const MethodInfo *v36; // x2
  AvalonSceneManager_c *v37; // x8
  System_Action_o *v38; // x21

  if ( (byte_4188702 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v10);
    sub_B2C35C(&Method_EventRaceResultEffect__Play_b__17_0__, v11);
    sub_B2C35C(&Method_EventRaceResultEffect__Play_b__17_1__, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v15);
    byte_4188702 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B2C2F8(
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
        EventRaceResultEffect__SetState(this, 0, v36);
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
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v32 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v32 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v32->static_fields->DEFAULT_FADE_TIME;
            v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            v35 = &Method_EventRaceResultEffect__Play_b__17_1__;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_37:
    sub_B2C434(gameObject, v17);
  }
  v20 = this->fields.mSimpleAnimation;
  if ( !v20 )
    goto LABEL_37;
  gameObject = (UnityEngine_GameObject_o *)v20[1].monitor;
  if ( !gameObject )
    goto LABEL_37;
  v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v20, v21, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  klass = gameObject->klass;
  v24 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v25;
      p_offset += 2;
      if ( v25 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v27 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v27 = sub_AC5258(gameObject, SimpleAnimation_State_TypeInfo, 8LL, v22);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v27)(v24, *(_QWORD *)(v27 + 8), 0.0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v37 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v37 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
  v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  v35 = &Method_EventRaceResultEffect__Play_b__17_0__;
LABEL_35:
  v38 = v34;
  System_Action___ctor(v34, (Il2CppObject *)this, *v35, 0LL);
  if ( !Instance )
    goto LABEL_37;
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v38, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceResultEffect__SetState(EventRaceResultEffect_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x0

  if ( (byte_4188704 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_EventRaceResultEffect__setState__, *(_QWORD *)&state);
    byte_4188704 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_EventRaceResultEffect__setState__);
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
  UISprite_o *UIAtlasBySpriteName; // x0
  UIWidget_OnPostFillCallback_c *klass; // x8
  __int64 v19; // x9
  struct UISprite_array *teams; // x8
  System_Collections_Generic_List_UIAtlas__o *v21; // x24
  __int64 v22; // x28
  System_String_o *v23; // x25
  Il2CppObject *v24; // x0
  struct UISprite_array *v25; // x8
  UISprite_o *v26; // x26
  System_String_o *v27; // x25
  struct UISprite_array *v28; // x8
  struct UISprite_array *v29; // x8
  const MethodInfo *v30; // x2
  struct UILabel_array *teamTimes; // x8
  UILabel_o *v32; // x25
  const MethodInfo *v33; // x2
  struct UILabel_array *v34; // x8
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UnityEngine_Animation_o *v42; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  ExUITexture_o *v50; // x21
  Il2CppObject *v51; // x0
  __int64 v52; // x0
  int v54; // [xsp+18h] [xbp-58h] BYREF
  int32_t v55; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_41886FF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v11);
    sub_B2C35C(&EventRaceResultEffect_TypeInfo, v12);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_11002/*"RACE_TARGET_GOAL_RANK"*/, v15);
    sub_B2C35C(&StringLiteral_2654/*"Back/back{0}"*/, v16);
    byte_41886FF = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, *(_QWORD *)&eventId);
    byte_4183C65 = 1;
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
  v19 = *(_QWORD *)&klass->_2.static_fields_size;
  if ( !v19 )
    goto LABEL_52;
  teams = this->fields.teams;
  if ( !teams )
    goto LABEL_52;
  v21 = *(System_Collections_Generic_List_UIAtlas__o **)(v19 + 288);
  v22 = 0LL;
  while ( (int)v22 < (signed int)teams->max_length )
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
    if ( (unsigned int)v22 >= teamIconIds->max_length )
      goto LABEL_53;
    v23 = (System_String_o *)UIAtlasBySpriteName->fields.onPostFill->klass;
    v55 = teamIconIds->m_Items[v22 + 1];
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
    UIAtlasBySpriteName = (UISprite_o *)System_String__Format(v23, v24, 0LL);
    v25 = this->fields.teams;
    if ( !v25 )
      goto LABEL_52;
    if ( (unsigned int)v22 >= v25->max_length )
      goto LABEL_53;
    v26 = v25->m_Items[v22];
    v27 = (System_String_o *)UIAtlasBySpriteName;
    UIAtlasBySpriteName = (UISprite_o *)UIAtlas__GetUIAtlasBySpriteName(
                                          v21,
                                          (System_String_o *)UIAtlasBySpriteName,
                                          0LL);
    if ( !v26 )
      goto LABEL_52;
    UISprite__set_atlas(v26, (UIAtlas_o *)UIAtlasBySpriteName, 0LL);
    v28 = this->fields.teams;
    if ( !v28 )
      goto LABEL_52;
    if ( (unsigned int)v22 >= v28->max_length )
      goto LABEL_53;
    UIAtlasBySpriteName = v28->m_Items[v22];
    if ( !UIAtlasBySpriteName )
      goto LABEL_52;
    UISprite__set_spriteName(UIAtlasBySpriteName, v27, 0LL);
    v29 = this->fields.teams;
    if ( !v29 )
      goto LABEL_52;
    if ( (unsigned int)v22 >= v29->max_length )
      goto LABEL_53;
    UIAtlasBySpriteName = v29->m_Items[v22];
    if ( !UIAtlasBySpriteName )
      goto LABEL_52;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.method)(
      UIAtlasBySpriteName,
      UIAtlasBySpriteName->klass->vtable._34_get_minWidth.methodPtr);
    UIAtlasBySpriteName = (UISprite_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11002/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    teamTimes = this->fields.teamTimes;
    if ( !teamTimes )
      goto LABEL_52;
    if ( (unsigned int)v22 >= teamTimes->max_length )
      goto LABEL_53;
    v32 = teamTimes->m_Items[v22];
    if ( (int)v22 >= (int)UIAtlasBySpriteName )
    {
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
      if ( (BYTE3(EventRaceResultEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      }
      if ( !v32 )
        goto LABEL_52;
      UILabel__set_fontSize(v32, EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE, 0LL);
      v34 = this->fields.teamTimes;
      if ( !v34 )
        goto LABEL_52;
      if ( (unsigned int)v22 >= v34->max_length )
        goto LABEL_53;
      if ( !restDistances )
        goto LABEL_52;
      if ( (unsigned int)v22 >= restDistances->max_length )
        goto LABEL_53;
      v32 = v34->m_Items[v22];
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeRestDistanceStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            restDistances->m_Items[v22],
                                            v33);
      if ( !v32 )
        goto LABEL_52;
    }
    else
    {
      if ( !goalTimes )
        goto LABEL_52;
      if ( (unsigned int)v22 >= goalTimes->max_length )
      {
LABEL_53:
        v52 = sub_B2C460(UIAtlasBySpriteName);
        sub_B2C400(v52, 0LL);
      }
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeTimeStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            goalTimes->m_Items[v22],
                                            v30);
      if ( !v32 )
        goto LABEL_52;
    }
    UILabel__set_text(v32, (System_String_o *)UIAtlasBySpriteName, 0LL);
    teams = this->fields.teams;
    ++v22;
    if ( !teams )
      goto LABEL_52;
  }
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_52;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                               (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_52;
  v42 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                            (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = v42;
  p_mAnimation = &this->fields.mAnimation;
  sub_B2C2F8((BattleServantConfConponent_o *)p_mAnimation, (System_Int32_array **)v42, v44, v45, v46, v47, v48, v49);
  v50 = (ExUITexture_o *)*(p_mAnimation - 7);
  v54 = *((_DWORD *)p_mAnimation - 8);
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
  UIAtlasBySpriteName = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_2654/*"Back/back{0}"*/, v51, 0LL);
  if ( !v50 )
LABEL_52:
    sub_B2C434(UIAtlasBySpriteName, *(_QWORD *)&eventId);
  ExUITexture__SetAssetImage(v50, (System_String_o *)UIAtlasBySpriteName, onSetupEnd, 0LL);
}


void __fastcall EventRaceResultEffect__Update(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x0

  if ( (byte_41886FE & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_EventRaceResultEffect__update__, method);
    byte_41886FE = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_EventRaceResultEffect__update__);
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
  __int64 v5; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v7; // x21
  System_String_o *v8; // x0
  SimpleAnimation_State_o *v9; // x0
  EventRaceResultEffect_StatePlay_Fields *p_fields; // x19
  __int64 v11; // x3
  struct SimpleAnimation_State_o *mSimpleAnimState; // x20
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v14; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v18; // x21
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  EventRaceResultEffect_StatePlay_o **p_mAnimState; // x19
  __int64 v22; // x3
  struct SimpleAnimation_State_o *v23; // x19
  SimpleAnimation_State_c *v24; // x8
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **v26; // x11
  __int64 v27; // x0

  v4 = this;
  if ( (byte_4184B51 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    this = (EventRaceResultEffect_StatePlay_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, v5);
    byte_4184B51 = 1;
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
    v18 = that->fields.mAnimation;
    if ( v18 )
    {
      this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        Item = UnityEngine_Animation__get_Item(v18, name, 0LL);
        v4->fields.mAnimState = Item;
        p_mAnimState = (EventRaceResultEffect_StatePlay_o **)&v4->fields.mAnimState;
        sub_B2C2F8(p_mAnimState, Item);
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
    sub_B2C434(this, that);
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_37;
  this = (EventRaceResultEffect_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_37;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v9 = SimpleAnimation__get_Item(v7, v8, 0LL);
  v4->fields.mSimpleAnimState = v9;
  p_fields = &v4->fields;
  sub_B2C2F8(p_fields, v9);
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
    v14 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v14;
      p_offset += 2;
      if ( v14 >= *(unsigned __int16 *)&mSimpleAnimState->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AC5258(p_fields->mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL, v11);
  }
  this = (EventRaceResultEffect_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))p_method)(
                                                mSimpleAnimState,
                                                *(_QWORD *)(p_method + 8),
                                                0.0);
  v23 = p_fields->mSimpleAnimState;
  if ( !v23 )
    goto LABEL_37;
  v24 = v23->klass;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = (SimpleAnimation_State_c **)&v24->_1.interfaceOffsets->offset;
    while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v25;
      v26 += 2;
      if ( v25 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 8].method;
  }
  else
  {
LABEL_34:
    v27 = sub_AC5258(v23, SimpleAnimation_State_TypeInfo, 8LL, v22);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v27)(v23, *(_QWORD *)(v27 + 8), 1.0);
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

  if ( (byte_4184B52 & 1) == 0 )
  {
    this = (EventRaceResultEffect_StatePlay_o *)sub_B2C35C(
                                                  &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                  that);
    byte_4184B52 = 1;
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
    this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_16:
    sub_B2C434(this, that);
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
    sub_B2C434(this, that);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_o *v10; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v12; // x1
  EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x22

  if ( (byte_4184B53 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&CTouch_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_B2C35C(&EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_4184B53 = 1;
  }
  v10 = (EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_o *)sub_B2C42C(EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  v10->fields.that = that;
  p_fields = &v10->fields;
  sub_B2C2F8(&v10->fields, that);
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v15 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v15 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
          v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v10,
            Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
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
    sub_B2C434(isTouchPush, v12);
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
    sub_B2C434(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}