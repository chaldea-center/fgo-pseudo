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

  if ( (byte_4188878 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, assetData);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_UIAtlas___, v4);
    sub_B2C35C(&StringLiteral_5371/*"DownloadCoinRoomAtlas"*/, v5);
    byte_4188878 = 1;
  }
  if ( assetData )
  {
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    DownloadAtlas = CoinRoomUtility__GetDownloadAtlas(assetData, (System_String_o *)StringLiteral_5371/*"DownloadCoinRoomAtlas"*/, method);
    System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
      (System_Collections_Generic_IEnumerable_TSource__o *)DownloadAtlas,
      (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_UIAtlas___);
  }
}


void __fastcall CoinRoomLobbyComponent__OnClickBack(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Collider_o *maskCollider; // x0
  BaseMenu_o *coinRoomSelectCoinComponent; // x20
  System_Action_o *v10; // x21
  SceneJumpInfo_o *v11; // x19

  if ( (byte_4188879 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, v3);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_4188879 = 1;
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
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, 0LL);
    BaseMenu__Close(coinRoomSelectCoinComponent, v10, 0LL);
    return;
  }
  maskCollider = (UnityEngine_Collider_o *)this->fields.coinListPanel;
  if ( !maskCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskCollider, 0, 0LL),
        v11 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor(v11, 0LL),
        !v11)
    || (SceneJumpInfo__SetReturnNowScene(v11, 0LL),
        (maskCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_B2C434(maskCollider, v7);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)maskCollider, 22, 1, (Il2CppObject *)v11, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickHelp(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418887A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418887A = 1;
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

  if ( (byte_418887C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418887C = 1;
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
    sub_B2C434(titleInfoControl, v3);
  }
  CoinRoomSelectCoinComponent__OpenSelectCoinList((CoinRoomSelectCoinComponent_o *)titleInfoControl, v3);
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
  __int64 v14; // x1
  UnityEngine_GameObject_o *gaugeBarObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UIProgressBar_o *v17; // x23
  const MethodInfo *v18; // x0
  int32_t v19; // w22
  float v20; // s8
  int v21; // w21
  UnityEngine_ParticleSystem_o *v22; // x23
  float v23; // s8
  System_String_o *v24; // x0
  UILabel_o *lobbyInfoLabel; // x23
  System_String_o *v26; // x24
  Il2CppObject *v27; // x22
  Il2CppObject *v28; // x0
  System_String_o *v29; // x23
  CoinRoomLobbyComponent_o *v30; // x0
  int v31; // w21
  const MethodInfo *v32; // x1
  Il2CppObject *v33; // x24
  UILabel_o *lobbyTimeLabel; // x22
  Il2CppObject *v35; // x0
  int v36; // [xsp+8h] [xbp-98h] BYREF
  int v37; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v38; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v39; // [xsp+38h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v41; // 0:x0.8

  if ( (byte_4188877 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, myFSM);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISlider___, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_18277/*"effect_Circle_loop"*/, v11);
    sub_B2C35C(&StringLiteral_3133/*"COIN_ROOM_LOBBY_INFO"*/, v12);
    sub_B2C35C(&StringLiteral_3134/*"COIN_ROOM_LOBBY_TIME_INFO"*/, v13);
    byte_4188877 = 1;
  }
  m_ParticleSystem = 0LL;
  EventTutorialMaster__CheckTutorial(0, 73, 0LL, 0, 0, 0, 0, 0LL);
  gaugeBarObject = this->fields.gaugeBarObject;
  if ( !gaugeBarObject )
    goto LABEL_29;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gaugeBarObject,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISlider___);
  v17 = (UIProgressBar_o *)Component_srcLineSprite;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v18 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint((const MethodInfo *)Component_srcLineSprite);
  v19 = (int)v18;
  gaugeBarObject = (UnityEngine_GameObject_o *)CoinRoomUtility__MaxPoint(v18);
  if ( !v17 )
    goto LABEL_29;
  v20 = (float)v19 / (float)(int)gaugeBarObject;
  v21 = (int)gaugeBarObject;
  UIProgressBar__set_value(v17, v20, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_29;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 gaugeBarObject,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  if ( !this->fields.effectCircleObject )
    goto LABEL_29;
  v22 = (UnityEngine_ParticleSystem_o *)gaugeBarObject;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 this->fields.effectCircleObject,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  if ( !gaugeBarObject )
    goto LABEL_29;
  if ( !v22 )
    goto LABEL_29;
  v23 = v20 * *(float *)&gaugeBarObject[1].monitor;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v22, 0LL).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v39, v23, 0LL);
  v41.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v38 = v39;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v41, &v38, 0LL);
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
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3133/*"COIN_ROOM_LOBBY_INFO"*/, 0LL);
  lobbyInfoLabel = this->fields.lobbyInfoLabel;
  v26 = v24;
  v39.fields.m_Mode = v19;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  v37 = v21;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(v26, v27, v28, 0LL);
  if ( !lobbyInfoLabel )
    goto LABEL_29;
  UILabel__set_text(lobbyInfoLabel, (System_String_o *)gaugeBarObject, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3134/*"COIN_ROOM_LOBBY_TIME_INFO"*/, 0LL);
  v30 = (CoinRoomLobbyComponent_o *)CoinRoomUtility__MonthRemainingNum((const MethodInfo *)v29);
  v31 = (int)v30;
  v33 = (Il2CppObject *)CoinRoomLobbyComponent__SetTimeLabel(v30, v32);
  lobbyTimeLabel = this->fields.lobbyTimeLabel;
  v36 = v31;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(v29, v35, v33, 0LL);
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
  TitleInfoControl__setBackBtnSprite_19529688((TitleInfoControl_o *)gaugeBarObject, 1, 0, 0, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_29;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)gaugeBarObject, 0, 0, 1, 85, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_29;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)gaugeBarObject, 1, 0LL);
  if ( !v31 )
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
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___)) == 0LL )
  {
LABEL_29:
    sub_B2C434(gaugeBarObject, v14);
  }
  SimpleAnimation__Play_16486620((SimpleAnimation_o *)gaugeBarObject, (System_String_o *)StringLiteral_18277/*"effect_Circle_loop"*/, 0LL);
}


