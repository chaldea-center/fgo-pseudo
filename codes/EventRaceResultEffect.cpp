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

  if ( (byte_4BFA35C & 1) == 0 )
  {
    sub_1C2E12C(&EventRaceResultEffect_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_23183/*"raceresults_team_{0}"*/, v8);
    byte_4BFA35C = 1;
  }
  EventRaceResultEffect_TypeInfo->static_fields->TEAM_NAME_SP_NAME = (struct System_String_o *)StringLiteral_23183/*"raceresults_team_{0}"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EventRaceResultEffect_TypeInfo->static_fields,
    StringLiteral_23183/*"raceresults_team_{0}"*/,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CStateManager_EventRaceResultEffect__o **p_mFSM; // x20
  CStateManager_T__o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  CStateManager_T__o *v20; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x20
  Il2CppObject *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_4BFA354 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CStateManager_EventRaceResultEffect___ctor__, method);
    sub_1C2E12C(&Method_CStateManager_EventRaceResultEffect__add__, v3);
    sub_1C2E12C(&CStateManager_EventRaceResultEffect__TypeInfo, v4);
    sub_1C2E12C(&EventRaceResultEffect_StateNone_TypeInfo, v5);
    sub_1C2E12C(&EventRaceResultEffect_StatePlay_TypeInfo, v6);
    sub_1C2E12C(&EventRaceResultEffect_StateTouchWait_TypeInfo, v7);
    byte_4BFA354 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v9 = (CStateManager_T__o *)sub_1C2E378(CStateManager_EventRaceResultEffect__TypeInfo);
    CStateManager_object____ctor(
      v9,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_32064C0 *)Method_CStateManager_EventRaceResultEffect___ctor__);
    this->fields.mFSM = (struct CStateManager_EventRaceResultEffect__o *)v9;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v17 = (Il2CppObject *)sub_1C2E378(EventRaceResultEffect_StateNone_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !mFSM )
      goto LABEL_8;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v17,
      (const MethodInfo_3206568 *)Method_CStateManager_EventRaceResultEffect__add__);
    v20 = (CStateManager_T__o *)*p_mFSM;
    v21 = (Il2CppObject *)sub_1C2E378(EventRaceResultEffect_StatePlay_TypeInfo);
    System_Object___ctor(v21, 0LL);
    if ( !v20
      || (CStateManager_object___add(
            v20,
            1,
            (IState_T__o *)v21,
            (const MethodInfo_3206568 *)Method_CStateManager_EventRaceResultEffect__add__),
          v22 = (CStateManager_T__o *)*p_mFSM,
          v23 = (Il2CppObject *)sub_1C2E378(EventRaceResultEffect_StateTouchWait_TypeInfo),
          System_Object___ctor(v23, 0LL),
          !v22) )
    {
LABEL_8:
      sub_1C2E388(v18, v19);
    }
    CStateManager_object___add(
      v22,
      2,
      (IState_T__o *)v23,
      (const MethodInfo_3206568 *)Method_CStateManager_EventRaceResultEffect__add__);
    EventRaceResultEffect__SetState(this, 0, v24);
  }
}


int32_t __fastcall EventRaceResultEffect__GetState(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  EventRaceResultEffect_o *v2; // x19
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x8

  v2 = this;
  if ( (byte_4BFA35A & 1) == 0 )
  {
    this = (EventRaceResultEffect_o *)sub_1C2E12C(&Method_CStateManager_EventRaceResultEffect__getState__, method);
    byte_4BFA35A = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C2E388(this, method);
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
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  int64_t v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFA358 & 1) == 0 )
  {
    sub_1C2E12C(&long_TypeInfo, restDistance);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_5790/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, v5);
    byte_4BFA358 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5790/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, 0LL);
  v12 = restDistance;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v12, v7, v8, v9);
  return System_String__Format(v6, v10, 0LL);
}


