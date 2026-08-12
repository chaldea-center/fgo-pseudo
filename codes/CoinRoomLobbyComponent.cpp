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

  if ( (byte_5974839 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_2213A60(&StringLiteral_5528/*"DownloadCoinRoomAtlas"*/);
    byte_5974839 = 1;
  }
  if ( assetData )
  {
    if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, assetData);
    DownloadAtlas = CoinRoomUtility__GetDownloadAtlas(assetData, (System_String_o *)StringLiteral_5528/*"DownloadCoinRoomAtlas"*/, method);
    System_Linq_Enumerable__Any_object_(
      (System_Collections_Generic_IEnumerable_TSource__o *)DownloadAtlas,
      (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_UIAtlas___);
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

  if ( (byte_597483A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CoinRoomLobbyComponent_OnClickBack__);
    sub_2213A60(&Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_597483A = 1;
  }
  v3 = Method_CoinRoomLobbyComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_CoinRoomLobbyComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_CoinRoomLobbyComponent__OnClickBack_b__12_0__, 0);
    BaseMenu__Close(coinRoomSelectCoinComponent, v8, 0);
    return;
  }
  maskCollider = (UnityEngine_Collider_o *)this->fields.coinListPanel;
  if ( !maskCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskCollider, 0, 0),
        v9 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor(v9, 0),
        !v9)
    || (SceneJumpInfo__SetReturnNowScene(v9, 0),
        (maskCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
LABEL_13:
    sub_2213CDC(maskCollider, v5);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)maskCollider, 22, 1, (Il2CppObject *)v9, 0);
}


void CoinRoomLobbyComponent__OnClickHelp(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_597483B & 1) == 0 )
  {
    sub_2213A60(&Method_CoinRoomLobbyComponent_OnClickHelp__);
    byte_597483B = 1;
  }
  v2 = Method_CoinRoomLobbyComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78(Method_CoinRoomLobbyComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 73, 0, 0, 0);
}


