void EventRaceResultEffect___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C3F9F9 & 1) == 0 )
  {
    sub_1C37058(&EventRaceResultEffect_TypeInfo);
    sub_1C37058(&StringLiteral_22930/*"raceresults_team_{0}"*/);
    byte_4C3F9F9 = 1;
  }
  EventRaceResultEffect_TypeInfo->static_fields->TEAM_NAME_SP_NAME = (struct System_String_o *)StringLiteral_22930/*"raceresults_team_{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)EventRaceResultEffect_TypeInfo->static_fields, StringLiteral_22930/*"raceresults_team_{0}"*/, v1, v2);
  EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE = 16;
}


void EventRaceResultEffect___ctor(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRaceResultEffect__Awake(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  struct CStateManager_EventRaceResultEffect__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  CStateManager_T__o *v10; // x21
  Il2CppObject *v11; // x22
  CStateManager_T__o *v12; // x20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4C3F9F1 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_EventRaceResultEffect___ctor__);
    sub_1C37058(&Method_CStateManager_EventRaceResultEffect__add__);
    sub_1C37058(&CStateManager_EventRaceResultEffect__TypeInfo);
    sub_1C37058(&EventRaceResultEffect_StateNone_TypeInfo);
    sub_1C37058(&EventRaceResultEffect_StatePlay_TypeInfo);
    sub_1C37058(&EventRaceResultEffect_StateTouchWait_TypeInfo);
    byte_4C3F9F1 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C372A4(CStateManager_EventRaceResultEffect__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_332CF70 *)Method_CStateManager_EventRaceResultEffect___ctor__);
    this->fields.mFSM = (struct CStateManager_EventRaceResultEffect__o *)v4;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1C372A4(EventRaceResultEffect_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !mFSM )
      goto LABEL_8;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_332D018 *)Method_CStateManager_EventRaceResultEffect__add__);
    v10 = (CStateManager_T__o *)*p_mFSM;
    v11 = (Il2CppObject *)sub_1C372A4(EventRaceResultEffect_StatePlay_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !v10
      || (CStateManager_object___add(
            v10,
            1,
            (IState_T__o *)v11,
            (const MethodInfo_332D018 *)Method_CStateManager_EventRaceResultEffect__add__),
          v12 = (CStateManager_T__o *)*p_mFSM,
          v13 = (Il2CppObject *)sub_1C372A4(EventRaceResultEffect_StateTouchWait_TypeInfo),
          System_Object___ctor(v13, 0),
          !v12) )
    {
LABEL_8:
      sub_1C372B4(v9);
    }
    CStateManager_object___add(
      v12,
      2,
      (IState_T__o *)v13,
      (const MethodInfo_332D018 *)Method_CStateManager_EventRaceResultEffect__add__);
    EventRaceResultEffect__SetState(this, 0, v14);
  }
}


int32_t EventRaceResultEffect__GetState(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  EventRaceResultEffect_o *v2; // x19
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C3F9F7 & 1) == 0 )
  {
    this = (EventRaceResultEffect_o *)sub_1C37058(&Method_CStateManager_EventRaceResultEffect__getState__);
    byte_4C3F9F7 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(this);
  return mFSM->fields.m_state;
}


System_String_o *EventRaceResultEffect__MakeRestDistanceStr(
        EventRaceResultEffect_o *this,
        int64_t restDistance,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  Il2CppObject *v11; // x0
  int64_t v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3F9F5 & 1) == 0 )
  {
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_5667/*"EVENT_RACE_RESULT_PATH_LENGTH"*/);
    byte_4C3F9F5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, 0);
  v13 = restDistance;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13, v5, v6, v7, v8, v9, v10);
  return System_String__Format(v4, v11, 0);
}


