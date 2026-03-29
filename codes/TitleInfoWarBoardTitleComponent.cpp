void TitleInfoWarBoardTitleComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2F5AC & 1) == 0 )
  {
    sub_1C93AD4(&TitleInfoWarBoardTitleComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_3942/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_4D2F5AC = 1;
  }
  TitleInfoWarBoardTitleComponent_TypeInfo->static_fields->MOVIE_PLAYER_OBJECT_PATH = (struct System_String_o *)StringLiteral_3942/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TitleInfoWarBoardTitleComponent_TypeInfo->static_fields,
    StringLiteral_3942/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void TitleInfoWarBoardTitleComponent___ctor(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D2F5AB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2F5AB = 1;
  }
  this->fields.TitleFadeOutPlayTime = 1.0;
  *(_QWORD *)&this->fields.BgmFadeOutPlayTime = 0x400000003F800000LL;
  v9 = StringLiteral_1/*""*/;
  this->fields.movieName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.movieName, v9, v2, v3, v4, v5, v6, v7);
  this->fields.moviePlayerDepth = 100;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoWarBoardTitleComponent__Awake(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_TitleInfoWarBoardTitleComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x21
  Il2CppObject *v20; // x22
  CStateManager_T__o *v21; // x20
  Il2CppObject *v22; // x21
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *particleObj; // x21
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v27; // x21
  Il2CppObject *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  if ( (byte_4D2F599 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    sub_1C93AD4(&Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    sub_1C93AD4(&CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo);
    sub_1C93AD4(&TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo);
    sub_1C93AD4(&TitleInfoWarBoardTitleComponent_StateNone_TypeInfo);
    sub_1C93AD4(&TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo);
    sub_1C93AD4(&TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo);
    byte_4D2F599 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C93D20(CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_33EE80C *)Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TitleInfoWarBoardTitleComponent__o *)v4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_1C93D20(TitleInfoWarBoardTitleComponent_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_1C93D20(TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_25;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (Il2CppObject *)sub_1C93D20(TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17 )
      goto LABEL_25;
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v20 = (Il2CppObject *)sub_1C93D20(TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo);
    System_Object___ctor(v20, 0);
    if ( !v19 )
      goto LABEL_25;
    CStateManager_object___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1C93D20(TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo);
    System_Object___ctor(v22, 0);
    if ( !v21 )
      goto LABEL_25;
    CStateManager_object___add(
      v21,
      4,
      (IState_T__o *)v22,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    TitleInfoWarBoardTitleComponent__SetState(this, 0, v23);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(particleObj, 0, 0) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0, 0) )
    {
      v27 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v28 = UnityEngine_Object__Instantiate_object_(
              v27,
              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v28, (UnityEngine_Component_o *)this, 0);
        if ( !byte_4D2A139 )
        {
          sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v28,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( v28 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v28,
                                         (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v28;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&this->fields.particleObj,
              (int32_t)v28,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            goto LABEL_24;
          }
        }
LABEL_25:
        sub_1C93D2C(ComponentInChildren_object, v14);
      }
    }
  }
LABEL_24:
  TitleInfoWarBoardTitleComponent__SetBackgrundActive(this, 0, v25);
}


UnityEngine_GameObject_o *TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *moviePlayerName,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *object; // x19
  Il2CppObject *v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v11; // x20

  if ( (byte_4D2F5A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIRoot___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_4D2F5A4 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerName,
             (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
  if ( v8 )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v7, parent, 0);
  if ( !v7 )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v7,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIRoot___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v8 )
  {
    if ( !Component_object )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  v11 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v7,
          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
  if ( v8 )
  {
    if ( v11 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 0, 0);
      goto LABEL_18;
    }
LABEL_19:
    sub_1C93D2C(v8, v9);
  }
LABEL_18:
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v7, 0);
  return (UnityEngine_GameObject_o *)v7;
}


System_String_o *TitleInfoWarBoardTitleComponent__CreateMoviePath(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *movieName,
        const MethodInfo *method)
{
  if ( (byte_4D2F5A5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9232/*"Movie/{0}.usm"*/);
    byte_4D2F5A5 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9232/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0);
}


void TitleInfoWarBoardTitleComponent__EndMovie(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *moviePlayer; // x20
  CRIMoviePlayer_o *v4; // x0
  __int64 v5; // x1
  struct WarBoardQuestEntity_o *warBoardQuestEntity; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  WarBoardMovieHistoryManager_c *v9; // x0

  if ( (byte_4D2F5A6 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&WarBoardMovieHistoryManager_TypeInfo);
    byte_4D2F5A6 = 1;
  }
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(moviePlayer, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v4 = this->fields.moviePlayer;
    if ( !v4 )
      goto LABEL_12;
    CRIMoviePlayer__Dispose(v4, 0);
  }
  warBoardQuestEntity = this->fields.warBoardQuestEntity;
  if ( !warBoardQuestEntity )
LABEL_12:
    sub_1C93D2C(v4, v5);
  questId = warBoardQuestEntity->fields.questId;
  questPhase = warBoardQuestEntity->fields.questPhase;
  v9 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v9 = WarBoardMovieHistoryManager_TypeInfo;
  }
  WarBoardMovieHistoryManager__AddHistory(questId, questPhase, v9->static_fields->SAVE_KEY_START_MOVIE, 0);
  WarBoardMovieHistoryManager__WriteData(0);
}


