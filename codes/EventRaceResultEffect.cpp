void EventRaceResultEffect___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D291CB & 1) == 0 )
  {
    sub_1C94098(&EventRaceResultEffect_TypeInfo);
    sub_1C94098(&StringLiteral_23155/*"raceresults_team_{0}"*/);
    byte_4D291CB = 1;
  }
  EventRaceResultEffect_TypeInfo->static_fields->TEAM_NAME_SP_NAME = (struct System_String_o *)StringLiteral_23155/*"raceresults_team_{0}"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventRaceResultEffect_TypeInfo->static_fields,
    StringLiteral_23155/*"raceresults_team_{0}"*/,
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_4D291C3 & 1) == 0 )
  {
    sub_1C94098(&Method_CStateManager_EventRaceResultEffect___ctor__);
    sub_1C94098(&Method_CStateManager_EventRaceResultEffect__add__);
    sub_1C94098(&CStateManager_EventRaceResultEffect__TypeInfo);
    sub_1C94098(&EventRaceResultEffect_StateNone_TypeInfo);
    sub_1C94098(&EventRaceResultEffect_StatePlay_TypeInfo);
    sub_1C94098(&EventRaceResultEffect_StateTouchWait_TypeInfo);
    byte_4D291C3 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C942E4(CStateManager_EventRaceResultEffect__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_33E65C4 *)Method_CStateManager_EventRaceResultEffect___ctor__);
    this->fields.mFSM = (struct CStateManager_EventRaceResultEffect__o *)v4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_1C942E4(EventRaceResultEffect_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_8;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_33E666C *)Method_CStateManager_EventRaceResultEffect__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_1C942E4(EventRaceResultEffect_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15
      || (CStateManager_object___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_33E666C *)Method_CStateManager_EventRaceResultEffect__add__),
          v17 = (CStateManager_T__o *)*p_mFSM,
          v18 = (Il2CppObject *)sub_1C942E4(EventRaceResultEffect_StateTouchWait_TypeInfo),
          System_Object___ctor(v18, 0),
          !v17) )
    {
LABEL_8:
      sub_1C942F0(v13, v14);
    }
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_33E666C *)Method_CStateManager_EventRaceResultEffect__add__);
    EventRaceResultEffect__SetState(this, 0, v19);
  }
}


int32_t EventRaceResultEffect__GetState(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  EventRaceResultEffect_o *v2; // x19
  struct CStateManager_EventRaceResultEffect__o *mFSM; // x8

  v2 = this;
  if ( (byte_4D291C9 & 1) == 0 )
  {
    this = (EventRaceResultEffect_o *)sub_1C94098(&Method_CStateManager_EventRaceResultEffect__getState__);
    byte_4D291C9 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C942F0(this, method);
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

  if ( (byte_4D291C7 & 1) == 0 )
  {
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_5671/*"EVENT_RACE_RESULT_PATH_LENGTH"*/);
    byte_4D291C7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5671/*"EVENT_RACE_RESULT_PATH_LENGTH"*/, 0);
  v7 = restDistance;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v7);
  return System_String__Format(v4, v5, 0);
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
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  int v12; // [xsp+Ch] [xbp-44h] BYREF
  int v13; // [xsp+18h] [xbp-38h] BYREF
  int v14; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4D291C6 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_5676/*"EVENT_RACE_RESULT_TIME_STR"*/);
    byte_4D291C6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = utime / 3600;
  v5 = (int)utime % 60;
  v6 = utime % 3600 / 60;
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5676/*"EVENT_RACE_RESULT_TIME_STR"*/, 0);
  v14 = v4;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = v6;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v12 = v5;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format_64459120(v7, v8, v9, v10, 0);
}


