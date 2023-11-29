void __fastcall TitleInfoWarBoardTitleComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct TitleInfoWarBoardTitleComponent_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_40F8466 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoWarBoardTitleComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_3423, v2);
    byte_40F8466 = 1;
  }
  static_fields = TitleInfoWarBoardTitleComponent_TypeInfo->static_fields;
  v4 = StringLiteral_3423;
  static_fields->MOVIE_PLAYER_OBJECT_PATH = (struct System_String_o *)StringLiteral_3423;
  sub_B16F98(static_fields, v4);
}


void __fastcall TitleInfoWarBoardTitleComponent___ctor(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  void *v3; // x1

  if ( (byte_40F8465 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F8465 = 1;
  }
  this->fields.TitleFadeOutPlayTime = 1.0;
  *(_QWORD *)&this->fields.BgmFadeOutPlayTime = 0x400000003F800000LL;
  v3 = StringLiteral_1;
  this->fields.movieName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98(&this->fields.movieName, v3);
  this->fields.moviePlayerDepth = 100;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Awake(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct CStateManager_TitleInfoWarBoardTitleComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  TitleInfoWarBoardTitleComponent_StateNone_o *v23; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  TitleInfoWarBoardTitleComponent_StateMovieFade_o *v29; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  TitleInfoWarBoardTitleComponent_StateMovie_o *v35; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  TitleInfoWarBoardTitleComponent_StatePlay_o *v41; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  TitleInfoWarBoardTitleComponent_StateTouchWait_o *v47; // x21
  const MethodInfo *v48; // x2
  UnityEngine_Object_o *particleObj; // x21
  const MethodInfo *v50; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v52; // x21
  UnityEngine_GameObject_o *v53; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8453 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__, method);
    sub_B16FFC(&Method_CStateManager_TitleInfoWarBoardTitleComponent__add__, v6);
    sub_B16FFC(&CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo, v11);
    sub_B16FFC(&TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo, v12);
    sub_B16FFC(&TitleInfoWarBoardTitleComponent_StateNone_TypeInfo, v13);
    sub_B16FFC(&TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo, v14);
    sub_B16FFC(&TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo, v15);
    byte_40F8453 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v17,
      (QAASpotStateController_IMapSpot_o *)this,
      5,
      (const MethodInfo_2907EF0 *)Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TitleInfoWarBoardTitleComponent__o *)v17;
    sub_B16F98(&this->fields.mFSM, v17);
    mFSM = this->fields.mFSM;
    v23 = (TitleInfoWarBoardTitleComponent_StateNone_o *)sub_B170CC(
                                                           TitleInfoWarBoardTitleComponent_StateNone_TypeInfo,
                                                           v19,
                                                           v20,
                                                           v21,
                                                           v22);
    TitleInfoWarBoardTitleComponent_StateNone___ctor(v23, 0LL);
    if ( !mFSM )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v23,
      (const MethodInfo_2907FBC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v24 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v29 = (TitleInfoWarBoardTitleComponent_StateMovieFade_o *)sub_B170CC(
                                                                TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo,
                                                                v25,
                                                                v26,
                                                                v27,
                                                                v28);
    TitleInfoWarBoardTitleComponent_StateMovieFade___ctor(v29, 0LL);
    if ( !v24 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v24,
      1,
      (IState_T__o *)v29,
      (const MethodInfo_2907FBC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v30 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v35 = (TitleInfoWarBoardTitleComponent_StateMovie_o *)sub_B170CC(
                                                            TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo,
                                                            v31,
                                                            v32,
                                                            v33,
                                                            v34);
    TitleInfoWarBoardTitleComponent_StateMovie___ctor(v35, 0LL);
    if ( !v30 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v30,
      2,
      (IState_T__o *)v35,
      (const MethodInfo_2907FBC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v36 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v41 = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_B170CC(
                                                           TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo,
                                                           v37,
                                                           v38,
                                                           v39,
                                                           v40);
    TitleInfoWarBoardTitleComponent_StatePlay___ctor(v41, 0LL);
    if ( !v36 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v36,
      3,
      (IState_T__o *)v41,
      (const MethodInfo_2907FBC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v42 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v47 = (TitleInfoWarBoardTitleComponent_StateTouchWait_o *)sub_B170CC(
                                                                TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo,
                                                                v43,
                                                                v44,
                                                                v45,
                                                                v46);
    TitleInfoWarBoardTitleComponent_StateTouchWait___ctor(v47, 0LL);
    if ( !v42 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v42,
      4,
      (IState_T__o *)v47,
      (const MethodInfo_2907FBC *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    TitleInfoWarBoardTitleComponent__SetState(this, 0, v48);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v52 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v53 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v52,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v53, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v53, zero, 0LL);
        if ( v53 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v53,
                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v53;
            sub_B16F98(&this->fields.particleObj, v53);
            goto LABEL_25;
          }
        }
LABEL_26:
        sub_B170D4();
      }
    }
  }
LABEL_25:
  TitleInfoWarBoardTitleComponent__SetBackgrundActive(this, 0, v50);
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
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x19
  UnityEngine_GameObject_o *v11; // x19
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x20
  UnityEngine_Behaviour_o *v13; // x20

  if ( (byte_40F845E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIRootReScale___, moviePlayerName);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIRoot___, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_GameObject___, v9);
    byte_40F845E = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        moviePlayerName,
                                                        (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      UIAtlas,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    GameObjectExtensions__SafeSetParent(v11, parent, 0LL);
  if ( !v11 )
    goto LABEL_22;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v11,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIRoot___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_22;
    UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, 0, 0LL);
  }
  v13 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v11,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
  {
    if ( v13 )
    {
      UnityEngine_Behaviour__set_enabled(v13, 0, 0LL);
      goto LABEL_21;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_21:
  GameObjectExtensions__ResetLocalScale(v11, 0LL);
  return v11;
}


System_String_o *__fastcall TitleInfoWarBoardTitleComponent__CreateMoviePath(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *movieName,
        const MethodInfo *method)
{
  if ( (byte_40F845F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9183, movieName);
    byte_40F845F = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9183, (Il2CppObject *)movieName, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__EndMovie(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *moviePlayer; // x20
  CRIMoviePlayer_o *v5; // x0
  struct WarBoardQuestEntity_o *warBoardQuestEntity; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  WarBoardMovieHistoryManager_c *v9; // x0

  if ( (byte_40F8460 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&WarBoardMovieHistoryManager_TypeInfo, v3);
    byte_40F8460 = 1;
  }
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(moviePlayer, 0LL, 0LL) )
  {
    v5 = this->fields.moviePlayer;
    if ( !v5 )
      goto LABEL_14;
    CRIMoviePlayer__Dispose(v5, 0LL);
  }
  warBoardQuestEntity = this->fields.warBoardQuestEntity;
  if ( !warBoardQuestEntity )
LABEL_14:
    sub_B170D4();
  questId = warBoardQuestEntity->fields.questId;
  questPhase = warBoardQuestEntity->fields.questPhase;
  v9 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_40F8459 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F8459 = 1;
  }
  BgmFadeOutPlayTime = this->fields.BgmFadeOutPlayTime;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BgmFadeOutPlayTime, 0LL);
}


int32_t __fastcall TitleInfoWarBoardTitleComponent__GetState(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x8

  if ( (byte_40F845B & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_TitleInfoWarBoardTitleComponent__getState__, method);
    byte_40F845B = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_40F8463 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__, v6);
    byte_40F8463 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v12 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__,
      0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v14, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickDecideButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  float TitleFadeOutPlayTime; // s8
  CommonUI_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F8462 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SeManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__, v5);
    byte_40F8462 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(28, 0LL);
    screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
    this->fields.isButtonEnable = 0;
    if ( !screenTouchInfo
      || (gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          TitleFadeOutPlayTime = this->fields.TitleFadeOutPlayTime,
          v10 = (CommonUI_o *)Instance,
          v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
          System_Action___ctor(
            v15,
            (Il2CppObject *)this,
            Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__,
            0LL),
          !v10) )
    {
      sub_B170D4();
    }
    CommonUI__maskFadeout(v10, 1, TitleFadeOutPlayTime, v15, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnEnable(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40F8464 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2644, v3);
    byte_40F8464 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_2644, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Play(
        TitleInfoWarBoardTitleComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v10; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  System_String_o *MoviePath; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  AssetLoader_LoadEndDataHandler_o *v22; // x21

  if ( (byte_40F8457 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, end_act);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__, v7);
    byte_40F8457 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B16F98(&this->fields.mEndAct, end_act);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    v10 = this->fields.mAnimation;
    if ( v10 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        Item = UnityEngine_Animation__get_Item(v10, name, 0LL);
        if ( Item )
        {
          UnityEngine_AnimationState__set_speed(Item, 0.0, 0LL);
          goto LABEL_12;
        }
      }
    }
LABEL_18:
    sub_B170D4();
  }
LABEL_12:
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.movieName, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_17;
  MoviePath = TitleInfoWarBoardTitleComponent__CreateMoviePath(
                (TitleInfoWarBoardTitleComponent_o *)IsNullOrEmpty,
                this->fields.movieName,
                v16);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19, v20, v21);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v22, 1, 0LL) )
LABEL_17:
    TitleInfoWarBoardTitleComponent__StartTitleEffect(this, v15);
}