void TitleInfoWarBoardTitleComponent__FadeOutBGM(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  float BgmFadeOutPlayTime; // s8

  if ( (byte_4D2F59F & 1) == 0 )
  {
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2F59F = 1;
  }
  BgmFadeOutPlayTime = this->fields.BgmFadeOutPlayTime;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BgmFadeOutPlayTime, 0);
}


int32_t TitleInfoWarBoardTitleComponent__GetState(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  TitleInfoWarBoardTitleComponent_o *v2; // x19
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4D2F5A1 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1C93AD4(&Method_CStateManager_TitleInfoWarBoardTitleComponent__getState__);
    byte_4D2F5A1 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C93D2C(this, method);
  return mFSM->fields.m_state;
}


void TitleInfoWarBoardTitleComponent__OnClickCancelButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4D2F5A9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__);
    sub_1C93AD4(&Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__);
    byte_4D2F5A9 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AvalonSceneManager_TypeInfo;
    v7 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v6 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
    v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__,
      0);
    if ( !v7 )
      sub_1C93D2C(v10, v11);
    CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
  }
}


void TitleInfoWarBoardTitleComponent__OnClickDecideButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  Il2CppObject *Instance; // x0
  float TitleFadeOutPlayTime; // s8
  CommonUI_o *v9; // x20
  System_Action_o *v10; // x21

  if ( (byte_4D2F5A8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__);
    sub_1C93AD4(&Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__);
    byte_4D2F5A8 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 28, 0, 0);
    screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
    this->fields.isButtonEnable = 0;
    if ( !screenTouchInfo
      || (screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          TitleFadeOutPlayTime = this->fields.TitleFadeOutPlayTime,
          v9 = (CommonUI_o *)Instance,
          v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
          System_Action___ctor(
            v10,
            (Il2CppObject *)this,
            Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__,
            0),
          !v9) )
    {
      sub_1C93D2C(screenTouchInfo, v5);
    }
    CommonUI__maskFadeout(v9, 1, TitleFadeOutPlayTime, v10, 0);
  }
}


void TitleInfoWarBoardTitleComponent__OnEnable(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D2F5AA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3047/*"BackAnchor/BtnBg"*/);
    byte_4D2F5AA = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_3047/*"BackAnchor/BtnBg"*/, 0);
}


