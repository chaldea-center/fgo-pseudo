void EventRaceResultEffect___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5934EE7 & 1) == 0 )
  {
    sub_21FFC50(&EventRaceResultEffect_TypeInfo);
    sub_21FFC50(&StringLiteral_24075/*"raceresults_team_{0}"*/);
    byte_5934EE7 = 1;
  }
  v7 = StringLiteral_24075/*"raceresults_team_{0}"*/;
  EventRaceResultEffect_TypeInfo->static_fields->TEAM_NAME_SP_NAME = (struct System_String_o *)StringLiteral_24075/*"raceresults_team_{0}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventRaceResultEffect_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_5934EDF & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_EventRaceResultEffect___ctor__);
    sub_21FFC50(&Method_CStateManager_EventRaceResultEffect__add__);
    sub_21FFC50(&CStateManager_EventRaceResultEffect__TypeInfo);
    sub_21FFC50(&EventRaceResultEffect_StateNone_TypeInfo);
    sub_21FFC50(&EventRaceResultEffect_StatePlay_TypeInfo);
    sub_21FFC50(&EventRaceResultEffect_StateTouchWait_TypeInfo);
    byte_5934EDF = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_EventRaceResultEffect__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3E505AC *)Method_CStateManager_EventRaceResultEffect___ctor__);
    this->fields.mFSM = (struct CStateManager_EventRaceResultEffect__o *)v4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_21FFEBC(EventRaceResultEffect_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_8;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E5065C *)Method_CStateManager_EventRaceResultEffect__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_21FFEBC(EventRaceResultEffect_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15
      || (CStateManager_object___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_3E5065C *)Method_CStateManager_EventRaceResultEffect__add__),
          v17 = (CStateManager_T__o *)*p_mFSM,
          v18 = (Il2CppObject *)sub_21FFEBC(EventRaceResultEffect_StateTouchWait_TypeInfo),
          System_Object___ctor(v18, 0),
          !v17) )
    {
LABEL_8:
      sub_21FFECC(v13, v14);
    }
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_3E5065C *)Method_CStateManager_EventRaceResultEffect__add__);
    EventRaceResultEffect__SetState(this, 0, v19);
  }
}


int32_t EventRaceResultEffect__GetState(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  EventRaceResultEffect_o *v2; // x19
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x8

  v2 = this;
  if ( (byte_5934EE5 & 1) == 0 )
  {
    this = (EventRaceResultEffect_o *)sub_21FFC50(&Method_CStateManager_EventRaceResultEffect__getState__);
    byte_5934EE5 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(this, method);
  return mFSM->fields.m_state;
}


System_String_o *EventRaceResultEffect__MakeRestDistanceStr(
        EventRaceResultEffect_o *this,
        int64_t restDistance,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  Il2CppObject *v5; // x0
  int64_t v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5934EE3 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5886/*"EVENT_RACE_RESULT_PATH_LENGTH"*/);
    byte_5934EE3 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, restDistance, method);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5886/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, 0);
  v7 = restDistance;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v7);
  return System_String__Format(v4, v5, 0);
}


System_String_o *EventRaceResultEffect__MakeTimeStr(
        EventRaceResultEffect_o *this,
        int64_t utime,
        const MethodInfo *method)
{
  int64_t v4; // x21
  int v5; // w22
  unsigned int v6; // w23
  System_String_o *v7; // x19
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  int v12; // [xsp+Ch] [xbp-44h] BYREF
  unsigned int v13; // [xsp+18h] [xbp-38h] BYREF
  int v14; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_5934EE2 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5891/*"EVENT_RACE_RESULT_TIME_STR"*/);
    byte_5934EE2 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, utime, method);
  v4 = utime / 3600;
  v5 = (int)utime % 60;
  v6 = ((__int16)((unsigned int)(34953 * (utime % 3600)) >> 16) >> 5)
     + ((((unsigned int)(utime % 3600) + ((unsigned int)(-30583 * (utime % 3600)) >> 16)) & 0x8000) >> 15);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5891/*"EVENT_RACE_RESULT_TIME_STR"*/, 0);
  v14 = v4;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v14);
  v13 = v6;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v13);
  v12 = v5;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12);
  return System_String__Format_75484644(v7, v8, v9, v10, 0);
}


