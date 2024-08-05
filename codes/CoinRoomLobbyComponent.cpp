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

  if ( (byte_4A019F3 & 1) == 0 )
  {
    sub_1B64870(&CoinRoomUtility_TypeInfo, assetData);
    sub_1B64870(&Method_System_Linq_Enumerable_Any_UIAtlas___, v4);
    sub_1B64870(&StringLiteral_5345/*"DownloadCoinRoomAtlas"*/, v5);
    byte_4A019F3 = 1;
  }
  if ( assetData )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    DownloadAtlas = CoinRoomUtility__GetDownloadAtlas(assetData, (System_String_o *)StringLiteral_5345/*"DownloadCoinRoomAtlas"*/, method);
    System_Linq_Enumerable__Any_object_(
      (System_Collections_Generic_IEnumerable_TSource__o *)DownloadAtlas,
      (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_UIAtlas___);
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
  __int64 v9; // x1
  UnityEngine_Collider_o *maskCollider; // x0
  BaseMenu_o *coinRoomSelectCoinComponent; // x20
  System_Action_o *v12; // x21
  SceneJumpInfo_o *v13; // x19

  if ( (byte_4A019F4 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_CoinRoomLobbyComponent_OnClickBack__, v3);
    sub_1B64870(&Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, v4);
    sub_1B64870(&SceneJumpInfo_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_4A019F4 = 1;
  }
  v7 = Method_CoinRoomLobbyComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickBack__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B64888(Method_CoinRoomLobbyComponent_OnClickBack__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B64854(v7, v7[4]);
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
    v12 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, 0LL);
    BaseMenu__Close(coinRoomSelectCoinComponent, v12, 0LL);
    return;
  }
  maskCollider = (UnityEngine_Collider_o *)this->fields.coinListPanel;
  if ( !maskCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskCollider, 0, 0LL),
        v13 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor(v13, 0LL),
        !v13)
    || (SceneJumpInfo__SetReturnNowScene(v13, 0LL),
        (maskCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1B64ACC(maskCollider, v9);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)maskCollider, 22, 1, (Il2CppObject *)v13, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickHelp(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4A019F5 & 1) == 0 )
  {
    sub_1B64870(&Method_CoinRoomLobbyComponent_OnClickHelp__, method);
    byte_4A019F5 = 1;
  }
  v2 = Method_CoinRoomLobbyComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B64888(Method_CoinRoomLobbyComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B64854(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 73, 0LL, 0LL);
}


