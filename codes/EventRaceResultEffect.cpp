void __fastcall EventRaceResultEffect___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A57EF1 & 1) == 0 )
  {
    sub_1B885B0(&EventRaceResultEffect_TypeInfo);
    sub_1B885B0(&StringLiteral_22753/*"raceresults_team_{0}"*/);
    byte_4A57EF1 = 1;
  }
  EventRaceResultEffect_TypeInfo->static_fields->TEAM_NAME_SP_NAME = (struct System_String_o *)StringLiteral_22753/*"raceresults_team_{0}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventRaceResultEffect_TypeInfo->static_fields,
    StringLiteral_22753/*"raceresults_team_{0}"*/,
    v1,
    v2);
  EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE = 16;
}


void __fastcall EventRaceResultEffect___ctor(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRaceResultEffect__Awake(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  struct CStateManager_EventRaceResultEffect__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x20
  Il2CppObject *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4A57EE9 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_EventRaceResultEffect___ctor__);
    sub_1B885B0(&Method_CStateManager_EventRaceResultEffect__add__);
    sub_1B885B0(&CStateManager_EventRaceResultEffect__TypeInfo);
    sub_1B885B0(&EventRaceResultEffect_StateNone_TypeInfo);
    sub_1B885B0(&EventRaceResultEffect_StatePlay_TypeInfo);
    sub_1B885B0(&EventRaceResultEffect_StateTouchWait_TypeInfo);
    byte_4A57EE9 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1B887FC(CStateManager_EventRaceResultEffect__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_30AAD34 *)Method_CStateManager_EventRaceResultEffect___ctor__);
    this->fields.mFSM = (struct CStateManager_EventRaceResultEffect__o *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1B887FC(EventRaceResultEffect_StateNone_TypeInfo);
    System_Object___ctor(v8, 0LL);
    if ( !mFSM )
      goto LABEL_8;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_30AADDC *)Method_CStateManager_EventRaceResultEffect__add__);
    v11 = (CStateManager_T__o *)*p_mFSM;
    v12 = (Il2CppObject *)sub_1B887FC(EventRaceResultEffect_StatePlay_TypeInfo);
    System_Object___ctor(v12, 0LL);
    if ( !v11
      || (CStateManager_object___add(
            v11,
            1,
            (IState_T__o *)v12,
            (const MethodInfo_30AADDC *)Method_CStateManager_EventRaceResultEffect__add__),
          v13 = (CStateManager_T__o *)*p_mFSM,
          v14 = (Il2CppObject *)sub_1B887FC(EventRaceResultEffect_StateTouchWait_TypeInfo),
          System_Object___ctor(v14, 0LL),
          !v13) )
    {
LABEL_8:
      sub_1B8880C(v9, v10);
    }
    CStateManager_object___add(
      v13,
      2,
      (IState_T__o *)v14,
      (const MethodInfo_30AADDC *)Method_CStateManager_EventRaceResultEffect__add__);
    EventRaceResultEffect__SetState(this, 0, v15);
  }
}


int32_t __fastcall EventRaceResultEffect__GetState(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  EventRaceResultEffect_o *v2; // x19
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A57EEF & 1) == 0 )
  {
    this = (EventRaceResultEffect_o *)sub_1B885B0(&Method_CStateManager_EventRaceResultEffect__getState__);
    byte_4A57EEF = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
  return mFSM->fields.m_state;
}


System_String_o *__fastcall EventRaceResultEffect__MakeRestDistanceStr(
        EventRaceResultEffect_o *this,
        int64_t restDistance,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x0
  int64_t v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A57EED & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5672/*"EVENT_RACE_RESULT_PATH_LENGTH"*/);
    byte_4A57EED = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5672/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, 0LL);
  v10 = restDistance;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v10, v5, v6, v7);
  return System_String__Format(v4, v8, 0LL);
}