void TitleInfoWarBoardTitleComponent__Play(
        TitleInfoWarBoardTitleComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v13; // x20
  System_String_o *name; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  System_String_o *MoviePath; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x21

  if ( (byte_4D2F59D & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__);
    byte_4D2F59D = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1C93A78(
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
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v13 = this->fields.mAnimation;
    if ( v13 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
      if ( gameObject )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v13, name, 0);
        if ( gameObject )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
          goto LABEL_11;
        }
      }
    }
LABEL_16:
    sub_1C93D2C(gameObject, v11);
  }
LABEL_11:
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.movieName, 0);
  if ( IsNullOrEmpty )
    goto LABEL_15;
  MoviePath = TitleInfoWarBoardTitleComponent__CreateMoviePath(
                (TitleInfoWarBoardTitleComponent_o *)IsNullOrEmpty,
                this->fields.movieName,
                v17);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)this,
    Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v19, 1, 0) )
LABEL_15:
    TitleInfoWarBoardTitleComponent__StartTitleEffect(this, v16);
}


void TitleInfoWarBoardTitleComponent__PlayBGM(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  System_String_o *bgmName; // x19

  if ( (byte_4D2F5A0 & 1) == 0 )
  {
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2F5A0 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(bgmName, 0);
}


void TitleInfoWarBoardTitleComponent__PlayMovie(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TitleInfoWarBoardTitleComponent_c *v4; // x0
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  CRIMoviePlayer_o *moviePlayer; // x20
  TitleInfoWarBoardTitleComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  System_String_o *v18; // x21
  System_String_o *Path; // x22
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2F5A3 & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C93AD4(&TitleInfoWarBoardTitleComponent_TypeInfo);
    byte_4D2F5A3 = 1;
  }
  v4 = TitleInfoWarBoardTitleComponent_TypeInfo;
  if ( !TitleInfoWarBoardTitleComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoWarBoardTitleComponent_TypeInfo);
    v4 = TitleInfoWarBoardTitleComponent_TypeInfo;
  }
  CriMoviePlayerObject = TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
                           (TitleInfoWarBoardTitleComponent_o *)v4,
                           v4->static_fields->MOVIE_PLAYER_OBJECT_PATH,
                           (UnityEngine_Component_o *)this,
                           v2);
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  v7 = CriMoviePlayerObject;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CriMoviePlayerObject,
                                                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  UIPanel__set_depth((UIPanel_o *)CriMoviePlayerObject, this->fields.moviePlayerDepth, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
  this->fields.moviePlayer = (struct CRIMoviePlayer_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.moviePlayer,
    (int32_t)Component_object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)this->fields.moviePlayer;
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  v20.fields.r = 1.0;
  v20.fields.g = 1.0;
  v20.fields.b = 1.0;
  v20.fields.a = 1.0;
  CRIMoviePlayer__SetBackgroundColor((CRIMoviePlayer_o *)CriMoviePlayerObject, v20, 0);
  moviePlayer = this->fields.moviePlayer;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)TitleInfoWarBoardTitleComponent__CreateMoviePath(
                                                       v16,
                                                       this->fields.movieName,
                                                       v17);
  if ( !this->fields.movieAssetData )
    goto LABEL_18;
  v18 = (System_String_o *)CriMoviePlayerObject;
  Path = AssetData__get_Path(this->fields.movieAssetData, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4D2B5DC )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    byte_4D2B5DC = 1;
  }
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  }
  if ( !moviePlayer
    || (CRIMoviePlayer__Initialize(
          moviePlayer,
          v18,
          Path,
          *(float *)(CriMoviePlayerObject[7].fields.m_CachedPtr + 36),
          this->fields.isPlayedStartMovie,
          0,
          0,
          0,
          0,
          0,
          0,
          1,
          0,
          0,
          0),
        (CriMoviePlayerObject = (UnityEngine_GameObject_o *)this->fields.moviePlayer) == 0) )
  {
LABEL_18:
    sub_1C93D2C(CriMoviePlayerObject, v6);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)CriMoviePlayerObject, 1, 1, 1, 0, 0);
}


