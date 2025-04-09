void __fastcall TitleInfoWarBoardTitleComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_49B9A3D & 1) == 0 )
  {
    sub_1B4CF90(&TitleInfoWarBoardTitleComponent_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_3872/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v4);
    byte_49B9A3D = 1;
  }
  TitleInfoWarBoardTitleComponent_TypeInfo->static_fields->MOVIE_PLAYER_OBJECT_PATH = (struct System_String_o *)StringLiteral_3872/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)TitleInfoWarBoardTitleComponent_TypeInfo->static_fields,
    StringLiteral_3872/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
    v2,
    v3);
}


void __fastcall TitleInfoWarBoardTitleComponent___ctor(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_49B9A3C & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49B9A3C = 1;
  }
  this->fields.TitleFadeOutPlayTime = 1.0;
  *(_QWORD *)&this->fields.BgmFadeOutPlayTime = 0x400000003F800000LL;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.movieName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.movieName, v5, v2, v3);
  this->fields.moviePlayerDepth = 100;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Awake(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct CStateManager_TitleInfoWarBoardTitleComponent__o **p_mFSM; // x20
  CStateManager_T__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v18; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v20; // x1
  CStateManager_T__o *v21; // x21
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x21
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x21
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x20
  Il2CppObject *v28; // x21
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *particleObj; // x21
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x21
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3

  if ( (byte_49B9A2A & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__, method);
    sub_1B4CF90(&Method_CStateManager_TitleInfoWarBoardTitleComponent__add__, v3);
    sub_1B4CF90(&CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo, v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v5);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo, v8);
    sub_1B4CF90(&TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo, v9);
    sub_1B4CF90(&TitleInfoWarBoardTitleComponent_StateNone_TypeInfo, v10);
    sub_1B4CF90(&TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo, v11);
    sub_1B4CF90(&TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo, v12);
    byte_49B9A2A = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v14 = (CStateManager_T__o *)sub_1B4D1DC(CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo);
    CStateManager_object____ctor(
      v14,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_312D7A4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TitleInfoWarBoardTitleComponent__o *)v14;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v14, v15, v16);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v18 = (Il2CppObject *)sub_1B4D1DC(TitleInfoWarBoardTitleComponent_StateNone_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v18,
      (const MethodInfo_312D84C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1B4D1DC(TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !v21 )
      goto LABEL_25;
    CStateManager_object___add(
      v21,
      1,
      (IState_T__o *)v22,
      (const MethodInfo_312D84C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v24 = (Il2CppObject *)sub_1B4D1DC(TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo);
    System_Object___ctor(v24, 0LL);
    if ( !v23 )
      goto LABEL_25;
    CStateManager_object___add(
      v23,
      2,
      (IState_T__o *)v24,
      (const MethodInfo_312D84C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v25 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1B4D1DC(TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_25;
    CStateManager_object___add(
      v25,
      3,
      (IState_T__o *)v26,
      (const MethodInfo_312D84C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v27 = (CStateManager_T__o *)*p_mFSM;
    v28 = (Il2CppObject *)sub_1B4D1DC(TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo);
    System_Object___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_25;
    CStateManager_object___add(
      v27,
      4,
      (IState_T__o *)v28,
      (const MethodInfo_312D84C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    TitleInfoWarBoardTitleComponent__SetState(this, 0, v29);
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
      v33 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = UnityEngine_Object__Instantiate_object_(
              v33,
              (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v34, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_49B5361 )
        {
          sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v35);
          byte_49B5361 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v34,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v34 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v34,
                                         (const MethodInfo_2F536A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v34;
            sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.particleObj, (int32_t)v34, v36, v37);
            goto LABEL_24;
          }
        }
LABEL_25:
        sub_1B4D1EC(ComponentInChildren_object, v20);
      }
    }
  }
LABEL_24:
  TitleInfoWarBoardTitleComponent__SetBackgrundActive(this, 0, v31);
}


UnityEngine_GameObject_o *__fastcall TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *moviePlayerName,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *object; // x19
  Il2CppObject *v11; // x19
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v15; // x20

  if ( (byte_49B9A35 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UIRootReScale___, moviePlayerName);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UIRoot___, v6);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    sub_1B4CF90(&Method_UnityEngine_Resources_Load_GameObject___, v9);
    byte_49B9A35 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerName,
             (const MethodInfo_2F97C44 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__Instantiate_object_(
          object,
          (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( v12 )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v11, parent, 0LL);
  if ( !v11 )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v11,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIRoot___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v12 )
  {
    if ( !Component_object )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  v15 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v11,
          (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
  if ( v12 )
  {
    if ( v15 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15, 0, 0LL);
      goto LABEL_18;
    }
LABEL_19:
    sub_1B4D1EC(v12, v13);
  }
LABEL_18:
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v11, 0LL);
  return (UnityEngine_GameObject_o *)v11;
}


System_String_o *__fastcall TitleInfoWarBoardTitleComponent__CreateMoviePath(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *movieName,
        const MethodInfo *method)
{
  if ( (byte_49B9A36 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8983/*"Movie/{0}.usm"*/, movieName);
    byte_49B9A36 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_8983/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__EndMovie(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *moviePlayer; // x20
  CRIMoviePlayer_o *v5; // x0
  __int64 v6; // x1
  struct WarBoardQuestEntity_o *warBoardQuestEntity; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  WarBoardMovieHistoryManager_c *v10; // x0

  if ( (byte_49B9A37 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&WarBoardMovieHistoryManager_TypeInfo, v3);
    byte_49B9A37 = 1;
  }
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(moviePlayer, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v5 = this->fields.moviePlayer;
    if ( !v5 )
      goto LABEL_12;
    CRIMoviePlayer__Dispose(v5, 0LL);
  }
  warBoardQuestEntity = this->fields.warBoardQuestEntity;
  if ( !warBoardQuestEntity )
LABEL_12:
    sub_1B4D1EC(v5, v6);
  questId = warBoardQuestEntity->fields.questId;
  questPhase = warBoardQuestEntity->fields.questPhase;
  v10 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v10 = WarBoardMovieHistoryManager_TypeInfo;
  }
  WarBoardMovieHistoryManager__AddHistory(questId, questPhase, v10->static_fields->SAVE_KEY_START_MOVIE, 0LL);
  WarBoardMovieHistoryManager__WriteData(0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__FadeOutBGM(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  float BgmFadeOutPlayTime; // s8

  if ( (byte_49B9A30 & 1) == 0 )
  {
    sub_1B4CF90(&SoundManager_TypeInfo, method);
    byte_49B9A30 = 1;
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
  if ( (byte_49B9A32 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1B4CF90(
                                                  &Method_CStateManager_TitleInfoWarBoardTitleComponent__getState__,
                                                  method);
    byte_49B9A32 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B4D1EC(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickCancelButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_49B9A3A & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__, v5);
    sub_1B4CF90(&Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__, v6);
    byte_49B9A3A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v7 = Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B4CFA8(Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    v11 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    v13 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__,
      0LL);
    if ( !v11 )
      sub_1B4D1EC(v14, v15);
    CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickDecideButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  Il2CppObject *Instance; // x0
  float TitleFadeOutPlayTime; // s8
  CommonUI_o *v12; // x20
  System_Action_o *v13; // x21

  if ( (byte_49B9A39 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__, v4);
    sub_1B4CF90(&Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__, v5);
    byte_49B9A39 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v6 = Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B4CFA8(Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v6, v6[4]);
    OverwriteAssetSoundName__PlayCommonSe(v7, 28, 0, 0LL);
    screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
    this->fields.isButtonEnable = 0;
    if ( !screenTouchInfo
      || (screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          TitleFadeOutPlayTime = this->fields.TitleFadeOutPlayTime,
          v12 = (CommonUI_o *)Instance,
          v13 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
          System_Action___ctor(
            v13,
            (Il2CppObject *)this,
            Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__,
            0LL),
          !v12) )
    {
      sub_1B4D1EC(screenTouchInfo, v8);
    }
    CommonUI__maskFadeout(v12, 1, TitleFadeOutPlayTime, v13, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnEnable(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49B9A3B & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3026/*"BackAnchor/BtnBg"*/, method);
    byte_49B9A3B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42438944(transform, (System_String_o *)StringLiteral_3026/*"BackAnchor/BtnBg"*/, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Play(
        TitleInfoWarBoardTitleComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v12; // x20
  System_String_o *name; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  System_String_o *MoviePath; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_49B9A2E & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, end_act);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__, v8);
    byte_49B9A2E = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mEndAct, (int32_t)end_act, (int32_t)method, v3);
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
    v12 = this->fields.mAnimation;
    if ( v12 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( gameObject )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v12, name, 0LL);
        if ( gameObject )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
          goto LABEL_11;
        }
      }
    }
LABEL_16:
    sub_1B4D1EC(gameObject, v10);
  }
LABEL_11:
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.movieName, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_15;
  MoviePath = TitleInfoWarBoardTitleComponent__CreateMoviePath(
                (TitleInfoWarBoardTitleComponent_o *)IsNullOrEmpty,
                this->fields.movieName,
                v16);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)this,
    Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v18, 1, 0LL) )
LABEL_15:
    TitleInfoWarBoardTitleComponent__StartTitleEffect(this, v15);
}


void __fastcall TitleInfoWarBoardTitleComponent__PlayBGM(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *bgmName; // x19

  if ( (byte_49B9A31 & 1) == 0 )
  {
    sub_1B4CF90(&SoundManager_TypeInfo, method);
    byte_49B9A31 = 1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TitleInfoWarBoardTitleComponent_c *v7; // x0
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CRIMoviePlayer_o *moviePlayer; // x20
  TitleInfoWarBoardTitleComponent_o *v15; // x0
  const MethodInfo *v16; // x2
  System_String_o *v17; // x21
  System_String_o *Path; // x22
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B9A34 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v5);
    sub_1B4CF90(&TitleInfoWarBoardTitleComponent_TypeInfo, v6);
    byte_49B9A34 = 1;
  }
  v7 = TitleInfoWarBoardTitleComponent_TypeInfo;
  if ( !TitleInfoWarBoardTitleComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoWarBoardTitleComponent_TypeInfo);
    v7 = TitleInfoWarBoardTitleComponent_TypeInfo;
  }
  CriMoviePlayerObject = TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
                           (TitleInfoWarBoardTitleComponent_o *)v7,
                           v7->static_fields->MOVIE_PLAYER_OBJECT_PATH,
                           (UnityEngine_Component_o *)this,
                           v2);
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  v10 = CriMoviePlayerObject;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CriMoviePlayerObject,
                                                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  UIPanel__set_depth((UIPanel_o *)CriMoviePlayerObject, this->fields.moviePlayerDepth, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v10,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
  this->fields.moviePlayer = (struct CRIMoviePlayer_o *)Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.moviePlayer, (int32_t)Component_object, v12, v13);
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)this->fields.moviePlayer;
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  v19.fields.r = 1.0;
  v19.fields.g = 1.0;
  v19.fields.b = 1.0;
  v19.fields.a = 1.0;
  CRIMoviePlayer__SetBackgroundColor((CRIMoviePlayer_o *)CriMoviePlayerObject, v19, 0LL);
  moviePlayer = this->fields.moviePlayer;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)TitleInfoWarBoardTitleComponent__CreateMoviePath(
                                                       v15,
                                                       this->fields.movieName,
                                                       v16);
  if ( !this->fields.movieAssetData )
    goto LABEL_18;
  v17 = (System_String_o *)CriMoviePlayerObject;
  Path = AssetData__get_Path(this->fields.movieAssetData, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_49B60A3 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, v9);
    byte_49B60A3 = 1;
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
          v17,
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
          0LL,
          0LL),
        (CriMoviePlayerObject = (UnityEngine_GameObject_o *)this->fields.moviePlayer) == 0LL) )
  {
LABEL_18:
    sub_1B4D1EC(CriMoviePlayerObject, v9);
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

  if ( (byte_49B9A2D & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B9A2D = 1;
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
    sub_1B4D1EC(gameObject, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoWarBoardTitleComponent__SetBackgrundActive(
        TitleInfoWarBoardTitleComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *backgrund; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_49B9A38 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, isActive);
    byte_49B9A38 = 1;
  }
  backgrund = (UnityEngine_Object_o *)this->fields.backgrund;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(backgrund, 0LL, 0LL) )
  {
    v7 = this->fields.backgrund;
    if ( !v7 )
      sub_1B4D1EC(0LL, v6);
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

  if ( (byte_49B9A33 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__, *(_QWORD *)&state);
    byte_49B9A33 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B4D1EC(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_312D8D8 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
}


void __fastcall TitleInfoWarBoardTitleComponent__Setup(
        TitleInfoWarBoardTitleComponent_o *this,
        WarBoardQuestEntity_o *warBoardQuestEnt,
        System_Action_o *callbackDecide,
        System_Action_o *callbackCancel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x21
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct WarBoardQuestEntity_o **p_warBoardQuestEntity; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_String_o *monitor; // x1
  Il2CppObject *MasterData_object; // x23
  struct System_String_o *WarBoardStartMovieName; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
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
  const MethodInfo *v57; // x3
  System_String_o *v58; // x24
  Il2CppClass *klass; // x23
  System_String_o *v60; // x22
  Il2CppObject *ComponentInChildren_object__49252240; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_Action_o *v64; // x25
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  UnityEngine_Object_o *titleLabel; // x20
  UnityEngine_Object_o *messageManager; // x20
  struct ScriptLineMessage_o *v71; // x8
  UnityEngine_Object_o *messageLabel; // x20
  Il2CppObject *v73; // [xsp+8h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v74; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v75; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_49B9A2C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, warBoardQuestEnt);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v9);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v10);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BgmMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestPhaseMaster___, v14);
    sub_1B4CF90(&DataManager_TypeInfo, v15);
    sub_1B4CF90(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__, v16);
    sub_1B4CF90(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v17);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v18);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v19);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v20);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v23);
    sub_1B4CF90(&Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__, v24);
    sub_1B4CF90(&TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo, v25);
    sub_1B4CF90(&WarBoardMovieHistoryManager_TypeInfo, v26);
    sub_1B4CF90(&StringLiteral_25050/*"仮"*/, v27);
    sub_1B4CF90(&StringLiteral_1/*""*/, v28);
    byte_49B9A2C = 1;
  }
  entity = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v73 = 0LL;
  v29 = sub_1B4D1DC(TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_69;
  *(_QWORD *)(v29 + 16) = callbackDecide;
  sub_1B4CF34((CGThumbnailListItem_o *)(v29 + 16), (int32_t)callbackDecide, v32, v33);
  this->fields.warBoardQuestEntity = warBoardQuestEnt;
  p_warBoardQuestEntity = &this->fields.warBoardQuestEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.warBoardQuestEntity, (int32_t)warBoardQuestEnt, v35, v36);
  v37 = (int)StringLiteral_1/*""*/;
  this->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bgmName, v37, v38, v39);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_69;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         (*p_warBoardQuestEntity)->fields.stageId,
         (const MethodInfo_319D9E8 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !entity || !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &v73,
                                  (int32_t)entity[2].klass,
                                  (const MethodInfo_319D9E8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v73 )
        goto LABEL_69;
      Instance = (DataManager_o *)System_String__IsNullOrEmpty((System_String_o *)v73[1].monitor, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v73 )
          goto LABEL_69;
        monitor = (struct System_String_o *)v73[1].monitor;
        this->fields.bgmName = monitor;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bgmName, (int32_t)monitor, v40, v41);
      }
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v31);
    byte_49B5A14 = 1;
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
    &v75,
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
    (const MethodInfo_319D9E8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( !v75 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)QuestPhaseMaster__TryGetEntity(
                                (QuestPhaseMaster_o *)Instance,
                                &v74,
                                (*p_warBoardQuestEntity)->fields.questId,
                                (*p_warBoardQuestEntity)->fields.questPhase,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)v74;
    if ( !v74 )
      goto LABEL_69;
    WarBoardStartMovieName = QuestPhaseEntity__GetWarBoardStartMovieName(v74, 0LL);
    this->fields.movieName = WarBoardStartMovieName;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.movieName, (int32_t)WarBoardStartMovieName, v45, v46);
  }
  v47 = *p_warBoardQuestEntity;
  if ( !*p_warBoardQuestEntity )
