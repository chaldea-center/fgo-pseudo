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

  if ( (byte_4D347C9 & 1) == 0 )
  {
    sub_1C93AD4(&CoinRoomUtility_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C93AD4(&StringLiteral_5356/*"DownloadCoinRoomAtlas"*/);
    byte_4D347C9 = 1;
  }
  if ( assetData )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    DownloadAtlas = CoinRoomUtility__GetDownloadAtlas(assetData, (System_String_o *)StringLiteral_5356/*"DownloadCoinRoomAtlas"*/, method);
    System_Linq_Enumerable__Any_object_(
      (System_Collections_Generic_IEnumerable_TSource__o *)DownloadAtlas,
      (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_UIAtlas___);
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

  if ( (byte_4D347CA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CoinRoomLobbyComponent_OnClickBack__);
    sub_1C93AD4(&Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__);
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D347CA = 1;
  }
  v3 = Method_CoinRoomLobbyComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_CoinRoomLobbyComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
    v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, 0);
    BaseMenu__Close(coinRoomSelectCoinComponent, v8, 0);
    return;
  }
  maskCollider = (UnityEngine_Collider_o *)this->fields.coinListPanel;
  if ( !maskCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskCollider, 0, 0),
        v9 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor(v9, 0),
        !v9)
    || (SceneJumpInfo__SetReturnNowScene(v9, 0),
        (maskCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
LABEL_13:
    sub_1C93D2C(maskCollider, v5);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)maskCollider, 22, 1, (Il2CppObject *)v9, 0);
}


void CoinRoomLobbyComponent__OnClickHelp(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4D347CB & 1) == 0 )
  {
    sub_1C93AD4(&Method_CoinRoomLobbyComponent_OnClickHelp__);
    byte_4D347CB = 1;
  }
  v2 = Method_CoinRoomLobbyComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C93AEC(Method_CoinRoomLobbyComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 73, 0, 0, 0);
}


void CoinRoomLobbyComponent__OnClickSelectCoin(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  TitleInfoControl_o *titleInfoControl; // x0

  if ( (byte_4D347CD & 1) == 0 )
  {
    sub_1C93AD4(&Method_CoinRoomLobbyComponent_OnClickSelectCoin__);
    byte_4D347CD = 1;
  }
  v3 = Method_CoinRoomLobbyComponent_OnClickSelectCoin__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickSelectCoin__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_CoinRoomLobbyComponent_OnClickSelectCoin__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0),
        MainMenuBar__setMenuActive(0, 0, 0),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.coinRoomSelectCoinComponent) == 0) )
  {
    sub_1C93D2C(titleInfoControl, v5);
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
  System_String_o *v15; // x24
  UILabel_o *lobbyInfoLabel; // x23
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x23
  CoinRoomLobbyComponent_o *v20; // x0
  int v21; // w21
  const MethodInfo *v22; // x1
  Il2CppObject *v23; // x24
  UILabel_o *lobbyTimeLabel; // x22
  Il2CppObject *v25; // x0
  int v26; // [xsp+8h] [xbp-98h] BYREF
  int v27; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v28; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v29; // [xsp+30h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4D347C8 & 1) == 0 )
  {
    sub_1C93AD4(&CoinRoomUtility_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISlider___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_19110/*"effect_Circle_loop"*/);
    sub_1C93AD4(&StringLiteral_3567/*"COIN_ROOM_LOBBY_INFO"*/);
    sub_1C93AD4(&StringLiteral_3568/*"COIN_ROOM_LOBBY_TIME_INFO"*/);
    byte_4D347C8 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 73, 0, 0, 0, 0, 0, 0);
  gaugeBarObject = this->fields.gaugeBarObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gaugeBarObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISlider___);
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
                                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  if ( !this->fields.effectCircleObject )
    goto LABEL_27;
  v13 = (UnityEngine_ParticleSystem_o *)gaugeBarObject;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 this->fields.effectCircleObject,
                                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  if ( !gaugeBarObject )
    goto LABEL_27;
  if ( !v13 )
    goto LABEL_27;
  v14 = v11 * *(float *)&gaugeBarObject[1].fields.m_CachedPtr;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v13, 0).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v29, v14, 0);
  v28 = v29;
  UnityEngine_ParticleSystem_MainModule__set_startSize(
    (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
    &v28,
    0);
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
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3567/*"COIN_ROOM_LOBBY_INFO"*/, 0);
  lobbyInfoLabel = this->fields.lobbyInfoLabel;
  v29.fields.m_Mode = v10;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v27 = v12;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_64467032(v15, v17, v18, 0);
  if ( !lobbyInfoLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyInfoLabel, (System_String_o *)gaugeBarObject, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3568/*"COIN_ROOM_LOBBY_TIME_INFO"*/, 0);
  v20 = (CoinRoomLobbyComponent_o *)CoinRoomUtility__MonthRemainingNum((const MethodInfo *)v19);
  v21 = (int)v20;
  v23 = (Il2CppObject *)CoinRoomLobbyComponent__SetTimeLabel(v20, v22);
  lobbyTimeLabel = this->fields.lobbyTimeLabel;
  v26 = v21;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_64467032(v19, v25, v23, 0);
  if ( !lobbyTimeLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyTimeLabel, (System_String_o *)gaugeBarObject, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gaugeBarObject, myFSM, 1, 0, 89, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_40620696((TitleInfoControl_o *)gaugeBarObject, 1, 0, 0, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)gaugeBarObject, 0, 0, 1, 89, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)gaugeBarObject, 1, 0);
  if ( !v21 )
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
                                                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___)) == 0 )
  {
LABEL_27:
    sub_1C93D2C(gaugeBarObject, v5);
  }
  SimpleAnimation__Play_67370764((SimpleAnimation_o *)gaugeBarObject, (System_String_o *)StringLiteral_19110/*"effect_Circle_loop"*/, 0);
}