void CoinRoomLobbyComponent__OnClickSelectCoin(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  TitleInfoControl_o *titleInfoControl; // x0

  if ( (byte_597483D & 1) == 0 )
  {
    sub_2213A60(&Method_CoinRoomLobbyComponent_OnClickSelectCoin__);
    byte_597483D = 1;
  }
  v3 = Method_CoinRoomLobbyComponent_OnClickSelectCoin__;
  if ( (*((_BYTE *)Method_CoinRoomLobbyComponent_OnClickSelectCoin__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_CoinRoomLobbyComponent_OnClickSelectCoin__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__SetHelpBtn(titleInfoControl, 0, 0),
        MainMenuBar__setMenuActive(0, 0, 0),
        (titleInfoControl = (TitleInfoControl_o *)this->fields.coinRoomSelectCoinComponent) == 0) )
  {
    sub_2213CDC(titleInfoControl, v5);
  }
  CoinRoomSelectCoinComponent__OpenSelectCoinList((CoinRoomSelectCoinComponent_o *)titleInfoControl, v5);
}


void CoinRoomLobbyComponent__OpenLobby(CoinRoomLobbyComponent_o *this, PlayMakerFSM_o *myFSM, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gaugeBarObject; // x0
  Il2CppObject *Component_object; // x0
  __int64 v8; // x1
  UIProgressBar_o *v9; // x23
  const MethodInfo *v10; // x0
  int v11; // w22
  int v12; // w21
  float v13; // s8
  UnityEngine_ParticleSystem_o *v14; // x23
  float v15; // s8
  __int64 v16; // x1
  System_String_o *v17; // x24
  UILabel_o *lobbyInfoLabel; // x23
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x23
  CoinRoomLobbyComponent_o *v22; // x0
  int v23; // w21
  const MethodInfo *v24; // x1
  Il2CppObject *v25; // x24
  UILabel_o *lobbyTimeLabel; // x22
  Il2CppObject *v27; // x0
  int v28; // [xsp+4h] [xbp-9Ch] BYREF
  int v29; // [xsp+8h] [xbp-98h] BYREF
  int v30; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v31; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v32; // [xsp+30h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_5974838 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISlider___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_19802/*"effect_Circle_loop"*/);
    sub_2213A60(&StringLiteral_3688/*"COIN_ROOM_LOBBY_INFO"*/);
    sub_2213A60(&StringLiteral_3689/*"COIN_ROOM_LOBBY_TIME_INFO"*/);
    byte_5974838 = 1;
  }
  m_ParticleSystem = 0;
  EventTutorialMaster__CheckTutorial(0, 73, 0, 0, 0, 0, 0, 0);
  gaugeBarObject = this->fields.gaugeBarObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gaugeBarObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISlider___);
  v9 = (UIProgressBar_o *)Component_object;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v8);
  v10 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint((const MethodInfo *)Component_object);
  v11 = (int)v10;
  gaugeBarObject = (UnityEngine_GameObject_o *)CoinRoomUtility__MaxPoint(v10);
  if ( !v9 )
    goto LABEL_27;
  v12 = (int)gaugeBarObject;
  v13 = (float)v11 / (float)(int)gaugeBarObject;
  UIProgressBar__set_value(v9, v13, 0);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gaugeBarObject,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  if ( !this->fields.effectCircleObject )
    goto LABEL_27;
  v14 = (UnityEngine_ParticleSystem_o *)gaugeBarObject;
  gaugeBarObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 this->fields.effectCircleObject,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  if ( !gaugeBarObject )
    goto LABEL_27;
  if ( !v14 )
    goto LABEL_27;
  v15 = v13 * *(float *)&gaugeBarObject[1].fields.m_CachedPtr;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v14, 0).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v32, v15, 0);
  v31 = v32;
  UnityEngine_ParticleSystem_MainModule__set_startSize(
    (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
    &v31,
    0);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gaugeBarObject, 0, 0);
  gaugeBarObject = this->fields.energyPartLoopObject;
  if ( !gaugeBarObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gaugeBarObject, 1, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COIN_ROOM_LOBBY_INFO"*/, 0);
  lobbyInfoLabel = this->fields.lobbyInfoLabel;
  v30 = v11;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v30);
  v29 = v12;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v29);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_75697880(v17, v19, v20, 0);
  if ( !lobbyInfoLabel )
    goto LABEL_27;
  UILabel__set_text(lobbyInfoLabel, (System_String_o *)gaugeBarObject, 0);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COIN_ROOM_LOBBY_TIME_INFO"*/, 0);
  v22 = (CoinRoomLobbyComponent_o *)CoinRoomUtility__MonthRemainingNum((const MethodInfo *)v21);
  v23 = (int)v22;
  v25 = (Il2CppObject *)CoinRoomLobbyComponent__SetTimeLabel(v22, v24);
  lobbyTimeLabel = this->fields.lobbyTimeLabel;
  v28 = v23;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v28);
  gaugeBarObject = (UnityEngine_GameObject_o *)System_String__Format_75697880(v21, v27, v25, 0);
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
  TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)gaugeBarObject, 1, 0, 0, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)gaugeBarObject, 0, 0, 1, 89, 0);
  gaugeBarObject = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !gaugeBarObject )
    goto LABEL_27;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)gaugeBarObject, 1, 0);
  if ( !v23 )
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
                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___)) == 0 )
  {
LABEL_27:
    sub_2213CDC(gaugeBarObject, v5);
  }
  SimpleAnimation__Play_78552168((SimpleAnimation_o *)gaugeBarObject, (System_String_o *)StringLiteral_19802/*"effect_Circle_loop"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomLobbyComponent__SetMaskCollider(CoinRoomLobbyComponent_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskCollider; // x0

  maskCollider = (UnityEngine_Collider_o *)this->fields.maskCollider;
  if ( !maskCollider )
    sub_2213CDC(0, flag);
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

  if ( (byte_597483E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (CoinRoomLobbyComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_597483E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !atlasList )
    sub_2213CDC(this, gameObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)atlasList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v17 = v16;
  v16.fields._list = 0;
  *(_QWORD *)&v16.fields._index = &v17;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v8 )
      break;
    if ( !gameObject )
      sub_2213CDC(v8, v9);
    current = v17.fields._current;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !current )
      sub_2213CDC(Component_object, v12);
    v13 = (UISprite_o *)Component_object;
    Sprite = UIAtlas__GetSprite((UIAtlas_o *)current, name, 0);
    if ( Sprite )
    {
      if ( !v13 )
        sub_2213CDC(Sprite, v15);
      UISprite__set_atlas(v13, (UIAtlas_o *)current, 0);
      UISprite__set_spriteName(v13, name, 0);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
}


System_String_o *CoinRoomLobbyComponent__SetTimeLabel(CoinRoomLobbyComponent_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v2; // x0
  __int64 v3; // x1
  int64_t MonthUnixTime; // x19
  System_String_o *RestTime5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19

  if ( (byte_597483C & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_26785/*"あと "*/);
    byte_597483C = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, method);
  MonthUnixTime = CoinRoomUtility__NextMonthUnixTime((const MethodInfo *)v2);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
  RestTime5 = LocalizationManager__GetRestTime5(MonthUnixTime, -1, 0);
  if ( !RestTime5 )
    sub_2213CDC(0, v6);
  v7 = RestTime5;
  if ( System_String__Contains(RestTime5, (System_String_o *)StringLiteral_26785/*"あと "*/, 0) )
    return System_String__Replace_75703400(
             v7,
             (System_String_o *)StringLiteral_26785/*"あと "*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
  else
    return v7;
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
    sub_2213CDC(coinRoomSelectCoinComponent, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)coinRoomSelectCoinComponent, 0, 0);
  MainMenuBar__setMenuActive(1, 0, 0);
}