System_String_o *__fastcall EventRaceResultEffect__MakeTimeStr(
        EventRaceResultEffect_o *this,
        int64_t utime,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t v6; // x21
  int v7; // w23
  int v8; // w24
  System_String_o *v9; // x19
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  int v23; // [xsp+Ch] [xbp-44h] BYREF
  int v24; // [xsp+18h] [xbp-38h] BYREF
  int v25; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BFA357 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, utime);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_5795/*"EVENT_RACE_RESULT_TIME_STR"*/, v5);
    byte_4BFA357 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = utime / 3600;
  v7 = (int)utime % 60;
  v8 = utime % 3600 / 60;
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5795/*"EVENT_RACE_RESULT_TIME_STR"*/, 0LL);
  v25 = v6;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v10, v11, v12);
  v24 = v8;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v14, v15, v16);
  v23 = v7;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v18, v19, v20);
  return System_String__Format_63250024(v9, v13, v17, v21, 0LL);
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
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v23; // x20
  __int64 v24; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v26; // x0
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *name; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v31; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v33; // x0
  __int64 *v34; // x8
  const MethodInfo *v35; // x2
  AvalonSceneManager_c *v36; // x8
  System_Action_o *v37; // x21

  if ( (byte_4BFA359 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, end_act);
    sub_1C2E12C(&AvalonSceneManager_TypeInfo, v10);
    sub_1C2E12C(&Method_EventRaceResultEffect__Play_b__17_0__, v11);
    sub_1C2E12C(&Method_EventRaceResultEffect__Play_b__17_1__, v12);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v13);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v15);
    byte_4BFA359 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1C2E0D0(
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
    if ( gameObject )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        ActionExtensions__Call(this->fields.mEndAct, 0LL);
        EventRaceResultEffect__SetState(this, 0, v35);
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
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v31 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v31 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
            v33 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
            v34 = &Method_EventRaceResultEffect__Play_b__17_1__;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_33:
    sub_1C2E388(gameObject, v17);
  }
  v20 = this->fields.mSimpleAnimation;
  if ( !v20 )
    goto LABEL_33;
  gameObject = (UnityEngine_GameObject_o *)v20[1].monitor;
  if ( !gameObject )
    goto LABEL_33;
  v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v20, v21, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  klass = gameObject->klass;
  v23 = gameObject;
  v24 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v24;
      p_offset += 2;
      if ( !v24 )
        goto LABEL_15;
    }
    v26 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v26 = sub_1C8010C(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v26)(v23, *(_QWORD *)(v26 + 8), 0.0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v36 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
  v33 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  v34 = &Method_EventRaceResultEffect__Play_b__17_0__;
LABEL_31:
  v37 = v33;
  System_Action___ctor(v33, (Il2CppObject *)this, *v34, 0LL);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v37, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceResultEffect__SetState(EventRaceResultEffect_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BFA35B & 1) == 0 )
  {
    sub_1C2E12C(&Method_CStateManager_EventRaceResultEffect__setState__, *(_QWORD *)&state);
    byte_4BFA35B = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C2E388(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_32065F4 *)Method_CStateManager_EventRaceResultEffect__setState__);
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
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v19; // x9
  struct UISprite_array *teams; // x8
  System_Collections_Generic_List_UIAtlas__o *v21; // x24
  __int64 v22; // x29
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
  Il2CppObject *ComponentInChildren_object__50103608; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  ExUITexture_o *v50; // x21
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  int v56; // [xsp+18h] [xbp-68h] BYREF
  int32_t v57; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4BFA356 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v11);
    sub_1C2E12C(&EventRaceResultEffect_TypeInfo, v12);
    sub_1C2E12C(&int_TypeInfo, v13);
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, v14);
    sub_1C2E12C(&StringLiteral_11148/*"RACE_TARGET_GOAL_RANK"*/, v15);
    sub_1C2E12C(&StringLiteral_3166/*"Back/back{0}"*/, v16);
    byte_4BFA356 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BF8363 )
  {
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, *(_QWORD *)&eventId);
    byte_4BF8363 = 1;
  }
  UIAtlasBySpriteName = (UISprite_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    UIAtlasBySpriteName = (UISprite_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = UIAtlasBySpriteName->fields.onChange->klass;
  if ( !klass )
    goto LABEL_48;
  v19 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
  if ( !v19 )
    goto LABEL_48;
  teams = this->fields.teams;
  if ( !teams )
    goto LABEL_48;
  v21 = *(System_Collections_Generic_List_UIAtlas__o **)(v19 + 304);
  v22 = 0LL;
  while ( (int)v22 < (signed int)teams->max_length )
  {
    UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    if ( !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    }
    if ( !teamIconIds )
      goto LABEL_48;
    if ( (unsigned int)v22 >= teamIconIds->max_length )
      goto LABEL_49;
    v23 = (System_String_o *)UIAtlasBySpriteName->fields.onChange->klass;
    v57 = teamIconIds->m_Items[v22 + 1];
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, teamIconIds, goalTimes, restDistances);
    UIAtlasBySpriteName = (UISprite_o *)System_String__Format(v23, v24, 0LL);
    v25 = this->fields.teams;
    if ( !v25 )
      goto LABEL_48;
    if ( (unsigned int)v22 >= v25->max_length )
      goto LABEL_49;
    v26 = v25->m_Items[v22];
    v27 = (System_String_o *)UIAtlasBySpriteName;
    UIAtlasBySpriteName = (UISprite_o *)UIAtlas__GetUIAtlasBySpriteName(
                                          v21,
                                          (System_String_o *)UIAtlasBySpriteName,
                                          0LL);
    if ( !v26 )
      goto LABEL_48;
    UISprite__set_atlas(v26, (UIAtlas_o *)UIAtlasBySpriteName, 0LL);
    v28 = this->fields.teams;
    if ( !v28 )
      goto LABEL_48;
    if ( (unsigned int)v22 >= v28->max_length )
      goto LABEL_49;
    UIAtlasBySpriteName = v28->m_Items[v22];
    if ( !UIAtlasBySpriteName )
      goto LABEL_48;
    UISprite__set_spriteName(UIAtlasBySpriteName, v27, 0LL);
    v29 = this->fields.teams;
    if ( !v29 )
      goto LABEL_48;
    if ( (unsigned int)v22 >= v29->max_length )
      goto LABEL_49;
    UIAtlasBySpriteName = v29->m_Items[v22];
    if ( !UIAtlasBySpriteName )
      goto LABEL_48;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.method)(
      UIAtlasBySpriteName,
      UIAtlasBySpriteName->klass->vtable._34_get_minWidth.methodPtr);
    UIAtlasBySpriteName = (UISprite_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11148/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    teamTimes = this->fields.teamTimes;
    if ( !teamTimes )
      goto LABEL_48;
    if ( (unsigned int)v22 >= teamTimes->max_length )
      goto LABEL_49;
    v32 = teamTimes->m_Items[v22];
    if ( (int)v22 >= (int)UIAtlasBySpriteName )
    {
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
      if ( !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      if ( !v32 )
        goto LABEL_48;
      UILabel__set_fontSize(v32, EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE, 0LL);
      v34 = this->fields.teamTimes;
      if ( !v34 )
        goto LABEL_48;
      if ( (unsigned int)v22 >= v34->max_length )
        goto LABEL_49;
      if ( !restDistances )
        goto LABEL_48;
      if ( (unsigned int)v22 >= restDistances->max_length )
        goto LABEL_49;
      v32 = v34->m_Items[v22];
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeRestDistanceStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            restDistances->m_Items[v22],
                                            v33);
      if ( !v32 )
        goto LABEL_48;
    }
    else
    {
      if ( !goalTimes )
        goto LABEL_48;
      if ( (unsigned int)v22 >= goalTimes->max_length )
LABEL_49:
        sub_1C2E390(UIAtlasBySpriteName, *(_QWORD *)&eventId);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeTimeStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            goalTimes->m_Items[v22],
                                            v30);
      if ( !v32 )
        goto LABEL_48;
    }
    UILabel__set_text(v32, (System_String_o *)UIAtlasBySpriteName, 0LL);
    teams = this->fields.teams;
    ++v22;
    if ( !teams )
      goto LABEL_48;
  }
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_48;
  ComponentInChildren_object__50103608 = UnityEngine_Component__GetComponentInChildren_object__50103608(
                                           (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                           (const MethodInfo_2FC8538 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__50103608;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation,
    (int64_t)ComponentInChildren_object__50103608,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_48;
  v42 = UnityEngine_Component__GetComponentInChildren_object__50103608(
          (UnityEngine_Component_o *)UIAtlasBySpriteName,
          (const MethodInfo_2FC8538 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v42;
  p_mAnimation = &this->fields.mAnimation;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_mAnimation, (int64_t)v42, v44, v45, v46, v47, v48, v49);
  v50 = (ExUITexture_o *)*(p_mAnimation - 7);
  v56 = *((_DWORD *)p_mAnimation - 8);
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v51, v52, v53);
  UIAtlasBySpriteName = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_3166/*"Back/back{0}"*/, v54, 0LL);
  if ( !v50 )
LABEL_48:
    sub_1C2E388(UIAtlasBySpriteName, *(_QWORD *)&eventId);
  ExUITexture__SetAssetImage(v50, (System_String_o *)UIAtlasBySpriteName, onSetupEnd, 0LL);
}


void __fastcall EventRaceResultEffect__Update(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BFA355 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CStateManager_EventRaceResultEffect__update__, method);
    byte_4BFA355 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_32065D0 *)Method_CStateManager_EventRaceResultEffect__update__);
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
  PartyOrganizationUtility_o *p_fields; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_c *klass; // x20
  _QWORD *image; // x8
  __int64 v19; // x9
  SimpleAnimation_State_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v23; // x21
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  PartyOrganizationUtility_o *p_mAnimState; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  PartyOrganizationUtility_c *v33; // x19
  _QWORD *v34; // x8
  __int64 v35; // x9
  SimpleAnimation_State_c **v36; // x10
  __int64 v37; // x0

  v4 = this;
  if ( (byte_4BFA35D & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, that);
    this = (EventRaceResultEffect_StatePlay_o *)sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v5);
    byte_4BFA35D = 1;
  }
  if ( !that )
    goto LABEL_35;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v23 = that->fields.mAnimation;
    if ( v23 )
    {
      this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        Item = UnityEngine_Animation__get_Item(v23, name, 0LL);
        v4->fields.mAnimState = Item;
        p_mAnimState = (PartyOrganizationUtility_o *)&v4->fields.mAnimState;
        sub_1C2E0D0(p_mAnimState, (int64_t)Item, v27, v28, v29, v30, v31, v32);
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
    sub_1C2E388(this, that);
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_35;
  this = (EventRaceResultEffect_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_35;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v9 = SimpleAnimation__get_Item(v7, v8, 0LL);
  v4->fields.mSimpleAnimState = v9;
  p_fields = (PartyOrganizationUtility_o *)&v4->fields;
  sub_1C2E0D0(p_fields, (int64_t)v9, v11, v12, v13, v14, v15, v16);
  this = (EventRaceResultEffect_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_35;
  this = (EventRaceResultEffect_StatePlay_o *)SimpleAnimation__Play((SimpleAnimation_o *)this, 0LL);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_35;
  image = klass->_1.image;
  v19 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v20 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v20 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_15;
    }
    v21 = (__int64)&image[2 * *(_DWORD *)v20 + 51];
  }
  else
  {
LABEL_15:
    v21 = sub_1C8010C(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (EventRaceResultEffect_StatePlay_o *)(*(__int64 (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v21)(
                                                klass,
                                                *(_QWORD *)(v21 + 8),
                                                0.0);
  v33 = p_fields->klass;
  if ( !v33 )
    goto LABEL_35;
  v34 = v33->_1.image;
  v35 = *((unsigned __int16 *)v33->_1.image + 151);
  if ( *((_WORD *)v33->_1.image + 151) )
  {
    v36 = (SimpleAnimation_State_c **)(v34[22] + 8LL);
    while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v35;
      v36 += 2;
      if ( !v35 )
        goto LABEL_32;
    }
    v37 = (__int64)&v34[2 * *(_DWORD *)v36 + 55];
  }
  else
  {
LABEL_32:
    v37 = sub_1C8010C(v33, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v37)(v33, *(_QWORD *)(v37 + 8), 1.0);
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

  if ( (byte_4BFA35E & 1) == 0 )
  {
    this = (EventRaceResultEffect_StatePlay_o *)sub_1C2E12C(
                                                  &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                  that);
    byte_4BFA35E = 1;
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
    this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_16:
    sub_1C2E388(this, that);
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
    sub_1C2E388(this, that);
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
  __int64 v10; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x19
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x2

  if ( (byte_4BFA35F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, that);
    sub_1C2E12C(&AvalonSceneManager_TypeInfo, v4);
    sub_1C2E12C(&CTouch_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C2E12C(&Method_EventRaceResultEffect_StateTouchWait_update__, v7);
    sub_1C2E12C(&Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_1C2E12C(&EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_4BFA35F = 1;
  }
  v10 = sub_1C2E378(EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)(v10 + 16) = that;
  v19 = v10 + 16;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)that, v13, v14, v15, v16, v17, v18);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v19 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v19 + 64LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_GameObject__get_gameObject(isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v20 = Method_EventRaceResultEffect_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventRaceResultEffect_StateTouchWait_update__ + 83) & 2) != 0 )
            v20 = (_QWORD *)sub_1C2E144(Method_EventRaceResultEffect_StateTouchWait_update__);
          v21 = (System_Reflection_MethodBase_o *)sub_1C2E110(v20, v20[4]);
          OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v23 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v23 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
          v25 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
          System_Action___ctor(
            v25,
            (Il2CppObject *)v10,
            Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v25, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v19;
            if ( *(_QWORD *)v19 )
            {
              EventRaceResultEffect__SetState((EventRaceResultEffect_o *)isTouchPush, 0, v26);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C2E388(isTouchPush, v12);
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
    sub_1C2E388(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}