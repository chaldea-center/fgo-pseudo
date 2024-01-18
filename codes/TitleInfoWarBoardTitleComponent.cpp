void __fastcall TitleInfoWarBoardTitleComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4186415 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoWarBoardTitleComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_3436/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v8);
    byte_4186415 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoWarBoardTitleComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_3436/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_3436/*"CRIMovie/CRIMoviePlayerWithPanel"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4186414 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4186414 = 1;
  }
  this->fields.TitleFadeOutPlayTime = 1.0;
  *(_QWORD *)&this->fields.BgmFadeOutPlayTime = 0x400000003F800000LL;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.movieName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.movieName, v9, v2, v3, v4, v5, v6, v7);
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
  CStateManager_QAASpotStateController_IMapSpot__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x21
  TitleInfoWarBoardTitleComponent_StateNone_o *v22; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v24; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x21
  TitleInfoWarBoardTitleComponent_StateMovieFade_o *v26; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v27; // x21
  TitleInfoWarBoardTitleComponent_StateMovie_o *v28; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v29; // x21
  TitleInfoWarBoardTitleComponent_StatePlay_o *v30; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x20
  TitleInfoWarBoardTitleComponent_StateTouchWait_o *v32; // x21
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *particleObj; // x21
  const MethodInfo *v35; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v37; // x21
  UnityEngine_GameObject_o *v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186402 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__, method);
    sub_B2C35C(&Method_CStateManager_TitleInfoWarBoardTitleComponent__add__, v3);
    sub_B2C35C(&CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo, v8);
    sub_B2C35C(&TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo, v9);
    sub_B2C35C(&TitleInfoWarBoardTitleComponent_StateNone_TypeInfo, v10);
    sub_B2C35C(&TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo, v11);
    sub_B2C35C(&TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo, v12);
    byte_4186402 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v14 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_TitleInfoWarBoardTitleComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v14,
      (QAASpotStateController_IMapSpot_o *)this,
      5,
      (const MethodInfo_2A08354 *)Method_CStateManager_TitleInfoWarBoardTitleComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TitleInfoWarBoardTitleComponent__o *)v14;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    mFSM = this->fields.mFSM;
    v22 = (TitleInfoWarBoardTitleComponent_StateNone_o *)sub_B2C42C(TitleInfoWarBoardTitleComponent_StateNone_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateNone___ctor(v22, 0LL);
    if ( !mFSM )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_2A08420 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v26 = (TitleInfoWarBoardTitleComponent_StateMovieFade_o *)sub_B2C42C(TitleInfoWarBoardTitleComponent_StateMovieFade_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateMovieFade___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_2A08420 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v27 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v28 = (TitleInfoWarBoardTitleComponent_StateMovie_o *)sub_B2C42C(TitleInfoWarBoardTitleComponent_StateMovie_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateMovie___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_2A08420 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v29 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v30 = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_B2C42C(TitleInfoWarBoardTitleComponent_StatePlay_TypeInfo);
    TitleInfoWarBoardTitleComponent_StatePlay___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_2A08420 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    v31 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v32 = (TitleInfoWarBoardTitleComponent_StateTouchWait_o *)sub_B2C42C(TitleInfoWarBoardTitleComponent_StateTouchWait_TypeInfo);
    TitleInfoWarBoardTitleComponent_StateTouchWait___ctor(v32, 0LL);
    if ( !v31 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v31,
      4,
      (IState_T__o *)v32,
      (const MethodInfo_2A08420 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__add__);
    TitleInfoWarBoardTitleComponent__SetState(this, 0, v33);
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
      v37 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v38 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v37,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v38, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v38, zero, 0LL);
        if ( v38 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v38,
                                                        (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v38;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
            goto LABEL_25;
          }
        }
LABEL_26:
        sub_B2C434(ComponentInChildren_Dropdown_DropdownItem, v24);
      }
    }
  }
LABEL_25:
  TitleInfoWarBoardTitleComponent__SetBackgrundActive(this, 0, v35);
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
  _BOOL8 v12; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v15; // x20

  if ( (byte_418640D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIRootReScale___, moviePlayerName);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIRoot___, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_GameObject___, v9);
    byte_418640D = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        moviePlayerName,
                                                        (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      UIAtlas,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( v12 )
    GameObjectExtensions__SafeSetParent(v11, parent, 0LL);
  if ( !v11 )
    goto LABEL_22;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v11,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIRoot___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( v12 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_22;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
  }
  v15 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v11,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIRootReScale___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( v12 )
  {
    if ( v15 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15, 0, 0LL);
      goto LABEL_21;
    }
LABEL_22:
    sub_B2C434(v12, v13);
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
  if ( (byte_418640E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9213/*"Movie/{0}.usm"*/, movieName);
    byte_418640E = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9213/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0LL);
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

  if ( (byte_418640F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&WarBoardMovieHistoryManager_TypeInfo, v3);
    byte_418640F = 1;
  }
  moviePlayer = (UnityEngine_Object_o *)this->fields.moviePlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(moviePlayer, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v5 = this->fields.moviePlayer;
    if ( !v5 )
      goto LABEL_14;
    CRIMoviePlayer__Dispose(v5, 0LL);
  }
  warBoardQuestEntity = this->fields.warBoardQuestEntity;
  if ( !warBoardQuestEntity )
