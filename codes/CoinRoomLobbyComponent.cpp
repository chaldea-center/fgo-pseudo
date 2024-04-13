void __fastcall CoinRoomLobbyComponent___ctor(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CoinRoomLobbyComponent__EndLoadAsset(
        CoinRoomLobbyComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_UIAtlas__o *DownloadAtlas; // x0

  if ( (byte_42E8D1D & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_UIAtlas___, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5447/*"DownloadCoinRoomAtlas"*/, v8, v9, v10);
    byte_42E8D1D = 1;
  }
  if ( assetData )
  {
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    DownloadAtlas = CoinRoomUtility__GetDownloadAtlas(assetData, (System_String_o *)StringLiteral_5447/*"DownloadCoinRoomAtlas"*/, method);
    System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
      (System_Collections_Generic_IEnumerable_TSource__o *)DownloadAtlas,
      (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_UIAtlas___);
  }
}


void __fastcall CoinRoomLobbyComponent__OnClickBack(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x1
  UnityEngine_Collider_o *maskCollider; // x0
  BaseMenu_o *coinRoomSelectCoinComponent; // x20
  System_Action_o *v20; // x21
  SceneJumpInfo_o *v21; // x19

  if ( (byte_42E8D1E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, v5, v6, v7);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E8D1E = 1;
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
    v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, 0LL);
    BaseMenu__Close(coinRoomSelectCoinComponent, v20, 0LL);
    return;
  }
  maskCollider = (UnityEngine_Collider_o *)this->fields.coinListPanel;
  if ( !maskCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskCollider, 0, 0LL),
        v21 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor(v21, 0LL),
        !v21)
    || (SceneJumpInfo__SetReturnNowScene(v21, 0LL),
        (maskCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(maskCollider, v17);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)maskCollider, 22, 1, (Il2CppObject *)v21, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickHelp(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8D1F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8D1F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 73, 0LL, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickSelectCoin(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  TitleInfoControl_o *titleInfoControl; // x0

  if ( (byte_42E8D21 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8D21 = 1;
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
    sub_B5D69C(titleInfoControl, v5);
  }
  CoinRoomSelectCoinComponent__OpenSelectCoinList((CoinRoomSelectCoinComponent_o *)titleInfoControl, v5);
}


void __fastcall CoinRoomLobbyComponent__OpenLobby(
        CoinRoomLobbyComponent_o *this,
        PlayMakerFSM_o *myFSM,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x1
  UnityEngine_GameObject_o *gaugeBarObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UIProgressBar_o *v36; // x23
  const MethodInfo *v37; // x0
  int32_t v38; // w22
  float v39; // s8
  int v40; // w21
  UnityEngine_ParticleSystem_o *v41; // x23
  float v42; // s8
  System_String_o *v43; // x0
  UILabel_o *lobbyInfoLabel; // x23
  System_String_o *v45; // x24
  Il2CppObject *v46; // x22
  Il2CppObject *v47; // x0
  System_String_o *v48; // x23
  CoinRoomLobbyComponent_o *v49; // x0
  int v50; // w21
  const MethodInfo *v51; // x1
  Il2CppObject *v52; // x24
  UILabel_o *lobbyTimeLabel; // x22
  Il2CppObject *v54; // x0
  int v55; // [xsp+8h] [xbp-98h] BYREF
  int v56; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v57; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v58; // [xsp+38h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v60; // 0:x0.8

  if ( (byte_42E8D1C & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, (_DWORD)myFSM, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISlider___, v15, v16, v17);
    sub_B5D5C4(&int_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_18505/*"effect_Circle_loop"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3198/*"COIN_ROOM_LOBBY_INFO"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3199/*"COIN_ROOM_LOBBY_TIME_INFO"*/, v30, v31, v32);
    byte_42E8D1C = 1;
  }
  m_ParticleSystem = 0LL;
  EventTutorialMaster__CheckTutorial(0, 73, 0LL, 0, 0, 0, 0, 0LL);
  gaugeBarObject = this->fields.gaugeBarObject;
  if ( !gaugeBarObject )
    goto LABEL_29;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gaugeBarObject,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISlider___);
  v36 = (UIProgressBar_o *)Component_srcLineSprite;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v37 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint((const MethodInfo *)Component_srcLineSprite);
  v38 = (int)v37;
  gaugeBarObject = (UnityEngine_GameObject_o *)CoinRoomUtility__MaxPoint(v37);
  if ( !v36 )
    goto LABEL_29;
  v39 = (float)v38 / (float)(int)gaugeBarObject;
  v40 = (int)gaugeBarObject;
  UIProgressBar__set_value(v36, v39, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_29;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 gaugeBarObject,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  if ( !this->fields.effectCircleObject )
    goto LABEL_29;
  v41 = (UnityEngine_ParticleSystem_o *)gaugeBarObject;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 this->fields.effectCircleObject,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  if ( !gaugeBarObject )
    goto LABEL_29;
  if ( !v41 )
    goto LABEL_29;
  v42 = v39 * *(float *)&gaugeBarObject[1].monitor;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v41, 0LL).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v58, v42, 0LL);
  v60.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v57 = v58;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v60, &v57, 0LL);
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
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3198/*"COIN_ROOM_LOBBY_INFO"*/, 0LL);
  lobbyInfoLabel = this->fields.lobbyInfoLabel;
  v45 = v43;
  v58.fields.m_Mode = v38;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
  v56 = v40;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(v45, v46, v47, 0LL);
  if ( !lobbyInfoLabel )
    goto LABEL_29;
  UILabel__set_text(lobbyInfoLabel, (System_String_o *)gaugeBarObject, 0LL);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3199/*"COIN_ROOM_LOBBY_TIME_INFO"*/, 0LL);
  v49 = (CoinRoomLobbyComponent_o *)CoinRoomUtility__MonthRemainingNum((const MethodInfo *)v48);
  v50 = (int)v49;
  v52 = (Il2CppObject *)CoinRoomLobbyComponent__SetTimeLabel(v49, v51);
  lobbyTimeLabel = this->fields.lobbyTimeLabel;
  v55 = v50;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(v48, v54, v52, 0LL);
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
  TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)gaugeBarObject, 1, 0, 0, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_29;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)gaugeBarObject, 0, 0, 1, 85, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_29;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)gaugeBarObject, 1, 0LL);
  if ( !v50 )
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
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___)) == 0LL )
  {
LABEL_29:
    sub_B5D69C(gaugeBarObject, v33);
  }
  SimpleAnimation__Play_16676044((SimpleAnimation_o *)gaugeBarObject, (System_String_o *)StringLiteral_18505/*"effect_Circle_loop"*/, 0LL);
}


