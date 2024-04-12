void __fastcall CoinRoomLobbyComponent___ctor(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CoinRoomLobbyComponent__EndLoadAsset(
        CoinRoomLobbyComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UIAtlas__o *DownloadAtlas; // x0

  if ( (byte_42B0E77 & 1) == 0 )
  {
    sub_B52984(&CoinRoomUtility_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_B52984(&StringLiteral_5412/*"DownloadCoinRoomAtlas"*/);
    byte_42B0E77 = 1;
  }
  if ( assetData )
  {
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    DownloadAtlas = CoinRoomUtility__GetDownloadAtlas(assetData, (System_String_o *)StringLiteral_5412/*"DownloadCoinRoomAtlas"*/, method);
    System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
      (System_Collections_Generic_IEnumerable_TSource__o *)DownloadAtlas,
      (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_UIAtlas___);
  }
}


void __fastcall CoinRoomLobbyComponent__OnClickBack(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *maskCollider; // x0
  BaseMenu_o *coinRoomSelectCoinComponent; // x20
  System_Action_o *v6; // x21
  SceneJumpInfo_o *v7; // x19

  if ( (byte_42B0E78 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__);
    sub_B52984(&SceneJumpInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0E78 = 1;
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
    v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, 0LL);
    BaseMenu__Close(coinRoomSelectCoinComponent, v6, 0LL);
    return;
  }
  maskCollider = (UnityEngine_Collider_o *)this->fields.coinListPanel;
  if ( !maskCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskCollider, 0, 0LL),
        v7 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor(v7, 0LL),
        !v7)
    || (SceneJumpInfo__SetReturnNowScene(v7, 0LL),
        (maskCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_B52A5C(maskCollider, v3);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)maskCollider, 22, 1, (Il2CppObject *)v7, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickHelp(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42B0E79 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0E79 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 73, 0LL, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickSelectCoin(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TitleInfoControl_o *titleInfoControl; // x0

  if ( (byte_42B0E7B & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0E7B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0LL),
        MainMenuBar__setMenuActive(0, 0LL, 0LL),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.coinRoomSelectCoinComponent) == 0LL) )
  {
    sub_B52A5C(titleInfoControl, v3);
  }
  CoinRoomSelectCoinComponent__OpenSelectCoinList((CoinRoomSelectCoinComponent_o *)titleInfoControl, v3);
}


void __fastcall CoinRoomLobbyComponent__OpenLobby(
        CoinRoomLobbyComponent_o *this,
        PlayMakerFSM_o *myFSM,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gaugeBarObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UIProgressBar_o *v8; // x23
  const MethodInfo *v9; // x0
  int32_t v10; // w22
  float v11; // s8
  int v12; // w21
  UnityEngine_ParticleSystem_o *v13; // x23
  float v14; // s8
  System_String_o *v15; // x0
  UILabel_o *lobbyInfoLabel; // x23
  System_String_o *v17; // x24
  Il2CppObject *v18; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x23
  CoinRoomLobbyComponent_o *v21; // x0
  int v22; // w21
  const MethodInfo *v23; // x1
  Il2CppObject *v24; // x24
  UILabel_o *lobbyTimeLabel; // x22
  Il2CppObject *v26; // x0
  int v27; // [xsp+8h] [xbp-98h] BYREF
  int v28; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v29; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v30; // [xsp+38h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v32; // 0:x0.8

  if ( (byte_42B0E76 & 1) == 0 )
  {
    sub_B52984(&CoinRoomUtility_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISlider___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_18411/*"effect_Circle_loop"*/);
    sub_B52984(&StringLiteral_3165/*"COIN_ROOM_LOBBY_INFO"*/);
    sub_B52984(&StringLiteral_3166/*"COIN_ROOM_LOBBY_TIME_INFO"*/);
    byte_42B0E76 = 1;
  }
  m_ParticleSystem = 0LL;
  EventTutorialMaster__CheckTutorial(0, 73, 0LL, 0, 0, 0, 0, 0LL);
  gaugeBarObject = this->fields.gaugeBarObject;
  if ( !gaugeBarObject )
    goto LABEL_29;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gaugeBarObject,
                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISlider___);
  v8 = (UIProgressBar_o *)Component_srcLineSprite;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v9 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint((const MethodInfo *)Component_srcLineSprite);
  v10 = (int)v9;
  gaugeBarObject = (UnityEngine_GameObject_o *)CoinRoomUtility__MaxPoint(v9);
  if ( !v8 )
    goto LABEL_29;
  v11 = (float)v10 / (float)(int)gaugeBarObject;
  v12 = (int)gaugeBarObject;
  UIProgressBar__set_value(v8, v11, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_29;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 gaugeBarObject,
                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  if ( !this->fields.effectCircleObject )
    goto LABEL_29;
  v13 = (UnityEngine_ParticleSystem_o *)gaugeBarObject;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 this->fields.effectCircleObject,
                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  if ( !gaugeBarObject )
    goto LABEL_29;
  if ( !v13 )
    goto LABEL_29;
  v14 = v11 * *(float *)&gaugeBarObject[1].monitor;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v13, 0LL).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v30, v14, 0LL);
  v32.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v29 = v30;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v32, &v29, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gaugeBarObject, 0, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gaugeBarObject, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3165/*"COIN_ROOM_LOBBY_INFO"*/, 0LL);
  lobbyInfoLabel = this->fields.lobbyInfoLabel;
  v17 = v15;
  v30.fields.m_Mode = v10;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v28 = v12;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_44563852(v17, v18, v19, 0LL);
  if ( !lobbyInfoLabel )
    goto LABEL_29;
  UILabel__set_text(lobbyInfoLabel, (System_String_o *)gaugeBarObject, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3166/*"COIN_ROOM_LOBBY_TIME_INFO"*/, 0LL);
  v21 = (CoinRoomLobbyComponent_o *)CoinRoomUtility__MonthRemainingNum((const MethodInfo *)v20);
  v22 = (int)v21;
  v24 = (Il2CppObject *)CoinRoomLobbyComponent__SetTimeLabel(v21, v23);
  lobbyTimeLabel = this->fields.lobbyTimeLabel;
  v27 = v22;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_44563852(v20, v26, v24, 0LL);
  if ( !lobbyTimeLabel )
    goto LABEL_29;
  UILabel__set_text(lobbyTimeLabel, (System_String_o *)gaugeBarObject, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_29;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gaugeBarObject, myFSM, 1, 0LL, 85, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_29;
  TitleInfoControl__setBackBtnSprite_18269200((TitleInfoControl_o *)gaugeBarObject, 1, 0, 0, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_29;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)gaugeBarObject, 0, 0, 1, 85, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_29;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)gaugeBarObject, 1, 0LL);
  if ( !v22 )
  {
    gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.selectCoinButton;
    if ( !gaugeBarObject )
      goto LABEL_29;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))gaugeBarObject->klass[1]._1.implementedInterfaces)(
      gaugeBarObject,
      3LL,
      0LL,
      gaugeBarObject->klass[1]._1.interfaceOffsets);
  }
  gaugeBarObject = this->fields.effectCircleObject;
  if ( !gaugeBarObject
    || (gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       gaugeBarObject,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___)) == 0LL )
  {
LABEL_29:
    sub_B52A5C(gaugeBarObject, v5);
  }
  SimpleAnimation__Play_16625408((SimpleAnimation_o *)gaugeBarObject, (System_String_o *)StringLiteral_18411/*"effect_Circle_loop"*/, 0LL);
}


