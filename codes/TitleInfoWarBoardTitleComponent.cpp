void __fastcall TitleInfoWarBoardTitleComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_43891CB & 1) == 0 )
  {
    sub_B775C4(&TitleInfoWarBoardTitleComponent_TypeInfo);
    sub_B775C4(&StringLiteral_3562/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_43891CB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoWarBoardTitleComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_3562/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_3562/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall TitleInfoWarBoardTitleComponent___ctor(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_43891CA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43891CA = 1;
  }
  this->fields.TitleFadeOutPlayTime = 1.0;
  *(_QWORD *)&this->fields.BgmFadeOutPlayTime = 0x400000003F800000LL;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.movieName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.movieName, v9, v2, v3, v4, v5, v6, v7);
  this->fields.moviePlayerDepth = 100;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Awake(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  struct CStateManager_TitleInfoWarBoardTitleComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x21
  TitleInfoWarBoardTitleComponent_StateNone_o *v12; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  TitleInfoWarBoardTitleComponent_StateMovieFade_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  TitleInfoWarBoardTitleComponent_StateMovie_o *v18; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v19; // x21
  TitleInfoWarBoardTitleComponent_StatePlay_o *v20; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v21; // x20
  TitleInfoWarBoardTitleComponent_StateTouchWait_o *v22; // x21
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *particleObj; // x21
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v27; // x21
  UnityEngine_GameObject_o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43891B8 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    sub_B775C4(&Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    sub_B775C4(&CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo);
    sub_B775C4(&TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo);
    sub_B775C4(&TitleInfoWarBoardTitleComponent_StateNone_TypeInfo);
    sub_B775C4(&TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo);
    sub_B775C4(&TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo);
    byte_43891B8 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B77694(CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      5,
      (const MethodInfo_2CBF0B0 *)Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TitleInfoWarBoardTitleComponent__o *)v4;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    mFSM = this->fields.mFSM;
    v12 = (TitleInfoWarBoardTitleComponent_StateNone_o *)sub_B77694(TitleInfoWarBoardTitleComponent_StateNone_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateNone___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2CBF17C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v16 = (TitleInfoWarBoardTitleComponent_StateMovieFade_o *)sub_B77694(TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateMovieFade___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_2CBF17C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v18 = (TitleInfoWarBoardTitleComponent_StateMovie_o *)sub_B77694(TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateMovie___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_2CBF17C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v19 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v20 = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_B77694(TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo);
    TitleInfoWarBoardTitleComponent_StatePlay___ctor(v20, 0LL);
    if ( !v19 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_2CBF17C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v21 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v22 = (TitleInfoWarBoardTitleComponent_StateTouchWait_o *)sub_B77694(TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateTouchWait___ctor(v22, 0LL);
    if ( !v21 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v21,
      4,
      (IState_T__o *)v22,
      (const MethodInfo_2CBF17C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    TitleInfoWarBoardTitleComponent__SetState(this, 0, v23);
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
      v27 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v28 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v27,
                                          (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v28, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v28, zero, 0LL);
        if ( v28 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v28,
                                                        (const MethodInfo_1DEC070 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v28;
            sub_B77560(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v28,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            goto LABEL_25;
          }
        }
LABEL_26:
        sub_B7769C(ComponentInChildren_Dropdown_DropdownItem, v14);
      }
    }
  }
LABEL_25:
  TitleInfoWarBoardTitleComponent__SetBackgrundActive(this, 0, v25);
}


UnityEngine_GameObject_o *__fastcall TitleInfoWarBoardTitleComponent__CreateCriMoviePlayerObject(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *moviePlayerName,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x19
  UnityEngine_GameObject_o *v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v11; // x20

  if ( (byte_43891C3 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIRoot___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_43891C3 = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        moviePlayerName,
                                                        (const MethodInfo_1DFCC74 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     UIAtlas,
                                     (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( v8 )
    GameObjectExtensions__SafeSetParent(v7, parent, 0LL);
  if ( !v7 )
    goto LABEL_22;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v7,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIRoot___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( v8 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_22;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
  }
  v11 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v7,
                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( v8 )
  {
    if ( v11 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 0, 0LL);
      goto LABEL_21;
    }
LABEL_22:
    sub_B7769C(v8, v9);
  }
LABEL_21:
  GameObjectExtensions__ResetLocalScale(v7, 0LL);
  return v7;
}


System_String_o *__fastcall TitleInfoWarBoardTitleComponent__CreateMoviePath(
        TitleInfoWarBoardTitleComponent_o *this,
        System_String_o *movieName,
        const MethodInfo *method)
{
  if ( (byte_43891C4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9380/*"Movie/{0}.usm"*/);
    byte_43891C4 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9380/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0LL);
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

  if ( (byte_43891C5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&WarBoardMovieHistoryManager_TypeInfo);
    byte_43891C5 = 1;
  }
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(moviePlayer, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v4 = this->fields.moviePlayer;
    if ( !v4 )
      goto LABEL_14;
    CRIMoviePlayer__Dispose(v4, 0LL);
  }
  warBoardQuestEntity = this->fields.warBoardQuestEntity;
  if ( !warBoardQuestEntity )
LABEL_14:
    sub_B7769C(v4, v5);
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

  if ( (byte_43891BE & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43891BE = 1;
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
  TitleInfoWarBoardTitleComponent_o *v2; // x19
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_43891C0 & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_B775C4(&Method_CStateManager_TitleInfoWarBoardTitleComponent__getState__);
    byte_43891C0 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickCancelButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_43891C8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__);
    byte_43891C8 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v4 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v4 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
    v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__,
      0LL);
    if ( !Instance )
      sub_B7769C(v7, v8);
    CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v6, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickDecideButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  WebViewManager_o *Instance; // x0
  float TitleFadeOutPlayTime; // s8
  CommonUI_o *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_43891C7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&SeManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__);
    byte_43891C7 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(28, 0LL);
    screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
    this->fields.isButtonEnable = 0;
    if ( !screenTouchInfo
      || (screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          TitleFadeOutPlayTime = this->fields.TitleFadeOutPlayTime,
          v7 = (CommonUI_o *)Instance,
          v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
          System_Action___ctor(
            v8,
            (Il2CppObject *)this,
            Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__,
            0LL),
          !v7) )
    {
      sub_B7769C(screenTouchInfo, v3);
    }
    CommonUI__maskFadeout(v7, 1, TitleFadeOutPlayTime, v8, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnEnable(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_43891C9 & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&StringLiteral_2763/*"BackAnchor/BtnBg"*/);
    byte_43891C9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_23834620(transform, (System_String_o *)StringLiteral_2763/*"BackAnchor/BtnBg"*/, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent__Play(
        TitleInfoWarBoardTitleComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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

  if ( (byte_43891BC & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__);
    byte_43891BC = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v13 = this->fields.mAnimation;
    if ( v13 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( gameObject )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v13, name, 0LL);
        if ( gameObject )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
          goto LABEL_12;
        }
      }
    }
LABEL_18:
    sub_B7769C(gameObject, v11);
  }
LABEL_12:
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.movieName, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_17;
  MoviePath = TitleInfoWarBoardTitleComponent__CreateMoviePath(
                (TitleInfoWarBoardTitleComponent_o *)IsNullOrEmpty,
                this->fields.movieName,
                v17);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)this,
    Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v19, 1, 0LL) )
LABEL_17:
    TitleInfoWarBoardTitleComponent__StartTitleEffect(this, v16);
}


void __fastcall TitleInfoWarBoardTitleComponent__PlayBGM(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *bgmName; // x19

  if ( (byte_43891BF & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43891BF = 1;
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
  TitleInfoWarBoardTitleComponent_c *v4; // x0
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  struct CRIMoviePlayer_o *Component_srcLineSprite; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  CRIMoviePlayer_o *moviePlayer; // x20
  int v16; // s0
  CRIMoviePlayer_o *v20; // x20
  TitleInfoWarBoardTitleComponent_o *v21; // x0
  const MethodInfo *v22; // x2
  System_String_o *v23; // x21
  System_String_o *Path; // x22

  if ( (byte_43891C2 & 1) == 0 )
  {
    sub_B775C4(&BgmManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_B775C4(&TitleInfoWarBoardTitleComponent_TypeInfo);
    byte_43891C2 = 1;
  }
  v4 = TitleInfoWarBoardTitleComponent_TypeInfo;
  if ( (BYTE3(TitleInfoWarBoardTitleComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoWarBoardTitleComponent_TypeInfo->_2.cctor_finished )
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
    goto LABEL_21;
  v7 = CriMoviePlayerObject;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       CriMoviePlayerObject,
                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !CriMoviePlayerObject )
    goto LABEL_21;
  UIPanel__set_depth((UIPanel_o *)CriMoviePlayerObject, this->fields.moviePlayerDepth, 0LL);
  Component_srcLineSprite = (struct CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v7,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
  this->fields.moviePlayer = Component_srcLineSprite;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.moviePlayer,
    (System_Int32_array **)Component_srcLineSprite,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  moviePlayer = this->fields.moviePlayer;
  *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
  if ( !moviePlayer )
    goto LABEL_21;
  CRIMoviePlayer__SetBackgroundColor(moviePlayer, *(UnityEngine_Color_o *)&v16, 0LL);
  v20 = this->fields.moviePlayer;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)TitleInfoWarBoardTitleComponent__CreateMoviePath(
                                                       v21,
                                                       this->fields.movieName,
                                                       v22);
  if ( !this->fields.movieAssetData )
    goto LABEL_21;
  v23 = (System_String_o *)CriMoviePlayerObject;
  Path = AssetData__get_Path(this->fields.movieAssetData, 0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_43879D2 )
  {
    sub_B775C4(&BgmManager_TypeInfo);
    byte_43879D2 = 1;
  }
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  }
  if ( !v20
    || (CRIMoviePlayer__Initialize(
          v20,
          v23,
          Path,
          *(float *)(*(_QWORD *)&CriMoviePlayerObject[7].fields.m_CachedPtr + 32LL),
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
LABEL_21:
    sub_B7769C(CriMoviePlayerObject, v6);
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

  if ( (byte_43891BB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43891BB = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  base2Panel = (UnityEngine_Object_o *)this->fields.base2Panel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_22:
    sub_B7769C(gameObject, v4);
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

  if ( (byte_43891C6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43891C6 = 1;
  }
  backgrund = (UnityEngine_Object_o *)this->fields.backgrund;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(backgrund, 0LL, 0LL) )
  {
    v7 = this->fields.backgrund;
    if ( !v7 )
      sub_B7769C(0LL, v6);
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
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x0

  if ( (byte_43891C1 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
    byte_43891C1 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2CBF220 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct WarBoardQuestEntity_o **p_warBoardQuestEntity; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_String_o *age; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  struct System_String_o *WarBoardStartMovieName; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct WarBoardQuestEntity_o *v47; // x8
  int32_t questPhase; // w22
  int32_t questId; // w23
  WarBoardMovieHistoryManager_c *v50; // x0
  bool exists; // w0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  CommonUI_o *v54; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_o *v62; // x24
  System_String_o *name; // x23
  System_String_o *v64; // x22
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Action_o *v72; // x25
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  UnityEngine_Object_o *titleLabel; // x20
  UnityEngine_Object_o *messageManager; // x20
  struct ScriptLineMessage_o *v87; // x8
  UnityEngine_Object_o *messageLabel; // x20
  WarEntity_o *v89; // [xsp+0h] [xbp-60h] BYREF
  QuestPhaseEntity_o *v90; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *v91; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_43891BA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_B775C4(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__);
    sub_B775C4(&TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo);
    sub_B775C4(&WarBoardMovieHistoryManager_TypeInfo);
    sub_B775C4(&StringLiteral_24352/*"仮"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43891BA = 1;
  }
  entity = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v89 = 0LL;
  v9 = sub_B77694(TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo);
  TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___ctor(
    (TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_77;
  *(_QWORD *)(v9 + 16) = callbackDecide;
  sub_B77560(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)callbackDecide,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.warBoardQuestEntity = warBoardQuestEnt;
  p_warBoardQuestEntity = &this->fields.warBoardQuestEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.warBoardQuestEntity,
    (System_Int32_array **)warBoardQuestEnt,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.bgmName, v25, v26, v27, v28, v29, v30, v31);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_77;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         (*p_warBoardQuestEntity)->fields.stageId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !entity || !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &v89,
                                  (int32_t)entity->fields.name,
                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v89 )
        goto LABEL_77;
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(v89->fields.age, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v89 )
          goto LABEL_77;
        age = v89->fields.age;
        this->fields.bgmName = age;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.bgmName,
          (System_Int32_array **)age,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_77;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &v91,
    (int32_t)Instance[1].fields.saveNameList->fields._items,
    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( !v91 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)QuestPhaseMaster__TryGetEntity(
                                (QuestPhaseMaster_o *)Instance,
                                &v90,
                                (*p_warBoardQuestEntity)->fields.questId,
                                (*p_warBoardQuestEntity)->fields.questPhase,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)v90;
    if ( !v90 )
      goto LABEL_77;
    WarBoardStartMovieName = QuestPhaseEntity__GetWarBoardStartMovieName(v90, 0LL);
    this->fields.movieName = WarBoardStartMovieName;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.movieName,
      (System_Int32_array **)WarBoardStartMovieName,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = *p_warBoardQuestEntity;
  if ( !*p_warBoardQuestEntity )
LABEL_77:
    sub_B7769C(Instance, v11);
  questId = v47->fields.questId;
  questPhase = v47->fields.questPhase;
  v50 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    v54 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v54 )
      goto LABEL_77;
    Instance = (DataManager_o *)CommonUI__CreateScreeenTouchInfo(v54, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !Instance )
      goto LABEL_77;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)Instance,
                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  Instance = (DataManager_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_77;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_77;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)v91;
  if ( !v91 )
    goto LABEL_77;
  v62 = (System_String_o *)StringLiteral_24352/*"仮"*/;
  Instance = (DataManager_o *)QuestEntity__getQuestName((QuestEntity_o *)v91, 0LL);
  if ( !v91 )
    goto LABEL_77;
  name = v91->fields.name;
  v64 = (System_String_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_77;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)Instance,
                                                                     (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !Instance )
    goto LABEL_77;
  BYTE5(Instance->fields.masterLoadThreads) = 1;
  v72 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v72,
    (Il2CppObject *)v9,
    Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__,
    0LL);
  this->fields.callbackDecide = v72;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackDecide,
    (System_Int32_array **)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields.callbackCancel = callbackCancel;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackCancel,
    (System_Int32_array **)callbackCancel,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.titleLabel;
    if ( !Instance )
      goto LABEL_77;
    UILabel__set_text((UILabel_o *)Instance, v62, 0LL);
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
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(v64, 0LL);
      v87 = this->fields.messageManager;
      if ( v87 )
      {
        if ( ((unsigned __int8)Instance & 1) != 0 )
          ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
        else
          ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v87->klass->vtable._7_SetText.method)(
            this->fields.messageManager,
            v64,
            0LL,
            0LL,
            0LL,
            0LL,
            v87->klass[1]._1.image);
        return;
      }
    }
    else
    {
      Instance = (DataManager_o *)this->fields.messageManager;
      if ( Instance )
      {
        (*(void (__fastcall **)(DataManager_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))&Instance->klass[1]._1.this_arg.bits)(
          Instance,
          name,
          0LL,
          0LL,
          0LL,
          0LL,
          Instance->klass[1]._1.element_class);
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
    Instance = (DataManager_o *)this->fields.messageLabel;
    if ( Instance )
    {
      UILabel__set_text((UILabel_o *)Instance, v64, 0LL);
      return;
    }
    goto LABEL_77;
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__StartTitleEffect(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_43891BD & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6691/*"FadeOutBGM"*/);
    sub_B775C4(&StringLiteral_10868/*"PlayBGM"*/);
    byte_43891BD = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6691/*"FadeOutBGM"*/,
    this->fields.BgmFadeOutStartTime,
    0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.bgmName, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10868/*"PlayBGM"*/,
      this->fields.BgmPlayStartTime,
      0LL);
  TitleInfoWarBoardTitleComponent__SetState(this, 3, v3);
}


void __fastcall TitleInfoWarBoardTitleComponent__Update(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x0

  if ( (byte_43891B9 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
    byte_43891B9 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2CBF1F8 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
  TitleInfoWarBoardTitleComponent__RefreshPanel(this, method);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickCancelButton_b__52_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *callbackCancel; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_43891CE & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43891CE = 1;
  }
  callbackCancel = this->fields.callbackCancel;
  if ( !callbackCancel )
    sub_B7769C(0LL, method);
  System_Action__Invoke(callbackCancel, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickDecideButton_b__51_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *callbackDecide; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_43891CD & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43891CD = 1;
  }
  callbackDecide = this->fields.callbackDecide;
  if ( !callbackDecide )
    sub_B7769C(0LL, method);
  System_Action__Invoke(callbackDecide, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___Play_b__34_0(
        TitleInfoWarBoardTitleComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x2

  if ( (byte_43891CC & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43891CC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  this->fields.movieAssetData = data;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.movieAssetData,
    (System_Int32_array **)data,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_B7769C(this, 0LL);
  TitleInfoWarBoardTitleComponent__PlayMovie(that, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__end(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4388877 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4388877 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__InitConnect(Instance, 0LL), this->fields.state = 0, !that) )
    sub_B7769C(Instance, v6);
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
    sub_B7769C(this, that);
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
  TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  if ( (byte_4388878 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__);
    sub_B775C4(&TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo);
    byte_4388878 = 1;
  }
  v4 = (TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *)sub_B77694(TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo);
  TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_9;
  v4->fields.that = that;
  sub_B77560(&v4->fields);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)v4,
    Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B7769C(v5, v6);
  CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade__end(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4388879 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4388879 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
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
    sub_B7769C(0LL, method);
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

  if ( (byte_438887A & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438887A = 1;
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
      this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__Play_51745976(v5, name, 0LL);
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
LABEL_15:
    sub_B7769C(this, that);
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

  if ( (byte_438887B & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438887B = 1;
  }
  if ( !that )
    goto LABEL_14;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_14:
    sub_B7769C(this, that);
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
    sub_B7769C(this, that);
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
  System_Action_o *callbackDecide; // x0

  callbackDecide = this->fields.callbackDecide;
  if ( !callbackDecide )
    sub_B7769C(0LL, method);
  System_Action__Invoke(callbackDecide, 0LL);
}