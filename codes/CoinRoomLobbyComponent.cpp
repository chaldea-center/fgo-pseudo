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

  if ( (byte_4C3B748 & 1) == 0 )
  {
    sub_1C32C20(&CoinRoomUtility_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C32C20(&StringLiteral_5336/*"DownloadCoinRoomAtlas"*/);
    byte_4C3B748 = 1;
  }
  if ( assetData )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    DownloadAtlas = CoinRoomUtility__GetDownloadAtlas(assetData, (System_String_o *)StringLiteral_5336/*"DownloadCoinRoomAtlas"*/, method);
    System_Linq_Enumerable__Any_object_(
      (System_Collections_Generic_IEnumerable_TSource__o *)DownloadAtlas,
      (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_UIAtlas___);
  }
}


void CoinRoomLobbyComponent__OnClickBack(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_Collider_o *maskCollider; // x0
  BaseMenu_o *coinRoomSelectCoinComponent; // x20
  System_Action_o *v7; // x21
  SceneJumpInfo_o *v8; // x19

  if ( (byte_4C3B749 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CoinRoomLobbyComponent_OnClickBack__);
    sub_1C32C20(&Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__);
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3B749 = 1;
  }
  v3 = Method_CoinRoomLobbyComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_CoinRoomLobbyComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, 0);
    BaseMenu__Close(coinRoomSelectCoinComponent, v7, 0);
    return;
  }
  maskCollider = (UnityEngine_Collider_o *)this->fields.coinListPanel;
  if ( !maskCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskCollider, 0, 0),
        v8 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor(v8, 0),
        !v8)
    || (SceneJumpInfo__SetReturnNowScene(v8, 0),
        (maskCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
LABEL_13:
    sub_1C32E7C(maskCollider);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)maskCollider, 22, 1, (Il2CppObject *)v8, 0);
}


void CoinRoomLobbyComponent__OnClickHelp(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C3B74A & 1) == 0 )
  {
    sub_1C32C20(&Method_CoinRoomLobbyComponent_OnClickHelp__);
    byte_4C3B74A = 1;
  }
  v2 = Method_CoinRoomLobbyComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C32C38(Method_CoinRoomLobbyComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C32C04(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 73, 0, 0, 0);
}


void CoinRoomLobbyComponent__OnClickSelectCoin(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  TitleInfoControl_o *titleInfoControl; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C3B74C & 1) == 0 )
  {
    sub_1C32C20(&Method_CoinRoomLobbyComponent_OnClickSelectCoin__);
    byte_4C3B74C = 1;
  }
  v3 = Method_CoinRoomLobbyComponent_OnClickSelectCoin__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickSelectCoin__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_CoinRoomLobbyComponent_OnClickSelectCoin__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0),
        MainMenuBar__setMenuActive(0, 0, 0),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.coinRoomSelectCoinComponent) == 0) )
  {
    sub_1C32E7C(titleInfoControl);
  }
  CoinRoomSelectCoinComponent__OpenSelectCoinList((CoinRoomSelectCoinComponent_o *)titleInfoControl, v6);
}


