void __fastcall TitleInfoWarBoardTitleComponent___cctor(const MethodInfo *method)
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

  if ( (byte_4B14D20 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoWarBoardTitleComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3999/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v8, v9);
    byte_4B14D20 = 1;
  }
  TitleInfoWarBoardTitleComponent_TypeInfo->static_fields->MOVIE_PLAYER_OBJECT_PATH = (struct System_String_o *)StringLiteral_3999/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoWarBoardTitleComponent_TypeInfo->static_fields,
    StringLiteral_3999/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TitleInfoWarBoardTitleComponent___ctor(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4B14D1F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B14D1F = 1;
  }
  this->fields.TitleFadeOutPlayTime = 1.0;
  *(_QWORD *)&this->fields.BgmFadeOutPlayTime = 0x400000003F800000LL;
  v9 = StringLiteral_1/*""*/;
  this->fields.movieName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.movieName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  this->fields.moviePlayerDepth = 100;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Awake(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  struct CStateManager_TitleInfoWarBoardTitleComponent__o **p_mFSM; // x20
  CStateManager_T__o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  TitleInfoWarBoardTitleComponent_StateNone_o *v37; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v39; // x1
  CStateManager_T__o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  TitleInfoWarBoardTitleComponent_StateMovieFade_o *v44; // x22
  CStateManager_T__o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  TitleInfoWarBoardTitleComponent_StateMovie_o *v49; // x22
  CStateManager_T__o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  TitleInfoWarBoardTitleComponent_StatePlay_o *v54; // x22
  CStateManager_T__o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  TitleInfoWarBoardTitleComponent_StateTouchWait_o *v59; // x21
  const MethodInfo *v60; // x2
  UnityEngine_Object_o *particleObj; // x21
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  __int64 v65; // x1
  Il2CppObject *v66; // x21
  Il2CppObject *v67; // x21
  __int64 v68; // x1
  __int64 v69; // x2
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7

  if ( (byte_4B14D0D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_TitleInfoWarBoardTitleComponent__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo, v15, v16);
    sub_1BCA7E0(&TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo, v17, v18);
    sub_1BCA7E0(&TitleInfoWarBoardTitleComponent_StateNone_TypeInfo, v19, v20);
    sub_1BCA7E0(&TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo, v21, v22);
    sub_1BCA7E0(&TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo, v23, v24);
    byte_4B14D0D = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v26 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v26,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_313FBC4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TitleInfoWarBoardTitleComponent__o *)v26;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v26, v27, v28, v29, v30, v31, v32);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v37 = (TitleInfoWarBoardTitleComponent_StateNone_o *)sub_1BCAA2C(
                                                           TitleInfoWarBoardTitleComponent_StateNone_TypeInfo,
                                                           v34,
                                                           v35,
                                                           v36);
    TitleInfoWarBoardTitleComponent_StateNone___ctor(v37, 0LL);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v37,
      (const MethodInfo_313FC6C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v40 = (CStateManager_T__o *)*p_mFSM;
    v44 = (TitleInfoWarBoardTitleComponent_StateMovieFade_o *)sub_1BCAA2C(
                                                                TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo,
                                                                v41,
                                                                v42,
                                                                v43);
    TitleInfoWarBoardTitleComponent_StateMovieFade___ctor(v44, 0LL);
    if ( !v40 )
      goto LABEL_25;
    CStateManager_object___add(
      v40,
      1,
      (IState_T__o *)v44,
      (const MethodInfo_313FC6C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v45 = (CStateManager_T__o *)*p_mFSM;
    v49 = (TitleInfoWarBoardTitleComponent_StateMovie_o *)sub_1BCAA2C(
                                                            TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo,
                                                            v46,
                                                            v47,
                                                            v48);
    TitleInfoWarBoardTitleComponent_StateMovie___ctor(v49, 0LL);
    if ( !v45 )
      goto LABEL_25;
    CStateManager_object___add(
      v45,
      2,
      (IState_T__o *)v49,
      (const MethodInfo_313FC6C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v50 = (CStateManager_T__o *)*p_mFSM;
    v54 = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_1BCAA2C(
                                                           TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo,
                                                           v51,
                                                           v52,
                                                           v53);
    TitleInfoWarBoardTitleComponent_StatePlay___ctor(v54, 0LL);
    if ( !v50 )
      goto LABEL_25;
    CStateManager_object___add(
      v50,
      3,
      (IState_T__o *)v54,
      (const MethodInfo_313FC6C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v55 = (CStateManager_T__o *)*p_mFSM;
    v59 = (TitleInfoWarBoardTitleComponent_StateTouchWait_o *)sub_1BCAA2C(
                                                                TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo,
                                                                v56,
                                                                v57,
                                                                v58);
    TitleInfoWarBoardTitleComponent_StateTouchWait___ctor(v59, 0LL);
    if ( !v55 )
      goto LABEL_25;
    CStateManager_object___add(
      v55,
      4,
      (IState_T__o *)v59,
      (const MethodInfo_313FC6C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    TitleInfoWarBoardTitleComponent__SetState(this, 0, v60);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v66 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
      v67 = UnityEngine_Object__Instantiate_object_(
              v66,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v67, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v67, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4B109C1 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v68, v69);
          byte_4B109C1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v67,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v67 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v67,
                                         (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v67;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.particleObj,
              (int64_t)v67,
              v70,
              v71,
              v72,
              v73,
              v74,
              v75);
            goto LABEL_24;
          }
        }
LABEL_25:
        sub_1BCAA3C(ComponentInChildren_object, v39);
      }
    }
  }
LABEL_24:
  TitleInfoWarBoardTitleComponent__SetBackgrundActive(this, 0, v63);
}


UnityEngine_GameObject_o *__fastcall TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *moviePlayerName,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  Il2CppObject *object; // x19
  Il2CppObject *v16; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *Component_object; // x20
  __int64 v21; // x1
  Il2CppObject *v22; // x20

  if ( (byte_4B14D18 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIRootReScale___, moviePlayerName, parent);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIRoot___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_GameObject___, v12, v13);
    byte_4B14D18 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerName,
             (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v16 = UnityEngine_Object__Instantiate_object_(
          object,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( v17 )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v16, parent, 0LL);
  if ( !v16 )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v16,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIRoot___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v17 )
  {
    if ( !Component_object )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  v22 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v16,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL);
  if ( v17 )
  {
    if ( v22 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v22, 0, 0LL);
      goto LABEL_18;
    }
LABEL_19:
    sub_1BCAA3C(v17, v18);
  }
LABEL_18:
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v16, 0LL);
  return (UnityEngine_GameObject_o *)v16;
}