LABEL_69:
    sub_1B4D1EC(Instance, v31);
  questId = v47->fields.questId;
  questPhase = v47->fields.questPhase;
  v50 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v50 = WarBoardMovieHistoryManager_TypeInfo;
  }
  exists = WarBoardMovieHistoryManager__ExistsHistory(
             questId,
             questPhase,
             v50->static_fields->SAVE_KEY_START_MOVIE,
             0LL);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  this->fields.isPlayedStartMovie = exists;
  this->fields.isButtonEnable = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v54 )
      goto LABEL_69;
    Instance = (DataManager_o *)CommonUI__CreateScreeenTouchInfo(
                                  (CommonUI_o *)v54,
                                  (UnityEngine_Transform_o *)Instance,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.screenTouchInfo, (int32_t)Component_object, v56, v57);
  }
  Instance = (DataManager_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_69;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)v75;
  if ( !v75 )
    goto LABEL_69;
  v58 = (System_String_o *)StringLiteral_25050/*"仮"*/;
  Instance = (DataManager_o *)QuestEntity__getQuestName((QuestEntity_o *)v75, 0LL);
  if ( !v75 )
    goto LABEL_69;
  klass = v75[2].klass;
  v60 = (System_String_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_69;
  ComponentInChildren_object__49252240 = UnityEngine_Component__GetComponentInChildren_object__49252240(
                                           (UnityEngine_Component_o *)Instance,
                                           (const MethodInfo_2EF8790 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49252240;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__49252240,
    v62,
    v63);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)UnityEngine_Component__GetComponentInChildren_object__49252240(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_2EF8790 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !Instance )
    goto LABEL_69;
  *(&Instance->fields.isFailedLoad + 1) = 1;
  v64 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v64,
    (Il2CppObject *)v29,
    Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__,
    0LL);
  this->fields.callbackDecide = v64;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackDecide, (int32_t)v64, v65, v66);
  this->fields.callbackCancel = callbackCancel;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackCancel, (int32_t)callbackCancel, v67, v68);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.titleLabel;
    if ( !Instance )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)Instance, v58, 0LL);
  }
  messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageManager, 0LL, 0LL) )
  {
    if ( System_String__IsNullOrEmpty((System_String_o *)klass, 0LL) )
    {
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(v60, 0LL);
      v71 = this->fields.messageManager;
      if ( v71 )
      {
        if ( ((unsigned __int8)Instance & 1) != 0 )
          ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
        else
          ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v71->klass->vtable._7_SetText.method)(
            this->fields.messageManager,
            v60,
            0LL,
            0LL,
            0LL,
            0LL,
            v71->klass[1]._1.image);
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
      UILabel__set_text((UILabel_o *)Instance, v60, 0LL);
      return;
    }
    goto LABEL_69;
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__StartTitleEffect(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_49B9A2F & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_6481/*"FadeOutBGM"*/, method);
    sub_1B4CF90(&StringLiteral_10424/*"PlayBGM"*/, v3);
    byte_49B9A2F = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6481/*"FadeOutBGM"*/,
    this->fields.BgmFadeOutStartTime,
    0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.bgmName, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10424/*"PlayBGM"*/,
      this->fields.BgmPlayStartTime,
      0LL);
  TitleInfoWarBoardTitleComponent__SetState(this, 3, v4);
}


