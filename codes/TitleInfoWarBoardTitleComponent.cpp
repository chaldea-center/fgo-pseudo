void TitleInfoWarBoardTitleComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5937212 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoWarBoardTitleComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_4059/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_5937212 = 1;
  }
  v7 = StringLiteral_4059/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  TitleInfoWarBoardTitleComponent_TypeInfo->static_fields->MOVIE_PLAYER_OBJECT_PATH = (struct System_String_o *)StringLiteral_4059/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TitleInfoWarBoardTitleComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void TitleInfoWarBoardTitleComponent___ctor(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1

  if ( (byte_5937211 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937211 = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.TitleFadeOutPlayTime = 1.0;
  this->fields.movieName = v9;
  *(_QWORD *)&this->fields.BgmFadeOutPlayTime = 0x400000003F800000LL;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.movieName, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  this->fields.moviePlayerDepth = 100;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoWarBoardTitleComponent__Awake(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct CStateManager_TitleInfoWarBoardTitleComponent__o **p_mFSM; // x20
  CStateManager_T__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x21
  Il2CppObject *v19; // x22
  CStateManager_T__o *v20; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x20
  Il2CppObject *v23; // x21
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *particleObj; // x21
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  Il2CppObject *v31; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_59371FF & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    sub_21FFC50(&Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    sub_21FFC50(&CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo);
    sub_21FFC50(&TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo);
    sub_21FFC50(&TitleInfoWarBoardTitleComponent_StateNone_TypeInfo);
    sub_21FFC50(&TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo);
    sub_21FFC50(&TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo);
    byte_59371FF = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v5 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_3E505AC *)Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TitleInfoWarBoardTitleComponent__o *)v5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v13 = (Il2CppObject *)sub_21FFEBC(TitleInfoWarBoardTitleComponent_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3E5065C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v16 = (CStateManager_T__o *)*p_mFSM;
    v17 = (Il2CppObject *)sub_21FFEBC(TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_25;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_3E5065C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (Il2CppObject *)sub_21FFEBC(TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo);
    System_Object___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_25;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_3E5065C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v20 = (CStateManager_T__o *)*p_mFSM;
    v21 = (Il2CppObject *)sub_21FFEBC(TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo);
    System_Object___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_25;
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_3E5065C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v22 = (CStateManager_T__o *)*p_mFSM;
    v23 = (Il2CppObject *)sub_21FFEBC(TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo);
    System_Object___ctor(v23, 0);
    if ( !v22 )
      goto LABEL_25;
    CStateManager_object___add(
      v22,
      4,
      (IState_T__o *)v23,
      (const MethodInfo_3E5065C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    TitleInfoWarBoardTitleComponent__SetState(this, 0, v24);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(particleObj, 0, 0) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0, 0) )
    {
      v30 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v27);
      v31 = UnityEngine_Object__Instantiate_object_(
              v30,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v31, (UnityEngine_Component_o *)this, 0);
        if ( !byte_5931940 )
        {
          sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v31,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( v31 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v31,
                                         (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v31;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.particleObj,
              (int32_t)v31,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            goto LABEL_24;
          }
        }
LABEL_25:
        sub_21FFECC(ComponentInChildren_object, v15);
      }
    }
  }
LABEL_24:
  TitleInfoWarBoardTitleComponent__SetBackgrundActive(this, 0, v27);
}


UnityEngine_GameObject_o *TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *moviePlayerName,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *object; // x19
  Il2CppObject *v9; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Component_object; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x20

  if ( (byte_593720A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIRoot___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_593720A = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerName,
             (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v9 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
  if ( v10 )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v9, parent, 0);
  if ( !v9 )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v9,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIRoot___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v10 )
  {
    if ( !Component_object )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  v17 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v9,
          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
  if ( v10 )
  {
    if ( v17 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0);
      goto LABEL_18;
    }
LABEL_19:
    sub_21FFECC(v10, v11);
  }
LABEL_18:
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v9, 0);
  return (UnityEngine_GameObject_o *)v9;
}


System_String_o *TitleInfoWarBoardTitleComponent__CreateMoviePath(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *movieName,
        const MethodInfo *method)
{
  if ( (byte_593720B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9549/*"Movie/{0}.usm"*/);
    byte_593720B = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9549/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0);
}


void TitleInfoWarBoardTitleComponent__EndMovie(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *moviePlayer; // x20
  CRIMoviePlayer_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarBoardQuestEntity_o *warBoardQuestEntity; // x8
  int32_t questId; // w19
  int32_t questPhase; // w20
  WarBoardMovieHistoryManager_c *v11; // x0

  if ( (byte_593720C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&WarBoardMovieHistoryManager_TypeInfo);
    byte_593720C = 1;
  }
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(moviePlayer, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v5 = this->fields.moviePlayer;
    if ( !v5 )
      goto LABEL_12;
    CRIMoviePlayer__Dispose(v5, 0);
  }
  warBoardQuestEntity = this->fields.warBoardQuestEntity;
  if ( !warBoardQuestEntity )
LABEL_12:
    sub_21FFECC(v5, v6);
  questId = warBoardQuestEntity->fields.questId;
  questPhase = warBoardQuestEntity->fields.questPhase;
  v11 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v6, v7);
    v11 = WarBoardMovieHistoryManager_TypeInfo;
  }
  WarBoardMovieHistoryManager__AddHistory(questId, questPhase, v11->static_fields->SAVE_KEY_START_MOVIE, 0);
  WarBoardMovieHistoryManager__WriteData(0);
}