System_String_o *EventRaceResultEffect__MakeTimeStr(
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
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x0
  int v30; // [xsp+Ch] [xbp-44h] BYREF
  int v31; // [xsp+18h] [xbp-38h] BYREF
  int v32; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C3F9F4 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_5672/*"EVENT_RACE_RESULT_TIME_STR"*/);
    byte_4C3F9F4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = utime / 3600;
  v5 = (int)utime % 60;
  v6 = utime % 3600 / 60;
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5672/*"EVENT_RACE_RESULT_TIME_STR"*/, 0);
  v32 = v4;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v8, v9, v10, v11, v12, v13);
  v31 = v6;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v15, v16, v17, v18, v19, v20);
  v30 = v5;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v22, v23, v24, v25, v26, v27);
  return System_String__Format_63603016(v7, v14, v21, v28, 0);
}


void EventRaceResultEffect__Play(EventRaceResultEffect_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct SimpleAnimation_o *mSimpleAnimation; // x8
  UnityEngine_Object_o *m_Clip; // x20
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *name; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x0
  intptr_t *v23; // x8
  const MethodInfo *v24; // x2
  AvalonSceneManager_c *v25; // x8
  System_Action_o *v26; // x21

  if ( (byte_4C3F9F6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_EventRaceResultEffect__Play_b__17_0__);
    sub_1C37058(&Method_EventRaceResultEffect__Play_b__17_1__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3F9F6 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEndAct, (int32_t)end_act, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  mSimpleAnimation = this->fields.mSimpleAnimation;
  if ( !mSimpleAnimation )
    goto LABEL_33;
  m_Clip = (UnityEngine_Object_o *)mSimpleAnimation->fields.m_Clip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
    if ( gameObject )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)gameObject, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(clip, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        ActionExtensions__Call(this->fields.mEndAct, 0);
        EventRaceResultEffect__SetState(this, 0, v24);
        return;
      }
      mAnimation = this->fields.mAnimation;
      if ( mAnimation )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
        if ( gameObject )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(mAnimation, name, 0);
          if ( gameObject )
          {
            UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v20 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v20 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
            v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            v23 = &Method_EventRaceResultEffect__Play_b__17_1__;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_33:
    sub_1C372B4(gameObject);
  }
  v9 = this->fields.mSimpleAnimation;
  if ( !v9 )
    goto LABEL_33;
  gameObject = (UnityEngine_GameObject_o *)v9->fields.m_Clip;
  if ( !gameObject )
    goto LABEL_33;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v9, v10, 0);
  if ( !gameObject )
    goto LABEL_33;
  klass = gameObject->klass;
  v12 = gameObject;
  v13 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
  if ( *(_WORD *)&gameObject->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_15;
    }
    v15 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v15 = sub_1C87870(gameObject, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v15)(v12, *(_QWORD *)(v15 + 8), 0.0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  v23 = &Method_EventRaceResultEffect__Play_b__17_0__;
LABEL_31:
  v26 = v22;
  System_Action___ctor(v22, (Il2CppObject *)this, *v23, 0);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v26, 0);
}


void EventRaceResultEffect__SetState(EventRaceResultEffect_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C3F9F8 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_EventRaceResultEffect__setState__);
    byte_4C3F9F8 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(0);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_EventRaceResultEffect__setState__);
}