void __fastcall CoinRoomLobbyComponent__SetMaskCollider(
        CoinRoomLobbyComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *maskCollider; // x0

  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    sub_B5D69C(0LL, flag);
  UnityEngine_Collider__set_enabled(maskCollider, flag, 0LL);
}


void __fastcall CoinRoomLobbyComponent__SetSpriteAtlas(
        CoinRoomLobbyComponent_o *this,
        UnityEngine_GameObject_o *gameObject,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        System_String_o *name,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v24; // x1
  UISprite_o *v25; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E8D22 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__,
      (_DWORD)gameObject,
      (_DWORD)atlasList,
      name);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v14, v15, v16);
    this = (CoinRoomLobbyComponent_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__,
                                         v17,
                                         v18,
                                         v19);
    byte_42E8D22 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !atlasList )
    sub_B5D69C(this, gameObject);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)atlasList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v20 )
      break;
    if ( !gameObject )
      sub_B5D69C(v20, v21);
    current = v29.fields.current;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                gameObject,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !current )
      sub_B5D69C(Component_srcLineSprite, v24);
    v25 = (UISprite_o *)Component_srcLineSprite;
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)current, name, 0LL);
    if ( Sprite )
    {
      if ( !v25 )
        sub_B5D69C(Sprite, v27);
      UISprite__set_atlas(v25, (UIAtlas_o *)current, 0LL);
      UISprite__set_spriteName(v25, name, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


System_String_o *__fastcall CoinRoomLobbyComponent__SetTimeLabel(
        CoinRoomLobbyComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  CoinRoomUtility_c *v13; // x0
  int64_t MonthUnixTime; // x19
  System_String_o *RestTime5; // x0
  __int64 v16; // x1
  System_String_o *v17; // x19

  if ( (byte_42E8D20 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_1/*""*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_24113/*"あと "*/, v10, v11, v12);
    byte_42E8D20 = 1;
  }
  v13 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime((const MethodInfo *)v13);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime5 = LocalizationManager__GetRestTime5(MonthUnixTime, -1LL, 0LL);
  if ( !RestTime5 )
    sub_B5D69C(0LL, v16);
  v17 = RestTime5;
  if ( System_String__Contains(RestTime5, (System_String_o *)StringLiteral_24113/*"あと "*/, 0LL) )
    return System_String__Replace_44585024(
             v17,
             (System_String_o *)StringLiteral_24113/*"あと "*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
  else
    return v17;
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
    sub_B5D69C(coinRoomSelectCoinComponent, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)coinRoomSelectCoinComponent, 0, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
}