void __fastcall TitleInfoWarBoardTitleComponent__Update(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49B9A2B & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_TitleInfoWarBoardTitleComponent__update__, method);
    byte_49B9A2B = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_312D8B4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
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
  if ( (byte_49B9A40 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B9A40 = 1;
  }
  callbackCancel = v2->fields.callbackCancel;
  if ( !callbackCancel )
    sub_1B4D1EC(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackCancel->fields.m_target)(
    callbackCancel->fields.original_method_info,
    *(_QWORD *)&callbackCancel->fields.extra_arg);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickDecideButton_b__51_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  void *monitor; // x8
  UnityEngine_Object_o *gameObject; // x19

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_49B9A3F & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B9A3F = 1;
  }
  monitor = v2[4].monitor;
  if ( !monitor )
    sub_1B4D1EC(this, method);
  (*((void (__fastcall **)(_QWORD, _QWORD))monitor + 3))(*((_QWORD *)monitor + 8), *((_QWORD *)monitor + 5));
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___Play_b__34_0(
        TitleInfoWarBoardTitleComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_49B9A3E & 1) == 0 )
  {
    sub_1B4CF90(&SoundManager_TypeInfo, data);
    byte_49B9A3E = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  this->fields.movieAssetData = data;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.movieAssetData, (int32_t)data, v5, v6);
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
    sub_1B4D1EC(this, 0LL);
  TitleInfoWarBoardTitleComponent__PlayMovie(that, (const MethodInfo *)that);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__end(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49B9A43 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, that);
    byte_49B9A43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__InitConnect((CommonUI_o *)Instance, 0LL), this->fields.state = 0, !that) )
    sub_1B4D1EC(Instance, v6);
  TitleInfoWarBoardTitleComponent__EndMovie(that, v6);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__update(
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
        if ( CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0LL) )
          v4->fields.state = 2;
        return;
      }
    }
