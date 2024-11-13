void __fastcall EventRaceResultEffect___cctor(const MethodInfo *method)
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

  if ( (byte_4B12EA2 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRaceResultEffect_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_22997/*"raceresults_team_{0}"*/, v8, v9);
    byte_4B12EA2 = 1;
  }
  EventRaceResultEffect_TypeInfo->static_fields->TEAM_NAME_SP_NAME = (struct System_String_o *)StringLiteral_22997/*"raceresults_team_{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventRaceResultEffect_TypeInfo->static_fields,
    StringLiteral_22997/*"raceresults_team_{0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  struct CStateManager_EventRaceResultEffect__o **p_mFSM; // x20
  CStateManager_T__o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CStateManager_T__o *mFSM; // x21
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

  if ( (byte_4B12E9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EventRaceResultEffect___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_EventRaceResultEffect__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_EventRaceResultEffect__TypeInfo, v7, v8);
    sub_1BCA7E0(&EventRaceResultEffect_StateNone_TypeInfo, v9, v10);
    sub_1BCA7E0(&EventRaceResultEffect_StatePlay_TypeInfo, v11, v12);
    sub_1BCA7E0(&EventRaceResultEffect_StateTouchWait_TypeInfo, v13, v14);
    byte_4B12E9A = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v16 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_EventRaceResultEffect__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v16,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_313FBC4 *)Method_CStateManager_EventRaceResultEffect___ctor__);
    this->fields.mFSM = (struct CStateManager_EventRaceResultEffect__o *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v27 = (Il2CppObject *)sub_1BCAA2C(EventRaceResultEffect_StateNone_TypeInfo, v24, v25, v26);
    System_Object___ctor(v27, 0LL);
    if ( !mFSM )
      goto LABEL_8;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v27,
      (const MethodInfo_313FC6C *)Method_CStateManager_EventRaceResultEffect__add__);
    v30 = (CStateManager_T__o *)*p_mFSM;
    v34 = (Il2CppObject *)sub_1BCAA2C(EventRaceResultEffect_StatePlay_TypeInfo, v31, v32, v33);
    System_Object___ctor(v34, 0LL);
    if ( !v30
      || (CStateManager_object___add(
            v30,
            1,
            (IState_T__o *)v34,
            (const MethodInfo_313FC6C *)Method_CStateManager_EventRaceResultEffect__add__),
          v35 = (CStateManager_T__o *)*p_mFSM,
          v39 = (Il2CppObject *)sub_1BCAA2C(EventRaceResultEffect_StateTouchWait_TypeInfo, v36, v37, v38),
          System_Object___ctor(v39, 0LL),
          !v35) )
    {
LABEL_8:
      sub_1BCAA3C(v28, v29);
    }
    CStateManager_object___add(
      v35,
      2,
      (IState_T__o *)v39,
      (const MethodInfo_313FC6C *)Method_CStateManager_EventRaceResultEffect__add__);
    EventRaceResultEffect__SetState(this, 0, v40);
  }
}


int32_t __fastcall EventRaceResultEffect__GetState(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventRaceResultEffect_o *v3; // x19
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B12EA0 & 1) == 0 )
  {
    this = (EventRaceResultEffect_o *)sub_1BCA7E0(&Method_CStateManager_EventRaceResultEffect__getState__, method, v2);
    byte_4B12EA0 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
  return mFSM->fields.m_state;
}


System_String_o *__fastcall EventRaceResultEffect__MakeRestDistanceStr(
        EventRaceResultEffect_o *this,
        int64_t restDistance,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B12E9E & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, restDistance, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5756/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, v6, v7);
    byte_4B12E9E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, restDistance);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5756/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, 0LL);
  v11 = restDistance;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
  return System_String__Format(v8, v9, 0LL);
}


System_String_o *__fastcall EventRaceResultEffect__MakeTimeStr(
        EventRaceResultEffect_o *this,
        int64_t utime,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t v8; // x21
  int v9; // w23
  int v10; // w24
  System_String_o *v11; // x19
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  int v16; // [xsp+Ch] [xbp-44h] BYREF
  int v17; // [xsp+18h] [xbp-38h] BYREF
  int v18; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B12E9D & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, utime, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5761/*"EVENT_RACE_RESULT_TIME_STR"*/, v6, v7);
    byte_4B12E9D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, utime);
  v8 = utime / 3600;
  v9 = (int)utime % 60;
  v10 = utime % 3600 / 60;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5761/*"EVENT_RACE_RESULT_TIME_STR"*/, 0LL);
  v18 = v8;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v17 = v10;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16 = v9;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return System_String__Format_62415660(v11, v12, v13, v14, 0LL);
}