void EventRaceResultEffect__Play(EventRaceResultEffect_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  struct SimpleAnimation_o *mSimpleAnimation; // x8
  UnityEngine_Object_o *m_Clip; // x20
  struct SimpleAnimation_o *v14; // x20
  System_String_o *v15; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v17; // x20
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *mAnimation; // x20
  System_String_o *name; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x0
  intptr_t *v28; // x8
  const MethodInfo *v29; // x2
  AvalonSceneManager_c *v30; // x8
  System_Action_o *v31; // x21

  if ( (byte_4D291C8 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_EventRaceResultEffect__Play_b__17_0__);
    sub_1C94098(&Method_EventRaceResultEffect__Play_b__17_1__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    byte_4D291C8 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mEndAct,
    (int32_t)end_act,
    (int32_t)method,
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
        EventRaceResultEffect__SetState(this, 0, v29);
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
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v25 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v25 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
            v27 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
            v28 = &Method_EventRaceResultEffect__Play_b__17_1__;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_33:
    sub_1C942F0(gameObject, v11);
  }
  v14 = this->fields.mSimpleAnimation;
  if ( !v14 )
    goto LABEL_33;
  gameObject = (UnityEngine_GameObject_o *)v14->fields.m_Clip;
  if ( !gameObject )
    goto LABEL_33;
  v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v14, v15, 0);
  if ( !gameObject )
    goto LABEL_33;
  klass = gameObject->klass;
  v17 = gameObject;
  v18 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
  if ( *(_WORD *)&gameObject->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v18;
      p_offset += 2;
      if ( !v18 )
        goto LABEL_15;
    }
    v20 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v20 = sub_1C6A420(gameObject, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v20)(v17, *(_QWORD *)(v20 + 8), 0.0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v30 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  v28 = &Method_EventRaceResultEffect__Play_b__17_0__;
LABEL_31:
  v31 = v27;
  System_Action___ctor(v27, (Il2CppObject *)this, *v28, 0);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v31, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRaceResultEffect__SetState(EventRaceResultEffect_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D291CA & 1) == 0 )
  {
    sub_1C94098(&Method_CStateManager_EventRaceResultEffect__setState__);
    byte_4D291CA = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C942F0(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_33E66F8 *)Method_CStateManager_EventRaceResultEffect__setState__);
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
  Il2CppObject *ComponentInChildren_object__51981160; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  Il2CppObject *v36; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  ExUITexture_o *v44; // x21
  Il2CppObject *v45; // x0
  int v47; // [xsp+18h] [xbp-68h] BYREF
  int32_t v48; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4D291C5 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C94098(&EventRaceResultEffect_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    sub_1C94098(&StringLiteral_10990/*"RACE_TARGET_GOAL_RANK"*/);
    sub_1C94098(&StringLiteral_3033/*"Back/back{0}"*/);
    byte_4D291C5 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D264E4 )
  {
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D264E4 = 1;
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
  v13 = *(_QWORD *)&klass->_2.static_fields_size;
  if ( !v13 )
    goto LABEL_48;
  teams = this->fields.teams;
  if ( !teams )
    goto LABEL_48;
  v15 = *(System_Collections_Generic_List_UIAtlas__o **)(v13 + 304);
  v16 = 0;
  while ( (int)v16 < SLODWORD(teams->max_length) )
  {
    UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    if ( !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
    }
    if ( !teamIconIds )
      goto LABEL_48;
    if ( (unsigned int)v16 >= LODWORD(teamIconIds->max_length) )
      goto LABEL_49;
    v17 = (System_String_o *)UIAtlasBySpriteName->fields.onChange->klass;
    v48 = teamIconIds->m_Items[v16];
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    UIAtlasBySpriteName = (UISprite_o *)System_String__Format(v17, v18, 0);
    v19 = this->fields.teams;
    if ( !v19 )
      goto LABEL_48;
    if ( (unsigned int)v16 >= LODWORD(v19->max_length) )
      goto LABEL_49;
    v20 = v19->m_Items[v16];
    v21 = (System_String_o *)UIAtlasBySpriteName;
    UIAtlasBySpriteName = (UISprite_o *)UIAtlas__GetUIAtlasBySpriteName(v15, (System_String_o *)UIAtlasBySpriteName, 0);
    if ( !v20 )
      goto LABEL_48;
    UISprite__set_atlas(v20, (UIAtlas_o *)UIAtlasBySpriteName, 0);
    v22 = this->fields.teams;
    if ( !v22 )
      goto LABEL_48;
    if ( (unsigned int)v16 >= LODWORD(v22->max_length) )
      goto LABEL_49;
    UIAtlasBySpriteName = v22->m_Items[v16];
    if ( !UIAtlasBySpriteName )
      goto LABEL_48;
    UISprite__set_spriteName(UIAtlasBySpriteName, v21, 0);
    v23 = this->fields.teams;
    if ( !v23 )
      goto LABEL_48;
    if ( (unsigned int)v16 >= LODWORD(v23->max_length) )
      goto LABEL_49;
    UIAtlasBySpriteName = v23->m_Items[v16];
    if ( !UIAtlasBySpriteName )
      goto LABEL_48;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.methodPtr)(
      UIAtlasBySpriteName,
      UIAtlasBySpriteName->klass->vtable._33_MakePixelPerfect.method);
    UIAtlasBySpriteName = (UISprite_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_10990/*"RACE_TARGET_GOAL_RANK"*/, 0);
    teamTimes = this->fields.teamTimes;
    if ( !teamTimes )
      goto LABEL_48;
    if ( (unsigned int)v16 >= LODWORD(teamTimes->max_length) )
      goto LABEL_49;
    v26 = teamTimes->m_Items[v16];
    if ( (int)v16 >= (int)UIAtlasBySpriteName )
    {
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect_TypeInfo;
      if ( !EventRaceResultEffect_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRaceResultEffect_TypeInfo);
      if ( !v26 )
        goto LABEL_48;
      UILabel__set_fontSize(v26, EventRaceResultEffect_TypeInfo->static_fields->REST_DISTANCE_FONT_SIZE, 0);
      v28 = this->fields.teamTimes;
      if ( !v28 )
        goto LABEL_48;
      if ( (unsigned int)v16 >= LODWORD(v28->max_length) )
        goto LABEL_49;
      if ( !restDistances )
        goto LABEL_48;
      if ( (unsigned int)v16 >= LODWORD(restDistances->max_length) )
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
      if ( (unsigned int)v16 >= LODWORD(goalTimes->max_length) )
LABEL_49:
        sub_1C942F8(UIAtlasBySpriteName);
      UIAtlasBySpriteName = (UISprite_o *)EventRaceResultEffect__MakeTimeStr(
                                            (EventRaceResultEffect_o *)UIAtlasBySpriteName,
                                            goalTimes->m_Items[v16],
                                            v24);
      if ( !v26 )
        goto LABEL_48;
    }
    UILabel__set_text(v26, (System_String_o *)UIAtlasBySpriteName, 0);
    teams = this->fields.teams;
    ++v16;
    if ( !teams )
      goto LABEL_48;
  }
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UIAtlasBySpriteName )
    goto LABEL_48;
  ComponentInChildren_object__51981160 = UnityEngine_Component__GetComponentInChildren_object__51981160(
                                           (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                           (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__51981160;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)ComponentInChildren_object__51981160,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  UIAtlasBySpriteName = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UIAtlasBySpriteName )
    goto LABEL_48;
  v36 = UnityEngine_Component__GetComponentInChildren_object__51981160(
          (UnityEngine_Component_o *)UIAtlasBySpriteName,
          (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v36;
  p_mAnimation = &this->fields.mAnimation;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_mAnimation, (int32_t)v36, v38, v39, v40, v41, v42, v43);
  v44 = (ExUITexture_o *)*(p_mAnimation - 7);
  v47 = *((_DWORD *)p_mAnimation - 8);
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  UIAtlasBySpriteName = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_3033/*"Back/back{0}"*/, v45, 0);
  if ( !v44 )
LABEL_48:
    sub_1C942F0(UIAtlasBySpriteName, *(_QWORD *)&eventId);
  ExUITexture__SetAssetImage(v44, (System_String_o *)UIAtlasBySpriteName, onSetupEnd, 0);
}