void TitleInfoWarBoardTitleComponent__RefreshPanel(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_4D2F59C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F59C = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(basePanel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  base2Panel = (UnityEngine_Object_o *)this->fields.base2Panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(base2Panel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.base2Panel;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.base2Panel;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1C93D2C(gameObject, v4);
  }
}


void TitleInfoWarBoardTitleComponent__SetBackgrundActive(
        TitleInfoWarBoardTitleComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *backgrund; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4D2F5A7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F5A7 = 1;
  }
  backgrund = (UnityEngine_Object_o *)this->fields.backgrund;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(backgrund, 0, 0) )
  {
    v7 = this->fields.backgrund;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0);
  }
}


void TitleInfoWarBoardTitleComponent__SetButtonEnable(
        TitleInfoWarBoardTitleComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = isEnable;
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoWarBoardTitleComponent__SetState(
        TitleInfoWarBoardTitleComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D2F5A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
    byte_4D2F5A2 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C93D2C(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_33EE940 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
}


void TitleInfoWarBoardTitleComponent__Setup(
        TitleInfoWarBoardTitleComponent_o *this,
        WarBoardQuestEntity_o *warBoardQuestEnt,
        System_Action_o *callbackDecide,
        System_Action_o *callbackCancel,
        const MethodInfo *method)
{
  __int64 v9; // x21
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct WarBoardQuestEntity_o **p_warBoardQuestEntity; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_String_o *monitor; // x1
  Il2CppObject *MasterData_object; // x23
  struct System_String_o *WarBoardStartMovieName; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct WarBoardQuestEntity_o *v47; // x8
  int32_t questPhase; // w22
  int32_t questId; // w23
  WarBoardMovieHistoryManager_c *v50; // x0
  bool exists; // w0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  Il2CppObject *v54; // x23
  Il2CppObject *Component_object; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  System_String_o *v62; // x24
  Il2CppClass *klass; // x23
  System_String_o *v64; // x22
  Il2CppObject *ComponentInChildren_object__52016240; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  System_Action_o *v72; // x25
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  UnityEngine_Object_o *titleLabel; // x20
  UnityEngine_Object_o *messageManager; // x20
  struct ScriptLineMessage_o *v87; // x8
  UnityEngine_Object_o *messageLabel; // x20
  Il2CppObject *v89; // [xsp+8h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v90; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v91; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4D2F59B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__);
    sub_1C93AD4(&TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo);
    sub_1C93AD4(&WarBoardMovieHistoryManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_25784/*"仮"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2F59B = 1;
  }
  entity = 0;
  v90 = 0;
  v91 = 0;
  v89 = 0;
  v9 = sub_1C93D20(TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_69;
  *(_QWORD *)(v9 + 16) = callbackDecide;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)callbackDecide, v12, v13, v14, v15, v16, v17);
  this->fields.warBoardQuestEntity = warBoardQuestEnt;
  p_warBoardQuestEntity = &this->fields.warBoardQuestEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.warBoardQuestEntity,
    (int32_t)warBoardQuestEnt,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = StringLiteral_1/*""*/;
  this->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bgmName, v25, v26, v27, v28, v29, v30, v31);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_69;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         (*p_warBoardQuestEntity)->fields.stageId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !entity || !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &v89,
                                  (int32_t)entity[2].klass,
                                  (const MethodInfo_34632C0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v89 )
        goto LABEL_69;
      Instance = (DataManager_o *)System_String__IsNullOrEmpty((System_String_o *)v89[1].monitor, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v89 )
          goto LABEL_69;
        monitor = (struct System_String_o *)v89[1].monitor;
        this->fields.bgmName = monitor;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.bgmName,
          (int32_t)monitor,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2A7BF = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_69;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &v91,
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
    (const MethodInfo_34632C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( !v91 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)QuestPhaseMaster__TryGetEntity(
                                (QuestPhaseMaster_o *)Instance,
                                &v90,
                                (*p_warBoardQuestEntity)->fields.questId,
                                (*p_warBoardQuestEntity)->fields.questPhase,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)v90;
    if ( !v90 )
      goto LABEL_69;
    WarBoardStartMovieName = QuestPhaseEntity__GetWarBoardStartMovieName(v90, 0);
    this->fields.movieName = WarBoardStartMovieName;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.movieName,
      (int32_t)WarBoardStartMovieName,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = *p_warBoardQuestEntity;
  if ( !*p_warBoardQuestEntity )
LABEL_69:
    sub_1C93D2C(Instance, v11);
  questId = v47->fields.questId;
  questPhase = v47->fields.questPhase;
  v50 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v50 = WarBoardMovieHistoryManager_TypeInfo;
  }
  exists = WarBoardMovieHistoryManager__ExistsHistory(questId, questPhase, v50->static_fields->SAVE_KEY_START_MOVIE, 0);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  this->fields.isPlayedStartMovie = exists;
  this->fields.isButtonEnable = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v54 )
      goto LABEL_69;
    Instance = (DataManager_o *)CommonUI__CreateScreeenTouchInfo(
                                  (CommonUI_o *)v54,
                                  (UnityEngine_Transform_o *)Instance,
                                  0,
                                  0);
    if ( !Instance )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.screenTouchInfo,
      (int32_t)Component_object,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  Instance = (DataManager_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_69;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)v91;
  if ( !v91 )
    goto LABEL_69;
  v62 = (System_String_o *)StringLiteral_25784/*"仮"*/;
  Instance = (DataManager_o *)QuestEntity__getQuestName((QuestEntity_o *)v91, 0);
  if ( !v91 )
    goto LABEL_69;
  klass = v91[2].klass;
  v64 = (System_String_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_69;
  ComponentInChildren_object__52016240 = UnityEngine_Component__GetComponentInChildren_object__52016240(
                                           (UnityEngine_Component_o *)Instance,
                                           (const MethodInfo_319B470 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__52016240;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__52016240,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)UnityEngine_Component__GetComponentInChildren_object__52016240(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_319B470 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !Instance )
    goto LABEL_69;
  *(&Instance->fields.isFailedLoad + 1) = 1;
  v72 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v72,
    (Il2CppObject *)v9,
    Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__,
    0);
  this->fields.callbackDecide = v72;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackDecide, (int32_t)v72, v73, v74, v75, v76, v77, v78);
  this->fields.callbackCancel = callbackCancel;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackCancel,
    (int32_t)callbackCancel,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.titleLabel;
    if ( !Instance )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)Instance, v62, 0);
  }
  messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageManager, 0, 0) )
  {
    if ( System_String__IsNullOrEmpty((System_String_o *)klass, 0) )
    {
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(v64, 0);
      v87 = this->fields.messageManager;
      if ( v87 )
      {
        if ( ((unsigned __int8)Instance & 1) != 0 )
          ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0);
        else
          ((void (__fastcall *)(struct ScriptLineMessage_o *__return_ptr, struct ScriptLineMessage_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, const MethodInfo *))v87->klass->vtable._7_SetText.methodPtr)(
            v87,
            this->fields.messageManager,
            v64,
            0,
            0,
            0,
            0,
            v87->klass->vtable._7_SetText.method);
        return;
      }
    }
    else
    {
      Instance = (DataManager_o *)this->fields.messageManager;
      if ( Instance )
      {
        ((void (__fastcall *)(DataManager_o *, Il2CppClass *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))Instance->klass[1]._1.this_arg.data)(
          Instance,
          klass,
          0,
          0,
          0,
          0,
          *(_QWORD *)&Instance->klass[1]._1.this_arg.bits);
        return;
      }
    }
    goto LABEL_69;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.messageLabel;
    if ( Instance )
    {
      UILabel__set_text((UILabel_o *)Instance, v64, 0);
      return;
    }
    goto LABEL_69;
  }
}