LABEL_12:
    sub_1B4D1EC(this, that);
  }
  if ( !that )
    goto LABEL_12;
  this = (TitleInfoWarBoardTitleComponent_StateMovie_o *)that->fields.moviePlayer;
  if ( !this )
    goto LABEL_12;
  if ( !CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)this, 0LL) )
  {
    v4->fields.state = 3;
    TitleInfoWarBoardTitleComponent__StartTitleEffect(that, v6);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_49B9A41 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, that);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__, v6);
    sub_1B4CF90(&TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo, v7);
    byte_49B9A41 = 1;
  }
  v8 = sub_1B4D1DC(TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = that;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)that, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v8,
    Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v15 )
LABEL_8:
    sub_1B4D1EC(v9, v10);
  CommonUI__maskFadeout(v15, 2, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade__end(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49B9A42 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, that);
    byte_49B9A42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
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
  const MethodInfo *v2; // x2
  TitleInfoWarBoardTitleComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B4D1EC(0LL, method);
  TitleInfoWarBoardTitleComponent__SetState(that, 2, v2);
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
  const MethodInfo *v5; // x2
  UnityEngine_Animation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v8; // x19
  System_String_o *v9; // x0

  if ( (byte_49B9A44 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, that);
    byte_49B9A44 = 1;
  }
  if ( !that )
    goto LABEL_14;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    TitleInfoWarBoardTitleComponent__SetBackgrundActive(that, 1, v5);
    v6 = that->fields.mAnimation;
    if ( v6 )
    {
      this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__Play_68548868(v6, name, 0LL);
        v8 = that->fields.mAnimation;
        if ( v8 )
        {
          this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v8, 0LL);
          if ( this )
          {
            v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v8, v9, 0LL);
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
    sub_1B4D1EC(this, that);
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
  const MethodInfo *v7; // x2

  if ( (byte_49B9A45 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, that);
    byte_49B9A45 = 1;
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
            TitleInfoWarBoardTitleComponent__SetState(that, 4, v7);
          return;
        }
      }
    }
LABEL_13:
    sub_1B4D1EC(this, that);
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
    sub_1B4D1EC(this, that);
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
    sub_1B4D1EC(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackDecide->fields.m_target)(
    callbackDecide->fields.original_method_info,
    *(_QWORD *)&callbackDecide->fields.extra_arg);
}