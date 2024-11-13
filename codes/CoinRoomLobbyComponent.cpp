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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_UIAtlas__o *DownloadAtlas; // x0

  if ( (byte_4B19808 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, assetData, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_UIAtlas___, v4, v5);
    sub_1BCA7E0(&StringLiteral_5445/*"DownloadCoinRoomAtlas"*/, v6, v7);
    byte_4B19808 = 1;
  }
  if ( assetData )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, assetData);
    DownloadAtlas = CoinRoomUtility__GetDownloadAtlas(assetData, (System_String_o *)StringLiteral_5445/*"DownloadCoinRoomAtlas"*/, method);
    System_Linq_Enumerable__Any_object_(
      (System_Collections_Generic_IEnumerable_TSource__o *)DownloadAtlas,
      (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_UIAtlas___);
  }
}


void __fastcall CoinRoomLobbyComponent__OnClickBack(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  UnityEngine_Collider_o *maskCollider; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  BaseMenu_o *coinRoomSelectCoinComponent; // x20
  System_Action_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  SceneJumpInfo_o *v23; // x19

  if ( (byte_4B19809 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CoinRoomLobbyComponent_OnClickBack__, v4, v5);
    sub_1BCA7E0(&Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, v6, v7);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11);
    byte_4B19809 = 1;
  }
  v12 = Method_CoinRoomLobbyComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickBack__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_CoinRoomLobbyComponent_OnClickBack__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled(maskCollider, 1, 0LL);
  coinRoomSelectCoinComponent = (BaseMenu_o *)this->fields.coinRoomSelectCoinComponent;
  if ( !coinRoomSelectCoinComponent )
    goto LABEL_13;
  if ( coinRoomSelectCoinComponent->fields.isOpen )
  {
    v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v16, v17);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, 0LL);
    BaseMenu__Close(coinRoomSelectCoinComponent, v19, 0LL);
    return;
  }
  maskCollider = (UnityEngine_Collider_o *)this->fields.coinListPanel;
  if ( !maskCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskCollider, 0, 0LL),
        v23 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v20, v21, v22),
        SceneJumpInfo___ctor(v23, 0LL),
        !v23)
    || (SceneJumpInfo__SetReturnNowScene(v23, 0LL),
        (maskCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(maskCollider, v14);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)maskCollider, 22, 1, (Il2CppObject *)v23, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickHelp(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B1980A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CoinRoomLobbyComponent_OnClickHelp__, method, v2);
    byte_4B1980A = 1;
  }
  v3 = Method_CoinRoomLobbyComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCA7F8(Method_CoinRoomLobbyComponent_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 73, 0LL, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickSelectCoin(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  TitleInfoControl_o *titleInfoControl; // x0

  if ( (byte_4B1980C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CoinRoomLobbyComponent_OnClickSelectCoin__, method, v2);
    byte_4B1980C = 1;
  }
  v4 = Method_CoinRoomLobbyComponent_OnClickSelectCoin__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickSelectCoin__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CoinRoomLobbyComponent_OnClickSelectCoin__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0LL),
        MainMenuBar__setMenuActive(0, 0LL, 0LL),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.coinRoomSelectCoinComponent) == 0LL) )
  {
    sub_1BCAA3C(titleInfoControl, v6);
  }
  CoinRoomSelectCoinComponent__OpenSelectCoinList((CoinRoomSelectCoinComponent_o *)titleInfoControl, v6);
}