void TitleInfoWarBoardTitleComponent__StartTitleEffect(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4D2F59E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_6624/*"FadeOutBGM"*/);
    sub_1C93AD4(&StringLiteral_10716/*"PlayBGM"*/);
    byte_4D2F59E = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6624/*"FadeOutBGM"*/,
    this->fields.BgmFadeOutStartTime,
    0);
  if ( !System_String__IsNullOrEmpty(this->fields.bgmName, 0) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10716/*"PlayBGM"*/,
      this->fields.BgmPlayStartTime,
      0);
  TitleInfoWarBoardTitleComponent__SetState(this, 3, v3);
}


void TitleInfoWarBoardTitleComponent__Update(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D2F59A & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
    byte_4D2F59A = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_33EE91C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
  TitleInfoWarBoardTitleComponent__RefreshPanel(this, method);
}


void TitleInfoWarBoardTitleComponent___OnClickCancelButton_b__52_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  intptr_t m_CachedPtr; // x8
  UnityEngine_Object_o *gameObject; // x19

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_4D2F5AF & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F5AF = 1;
  }
  m_CachedPtr = v2[4].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    sub_1C93D2C(this, method);
  (*(void (__fastcall **)(_QWORD, _QWORD))(m_CachedPtr + 24))(
    *(_QWORD *)(m_CachedPtr + 64),
    *(_QWORD *)(m_CachedPtr + 40));
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v2, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
}