void EventRaceResultEffect__Update(EventRaceResultEffect_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D291C4 & 1) == 0 )
  {
    sub_1C94098(&Method_CStateManager_EventRaceResultEffect__update__);
    byte_4D291C4 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_33E66D4 *)Method_CStateManager_EventRaceResultEffect__update__);
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
  GrandQuestFolderBoardItem_o *p_fields; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  GrandQuestFolderBoardItem_c *klass; // x20
  _QWORD *image; // x8
  __int64 v18; // x9
  SimpleAnimation_State_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v22; // x21
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  GrandQuestFolderBoardItem_o *p_mAnimState; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  GrandQuestFolderBoardItem_c *v32; // x19
  _QWORD *v33; // x8
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0

  v4 = this;
  if ( (byte_4D291CC & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (EventRaceResultEffect_StatePlay_o *)sub_1C94098(&SimpleAnimation_State_TypeInfo);
    byte_4D291CC = 1;
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
    v22 = that->fields.mAnimation;
    if ( v22 )
    {
      this = (EventRaceResultEffect_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        Item = UnityEngine_Animation__get_Item(v22, name, 0);
        v4->fields.mAnimState = Item;
        p_mAnimState = (GrandQuestFolderBoardItem_o *)&v4->fields.mAnimState;
        sub_1C9403C(p_mAnimState, (int32_t)Item, v26, v27, v28, v29, v30, v31);
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
    sub_1C942F0(this, that);
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
  p_fields = (GrandQuestFolderBoardItem_o *)&v4->fields;
  sub_1C9403C(p_fields, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  this = (EventRaceResultEffect_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_35;
  this = (EventRaceResultEffect_StatePlay_o *)SimpleAnimation__Play((SimpleAnimation_o *)this, 0);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_35;
  image = klass->_1.image;
  v18 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v19 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v19 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_15;
    }
    v20 = (__int64)&image[2 * *(_DWORD *)v19 + 51];
  }
  else
  {
LABEL_15:
    v20 = sub_1C6A420(p_fields->klass, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (EventRaceResultEffect_StatePlay_o *)(*(__int64 (__fastcall **)(GrandQuestFolderBoardItem_c *, _QWORD, float))v20)(
                                                klass,
                                                *(_QWORD *)(v20 + 8),
                                                0.0);
  v32 = p_fields->klass;
  if ( !v32 )
    goto LABEL_35;
  v33 = v32->_1.image;
  v34 = *((unsigned __int16 *)v32->_1.image + 151);
  if ( *((_WORD *)v32->_1.image + 151) )
  {
    v35 = (SimpleAnimation_State_c **)(v33[22] + 8LL);
    while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v34;
      v35 += 2;
      if ( !v34 )
        goto LABEL_32;
    }
    v36 = (__int64)&v33[2 * *(_DWORD *)v35 + 55];
  }
  else
  {
LABEL_32:
    v36 = sub_1C6A420(v32, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(GrandQuestFolderBoardItem_c *, _QWORD, float))v36)(v32, *(_QWORD *)(v36 + 8), 1.0);
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

  if ( (byte_4D291CD & 1) == 0 )
  {
    this = (EventRaceResultEffect_StatePlay_o *)sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D291CD = 1;
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
    this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  this = (EventRaceResultEffect_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_16:
    sub_1C942F0(this, that);
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
    sub_1C942F0(this, that);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x19
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x2

  if ( (byte_4D291CE & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&CTouch_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_EventRaceResultEffect_StateTouchWait_update__);
    sub_1C94098(&Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C94098(&EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4D291CE = 1;
  }
  v4 = sub_1C942E4(EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
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
          v14 = Method_EventRaceResultEffect_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventRaceResultEffect_StateTouchWait_update__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1C940B0(Method_EventRaceResultEffect_StateTouchWait_update__);
          v15 = (System_Reflection_MethodBase_o *)sub_1C9407C(v14, v14[4]);
          OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v17 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v17 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
          v19 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(
            v19,
            (Il2CppObject *)v4,
            Method_EventRaceResultEffect_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v19, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v13;
            if ( *(_QWORD *)v13 )
            {
              EventRaceResultEffect__SetState((EventRaceResultEffect_o *)isTouchPush, 0, v20);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C942F0(isTouchPush, v6);
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
    sub_1C942F0(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0);
}