void __fastcall TitleInfoWarBoardTitleComponent__PlayBGM(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *bgmName; // x19

  if ( (byte_40F845A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F845A = 1;
  }
  bgmName = this->fields.bgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(bgmName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_GameObject_o *v9; // x20
  UIPanel_o *Component_srcLineSprite; // x0
  struct CRIMoviePlayer_o *v11; // x0
  CRIMoviePlayer_o *moviePlayer; // x20
  int v13; // s0
  CRIMoviePlayer_o *v17; // x20
  TitleInfoWarBoardTitleComponent_o *v18; // x0
  const MethodInfo *v19; // x2
  System_String_o *MoviePath; // x0
  System_String_o *v21; // x21
  __int64 v22; // x1
  System_String_o *Path; // x22
  BgmManager_c *v24; // x0
  CRIMoviePlayer_o *v25; // x0

  if ( (byte_40F845D & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v5);
    sub_B16FFC(&TitleInfoWarBoardTitleComponent_TypeInfo, v6);
    byte_40F845D = 1;
  }
  v7 = TitleInfoWarBoardTitleComponent_TypeInfo;
  if ( (BYTE3(TitleInfoWarBoardTitleComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoWarBoardTitleComponent_TypeInfo->_2.cctor_finished )
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
    goto LABEL_21;
  v9 = CriMoviePlayerObject;
  Component_srcLineSprite = (UIPanel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           CriMoviePlayerObject,
                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !Component_srcLineSprite )
    goto LABEL_21;
  UIPanel__set_depth(Component_srcLineSprite, this->fields.moviePlayerDepth, 0LL);
  v11 = (struct CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v9,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
  this->fields.moviePlayer = v11;
  sub_B16F98(&this->fields.moviePlayer, v11);
  moviePlayer = this->fields.moviePlayer;
  *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
  if ( !moviePlayer )
    goto LABEL_21;
  CRIMoviePlayer__SetBackgroundColor(moviePlayer, *(UnityEngine_Color_o *)&v13, 0LL);
  v17 = this->fields.moviePlayer;
  MoviePath = TitleInfoWarBoardTitleComponent__CreateMoviePath(v18, this->fields.movieName, v19);
  if ( !this->fields.movieAssetData )
    goto LABEL_21;
  v21 = MoviePath;
  Path = AssetData__get_Path(this->fields.movieAssetData, 0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_40F6390 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, v22);
    byte_40F6390 = 1;
  }
  v24 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v24 = BgmManager_TypeInfo;
  }
  if ( !v17
    || (CRIMoviePlayer__Initialize(
          v17,
          v21,
          Path,
          v24->static_fields->masterVolume,
          this->fields.isPlayedStartMovie,
          0LL,
          0LL,
          0,
          0LL,
          0,
          0,
          1,
          0LL),
        (v25 = this->fields.moviePlayer) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  CRIMoviePlayer__MoviePlay(v25, 1, 1, 1, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__RefreshPanel(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Object_o *base2Panel; // x20
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_40F8456 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8456 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !v4 )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v6 = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !v6 )
      goto LABEL_22;
    v7 = UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !v7 )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
  }
  base2Panel = (UnityEngine_Object_o *)this->fields.base2Panel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(base2Panel, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.base2Panel;
    if ( v9 )
    {
      v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( v10 )
      {
        UnityEngine_GameObject__SetActive(v10, 0, 0LL);
        v11 = (UnityEngine_Component_o *)this->fields.base2Panel;
        if ( v11 )
        {
          v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( v12 )
          {
            UnityEngine_GameObject__SetActive(v12, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoWarBoardTitleComponent__SetBackgrundActive(
        TitleInfoWarBoardTitleComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *backgrund; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40F8461 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isActive);
    byte_40F8461 = 1;
  }
  backgrund = (UnityEngine_Object_o *)this->fields.backgrund;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(backgrund, 0LL, 0LL) )
  {
    v6 = this->fields.backgrund;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v6, isActive, 0LL);
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
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x0

  if ( (byte_40F845C & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__, *(_QWORD *)&state);
    byte_40F845C = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
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
  TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *v29; // x21
  struct WarBoardQuestEntity_o **p_warBoardQuestEntity; // x22
  void *v31; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v34; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x0
  struct System_String_o *age; // x1
  WebViewManager_o *v37; // x0
  __int64 v38; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x23
  TerminalPramsManager_c *v40; // x0
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  struct System_String_o *WarBoardStartMovieName; // x0
  struct WarBoardQuestEntity_o *v43; // x8
  int32_t questPhase; // w22
  int32_t questId; // w23
  WarBoardMovieHistoryManager_c *v46; // x0
  bool exists; // w0
  UnityEngine_Component_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  CommonUI_o *v50; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v55; // x24
  System_String_o *QuestName; // x0
  System_String_o *name; // x23
  System_String_o *v58; // x22
  UnityEngine_Component_o *v59; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Component_o *v61; // x0
  UIWidget_o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Action_o *v67; // x25
  UnityEngine_Object_o *titleLabel; // x20
  UILabel_o *v69; // x0
  UnityEngine_Object_o *messageManager; // x20
  bool IsNullOrEmpty; // w0
  struct ScriptLineMessage_o *v72; // x8
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *v74; // x0
  struct ScriptLineMessage_o *v75; // x0
  WarEntity_o *v76; // [xsp+0h] [xbp-60h] BYREF
  QuestPhaseEntity_o *v77; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *v78; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40F8455 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, warBoardQuestEnt);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v9);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v16);
    sub_B16FFC(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v18);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v23);
    sub_B16FFC(&Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__, v24);
    sub_B16FFC(&TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo, v25);
    sub_B16FFC(&WarBoardMovieHistoryManager_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_23756, v27);
    sub_B16FFC(&StringLiteral_1, v28);
    byte_40F8455 = 1;
  }
  entity = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v76 = 0LL;
  v29 = (TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *)sub_B170CC(
                                                                     TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo,
                                                                     warBoardQuestEnt,
                                                                     callbackDecide,
                                                                     callbackCancel,
                                                                     method);
  TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_77;
  v29->fields.callbackDecide = callbackDecide;
  sub_B16F98(&v29->fields, callbackDecide);
  this->fields.warBoardQuestEntity = warBoardQuestEnt;
  p_warBoardQuestEntity = &this->fields.warBoardQuestEntity;
  sub_B16F98(&this->fields.warBoardQuestEntity, warBoardQuestEnt);
  v31 = StringLiteral_1;
  this->fields.bgmName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98(&this->fields.bgmName, v31);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !*p_warBoardQuestEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_77;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (*p_warBoardQuestEntity)->fields.stageId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v34 )
      goto LABEL_77;
    v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v34,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !entity || !v35 )
      goto LABEL_77;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v35,
           &v76,
           (int32_t)entity->fields.name,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    {
      if ( !v76 )
        goto LABEL_77;
      if ( !System_String__IsNullOrEmpty(v76->fields.age, 0LL) )
      {
        if ( !v76 )
          goto LABEL_77;
        age = v76->fields.age;
        this->fields.bgmName = age;
        sub_B16F98(&this->fields.bgmName, age);
      }
    }
  }
  v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v37 )
    goto LABEL_77;
  v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v37,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v38);
    byte_40F6057 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  if ( !v39 )
    goto LABEL_77;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v39,
    &v78,
    v40->static_fields->_QuestId_k__BackingField,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( !v78 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !*p_warBoardQuestEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_77;
  if ( QuestPhaseMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         &v77,
         (*p_warBoardQuestEntity)->fields.questId,
         (*p_warBoardQuestEntity)->fields.questPhase,
         0LL) )
  {
    if ( !v77 )
      goto LABEL_77;
    WarBoardStartMovieName = QuestPhaseEntity__GetWarBoardStartMovieName(v77, 0LL);
    this->fields.movieName = WarBoardStartMovieName;
    sub_B16F98(&this->fields.movieName, WarBoardStartMovieName);
  }
  v43 = *p_warBoardQuestEntity;
  if ( !*p_warBoardQuestEntity )