void EventRaceResultEffect__Play(EventRaceResultEffect_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct SimpleAnimation_o *mSimpleAnimation; // x8
  UnityEngine_Object_o *m_Clip; // x20
  struct SimpleAnimation_o *v15; // x20
  System_String_o *v16; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v18; // x20
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *name; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x0
  intptr_t *v33; // x8
  const MethodInfo *v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  AvalonSceneManager_c *v37; // x8
  System_Action_o *v38; // x21

  if ( (byte_5934EE4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_EventRaceResultEffect__Play_b__17_0__);
    sub_21FFC50(&Method_EventRaceResultEffect__Play_b__17_1__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_5934EE4 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mEndAct,
    (int32_t)end_act,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  mSimpleAnimation = this->fields.mSimpleAnimation;
  if ( !mSimpleAnimation )
    goto LABEL_33;
  m_Clip = (UnityEngine_Object_o *)mSimpleAnimation->fields.m_Clip;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
    if ( gameObject )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)gameObject, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(clip, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        ActionExtensions__Call(this->fields.mEndAct, 0);
        EventRaceResultEffect__SetState(this, 0, v34);
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
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v30 = AvalonSceneManager_TypeInfo;
            if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v27, v28);
              v30 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
            v32 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            v33 = &Method_EventRaceResultEffect__Play_b__17_1__;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_33:
    sub_21FFECC(gameObject, v11);
  }
  v15 = this->fields.mSimpleAnimation;
  if ( !v15 )
    goto LABEL_33;
  gameObject = (UnityEngine_GameObject_o *)v15->fields.m_Clip;
  if ( !gameObject )
    goto LABEL_33;
  v16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v15, v16, 0);
  if ( !gameObject )
    goto LABEL_33;
  klass = gameObject->klass;
  v18 = gameObject;
  v19 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
  if ( *(_WORD *)&gameObject->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v19;
      p_offset += 2;
      if ( !v19 )
        goto LABEL_15;
    }
    v21 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v21 = sub_2237E2C(gameObject, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, double))v21)(v18, *(_QWORD *)(v21 + 8), 0.0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v37 = AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v35, v36);
    v37 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  v33 = &Method_EventRaceResultEffect__Play_b__17_0__;
LABEL_31:
  v38 = v32;
  System_Action___ctor(v32, (Il2CppObject *)this, *v33, 0);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v38, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRaceResultEffect__SetState(EventRaceResultEffect_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_5934EE6 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_EventRaceResultEffect__setState__);
    byte_5934EE6 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_EventRaceResultEffect__setState__);
}