System_String_o *__fastcall TitleInfoWarBoardTitleComponent__CreateMoviePath(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *movieName,
        const MethodInfo *method)
{
  if ( (byte_4B14D19 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9281/*"Movie/{0}.usm"*/, movieName, method);
    byte_4B14D19 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9281/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__EndMovie(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *moviePlayer; // x20
  CRIMoviePlayer_o *v7; // x0
  __int64 v8; // x1
  struct WarBoardQuestEntity_o *warBoardQuestEntity; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  WarBoardMovieHistoryManager_c *v12; // x0

  if ( (byte_4B14D1A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v4, v5);
    byte_4B14D1A = 1;
  }
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(moviePlayer, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v7 = this->fields.moviePlayer;
    if ( !v7 )
      goto LABEL_12;
    CRIMoviePlayer__Dispose(v7, 0LL);
  }
  warBoardQuestEntity = this->fields.warBoardQuestEntity;
  if ( !warBoardQuestEntity )
LABEL_12:
    sub_1BCAA3C(v7, v8);
  questId = warBoardQuestEntity->fields.questId;
  questPhase = warBoardQuestEntity->fields.questPhase;
  v12 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v8);
    v12 = WarBoardMovieHistoryManager_TypeInfo;
  }
  WarBoardMovieHistoryManager__AddHistory(questId, questPhase, v12->static_fields->SAVE_KEY_START_MOVIE, 0LL);
  WarBoardMovieHistoryManager__WriteData(0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__FadeOutBGM(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  float BgmFadeOutPlayTime; // s8

  if ( (byte_4B14D13 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B14D13 = 1;
  }
  BgmFadeOutPlayTime = this->fields.BgmFadeOutPlayTime;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__fadeoutBgm(BgmFadeOutPlayTime, 0LL);
}


int32_t __fastcall TitleInfoWarBoardTitleComponent__GetState(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoWarBoardTitleComponent_o *v3; // x19
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B14D15 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1BCA7E0(
                                                  &Method_CStateManager_TitleInfoWarBoardTitleComponent__getState__,
                                                  method,
                                                  v2);
    byte_4B14D15 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickCancelButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1

  if ( (byte_4B14D1D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__, v8, v9);
    sub_1BCA7E0(&Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__, v10, v11);
    byte_4B14D1D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v12 = Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_TitleInfoWarBoardTitleComponent_OnClickCancelButton__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = AvalonSceneManager_TypeInfo;
    v19 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15);
      v18 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
    v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
    System_Action___ctor(
      v21,
      (Il2CppObject *)this,
      Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__,
      0LL);
    if ( !v19 )
      sub_1BCAA3C(v22, v23);
    CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v21, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickDecideButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  Il2CppObject *Instance; // x0
  float TitleFadeOutPlayTime; // s8
  CommonUI_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x21

  if ( (byte_4B14D1C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__, v6, v7);
    sub_1BCA7E0(&Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__, v8, v9);
    byte_4B14D1C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v10 = Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_TitleInfoWarBoardTitleComponent_OnClickDecideButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlayCommonSe(v11, 28, 0LL);
    screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
    this->fields.isButtonEnable = 0;
    if ( !screenTouchInfo
      || (screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          TitleFadeOutPlayTime = this->fields.TitleFadeOutPlayTime,
          v16 = (CommonUI_o *)Instance,
          v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19),
          System_Action___ctor(
            v20,
            (Il2CppObject *)this,
            Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__,
            0LL),
          !v16) )
    {
      sub_1BCAA3C(screenTouchInfo, v12);
    }
    CommonUI__maskFadeout(v16, 1, TitleFadeOutPlayTime, v20, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnEnable(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B14D1E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3157/*"BackAnchor/BtnBg"*/, method, v2);
    byte_4B14D1E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_3157/*"BackAnchor/BtnBg"*/, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Play(
        TitleInfoWarBoardTitleComponent_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v20; // x20
  System_String_o *name; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  System_String_o *MoviePath; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  __int64 v30; // x1

  if ( (byte_4B14D11 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, end_act, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__, v14, v15);
    byte_4B14D11 = 1;
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
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v20 = this->fields.mAnimation;
    if ( v20 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( gameObject )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v20, name, 0LL);
        if ( gameObject )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
          goto LABEL_11;
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(gameObject, v17);
  }
LABEL_11:
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.movieName, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_15;
  MoviePath = TitleInfoWarBoardTitleComponent__CreateMoviePath(
                (TitleInfoWarBoardTitleComponent_o *)IsNullOrEmpty,
                this->fields.movieName,
                v24);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27, v28);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)this,
    Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v29, 1, 0LL) )
LABEL_15:
    TitleInfoWarBoardTitleComponent__StartTitleEffect(this, v23);
}


void __fastcall TitleInfoWarBoardTitleComponent__PlayBGM(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *bgmName; // x19

  if ( (byte_4B14D14 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B14D14 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__playBgm(bgmName, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__PlayMovie(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  TitleInfoWarBoardTitleComponent_c *v11; // x0
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  Il2CppObject *Component_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  CRIMoviePlayer_o *moviePlayer; // x20
  TitleInfoWarBoardTitleComponent_o *v23; // x0
  const MethodInfo *v24; // x2
  System_String_o *v25; // x21
  __int64 v26; // x2
  System_String_o *Path; // x22
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B14D17 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v7, v8);
    sub_1BCA7E0(&TitleInfoWarBoardTitleComponent_TypeInfo, v9, v10);
    byte_4B14D17 = 1;
  }
  v11 = TitleInfoWarBoardTitleComponent_TypeInfo;
  if ( !TitleInfoWarBoardTitleComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoWarBoardTitleComponent_TypeInfo, method);
    v11 = TitleInfoWarBoardTitleComponent_TypeInfo;
  }
  CriMoviePlayerObject = TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
                           (TitleInfoWarBoardTitleComponent_o *)v11,
                           v11->static_fields->MOVIE_PLAYER_OBJECT_PATH,
                           (UnityEngine_Component_o *)this,
                           v3);
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  v14 = CriMoviePlayerObject;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CriMoviePlayerObject,
                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  UIPanel__set_depth((UIPanel_o *)CriMoviePlayerObject, this->fields.moviePlayerDepth, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v14,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
  this->fields.moviePlayer = (struct CRIMoviePlayer_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.moviePlayer,
    (int64_t)Component_object,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)this->fields.moviePlayer;
  if ( !CriMoviePlayerObject )
    goto LABEL_18;
  v28.fields.r = 1.0;
  v28.fields.g = 1.0;
  v28.fields.b = 1.0;
  v28.fields.a = 1.0;
  CRIMoviePlayer__SetBackgroundColor((CRIMoviePlayer_o *)CriMoviePlayerObject, v28, 0LL);
  moviePlayer = this->fields.moviePlayer;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)TitleInfoWarBoardTitleComponent__CreateMoviePath(
                                                       v23,
                                                       this->fields.movieName,
                                                       v24);
  if ( !this->fields.movieAssetData )
    goto LABEL_18;
  v25 = (System_String_o *)CriMoviePlayerObject;
  Path = AssetData__get_Path(this->fields.movieAssetData, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v13);
  if ( !byte_4B11950 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, v13, v26);
    byte_4B11950 = 1;
  }
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v13);
    CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  }
  if ( !moviePlayer
    || (CRIMoviePlayer__Initialize(
          moviePlayer,
          v25,
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
    sub_1BCAA3C(CriMoviePlayerObject, v13);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)CriMoviePlayerObject, 1, 1, 1, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__RefreshPanel(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *basePanel; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_4B14D10 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14D10 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
    sub_1BCAA3C(gameObject, v5);
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

  if ( (byte_4B14D1B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isActive, method);
    byte_4B14D1B = 1;
  }
  backgrund = (UnityEngine_Object_o *)this->fields.backgrund;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( !UnityEngine_Object__op_Equality(backgrund, 0LL, 0LL) )
  {
    v7 = this->fields.backgrund;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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

  if ( (byte_4B14D16 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__, *(_QWORD *)&state, method);
    byte_4B14D16 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
}


void __fastcall TitleInfoWarBoardTitleComponent__Setup(
        TitleInfoWarBoardTitleComponent_o *this,
        WarBoardQuestEntity_o *warBoardQuestEnt,
        System_Action_o *callbackDecide,
        System_Action_o *callbackCancel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x21
  DataManager_o *Instance; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct WarBoardQuestEntity_o **p_warBoardQuestEntity; // x22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  void *v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct System_String_o *monitor; // x1
  __int64 v79; // x2
  Il2CppObject *MasterData_object; // x23
  __int64 v81; // x1
  struct System_String_o *WarBoardStartMovieName; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct WarBoardQuestEntity_o *v89; // x8
  int32_t questPhase; // w22
  int32_t questId; // w23
  WarBoardMovieHistoryManager_c *v92; // x0
  bool exists; // w0
  __int64 v94; // x1
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  Il2CppObject *v97; // x23
  Il2CppObject *Component_object; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  System_String_o *v105; // x24
  Il2CppClass *klass; // x23
  System_String_o *v107; // x22
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  __int64 v115; // x2
  __int64 v116; // x3
  System_Action_o *v117; // x25
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  __int64 v130; // x1
  UnityEngine_Object_o *titleLabel; // x20
  UnityEngine_Object_o *messageManager; // x20
  __int64 v133; // x1
  struct ScriptLineMessage_o *v134; // x8
  UnityEngine_Object_o *messageLabel; // x20
  Il2CppObject *v136; // [xsp+8h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v137; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v138; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B14D0F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, warBoardQuestEnt, callbackDecide);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v27, v28);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__, v39, v40);
    sub_1BCA7E0(&TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo, v41, v42);
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&StringLiteral_25597/*"仮"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v47, v48);
    byte_4B14D0F = 1;
  }
  entity = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v136 = 0LL;
  v49 = sub_1BCAA2C(
          TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo,
          warBoardQuestEnt,
          callbackDecide,
          callbackCancel);
  TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___ctor(
    (TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *)v49,
    0LL);
  if ( !v49 )
    goto LABEL_69;
  *(_QWORD *)(v49 + 16) = callbackDecide;
  sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 16), (int64_t)callbackDecide, v52, v53, v54, v55, v56, v57);
  this->fields.warBoardQuestEntity = warBoardQuestEnt;
  p_warBoardQuestEntity = &this->fields.warBoardQuestEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.warBoardQuestEntity,
    (int64_t)warBoardQuestEnt,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = StringLiteral_1/*""*/;
  this->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgmName, (int64_t)v65, v66, v67, v68, v69, v70, v71);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_69;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         (*p_warBoardQuestEntity)->fields.stageId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !entity || !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &v136,
                                  (int32_t)entity[2].klass,
                                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v136 )
        goto LABEL_69;
      Instance = (DataManager_o *)System_String__IsNullOrEmpty((System_String_o *)v136[1].monitor, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v136 )
          goto LABEL_69;
        monitor = (struct System_String_o *)v136[1].monitor;
        this->fields.bgmName = monitor;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgmName, (int64_t)monitor, v72, v73, v74, v75, v76, v77);
      }
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v51);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v51, v79);
    byte_4B12DC3 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v51);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_69;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &v138,
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( !v138 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v81);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)QuestPhaseMaster__TryGetEntity(
                                (QuestPhaseMaster_o *)Instance,
                                &v137,
                                (*p_warBoardQuestEntity)->fields.questId,
                                (*p_warBoardQuestEntity)->fields.questPhase,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)v137;
    if ( !v137 )
      goto LABEL_69;
    WarBoardStartMovieName = QuestPhaseEntity__GetWarBoardStartMovieName(v137, 0LL);
    this->fields.movieName = WarBoardStartMovieName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.movieName,
      (int64_t)WarBoardStartMovieName,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
  }
  v89 = *p_warBoardQuestEntity;
  if ( !*p_warBoardQuestEntity )