LABEL_77:
    sub_B170D4();
  questId = v43->fields.questId;
  questPhase = v43->fields.questPhase;
  v46 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v46 = WarBoardMovieHistoryManager_TypeInfo;
  }
  exists = WarBoardMovieHistoryManager__ExistsHistory(
             questId,
             questPhase,
             v46->static_fields->SAVE_KEY_START_MOVIE,
             0LL);
  p_screenTouchInfo = (UnityEngine_Component_o **)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  this->fields.isPlayedStartMovie = exists;
  this->fields.isButtonEnable = 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    v50 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v50 )
      goto LABEL_77;
    ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v50, transform, 0, 0LL);
    if ( !ScreeenTouchInfo )
      goto LABEL_77;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                ScreeenTouchInfo,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (UnityEngine_Component_o *)Component_srcLineSprite;
    sub_B16F98(&this->fields.screenTouchInfo, Component_srcLineSprite);
  }
  if ( !*p_screenTouchInfo )
    goto LABEL_77;
  gameObject = UnityEngine_Component__get_gameObject(*p_screenTouchInfo, 0LL);
  if ( !gameObject )
    goto LABEL_77;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( !v78 )
    goto LABEL_77;
  v55 = (System_String_o *)StringLiteral_23756;
  QuestName = QuestEntity__getQuestName((QuestEntity_o *)v78, 0LL);
  if ( !v78 )
    goto LABEL_77;
  name = v78->fields.name;
  v58 = QuestName;
  v59 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v59 )
    goto LABEL_77;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     v59,
                                                                     (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B16F98(&this->fields.mAnimation, ComponentInChildren_UIWidget);
  v61 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v61 )
    goto LABEL_77;
  v62 = UnityEngine_Component__GetComponentInChildren_UIWidget_(
          v61,
          (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !v62 )
    goto LABEL_77;
  *(&v62->fields.mAnchorsCached + 5) = 1;
  v67 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v63, v64, v65, v66);
  System_Action___ctor(
    v67,
    (Il2CppObject *)v29,
    Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__,
    0LL);
  this->fields.callbackDecide = v67;
  sub_B16F98(&this->fields.callbackDecide, v67);
  this->fields.callbackCancel = callbackCancel;
  sub_B16F98(&this->fields.callbackCancel, callbackCancel);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v69 = this->fields.titleLabel;
    if ( !v69 )
      goto LABEL_77;
    UILabel__set_text(v69, v55, 0LL);
  }
  messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageManager, 0LL, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(name, 0LL) )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(v58, 0LL);
      v72 = this->fields.messageManager;
      if ( v72 )
      {
        if ( IsNullOrEmpty )
          ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
        else
          ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v72->klass->vtable._7_SetText.method)(
            this->fields.messageManager,
            v58,
            0LL,
            0LL,
            0LL,
            0LL,
            v72->klass[1]._1.image);
        return;
      }
    }
    else
    {
      v75 = this->fields.messageManager;
      if ( v75 )
      {
        ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v75->klass->vtable._7_SetText.method)(
          v75,
          name,
          0LL,
          0LL,
          0LL,
          0LL,
          v75->klass[1]._1.image);
        return;
      }
    }
    goto LABEL_77;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v74 = this->fields.messageLabel;
    if ( v74 )
    {
      UILabel__set_text(v74, v58, 0LL);
      return;
    }
    goto LABEL_77;
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__StartTitleEffect(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_40F8458 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6519, method);
    sub_B16FFC(&StringLiteral_10628, v3);
    byte_40F8458 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6519,
    this->fields.BgmFadeOutStartTime,
    0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.bgmName, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10628,
      this->fields.BgmPlayStartTime,
      0LL);
  TitleInfoWarBoardTitleComponent__SetState(this, 3, v4);
}