LABEL_14:
    sub_B2C434(v5, v6);
  questId = warBoardQuestEntity->fields.questId;
  questPhase = warBoardQuestEntity->fields.questPhase;
  v10 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4186408 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186408 = 1;
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
  if ( (byte_418640A & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_o *)sub_B2C35C(
                                                  &Method_CStateManager_TitleInfoWarBoardTitleComponent__getState__,
                                                  method);
    byte_418640A = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4186412 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__, v6);
    byte_4186412 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v8 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_TitleInfoWarBoardTitleComponent__OnClickCancelButton_b__52_0__,
      0LL);
    if ( !Instance )
      sub_B2C434(v11, v12);
    CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v10, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnClickDecideButton(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  WebViewManager_o *Instance; // x0
  float TitleFadeOutPlayTime; // s8
  CommonUI_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_4186411 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SeManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__, v5);
    byte_4186411 = 1;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          TitleFadeOutPlayTime = this->fields.TitleFadeOutPlayTime,
          v10 = (CommonUI_o *)Instance,
          v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
          System_Action___ctor(
            v11,
            (Il2CppObject *)this,
            Method_TitleInfoWarBoardTitleComponent__OnClickDecideButton_b__51_0__,
            0LL),
          !v10) )
    {
      sub_B2C434(screenTouchInfo, v6);
    }
    CommonUI__maskFadeout(v10, 1, TitleFadeOutPlayTime, v11, 0LL);
  }
}


void __fastcall TitleInfoWarBoardTitleComponent__OnEnable(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_4186413 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_2655/*"BackAnchor/BtnBg"*/, v3);
    byte_4186413 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_2655/*"BackAnchor/BtnBg"*/, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *name; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  System_String_o *MoviePath; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21

  if ( (byte_4186406 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, end_act);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__, v12);
    byte_4186406 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B2C2F8(
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
    v16 = this->fields.mAnimation;
    if ( v16 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( gameObject )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v16, name, 0LL);
        if ( gameObject )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
          goto LABEL_12;
        }
      }
    }
LABEL_18:
    sub_B2C434(gameObject, v14);
  }
LABEL_12:
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.movieName, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_17;
  MoviePath = TitleInfoWarBoardTitleComponent__CreateMoviePath(
                (TitleInfoWarBoardTitleComponent_o *)IsNullOrEmpty,
                this->fields.movieName,
                v20);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleInfoWarBoardTitleComponent__Play_b__34_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v22, 1, 0LL) )