void __fastcall EventRaceResultEffect__Play(
        EventRaceResultEffect_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  struct SimpleAnimation_o *mSimpleAnimation; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v26; // x20
  System_String_o *v27; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v29; // x20
  __int64 v30; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v32; // x0
  __int64 v33; // x1
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *name; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v41; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v43; // x0
  __int64 *v44; // x8
  const MethodInfo *v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  AvalonSceneManager_c *v49; // x8
  System_Action_o *v50; // x21

  if ( (byte_4B12E9F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_EventRaceResultEffect__Play_b__17_0__, v12, v13);
    sub_1BCA7E0(&Method_EventRaceResultEffect__Play_b__17_1__, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v20, v21);
    byte_4B12E9F = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mEndAct,
    (int64_t)end_act,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = this->fields.mSimpleAnimation;
  if ( !mSimpleAnimation )
    goto LABEL_33;
  monitor = (UnityEngine_Object_o *)mSimpleAnimation[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
    if ( gameObject )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        ActionExtensions__Call(this->fields.mEndAct, 0LL);
        EventRaceResultEffect__SetState(this, 0, v45);
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
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v41 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v37);
              v41 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v41->static_fields->DEFAULT_FADE_TIME;
            v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
            v44 = &Method_EventRaceResultEffect__Play_b__17_1__;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_33:
    sub_1BCAA3C(gameObject, v23);
  }
  v26 = this->fields.mSimpleAnimation;
  if ( !v26 )
    goto LABEL_33;
  gameObject = (UnityEngine_GameObject_o *)v26[1].monitor;
  if ( !gameObject )
    goto LABEL_33;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v26, v27, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  klass = gameObject->klass;
  v29 = gameObject;
  v30 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v30;
      p_offset += 2;
      if ( !v30 )
        goto LABEL_15;
    }
    v32 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v32 = sub_1C1C7C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 0.0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v49 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v46);
    v49 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v49->static_fields->DEFAULT_FADE_TIME;
  v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
  v44 = &Method_EventRaceResultEffect__Play_b__17_0__;