void __fastcall TitleInfoWarBoardTitleComponent__Update(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x0

  if ( (byte_40F8454 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_TitleInfoWarBoardTitleComponent__update__, method);
    byte_40F8454 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
  TitleInfoWarBoardTitleComponent__RefreshPanel(this, method);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickCancelButton_b__52_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *callbackCancel; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F8469 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8469 = 1;
  }
  callbackCancel = this->fields.callbackCancel;
  if ( !callbackCancel )
    sub_B170D4();
  System_Action__Invoke(callbackCancel, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickDecideButton_b__51_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *callbackDecide; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F8468 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8468 = 1;
  }
  callbackDecide = this->fields.callbackDecide;
  if ( !callbackDecide )
    sub_B170D4();
  System_Action__Invoke(callbackDecide, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___Play_b__34_0(
        TitleInfoWarBoardTitleComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_40F8467 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, data);
    byte_40F8467 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  this->fields.movieAssetData = data;
  sub_B16F98(&this->fields.movieAssetData, data);
  TitleInfoWarBoardTitleComponent__SetState(this, 1, v5);
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
    sub_B170D4();
  TitleInfoWarBoardTitleComponent__PlayMovie(that, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__end(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7912 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, that);
    byte_40F7912 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__InitConnect(Instance, 0LL), this->fields.state = 0, !that) )
    sub_B170D4();
  TitleInfoWarBoardTitleComponent__EndMovie(that, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__update(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  int32_t state; // w8
  CRIMoviePlayer_o *moviePlayer; // x0
  CRIMoviePlayer_o *v7; // x0

  state = this->fields.state;
  if ( state != 2 )
  {
    if ( state != 1 )
      return;
    if ( that )
    {
      moviePlayer = that->fields.moviePlayer;
      if ( moviePlayer )
      {
        if ( CRIMoviePlayer__IsPlaying(moviePlayer, 0LL) )
          this->fields.state = 2;
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  if ( !that )
    goto LABEL_12;
  v7 = that->fields.moviePlayer;
  if ( !v7 )
    goto LABEL_12;
  if ( !CRIMoviePlayer__IsPlaying(v7, 0LL) )
  {
    this->fields.state = 3;
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_40F7913 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__, v8);
    sub_B16FFC(&TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo, v9);
    byte_40F7913 = 1;
  }
  v10 = sub_B170CC(TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo, that, method, v3, v4);
  TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0___ctor(
    (TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = that;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)that, v11, v12, v13, v14, v15, v16);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v10,
    Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v24, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade__end(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7914 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, that);
    byte_40F7914 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, 0.0, 0LL, 0LL);
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
    sub_B170D4();
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
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_Animation_o *v8; // x19
  UnityEngine_Object_o *v9; // x0
  System_String_o *v10; // x0
  UnityEngine_AnimationState_o *Item; // x0

  if ( (byte_40F7915 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    byte_40F7915 = 1;
  }
  if ( !that )
    goto LABEL_15;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    TitleInfoWarBoardTitleComponent__SetBackgrundActive(that, 1, 0LL);
    v5 = that->fields.mAnimation;
    if ( v5 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        UnityEngine_Animation__Play_49744236(v5, name, 0LL);
        v8 = that->fields.mAnimation;
        if ( v8 )
        {
          v9 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v8, 0LL);
          if ( v9 )
          {
            v10 = UnityEngine_Object__get_name(v9, 0LL);
            Item = UnityEngine_Animation__get_Item(v8, v10, 0LL);
            if ( Item )
            {
              UnityEngine_AnimationState__set_speed(Item, 1.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_15:
    sub_B170D4();
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
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0

  if ( (byte_40F7916 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    byte_40F7916 = 1;
  }
  if ( !that )
    goto LABEL_14;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    v5 = that->fields.mAnimation;
    if ( v5 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        Item = UnityEngine_Animation__get_Item(v5, name, 0LL);
        if ( Item )
        {
          if ( UnityEngine_AnimationState__get_normalizedTime(Item, 0LL) >= 1.0 )
            TitleInfoWarBoardTitleComponent__SetState(that, 4, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B170D4();
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
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !that
    || (screenTouchInfo = (UnityEngine_Component_o *)that->fields.screenTouchInfo,
        that->fields.isButtonEnable = 1,
        !screenTouchInfo)
    || (gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  System_Action_o *callbackDecide; // x0

  callbackDecide = this->fields.callbackDecide;
  if ( !callbackDecide )
    sub_B170D4();
  System_Action__Invoke(callbackDecide, 0LL);
}