LABEL_17:
    TitleInfoWarBoardTitleComponent__StartTitleEffect(this, v19);
}


void __fastcall TitleInfoWarBoardTitleComponent__PlayBGM(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *bgmName; // x19

  if ( (byte_4186409 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186409 = 1;
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
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  struct CRIMoviePlayer_o *Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CRIMoviePlayer_o *moviePlayer; // x20
  int v19; // s0
  CRIMoviePlayer_o *v23; // x20
  TitleInfoWarBoardTitleComponent_o *v24; // x0
  const MethodInfo *v25; // x2
  System_String_o *v26; // x21
  System_String_o *Path; // x22

  if ( (byte_418640C & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v5);
    sub_B2C35C(&TitleInfoWarBoardTitleComponent_TypeInfo, v6);
    byte_418640C = 1;
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
  v10 = CriMoviePlayerObject;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       CriMoviePlayerObject,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !CriMoviePlayerObject )
    goto LABEL_21;
  UIPanel__set_depth((UIPanel_o *)CriMoviePlayerObject, this->fields.moviePlayerDepth, 0LL);
  Component_srcLineSprite = (struct CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v10,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
  this->fields.moviePlayer = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.moviePlayer,
    (System_Int32_array **)Component_srcLineSprite,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  moviePlayer = this->fields.moviePlayer;
  *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
  if ( !moviePlayer )
    goto LABEL_21;
  CRIMoviePlayer__SetBackgroundColor(moviePlayer, *(UnityEngine_Color_o *)&v19, 0LL);
  v23 = this->fields.moviePlayer;
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)TitleInfoWarBoardTitleComponent__CreateMoviePath(
                                                       v24,
                                                       this->fields.movieName,
                                                       v25);
  if ( !this->fields.movieAssetData )
    goto LABEL_21;
  v26 = (System_String_o *)CriMoviePlayerObject;
  Path = AssetData__get_Path(this->fields.movieAssetData, 0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4183DF8 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, v9);
    byte_4183DF8 = 1;
  }
  CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    CriMoviePlayerObject = (UnityEngine_GameObject_o *)BgmManager_TypeInfo;
  }
  if ( !v23
    || (CRIMoviePlayer__Initialize(
          v23,
          v26,
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
    sub_B2C434(CriMoviePlayerObject, v9);
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

  if ( (byte_4186405 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186405 = 1;
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
    sub_B2C434(gameObject, v4);
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

  if ( (byte_4186410 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isActive);
    byte_4186410 = 1;
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
      sub_B2C434(0LL, v6);
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

  if ( (byte_418640B & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__, *(_QWORD *)&state);
    byte_418640B = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_TitleInfoWarBoardTitleComponent__setState__);
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct WarBoardQuestEntity_o **p_warBoardQuestEntity; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct System_String_o *age; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  struct System_String_o *WarBoardStartMovieName; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct WarBoardQuestEntity_o *v67; // x8
  int32_t questPhase; // w22
  int32_t questId; // w23
  WarBoardMovieHistoryManager_c *v70; // x0
  bool exists; // w0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  CommonUI_o *v74; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_o *v82; // x24
  System_String_o *name; // x23
  System_String_o *v84; // x22
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Action_o *v92; // x25
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  UnityEngine_Object_o *titleLabel; // x20
  UnityEngine_Object_o *messageManager; // x20
  struct ScriptLineMessage_o *v107; // x8
  UnityEngine_Object_o *messageLabel; // x20
  WarEntity_o *v109; // [xsp+0h] [xbp-60h] BYREF
  QuestPhaseEntity_o *v110; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *v111; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4186404 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, warBoardQuestEnt);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v9);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v14);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v16);
    sub_B2C35C(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v18);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v19);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v23);
    sub_B2C35C(&Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__, v24);
    sub_B2C35C(&TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo, v25);
    sub_B2C35C(&WarBoardMovieHistoryManager_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_23855/*"仮"*/, v27);
    sub_B2C35C(&StringLiteral_1/*""*/, v28);
    byte_4186404 = 1;
  }
  entity = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v109 = 0LL;
  v29 = sub_B2C42C(TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_TypeInfo);
  TitleInfoWarBoardTitleComponent___c__DisplayClass31_0___ctor(
    (TitleInfoWarBoardTitleComponent___c__DisplayClass31_0_o *)v29,
    0LL);
  if ( !v29 )
    goto LABEL_77;
  *(_QWORD *)(v29 + 16) = callbackDecide;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v29 + 16),
    (System_Int32_array **)callbackDecide,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.warBoardQuestEntity = warBoardQuestEnt;
  p_warBoardQuestEntity = &this->fields.warBoardQuestEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.warBoardQuestEntity,
    (System_Int32_array **)warBoardQuestEnt,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.bgmName, v45, v46, v47, v48, v49, v50, v51);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_77;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         (*p_warBoardQuestEntity)->fields.stageId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !entity || !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &v109,
                                  (int32_t)entity->fields.name,
                                  (const MethodInfo_24E412C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v109 )
        goto LABEL_77;
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(v109->fields.age, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v109 )
          goto LABEL_77;
        age = v109->fields.age;
        this->fields.bgmName = age;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.bgmName,
          (System_Int32_array **)age,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
      }
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v31);
    byte_4183C7A = 1;
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
    &v111,
    (int32_t)Instance[1].fields.saveNameList->fields._items,
    (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( !v111 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !*p_warBoardQuestEntity || !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)QuestPhaseMaster__TryGetEntity(
                                (QuestPhaseMaster_o *)Instance,
                                &v110,
                                (*p_warBoardQuestEntity)->fields.questId,
                                (*p_warBoardQuestEntity)->fields.questPhase,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)v110;
    if ( !v110 )
      goto LABEL_77;
    WarBoardStartMovieName = QuestPhaseEntity__GetWarBoardStartMovieName(v110, 0LL);
    this->fields.movieName = WarBoardStartMovieName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.movieName,
      (System_Int32_array **)WarBoardStartMovieName,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  v67 = *p_warBoardQuestEntity;
  if ( !*p_warBoardQuestEntity )
LABEL_77:
    sub_B2C434(Instance, v31);
  questId = v67->fields.questId;
  questPhase = v67->fields.questPhase;
  v70 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v70 = WarBoardMovieHistoryManager_TypeInfo;
  }
  exists = WarBoardMovieHistoryManager__ExistsHistory(
             questId,
             questPhase,
             v70->static_fields->SAVE_KEY_START_MOVIE,
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
    v74 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v74 )
      goto LABEL_77;
    Instance = (DataManager_o *)CommonUI__CreateScreeenTouchInfo(v74, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !Instance )
      goto LABEL_77;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)Instance,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  Instance = (DataManager_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_77;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_77;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)v111;
  if ( !v111 )
    goto LABEL_77;
  v82 = (System_String_o *)StringLiteral_23855/*"仮"*/;
  Instance = (DataManager_o *)QuestEntity__getQuestName((QuestEntity_o *)v111, 0LL);
  if ( !v111 )
    goto LABEL_77;
  name = v111->fields.name;
  v84 = (System_String_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_77;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)Instance,
                                                                     (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !Instance )
    goto LABEL_77;
  BYTE5(Instance->fields.masterLoadThreads) = 1;
  v92 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v92,
    (Il2CppObject *)v29,
    Method_TitleInfoWarBoardTitleComponent___c__DisplayClass31_0__Setup_b__0__,
    0LL);
  this->fields.callbackDecide = v92;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackDecide,
    (System_Int32_array **)v92,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  this->fields.callbackCancel = callbackCancel;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackCancel,
    (System_Int32_array **)callbackCancel,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
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
    UILabel__set_text((UILabel_o *)Instance, v82, 0LL);
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
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(v84, 0LL);
      v107 = this->fields.messageManager;
      if ( v107 )
      {
        if ( ((unsigned __int8)Instance & 1) != 0 )
          ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
        else
          ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v107->klass->vtable._7_SetText.method)(
            this->fields.messageManager,
            v84,
            0LL,
            0LL,
            0LL,
            0LL,
            v107->klass[1]._1.image);
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
      UILabel__set_text((UILabel_o *)Instance, v84, 0LL);
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

  if ( (byte_4186407 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6543/*"FadeOutBGM"*/, method);
    sub_B2C35C(&StringLiteral_10662/*"PlayBGM"*/, v3);
    byte_4186407 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6543/*"FadeOutBGM"*/,
    this->fields.BgmFadeOutStartTime,
    0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.bgmName, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10662/*"PlayBGM"*/,
      this->fields.BgmPlayStartTime,
      0LL);
  TitleInfoWarBoardTitleComponent__SetState(this, 3, v4);
}