void TitleInfoWarBoardTitleComponent___OnClickDecideButton_b__51_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  void *monitor; // x8
  UnityEngine_Object_o *gameObject; // x19

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_4D2F5AE & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F5AE = 1;
  }
  monitor = v2[4].monitor;
  if ( !monitor )
    sub_1C93D2C(this, method);
  (*((void (__fastcall **)(_QWORD, _QWORD))monitor + 3))(*((_QWORD *)monitor + 8), *((_QWORD *)monitor + 5));
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v2, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
}


void TitleInfoWarBoardTitleComponent___Play_b__34_0(
        TitleInfoWarBoardTitleComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x2

  if ( (byte_4D2F5AD & 1) == 0 )
  {
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2F5AD = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0);
  this->fields.movieAssetData = data;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.movieAssetData, (int32_t)data, v5, v6, v7, v8, v9, v10);
  TitleInfoWarBoardTitleComponent__SetState(this, 1, v11);
}


void TitleInfoWarBoardTitleComponent_StateMovie___ctor(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoWarBoardTitleComponent_StateMovie__begin(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  this->fields.state = 1;
  if ( !that )
    sub_1C93D2C(this, 0);
  TitleInfoWarBoardTitleComponent__PlayMovie(that, (const MethodInfo *)that);
}


void TitleInfoWarBoardTitleComponent_StateMovie__end(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D2F5B2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2F5B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__InitConnect((CommonUI_o *)Instance, 0), this->fields.state = 0, !that) )
    sub_1C93D2C(Instance, v6);
  TitleInfoWarBoardTitleComponent__EndMovie(that, v6);
}


void TitleInfoWarBoardTitleComponent_StateMovie__update(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  int32_t state; // w8
  TitleInfoWarBoardTitleComponent_StateMovie_o *v4; // x19
  const MethodInfo *v6; // x1

  state = this->fields.state;
  v4 = this;
  if ( state != 2 )
  {
    if ( state != 1 )
      return;
    if ( that )
    {
      this = (TitleInfoWarBoardTitleComponent_StateMovie_o *)that->fields.moviePlayer;
      if ( this )
      {
        if ( CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0) )
          v4->fields.state = 2;
        return;
      }
    }
LABEL_12:
    sub_1C93D2C(this, that);
  }
  if ( !that )
    goto LABEL_12;
  this = (TitleInfoWarBoardTitleComponent_StateMovie_o *)that->fields.moviePlayer;
  if ( !this )
    goto LABEL_12;
  if ( !CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0) )
  {
    v4->fields.state = 3;
    TitleInfoWarBoardTitleComponent__StartTitleEffect(that, v6);
  }
}


