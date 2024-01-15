void __fastcall CoinRoomLobbyComponent___ctor(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CoinRoomLobbyComponent__EndLoadAsset(
        CoinRoomLobbyComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_UIAtlas__o *DownloadAtlas; // x0

  if ( (byte_40F9A5B & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, assetData);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_UIAtlas___, v4);
    sub_B16FFC(&StringLiteral_5352/*"DownloadCoinRoomAtlas"*/, v5);
    byte_40F9A5B = 1;
  }
  if ( assetData )
  {
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    DownloadAtlas = CoinRoomUtility__GetDownloadAtlas(assetData, (System_String_o *)StringLiteral_5352/*"DownloadCoinRoomAtlas"*/, method);
    System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
      (System_Collections_Generic_IEnumerable_TSource__o *)DownloadAtlas,
      (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_UIAtlas___);
  }
}


void __fastcall CoinRoomLobbyComponent__OnClickBack(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Collider_o *maskCollider; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BaseMenu_o *coinRoomSelectCoinComponent; // x20
  System_Action_o *v13; // x21
  UnityEngine_GameObject_o *coinListPanel; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  SceneJumpInfo_o *v19; // x19
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F9A5C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, v3);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40F9A5C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled(maskCollider, 1, 0LL);
  coinRoomSelectCoinComponent = (BaseMenu_o *)this->fields.coinRoomSelectCoinComponent;
  if ( !coinRoomSelectCoinComponent )
    goto LABEL_14;
  if ( coinRoomSelectCoinComponent->fields.isOpen )
  {
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, 0LL);
    BaseMenu__Close(coinRoomSelectCoinComponent, v13, 0LL);
    return;
  }
  coinListPanel = this->fields.coinListPanel;
  if ( !coinListPanel
    || (UnityEngine_GameObject__SetActive(coinListPanel, 0, 0LL),
        v19 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v15, v16, v17, v18),
        SceneJumpInfo___ctor(v19, 0LL),
        !v19)
    || (SceneJumpInfo__SetReturnNowScene(v19, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v19, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickHelp(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40F9A5D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A5D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 73, 0LL, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickSelectCoin(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfoControl; // x0
  const MethodInfo *v4; // x1
  CoinRoomSelectCoinComponent_o *coinRoomSelectCoinComponent; // x0

  if ( (byte_40F9A5F & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A5F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0LL),
        MainMenuBar__setMenuActive(0, 0LL, 0LL),
        (coinRoomSelectCoinComponent = this->fields.coinRoomSelectCoinComponent) == 0LL) )
  {
    sub_B170D4();
  }
  CoinRoomSelectCoinComponent__OpenSelectCoinList(coinRoomSelectCoinComponent, v4);
}


void __fastcall CoinRoomLobbyComponent__OpenLobby(
        CoinRoomLobbyComponent_o *this,
        PlayMakerFSM_o *myFSM,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gaugeBarObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UIProgressBar_o *v16; // x23
  const MethodInfo *v17; // x0
  int32_t v18; // w22
  int32_t v19; // w0
  float v20; // s8
  int v21; // w21
  UnityEngine_GameObject_o *energyPartLoopObject; // x0
  srcLineSprite_o *v23; // x0
  UnityEngine_ParticleSystem_o *v24; // x23
  srcLineSprite_o *v25; // x0
  float v26; // s8
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *lobbyInfoLabel; // x23
  System_String_o *v31; // x24
  Il2CppObject *v32; // x22
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x23
  CoinRoomLobbyComponent_o *v36; // x0
  int v37; // w21
  const MethodInfo *v38; // x1
  Il2CppObject *v39; // x24
  UILabel_o *lobbyTimeLabel; // x22
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  TitleInfoControl_o *titleInfoControl; // x0
  TitleInfoControl_o *v44; // x0
  TitleInfoControl_o *v45; // x0
  TitleInfoControl_o *v46; // x0
  struct UICommonButton_o *selectCoinButton; // x0
  UnityEngine_GameObject_o *effectCircleObject; // x0
  SimpleAnimation_o *v49; // x0
  int v50; // [xsp+8h] [xbp-98h] BYREF
  int v51; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v52; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v53; // [xsp+38h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v55; // 0:x0.8

  if ( (byte_40F9A5A & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, myFSM);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISlider___, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_18208/*"effect_Circle_loop"*/, v11);
    sub_B16FFC(&StringLiteral_3124/*"COIN_ROOM_LOBBY_INFO"*/, v12);
    sub_B16FFC(&StringLiteral_3125/*"COIN_ROOM_LOBBY_TIME_INFO"*/, v13);
    byte_40F9A5A = 1;
  }
  m_ParticleSystem = 0LL;
  EventTutorialMaster__CheckTutorial(0, 73, 0LL, 0, 0, 0, 0, 0LL);
  gaugeBarObject = this->fields.gaugeBarObject;
  if ( !gaugeBarObject )
    goto LABEL_29;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gaugeBarObject,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISlider___);
  v16 = (UIProgressBar_o *)Component_srcLineSprite;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v17 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint((const MethodInfo *)Component_srcLineSprite);
  v18 = (int)v17;
  v19 = CoinRoomUtility__MaxPoint(v17);
  if ( !v16 )
    goto LABEL_29;
  v20 = (float)v18 / (float)v19;
  v21 = v19;
  UIProgressBar__set_value(v16, v20, 0LL);
  energyPartLoopObject = this->fields.energyPartLoopObject;
  if ( !energyPartLoopObject )
    goto LABEL_29;
  v23 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          energyPartLoopObject,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  if ( !this->fields.effectCircleObject )
    goto LABEL_29;
  v24 = (UnityEngine_ParticleSystem_o *)v23;
  v25 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          this->fields.effectCircleObject,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  if ( !v25 )
    goto LABEL_29;
  if ( !v24 )
    goto LABEL_29;
  v26 = v20 * *(float *)&v25->fields.mtIsUpdate;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v24, 0LL).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v53, v26, 0LL);
  v55.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v52 = v53;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v55, &v52, 0LL);
  v27 = this->fields.energyPartLoopObject;
  if ( !v27 )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(v27, 0, 0LL);
  v28 = this->fields.energyPartLoopObject;
  if ( !v28 )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(v28, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3124/*"COIN_ROOM_LOBBY_INFO"*/, 0LL);
  lobbyInfoLabel = this->fields.lobbyInfoLabel;
  v31 = v29;
  v53.fields.m_Mode = v18;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v51 = v21;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v34 = System_String__Format_43739268(v31, v32, v33, 0LL);
  if ( !lobbyInfoLabel )
    goto LABEL_29;
  UILabel__set_text(lobbyInfoLabel, v34, 0LL);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3125/*"COIN_ROOM_LOBBY_TIME_INFO"*/, 0LL);
  v36 = (CoinRoomLobbyComponent_o *)CoinRoomUtility__MonthRemainingNum((const MethodInfo *)v35);
  v37 = (int)v36;
  v39 = (Il2CppObject *)CoinRoomLobbyComponent__SetTimeLabel(v36, v38);
  lobbyTimeLabel = this->fields.lobbyTimeLabel;
  v50 = v37;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v42 = System_String__Format_43739268(v35, v41, v39, 0LL);
  if ( !lobbyTimeLabel )
    goto LABEL_29;
  UILabel__set_text(lobbyTimeLabel, v42, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_29;
  TitleInfoControl__setTitleInfo(titleInfoControl, myFSM, 1, 0LL, 85, 0LL);
  v44 = this->fields.titleInfoControl;
  if ( !v44 )
    goto LABEL_29;
  TitleInfoControl__setBackBtnSprite_19608808(v44, 1, 0, 0, 0LL);
  v45 = this->fields.titleInfoControl;
  if ( !v45 )
    goto LABEL_29;
  TitleInfoControl__setTitleImgFromBanner(v45, 0, 0, 1, 85, 0LL);
  v46 = this->fields.titleInfoControl;
  if ( !v46 )
    goto LABEL_29;
  TitleInfoControl__SetHelpBtn(v46, 1, 0LL);
  if ( !v37 )
  {
    selectCoinButton = this->fields.selectCoinButton;
    if ( !selectCoinButton )
      goto LABEL_29;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))selectCoinButton->klass->vtable._14_SetState.method)(
      selectCoinButton,
      3LL,
      0LL,
      selectCoinButton->klass->vtable._15_OnPress.methodPtr);
  }
  effectCircleObject = this->fields.effectCircleObject;
  if ( !effectCircleObject
    || (v49 = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     effectCircleObject,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___)) == 0LL )
  {
LABEL_29:
    sub_B170D4();
  }
  SimpleAnimation__Play_16380456(v49, (System_String_o *)StringLiteral_18208/*"effect_Circle_loop"*/, 0LL);
}