LABEL_69:
    sub_1BCAA3C(Instance, v51);
  questId = v89->fields.questId;
  questPhase = v89->fields.questPhase;
  v92 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v51);
    v92 = WarBoardMovieHistoryManager_TypeInfo;
  }
  exists = WarBoardMovieHistoryManager__ExistsHistory(
             questId,
             questPhase,
             v92->static_fields->SAVE_KEY_START_MOVIE,
             0LL);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  this->fields.isPlayedStartMovie = exists;
  this->fields.isButtonEnable = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v94);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    v97 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v97 )
      goto LABEL_69;
    Instance = (DataManager_o *)CommonUI__CreateScreeenTouchInfo(
                                  (CommonUI_o *)v97,
                                  (UnityEngine_Transform_o *)Instance,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo,
      (int64_t)Component_object,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
  }
  Instance = (DataManager_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_69;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)v138;
  if ( !v138 )
    goto LABEL_69;
  v105 = (System_String_o *)StringLiteral_25597/*"仮"*/;
  Instance = (DataManager_o *)QuestEntity__getQuestName((QuestEntity_o *)v138, 0LL);
  if ( !v138 )
    goto LABEL_69;
  klass = v138[2].klass;
  v107 = (System_String_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_69;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           (UnityEngine_Component_o *)Instance,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAnimation,
    (int64_t)ComponentInChildren_object__49322392,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !Instance )
    goto LABEL_69;
  *(&Instance->fields.isFailedLoad + 1) = 1;
  v117 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v115, v116);
  System_Action___ctor(
    v117,
    (Il2CppObject *)v49,
    Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__,
    0LL);
  this->fields.callbackDecide = v117;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackDecide,
    (int64_t)v117,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  this->fields.callbackCancel = callbackCancel;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackCancel,
    (int64_t)callbackCancel,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v130);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.titleLabel;
    if ( !Instance )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)Instance, v105, 0LL);
  }
  messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  if ( UnityEngine_Object__op_Inequality(messageManager, 0LL, 0LL) )
  {
    if ( System_String__IsNullOrEmpty((System_String_o *)klass, 0LL) )
    {
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(v107, 0LL);
      v134 = this->fields.messageManager;
      if ( v134 )
      {
        if ( ((unsigned __int8)Instance & 1) != 0 )
          ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
        else
          ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v134->klass->vtable._7_SetText.method)(
            this->fields.messageManager,
            v107,
            0LL,
            0LL,
            0LL,
            0LL,
            v134->klass[1]._1.image);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v133);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.messageLabel;
    if ( Instance )
    {
      UILabel__set_text((UILabel_o *)Instance, v107, 0LL);
      return;
    }
    goto LABEL_69;
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__StartTitleEffect(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4B14D12 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6678/*"FadeOutBGM"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_10770/*"PlayBGM"*/, v4, v5);
    byte_4B14D12 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6678/*"FadeOutBGM"*/,
    this->fields.BgmFadeOutStartTime,
    0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.bgmName, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10770/*"PlayBGM"*/,
      this->fields.BgmPlayStartTime,
      0LL);
  TitleInfoWarBoardTitleComponent__SetState(this, 3, v6);
}