void TitleInfoWarBoardTitleComponent_StateMovieFade___ctor(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoWarBoardTitleComponent_StateMovieFade__begin(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_4D2F5B0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__);
    sub_1C93AD4(&TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo);
    byte_4D2F5B0 = 1;
  }
  v4 = sub_1C93D20(TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = that;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v4,
    Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v15 )
LABEL_8:
    sub_1C93D2C(v5, v6);
  CommonUI__maskFadeout(v15, 2, DEFAULT_FADE_TIME, v17, 0);
}


void TitleInfoWarBoardTitleComponent_StateMovieFade__end(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2F5B1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2F5B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
}


void TitleInfoWarBoardTitleComponent_StateMovieFade__update(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0___ctor(
        TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0___begin_b__0(
        TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TitleInfoWarBoardTitleComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C93D2C(0, method);
  TitleInfoWarBoardTitleComponent__SetState(that, 2, v2);
}


void TitleInfoWarBoardTitleComponent_StateNone___ctor(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoWarBoardTitleComponent_StateNone__begin(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TitleInfoWarBoardTitleComponent_StateNone__end(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TitleInfoWarBoardTitleComponent_StateNone__update(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TitleInfoWarBoardTitleComponent_StatePlay___ctor(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoWarBoardTitleComponent_StatePlay__begin(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v5; // x2
  UnityEngine_Animation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v8; // x19
  System_String_o *v9; // x0

  if ( (byte_4D2F5B3 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F5B3 = 1;
  }
  if ( !that )
    goto LABEL_14;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0, 0) )
  {
    TitleInfoWarBoardTitleComponent__SetBackgrundActive(that, 1, v5);
    v6 = that->fields.mAnimation;
    if ( v6 )
    {
      this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__Play_71862428(v6, name, 0);
        v8 = that->fields.mAnimation;
        if ( v8 )
        {
          this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v8, 0);
          if ( this )
          {
            v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v8, v9, 0);
            if ( this )
            {
              UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_14:
    sub_1C93D2C(this, that);
  }
}


void TitleInfoWarBoardTitleComponent_StatePlay__end(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TitleInfoWarBoardTitleComponent_StatePlay__update(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v5; // x20
  System_String_o *name; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4D2F5B4 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F5B4 = 1;
  }
  if ( !that )
    goto LABEL_13;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mAnimation;
    if ( v5 )
    {
      this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v5, name, 0);
        if ( this )
        {
          if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0) >= 1.0 )
            TitleInfoWarBoardTitleComponent__SetState(that, 4, v7);
          return;
        }
      }
    }
LABEL_13:
    sub_1C93D2C(this, that);
  }
}


void TitleInfoWarBoardTitleComponent_StateTouchWait___ctor(
        TitleInfoWarBoardTitleComponent_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoWarBoardTitleComponent_StateTouchWait__begin(
        TitleInfoWarBoardTitleComponent_StateTouchWait_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (TitleInfoWarBoardTitleComponent_StateTouchWait_o *)that->fields.screenTouchInfo,
        that->fields.isButtonEnable = 1,
        !this)
    || (this = (TitleInfoWarBoardTitleComponent_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0)) == 0 )
  {
    sub_1C93D2C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void TitleInfoWarBoardTitleComponent_StateTouchWait__end(
        TitleInfoWarBoardTitleComponent_StateTouchWait_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TitleInfoWarBoardTitleComponent_StateTouchWait__update(
        TitleInfoWarBoardTitleComponent_StateTouchWait_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___ctor(
        TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___Setup_b__0(
        TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callbackDecide; // x8

  callbackDecide = this->fields.callbackDecide;
  if ( !callbackDecide )
    sub_1C93D2C(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callbackDecide->fields.invoke_impl)(
    callbackDecide->fields.method_code,
    callbackDecide->fields.method);
}