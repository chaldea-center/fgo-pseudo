void __fastcall TitleInfoWarBoardTitleComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A59CC6 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoWarBoardTitleComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_3933/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_4A59CC6 = 1;
  }
  TitleInfoWarBoardTitleComponent_TypeInfo->static_fields->MOVIE_PLAYER_OBJECT_PATH = (struct System_String_o *)StringLiteral_3933/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TitleInfoWarBoardTitleComponent_TypeInfo->static_fields,
    StringLiteral_3933/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
    v1,
    v2);
}


void __fastcall TitleInfoWarBoardTitleComponent___ctor(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A59CC5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59CC5 = 1;
  }
  this->fields.TitleFadeOutPlayTime = 1.0;
  *(_QWORD *)&this->fields.BgmFadeOutPlayTime = 0x400000003F800000LL;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.movieName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.movieName, v5, v2, v3);
  this->fields.moviePlayerDepth = 100;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Awake(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  struct CStateManager_TitleInfoWarBoardTitleComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  CStateManager_T__o *mFSM; // x21
  TitleInfoWarBoardTitleComponent_StateNone_o *v8; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  TitleInfoWarBoardTitleComponent_StateMovieFade_o *v12; // x22
  CStateManager_T__o *v13; // x21
  TitleInfoWarBoardTitleComponent_StateMovie_o *v14; // x22
  CStateManager_T__o *v15; // x21
  TitleInfoWarBoardTitleComponent_StatePlay_o *v16; // x22
  CStateManager_T__o *v17; // x20
  TitleInfoWarBoardTitleComponent_StateTouchWait_o *v18; // x21
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *particleObj; // x21
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A59CB3 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    sub_1B885B0(&Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    sub_1B885B0(&CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo);
    sub_1B885B0(&TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo);
    sub_1B885B0(&TitleInfoWarBoardTitleComponent_StateNone_TypeInfo);
    sub_1B885B0(&TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo);
    sub_1B885B0(&TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo);
    byte_4A59CB3 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1B887FC(CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_30AAD34 *)Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TitleInfoWarBoardTitleComponent__o *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (TitleInfoWarBoardTitleComponent_StateNone_o *)sub_1B887FC(TitleInfoWarBoardTitleComponent_StateNone_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateNone___ctor(v8, 0LL);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_30AADDC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v11 = (CStateManager_T__o *)*p_mFSM;
    v12 = (TitleInfoWarBoardTitleComponent_StateMovieFade_o *)sub_1B887FC(TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateMovieFade___ctor(v12, 0LL);
    if ( !v11 )
      goto LABEL_25;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_30AADDC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v13 = (CStateManager_T__o *)*p_mFSM;
    v14 = (TitleInfoWarBoardTitleComponent_StateMovie_o *)sub_1B887FC(TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateMovie___ctor(v14, 0LL);
    if ( !v13 )
      goto LABEL_25;
    CStateManager_object___add(
      v13,
      2,
      (IState_T__o *)v14,
      (const MethodInfo_30AADDC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_1B887FC(TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo);
    TitleInfoWarBoardTitleComponent_StatePlay___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_25;
    CStateManager_object___add(
      v15,
      3,
      (IState_T__o *)v16,
      (const MethodInfo_30AADDC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (TitleInfoWarBoardTitleComponent_StateTouchWait_o *)sub_1B887FC(TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateTouchWait___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_25;
    CStateManager_object___add(
      v17,
      4,
      (IState_T__o *)v18,
      (const MethodInfo_30AADDC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    TitleInfoWarBoardTitleComponent__SetState(this, 0, v19);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v23 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = UnityEngine_Object__Instantiate_object_(
              v23,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v24, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4A55CE1 )
        {
          sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v24,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v24 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v24,
                                         (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v24;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.particleObj, (int32_t)v24, v25, v26);
            goto LABEL_24;
          }
        }
LABEL_25:
        sub_1B8880C(ComponentInChildren_object, v10);
      }
    }
  }
LABEL_24:
  TitleInfoWarBoardTitleComponent__SetBackgrundActive(this, 0, v21);
}


UnityEngine_GameObject_o *__fastcall TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
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

  if ( (byte_4A59CBE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIRoot___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_4A59CBE = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerName,
             (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( v8 )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v7, parent, 0LL);
  if ( !v7 )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v7,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIRoot___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v8 )
  {
    if ( !Component_object )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  v11 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v7,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
  if ( v8 )
  {
    if ( v11 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 0, 0LL);
      goto LABEL_18;
    }
LABEL_19:
    sub_1B8880C(v8, v9);
  }
LABEL_18:
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v7, 0LL);
  return (UnityEngine_GameObject_o *)v7;
}


System_String_o *__fastcall TitleInfoWarBoardTitleComponent__CreateMoviePath(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *movieName,
        const MethodInfo *method)
{
  if ( (byte_4A59CBF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9151/*"Movie/{0}.usm"*/);
    byte_4A59CBF = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9151/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__EndMovie(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *moviePlayer; // x20
  CRIMoviePlayer_o *v4; // x0
  __int64 v5; // x1
  struct WarBoardQuestEntity_o *warBoardQuestEntity; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  WarBoardMovieHistoryManager_c *v9; // x0

  if ( (byte_4A59CC0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&WarBoardMovieHistoryManager_TypeInfo);
    byte_4A59CC0 = 1;
  }
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(moviePlayer, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v4 = this->fields.moviePlayer;
    if ( !v4 )
      goto LABEL_12;
    CRIMoviePlayer__Dispose(v4, 0LL);
  }
  warBoardQuestEntity = this->fields.warBoardQuestEntity;
  if ( !warBoardQuestEntity )
LABEL_12:
    sub_1B8880C(v4, v5);
  questId = warBoardQuestEntity->fields.questId;
  questPhase = warBoardQuestEntity->fields.questPhase;
  v9 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v9 = WarBoardMovieHistoryManager_TypeInfo;
  }
  WarBoardMovieHistoryManager__AddHistory(questId, questPhase, v9->static_fields->SAVE_KEY_START_MOVIE, 0LL);
  WarBoardMovieHistoryManager__WriteData(0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__FadeOutBGM(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  float BgmFadeOutPlayTime; // s8

  if ( (byte_4A59CB9 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A59CB9 = 1;
  }
  BgmFadeOutPlayTime = this->fields.BgmFadeOutPlayTime;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BgmFadeOutPlayTime, 0LL);
}


int32_t __fastcall TitleInfoWarBoardTitleComponent__GetState(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoWarBoardTitleComponent_o *v2; // x19
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A59CBB & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1B885B0(&Method_CStateManager_TitleInfoWarBoardTitleComponent__getState__);
    byte_4A59CBB = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickCancelButton(
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

  if ( (byte_4A59CC3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__);
    sub_1B885B0(&Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__);
    byte_4A59CC3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AvalonSceneManager_TypeInfo;
    v7 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v6 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v10, v11);
    CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickDecideButton(
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

  if ( (byte_4A59CC2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__);
    sub_1B885B0(&Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__);
    byte_4A59CC2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 28, 0LL);
    screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
    this->fields.isButtonEnable = 0;
    if ( !screenTouchInfo
      || (screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          TitleFadeOutPlayTime = this->fields.TitleFadeOutPlayTime,
          v9 = (CommonUI_o *)Instance,
          v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(
            v10,
            (Il2CppObject *)this,
            Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__,
            0LL),
          !v9) )
    {
      sub_1B8880C(screenTouchInfo, v5);
    }
    CommonUI__maskFadeout(v9, 1, TitleFadeOutPlayTime, v10, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnEnable(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A59CC4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3134/*"BackAnchor/BtnBg"*/);
    byte_4A59CC4 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(transform, (System_String_o *)StringLiteral_3134/*"BackAnchor/BtnBg"*/, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Play(
        TitleInfoWarBoardTitleComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *name; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  System_String_o *MoviePath; // x20
  AssetLoader_LoadEndDataHandler_o *v15; // x21

  if ( (byte_4A59CB7 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__);
    byte_4A59CB7 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mEndAct, (int32_t)end_act, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v9 = this->fields.mAnimation;
    if ( v9 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( gameObject )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v9, name, 0LL);
        if ( gameObject )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
          goto LABEL_11;
        }
      }
    }
LABEL_16:
    sub_1B8880C(gameObject, v7);
  }
LABEL_11:
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.movieName, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_15;
  MoviePath = TitleInfoWarBoardTitleComponent__CreateMoviePath(
                (TitleInfoWarBoardTitleComponent_o *)IsNullOrEmpty,
                this->fields.movieName,
                v13);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)this,
    Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v15, 1, 0LL) )
LABEL_15:
    TitleInfoWarBoardTitleComponent__StartTitleEffect(this, v12);
}


void __fastcall TitleInfoWarBoardTitleComponent__PlayBGM(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *bgmName; // x19

  if ( (byte_4A59CBA & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A59CBA = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(bgmName, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__PlayMovie(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TitleInfoWarBoardTitleComponent_c *v4; // x0
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  CRIMoviePlayer_o *moviePlayer; // x20
  TitleInfoWarBoardTitleComponent_o *v12; // x0
  const MethodInfo *v13; // x2
  System_String_o *v14; // x21
  System_String_o *Path; // x22
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A59CBD & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1B885B0(&TitleInfoWarBoardTitleComponent_TypeInfo);
    byte_4A59CBD = 1;
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
                                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  UIPanel__set_depth((UIPanel_o *)CriMoviePlayerObject, this->fields.moviePlayerDepth, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
  this->fields.moviePlayer = (struct CRIMoviePlayer_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.moviePlayer, (int32_t)Component_object, v9, v10);
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)this->fields.moviePlayer;
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  v16.fields.r = 1.0;
  v16.fields.g = 1.0;
  v16.fields.b = 1.0;
  v16.fields.a = 1.0;
  CRIMoviePlayer__SetBackgroundColor((CRIMoviePlayer_o *)CriMoviePlayerObject, v16, 0LL);
  moviePlayer = this->fields.moviePlayer;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)TitleInfoWarBoardTitleComponent__CreateMoviePath(
                                                       v12,
                                                       this->fields.movieName,
                                                       v13);
  if ( !this->fields.movieAssetData )
    goto LABEL_18;
  v14 = (System_String_o *)CriMoviePlayerObject;
  Path = AssetData__get_Path(this->fields.movieAssetData, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4A56A30 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    byte_4A56A30 = 1;
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
          v14,
          Path,
          *(float *)(*(_QWORD *)&CriMoviePlayerObject[7].fields.m_CachedPtr + 36LL),
          this->fields.isPlayedStartMovie,
          0LL,
          0LL,
          0,
          0LL,
          0,
          0,
          1,
          0LL),
        (CriMoviePlayerObject = (UnityEngine_GameObject_o *)this->fields.moviePlayer) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(CriMoviePlayerObject, v6);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)CriMoviePlayerObject, 1, 1, 1, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__RefreshPanel(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_4A59CB6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59CB6 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  base2Panel = (UnityEngine_Object_o *)this->fields.base2Panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(base2Panel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.base2Panel;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.base2Panel;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1B8880C(gameObject, v4);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__SetBackgrundActive(
        TitleInfoWarBoardTitleComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *backgrund; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A59CC1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59CC1 = 1;
  }
  backgrund = (UnityEngine_Object_o *)this->fields.backgrund;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(backgrund, 0LL, 0LL) )
  {
    v7 = this->fields.backgrund;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__SetButtonEnable(
        TitleInfoWarBoardTitleComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = isEnable;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoWarBoardTitleComponent__SetState(
        TitleInfoWarBoardTitleComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A59CBC & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
    byte_4A59CBC = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
}


void __fastcall TitleInfoWarBoardTitleComponent__Setup(
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
  struct WarBoardQuestEntity_o **p_warBoardQuestEntity; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_String_o *monitor; // x1
  Il2CppObject *MasterData_object; // x23
  struct System_String_o *WarBoardStartMovieName; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct WarBoardQuestEntity_o *v27; // x8
  int32_t questPhase; // w22
  int32_t questId; // w23
  WarBoardMovieHistoryManager_c *v30; // x0
  bool exists; // w0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  Il2CppObject *v34; // x23
  Il2CppObject *Component_object; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x24
  Il2CppClass *klass; // x23
  System_String_o *v40; // x22
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Action_o *v44; // x25
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  UnityEngine_Object_o *titleLabel; // x20
  UnityEngine_Object_o *messageManager; // x20
  struct ScriptLineMessage_o *v51; // x8
  UnityEngine_Object_o *messageLabel; // x20
  Il2CppObject *v53; // [xsp+8h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v54; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v55; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4A59CB5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1B885B0(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__);
    sub_1B885B0(&TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo);
    sub_1B885B0(&WarBoardMovieHistoryManager_TypeInfo);
    sub_1B885B0(&StringLiteral_25342/*"仮"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59CB5 = 1;
  }
  entity = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  v9 = sub_1B887FC(TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo);
  TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___ctor(
    (TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_69;
  *(_QWORD *)(v9 + 16) = callbackDecide;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)callbackDecide, v12, v13);
  this->fields.warBoardQuestEntity = warBoardQuestEnt;
  p_warBoardQuestEntity = &this->fields.warBoardQuestEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.warBoardQuestEntity,
    (int32_t)warBoardQuestEnt,
    v15,
    v16);
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bgmName, v17, v18, v19);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_69;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         (*p_warBoardQuestEntity)->fields.stageId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !entity || !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &v53,
                                  (int32_t)entity[2].klass,
                                  (const MethodInfo_311D988 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v53 )
        goto LABEL_69;
      Instance = (DataManager_o *)System_String__IsNullOrEmpty((System_String_o *)v53[1].monitor, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v53 )
          goto LABEL_69;
        monitor = (struct System_String_o *)v53[1].monitor;
        this->fields.bgmName = monitor;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bgmName, (int32_t)monitor, v20, v21);
      }
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
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
    &v55,
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
    (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( !v55 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)QuestPhaseMaster__TryGetEntity(
                                (QuestPhaseMaster_o *)Instance,
                                &v54,
                                (*p_warBoardQuestEntity)->fields.questId,
                                (*p_warBoardQuestEntity)->fields.questPhase,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)v54;
    if ( !v54 )
      goto LABEL_69;
    WarBoardStartMovieName = QuestPhaseEntity__GetWarBoardStartMovieName(v54, 0LL);
    this->fields.movieName = WarBoardStartMovieName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.movieName, (int32_t)WarBoardStartMovieName, v25, v26);
  }
  v27 = *p_warBoardQuestEntity;
  if ( !*p_warBoardQuestEntity )
LABEL_69:
    sub_1B8880C(Instance, v11);
  questId = v27->fields.questId;
  questPhase = v27->fields.questPhase;
  v30 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v30 = WarBoardMovieHistoryManager_TypeInfo;
  }
  exists = WarBoardMovieHistoryManager__ExistsHistory(
             questId,
             questPhase,
             v30->static_fields->SAVE_KEY_START_MOVIE,
             0LL);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  this->fields.isPlayedStartMovie = exists;
  this->fields.isButtonEnable = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v34 )
      goto LABEL_69;
    Instance = (DataManager_o *)CommonUI__CreateScreeenTouchInfo(
                                  (CommonUI_o *)v34,
                                  (UnityEngine_Transform_o *)Instance,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.screenTouchInfo, (int32_t)Component_object, v36, v37);
  }
  Instance = (DataManager_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_69;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)v55;
  if ( !v55 )
    goto LABEL_69;
  v38 = (System_String_o *)StringLiteral_25342/*"仮"*/;
  Instance = (DataManager_o *)QuestEntity__getQuestName((QuestEntity_o *)v55, 0LL);
  if ( !v55 )
    goto LABEL_69;
  klass = v55[2].klass;
  v40 = (System_String_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_69;
  ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           (UnityEngine_Component_o *)Instance,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48719376;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__48719376,
    v42,
    v43);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)UnityEngine_Component__GetComponentInChildren_object__48719376(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !Instance )
    goto LABEL_69;
  *(&Instance->fields.isFailedLoad + 1) = 1;
  v44 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v9,
    Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__,
    0LL);
  this->fields.callbackDecide = v44;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackDecide, (int32_t)v44, v45, v46);
  this->fields.callbackCancel = callbackCancel;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackCancel, (int32_t)callbackCancel, v47, v48);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.titleLabel;
    if ( !Instance )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)Instance, v38, 0LL);
  }
  messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageManager, 0LL, 0LL) )
  {
    if ( System_String__IsNullOrEmpty((System_String_o *)klass, 0LL) )
    {
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(v40, 0LL);
      v51 = this->fields.messageManager;
      if ( v51 )
      {
        if ( ((unsigned __int8)Instance & 1) != 0 )
          ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
        else
          ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v51->klass->vtable._7_SetText.method)(
            this->fields.messageManager,
            v40,
            0LL,
            0LL,
            0LL,
            0LL,
            v51->klass[1]._1.image);
        return;
      }
    }
    else
    {
      Instance = (DataManager_o *)this->fields.messageManager;
      if ( Instance )
      {
        (*(void (__fastcall **)(DataManager_o *, Il2CppClass *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))&Instance->klass[1]._1.this_arg.bits)(
          Instance,
          klass,
          0LL,
          0LL,
          0LL,
          0LL,
          Instance->klass[1]._1.element_class);
        return;
      }
    }
    goto LABEL_69;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.messageLabel;
    if ( Instance )
    {
      UILabel__set_text((UILabel_o *)Instance, v40, 0LL);
      return;
    }
    goto LABEL_69;
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__StartTitleEffect(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4A59CB8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6559/*"FadeOutBGM"*/);
    sub_1B885B0(&StringLiteral_10636/*"PlayBGM"*/);
    byte_4A59CB8 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6559/*"FadeOutBGM"*/,
    this->fields.BgmFadeOutStartTime,
    0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.bgmName, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10636/*"PlayBGM"*/,
      this->fields.BgmPlayStartTime,
      0LL);
  TitleInfoWarBoardTitleComponent__SetState(this, 3, v3);
}


void __fastcall TitleInfoWarBoardTitleComponent__Update(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A59CB4 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
    byte_4A59CB4 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30AAE44 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
  TitleInfoWarBoardTitleComponent__RefreshPanel(this, method);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickCancelButton_b__52_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoWarBoardTitleComponent_o *v2; // x19
  struct System_Action_o *callbackCancel; // x8
  UnityEngine_Object_o *gameObject; // x19

  v2 = this;
  if ( (byte_4A59CC9 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59CC9 = 1;
  }
  callbackCancel = v2->fields.callbackCancel;
  if ( !callbackCancel )
    sub_1B8880C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackCancel->fields.m_target)(
    callbackCancel->fields.original_method_info,
    *(_QWORD *)&callbackCancel->fields.extra_arg);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickDecideButton_b__51_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  void *monitor; // x8
  UnityEngine_Object_o *gameObject; // x19

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_4A59CC8 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59CC8 = 1;
  }
  monitor = v2[4].monitor;
  if ( !monitor )
    sub_1B8880C(this, method);
  (*((void (__fastcall **)(_QWORD, _QWORD))monitor + 3))(*((_QWORD *)monitor + 8), *((_QWORD *)monitor + 5));
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___Play_b__34_0(
        TitleInfoWarBoardTitleComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x2

  if ( (byte_4A59CC7 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A59CC7 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  this->fields.movieAssetData = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.movieAssetData, (int32_t)data, v5, v6);
  TitleInfoWarBoardTitleComponent__SetState(this, 1, v7);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie___ctor(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__begin(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  this->fields.state = 1;
  if ( !that )
    sub_1B8880C(this, 0LL);
  TitleInfoWarBoardTitleComponent__PlayMovie(that, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__end(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A59DB0 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59DB0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__InitConnect((CommonUI_o *)Instance, 0LL), this->fields.state = 0, !that) )
    sub_1B8880C(Instance, v6);
  TitleInfoWarBoardTitleComponent__EndMovie(that, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__update(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  int32_t state; // w8
  TitleInfoWarBoardTitleComponent_StateMovie_o *v4; // x19

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
        if ( CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0LL) )
          v4->fields.state = 2;
        return;
      }
    }
LABEL_12:
    sub_1B8880C(this, that);
  }
  if ( !that )
    goto LABEL_12;
  this = (TitleInfoWarBoardTitleComponent_StateMovie_o *)that->fields.moviePlayer;
  if ( !this )
    goto LABEL_12;
  if ( !CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0LL) )
  {
    v4->fields.state = 3;
    TitleInfoWarBoardTitleComponent__StartTitleEffect(that, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade___ctor(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade__begin(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4A59DAE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__);
    sub_1B885B0(&TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo);
    byte_4A59DAE = 1;
  }
  v4 = sub_1B887FC(TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = that;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v4,
    Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v11 )
LABEL_8:
    sub_1B8880C(v5, v6);
  CommonUI__maskFadeout(v11, 2, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade__end(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A59DAF & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59DAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade__update(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0___ctor(
        TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0___begin_b__0(
        TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TitleInfoWarBoardTitleComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B8880C(0LL, method);
  TitleInfoWarBoardTitleComponent__SetState(that, 2, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateNone___ctor(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateNone__begin(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StateNone__end(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StateNone__update(
        TitleInfoWarBoardTitleComponent_StateNone_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StatePlay___ctor(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StatePlay__begin(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v5; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v7; // x19
  System_String_o *v8; // x0

  if ( (byte_4A59DB1 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59DB1 = 1;
  }
  if ( !that )
    goto LABEL_14;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    TitleInfoWarBoardTitleComponent__SetBackgrundActive(that, 1, 0LL);
    v5 = that->fields.mAnimation;
    if ( v5 )
    {
      this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__Play_69204472(v5, name, 0LL);
        v7 = that->fields.mAnimation;
        if ( v7 )
        {
          this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v7, 0LL);
          if ( this )
          {
            v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v7, v8, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_14:
    sub_1B8880C(this, that);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent_StatePlay__end(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StatePlay__update(
        TitleInfoWarBoardTitleComponent_StatePlay_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v5; // x20
  System_String_o *name; // x0

  if ( (byte_4A59DB2 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59DB2 = 1;
  }
  if ( !that )
    goto LABEL_13;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mAnimation;
    if ( v5 )
    {
      this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v5, name, 0LL);
        if ( this )
        {
          if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) >= 1.0 )
            TitleInfoWarBoardTitleComponent__SetState(that, 4, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1B8880C(this, that);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent_StateTouchWait___ctor(
        TitleInfoWarBoardTitleComponent_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateTouchWait__begin(
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
                                                                     0LL)) == 0LL )
  {
    sub_1B8880C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateTouchWait__end(
        TitleInfoWarBoardTitleComponent_StateTouchWait_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent_StateTouchWait__update(
        TitleInfoWarBoardTitleComponent_StateTouchWait_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___ctor(
        TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___Setup_b__0(
        TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callbackDecide; // x8

  callbackDecide = this->fields.callbackDecide;
  if ( !callbackDecide )
    sub_1B8880C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackDecide->fields.m_target)(
    callbackDecide->fields.original_method_info,
    *(_QWORD *)&callbackDecide->fields.extra_arg);
}