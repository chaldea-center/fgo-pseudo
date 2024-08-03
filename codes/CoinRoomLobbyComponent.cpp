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

  if ( (byte_49FF8F3 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, assetData);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_UIAtlas___, v4);
    sub_1B640C8(&StringLiteral_5345/*"DownloadCoinRoomAtlas"*/, v5);
    byte_49FF8F3 = 1;
  }
  if ( assetData )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    DownloadAtlas = CoinRoomUtility__GetDownloadAtlas(assetData, (System_String_o *)StringLiteral_5345/*"DownloadCoinRoomAtlas"*/, method);
    System_Linq_Enumerable__Any_object_(
      (System_Collections_Generic_IEnumerable_TSource__o *)DownloadAtlas,
      (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_UIAtlas___);
  }
}


void __fastcall CoinRoomLobbyComponent__OnClickBack(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_Collider_o *maskCollider; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  BaseMenu_o *coinRoomSelectCoinComponent; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  SceneJumpInfo_o *v16; // x19

  if ( (byte_49FF8F4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CoinRoomLobbyComponent_OnClickBack__, v3);
    sub_1B640C8(&Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, v4);
    sub_1B640C8(&SceneJumpInfo_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_49FF8F4 = 1;
  }
  v7 = Method_CoinRoomLobbyComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickBack__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_CoinRoomLobbyComponent_OnClickBack__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled(maskCollider, 1, 0LL);
  coinRoomSelectCoinComponent = (BaseMenu_o *)this->fields.coinRoomSelectCoinComponent;
  if ( !coinRoomSelectCoinComponent )
    goto LABEL_13;
  if ( coinRoomSelectCoinComponent->fields.isOpen )
  {
    v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, 0LL);
    BaseMenu__Close(coinRoomSelectCoinComponent, v13, 0LL);
    return;
  }
  maskCollider = (UnityEngine_Collider_o *)this->fields.coinListPanel;
  if ( !maskCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskCollider, 0, 0LL),
        v16 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v14, v15),
        SceneJumpInfo___ctor(v16, 0LL),
        !v16)
    || (SceneJumpInfo__SetReturnNowScene(v16, 0LL),
        (maskCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1B64324(maskCollider);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)maskCollider, 22, 1, (Il2CppObject *)v16, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickHelp(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_49FF8F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_CoinRoomLobbyComponent_OnClickHelp__, method);
    byte_49FF8F5 = 1;
  }
  v2 = Method_CoinRoomLobbyComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B640E0(Method_CoinRoomLobbyComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B640AC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 73, 0LL, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickSelectCoin(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  TitleInfoControl_o *titleInfoControl; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49FF8F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_CoinRoomLobbyComponent_OnClickSelectCoin__, method);
    byte_49FF8F7 = 1;
  }
  v3 = Method_CoinRoomLobbyComponent_OnClickSelectCoin__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickSelectCoin__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CoinRoomLobbyComponent_OnClickSelectCoin__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0LL),
        MainMenuBar__setMenuActive(0, 0LL, 0LL),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.coinRoomSelectCoinComponent) == 0LL) )
  {
    sub_1B64324(titleInfoControl);
  }
  CoinRoomSelectCoinComponent__OpenSelectCoinList((CoinRoomSelectCoinComponent_o *)titleInfoControl, v6);
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
  Il2CppObject *Component_object; // x0
  UIProgressBar_o *v16; // x23
  const MethodInfo *v17; // x0
  int32_t v18; // w22
  float v19; // s8
  int v20; // w21
  UnityEngine_ParticleSystem_o *v21; // x23
  float v22; // s8
  System_String_o *v23; // x24
  UILabel_o *lobbyInfoLabel; // x23
  Il2CppObject *v25; // x22
  Il2CppObject *v26; // x0
  System_String_o *v27; // x23
  CoinRoomLobbyComponent_o *v28; // x0
  int v29; // w21
  const MethodInfo *v30; // x1
  Il2CppObject *v31; // x24
  UILabel_o *lobbyTimeLabel; // x22
  Il2CppObject *v33; // x0
  int v34; // [xsp+8h] [xbp-98h] BYREF
  int v35; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v36; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v37; // [xsp+30h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v39; // 0:x0.8

  if ( (byte_49FF8F2 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, myFSM);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISlider___, v8);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_18851/*"effect_Circle_loop"*/, v11);
    sub_1B640C8(&StringLiteral_3604/*"COIN_ROOM_LOBBY_INFO"*/, v12);
    sub_1B640C8(&StringLiteral_3605/*"COIN_ROOM_LOBBY_TIME_INFO"*/, v13);
    byte_49FF8F2 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 73, 0LL, 0, 0, 0, 0, 0LL);
  gaugeBarObject = this->fields.gaugeBarObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gaugeBarObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISlider___);
  v16 = (UIProgressBar_o *)Component_object;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v17 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint((const MethodInfo *)Component_object);
  v18 = (int)v17;
  gaugeBarObject = (UnityEngine_GameObject_o *)CoinRoomUtility__MaxPoint(v17);
  if ( !v16 )
    goto LABEL_27;
  v19 = (float)v18 / (float)(int)gaugeBarObject;
  v20 = (int)gaugeBarObject;
  UIProgressBar__set_value(v16, v19, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gaugeBarObject,
                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  if ( !this->fields.effectCircleObject )
    goto LABEL_27;
  v21 = (UnityEngine_ParticleSystem_o *)gaugeBarObject;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 this->fields.effectCircleObject,
                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  if ( !gaugeBarObject )
    goto LABEL_27;
  if ( !v21 )
    goto LABEL_27;
  v22 = v19 * *(float *)&gaugeBarObject[1].fields.m_CachedPtr;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v21, 0LL).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v37, v22, 0LL);
  v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v36 = v37;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v39, &v36, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gaugeBarObject, 0, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gaugeBarObject, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3604/*"COIN_ROOM_LOBBY_INFO"*/, 0LL);
  lobbyInfoLabel = this->fields.lobbyInfoLabel;
  v37.fields.m_Mode = v18;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v35 = v20;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_61389768(v23, v25, v26, 0LL);
  if ( !lobbyInfoLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyInfoLabel, (System_String_o *)gaugeBarObject, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3605/*"COIN_ROOM_LOBBY_TIME_INFO"*/, 0LL);
  v28 = (CoinRoomLobbyComponent_o *)CoinRoomUtility__MonthRemainingNum((const MethodInfo *)v27);
  v29 = (int)v28;
  v31 = (Il2CppObject *)CoinRoomLobbyComponent__SetTimeLabel(v28, v30);
  lobbyTimeLabel = this->fields.lobbyTimeLabel;
  v34 = v29;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_61389768(v27, v33, v31, 0LL);
  if ( !lobbyTimeLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyTimeLabel, (System_String_o *)gaugeBarObject, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gaugeBarObject, myFSM, 1, 0LL, 85, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_36875508((TitleInfoControl_o *)gaugeBarObject, 1, 0, 0, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)gaugeBarObject, 0, 0, 1, 85, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)gaugeBarObject, 1, 0LL);
  if ( !v29 )
  {
    gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.selectCoinButton;
    if ( !gaugeBarObject )
      goto LABEL_27;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))gaugeBarObject->klass[1]._1.implementedInterfaces)(
      gaugeBarObject,
      3LL,
      0LL,
      gaugeBarObject->klass[1]._1.interfaceOffsets);
  }
  gaugeBarObject = this->fields.effectCircleObject;
  if ( !gaugeBarObject
    || (gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       gaugeBarObject,
                                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___)) == 0LL )
  {
LABEL_27:
    sub_1B64324(gaugeBarObject);
  }
  SimpleAnimation__Play_63513060((SimpleAnimation_o *)gaugeBarObject, (System_String_o *)StringLiteral_18851/*"effect_Circle_loop"*/, 0LL);
}