void CoinRoomLobbyComponent__SetMaskCollider(CoinRoomLobbyComponent_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskCollider; // x0

  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    sub_1C93D2C(0, flag);
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

  if ( (byte_4D347CE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (CoinRoomLobbyComponent_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4D347CE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !atlasList )
    sub_1C93D2C(this, gameObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)atlasList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v8 )
      break;
    if ( !gameObject )
      sub_1C93D2C(v8, v9);
    current = v17.fields._current;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !current )
      sub_1C93D2C(Component_object, v12);
    v13 = (UISprite_o *)Component_object;
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)current, name, 0);
    if ( Sprite )
    {
      if ( !v13 )
        sub_1C93D2C(Sprite, v15);
      UISprite__set_atlas(v13, (UIAtlas_o *)current, 0);
      UISprite__set_spriteName(v13, name, 0);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


System_String_o *CoinRoomLobbyComponent__SetTimeLabel(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v2; // x0
  int64_t MonthUnixTime; // x19
  System_String_o *RestTime5; // x0
  __int64 v5; // x1
  System_String_o *v6; // x19

  if ( (byte_4D347CC & 1) == 0 )
  {
    sub_1C93AD4(&CoinRoomUtility_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_25710/*"あと "*/);
    byte_4D347CC = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime((const MethodInfo *)v2);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime5 = LocalizationManager__GetRestTime5(MonthUnixTime, -1, 0);
  if ( !RestTime5 )
    sub_1C93D2C(0, v5);
  v6 = RestTime5;
  if ( System_String__Contains(RestTime5, (System_String_o *)StringLiteral_25710/*"あと "*/, 0) )
    return System_String__Replace_64472288(
             v6,
             (System_String_o *)StringLiteral_25710/*"あと "*/,
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
    sub_1C93D2C(coinRoomSelectCoinComponent, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)coinRoomSelectCoinComponent, 0, 0);
  MainMenuBar__setMenuActive(1, 0, 0);
}