System_String_o *__fastcall EventRaceResultEffect__MakeTimeStr(
        EventRaceResultEffect_o *this,
        int64_t utime,
        const MethodInfo *method)
{
  int64_t v4; // x21
  int v5; // w23
  int v6; // w24
  System_String_o *v7; // x19
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  int v21; // [xsp+Ch] [xbp-44h] BYREF
  int v22; // [xsp+18h] [xbp-38h] BYREF
  int v23; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A57EEC & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5677/*"EVENT_RACE_RESULT_TIME_STR"*/);
    byte_4A57EEC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = utime / 3600;
  v5 = (int)utime % 60;
  v6 = utime % 3600 / 60;
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5677/*"EVENT_RACE_RESULT_TIME_STR"*/, 0LL);
  v23 = v4;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v8, v9, v10);
  v22 = v6;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v12, v13, v14);
  v21 = v5;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v16, v17, v18);
  return System_String__Format_61721472(v7, v11, v15, v19, 0LL);
}


void __fastcall EventRaceResultEffect__Play(
        EventRaceResultEffect_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  struct SimpleAnimation_o *mSimpleAnimation; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *name; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x0
  __int64 *v24; // x8
  const MethodInfo *v25; // x2
  AvalonSceneManager_c *v26; // x8
  System_Action_o *v27; // x21

  if ( (byte_4A57EEE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_EventRaceResultEffect__Play_b__17_0__);
    sub_1B885B0(&Method_EventRaceResultEffect__Play_b__17_1__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A57EEE = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mEndAct, (int32_t)end_act, (int32_t)method, v3);
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
        EventRaceResultEffect__SetState(this, 0, v25);
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
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v21 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v21 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
            v23 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            v24 = &Method_EventRaceResultEffect__Play_b__17_1__;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_33:
    sub_1B8880C(gameObject, v7);
  }
  v10 = this->fields.mSimpleAnimation;
  if ( !v10 )
    goto LABEL_33;
  gameObject = (UnityEngine_GameObject_o *)v10[1].monitor;
  if ( !gameObject )
    goto LABEL_33;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v10, v11, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  klass = gameObject->klass;
  v13 = gameObject;
  v14 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_15;
    }
    v16 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v16 = sub_1BDA590(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), 0.0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  v24 = &Method_EventRaceResultEffect__Play_b__17_0__;