void TitleInfoWarBoardTitleComponent__FadeOutBGM(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float BgmFadeOutPlayTime; // s8

  if ( (byte_5937205 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5937205 = 1;
  }
  BgmFadeOutPlayTime = this->fields.BgmFadeOutPlayTime;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
  SoundManager__fadeoutBgm(BgmFadeOutPlayTime, 0);
}


int32_t TitleInfoWarBoardTitleComponent__GetState(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  TitleInfoWarBoardTitleComponent_o *v2; // x19
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_5937207 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_21FFC50(&Method_CStateManager_TitleInfoWarBoardTitleComponent__getState__);
    byte_5937207 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(this, method);
  return mFSM->fields.m_state;
}


void TitleInfoWarBoardTitleComponent__OnClickCancelButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_593720F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__);
    sub_21FFC50(&Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__);
    byte_593720F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = AvalonSceneManager_TypeInfo;
    v9 = (CommonUI_o *)Instance;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v7);
      v8 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
    v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__,
      0);
    if ( !v9 )
      sub_21FFECC(v12, v13);
    CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0);
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

  if ( (byte_593720E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__);
    sub_21FFC50(&Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__);
    byte_593720E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 28, 0, 0);
    screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
    this->fields.isButtonEnable = 0;
    if ( !screenTouchInfo
      || (screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          TitleFadeOutPlayTime = this->fields.TitleFadeOutPlayTime,
          v9 = (CommonUI_o *)Instance,
          v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(
            v10,
            (Il2CppObject *)this,
            Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__,
            0),
          !v9) )
    {
      sub_21FFECC(screenTouchInfo, v5);
    }
    CommonUI__maskFadeout(v9, 1, TitleFadeOutPlayTime, v10, 0);
  }
}


void TitleInfoWarBoardTitleComponent__OnEnable(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5937210 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3152/*"BackAnchor/BtnBg"*/);
    byte_5937210 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_3152/*"BackAnchor/BtnBg"*/, 0);
}


void TitleInfoWarBoardTitleComponent__Play(
        TitleInfoWarBoardTitleComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v15; // x20
  System_String_o *name; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  System_String_o *MoviePath; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2

  if ( (byte_5937203 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__);
    byte_5937203 = 1;
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
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v15 = this->fields.mAnimation;
    if ( v15 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
      if ( gameObject )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v15, name, 0);
        if ( gameObject )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
          goto LABEL_11;
        }
      }
    }
LABEL_16:
    sub_21FFECC(gameObject, v11);
  }
LABEL_11:
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.movieName, 0);
  if ( IsNullOrEmpty )
    goto LABEL_15;
  MoviePath = TitleInfoWarBoardTitleComponent__CreateMoviePath(
                (TitleInfoWarBoardTitleComponent_o *)IsNullOrEmpty,
                this->fields.movieName,
                v19);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)this,
    Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22, v23);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v21, 1, 0) )
LABEL_15:
    TitleInfoWarBoardTitleComponent__StartTitleEffect(this, v18);
}