void __fastcall CoinRoomLobbyComponent__OnClickSelectCoin(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  TitleInfoControl_o *titleInfoControl; // x0

  if ( (byte_4A019F7 & 1) == 0 )
  {
    sub_1B64870(&Method_CoinRoomLobbyComponent_OnClickSelectCoin__, method);
    byte_4A019F7 = 1;
  }
  v3 = Method_CoinRoomLobbyComponent_OnClickSelectCoin__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickSelectCoin__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64888(Method_CoinRoomLobbyComponent_OnClickSelectCoin__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0LL),
        MainMenuBar__setMenuActive(0, 0LL, 0LL),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.coinRoomSelectCoinComponent) == 0LL) )
  {
    sub_1B64ACC(titleInfoControl, v5);
  }
  CoinRoomSelectCoinComponent__OpenSelectCoinList((CoinRoomSelectCoinComponent_o *)titleInfoControl, v5);
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
  Il2CppObject *Component_object; // x0
  UIProgressBar_o *v17; // x23
  const MethodInfo *v18; // x0
  int32_t v19; // w22
  float v20; // s8
  int v21; // w21
  UnityEngine_ParticleSystem_o *v22; // x23
  float v23; // s8
  System_String_o *v24; // x24
  UILabel_o *lobbyInfoLabel; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x22
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x23
  CoinRoomLobbyComponent_o *v35; // x0
  int v36; // w21
  const MethodInfo *v37; // x1
  Il2CppObject *v38; // x24
  UILabel_o *lobbyTimeLabel; // x22
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  int v44; // [xsp+8h] [xbp-98h] BYREF
  int v45; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v46; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v47; // [xsp+30h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v49; // 0:x0.8

  if ( (byte_4A019F2 & 1) == 0 )
  {
    sub_1B64870(&CoinRoomUtility_TypeInfo, myFSM);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v5);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v6);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UISlider___, v8);
    sub_1B64870(&int_TypeInfo, v9);
    sub_1B64870(&LocalizationManager_TypeInfo, v10);
    sub_1B64870(&StringLiteral_18853/*"effect_Circle_loop"*/, v11);
    sub_1B64870(&StringLiteral_3603/*"COIN_ROOM_LOBBY_INFO"*/, v12);
    sub_1B64870(&StringLiteral_3604/*"COIN_ROOM_LOBBY_TIME_INFO"*/, v13);
    byte_4A019F2 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 73, 0LL, 0, 0, 0, 0, 0LL);
  gaugeBarObject = this->fields.gaugeBarObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gaugeBarObject,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISlider___);
  v17 = (UIProgressBar_o *)Component_object;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v18 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint((const MethodInfo *)Component_object);
  v19 = (int)v18;
  gaugeBarObject = (UnityEngine_GameObject_o *)CoinRoomUtility__MaxPoint(v18);
  if ( !v17 )
    goto LABEL_27;
  v20 = (float)v19 / (float)(int)gaugeBarObject;
  v21 = (int)gaugeBarObject;
  UIProgressBar__set_value(v17, v20, 0LL);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gaugeBarObject,
                                                 (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  if ( !this->fields.effectCircleObject )
    goto LABEL_27;
  v22 = (UnityEngine_ParticleSystem_o *)gaugeBarObject;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 this->fields.effectCircleObject,
                                                 (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  if ( !gaugeBarObject )
    goto LABEL_27;
  if ( !v22 )
    goto LABEL_27;
  v23 = v20 * *(float *)&gaugeBarObject[1].fields.m_CachedPtr;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v22, 0LL).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v47, v23, 0LL);
  v49.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v46 = v47;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v49, &v46, 0LL);
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
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3603/*"COIN_ROOM_LOBBY_INFO"*/, 0LL);
  lobbyInfoLabel = this->fields.lobbyInfoLabel;
  v47.fields.m_Mode = v19;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v26, v27, v28);
  v45 = v21;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v30, v31, v32);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_61397948(v24, v29, v33, 0LL);
  if ( !lobbyInfoLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyInfoLabel, (System_String_o *)gaugeBarObject, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3604/*"COIN_ROOM_LOBBY_TIME_INFO"*/, 0LL);
  v35 = (CoinRoomLobbyComponent_o *)CoinRoomUtility__MonthRemainingNum((const MethodInfo *)v34);
  v36 = (int)v35;
  v38 = (Il2CppObject *)CoinRoomLobbyComponent__SetTimeLabel(v35, v37);
  lobbyTimeLabel = this->fields.lobbyTimeLabel;
  v44 = v36;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v40, v41, v42);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_61397948(v34, v43, v38, 0LL);
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
  TitleInfoControl__setBackBtnSprite_36880072((TitleInfoControl_o *)gaugeBarObject, 1, 0, 0, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)gaugeBarObject, 0, 0, 1, 85, 0LL);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)gaugeBarObject, 1, 0LL);
  if ( !v36 )
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
                                                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___)) == 0LL )
  {
LABEL_27:
    sub_1B64ACC(gaugeBarObject, v14);
  }
  SimpleAnimation__Play_63521240((SimpleAnimation_o *)gaugeBarObject, (System_String_o *)StringLiteral_18853/*"effect_Circle_loop"*/, 0LL);
}


void __fastcall CoinRoomLobbyComponent__SetMaskCollider(
        CoinRoomLobbyComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *maskCollider; // x0

  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    sub_1B64ACC(0LL, flag);
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
  Il2CppObject *Component_object; // x0
  __int64 v16; // x1
  UISprite_o *v17; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A019F8 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, gameObject);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    this = (CoinRoomLobbyComponent_o *)sub_1B64870(
                                         &Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__,
                                         v11);
    byte_4A019F8 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !atlasList )
    sub_1B64ACC(this, gameObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)atlasList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v12 )
      break;
    if ( !gameObject )
      sub_1B64ACC(v12, v13);
    current = v21.fields._current;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !current )
      sub_1B64ACC(Component_object, v16);
    v17 = (UISprite_o *)Component_object;
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)current, name, 0LL);
    if ( Sprite )
    {
      if ( !v17 )
        sub_1B64ACC(Sprite, v19);
      UISprite__set_atlas(v17, (UIAtlas_o *)current, 0LL);
      UISprite__set_spriteName(v17, name, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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

  if ( (byte_4A019F6 & 1) == 0 )
  {
    sub_1B64870(&CoinRoomUtility_TypeInfo, method);
    sub_1B64870(&LocalizationManager_TypeInfo, v2);
    sub_1B64870(&StringLiteral_1/*""*/, v3);
    sub_1B64870(&StringLiteral_25177/*"あと "*/, v4);
    byte_4A019F6 = 1;
  }
  v5 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime((const MethodInfo *)v5);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime5 = LocalizationManager__GetRestTime5(MonthUnixTime, -1LL, 0LL);
  if ( !RestTime5 )
    sub_1B64ACC(0LL, v8);
  v9 = RestTime5;
  if ( System_String__Contains(RestTime5, (System_String_o *)StringLiteral_25177/*"あと "*/, 0LL) )
    return System_String__Replace_61403196(
             v9,
             (System_String_o *)StringLiteral_25177/*"あと "*/,
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
    sub_1B64ACC(coinRoomSelectCoinComponent, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)coinRoomSelectCoinComponent, 0, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
}