LABEL_31:
  v27 = v23;
  System_Action___ctor(v23, (Il2CppObject *)this, *v24, 0LL);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceResultEffect__SetState(EventRaceResultEffect_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A57EF0 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_EventRaceResultEffect__setState__);
    byte_4A57EF0 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_EventRaceResultEffect__setState__);
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
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v13; // x9
  struct UISprite_array *teams; // x8
  System_Collections_Generic_List_UIAtlas__o *v15; // x24
  __int64 v16; // x29
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
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  ExUITexture_o *v36; // x21
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  int v42; // [xsp+18h] [xbp-68h] BYREF
  int32_t v43; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A57EEB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&EventRaceResultEffect_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_10941/*"RACE_TARGET_GOAL_RANK"*/);
    sub_1B885B0(&StringLiteral_3133/*"Back/back{0}"*/);
    byte_4A57EEB = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  v13 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
  if ( !v13 )
    goto LABEL_48;
  teams = this->fields.teams;
  if ( !teams )
    goto LABEL_48;
  v15 = *(System_Collections_Generic_List_UIAtlas__o **)(v13 + 296);
  v16 = 0LL;
  while ( (int)v16 < (signed int)teams->max_length )
  {
    UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    if ( !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    }
    if ( !teamIconIds )
      goto LABEL_48;
    if ( (unsigned int)v16 >= teamIconIds->max_length )
      goto LABEL_49;
    v17 = (System_String_o *)UIAtlasBySpriteName->fields.onChange->klass;
    v43 = teamIconIds->m_Items[v16 + 1];
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, teamIconIds, goalTimes, restDistances);
    UIAtlasBySpriteName = (UISprite_o *)System_String__Format(v17, v18, 0LL);
    v19 = this->fields.teams;
    if ( !v19 )
      goto LABEL_48;
    if ( (unsigned int)v16 >= v19->max_length )
      goto LABEL_49;
    v20 = v19->m_Items[v16];
    v21 = (System_String_o *)UIAtlasBySpriteName;
    UIAtlasBySpriteName = (UISprite_o *)UIAtlas__GetUIAtlasBySpriteName(
                                          v15,
                                          (System_String_o *)UIAtlasBySpriteName,
                                          0LL);
    if ( !v20 )
      goto LABEL_48;
    UISprite__set_atlas(v20, (UIAtlas_o *)UIAtlasBySpriteName, 0LL);
    v22 = this->fields.teams;
    if ( !v22 )
      goto LABEL_48;
    if ( (unsigned int)v16 >= v22->max_length )
      goto LABEL_49;
    UIAtlasBySpriteName = v22->m_Items[v16];
    if ( !UIAtlasBySpriteName )
      goto LABEL_48;
    UISprite__set_spriteName(UIAtlasBySpriteName, v21, 0LL);
    v23 = this->fields.teams;
    if ( !v23 )
      goto LABEL_48;
    if ( (unsigned int)v16 >= v23->max_length )
      goto LABEL_49;
    UIAtlasBySpriteName = v23->m_Items[v16];
    if ( !UIAtlasBySpriteName )
      goto LABEL_48;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.method)(
      UIAtlasBySpriteName,
      UIAtlasBySpriteName->klass->vtable._34_get_minWidth.methodPtr);
    UIAtlasBySpriteName = (UISprite_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_10941/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    teamTimes = this->fields.teamTimes;
    if ( !teamTimes )
      goto LABEL_48;
    if ( (unsigned int)v16 >= teamTimes->max_length )
      goto LABEL_49;
    v26 = teamTimes->m_Items[v16];
    if ( (int)v16 >= (int)UIAtlasBySpriteName )
    {
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
      if ( !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      if ( !v26 )
        goto LABEL_48;
      UILabel__set_fontSize(v26, EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE, 0LL);
      v28 = this->fields.teamTimes;
      if ( !v28 )
        goto LABEL_48;
      if ( (unsigned int)v16 >= v28->max_length )
        goto LABEL_49;
      if ( !restDistances )
        goto LABEL_48;
      if ( (unsigned int)v16 >= restDistances->max_length )
        goto LABEL_49;
      v26 = v28->m_Items[v16];
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeRestDistanceStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            restDistances->m_Items[v16],
                                            v27);
      if ( !v26 )
        goto LABEL_48;
    }
    else
    {
      if ( !goalTimes )
        goto LABEL_48;
      if ( (unsigned int)v16 >= goalTimes->max_length )
LABEL_49:
        sub_1B88814(UIAtlasBySpriteName, *(_QWORD *)&eventId);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeTimeStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            goalTimes->m_Items[v16],
                                            v24);
      if ( !v26 )
        goto LABEL_48;
    }
    UILabel__set_text(v26, (System_String_o *)UIAtlasBySpriteName, 0LL);
    teams = this->fields.teams;
    ++v16;
    if ( !teams )
      goto LABEL_48;
  }
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_48;
  ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__48719376;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)ComponentInChildren_object__48719376,
    v30,
    v31);
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UIAtlasBySpriteName )
    goto LABEL_48;
  v32 = UnityEngine_Component__GetComponentInChildren_object__48719376(
          (UnityEngine_Component_o *)UIAtlasBySpriteName,
          (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v32;
  p_mAnimation = &this->fields.mAnimation;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_mAnimation, (int32_t)v32, v34, v35);
  v36 = (ExUITexture_o *)*(p_mAnimation - 7);
  v42 = *((_DWORD *)p_mAnimation - 8);
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v37, v38, v39);
  UIAtlasBySpriteName = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_3133/*"Back/back{0}"*/, v40, 0LL);
  if ( !v36 )
LABEL_48:
    sub_1B8880C(UIAtlasBySpriteName, *(_QWORD *)&eventId);
  ExUITexture__SetAssetImage(v36, (System_String_o *)UIAtlasBySpriteName, onSetupEnd, 0LL);
}