// local variable allocation has failed, the output may be wrong!
void EventRaceResultEffect__SetUp(
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
  unsigned int v15; // w19
  System_Collections_Generic_List_UIAtlas__o *v16; // x24
  System_String_o *v17; // x25
  Il2CppObject *v18; // x0
  struct UISprite_array *v19; // x8
  System_String_o *v20; // x25
  UISprite_o *v21; // x26
  struct UISprite_array *v22; // x8
  struct UISprite_array *v23; // x8
  const MethodInfo *v24; // x2
  struct UILabel_array *teamTimes; // x8
  UILabel_o *v26; // x25
  UILabel_o *v27; // x25
  const MethodInfo *v28; // x2
  struct UILabel_array *v29; // x8
  Il2CppObject *ComponentInChildren_object__58644924; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *v37; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int v45; // w8
  ExUITexture_o *v46; // x20
  Il2CppObject *v47; // x0
  int v49; // [xsp+8h] [xbp-68h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5934EE1 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_21FFC50(&EventRaceResultEffect_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_11406/*"RACE_TARGET_GOAL_RANK"*/);
    sub_21FFC50(&StringLiteral_3151/*"Back/back{0}"*/);
    byte_5934EE1 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, *(_QWORD *)&eventId, teamIconIds);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  UIAtlasBySpriteName = (UISprite_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, *(_QWORD *)&eventId, teamIconIds);
    UIAtlasBySpriteName = (UISprite_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = UIAtlasBySpriteName->fields.onChange->klass;
  if ( !klass )
    goto LABEL_45;
  v13 = *(_QWORD *)&klass->_2.static_fields_size;
  if ( !v13 )
    goto LABEL_45;
  teams = this->fields.teams;
  if ( !teams )
    goto LABEL_45;
  v15 = 0;
  v16 = *(System_Collections_Generic_List_UIAtlas__o **)(v13 + 304);
  while ( (signed int)v15 < SLODWORD(teams->max_length) )
  {
    UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    if ( !*(&EventRaceResultEffect_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo, *(_QWORD *)&eventId, teamIconIds);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    }
    if ( !teamIconIds )
      goto LABEL_45;
    if ( v15 >= LODWORD(teamIconIds->max_length) )
      goto LABEL_50;
    v17 = (System_String_o *)UIAtlasBySpriteName->fields.onChange->klass;
    v50 = teamIconIds->m_Items[v15];
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v50);
    UIAtlasBySpriteName = (UISprite_o *)System_String__Format(v17, v18, 0);
    v19 = this->fields.teams;
    if ( !v19 )
      goto LABEL_45;
    if ( v15 >= LODWORD(v19->max_length) )
      goto LABEL_50;
    v20 = (System_String_o *)UIAtlasBySpriteName;
    v21 = v19->m_Items[v15];
    UIAtlasBySpriteName = (UISprite_o *)UIAtlas__GetUIAtlasBySpriteName(v16, (System_String_o *)UIAtlasBySpriteName, 0);
    if ( !v21 )
      goto LABEL_45;
    UISprite__set_atlas(v21, (UIAtlas_o *)UIAtlasBySpriteName, 0);
    v22 = this->fields.teams;
    if ( !v22 )
      goto LABEL_45;
    if ( v15 >= LODWORD(v22->max_length) )
      goto LABEL_50;
    UIAtlasBySpriteName = v22->m_Items[v15];
    if ( !UIAtlasBySpriteName )
      goto LABEL_45;
    UISprite__set_spriteName(UIAtlasBySpriteName, v20, 0);
    v23 = this->fields.teams;
    if ( !v23 )
      goto LABEL_45;
    if ( v15 >= LODWORD(v23->max_length) )
      goto LABEL_50;
    UIAtlasBySpriteName = v23->m_Items[v15];
    if ( !UIAtlasBySpriteName )
      goto LABEL_45;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.methodPtr)(
      UIAtlasBySpriteName,
      UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.method);
    UIAtlasBySpriteName = (UISprite_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11406/*"RACE_TARGET_GOAL_RANK"*/, 0);
    teamTimes = this->fields.teamTimes;
    if ( (int)v15 >= (int)UIAtlasBySpriteName )
    {
      if ( !teamTimes )
        goto LABEL_45;
      if ( v15 >= LODWORD(teamTimes->max_length) )
LABEL_50:
        sub_21FFED4(UIAtlasBySpriteName);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
      v27 = teamTimes->m_Items[v15];
      if ( !*(&EventRaceResultEffect_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo, *(_QWORD *)&eventId, v24);
      if ( !v27 )
        goto LABEL_45;
      UILabel__set_fontSize(v27, EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE, 0);
      v29 = this->fields.teamTimes;
      if ( !v29 )
        goto LABEL_45;
      if ( v15 >= LODWORD(v29->max_length) )
        goto LABEL_50;
      if ( !restDistances )
        goto LABEL_45;
      if ( v15 >= LODWORD(restDistances->max_length) )
        goto LABEL_50;
      v26 = v29->m_Items[v15];
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeRestDistanceStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            restDistances->m_Items[v15],
                                            v28);
      if ( !v26 )
        goto LABEL_45;
    }
    else
    {
      if ( !teamTimes )
        goto LABEL_45;
      if ( v15 >= LODWORD(teamTimes->max_length) )
        goto LABEL_50;
      if ( !goalTimes )
        goto LABEL_45;
      if ( v15 >= LODWORD(goalTimes->max_length) )
        goto LABEL_50;
      v26 = teamTimes->m_Items[v15];
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeTimeStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            goalTimes->m_Items[v15],
                                            v24);
      if ( !v26 )
        goto LABEL_45;
    }
    UILabel__set_text(v26, (System_String_o *)UIAtlasBySpriteName, 0);
    teams = this->fields.teams;
    ++v15;
    if ( !teams )
      goto LABEL_45;
  }
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UIAtlasBySpriteName )
    goto LABEL_45;
  ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                           (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                           (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__58644924;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)ComponentInChildren_object__58644924,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UIAtlasBySpriteName )
    goto LABEL_45;
  v37 = UnityEngine_Component__GetComponentInChildren_object__58644924(
          (UnityEngine_Component_o *)UIAtlasBySpriteName,
          (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v37;
  p_mAnimation = &this->fields.mAnimation;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_mAnimation, (int32_t)v37, v39, v40, v41, v42, v43, v44);
  v45 = *((_DWORD *)p_mAnimation - 8);
  v46 = (ExUITexture_o *)*(p_mAnimation - 7);
  v49 = v45;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v49);
  UIAtlasBySpriteName = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_3151/*"Back/back{0}"*/, v47, 0);
  if ( !v46 )