LABEL_31:
  v50 = v43;
  System_Action___ctor(v43, (Il2CppObject *)this, *v44, 0LL);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v50, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceResultEffect__SetState(EventRaceResultEffect_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B12EA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EventRaceResultEffect__setState__, *(_QWORD *)&state, method);
    byte_4B12EA1 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_EventRaceResultEffect__setState__);
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
  UISprite_o *UIAtlasBySpriteName; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v25; // x9
  struct UISprite_array *teams; // x8
  System_Collections_Generic_List_UIAtlas__o *v27; // x24
  __int64 v28; // x29
  System_String_o *v29; // x25
  Il2CppObject *v30; // x0
  struct UISprite_array *v31; // x8
  UISprite_o *v32; // x26
  System_String_o *v33; // x25
  struct UISprite_array *v34; // x8
  struct UISprite_array *v35; // x8
  const MethodInfo *v36; // x2
  struct UILabel_array *teamTimes; // x8
  UILabel_o *v38; // x25
  const MethodInfo *v39; // x2
  struct UILabel_array *v40; // x8
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppObject *v48; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  ExUITexture_o *v56; // x21
  Il2CppObject *v57; // x0
  int v59; // [xsp+18h] [xbp-68h] BYREF
  int32_t v60; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B12E9C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&eventId, teamIconIds);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v11, v12);
    sub_1BCA7E0(&EventRaceResultEffect_TypeInfo, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_11077/*"RACE_TARGET_GOAL_RANK"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3156/*"Back/back{0}"*/, v21, v22);
    byte_4B12E9C = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, *(_QWORD *)&eventId);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, *(_QWORD *)&eventId, teamIconIds);
    byte_4B10F83 = 1;
  }
  UIAtlasBySpriteName = (UISprite_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, *(_QWORD *)&eventId);
    UIAtlasBySpriteName = (UISprite_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = UIAtlasBySpriteName->fields.onChange->klass;
  if ( !klass )
    goto LABEL_48;
  v25 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
  if ( !v25 )
    goto LABEL_48;
  teams = this->fields.teams;
  if ( !teams )
    goto LABEL_48;
  v27 = *(System_Collections_Generic_List_UIAtlas__o **)(v25 + 304);
  v28 = 0LL;
  while ( (int)v28 < (signed int)teams->max_length )
  {
    UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    if ( !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo, *(_QWORD *)&eventId);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    }
    if ( !teamIconIds )
      goto LABEL_48;
    if ( (unsigned int)v28 >= teamIconIds->max_length )
      goto LABEL_49;
    v29 = (System_String_o *)UIAtlasBySpriteName->fields.onChange->klass;
    v60 = teamIconIds->m_Items[v28 + 1];
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
    UIAtlasBySpriteName = (UISprite_o *)System_String__Format(v29, v30, 0LL);
    v31 = this->fields.teams;
    if ( !v31 )
      goto LABEL_48;
    if ( (unsigned int)v28 >= v31->max_length )
      goto LABEL_49;
    v32 = v31->m_Items[v28];
    v33 = (System_String_o *)UIAtlasBySpriteName;
    UIAtlasBySpriteName = (UISprite_o *)UIAtlas__GetUIAtlasBySpriteName(
                                          v27,
                                          (System_String_o *)UIAtlasBySpriteName,
                                          0LL);
    if ( !v32 )
      goto LABEL_48;
    UISprite__set_atlas(v32, (UIAtlas_o *)UIAtlasBySpriteName, 0LL);
    v34 = this->fields.teams;
    if ( !v34 )
      goto LABEL_48;
    if ( (unsigned int)v28 >= v34->max_length )
      goto LABEL_49;
    UIAtlasBySpriteName = v34->m_Items[v28];
    if ( !UIAtlasBySpriteName )
      goto LABEL_48;
    UISprite__set_spriteName(UIAtlasBySpriteName, v33, 0LL);
    v35 = this->fields.teams;
    if ( !v35 )
      goto LABEL_48;
    if ( (unsigned int)v28 >= v35->max_length )
      goto LABEL_49;
    UIAtlasBySpriteName = v35->m_Items[v28];
    if ( !UIAtlasBySpriteName )
      goto LABEL_48;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.method)(
      UIAtlasBySpriteName,
      UIAtlasBySpriteName->klass->vtable._34_get_minWidth.methodPtr);
    UIAtlasBySpriteName = (UISprite_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11077/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    teamTimes = this->fields.teamTimes;
    if ( !teamTimes )
      goto LABEL_48;
    if ( (unsigned int)v28 >= teamTimes->max_length )
      goto LABEL_49;
    v38 = teamTimes->m_Items[v28];
    if ( (int)v28 >= (int)UIAtlasBySpriteName )
    {
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
      if ( !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo, *(_QWORD *)&eventId);
      if ( !v38 )
        goto LABEL_48;
      UILabel__set_fontSize(v38, EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE, 0LL);
      v40 = this->fields.teamTimes;
      if ( !v40 )
        goto LABEL_48;
      if ( (unsigned int)v28 >= v40->max_length )
        goto LABEL_49;
      if ( !restDistances )
        goto LABEL_48;
      if ( (unsigned int)v28 >= restDistances->max_length )
        goto LABEL_49;
      v38 = v40->m_Items[v28];
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeRestDistanceStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            restDistances->m_Items[v28],
                                            v39);
      if ( !v38 )
        goto LABEL_48;
    }
    else
    {
      if ( !goalTimes )
        goto LABEL_48;
      if ( (unsigned int)v28 >= goalTimes->max_length )
LABEL_49:
        sub_1BCAA44(UIAtlasBySpriteName, *(_QWORD *)&eventId);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeTimeStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            goalTimes->m_Items[v28],
                                            v36);
      if ( !v38 )
        goto LABEL_48;
    }
    UILabel__set_text(v38, (System_String_o *)UIAtlasBySpriteName, 0LL);
    teams = this->fields.teams;
    ++v28;
    if ( !teams )
      goto LABEL_48;
  }
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_48;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__49322392;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation,
    (int64_t)ComponentInChildren_object__49322392,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_48;
  v48 = UnityEngine_Component__GetComponentInChildren_object__49322392(
          (UnityEngine_Component_o *)UIAtlasBySpriteName,
          (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v48;
  p_mAnimation = &this->fields.mAnimation;
  sub_1BCA784((PartyOrganizationUtility_o *)p_mAnimation, (int64_t)v48, v50, v51, v52, v53, v54, v55);
  v56 = (ExUITexture_o *)*(p_mAnimation - 7);
  v59 = *((_DWORD *)p_mAnimation - 8);
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
  UIAtlasBySpriteName = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_3156/*"Back/back{0}"*/, v57, 0LL);
  if ( !v56 )
LABEL_48:
    sub_1BCAA3C(UIAtlasBySpriteName, *(_QWORD *)&eventId);
  ExUITexture__SetAssetImage(v56, (System_String_o *)UIAtlasBySpriteName, onSetupEnd, 0LL);
}


