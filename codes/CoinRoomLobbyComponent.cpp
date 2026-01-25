void CoinRoomLobbyComponent___ctor(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CoinRoomLobbyComponent__EndLoadAsset(
        CoinRoomLobbyComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UIAtlas__o *DownloadAtlas; // x0

  if ( (byte_4CF23DE & 1) == 0 )
  {
    sub_1C7BAE8(&CoinRoomUtility_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C7BAE8(&StringLiteral_5340/*"DownloadCoinRoomAtlas"*/);
    byte_4CF23DE = 1;
  }
  if ( assetData )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    DownloadAtlas = CoinRoomUtility__GetDownloadAtlas(assetData, (System_String_o *)StringLiteral_5340/*"DownloadCoinRoomAtlas"*/, method);
    System_Linq_Enumerable__Any_object_(
      (System_Collections_Generic_IEnumerable_TSource__o *)DownloadAtlas,
      (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_UIAtlas___);
  }
}


void CoinRoomLobbyComponent__OnClickBack(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Collider_o *maskCollider; // x0
  BaseMenu_o *coinRoomSelectCoinComponent; // x20
  System_Action_o *v8; // x21
  SceneJumpInfo_o *v9; // x19

  if ( (byte_4CF23DF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_CoinRoomLobbyComponent_OnClickBack__);
    sub_1C7BAE8(&Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__);
    sub_1C7BAE8(&SceneJumpInfo_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CF23DF = 1;
  }
  v3 = Method_CoinRoomLobbyComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_CoinRoomLobbyComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled(maskCollider, 1, 0);
  coinRoomSelectCoinComponent = (BaseMenu_o *)this->fields.coinRoomSelectCoinComponent;
  if ( !coinRoomSelectCoinComponent )
    goto LABEL_13;
  if ( coinRoomSelectCoinComponent->fields.isOpen )
  {
    v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, 0);
    BaseMenu__Close(coinRoomSelectCoinComponent, v8, 0);
    return;
  }
  maskCollider = (UnityEngine_Collider_o *)this->fields.coinListPanel;
  if ( !maskCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskCollider, 0, 0),
        v9 = (SceneJumpInfo_o *)sub_1C7BD34(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor(v9, 0),
        !v9)
    || (SceneJumpInfo__SetReturnNowScene(v9, 0),
        (maskCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
LABEL_13:
    sub_1C7BD40(maskCollider, v5);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)maskCollider, 22, 1, (Il2CppObject *)v9, 0);
}


void CoinRoomLobbyComponent__OnClickHelp(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4CF23E0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CoinRoomLobbyComponent_OnClickHelp__);
    byte_4CF23E0 = 1;
  }
  v2 = Method_CoinRoomLobbyComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C7BB00(Method_CoinRoomLobbyComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 73, 0, 0, 0);
}


void CoinRoomLobbyComponent__OnClickSelectCoin(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  TitleInfoControl_o *titleInfoControl; // x0

  if ( (byte_4CF23E2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CoinRoomLobbyComponent_OnClickSelectCoin__);
    byte_4CF23E2 = 1;
  }
  v3 = Method_CoinRoomLobbyComponent_OnClickSelectCoin__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickSelectCoin__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_CoinRoomLobbyComponent_OnClickSelectCoin__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0),
        MainMenuBar__setMenuActive(0, 0, 0),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.coinRoomSelectCoinComponent) == 0) )
  {
    sub_1C7BD40(titleInfoControl, v5);
  }
  CoinRoomSelectCoinComponent__OpenSelectCoinList((CoinRoomSelectCoinComponent_o *)titleInfoControl, v5);
}