void TitleInfoWarBoardTitleComponent__PlayBGM(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *bgmName; // x19

  if ( (byte_5937206 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5937206 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
  SoundManager__playBgm(bgmName, 0);
}


void TitleInfoWarBoardTitleComponent__PlayMovie(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  TitleInfoWarBoardTitleComponent_c *v5; // x0
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  Il2CppObject *Component_object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  CRIMoviePlayer_o *moviePlayer; // x20
  TitleInfoWarBoardTitleComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  System_String_o *v19; // x21
  __int64 v20; // x2
  System_String_o *Path; // x22
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5937209 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_21FFC50(&TitleInfoWarBoardTitleComponent_TypeInfo);
    byte_5937209 = 1;
  }
  v5 = TitleInfoWarBoardTitleComponent_TypeInfo;
  if ( !*(&TitleInfoWarBoardTitleComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoWarBoardTitleComponent_TypeInfo, method, v2);
    v5 = TitleInfoWarBoardTitleComponent_TypeInfo;
  }
  CriMoviePlayerObject = TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
                           (TitleInfoWarBoardTitleComponent_o *)v5,
                           v5->static_fields->MOVIE_PLAYER_OBJECT_PATH,
                           (UnityEngine_Component_o *)this,
                           v3);
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  v8 = CriMoviePlayerObject;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CriMoviePlayerObject,
                                                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  UIPanel__set_depth((UIPanel_o *)CriMoviePlayerObject, this->fields.moviePlayerDepth, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v8,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
  this->fields.moviePlayer = (struct CRIMoviePlayer_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moviePlayer,
    (int32_t)Component_object,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)this->fields.moviePlayer;
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  v22.fields.r = 1.0;
  v22.fields.g = 1.0;
  v22.fields.b = 1.0;
  v22.fields.a = 1.0;
  CRIMoviePlayer__SetBackgroundColor((CRIMoviePlayer_o *)CriMoviePlayerObject, v22, 0);
  moviePlayer = this->fields.moviePlayer;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)TitleInfoWarBoardTitleComponent__CreateMoviePath(
                                                       v17,
                                                       this->fields.movieName,
                                                       v18);
  if ( !this->fields.movieAssetData )
    goto LABEL_18;
  v19 = (System_String_o *)CriMoviePlayerObject;
  Path = AssetData__get_Path(this->fields.movieAssetData, 0);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v7, v20);
  if ( !byte_593205D )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593205D = 1;
  }
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v7, v20);
    CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  }
  if ( !moviePlayer
    || (CRIMoviePlayer__Initialize(
          moviePlayer,
          v19,
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
          0,
          0),
        (CriMoviePlayerObject = (UnityEngine_GameObject_o *)this->fields.moviePlayer) == 0) )
  {
LABEL_18:
    sub_21FFECC(CriMoviePlayerObject, v7);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)CriMoviePlayerObject, 1, 1, 1, 0, 0);
}


void TitleInfoWarBoardTitleComponent__RefreshPanel(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *basePanel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_5937202 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937202 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
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
    sub_21FFECC(gameObject, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoWarBoardTitleComponent__SetBackgrundActive(
        TitleInfoWarBoardTitleComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *backgrund; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_593720D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593720D = 1;
  }
  backgrund = (UnityEngine_Object_o *)this->fields.backgrund;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive, method);
  if ( !UnityEngine_Object__op_Equality(backgrund, 0, 0) )
  {
    v7 = this->fields.backgrund;
    if ( !v7 )
      sub_21FFECC(0, v6);
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

  if ( (byte_5937208 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
    byte_5937208 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct WarBoardQuestEntity_o **p_warBoardQuestEntity; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_String_o *monitor; // x1
  __int64 v39; // x2
  Il2CppObject *MasterData_object; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x2
  struct System_String_o *WarBoardStartMovieName; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct WarBoardQuestEntity_o *v51; // x8
  WarBoardMovieHistoryManager_c *v52; // x0
  int32_t questId; // w22
  int32_t questPhase; // w23
  __int64 v55; // x1
  __int64 v56; // x2
  bool exists; // w8
  UnityEngine_Object_c *v58; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  int v61; // w9
  Il2CppObject *v62; // x23
  Il2CppObject *Component_object; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_String_o *v70; // x24
  System_String_o *v71; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *ComponentInChildren_object__58644924; // x0
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Action_o *v80; // x25
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  __int64 v93; // x1
  __int64 v94; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v96; // x2
  UnityEngine_Object_o *messageManager; // x20
  __int64 v98; // x1
  __int64 v99; // x2
  bool IsNullOrEmpty; // w8
  UnityEngine_Object_o *messageLabel; // x20
  DataManager_c *v102; // x8
  Il2CppObject *v103; // [xsp+8h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v104; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v105; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_5937201 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_21FFC50(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__);
    sub_21FFC50(&TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo);
    sub_21FFC50(&WarBoardMovieHistoryManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26807/*"仮"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937201 = 1;
  }
  entity = 0;
  v104 = 0;
  v105 = 0;
  v103 = 0;
  v9 = sub_21FFEBC(TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_71;
  *(_QWORD *)(v9 + 16) = callbackDecide;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)callbackDecide, v12, v13, v14, v15, v16, v17);
  this->fields.warBoardQuestEntity = warBoardQuestEnt;
  p_warBoardQuestEntity = &this->fields.warBoardQuestEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.warBoardQuestEntity,
    (int32_t)warBoardQuestEnt,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (int)StringLiteral_1/*""*/;
  this->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bgmName, v25, v26, v27, v28, v29, v30, v31);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_71;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         (*p_warBoardQuestEntity)->fields.stageId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !entity || !Instance )
      goto LABEL_71;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &v103,
                                  (int32_t)entity[2].klass,
                                  (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v103 )
        goto LABEL_71;
      Instance = (DataManager_o *)System_String__IsNullOrEmpty((System_String_o *)v103[1].monitor, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v103 )
          goto LABEL_71;
        monitor = (struct System_String_o *)v103[1].monitor;
        this->fields.bgmName = monitor;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.bgmName,
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v39);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v39);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_71;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &v105,
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( !v105 )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41, v42);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_71;
  Instance = (DataManager_o *)QuestPhaseMaster__TryGetEntity(
                                (QuestPhaseMaster_o *)Instance,
                                &v104,
                                (*p_warBoardQuestEntity)->fields.questId,
                                (*p_warBoardQuestEntity)->fields.questPhase,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)v104;
    if ( !v104 )
      goto LABEL_71;
    WarBoardStartMovieName = QuestPhaseEntity__GetWarBoardStartMovieName(v104, 0);
    this->fields.movieName = WarBoardStartMovieName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.movieName,
      (int32_t)WarBoardStartMovieName,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = *p_warBoardQuestEntity;
  if ( !*p_warBoardQuestEntity )