void __fastcall CoinRoomLobbyComponent__SetMaskCollider(
        CoinRoomLobbyComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *maskCollider; // x0

  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    sub_B2C434(0LL, flag);
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
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v16; // x1
  UISprite_o *v17; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418887D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, gameObject);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    this = (CoinRoomLobbyComponent_o *)sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v11);
    byte_418887D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !atlasList )
    sub_B2C434(this, gameObject);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)atlasList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v12 )
      break;
    if ( !gameObject )
      sub_B2C434(v12, v13);
    current = v21.fields.current;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                gameObject,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !current )
      sub_B2C434(Component_srcLineSprite, v16);
    v17 = (UISprite_o *)Component_srcLineSprite;
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)current, name, 0LL);
    if ( Sprite )
    {
      if ( !v17 )
        sub_B2C434(Sprite, v19);
      UISprite__set_atlas(v17, (UIAtlas_o *)current, 0LL);
      UISprite__set_spriteName(v17, name, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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
  __int64 v8; // x1
  System_String_o *v9; // x19

  if ( (byte_418887B & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    sub_B2C35C(&StringLiteral_23800/*"あと "*/, v4);
    byte_418887B = 1;
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
    sub_B2C434(0LL, v8);
  v9 = RestTime5;
  if ( System_String__Contains(RestTime5, (System_String_o *)StringLiteral_23800/*"あと "*/, 0LL) )
    return System_String__Replace_44312768(
             v9,
             (System_String_o *)StringLiteral_23800/*"あと "*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
  else
    return v9;
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
    sub_B2C434(coinRoomSelectCoinComponent, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)coinRoomSelectCoinComponent, 0, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
}