void __fastcall TitleInfoWarBoardTitleComponent__Update(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B14D0E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_TitleInfoWarBoardTitleComponent__update__, method, v2);
    byte_4B14D0E = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
  TitleInfoWarBoardTitleComponent__RefreshPanel(this, method);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickCancelButton_b__52_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoWarBoardTitleComponent_o *v3; // x19
  struct System_Action_o *callbackCancel; // x8
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  v3 = this;
  if ( (byte_4B14D23 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14D23 = 1;
  }
  callbackCancel = v3->fields.callbackCancel;
  if ( !callbackCancel )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackCancel->fields.m_target)(
    callbackCancel->fields.original_method_info,
    *(_QWORD *)&callbackCancel->fields.extra_arg);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickDecideButton_b__51_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *v3; // x19
  void *monitor; // x8
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  v3 = (UnityEngine_Component_o *)this;
  if ( (byte_4B14D22 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14D22 = 1;
  }
  monitor = v3[4].monitor;
  if ( !monitor )
    sub_1BCAA3C(this, method);
  (*((void (__fastcall **)(_QWORD, _QWORD))monitor + 3))(*((_QWORD *)monitor + 8), *((_QWORD *)monitor + 5));
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v3, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___Play_b__34_0(
        TitleInfoWarBoardTitleComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x2

  if ( (byte_4B14D21 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, data, method);
    byte_4B14D21 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, data);
  SoundManager__stopBgm(0LL);
  this->fields.movieAssetData = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.movieAssetData, (int64_t)data, v5, v6, v7, v8, v9, v10);
  TitleInfoWarBoardTitleComponent__SetState(this, 1, v11);
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
    sub_1BCAA3C(this, 0LL);
  TitleInfoWarBoardTitleComponent__PlayMovie(that, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__end(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B14DFB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, that, method);
    byte_4B14DFB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__InitConnect((CommonUI_o *)Instance, 0LL), this->fields.state = 0, !that) )
    sub_1BCAA3C(Instance, v6);
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
    sub_1BCAA3C(this, that);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  AvalonSceneManager_c *v26; // x8
  CommonUI_o *v27; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_4B14DF9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__, v9, v10);
    sub_1BCA7E0(&TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo, v11, v12);
    byte_4B14DF9 = 1;
  }
  v13 = sub_1BCAA2C(TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_8;
  *(_QWORD *)(v13 + 16) = that;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)that, v16, v17, v18, v19, v20, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = AvalonSceneManager_TypeInfo;
  v27 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v23);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v13,
    Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v27 )
LABEL_8:
    sub_1BCAA3C(v14, v15);
  CommonUI__maskFadeout(v27, 2, DEFAULT_FADE_TIME, v29, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade__end(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B14DFA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, that, method);
    byte_4B14DFA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(0LL, method);
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

  if ( (byte_4B14DFC & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    byte_4B14DFC = 1;
  }
  if ( !that )
    goto LABEL_14;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
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
        this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__Play_69899248(v5, name, 0LL);
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
    sub_1BCAA3C(this, that);
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

  if ( (byte_4B14DFD & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    byte_4B14DFD = 1;
  }
  if ( !that )
    goto LABEL_13;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
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
    sub_1BCAA3C(this, that);
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
    sub_1BCAA3C(this, that);
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
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackDecide->fields.m_target)(
    callbackDecide->fields.original_method_info,
    *(_QWORD *)&callbackDecide->fields.extra_arg);
}