LABEL_71:
    sub_21FFECC(Instance, v11);
  v52 = WarBoardMovieHistoryManager_TypeInfo;
  questId = v51->fields.questId;
  questPhase = v51->fields.questPhase;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v11, v43);
    v52 = WarBoardMovieHistoryManager_TypeInfo;
  }
  exists = WarBoardMovieHistoryManager__ExistsHistory(questId, questPhase, v52->static_fields->SAVE_KEY_START_MOVIE, 0);
  v58 = UnityEngine_Object_TypeInfo;
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  v61 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  this->fields.isPlayedStartMovie = exists;
  this->fields.isButtonEnable = 0;
  if ( !v61 )
    j_il2cpp_runtime_class_init_0(v58, v55, v56);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    v62 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v62 )
      goto LABEL_71;
    Instance = (DataManager_o *)CommonUI__CreateScreeenTouchInfo(
                                  (CommonUI_o *)v62,
                                  (UnityEngine_Transform_o *)Instance,
                                  0,
                                  0);
    if ( !Instance )
      goto LABEL_71;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchInfo,
      (int32_t)Component_object,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  Instance = (DataManager_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_71;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)v105;
  if ( !v105 )
    goto LABEL_71;
  v70 = (System_String_o *)StringLiteral_26807/*"仮"*/;
  Instance = (DataManager_o *)QuestEntity__getQuestName((QuestEntity_o *)v105, 0);
  if ( !v105 )
    goto LABEL_71;
  v71 = (System_String_o *)Instance;
  klass = v105[2].klass;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_71;
  ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                           (UnityEngine_Component_o *)Instance,
                                           (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__58644924;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__58644924,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_71;
  Instance = (DataManager_o *)UnityEngine_Component__GetComponentInChildren_object__58644924(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !Instance )
    goto LABEL_71;
  *(&Instance->fields.isFailedLoad + 1) = 1;
  v80 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v80,
    (Il2CppObject *)v9,
    Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__,
    0);
  this->fields.callbackDecide = v80;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackDecide,
    (int32_t)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this->fields.callbackCancel = callbackCancel;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackCancel,
    (int32_t)callbackCancel,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93, v94);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.titleLabel;
    if ( !Instance )
      goto LABEL_71;
    UILabel__set_text((UILabel_o *)Instance, v70, 0);
  }
  messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v96);
  if ( UnityEngine_Object__op_Inequality(messageManager, 0, 0) )
  {
    if ( System_String__IsNullOrEmpty((System_String_o *)klass, 0) )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(v71, 0);
      Instance = (DataManager_o *)this->fields.messageManager;
      if ( IsNullOrEmpty )
      {
        if ( Instance )
        {
          ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)Instance, 0);
          return;
        }
        goto LABEL_71;
      }
      if ( !Instance )
        goto LABEL_71;
      v102 = Instance->klass;
    }
    else
    {
      Instance = (DataManager_o *)this->fields.messageManager;
      if ( !Instance )
        goto LABEL_71;
      v102 = Instance->klass;
    }
    ((void (*)(void))v102[1]._1.this_arg.data)();
  }
  else
  {
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v98, v99);
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.messageLabel;
      if ( !Instance )
        goto LABEL_71;
      UILabel__set_text((UILabel_o *)Instance, v71, 0);
    }
  }
}