void __fastcall CoinRoomLobbyComponent__SetMaskCollider(
        CoinRoomLobbyComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *maskCollider; // x0

  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    sub_1B64324(0LL);
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
  Il2CppObject *current; // x22
  Il2CppObject *Component_object; // x0
  UISprite_o *v15; // x21
  UISpriteData_o *Sprite; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FF8F8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, gameObject);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    this = (CoinRoomLobbyComponent_o *)sub_1B640C8(
                                         &Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__,
                                         v11);
    byte_49FF8F8 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !atlasList )
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)atlasList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v12 )
      break;
    if ( !gameObject )
      sub_1B64324(v12);
    current = v18.fields._current;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !current )
      sub_1B64324(Component_object);
    v15 = (UISprite_o *)Component_object;
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)current, name, 0LL);
    if ( Sprite )
    {
      if ( !v15 )
        sub_1B64324(Sprite);
      UISprite__set_atlas(v15, (UIAtlas_o *)current, 0LL);
      UISprite__set_spriteName(v15, name, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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

  if ( (byte_49FF8F6 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    sub_1B640C8(&StringLiteral_25173/*"あと "*/, v4);
    byte_49FF8F6 = 1;
  }
  v5 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime((const MethodInfo *)v5);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime5 = LocalizationManager__GetRestTime5(MonthUnixTime, -1LL, 0LL);
  if ( !RestTime5 )
    sub_1B64324(0LL);
  v8 = RestTime5;
  if ( System_String__Contains(RestTime5, (System_String_o *)StringLiteral_25173/*"あと "*/, 0LL) )
    return System_String__Replace_61395016(
             v8,
             (System_String_o *)StringLiteral_25173/*"あと "*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
  else
    return v8;
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
    sub_1B64324(coinRoomSelectCoinComponent);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)coinRoomSelectCoinComponent, 0, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
}