void __fastcall EventRaceResultEffect__Update(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A57EEA & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_EventRaceResultEffect__update__);
    byte_4A57EEA = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30AAE44 *)Method_CStateManager_EventRaceResultEffect__update__);
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
  SimpleAnimation_State_o *v8; // x0
  ServantStatusBattleListViewItem_o *p_fields; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  ServantStatusBattleListViewItem_c *klass; // x20
  _QWORD *image; // x8
  __int64 v14; // x9
  SimpleAnimation_State_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v18; // x21
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  ServantStatusBattleListViewItem_o *p_mAnimState; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  ServantStatusBattleListViewItem_c *v24; // x19
  _QWORD *v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0

  v4 = this;
  if ( (byte_4A57EF2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (EventRaceResultEffect_StatePlay_o *)sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A57EF2 = 1;
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
    v18 = that->fields.mAnimation;
    if ( v18 )
    {
      this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        Item = UnityEngine_Animation__get_Item(v18, name, 0LL);
        v4->fields.mAnimState = Item;
        p_mAnimState = (ServantStatusBattleListViewItem_o *)&v4->fields.mAnimState;
        sub_1B88554(p_mAnimState, (int32_t)Item, v22, v23);
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
    sub_1B8880C(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_35;
  this = (EventRaceResultEffect_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_35;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v8 = SimpleAnimation__get_Item(v6, v7, 0LL);
  v4->fields.mSimpleAnimState = v8;
  p_fields = (ServantStatusBattleListViewItem_o *)&v4->fields;
  sub_1B88554(p_fields, (int32_t)v8, v10, v11);
  this = (EventRaceResultEffect_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_35;
  this = (EventRaceResultEffect_StatePlay_o *)SimpleAnimation__Play((SimpleAnimation_o *)this, 0LL);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_35;
  image = klass->_1.image;
  v14 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v15 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v15 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_15;
    }
    v16 = (__int64)&image[2 * *(_DWORD *)v15 + 51];
  }
  else
  {
LABEL_15:
    v16 = sub_1BDA590(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (EventRaceResultEffect_StatePlay_o *)(*(__int64 (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v16)(
                                                klass,
                                                *(_QWORD *)(v16 + 8),
                                                0.0);
  v24 = p_fields->klass;
  if ( !v24 )
    goto LABEL_35;
  v25 = v24->_1.image;
  v26 = *((unsigned __int16 *)v24->_1.image + 151);
  if ( *((_WORD *)v24->_1.image + 151) )
  {
    v27 = (SimpleAnimation_State_c **)(v25[22] + 8LL);
    while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v26;
      v27 += 2;
      if ( !v26 )
        goto LABEL_32;
    }
    v28 = (__int64)&v25[2 * *(_DWORD *)v27 + 55];
  }
  else
  {
LABEL_32:
    v28 = sub_1BDA590(v24, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v28)(v24, *(_QWORD *)(v28 + 8), 1.0);
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

  if ( (byte_4A57EF3 & 1) == 0 )
  {
    this = (EventRaceResultEffect_StatePlay_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57EF3 = 1;
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
    this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_16:
    sub_1B8880C(this, that);
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
    sub_1B8880C(this, that);
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
  __int64 v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x19
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x2

  if ( (byte_4A57EF4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&CTouch_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventRaceResultEffect_StateTouchWait_update__);
    sub_1B885B0(&Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1B885B0(&EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4A57EF4 = 1;
  }
  v4 = sub_1B887FC(EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v9 = v4 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v9 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v9 + 64LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_GameObject__get_gameObject(isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v10 = Method_EventRaceResultEffect_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventRaceResultEffect_StateTouchWait_update__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1B885C8(Method_EventRaceResultEffect_StateTouchWait_update__);
          v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v13 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v13 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
          v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v15,
            (Il2CppObject *)v4,
            Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v9;
            if ( *(_QWORD *)v9 )
            {
              EventRaceResultEffect__SetState((EventRaceResultEffect_o *)isTouchPush, 0, v16);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1B8880C(isTouchPush, v6);
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
    sub_1B8880C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}