void __fastcall TitleInfoWarBoardTitleComponent__Update(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  struct CStateManager_TitleInfoWarBoardTitleComponent__o *mFSM; // x0

  if ( (byte_4186403 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_TitleInfoWarBoardTitleComponent__update__, method);
    byte_4186403 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_TitleInfoWarBoardTitleComponent__update__);
  TitleInfoWarBoardTitleComponent__RefreshPanel(this, method);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickCancelButton_b__52_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *callbackCancel; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4186418 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186418 = 1;
  }
  callbackCancel = this->fields.callbackCancel;
  if ( !callbackCancel )
    sub_B2C434(0LL, method);
  System_Action__Invoke(callbackCancel, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent___OnClickDecideButton_b__51_0(
        TitleInfoWarBoardTitleComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *callbackDecide; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4186417 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186417 = 1;
  }
  callbackDecide = this->fields.callbackDecide;
  if ( !callbackDecide )
    sub_B2C434(0LL, method);
  System_Action__Invoke(callbackDecide, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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

  if ( (byte_4186416 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, data);
    byte_4186416 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  this->fields.movieAssetData = data;
  sub_B2C2F8(
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
    sub_B2C434(this, 0LL);
  TitleInfoWarBoardTitleComponent__PlayMovie(that, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovie__end(
        TitleInfoWarBoardTitleComponent_StateMovie_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4185347 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, that);
    byte_4185347 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__InitConnect(Instance, 0LL), this->fields.state = 0, !that) )
    sub_B2C434(Instance, v6);
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
    sub_B2C434(this, that);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4185348 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__, v6);
    sub_B2C35C(&TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo, v7);
    byte_4185348 = 1;
  }
  v8 = (TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_o *)sub_B2C42C(TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0_TypeInfo);
  TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  v8->fields.that = that;
  sub_B2C2F8(&v8->fields, that);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v8,
    Method_TitleInfoWarBoardTitleComponent_StateMovieFade___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B2C434(v9, v10);
  CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v14, 0LL);
}


void __fastcall TitleInfoWarBoardTitleComponent_StateMovieFade__end(
        TitleInfoWarBoardTitleComponent_StateMovieFade_o *this,
        TitleInfoWarBoardTitleComponent_o *that,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4185349 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, that);
    byte_4185349 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418534A & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    byte_418534A = 1;
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
        this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)UnityEngine_Animation__Play_50201580(v5, name, 0LL);
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
    sub_B2C434(this, that);
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

  if ( (byte_418534B & 1) == 0 )
  {
    this = (TitleInfoWarBoardTitleComponent_StatePlay_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    byte_418534B = 1;
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
    sub_B2C434(this, that);
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
    sub_B2C434(this, that);
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
    sub_B2C434(0LL, method);
  System_Action__Invoke(callbackDecide, 0LL);
}