void TitleInfoWarBoardTitleComponent__StartTitleEffect(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_5937204 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6867/*"FadeOutBGM"*/);
    sub_21FFC50(&StringLiteral_11073/*"PlayBGM"*/);
    byte_5937204 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6867/*"FadeOutBGM"*/,
    this->fields.BgmFadeOutStartTime,
    0);
  if ( !System_String__IsNullOrEmpty(this->fields.bgmName, 0) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11073/*"PlayBGM"*/,
      this->fields.BgmPlayStartTime,
      0);
  TitleInfoWarBoardTitleComponent__SetState(this, 3, v3);
}


void TitleInfoWarBoardTitleComponent__Update(TitleInfoWarBoardTitleComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_5937200 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
    byte_5937200 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3E506C4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
  TitleInfoWarBoardTitleComponent__RefreshPanel(this, method);
}


void TitleInfoWarBoardTitleComponent___OnClickCancelButton_b__52_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  intptr_t m_CachedPtr; // x8
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x19

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_5937215 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937215 = 1;
  }
  m_CachedPtr = v2[4].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    sub_21FFECC(this, method);
  (*(void (__fastcall **)(_QWORD, _QWORD))(m_CachedPtr + 24))(
    *(_QWORD *)(m_CachedPtr + 64),
    *(_QWORD *)(m_CachedPtr + 40));
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v2, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
}


void TitleInfoWarBoardTitleComponent___OnClickDecideButton_b__51_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  void *monitor; // x8
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x19

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_5937214 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937214 = 1;
  }
  monitor = v2[4].monitor;
  if ( !monitor )
    sub_21FFECC(this, method);
  (*((void (__fastcall **)(_QWORD, _QWORD))monitor + 3))(*((_QWORD *)monitor + 8), *((_QWORD *)monitor + 5));
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v2, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
}


void TitleInfoWarBoardTitleComponent___Play_b__34_0(
        TitleInfoWarBoardTitleComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x2

  if ( (byte_5937213 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5937213 = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, data, method);
  SoundManager__stopBgm(0);
  this->fields.movieAssetData = data;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.movieAssetData, (int32_t)data, v5, v6, v7, v8, v9, v10);
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
    sub_21FFECC(this, 0);
  TitleInfoWarBoardTitleComponent__PlayMovie(that, (const MethodInfo *)that);
}


void TitleInfoWarBoardTitleComponent_StateMovie__end(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5937218 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937218 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__InitConnect((CommonUI_o *)Instance, 0), this->fields.state = 0, !that) )
    sub_21FFECC(Instance, v6);
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
    sub_21FFECC(this, that);
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
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_5937216 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__);
    sub_21FFC50(&TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo);
    byte_5937216 = 1;
  }
  v4 = sub_21FFEBC(TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = that;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v14, v15);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v4,
    Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v17 )
LABEL_8:
    sub_21FFECC(v5, v6);
  CommonUI__maskFadeout(v17, 2, DEFAULT_FADE_TIME, v19, 0);
}


void TitleInfoWarBoardTitleComponent_StateMovieFade__end(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5937217 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937217 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
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
    sub_21FFECC(0, method);
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

  if ( (byte_5937219 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937219 = 1;
  }
  if ( !that )
    goto LABEL_14;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
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
        this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__Play_82865240(v6, name, 0);
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
    sub_21FFECC(this, that);
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

  if ( (byte_593721A & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593721A = 1;
  }
  if ( !that )
    goto LABEL_13;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
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
    sub_21FFECC(this, that);
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
    sub_21FFECC(this, that);
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
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callbackDecide->fields.invoke_impl)(
    callbackDecide->fields.method_code,
    callbackDecide->fields.method);
}