void __fastcall EventRaceResultEffect__Update(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B12E9B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EventRaceResultEffect__update__, method, v2);
    byte_4B12E9B = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_EventRaceResultEffect__update__);
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
  __int64 v6; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v8; // x21
  System_String_o *v9; // x0
  SimpleAnimation_State_o *v10; // x0
  PartyOrganizationUtility_o *p_fields; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  PartyOrganizationUtility_c *klass; // x20
  _QWORD *image; // x8
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v24; // x21
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  PartyOrganizationUtility_o *p_mAnimState; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  PartyOrganizationUtility_c *v34; // x19
  _QWORD *v35; // x8
  __int64 v36; // x9
  SimpleAnimation_State_c **v37; // x10
  __int64 v38; // x0

  v4 = this;
  if ( (byte_4B12EA3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (EventRaceResultEffect_StatePlay_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v5, v6);
    byte_4B12EA3 = 1;
  }
  if ( !that )
    goto LABEL_35;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
    this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v24 = that->fields.mAnimation;
    if ( v24 )
    {
      this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        Item = UnityEngine_Animation__get_Item(v24, name, 0LL);
        v4->fields.mAnimState = Item;
        p_mAnimState = (PartyOrganizationUtility_o *)&v4->fields.mAnimState;
        sub_1BCA784(p_mAnimState, (int64_t)Item, v28, v29, v30, v31, v32, v33);
        this = (EventRaceResultEffect_StatePlay_o *)that->fields.mAnimation;
        if ( this )
        {
          UnityEngine_Animation__Play((UnityEngine_Animation_o *)this, 0LL);
          this = (EventRaceResultEffect_StatePlay_o *)p_mAnimState->klass;
          if ( p_mAnimState->klass )
          {
            UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
            this = (EventRaceResultEffect_StatePlay_o *)p_mAnimState->klass;
            if ( p_mAnimState->klass )
            {
              UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1BCAA3C(this, that);
  }
  v8 = that->fields.mSimpleAnimation;
  if ( !v8 )
    goto LABEL_35;
  this = (EventRaceResultEffect_StatePlay_o *)v8[1].monitor;
  if ( !this )
    goto LABEL_35;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v10 = SimpleAnimation__get_Item(v8, v9, 0LL);
  v4->fields.mSimpleAnimState = v10;
  p_fields = (PartyOrganizationUtility_o *)&v4->fields;
  sub_1BCA784(p_fields, (int64_t)v10, v12, v13, v14, v15, v16, v17);
  this = (EventRaceResultEffect_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_35;
  this = (EventRaceResultEffect_StatePlay_o *)SimpleAnimation__Play((SimpleAnimation_o *)this, 0LL);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_35;
  image = klass->_1.image;
  v20 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v21 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v20;
      v21 += 2;
      if ( !v20 )
        goto LABEL_15;
    }
    v22 = (__int64)&image[2 * *(_DWORD *)v21 + 51];
  }
  else
  {
LABEL_15:
    v22 = sub_1C1C7C0(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (EventRaceResultEffect_StatePlay_o *)(*(__int64 (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v22)(
                                                klass,
                                                *(_QWORD *)(v22 + 8),
                                                0.0);
  v34 = p_fields->klass;
  if ( !v34 )
    goto LABEL_35;
  v35 = v34->_1.image;
  v36 = *((unsigned __int16 *)v34->_1.image + 151);
  if ( *((_WORD *)v34->_1.image + 151) )
  {
    v37 = (SimpleAnimation_State_c **)(v35[22] + 8LL);
    while ( *(v37 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v36;
      v37 += 2;
      if ( !v36 )
        goto LABEL_32;
    }
    v38 = (__int64)&v35[2 * *(_DWORD *)v37 + 55];
  }
  else
  {
LABEL_32:
    v38 = sub_1C1C7C0(v34, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v38)(v34, *(_QWORD *)(v38 + 8), 1.0);
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
  const MethodInfo *v6; // x2
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *v8; // x0

  if ( (byte_4B12EA4 & 1) == 0 )
  {
    this = (EventRaceResultEffect_StatePlay_o *)sub_1BCA7E0(
                                                  &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                  that,
                                                  method);
    byte_4B12EA4 = 1;
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
    this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_16;
    this = (EventRaceResultEffect_StatePlay_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_15:
      EventRaceResultEffect__SetState(that, 2, v6);
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
  this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_16:
    sub_1BCAA3C(this, that);
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
    sub_1BCAA3C(this, that);
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

  if ( (byte_4B12EA5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CTouch_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_EventRaceResultEffect_StateTouchWait_update__, v11, v12);
    sub_1BCA7E0(&Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__, v13, v14);
    sub_1BCA7E0(&EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo, v15, v16);
    byte_4B12EA5 = 1;
  }
  v17 = sub_1BCAA2C(EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3);
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
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v26 + 64LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_GameObject__get_gameObject(isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v28 = Method_EventRaceResultEffect_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventRaceResultEffect_StateTouchWait_update__ + 83) & 2) != 0 )
            v28 = (_QWORD *)sub_1BCA7F8(Method_EventRaceResultEffect_StateTouchWait_update__);
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
            Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v26;
            if ( *(_QWORD *)v26 )
            {
              EventRaceResultEffect__SetState((EventRaceResultEffect_o *)isTouchPush, 0, v37);
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
    sub_1BCAA3C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}