void CoinRoomLobbyComponent__OpenLobby(CoinRoomLobbyComponent_o *this, PlayMakerFSM_o *myFSM, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gaugeBarObject; // x0
  Il2CppObject *Component_object; // x0
  UIProgressBar_o *v8; // x23
  const MethodInfo *v9; // x0
  int32_t v10; // w22
  float v11; // s8
  int v12; // w21
  UnityEngine_ParticleSystem_o *v13; // x23
  float v14; // s8
  UnityEngine_ParticleSystem_MainModule_o v15; // x0
  System_String_o *v16; // x24
  UILabel_o *lobbyInfoLabel; // x23
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
  UnityEngine_ParticleSystem_MinMaxCurve_o v30; // [xsp+30h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4CF23DD & 1) == 0 )
  {
    sub_1C7BAE8(&CoinRoomUtility_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISlider___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19059/*"effect_Circle_loop"*/);
    sub_1C7BAE8(&StringLiteral_3551/*"COIN_ROOM_LOBBY_INFO"*/);
    sub_1C7BAE8(&StringLiteral_3552/*"COIN_ROOM_LOBBY_TIME_INFO"*/);
    byte_4CF23DD = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 73, 0, 0, 0, 0, 0, 0);
  gaugeBarObject = this->fields.gaugeBarObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gaugeBarObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISlider___);
  v8 = (UIProgressBar_o *)Component_object;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v9 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint((const MethodInfo *)Component_object);
  v10 = (int)v9;
  gaugeBarObject = (UnityEngine_GameObject_o *)CoinRoomUtility__MaxPoint(v9);
  if ( !v8 )
    goto LABEL_27;
  v11 = (float)v10 / (float)(int)gaugeBarObject;
  v12 = (int)gaugeBarObject;
  UIProgressBar__set_value(v8, v11, 0);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gaugeBarObject,
                                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  if ( !this->fields.effectCircleObject )
    goto LABEL_27;
  v13 = (UnityEngine_ParticleSystem_o *)gaugeBarObject;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 this->fields.effectCircleObject,
                                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  if ( !gaugeBarObject )
    goto LABEL_27;
  if ( !v13 )
    goto LABEL_27;
  v14 = v11 * *(float *)&gaugeBarObject[1].fields.m_CachedPtr;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v13, 0).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v30, v14, 0);
  v15.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v29 = v30;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v15, &v29, 0);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gaugeBarObject, 0, 0);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gaugeBarObject, 1, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3551/*"COIN_ROOM_LOBBY_INFO"*/, 0);
  lobbyInfoLabel = this->fields.lobbyInfoLabel;
  v30.fields.m_Mode = v10;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v28 = v12;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_64218220(v16, v18, v19, 0);
  if ( !lobbyInfoLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyInfoLabel, (System_String_o *)gaugeBarObject, 0);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3552/*"COIN_ROOM_LOBBY_TIME_INFO"*/, 0);
  v21 = (CoinRoomLobbyComponent_o *)CoinRoomUtility__MonthRemainingNum((const MethodInfo *)v20);
  v22 = (int)v21;
  v24 = (Il2CppObject *)CoinRoomLobbyComponent__SetTimeLabel(v21, v23);
  lobbyTimeLabel = this->fields.lobbyTimeLabel;
  v27 = v22;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_64218220(v20, v26, v24, 0);
  if ( !lobbyTimeLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyTimeLabel, (System_String_o *)gaugeBarObject, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gaugeBarObject, myFSM, 1, 0, 89, 0, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_40473788((TitleInfoControl_o *)gaugeBarObject, 1, 0, 0, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)gaugeBarObject, 0, 0, 1, 89, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)gaugeBarObject, 1, 0);
  if ( !v22 )
  {
    gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.selectCoinButton;
    if ( !gaugeBarObject )
      goto LABEL_27;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppClass **))gaugeBarObject->klass[1]._1.nestedTypes)(
      gaugeBarObject,
      3,
      0,
      gaugeBarObject->klass[1]._1.implementedInterfaces);
  }
  gaugeBarObject = this->fields.effectCircleObject;
  if ( !gaugeBarObject
    || (gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       gaugeBarObject,
                                                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___)) == 0 )
  {
LABEL_27:
    sub_1C7BD40(gaugeBarObject, v5);
  }
  SimpleAnimation__Play_67121960((SimpleAnimation_o *)gaugeBarObject, (System_String_o *)StringLiteral_19059/*"effect_Circle_loop"*/, 0);
}


void CoinRoomLobbyComponent__SetMaskCollider(CoinRoomLobbyComponent_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskCollider; // x0

  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    sub_1C7BD40(0, flag);
  UnityEngine_Collider__set_enabled(maskCollider, flag, 0);
}


void CoinRoomLobbyComponent__SetSpriteAtlas(
        CoinRoomLobbyComponent_o *this,
        UnityEngine_GameObject_o *gameObject,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        System_String_o *name,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x22
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1
  UISprite_o *v13; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CF23E3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (CoinRoomLobbyComponent_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4CF23E3 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !atlasList )
    sub_1C7BD40(this, gameObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)atlasList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v8 )
      break;
    if ( !gameObject )
      sub_1C7BD40(v8, v9);
    current = v17.fields._current;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !current )
      sub_1C7BD40(Component_object, v12);
    v13 = (UISprite_o *)Component_object;
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)current, name, 0);
    if ( Sprite )
    {
      if ( !v13 )
        sub_1C7BD40(Sprite, v15);
      UISprite__set_atlas(v13, (UIAtlas_o *)current, 0);
      UISprite__set_spriteName(v13, name, 0);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


System_String_o *CoinRoomLobbyComponent__SetTimeLabel(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v2; // x0
  int64_t MonthUnixTime; // x19
  System_String_o *RestTime5; // x0
  __int64 v5; // x1
  System_String_o *v6; // x19

  if ( (byte_4CF23E1 & 1) == 0 )
  {
    sub_1C7BAE8(&CoinRoomUtility_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_25639/*"あと "*/);
    byte_4CF23E1 = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime((const MethodInfo *)v2);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime5 = LocalizationManager__GetRestTime5(MonthUnixTime, -1, 0);
  if ( !RestTime5 )
    sub_1C7BD40(0, v5);
  v6 = RestTime5;
  if ( System_String__Contains(RestTime5, (System_String_o *)StringLiteral_25639/*"あと "*/, 0) )
    return System_String__Replace_64223476(
             v6,
             (System_String_o *)StringLiteral_25639/*"あと "*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
  else
    return v6;
}


void CoinRoomLobbyComponent___OnClickBack_b__12_0(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  CoinRoomSelectCoinComponent_o *coinRoomSelectCoinComponent; // x0

  coinRoomSelectCoinComponent = this->fields.coinRoomSelectCoinComponent;
  if ( !coinRoomSelectCoinComponent
    || (CoinRoomSelectCoinComponent__Init(coinRoomSelectCoinComponent, method),
        (coinRoomSelectCoinComponent = (CoinRoomSelectCoinComponent_o *)this->fields.titleInfoControl) == 0)
    || (TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)coinRoomSelectCoinComponent, 1, 0),
        (coinRoomSelectCoinComponent = (CoinRoomSelectCoinComponent_o *)this->fields.maskCollider) == 0) )
  {
    sub_1C7BD40(coinRoomSelectCoinComponent, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)coinRoomSelectCoinComponent, 0, 0);
  MainMenuBar__setMenuActive(1, 0, 0);
}