LABEL_45:
    sub_21FFECC(UIAtlasBySpriteName, *(_QWORD *)&eventId);
  ExUITexture__SetAssetImage(v46, (System_String_o *)UIAtlasBySpriteName, onSetupEnd, 0);
}


void EventRaceResultEffect__Update(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_5934EE0 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_EventRaceResultEffect__update__);
    byte_5934EE0 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3E506C4 *)Method_CStateManager_EventRaceResultEffect__update__);
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
  __int64 v6; // x2
  struct SimpleAnimation_o *v7; // x21
  System_String_o *v8; // x0
  SimpleAnimation_State_o *v9; // x0
  MissionNaviTransitionBoardItem_o *p_fields; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_c *klass; // x20
  _QWORD *image; // x8
  __int64 v19; // x9
  SimpleAnimation_State_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v23; // x21
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  MissionNaviTransitionBoardItem_o *p_mAnimState; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  MissionNaviTransitionBoardItem_c *v33; // x19
  _QWORD *v34; // x8
  __int64 v35; // x9
  SimpleAnimation_State_c **v36; // x10
  __int64 v37; // x0

  v4 = this;
  if ( (byte_5934EE8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (EventRaceResultEffect_StatePlay_o *)sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_5934EE8 = 1;
  }
  if ( !that )
    goto LABEL_35;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v6);
    this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v23 = that->fields.mAnimation;
    if ( v23 )
    {
      this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        Item = UnityEngine_Animation__get_Item(v23, name, 0);
        v4->fields.mAnimState = Item;
        p_mAnimState = (MissionNaviTransitionBoardItem_o *)&v4->fields.mAnimState;
        sub_21FFBF4(p_mAnimState, (int32_t)Item, v27, v28, v29, v30, v31, v32);
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
    sub_21FFECC(this, that);
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_35;
  this = (EventRaceResultEffect_StatePlay_o *)v7->fields.m_Clip;
  if ( !this )
    goto LABEL_35;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  v9 = SimpleAnimation__get_Item(v7, v8, 0);
  v4->fields.mSimpleAnimState = v9;
  p_fields = (MissionNaviTransitionBoardItem_o *)&v4->fields;
  sub_21FFBF4(p_fields, (int32_t)v9, v11, v12, v13, v14, v15, v16);
  this = (EventRaceResultEffect_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_35;
  this = (EventRaceResultEffect_StatePlay_o *)SimpleAnimation__Play((SimpleAnimation_o *)this, 0);
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
    v21 = sub_2237E2C(p_fields->klass, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (EventRaceResultEffect_StatePlay_o *)(*(__int64 (__fastcall **)(MissionNaviTransitionBoardItem_c *, _QWORD, double))v21)(
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
    v37 = sub_2237E2C(v33, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(MissionNaviTransitionBoardItem_c *, _QWORD, float))v37)(v33, *(_QWORD *)(v37 + 8), 1.0);
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

  if ( (byte_5934EE9 & 1) == 0 )
  {
    this = (EventRaceResultEffect_StatePlay_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5934EE9 = 1;
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
    this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_16:
    sub_21FFECC(this, that);
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
    sub_21FFECC(this, that);
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
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x2

  if ( (byte_5934EEA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventRaceResultEffect_StateTouchWait_update__);
    sub_21FFC50(&Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_21FFC50(&EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_5934EEA = 1;
  }
  v4 = sub_21FFEBC(EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14, v15);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v13 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 64LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_GameObject__get_gameObject(isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v16 = Method_EventRaceResultEffect_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventRaceResultEffect_StateTouchWait_update__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_21FFC68(Method_EventRaceResultEffect_StateTouchWait_update__);
          v17 = (System_Reflection_MethodBase_o *)sub_21FFC34(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = AvalonSceneManager_TypeInfo;
          if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v18, v19);
            v21 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
          v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v23,
            (Il2CppObject *)v4,
            Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v23, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v13;
            if ( *(_QWORD *)v13 )
            {
              EventRaceResultEffect__SetState((EventRaceResultEffect_o *)isTouchPush, 0, v24);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_21FFECC(isTouchPush, v6);
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
    sub_21FFECC(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0);
}