void __fastcall CoinRoomLobbyComponent__OpenLobby(
        CoinRoomLobbyComponent_o *this,
        PlayMakerFSM_o *myFSM,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  UnityEngine_GameObject_o *gaugeBarObject; // x0
  Il2CppObject *Component_object; // x0
  __int64 v26; // x1
  UIProgressBar_o *v27; // x23
  const MethodInfo *v28; // x0
  int32_t v29; // w22
  float v30; // s8
  int v31; // w21
  UnityEngine_ParticleSystem_o *v32; // x23
  float v33; // s8
  __int64 v34; // x1
  System_String_o *v35; // x24
  UILabel_o *lobbyInfoLabel; // x23
  Il2CppObject *v37; // x22
  Il2CppObject *v38; // x0
  System_String_o *v39; // x23
  CoinRoomLobbyComponent_o *v40; // x0
  int v41; // w21
  const MethodInfo *v42; // x1
  Il2CppObject *v43; // x24
  UILabel_o *lobbyTimeLabel; // x22
  Il2CppObject *v45; // x0
  int v46; // [xsp+8h] [xbp-98h] BYREF
  int v47; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v48; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v49; // [xsp+30h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v51; // 0:x0.8

  if ( (byte_4B19807 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, myFSM, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISlider___, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_19119/*"effect_Circle_loop"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3656/*"COIN_ROOM_LOBBY_INFO"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3657/*"COIN_ROOM_LOBBY_TIME_INFO"*/, v21, v22);
    byte_4B19807 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 73, 0LL, 0, 0, 0, 0, 0LL);
  gaugeBarObject = this->fields.gaugeBarObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gaugeBarObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISlider___);
  v27 = (UIProgressBar_o *)Component_object;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v26);
  v28 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint((const MethodInfo *)Component_object);
  v29 = (int)v28;
  gaugeBarObject = (UnityEngine_GameObject_o *)CoinRoomUtility__MaxPoint(v28);
  if ( !v27 )
    goto LABEL_27;
  v30 = (float)v29 / (float)(int)gaugeBarObject;
  v31 = (int)gaugeBarObject;
  UIProgressBar__set_value(v27, v30, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gaugeBarObject,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  if ( !this->fields.effectCircleObject )
    goto LABEL_27;
  v32 = (UnityEngine_ParticleSystem_o *)gaugeBarObject;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 this->fields.effectCircleObject,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  if ( !gaugeBarObject )
    goto LABEL_27;
  if ( !v32 )
    goto LABEL_27;
  v33 = v30 * *(float *)&gaugeBarObject[1].fields.m_CachedPtr;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v32, 0LL).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v49, v33, 0LL);
  v51.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v48 = v49;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v51, &v48, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gaugeBarObject, 0, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gaugeBarObject, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COIN_ROOM_LOBBY_INFO"*/, 0LL);
  lobbyInfoLabel = this->fields.lobbyInfoLabel;
  v49.fields.m_Mode = v29;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v47 = v31;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v35, v37, v38, 0LL);
  if ( !lobbyInfoLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyInfoLabel, (System_String_o *)gaugeBarObject, 0LL);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COIN_ROOM_LOBBY_TIME_INFO"*/, 0LL);
  v40 = (CoinRoomLobbyComponent_o *)CoinRoomUtility__MonthRemainingNum((const MethodInfo *)v39);
  v41 = (int)v40;
  v43 = (Il2CppObject *)CoinRoomLobbyComponent__SetTimeLabel(v40, v42);
  lobbyTimeLabel = this->fields.lobbyTimeLabel;
  v46 = v41;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v39, v45, v43, 0LL);
  if ( !lobbyTimeLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyTimeLabel, (System_String_o *)gaugeBarObject, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gaugeBarObject, myFSM, 1, 0LL, 86, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)gaugeBarObject, 1, 0, 0, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)gaugeBarObject, 0, 0, 1, 86, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)gaugeBarObject, 1, 0LL);
  if ( !v41 )
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
                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___)) == 0LL )
  {
LABEL_27:
    sub_1BCAA3C(gaugeBarObject, v23);
  }
  SimpleAnimation__Play_64539336((SimpleAnimation_o *)gaugeBarObject, (System_String_o *)StringLiteral_19119/*"effect_Circle_loop"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomLobbyComponent__SetMaskCollider(
        CoinRoomLobbyComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *maskCollider; // x0

  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    sub_1BCAA3C(0LL, flag);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x22
  Il2CppObject *Component_object; // x0
  __int64 v20; // x1
  UISprite_o *v21; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1980D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, gameObject, atlasList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12, v13);
    this = (CoinRoomLobbyComponent_o *)sub_1BCA7E0(
                                         &Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__,
                                         v14,
                                         v15);
    byte_4B1980D = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !atlasList )
    sub_1BCAA3C(this, gameObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)atlasList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v16 )
      break;
    if ( !gameObject )
      sub_1BCAA3C(v16, v17);
    current = v25.fields._current;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !current )
      sub_1BCAA3C(Component_object, v20);
    v21 = (UISprite_o *)Component_object;
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)current, name, 0LL);
    if ( Sprite )
    {
      if ( !v21 )
        sub_1BCAA3C(Sprite, v23);
      UISprite__set_atlas(v21, (UIAtlas_o *)current, 0LL);
      UISprite__set_spriteName(v21, name, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


System_String_o *__fastcall CoinRoomLobbyComponent__SetTimeLabel(
        CoinRoomLobbyComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CoinRoomUtility_c *v9; // x0
  __int64 v10; // x1
  int64_t MonthUnixTime; // x19
  System_String_o *RestTime5; // x0
  __int64 v13; // x1
  System_String_o *v14; // x19

  if ( (byte_4B1980B & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_25530/*"あと "*/, v7, v8);
    byte_4B1980B = 1;
  }
  v9 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, method);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime((const MethodInfo *)v9);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  RestTime5 = LocalizationManager__GetRestTime5(MonthUnixTime, -1LL, 0LL);
  if ( !RestTime5 )
    sub_1BCAA3C(0LL, v13);
  v14 = RestTime5;
  if ( System_String__Contains(RestTime5, (System_String_o *)StringLiteral_25530/*"あと "*/, 0LL) )
    return System_String__Replace_62420848(
             v14,
             (System_String_o *)StringLiteral_25530/*"あと "*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
  else
    return v14;
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
    sub_1BCAA3C(coinRoomSelectCoinComponent, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)coinRoomSelectCoinComponent, 0, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
}