void CoinRoomLobbyComponent__OpenLobby(CoinRoomLobbyComponent_o *this, PlayMakerFSM_o *myFSM, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gaugeBarObject; // x0
  Il2CppObject *Component_object; // x0
  UIProgressBar_o *v7; // x23
  const MethodInfo *v8; // x0
  int32_t v9; // w22
  float v10; // s8
  int v11; // w21
  UnityEngine_ParticleSystem_o *v12; // x23
  float v13; // s8
  UnityEngine_ParticleSystem_MainModule_o v14; // x0
  System_String_o *v15; // x24
  UILabel_o *lobbyInfoLabel; // x23
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x0
  System_String_o *v31; // x23
  CoinRoomLobbyComponent_o *v32; // x0
  int v33; // w21
  const MethodInfo *v34; // x1
  Il2CppObject *v35; // x24
  UILabel_o *lobbyTimeLabel; // x22
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  Il2CppObject *v43; // x0
  int v44; // [xsp+8h] [xbp-98h] BYREF
  int v45; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v46; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v47; // [xsp+30h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4C3B747 & 1) == 0 )
  {
    sub_1C32C20(&CoinRoomUtility_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISlider___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_18930/*"effect_Circle_loop"*/);
    sub_1C32C20(&StringLiteral_3546/*"COIN_ROOM_LOBBY_INFO"*/);
    sub_1C32C20(&StringLiteral_3547/*"COIN_ROOM_LOBBY_TIME_INFO"*/);
    byte_4C3B747 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 73, 0, 0, 0, 0, 0, 0);
  gaugeBarObject = this->fields.gaugeBarObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gaugeBarObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISlider___);
  v7 = (UIProgressBar_o *)Component_object;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v8 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint((const MethodInfo *)Component_object);
  v9 = (int)v8;
  gaugeBarObject = (UnityEngine_GameObject_o *)CoinRoomUtility__MaxPoint(v8);
  if ( !v7 )
    goto LABEL_27;
  v10 = (float)v9 / (float)(int)gaugeBarObject;
  v11 = (int)gaugeBarObject;
  UIProgressBar__set_value(v7, v10, 0);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gaugeBarObject,
                                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  if ( !this->fields.effectCircleObject )
    goto LABEL_27;
  v12 = (UnityEngine_ParticleSystem_o *)gaugeBarObject;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 this->fields.effectCircleObject,
                                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  if ( !gaugeBarObject )
    goto LABEL_27;
  if ( !v12 )
    goto LABEL_27;
  v13 = v10 * *(float *)&gaugeBarObject[1].fields.m_CachedPtr;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v12, 0).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v47, v13, 0);
  v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v46 = v47;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v14, &v46, 0);
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
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3546/*"COIN_ROOM_LOBBY_INFO"*/, 0);
  lobbyInfoLabel = this->fields.lobbyInfoLabel;
  v47.fields.m_Mode = v9;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v17, v18, v19, v20, v21, v22);
  v45 = v11;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v24, v25, v26, v27, v28, v29);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_63559836(v15, v23, v30, 0);
  if ( !lobbyInfoLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyInfoLabel, (System_String_o *)gaugeBarObject, 0);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3547/*"COIN_ROOM_LOBBY_TIME_INFO"*/, 0);
  v32 = (CoinRoomLobbyComponent_o *)CoinRoomUtility__MonthRemainingNum((const MethodInfo *)v31);
  v33 = (int)v32;
  v35 = (Il2CppObject *)CoinRoomLobbyComponent__SetTimeLabel(v32, v34);
  lobbyTimeLabel = this->fields.lobbyTimeLabel;
  v44 = v33;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v37, v38, v39, v40, v41, v42);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_63559836(v31, v43, v35, 0);
  if ( !lobbyTimeLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyTimeLabel, (System_String_o *)gaugeBarObject, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gaugeBarObject, myFSM, 1, 0, 88, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_39743540((TitleInfoControl_o *)gaugeBarObject, 1, 0, 0, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)gaugeBarObject, 0, 0, 1, 88, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)gaugeBarObject, 1, 0);
  if ( !v33 )
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
                                                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___)) == 0 )
  {
LABEL_27:
    sub_1C32E7C(gaugeBarObject);
  }
  SimpleAnimation__Play_66464300((SimpleAnimation_o *)gaugeBarObject, (System_String_o *)StringLiteral_18930/*"effect_Circle_loop"*/, 0);
}


void CoinRoomLobbyComponent__SetMaskCollider(CoinRoomLobbyComponent_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskCollider; // x0

  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    sub_1C32E7C(0);
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
  Il2CppObject *current; // x22
  Il2CppObject *Component_object; // x0
  UISprite_o *v11; // x21
  UISpriteData_o *Sprite; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3B74D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (CoinRoomLobbyComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4C3B74D = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !atlasList )
    sub_1C32E7C(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)atlasList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v8 )
      break;
    if ( !gameObject )
      sub_1C32E7C(v8);
    current = v14.fields._current;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !current )
      sub_1C32E7C(Component_object);
    v11 = (UISprite_o *)Component_object;
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)current, name, 0);
    if ( Sprite )
    {
      if ( !v11 )
        sub_1C32E7C(Sprite);
      UISprite__set_atlas(v11, (UIAtlas_o *)current, 0);
      UISprite__set_spriteName(v11, name, 0);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


System_String_o *CoinRoomLobbyComponent__SetTimeLabel(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v2; // x0
  int64_t MonthUnixTime; // x19
  System_String_o *RestTime5; // x0
  System_String_o *v5; // x19

  if ( (byte_4C3B74B & 1) == 0 )
  {
    sub_1C32C20(&CoinRoomUtility_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_25379/*"あと "*/);
    byte_4C3B74B = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime((const MethodInfo *)v2);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime5 = LocalizationManager__GetRestTime5(MonthUnixTime, -1, 0);
  if ( !RestTime5 )
    sub_1C32E7C(0);
  v5 = RestTime5;
  if ( System_String__Contains(RestTime5, (System_String_o *)StringLiteral_25379/*"あと "*/, 0) )
    return System_String__Replace_63565092(
             v5,
             (System_String_o *)StringLiteral_25379/*"あと "*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
  else
    return v5;
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
    sub_1C32E7C(coinRoomSelectCoinComponent);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)coinRoomSelectCoinComponent, 0, 0);
  MainMenuBar__setMenuActive(1, 0, 0);
}