void EventRaceResultEffect__SetUp(
        EventRaceResultEffect_o *this,
        int32_t eventId,
        System_Int32_array *teamIconIds,
        System_Int64_array *goalTimes,
        System_Int64_array *restDistances,
        System_Action_o *onSetupEnd,
        const MethodInfo *method)
{
  __int64 v7; // x7
  UISprite_o *UIAtlasBySpriteName; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v14; // x9
  struct UISprite_array *teams; // x8
  System_Collections_Generic_List_UIAtlas__o *v16; // x24
  __int64 v17; // x29
  System_String_o *v18; // x25
  Il2CppObject *v19; // x0
  struct UISprite_array *v20; // x8
  UISprite_o *v21; // x26
  System_String_o *v22; // x25
  struct UISprite_array *v23; // x8
  struct UISprite_array *v24; // x8
  const MethodInfo *v25; // x2
  struct UILabel_array *teamTimes; // x8
  UILabel_o *v27; // x25
  const MethodInfo *v28; // x2
  struct UILabel_array *v29; // x8
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  ExUITexture_o *v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  Il2CppObject *v44; // x0
  int v46; // [xsp+18h] [xbp-68h] BYREF
  int32_t v47; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C3F9F3 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C37058(&EventRaceResultEffect_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&StringLiteral_10949/*"RACE_TARGET_GOAL_RANK"*/);
    sub_1C37058(&StringLiteral_3032/*"Back/back{0}"*/);
    byte_4C3F9F3 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
  v14 = *(_QWORD *)&klass->_2.static_fields_size;
  if ( !v14 )
    goto LABEL_48;
  teams = this->fields.teams;
  if ( !teams )
    goto LABEL_48;
  v16 = *(System_Collections_Generic_List_UIAtlas__o **)(v14 + 304);
  v17 = 0;
  while ( (int)v17 < SLODWORD(teams->max_length) )
  {
    UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    if ( !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    }
    if ( !teamIconIds )
      goto LABEL_48;
    if ( (unsigned int)v17 >= LODWORD(teamIconIds->max_length) )
      goto LABEL_49;
    v18 = (System_String_o *)UIAtlasBySpriteName->fields.onChange->klass;
    v47 = teamIconIds->m_Items[v17];
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(
                            int_TypeInfo,
                            &v47,
                            teamIconIds,
                            goalTimes,
                            restDistances,
                            onSetupEnd,
                            method,
                            v7);
    UIAtlasBySpriteName = (UISprite_o *)System_String__Format(v18, v19, 0);
    v20 = this->fields.teams;
    if ( !v20 )
      goto LABEL_48;
    if ( (unsigned int)v17 >= LODWORD(v20->max_length) )
      goto LABEL_49;
    v21 = v20->m_Items[v17];
    v22 = (System_String_o *)UIAtlasBySpriteName;
    UIAtlasBySpriteName = (UISprite_o *)UIAtlas__GetUIAtlasBySpriteName(v16, (System_String_o *)UIAtlasBySpriteName, 0);
    if ( !v21 )
      goto LABEL_48;
    UISprite__set_atlas(v21, (UIAtlas_o *)UIAtlasBySpriteName, 0);
    v23 = this->fields.teams;
    if ( !v23 )
      goto LABEL_48;
    if ( (unsigned int)v17 >= LODWORD(v23->max_length) )
      goto LABEL_49;
    UIAtlasBySpriteName = v23->m_Items[v17];
    if ( !UIAtlasBySpriteName )
      goto LABEL_48;
    UISprite__set_spriteName(UIAtlasBySpriteName, v22, 0);
    v24 = this->fields.teams;
    if ( !v24 )
      goto LABEL_48;
    if ( (unsigned int)v17 >= LODWORD(v24->max_length) )
      goto LABEL_49;
    UIAtlasBySpriteName = v24->m_Items[v17];
    if ( !UIAtlasBySpriteName )
      goto LABEL_48;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.methodPtr)(
      UIAtlasBySpriteName,
      UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.method);
    UIAtlasBySpriteName = (UISprite_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_10949/*"RACE_TARGET_GOAL_RANK"*/, 0);
    teamTimes = this->fields.teamTimes;
    if ( !teamTimes )
      goto LABEL_48;
    if ( (unsigned int)v17 >= LODWORD(teamTimes->max_length) )
      goto LABEL_49;
    v27 = teamTimes->m_Items[v17];
    if ( (int)v17 >= (int)UIAtlasBySpriteName )
    {
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
      if ( !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      if ( !v27 )
        goto LABEL_48;
      UILabel__set_fontSize(v27, EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE, 0);
      v29 = this->fields.teamTimes;
      if ( !v29 )
        goto LABEL_48;
      if ( (unsigned int)v17 >= LODWORD(v29->max_length) )
        goto LABEL_49;
      if ( !restDistances )
        goto LABEL_48;
      if ( (unsigned int)v17 >= LODWORD(restDistances->max_length) )
        goto LABEL_49;
      v27 = v29->m_Items[v17];
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeRestDistanceStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            restDistances->m_Items[v17],
                                            v28);
      if ( !v27 )
        goto LABEL_48;
    }
    else
    {
      if ( !goalTimes )
        goto LABEL_48;
      if ( (unsigned int)v17 >= LODWORD(goalTimes->max_length) )
LABEL_49:
        sub_1C372BC(UIAtlasBySpriteName);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeTimeStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            goalTimes->m_Items[v17],
                                            v25);
      if ( !v27 )
        goto LABEL_48;
    }
    UILabel__set_text(v27, (System_String_o *)UIAtlasBySpriteName, 0);
    teams = this->fields.teams;
    ++v17;
    if ( !teams )
      goto LABEL_48;
  }
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UIAtlasBySpriteName )
    goto LABEL_48;
  ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                           (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                           (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__51242636;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)ComponentInChildren_object__51242636,
    v31,
    v32);
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UIAtlasBySpriteName )
    goto LABEL_48;
  v33 = UnityEngine_Component__GetComponentInChildren_object__51242636(
          (UnityEngine_Component_o *)UIAtlasBySpriteName,
          (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v33;
  p_mAnimation = &this->fields.mAnimation;
  sub_1C36FFC((CGThumbnailListItem_o *)p_mAnimation, (int32_t)v33, v35, v36);
  v37 = (ExUITexture_o *)*(p_mAnimation - 7);
  v46 = *((_DWORD *)p_mAnimation - 8);
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v38, v39, v40, v41, v42, v43);
  UIAtlasBySpriteName = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_3032/*"Back/back{0}"*/, v44, 0);
  if ( !v37 )