void __fastcall CoinRoomLobbyComponent__SetMaskCollider(
        CoinRoomLobbyComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *maskCollider; // x0

  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    sub_B52A5C(0LL, flag);
  UnityEngine_Collider__set_enabled(maskCollider, flag, 0LL);
}


void __fastcall CoinRoomLobbyComponent__SetSpriteAtlas(
        CoinRoomLobbyComponent_o *this,
        UnityEngine_GameObject_o *gameObject,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        System_String_o *name,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v12; // x1
  UISprite_o *v13; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B0E7C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (CoinRoomLobbyComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_42B0E7C = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !atlasList )
    sub_B52A5C(this, gameObject);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)atlasList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v17,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v8 )
      break;
    if ( !gameObject )
      sub_B52A5C(v8, v9);
    current = v17.fields.current;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                gameObject,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !current )
      sub_B52A5C(Component_srcLineSprite, v12);
    v13 = (UISprite_o *)Component_srcLineSprite;
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)current, name, 0LL);
    if ( Sprite )
    {
      if ( !v13 )
        sub_B52A5C(Sprite, v15);
      UISprite__set_atlas(v13, (UIAtlas_o *)current, 0LL);
      UISprite__set_spriteName(v13, name, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


System_String_o *__fastcall CoinRoomLobbyComponent__SetTimeLabel(
        CoinRoomLobbyComponent_o *this,
        const MethodInfo *method)
{
  CoinRoomUtility_c *v2; // x0
  int64_t MonthUnixTime; // x19
  System_String_o *RestTime5; // x0
  __int64 v5; // x1
  System_String_o *v6; // x19

  if ( (byte_42B0E7A & 1) == 0 )
  {
    sub_B52984(&CoinRoomUtility_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_23995/*"あと "*/);
    byte_42B0E7A = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime((const MethodInfo *)v2);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime5 = LocalizationManager__GetRestTime5(MonthUnixTime, -1LL, 0LL);
  if ( !RestTime5 )
    sub_B52A5C(0LL, v5);
  v6 = RestTime5;
  if ( System_String__Contains(RestTime5, (System_String_o *)StringLiteral_23995/*"あと "*/, 0LL) )
    return System_String__Replace_44575552(
             v6,
             (System_String_o *)StringLiteral_23995/*"あと "*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
  else
    return v6;
}


void __fastcall CoinRoomLobbyComponent___OnClickBack_b__12_0(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  CoinRoomSelectCoinComponent_o *coinRoomSelectCoinComponent; // x0

  coinRoomSelectCoinComponent = this->fields.coinRoomSelectCoinComponent;
  if ( !coinRoomSelectCoinComponent
    || (CoinRoomSelectCoinComponent__Init(coinRoomSelectCoinComponent, method),
        (coinRoomSelectCoinComponent = (CoinRoomSelectCoinComponent_o *)this->fields.titleInfoControl) == 0LL)
    || (TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)coinRoomSelectCoinComponent, 1, 0LL),
        (coinRoomSelectCoinComponent = (CoinRoomSelectCoinComponent_o *)this->fields.maskCollider) == 0LL) )
  {
    sub_B52A5C(coinRoomSelectCoinComponent, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)coinRoomSelectCoinComponent, 0, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
}