void __fastcall CoinRoomLobbyComponent__SetMaskCollider(
        CoinRoomLobbyComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *maskCollider; // x0

  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(maskCollider, flag, 0LL);
}


void __fastcall CoinRoomLobbyComponent__SetSpriteAtlas(
        CoinRoomLobbyComponent_o *this,
        UnityEngine_GameObject_o *gameObject,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *current; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  UISprite_o *v14; // x21
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F9A60 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, gameObject);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v11);
    byte_40F9A60 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !atlasList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)atlasList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__) )
  {
    if ( !gameObject )
      sub_B170D4();
    current = v16.fields.current;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                gameObject,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !current )
      sub_B170D4();
    v14 = (UISprite_o *)Component_srcLineSprite;
    if ( UIAtlas__GetSprite((UIAtlas_o *)current, name, 0LL) )
    {
      if ( !v14 )
        sub_B170D4();
      UISprite__set_atlas(v14, (UIAtlas_o *)current, 0LL);
      UISprite__set_spriteName(v14, name, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


System_String_o *__fastcall CoinRoomLobbyComponent__SetTimeLabel(
        CoinRoomLobbyComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  CoinRoomUtility_c *v5; // x0
  int64_t MonthUnixTime; // x19
  System_String_o *RestTime5; // x0
  System_String_o *v8; // x19

  if ( (byte_40F9A5E & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    sub_B16FFC(&StringLiteral_23706/*"あと "*/, v4);
    byte_40F9A5E = 1;
  }
  v5 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime((const MethodInfo *)v5);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime5 = LocalizationManager__GetRestTime5(MonthUnixTime, -1LL, 0LL);
  if ( !RestTime5 )
    sub_B170D4();
  v8 = RestTime5;
  if ( System_String__Contains(RestTime5, (System_String_o *)StringLiteral_23706/*"あと "*/, 0LL) )
    return System_String__Replace_43750968(
             v8,
             (System_String_o *)StringLiteral_23706/*"あと "*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
  else
    return v8;
}


void __fastcall CoinRoomLobbyComponent___OnClickBack_b__12_0(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  CoinRoomSelectCoinComponent_o *coinRoomSelectCoinComponent; // x0
  TitleInfoControl_o *titleInfoControl; // x0
  UnityEngine_Collider_o *maskCollider; // x0

  coinRoomSelectCoinComponent = this->fields.coinRoomSelectCoinComponent;
  if ( !coinRoomSelectCoinComponent
    || (CoinRoomSelectCoinComponent__Init(coinRoomSelectCoinComponent, method),
        (titleInfoControl = this->fields.titleInfoControl) == 0LL)
    || (TitleInfoControl__SetHelpBtn(titleInfoControl, 1, 0LL),
        (maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(maskCollider, 0, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
}