LABEL_48:
    sub_1C372B4(UIAtlasBySpriteName);
  ExUITexture__SetAssetImage(v37, (System_String_o *)UIAtlasBySpriteName, onSetupEnd, 0);
}


void EventRaceResultEffect__Update(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C3F9F2 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_EventRaceResultEffect__update__);
    byte_4C3F9F2 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_332D080 *)Method_CStateManager_EventRaceResultEffect__update__);
}


void EventRaceResultEffect___Play_b__17_0(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventRaceResultEffect__SetState(this, 1, v2);
}


void EventRaceResultEffect___Play_b__17_1(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventRaceResultEffect__SetState(this, 1, v2);
}


void EventRaceResultEffect_StateNone___ctor(EventRaceResultEffect_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRaceResultEffect_StateNone__begin(
        EventRaceResultEffect_StateNone_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  ;
}


void EventRaceResultEffect_StateNone__end(
        EventRaceResultEffect_StateNone_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  ;
}


void EventRaceResultEffect_StateNone__update(
        EventRaceResultEffect_StateNone_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  ;
}


void EventRaceResultEffect_StatePlay___ctor(EventRaceResultEffect_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRaceResultEffect_StatePlay__begin(
        EventRaceResultEffect_StatePlay_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  EventRaceResultEffect_StatePlay_o *v4; // x19
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v6; // x21
  System_String_o *v7; // x0
  SimpleAnimation_State_o *v8; // x0
  CGThumbnailListItem_o *p_fields; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CGThumbnailListItem_c *klass; // x20
  _QWORD *image; // x8
  __int64 v14; // x9
  SimpleAnimation_State_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v18; // x21
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  CGThumbnailListItem_o *p_mAnimState; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  CGThumbnailListItem_c *v24; // x19
  _QWORD *v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0

  v4 = this;
  if ( (byte_4C3F9FA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (EventRaceResultEffect_StatePlay_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3F9FA = 1;
  }
  if ( !that )
    goto LABEL_35;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v18 = that->fields.mAnimation;
    if ( v18 )
    {
      this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        Item = UnityEngine_Animation__get_Item(v18, name, 0);
        v4->fields.mAnimState = Item;
        p_mAnimState = (CGThumbnailListItem_o *)&v4->fields.mAnimState;
        sub_1C36FFC(p_mAnimState, (int32_t)Item, v22, v23);
        this = (EventRaceResultEffect_StatePlay_o *)that->fields.mAnimation;
        if ( this )
        {
          UnityEngine_Animation__Play((UnityEngine_Animation_o *)this, 0);
          this = (EventRaceResultEffect_StatePlay_o *)p_mAnimState->klass;
          if ( p_mAnimState->klass )
          {
            UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
            this = (EventRaceResultEffect_StatePlay_o *)p_mAnimState->klass;
            if ( p_mAnimState->klass )
            {
              UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1C372B4(this);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_35;
  this = (EventRaceResultEffect_StatePlay_o *)v6->fields.m_Clip;
  if ( !this )
    goto LABEL_35;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  v8 = SimpleAnimation__get_Item(v6, v7, 0);
  v4->fields.mSimpleAnimState = v8;
  p_fields = (CGThumbnailListItem_o *)&v4->fields;
  sub_1C36FFC(p_fields, (int32_t)v8, v10, v11);
  this = (EventRaceResultEffect_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_35;
  this = (EventRaceResultEffect_StatePlay_o *)SimpleAnimation__Play((SimpleAnimation_o *)this, 0);
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
    v16 = sub_1C87870(p_fields->klass, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (EventRaceResultEffect_StatePlay_o *)(*(__int64 (__fastcall **)(CGThumbnailListItem_c *, _QWORD, float))v16)(
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
    v28 = sub_1C87870(v24, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(CGThumbnailListItem_c *, _QWORD, float))v28)(v24, *(_QWORD *)(v28 + 8), 1.0);
}


void EventRaceResultEffect_StatePlay__end(
        EventRaceResultEffect_StatePlay_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  ;
}


void EventRaceResultEffect_StatePlay__update(
        EventRaceResultEffect_StatePlay_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  struct SimpleAnimation_o *mSimpleAnimation; // x20
  System_String_o *name; // x0
  const MethodInfo *v6; // x2
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *v8; // x0

  if ( (byte_4C3F9FB & 1) == 0 )
  {
    this = (EventRaceResultEffect_StatePlay_o *)sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F9FB = 1;
  }
  if ( !that )
    goto LABEL_16;
  mSimpleAnimation = that->fields.mSimpleAnimation;
  if ( !mSimpleAnimation )
    goto LABEL_16;
  this = (EventRaceResultEffect_StatePlay_o *)mSimpleAnimation->fields.m_Clip;
  if ( !this )
    goto LABEL_16;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (EventRaceResultEffect_StatePlay_o *)SimpleAnimation__IsPlaying(mSimpleAnimation, name, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_16;
    this = (EventRaceResultEffect_StatePlay_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0);
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
  this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
  if ( !this )
    goto LABEL_16;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( UnityEngine_Animation__IsPlaying(mAnimation, v8, 0) )
    return;
  this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_16:
    sub_1C372B4(this);
  if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
    goto LABEL_15;
}


void EventRaceResultEffect_StateTouchWait___ctor(
        EventRaceResultEffect_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRaceResultEffect_StateTouchWait__begin(
        EventRaceResultEffect_StateTouchWait_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  if ( !that || (this = (EventRaceResultEffect_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0 )
    sub_1C372B4(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void EventRaceResultEffect_StateTouchWait__end(
        EventRaceResultEffect_StateTouchWait_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  ;
}


void EventRaceResultEffect_StateTouchWait__update(
        EventRaceResultEffect_StateTouchWait_o *this,
        EventRaceResultEffect_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x19
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x2

  if ( (byte_4C3F9FC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_EventRaceResultEffect_StateTouchWait_update__);
    sub_1C37058(&Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C37058(&EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4C3F9FC = 1;
  }
  v4 = sub_1C372A4(EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v8 = v4 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v8 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v8 + 64LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_GameObject__get_gameObject(isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v9 = Method_EventRaceResultEffect_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventRaceResultEffect_StateTouchWait_update__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1C37070(Method_EventRaceResultEffect_StateTouchWait_update__);
          v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v12 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v12 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
          v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v14,
            (Il2CppObject *)v4,
            Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v14, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v8;
            if ( *(_QWORD *)v8 )
            {
              EventRaceResultEffect__SetState((EventRaceResultEffect_o *)isTouchPush, 0, v15);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C372B4(isTouchPush);
  }
}


void EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0___ctor(
        EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0___update_b__0(
        EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct EventRaceResultEffect_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(this);
  ActionExtensions__Call(that->fields.mEndAct, 0);
}