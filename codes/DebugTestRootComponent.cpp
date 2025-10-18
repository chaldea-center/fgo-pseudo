void DebugTestRootComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C404AA & 1) == 0 )
  {
    sub_1C37058(&DebugTestRootComponent_TypeInfo);
    sub_1C37058(&StringLiteral_19439/*"file://"*/);
    byte_4C404AA = 1;
  }
  DebugTestRootComponent_TypeInfo->static_fields->oldScheme = (struct System_String_o *)StringLiteral_19439/*"file://"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)DebugTestRootComponent_TypeInfo->static_fields, StringLiteral_19439/*"file://"*/, v1, v2);
  DebugTestRootComponent_TypeInfo->static_fields->SendReceiptErrorFlag = 0;
}


void DebugTestRootComponent___ctor(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


bool DebugTestRootComponent__BootSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  CommonConfirmDialog_ClickDelegate_o *v6; // x23
  __int64 v7; // x0

  if ( (byte_4C40472 & 1) == 0 )
  {
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndBootSelect__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_4973/*"DEBUG_TEST_EXIT_APPLICATION_TITLE"*/);
    sub_1C37058(&StringLiteral_4972/*"DEBUG_TEST_EXIT_APPLICATION_DITAIL"*/);
    byte_4C40472 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_4973/*"DEBUG_TEST_EXIT_APPLICATION_TITLE"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_4972/*"DEBUG_TEST_EXIT_APPLICATION_DITAIL"*/, 0);
  v6 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v6, (Il2CppObject *)this, Method_DebugTestRootComponent_EndBootSelect__, 0);
  if ( !Instance )
    sub_1C372B4(v7);
  CommonUI__OpenConfirmDialog((CommonUI_o *)Instance, v4, v5, v6, 0, 0, 0, 0);
  return 1;
}


void DebugTestRootComponent__ChangeAssetCheckScene(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__ClearAssetStorageCache(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  AssetStorageCache__ClearCacheAll(1, 0);
}


void DebugTestRootComponent__ClearMasterDataCache(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C40474 & 1) == 0 )
  {
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C40474 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0);
}


void DebugTestRootComponent__ClearReboot(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C4049D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    byte_4C4049D = 1;
  }
  AssetStorageCache__ClearCache(1, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71061684(0);
}


void DebugTestRootComponent__ClearUserInfo(DebugTestRootComponent_o *this, bool clearAsset, const MethodInfo *method)
{
  UserSaveData__DeleteSaveData(clearAsset, 0);
}


void DebugTestRootComponent__ClickNoblePhantasm(
        DebugTestRootComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v5; // x21
  Il2CppObject *Instance; // x0

  if ( (byte_4C404A4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&StringLiteral_21230/*"limitCount"*/);
    sub_1C37058(&StringLiteral_23283/*"servantId"*/);
    byte_4C404A4 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_3459F4C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v5
    || (System_Collections_Generic_Dictionary_object__int___set_Item(
          v5,
          (Il2CppObject *)StringLiteral_23283/*"servantId"*/,
          svtId,
          (const MethodInfo_345A8EC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__),
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v5,
          (Il2CppObject *)StringLiteral_21230/*"limitCount"*/,
          this->fields.ServantLimitCount,
          (const MethodInfo_345A8EC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 10, 1, (Il2CppObject *)v5, 0);
}


bool DebugTestRootComponent__ClientTutorialComplete(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C404A2 & 1) == 0 )
  {
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C404A2 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__CompleteProgress(0);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndBackSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  BackViewListViewMenu_o *backSelectMenu; // x0

  if ( (byte_4C40496 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C40496 = 1;
  }
  backSelectMenu = this->fields.backSelectMenu;
  if ( !backSelectMenu
    || (BackViewListViewMenu__Close(backSelectMenu, (const MethodInfo *)result),
        (backSelectMenu = (BackViewListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(backSelectMenu);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)backSelectMenu, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EndBattleCharaSelect(
        DebugTestRootComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C4049B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C4049B = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EndBootSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C40473 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C40473 = 1;
  }
  if ( result )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71061684(0);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance || (CommonUI__CloseConfirmDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
      sub_1C372B4(Instance);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndChangeDPISelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  DPIListViewMenu_o *dPIListViewMenu; // x0

  if ( (byte_4C404A9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C404A9 = 1;
  }
  dPIListViewMenu = this->fields.dPIListViewMenu;
  if ( !dPIListViewMenu
    || (DPIListViewMenu__Close(dPIListViewMenu, (const MethodInfo *)result),
        (dPIListViewMenu = (DPIListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(dPIListViewMenu);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)dPIListViewMenu, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EndConnectScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C4047F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11507/*"SCRIPT_FINISHED"*/);
    byte_4C4047F = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11507/*"SCRIPT_FINISHED"*/, 0);
}


void DebugTestRootComponent__EndConnectScriptSelect(
        DebugTestRootComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  ScriptConnectMenu_o *connectScriptMenu; // x0
  System_String_o **v6; // x8

  if ( (byte_4C4047D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11508/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    sub_1C37058(&StringLiteral_11509/*"SCRIPT_PLAY_SELECT_OK"*/);
    byte_4C4047D = 1;
  }
  connectScriptMenu = this->fields.connectScriptMenu;
  if ( !connectScriptMenu
    || (ScriptConnectMenu__Close(connectScriptMenu, 0),
        (connectScriptMenu = (ScriptConnectMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(connectScriptMenu);
  }
  v6 = (System_String_o **)&StringLiteral_11509/*"SCRIPT_PLAY_SELECT_OK"*/;
  if ( !result )
    v6 = (System_String_o **)&StringLiteral_11508/*"SCRIPT_PLAY_SELECT_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)connectScriptMenu, *v6, 0);
}


void DebugTestRootComponent__EndConnectWebView(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  WebConnectMenu_o *webViewConnectMenu; // x0

  if ( (byte_4C4049F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C4049F = 1;
  }
  webViewConnectMenu = this->fields.webViewConnectMenu;
  if ( !webViewConnectMenu
    || (WebConnectMenu__Close(webViewConnectMenu, 0), (webViewConnectMenu = (WebConnectMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(webViewConnectMenu);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)webViewConnectMenu, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndEquipGraphSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  EquipGraphViewListViewMenu_o *equipGraphSelectMenu; // x0

  if ( (byte_4C4049A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C4049A = 1;
  }
  equipGraphSelectMenu = this->fields.equipGraphSelectMenu;
  if ( !equipGraphSelectMenu
    || (EquipGraphViewListViewMenu__Close(equipGraphSelectMenu, (const MethodInfo *)result),
        (equipGraphSelectMenu = (EquipGraphViewListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(equipGraphSelectMenu);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipGraphSelectMenu, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndFigureSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  FigureViewListViewMenu_o *figureSelectMenu; // x0

  if ( (byte_4C40498 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C40498 = 1;
  }
  figureSelectMenu = this->fields.figureSelectMenu;
  if ( !figureSelectMenu
    || (FigureViewListViewMenu__Close(figureSelectMenu, (const MethodInfo *)result),
        (figureSelectMenu = (FigureViewListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(figureSelectMenu);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)figureSelectMenu, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EndLogin(
        DebugTestRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C4046E & 1) == 0 )
  {
    sub_1C37058(&Method_DebugTestRootComponent_EndTopHome__);
    sub_1C37058(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C4046E = 1;
  }
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndTopHome__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v4,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !Request_object )
    sub_1C372B4(0);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void DebugTestRootComponent__EndNoblePhantasm(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__EndPlayDefaultScriptSelect(
        DebugTestRootComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  ScriptDefaultFilePlayerMenu_o *playScriptDefaultFileMenu; // x0

  if ( (byte_4C4048B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11508/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    byte_4C4048B = 1;
  }
  playScriptDefaultFileMenu = this->fields.playScriptDefaultFileMenu;
  if ( !playScriptDefaultFileMenu
    || (ScriptDefaultFilePlayerMenu__Close(playScriptDefaultFileMenu, 0),
        (playScriptDefaultFileMenu = (ScriptDefaultFilePlayerMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(playScriptDefaultFileMenu);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playScriptDefaultFileMenu, (System_String_o *)StringLiteral_11508/*"SCRIPT_PLAY_SELECT_CANCEL"*/, 0);
}


void DebugTestRootComponent__EndPlayScriptSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ScriptFilePlayerMenu_o *playScriptFileMenu; // x0

  if ( (byte_4C40489 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11508/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    byte_4C40489 = 1;
  }
  playScriptFileMenu = this->fields.playScriptFileMenu;
  if ( !playScriptFileMenu
    || (ScriptFilePlayerMenu__Close(playScriptFileMenu, 0),
        (playScriptFileMenu = (ScriptFilePlayerMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(playScriptFileMenu);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playScriptFileMenu, (System_String_o *)StringLiteral_11508/*"SCRIPT_PLAY_SELECT_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndReceiptSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ReceiptListViewMenu_o *receiptSelectMenu; // x0
  System_String_o **v6; // x8

  if ( (byte_4C40492 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_10972/*"RECEIPT_SELECT_OK"*/);
    sub_1C37058(&StringLiteral_10971/*"RECEIPT_SELECT_CANCEL"*/);
    byte_4C40492 = 1;
  }
  receiptSelectMenu = this->fields.receiptSelectMenu;
  if ( !receiptSelectMenu
    || (ReceiptListViewMenu__Close(receiptSelectMenu, (const MethodInfo *)result),
        (receiptSelectMenu = (ReceiptListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(receiptSelectMenu);
  }
  v6 = (System_String_o **)&StringLiteral_10972/*"RECEIPT_SELECT_OK"*/;
  if ( !result )
    v6 = (System_String_o **)&StringLiteral_10971/*"RECEIPT_SELECT_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)receiptSelectMenu, *v6, 0);
}


void DebugTestRootComponent__EndScriptSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ScriptAssetListViewMenu_o *scriptSelectMenu; // x0
  System_String_o **v6; // x8

  if ( (byte_4C4047B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11508/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    sub_1C37058(&StringLiteral_11509/*"SCRIPT_PLAY_SELECT_OK"*/);
    byte_4C4047B = 1;
  }
  scriptSelectMenu = this->fields.scriptSelectMenu;
  if ( !scriptSelectMenu
    || (ScriptAssetListViewMenu__Close(scriptSelectMenu, 0),
        (scriptSelectMenu = (ScriptAssetListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(scriptSelectMenu);
  }
  v6 = (System_String_o **)&StringLiteral_11509/*"SCRIPT_PLAY_SELECT_OK"*/;
  if ( !result )
    v6 = (System_String_o **)&StringLiteral_11508/*"SCRIPT_PLAY_SELECT_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)scriptSelectMenu, *v6, 0);
}


void DebugTestRootComponent__EndServerSetting(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ServerSettingMenu_o *serverSettingMenu; // x0
  System_String_o **v6; // x8

  if ( (byte_4C40479 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12011/*"SERVER_SETTING_INPUT_CANCEL"*/);
    sub_1C37058(&StringLiteral_12012/*"SERVER_SETTING_INPUT_OK"*/);
    byte_4C40479 = 1;
  }
  serverSettingMenu = this->fields.serverSettingMenu;
  if ( !serverSettingMenu
    || (ServerSettingMenu__Close(serverSettingMenu, 0),
        (serverSettingMenu = (ServerSettingMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(serverSettingMenu);
  }
  v6 = (System_String_o **)&StringLiteral_12012/*"SERVER_SETTING_INPUT_OK"*/;
  if ( !result )
    v6 = (System_String_o **)&StringLiteral_12011/*"SERVER_SETTING_INPUT_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)serverSettingMenu, *v6, 0);
}


void DebugTestRootComponent__EndSoundTest(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  SoundTestMenu_o *soundTestMenu; // x0

  soundTestMenu = this->fields.soundTestMenu;
  if ( !soundTestMenu )
    sub_1C372B4(0);
  SoundTestMenu__close(soundTestMenu, 0);
}


void DebugTestRootComponent__EndStartPlayScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C4048D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11507/*"SCRIPT_FINISHED"*/);
    byte_4C4048D = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11507/*"SCRIPT_FINISHED"*/, 0);
}


void DebugTestRootComponent__EndTestRequest(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C404A1 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C404A1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__maskFadein(Instance, 0.1, 0, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
    sub_1C372B4(Instance);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EndTopHome(
        DebugTestRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C4046F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C4046F = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EntryService(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__ErrorConnectScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C40480 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11507/*"SCRIPT_FINISHED"*/);
    byte_4C40480 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11507/*"SCRIPT_FINISHED"*/, 0);
}


void DebugTestRootComponent__ErrorStartPlayScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C4048E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11507/*"SCRIPT_FINISHED"*/);
    byte_4C4048E = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11507/*"SCRIPT_FINISHED"*/, 0);
}


System_String_o *DebugTestRootComponent__GetDebugScriptStartMode(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        const MethodInfo *method)
{
  ScriptManager_c *v4; // x0
  System_String_o *scriptStartModeSettingName; // x20
  System_String_o *ObjectPath; // x19
  System_String_o *ConnectPath; // x20
  System_String_o *FileNameWithoutExtension; // x0
  System_String_o *v9; // x19
  _DWORD *v10; // x21
  System_String_o *v11; // x20
  System_String_o *DirectoryName; // x0
  System_String_o *v13; // x8
  ScriptManager_c *v15; // x0
  System_String_o *textPathRaw; // x20

  if ( (byte_4C40485 & 1) == 0 )
  {
    sub_1C37058(&System_IO_Path_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&StringLiteral_16025/*"\\"*/);
    sub_1C37058(&StringLiteral_2052/*"AUTO"*/);
    sub_1C37058(&StringLiteral_2397/*"Assets/AssetStorages/"*/);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C40485 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C40536 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C40536 = 1;
  }
  v4 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v4 = ScriptManager_TypeInfo;
  }
  scriptStartModeSettingName = v4->static_fields->scriptStartModeSettingName;
  if ( !System_String__op_Equality(scriptStartModeSettingName, (System_String_o *)StringLiteral_2052/*"AUTO"*/, 0) )
    return scriptStartModeSettingName;
  ConnectPath = connectData->fields.ConnectPath;
  ObjectPath = connectData->fields.ObjectPath;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(ObjectPath, 0);
  if ( !ConnectPath )
    goto LABEL_30;
  v9 = FileNameWithoutExtension;
  v10 = StringLiteral_2397/*"Assets/AssetStorages/"*/;
  FileNameWithoutExtension = (System_String_o *)System_String__IndexOf_63618612(
                                                  ConnectPath,
                                                  (System_String_o *)StringLiteral_2397/*"Assets/AssetStorages/"*/,
                                                  5,
                                                  0);
  if ( ((unsigned int)FileNameWithoutExtension & 0x80000000) != 0 )
  {
    v15 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v15 = ScriptManager_TypeInfo;
    }
    textPathRaw = v15->static_fields->textPathRaw;
    goto LABEL_27;
  }
  if ( !v10 )
LABEL_30:
    sub_1C372B4(FileNameWithoutExtension);
  v11 = System_String__Substring(ConnectPath, v10[4] + (int)FileNameWithoutExtension, 0);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  DirectoryName = System_IO_Path__GetDirectoryName(v11, 0);
  if ( DirectoryName )
    v13 = System_String__Replace_63608204(
            DirectoryName,
            (System_String_o *)StringLiteral_16025/*"\\"*/,
            (System_String_o *)StringLiteral_1048/*"/"*/,
            0);
  else
    v13 = 0;
  v15 = ScriptManager_TypeInfo;
  if ( v13 )
    textPathRaw = v13;
  else
    textPathRaw = (System_String_o *)StringLiteral_1/*""*/;
LABEL_27:
  if ( !v15->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v15);
  return ScriptManager__GetStartModeForAssetStorage(textPathRaw, v9, 0);
}


void DebugTestRootComponent__LoadFileScript(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_String_o **v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *v16; // x24
  System_String_o *AllText; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x22
  System_String_o *v21; // x24
  System_String_o *v22; // x0
  System_String_o *v23; // x24
  System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_o *v27; // x1
  __int64 *v28; // x8
  Il2CppObject *Instance; // x19
  ErrorDialog_ClickDelegate_o *v30; // x21
  System_String_o *v31; // x21
  System_String_o *v32; // x22
  System_Action_o *v33; // x23
  const MethodInfo *v34; // x5
  ScriptTextViewMenu_o *scriptTextViewMenu; // x19
  int32_t v36; // w21
  __int64 v37; // x8
  System_String_o *v38; // x22
  ScriptTextViewMenu_CallbackFunc_o *v39; // x23
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-90h]
  __int128 v41; // [xsp+20h] [xbp-70h]
  __int128 v42; // [xsp+30h] [xbp-60h]
  __int64 v43; // [xsp+40h] [xbp-50h]

  if ( (byte_4C40490 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__0__);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__1__);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__2__);
    sub_1C37058(&DebugTestRootComponent___c__DisplayClass90_0_TypeInfo);
    sub_1C37058(&StringLiteral_1039/*".org"*/);
    sub_1C37058(&StringLiteral_22294/*"not find directory ["*/);
    sub_1C37058(&StringLiteral_1044/*".txt"*/);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    sub_1C37058(&StringLiteral_10639/*"Play Script Error"*/);
    sub_1C37058(&StringLiteral_22295/*"not find file ["*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C40490 = 1;
  }
  v5 = sub_1C372A4(DebugTestRootComponent___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v43 = *(_QWORD *)&connectData->fields.JumpLine;
  v41 = *(_OWORD *)&connectData->fields.ConnectPath;
  v42 = *(_OWORD *)&connectData->fields.EndCallback;
  if ( !v5 )
    goto LABEL_25;
  v9 = (System_String_o **)(v5 + 16);
  *(_QWORD *)(v5 + 48) = v43;
  *(_OWORD *)(v5 + 16) = v41;
  *(_OWORD *)(v5 + 32) = v42;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), 0, v7, v8);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 56), (int32_t)this, v10, v11);
  *(_QWORD *)(v5 + 64) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 64), 0, v12, v13);
  *(_QWORD *)(v5 + 72) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 72), 0, v14, v15);
  v16 = System_String__Concat_63599904(
          *(System_String_o **)(v5 + 16),
          (System_String_o *)StringLiteral_1048/*"/"*/,
          *(System_String_o **)(v5 + 24),
          0);
  if ( !System_IO_Directory__Exists(*(System_String_o **)(v5 + 16), 0) )
  {
    v27 = *v9;
    v28 = &StringLiteral_22294/*"not find directory ["*/;
LABEL_13:
    v20 = System_String__Concat_63599904((System_String_o *)*v28, v27, (System_String_o *)StringLiteral_16058/*"]"*/, 0);
    goto LABEL_14;
  }
  if ( !System_IO_File__Exists(v16, 0) )
  {
    v28 = &StringLiteral_22295/*"not find file ["*/;
    v27 = v16;
    goto LABEL_13;
  }
  AllText = System_IO_File__ReadAllText(v16, 0);
  *(_QWORD *)(v5 + 64) = AllText;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 64), (int32_t)AllText, v18, v19);
  v20 = 0;
  v6 = *(System_String_o **)(v5 + 24);
  if ( !v6 )
    goto LABEL_25;
  if ( System_String__EndsWith(v6, (System_String_o *)StringLiteral_1044/*".txt"*/, 0) )
  {
    v6 = *(System_String_o **)(v5 + 24);
    if ( !v6 )
      goto LABEL_25;
    v21 = *v9;
    v22 = System_String__Substring_63607580(v6, 0, v6->fields._stringLength - 4, 0);
    v23 = System_String__Concat_63601908(
            v21,
            (System_String_o *)StringLiteral_1048/*"/"*/,
            v22,
            (System_String_o *)StringLiteral_1039/*".org"*/,
            0);
    if ( System_IO_File__Exists(v23, 0) )
    {
      v24 = System_IO_File__ReadAllText(v23, 0);
      *(_QWORD *)(v5 + 72) = v24;
      sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 72), (int32_t)v24, v25, v26);
    }
  }
LABEL_14:
  if ( v20 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v30 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v30,
      (Il2CppObject *)v5,
      Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__0__,
      0);
    if ( Instance )
    {
      *(_QWORD *)&effectDistance.fields.hasValue = 0;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        (CommonUI_o *)Instance,
        (System_String_o *)StringLiteral_10639/*"Play Script Error"*/,
        v20,
        v30,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0);
      return;
    }
LABEL_25:
    sub_1C372B4(v6);
  }
  if ( *(_BYTE *)(v5 + 52) && !*(_BYTE *)(v5 + 53) )
  {
    scriptTextViewMenu = this->fields.scriptTextViewMenu;
    v36 = *(_DWORD *)(v5 + 48);
    if ( *(_QWORD *)(v5 + 72) )
      v37 = 72;
    else
      v37 = 64;
    v38 = *(System_String_o **)(v5 + v37);
    v39 = (ScriptTextViewMenu_CallbackFunc_o *)sub_1C372A4(ScriptTextViewMenu_CallbackFunc_TypeInfo);
    ScriptTextViewMenu_CallbackFunc___ctor(
      v39,
      (Il2CppObject *)v5,
      Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__1__,
      0);
    if ( !scriptTextViewMenu )
      goto LABEL_25;
    ScriptTextViewMenu__Open(scriptTextViewMenu, v38, v36, v39, 0);
  }
  else
  {
    v31 = *(System_String_o **)(v5 + 64);
    v32 = *(System_String_o **)(v5 + 72);
    v33 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v5,
      Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__2__,
      0);
    DebugTestRootComponent__ScriptCheckAndStart(this, v31, v32, v33, *(System_Action_o **)(v5 + 32), v34);
  }
}


void DebugTestRootComponent__Login(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  NetworkManager_c *v4; // x0
  PlayMakerFSM_o *myFSM; // x0
  NetworkManager_c *v6; // x0
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v8; // x21

  if ( (byte_4C4046D & 1) == 0 )
  {
    sub_1C37058(&Method_DebugTestRootComponent_EndLogin__);
    sub_1C37058(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C4046D = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    goto LABEL_13;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C40533 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C40533 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  if ( v4->static_fields->isLogin )
    goto LABEL_13;
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  if ( v6->static_fields->userIdNumber < 1 )
    goto LABEL_13;
  if ( !v6->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v6);
  if ( !NetworkManager__CheckUserCreateServer(0) )
  {
LABEL_13:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
      return;
    }
LABEL_27:
    sub_1C372B4(myFSM);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v8 = (NetworkManager_LoginCallbackFunc_o *)sub_1C372A4(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v8, (Il2CppObject *)this, Method_DebugTestRootComponent_EndLogin__, 0);
  if ( !Instance )
    goto LABEL_27;
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v8, 1, 0);
}


void DebugTestRootComponent__MergeFileForMoviePlayMenuOpen(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mergeFileForMoviePlay; // x0

  mergeFileForMoviePlay = (UnityEngine_Component_o *)this->fields.mergeFileForMoviePlay;
  if ( !mergeFileForMoviePlay
    || (mergeFileForMoviePlay = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             mergeFileForMoviePlay,
                                                             0)) == 0 )
  {
    sub_1C372B4(mergeFileForMoviePlay);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mergeFileForMoviePlay, 1, 0);
}


void DebugTestRootComponent__OnReloadFileScript(
        DebugTestRootComponent_o *this,
        int32_t jumpLine,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  ScriptConnectData_o v9; // [xsp+0h] [xbp-90h]
  ScriptConnectData_o v10; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4C4048F & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C4048F = 1;
  }
  this->fields.currentConnectData.fields.JumpLine = jumpLine;
  this->fields.currentConnectData.fields.IsReboot = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ScriptManager__reboot((ScriptManager_o *)Instance, 0, 0);
  *(_QWORD *)&v9.fields.JumpLine = *(_QWORD *)&this->fields.currentConnectData.fields.JumpLine;
  *(_OWORD *)&v9.fields.ConnectPath = *(_OWORD *)&this->fields.currentConnectData.fields.ConnectPath;
  *(_OWORD *)&v9.fields.EndCallback = *(_OWORD *)&this->fields.currentConnectData.fields.EndCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.currentConnectData, 0, v6, v7);
  v10 = v9;
  DebugTestRootComponent__LoadFileScript(this, &v10, v8);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__OnReloadScript(DebugTestRootComponent_o *this, int32_t jumpLine, const MethodInfo *method)
{
  this->fields.currentConnectData.fields.JumpLine = jumpLine;
  this->fields.currentConnectData.fields.IsReboot = 1;
  DebugTestRootComponent__Reload(this, *(const MethodInfo **)&jumpLine);
}


void DebugTestRootComponent__OverrideAssetServerMenuOpen(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *debugOverrideAsset; // x0

  debugOverrideAsset = (UnityEngine_Component_o *)this->fields.debugOverrideAsset;
  if ( !debugOverrideAsset
    || (debugOverrideAsset = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(debugOverrideAsset, 0)) == 0 )
  {
    sub_1C372B4(debugOverrideAsset);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugOverrideAsset, 1, 0);
}


void DebugTestRootComponent__Reboot(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C4049C & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C4049C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void DebugTestRootComponent__ReleaseService(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C40477 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4C40477 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  NetworkManager__ReleseService((NetworkManager_o *)Instance, 0);
}


void DebugTestRootComponent__Reload(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int128 v4; // q0
  __int128 v5; // q1
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x0
  ScriptConnectData_o v8; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4C40482 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C40482 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ScriptManager__reboot((ScriptManager_o *)Instance, 0, 0);
  v5 = *(_OWORD *)&this->fields.currentConnectData.fields.ConnectPath;
  v4 = *(_OWORD *)&this->fields.currentConnectData.fields.EndCallback;
  *(_QWORD *)&v8.fields.JumpLine = *(_QWORD *)&this->fields.currentConnectData.fields.JumpLine;
  *(_OWORD *)&v8.fields.ConnectPath = v5;
  *(_OWORD *)&v8.fields.EndCallback = v4;
  v7 = DebugTestRootComponent__RequestScriptFileCR(this, &v8, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


System_Collections_IEnumerator_o *DebugTestRootComponent__RequestFileCR(
        DebugTestRootComponent_o *this,
        System_String_o *fullPath,
        System_Action_string__o *successCallback,
        System_Action_o *failedCallback,
        const MethodInfo *method)
{
  __int64 v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C40484 & 1) == 0 )
  {
    sub_1C37058(&DebugTestRootComponent__RequestFileCR_d__76_TypeInfo);
    byte_4C40484 = 1;
  }
  v8 = sub_1C372A4(DebugTestRootComponent__RequestFileCR_d__76_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = fullPath;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 40), (int32_t)fullPath, v9, v10);
  *(_QWORD *)(v8 + 56) = successCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 56), (int32_t)successCallback, v11, v12);
  *(_QWORD *)(v8 + 32) = failedCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 32), (int32_t)failedCallback, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


void DebugTestRootComponent__RequestLogin(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C40493 & 1) == 0 )
  {
    sub_1C37058(&Method_DebugTestRootComponent_callbackLogin__);
    sub_1C37058(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4C40493 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C372A4(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_callbackLogin__, 0);
  if ( !Instance )
    sub_1C372B4(v5);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, 0);
}


System_Collections_IEnumerator_o *DebugTestRootComponent__RequestScriptFileCR(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int128 v8; // q0
  __int128 v9; // q1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C40483 & 1) == 0 )
  {
    sub_1C37058(&DebugTestRootComponent__RequestScriptFileCR_d__75_TypeInfo);
    byte_4C40483 = 1;
  }
  v5 = sub_1C372A4(DebugTestRootComponent__RequestScriptFileCR_d__75_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 72) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 72), (int32_t)this, v6, v7);
  v9 = *(_OWORD *)&connectData->fields.ConnectPath;
  v8 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)(v5 + 64) = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)(v5 + 32) = v9;
  *(_OWORD *)(v5 + 48) = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), 0, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


bool DebugTestRootComponent__RequestSignup(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugSignupMenu_o *debugSignupMenu; // x0

  debugSignupMenu = this->fields.debugSignupMenu;
  if ( !debugSignupMenu )
    sub_1C372B4(0);
  DebugSignupMenu__RequestSignup(debugSignupMenu, this->fields.myFSM, v2);
  return 1;
}


void DebugTestRootComponent__ScriptCheckAndStart(
        DebugTestRootComponent_o *this,
        System_String_o *scriptData,
        System_String_o *orgScriptData,
        System_Action_o *scriptStartAction,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v11; // x23
  System_Collections_Generic_List_List_string___o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x25
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_List_string___o *v20; // x20
  ScriptBranchMenu_o *scriptBranchMenu; // x19
  ScriptBranchMenu_CallbackFunc_o *v22; // x21

  if ( (byte_4C40487 & 1) == 0 )
  {
    sub_1C37058(&ScriptBranchMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass80_0__ScriptCheckAndStart_b__0__);
    sub_1C37058(&DebugTestRootComponent___c__DisplayClass80_0_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C40487 = 1;
  }
  v11 = sub_1C372A4(DebugTestRootComponent___c__DisplayClass80_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = scriptStartAction;
  v15 = v11 + 24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)scriptStartAction, v16, v17);
  *(_QWORD *)(v11 + 32) = endCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)endCallback, v18, v19);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  v12 = ScriptManager__DebugScriptAnalys((System_String_o *)StringLiteral_1/*""*/, scriptData, orgScriptData, 0);
  if ( v12 )
  {
    v20 = v12;
    scriptBranchMenu = this->fields.scriptBranchMenu;
    v22 = (ScriptBranchMenu_CallbackFunc_o *)sub_1C372A4(ScriptBranchMenu_CallbackFunc_TypeInfo);
    ScriptBranchMenu_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)v11,
      Method_DebugTestRootComponent___c__DisplayClass80_0__ScriptCheckAndStart_b__0__,
      0);
    if ( scriptBranchMenu )
    {
      ScriptBranchMenu__Open(scriptBranchMenu, v20, v22, 0);
      return;
    }
LABEL_11:
    sub_1C372B4(v12);
  }
  if ( !*(_QWORD *)v15 )
    goto LABEL_11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v15 + 64LL),
    *(_QWORD *)(*(_QWORD *)v15 + 40LL));
}


bool DebugTestRootComponent__SetupTakeover(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugSignupMenu_o *debugSignupMenu; // x0

  debugSignupMenu = this->fields.debugSignupMenu;
  if ( !debugSignupMenu )
    sub_1C372B4(0);
  DebugSignupMenu__SetupTakeover(debugSignupMenu, this->fields.myFSM, v2);
  return 1;
}


bool DebugTestRootComponent__StartBackSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  BackViewListViewMenu_o *backSelectMenu; // x20
  BackViewListViewMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C40495 & 1) == 0 )
  {
    sub_1C37058(&BackViewListViewMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndBackSelect__);
    byte_4C40495 = 1;
  }
  backSelectMenu = this->fields.backSelectMenu;
  v4 = (BackViewListViewMenu_CallbackFunc_o *)sub_1C372A4(BackViewListViewMenu_CallbackFunc_TypeInfo);
  BackViewListViewMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndBackSelect__, v5);
  if ( !backSelectMenu )
    sub_1C372B4(v6);
  BackViewListViewMenu__Open(backSelectMenu, v4, v7);
  return 1;
}


bool DebugTestRootComponent__StartBattleCharaSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  return 1;
}


void DebugTestRootComponent__StartBattleMockScene(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


bool DebugTestRootComponent__StartChangeDPISelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  DPIListViewMenu_o *dPIListViewMenu; // x20
  DPIListViewMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C404A8 & 1) == 0 )
  {
    sub_1C37058(&DPIListViewMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndChangeDPISelect__);
    byte_4C404A8 = 1;
  }
  dPIListViewMenu = this->fields.dPIListViewMenu;
  v4 = (DPIListViewMenu_CallbackFunc_o *)sub_1C372A4(DPIListViewMenu_CallbackFunc_TypeInfo);
  DPIListViewMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndChangeDPISelect__, v5);
  if ( !dPIListViewMenu )
    sub_1C372B4(v6);
  DPIListViewMenu__Open(dPIListViewMenu, v4, v7);
  return 1;
}


void DebugTestRootComponent__StartConnectScript(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int128 v4; // q0
  __int128 v5; // q1
  struct ScriptConnectData_o *p_currentConnectData; // x0
  __int128 v9; // q0
  __int128 v10; // q1
  const MethodInfo *v11; // x2
  System_Collections_IEnumerator_o *v12; // x0
  ScriptConnectData_o v13; // [xsp+0h] [xbp-50h] BYREF

  v5 = *(_OWORD *)&connectData->fields.ConnectPath;
  v4 = *(_OWORD *)&connectData->fields.EndCallback;
  p_currentConnectData = &this->fields.currentConnectData;
  *(_QWORD *)&p_currentConnectData->fields.JumpLine = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)&p_currentConnectData->fields.ConnectPath = v5;
  *(_OWORD *)&p_currentConnectData->fields.EndCallback = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)p_currentConnectData, 0, (int32_t)method, v3);
  v10 = *(_OWORD *)&connectData->fields.ConnectPath;
  v9 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)&v13.fields.JumpLine = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)&v13.fields.ConnectPath = v10;
  *(_OWORD *)&v13.fields.EndCallback = v9;
  v12 = DebugTestRootComponent__RequestScriptFileCR(this, &v13, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v12, 0);
}


bool DebugTestRootComponent__StartConnectScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptManager_c *v3; // x0
  System_String_o *scriptServerSettingAddress; // x21
  System_String_o *scriptObjectSettingAddress; // x20
  System_Action_o *v6; // x22
  System_Action_o *v7; // x23
  const MethodInfo *v8; // x2
  ScriptConnectData_o v10; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v11; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C4047E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndConnectScriptPlay__);
    sub_1C37058(&Method_DebugTestRootComponent_ErrorConnectScriptPlay__);
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C4047E = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C40534 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C40534 = 1;
  }
  v3 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v3 = ScriptManager_TypeInfo;
  }
  scriptServerSettingAddress = v3->static_fields->scriptServerSettingAddress;
  if ( !byte_4C40535 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    v3 = ScriptManager_TypeInfo;
    byte_4C40535 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = ScriptManager_TypeInfo;
  }
  scriptObjectSettingAddress = v3->static_fields->scriptObjectSettingAddress;
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_DebugTestRootComponent_EndConnectScriptPlay__, 0);
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_DebugTestRootComponent_ErrorConnectScriptPlay__, 0);
  memset(&v11, 0, sizeof(v11));
  ScriptConnectData___ctor(&v11, scriptServerSettingAddress, scriptObjectSettingAddress, v6, v7, -1, 0, 0);
  v10 = v11;
  DebugTestRootComponent__StartConnectScript(this, &v10, v8);
  return 1;
}


bool DebugTestRootComponent__StartConnectScriptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptConnectMenu_o *connectScriptMenu; // x20
  ScriptConnectMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C4047C & 1) == 0 )
  {
    sub_1C37058(&ScriptConnectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndConnectScriptSelect__);
    byte_4C4047C = 1;
  }
  connectScriptMenu = this->fields.connectScriptMenu;
  v4 = (ScriptConnectMenu_CallbackFunc_o *)sub_1C372A4(ScriptConnectMenu_CallbackFunc_TypeInfo);
  ScriptConnectMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndConnectScriptSelect__,
    0);
  if ( !connectScriptMenu )
    sub_1C372B4(v5);
  ScriptConnectMenu__Open(connectScriptMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartConnectWebView(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  WebConnectMenu_o *webViewConnectMenu; // x20
  WebConnectMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C4049E & 1) == 0 )
  {
    sub_1C37058(&WebConnectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndConnectWebView__);
    byte_4C4049E = 1;
  }
  webViewConnectMenu = this->fields.webViewConnectMenu;
  v4 = (WebConnectMenu_CallbackFunc_o *)sub_1C372A4(WebConnectMenu_CallbackFunc_TypeInfo);
  WebConnectMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndConnectWebView__, 0);
  if ( !webViewConnectMenu )
    sub_1C372B4(v5);
  WebConnectMenu__Open(webViewConnectMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartDefaultScriptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptDefaultFilePlayerMenu_o *playScriptDefaultFileMenu; // x20
  ScriptDefaultFilePlayerMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C4048A & 1) == 0 )
  {
    sub_1C37058(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndPlayDefaultScriptSelect__);
    byte_4C4048A = 1;
  }
  playScriptDefaultFileMenu = this->fields.playScriptDefaultFileMenu;
  v4 = (ScriptDefaultFilePlayerMenu_CallbackFunc_o *)sub_1C372A4(ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
  ScriptDefaultFilePlayerMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndPlayDefaultScriptSelect__,
    0);
  if ( !playScriptDefaultFileMenu )
    sub_1C372B4(v5);
  ScriptDefaultFilePlayerMenu__Open(playScriptDefaultFileMenu, v4, 0);
  return 1;
}


void DebugTestRootComponent__StartEditBattleMock(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C404A7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C404A7 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


bool DebugTestRootComponent__StartEquipGraphSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  EquipGraphViewListViewMenu_o *equipGraphSelectMenu; // x20
  EquipGraphViewListViewMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C40499 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndEquipGraphSelect__);
    byte_4C40499 = 1;
  }
  equipGraphSelectMenu = this->fields.equipGraphSelectMenu;
  v4 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_1C372A4(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
  EquipGraphViewListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndEquipGraphSelect__,
    v5);
  if ( !equipGraphSelectMenu )
    sub_1C372B4(v6);
  EquipGraphViewListViewMenu__Open(equipGraphSelectMenu, v4, v7);
  return 1;
}


bool DebugTestRootComponent__StartEventVoicePlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  EventRewardVoicePlayCountView_o *eventRewardVoicePlayCountView; // x0

  eventRewardVoicePlayCountView = this->fields.eventRewardVoicePlayCountView;
  if ( !eventRewardVoicePlayCountView )
    sub_1C372B4(0);
  EventRewardVoicePlayCountView__SetUp(eventRewardVoicePlayCountView, method);
  return 1;
}


bool DebugTestRootComponent__StartFigureSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  FigureViewListViewMenu_o *figureSelectMenu; // x20
  FigureViewListViewMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C40497 & 1) == 0 )
  {
    sub_1C37058(&FigureViewListViewMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndFigureSelect__);
    byte_4C40497 = 1;
  }
  figureSelectMenu = this->fields.figureSelectMenu;
  v4 = (FigureViewListViewMenu_CallbackFunc_o *)sub_1C372A4(FigureViewListViewMenu_CallbackFunc_TypeInfo);
  FigureViewListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndFigureSelect__,
    v5);
  if ( !figureSelectMenu )
    sub_1C372B4(v6);
  FigureViewListViewMenu__Open(figureSelectMenu, v4, v7);
  return 1;
}


void DebugTestRootComponent__StartFileScript(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int128 v4; // q0
  __int128 v5; // q1
  struct ScriptConnectData_o *p_currentConnectData; // x0
  __int128 v9; // q0
  __int128 v10; // q1
  const MethodInfo *v11; // x2
  ScriptConnectData_o v12; // [xsp+0h] [xbp-50h] BYREF

  v5 = *(_OWORD *)&connectData->fields.ConnectPath;
  v4 = *(_OWORD *)&connectData->fields.EndCallback;
  p_currentConnectData = &this->fields.currentConnectData;
  *(_QWORD *)&p_currentConnectData->fields.JumpLine = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)&p_currentConnectData->fields.ConnectPath = v5;
  *(_OWORD *)&p_currentConnectData->fields.EndCallback = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)p_currentConnectData, 0, (int32_t)method, v3);
  v10 = *(_OWORD *)&connectData->fields.ConnectPath;
  v9 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)&v12.fields.JumpLine = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)&v12.fields.ConnectPath = v10;
  *(_OWORD *)&v12.fields.EndCallback = v9;
  DebugTestRootComponent__LoadFileScript(this, &v12, v11);
}


void DebugTestRootComponent__StartFileScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptManager_c *v3; // x0
  System_String_o *scriptPlayerPathSettingAddress; // x21
  System_String_o *scriptPlayerObjectSettingAddress; // x20
  System_Action_o *v6; // x22
  System_Action_o *v7; // x23
  __int128 v8; // q0
  __int128 v9; // q1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  ScriptConnectData_o v13; // [xsp+0h] [xbp-D0h]
  ScriptConnectData_o v14; // [xsp+30h] [xbp-A0h] BYREF
  ScriptConnectData_o v15; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4C4048C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndStartPlayScriptPlay__);
    sub_1C37058(&Method_DebugTestRootComponent_ErrorStartPlayScriptPlay__);
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C4048C = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C40537 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C40537 = 1;
  }
  v3 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v3 = ScriptManager_TypeInfo;
  }
  scriptPlayerPathSettingAddress = v3->static_fields->scriptPlayerPathSettingAddress;
  if ( !byte_4C40538 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    v3 = ScriptManager_TypeInfo;
    byte_4C40538 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = ScriptManager_TypeInfo;
  }
  scriptPlayerObjectSettingAddress = v3->static_fields->scriptPlayerObjectSettingAddress;
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_DebugTestRootComponent_EndStartPlayScriptPlay__, 0);
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_DebugTestRootComponent_ErrorStartPlayScriptPlay__, 0);
  memset(&v14, 0, sizeof(v14));
  ScriptConnectData___ctor(&v14, scriptPlayerPathSettingAddress, scriptPlayerObjectSettingAddress, v6, v7, -1, 0, 0);
  v8 = *(_OWORD *)&v14.fields.ConnectPath;
  v9 = *(_OWORD *)&v14.fields.EndCallback;
  v13 = v14;
  *(_QWORD *)&this->fields.currentConnectData.fields.JumpLine = *(_QWORD *)&v14.fields.JumpLine;
  *(_OWORD *)&this->fields.currentConnectData.fields.ConnectPath = v8;
  *(_OWORD *)&this->fields.currentConnectData.fields.EndCallback = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.currentConnectData, 0, v10, v11);
  v15 = v13;
  DebugTestRootComponent__LoadFileScript(this, &v15, v12);
}


bool DebugTestRootComponent__StartFileScriptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptFilePlayerMenu_o *playScriptFileMenu; // x20
  ScriptFilePlayerMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C40488 & 1) == 0 )
  {
    sub_1C37058(&ScriptFilePlayerMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndPlayScriptSelect__);
    byte_4C40488 = 1;
  }
  playScriptFileMenu = this->fields.playScriptFileMenu;
  v4 = (ScriptFilePlayerMenu_CallbackFunc_o *)sub_1C372A4(ScriptFilePlayerMenu_CallbackFunc_TypeInfo);
  ScriptFilePlayerMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndPlayScriptSelect__,
    0);
  if ( !playScriptFileMenu )
    sub_1C372B4(v5);
  ScriptFilePlayerMenu__Open(playScriptFileMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartNoblePhantasm(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  intptr_t NoblePhantasmSelectPanel; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_EventDelegate__o *v11; // x21
  EventDelegate_Callback_o *v12; // x22
  UnityEngine_Transform_o *v13; // x0
  System_Collections_Generic_List_EventDelegate__o *v14; // x21
  EventDelegate_Callback_o *v15; // x22
  Il2CppClass *v16; // x21
  UnityEngine_GameObject_o *v17; // x8
  UnityEngine_Object_o *v18; // x22
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Object_o *v20; // x19
  UnityEngine_Font_o *trueTypeFont; // x23
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x25
  __int64 v32; // x26
  __int64 v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  ServantEntity_o **v36; // x28
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UnityEngine_GameObject_o *v39; // x25
  __int64 v40; // x0
  Il2CppObject *v41; // x0
  UILabel_o *v42; // x27
  __int64 v43; // x0
  const MethodInfo *v44; // x2
  System_String_o *v45; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x28
  System_String_o *v47; // x2
  System_String_o *v48; // x0
  Il2CppObject *v49; // x0
  System_Collections_Generic_List_EventDelegate__o *monitor; // x27
  EventDelegate_Callback_o *v51; // x28
  Il2CppObject *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_Transform_o *v56; // x26
  UnityEngine_Transform_o *v57; // x0
  UnityEngine_Transform_o *v58; // x0
  UnityEngine_Transform_o *v59; // x26
  UnityEngine_Transform_o *v60; // x0
  UnityEngine_Transform_o *v61; // x25
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C404A3 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntityList__);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UIButton___);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UILabel___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_UIGrid___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass113_0__StartNoblePhantasm_b__0__);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass113_0__StartNoblePhantasm_b__1__);
    sub_1C37058(&DebugTestRootComponent___c__DisplayClass113_0_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass113_1__StartNoblePhantasm_b__2__);
    sub_1C37058(&DebugTestRootComponent___c__DisplayClass113_1_TypeInfo);
    sub_1C37058(&StringLiteral_4032/*"CancelButton"*/);
    sub_1C37058(&StringLiteral_8431/*"LimitCountLabel"*/);
    sub_1C37058(&StringLiteral_14519/*"TitleLabel"*/);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    byte_4C404A3 = 1;
  }
  id = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  v3 = sub_1C372A4(DebugTestRootComponent___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_85;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  NoblePhantasmSelectPanel = (intptr_t)this->fields.NoblePhantasmSelectPanel;
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoblePhantasmSelectPanel, 1, 0);
  NoblePhantasmSelectPanel = (intptr_t)this->fields.NoblePhantasmSelectPanel;
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)NoblePhantasmSelectPanel, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_8431/*"LimitCountLabel"*/, 1, 0);
  *(_QWORD *)(v3 + 24) = NodeFromName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)NodeFromName, v9, v10);
  NoblePhantasmSelectPanel = *(_QWORD *)(v3 + 24);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)NoblePhantasmSelectPanel,
                                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  v11 = *(System_Collections_Generic_List_EventDelegate__o **)(NoblePhantasmSelectPanel + 200);
  v12 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v12,
    (Il2CppObject *)v3,
    Method_DebugTestRootComponent___c__DisplayClass113_0__StartNoblePhantasm_b__0__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(v11, v12, 0);
  NoblePhantasmSelectPanel = (intptr_t)this->fields.NoblePhantasmSelectPanel;
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)NoblePhantasmSelectPanel, 0);
  NoblePhantasmSelectPanel = (intptr_t)TransformHelper__getNodeFromName(
                                         v13,
                                         (System_String_o *)StringLiteral_4032/*"CancelButton"*/,
                                         1,
                                         0);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)NoblePhantasmSelectPanel,
                                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  v14 = *(System_Collections_Generic_List_EventDelegate__o **)(NoblePhantasmSelectPanel + 200);
  v15 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v15,
    (Il2CppObject *)v3,
    Method_DebugTestRootComponent___c__DisplayClass113_0__StartNoblePhantasm_b__1__,
    0);
  EventDelegate__Add(v14, v15, 0);
  NoblePhantasmSelectPanel = (intptr_t)this->fields.NoblePhantasmSelectPanel;
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)NoblePhantasmSelectPanel,
                                         (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
  if ( !this->fields.NoblePhantasmSelectPanel )
    goto LABEL_85;
  v16 = (Il2CppClass *)NoblePhantasmSelectPanel;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_GameObject__GetComponentInChildren_object_(
                                         this->fields.NoblePhantasmSelectPanel,
                                         (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIGrid___);
  v17 = this->fields.NoblePhantasmSelectPanel;
  if ( !v17 )
    goto LABEL_85;
  v18 = (UnityEngine_Object_o *)NoblePhantasmSelectPanel;
  v19 = UnityEngine_GameObject__get_transform(v17, 0);
  v20 = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v19, (System_String_o *)StringLiteral_14519/*"TitleLabel"*/, 1, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  NoblePhantasmSelectPanel = UnityEngine_Object__op_Inequality(v20, 0, 0);
  trueTypeFont = 0;
  if ( (NoblePhantasmSelectPanel & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_85;
    NoblePhantasmSelectPanel = (intptr_t)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)v20,
                                           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    if ( !NoblePhantasmSelectPanel )
      goto LABEL_85;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)NoblePhantasmSelectPanel, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v18, 0, 0) )
    return 1;
  NoblePhantasmSelectPanel = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NoblePhantasmSelectPanel
    || (NoblePhantasmSelectPanel = (intptr_t)DataManager__GetMasterData_object_(
                                               (DataManager_o *)NoblePhantasmSelectPanel,
                                               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (NoblePhantasmSelectPanel = *(_QWORD *)(NoblePhantasmSelectPanel + 40)) == 0 )
  {
LABEL_85:
    sub_1C372B4(NoblePhantasmSelectPanel);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)NoblePhantasmSelectPanel,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_33;
      }
      v26 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_33:
      v26 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8))
        & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_40;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_40:
      v30 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    v32 = sub_1C372A4(DebugTestRootComponent___c__DisplayClass113_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v32, 0);
    if ( !v32 )
      sub_1C372B4(v33);
    *(_QWORD *)(v32 + 24) = v3;
    sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 24), v3, v34, v35);
    *(_QWORD *)(v32 + 16) = v31;
    v36 = (ServantEntity_o **)(v32 + 16);
    sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 16), v31, v37, v38);
    v39 = (UnityEngine_GameObject_o *)sub_1C372A4(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor_71248916(v39, 0);
    if ( !v39 )
      sub_1C372B4(v40);
    v41 = UnityEngine_GameObject__AddComponent_object_(
            v39,
            (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UILabel___);
    v42 = (UILabel_o *)v41;
    if ( !v41 )
      sub_1C372B4(0);
    UILabel__set_trueTypeFont((UILabel_o *)v41, trueTypeFont, 0);
    UILabel__set_overflowMethod(v42, 2, 0);
    v69.fields.r = 0.0;
    v69.fields.g = 0.0;
    v69.fields.b = 0.0;
    v69.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)v42, v69, 0);
    UILabel__set_fontSize(v42, 24, 0);
    UIWidget__set_pivot((UIWidget_o *)v42, 3, 0);
    if ( !*v36 )
      sub_1C372B4(v43);
    id = (*v36)->fields.id;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v68.fields.currentCryptoKey = &id;
    *(_QWORD *)&v68.fields.fakeValue = 0;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v68, v44);
    if ( !*v36 )
      sub_1C372B4(0);
    Name = ServantEntity__GetName(*v36, -1, 0, -1, 0, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48966740(Name, 0);
    v48 = System_String__Concat_63599904(v45, (System_String_o *)StringLiteral_1457/*":"*/, v47, 0);
    UILabel__set_text(v42, v48, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__AddWidgetCollider(v39, 0);
    v49 = UnityEngine_GameObject__AddComponent_object_(
            v39,
            (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
    if ( !v49 )
      sub_1C372B4(0);
    monitor = (System_Collections_Generic_List_EventDelegate__o *)v49[12].monitor;
    v51 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v51,
      (Il2CppObject *)v32,
      Method_DebugTestRootComponent___c__DisplayClass113_1__StartNoblePhantasm_b__2__,
      0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add(monitor, v51, 0);
    v52 = UnityEngine_GameObject__AddComponent_object_(
            v39,
            (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    if ( !v52 )
      sub_1C372B4(0);
    v52[2].klass = v16;
    sub_1C36FFC((CGThumbnailListItem_o *)&v52[2], (int32_t)v16, v53, v54);
    v55 = UnityEngine_GameObject__get_transform(v39, 0);
    if ( !v18 )
      sub_1C372B4(v55);
    v56 = v55;
    v57 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0);
    if ( !v56 )
      sub_1C372B4(v57);
    UnityEngine_Transform__set_parent(v56, v57, 0);
    v58 = UnityEngine_GameObject__get_transform(v39, 0);
    v59 = v58;
    if ( !byte_4C3C921 )
    {
      v58 = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    if ( !v59 )
      sub_1C372B4(v58);
    UnityEngine_Transform__set_localPosition(v59, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v60 = UnityEngine_GameObject__get_transform(v39, 0);
    v61 = v60;
    if ( !byte_4C3C926 )
    {
      v60 = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v61 )
      sub_1C372B4(v60);
    UnityEngine_Transform__set_localScale(v61, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  v62 = Enumerator->klass;
  v63 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_70;
    }
    v65 = (__int64)&v62->vtable[*v64];
  }
  else
  {
LABEL_70:
    v65 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(Enumerator, *(_QWORD *)(v65 + 8));
  return 1;
}


bool DebugTestRootComponent__StartReceiptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ReceiptListViewMenu_o *receiptSelectMenu; // x20
  ReceiptListViewMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C40491 & 1) == 0 )
  {
    sub_1C37058(&ReceiptListViewMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndReceiptSelect__);
    byte_4C40491 = 1;
  }
  receiptSelectMenu = this->fields.receiptSelectMenu;
  v4 = (ReceiptListViewMenu_CallbackFunc_o *)sub_1C372A4(ReceiptListViewMenu_CallbackFunc_TypeInfo);
  ReceiptListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndReceiptSelect__,
    v5);
  if ( !receiptSelectMenu )
    sub_1C372B4(v6);
  ReceiptListViewMenu__Open(receiptSelectMenu, v4, v7);
  return 1;
}


void DebugTestRootComponent__StartScript(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        System_String_o *scriptData,
        System_String_o *orgData,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int128 v15; // q0
  __int128 v16; // q1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x5
  ScriptTextViewMenu_o *scriptTextViewMenu; // x19
  System_String_o *v25; // x21
  int32_t v26; // w22
  ScriptTextViewMenu_CallbackFunc_o *v27; // x23

  if ( (byte_4C40486 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__0__);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__1__);
    sub_1C37058(&DebugTestRootComponent___c__DisplayClass78_0_TypeInfo);
    byte_4C40486 = 1;
  }
  v9 = sub_1C372A4(DebugTestRootComponent___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = scriptData;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)scriptData, v13, v14);
  v16 = *(_OWORD *)&connectData->fields.ConnectPath;
  v15 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)(v9 + 64) = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)(v9 + 32) = v16;
  *(_OWORD *)(v9 + 48) = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), 0, v17, v18);
  *(_QWORD *)(v9 + 72) = orgData;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 72), (int32_t)orgData, v19, v20);
  if ( !*(_BYTE *)(v9 + 68) || *(_BYTE *)(v9 + 69) )
  {
    v21 = *(System_String_o **)(v9 + 24);
    v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v9,
      Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__1__,
      0);
    DebugTestRootComponent__ScriptCheckAndStart(this, v21, 0, v22, *(System_Action_o **)(v9 + 48), v23);
    return;
  }
  scriptTextViewMenu = this->fields.scriptTextViewMenu;
  v25 = *(System_String_o **)(v9 + 24);
  v26 = *(_DWORD *)(v9 + 64);
  v27 = (ScriptTextViewMenu_CallbackFunc_o *)sub_1C372A4(ScriptTextViewMenu_CallbackFunc_TypeInfo);
  ScriptTextViewMenu_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__0__,
    0);
  if ( !scriptTextViewMenu )
LABEL_9:
    sub_1C372B4(v10);
  ScriptTextViewMenu__Open(scriptTextViewMenu, v25, v26, v27, 0);
}


bool DebugTestRootComponent__StartScriptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptAssetListViewMenu_o *scriptSelectMenu; // x20
  ScriptAssetListViewMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C4047A & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndScriptSelect__);
    sub_1C37058(&StringLiteral_12632/*"ScriptActionEncrypt"*/);
    byte_4C4047A = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_12632/*"ScriptActionEncrypt"*/, 0);
  scriptSelectMenu = this->fields.scriptSelectMenu;
  v4 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_1C372A4(ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndScriptSelect__,
    0);
  if ( !scriptSelectMenu )
    sub_1C372B4(v5);
  ScriptAssetListViewMenu__Open(scriptSelectMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartServerSettingInput(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ServerSettingMenu_o *serverSettingMenu; // x20
  ServerSettingMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C40478 & 1) == 0 )
  {
    sub_1C37058(&ServerSettingMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndServerSetting__);
    byte_4C40478 = 1;
  }
  serverSettingMenu = this->fields.serverSettingMenu;
  v4 = (ServerSettingMenu_CallbackFunc_o *)sub_1C372A4(ServerSettingMenu_CallbackFunc_TypeInfo);
  ServerSettingMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndServerSetting__, 0);
  if ( !serverSettingMenu )
    sub_1C372B4(v5);
  ServerSettingMenu__Open(serverSettingMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartSignupInput(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugSignupMenu_o *debugSignupMenu; // x0

  debugSignupMenu = this->fields.debugSignupMenu;
  if ( !debugSignupMenu )
    sub_1C372B4(0);
  DebugSignupMenu__Open(debugSignupMenu, this->fields.myFSM, v2);
  return 1;
}


bool DebugTestRootComponent__StartSoundCheck(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  SoundCheckMenu_o *soundCheckMenu; // x0

  soundCheckMenu = this->fields.soundCheckMenu;
  if ( !soundCheckMenu )
    sub_1C372B4(0);
  SoundCheckMenu__Open(soundCheckMenu, 0);
  return 1;
}


bool DebugTestRootComponent__StartSoundTest(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  SoundTestMenu_o *soundTestMenu; // x20
  SoundTestMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C404A5 & 1) == 0 )
  {
    sub_1C37058(&SoundTestMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndSoundTest__);
    byte_4C404A5 = 1;
  }
  soundTestMenu = this->fields.soundTestMenu;
  v4 = (SoundTestMenu_CallbackFunc_o *)sub_1C372A4(SoundTestMenu_CallbackFunc_TypeInfo);
  SoundTestMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndSoundTest__, 0);
  if ( !soundTestMenu )
    sub_1C372B4(v5);
  SoundTestMenu__open(soundTestMenu, v4, 0);
  return 1;
}


void DebugTestRootComponent__StartSwitchingUser(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


bool DebugTestRootComponent__StartTestRequest(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C404A0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_EndTestRequest__);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&StringLiteral_13723/*"Test"*/);
    byte_4C404A0 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__InitNotificationInfo(0);
  ScriptManager__AddNotificationInfo(0, 0, (System_String_o *)StringLiteral_13723/*"Test"*/, 0);
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_DebugTestRootComponent_EndTestRequest__, 0);
  ScriptManager__PlayGacha(100100, 0, 1, v3, 0, -1, 0);
  return 1;
}


void DebugTestRootComponent__StartTopInput(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DebugListViewMenu_o *topMenu; // x0
  struct DebugTestRootComponent_DebugTestSceneJumpInfo_o *sceneJumpInfo; // x8

  if ( (byte_4C40471 & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&StringLiteral_4970/*"DEBUG_MENU_SETTING_SERVER"*/);
    byte_4C40471 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseDebugCommand )
  {
    topMenu = this->fields.topMenu;
    if ( !topMenu )
      goto LABEL_13;
    DebugListViewMenu__StartInput(topMenu, method);
  }
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( sceneJumpInfo && sceneJumpInfo->fields._isFirstServerSetting_k__BackingField )
  {
    sceneJumpInfo->fields._isFirstServerSetting_k__BackingField = 0;
    topMenu = (DebugListViewMenu_o *)this->fields.myFSM;
    if ( topMenu )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)topMenu, (System_String_o *)StringLiteral_4970/*"DEBUG_MENU_SETTING_SERVER"*/, 0);
      return;
    }
LABEL_13:
    sub_1C372B4(topMenu);
  }
}


bool DebugTestRootComponent__StartindividualEncryptionMenu(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  return 1;
}


void DebugTestRootComponent__SwitchingAllocMem(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C40475 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C40475 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__switchingAllocMem((CommonUI_o *)Instance, 0);
}


void DebugTestRootComponent__SwitchingAssetLoad(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C40476 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4C40476 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AssetManager__SwitchingDebugStatusOut((AssetManager_o *)Instance, 0);
}


void DebugTestRootComponent__SwitchingSoundInfo(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__TestService(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__ToggleTopInput(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  this->fields.toggleTopInput ^= 1u;
  DebugTestRootComponent__StartTopInput(this, method);
}


void DebugTestRootComponent__beginInitialize(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *userInfoObject; // x0
  ManagerConfig_c *v4; // x0
  NetworkManager_c *v5; // x0
  UILabel_o *serverInfoLabel; // x20
  NetworkManager_c *v7; // x0
  UILabel_o *userInfoLabel; // x20
  System_String_o *v9; // x0
  UILabel_o *graphicsAPILabel; // x20
  System_String_o *v11; // x0
  UILabel_o *versionInfoLabel; // x20
  AssetManager_c *v13; // x0
  System_String_o *assetBundleMasterVersion; // x22
  UILabel_o *folderInfoLabel; // x20
  NetworkManager_c *v16; // x0
  ManagerConfig_c *v17; // x0
  ManagerConfig_c *v18; // x0
  const MethodInfo *v19; // x1
  UILabel_o *criScriptVersionInfoLabel; // x20
  Il2CppObject *ScriptVersionString; // x0
  UILabel_o *criBinaryVersionInfoLabel; // x20
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Enum_o v26; // [xsp+0h] [xbp-60h] BYREF
  int32_t graphicsDeviceType; // [xsp+10h] [xbp-50h]
  int32_t BinaryVersionNumber; // [xsp+1Ch] [xbp-44h] BYREF
  __int64 userIdNumber; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C4046C & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&UnityEngine_Rendering_GraphicsDeviceType_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&StringLiteral_15228/*"UserId "*/);
    sub_1C37058(&StringLiteral_3919/*"CRIBinaryVersion:{0}"*/);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_3921/*"CRIScriptVersion:{0}"*/);
    sub_1C37058(&StringLiteral_7167/*"Graphics API "*/);
    sub_1C37058(&StringLiteral_11481/*"SCRIPT"*/);
    sub_1C37058(&StringLiteral_12764/*"Server "*/);
    sub_1C37058(&StringLiteral_15695/*"X"*/);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C4046C = 1;
  }
  userIdNumber = 0;
  BinaryVersionNumber = 0;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  userInfoObject = this->fields.userInfoObject;
  if ( !userInfoObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(userInfoObject, 0, 0);
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    userInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !userInfoObject )
      goto LABEL_71;
    if ( !NetworkManager__ReadAuth((NetworkManager_o *)userInfoObject, 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C3CD62 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3CD62 = 1;
      }
      v5 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v5 = NetworkManager_TypeInfo;
      }
      userIdNumber = v5->static_fields->userIdNumber;
      if ( userIdNumber >= 1 )
      {
        userInfoObject = this->fields.userInfoObject;
        if ( !userInfoObject )
          goto LABEL_71;
        UnityEngine_GameObject__SetActive(userInfoObject, 1, 0);
        serverInfoLabel = this->fields.serverInfoLabel;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C4052F )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C4052F = 1;
        }
        v7 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v7 = NetworkManager_TypeInfo;
        }
        userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_63561656(
                                                       (System_String_o *)StringLiteral_12764/*"Server "*/,
                                                       v7->static_fields->userCreateServer,
                                                       0);
        if ( !serverInfoLabel )
          goto LABEL_71;
        UILabel__set_text(serverInfoLabel, (System_String_o *)userInfoObject, 0);
        userInfoLabel = this->fields.userInfoLabel;
        v9 = System_Int64__ToString((int64_t)&userIdNumber, 0);
        userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_63561656(
                                                       (System_String_o *)StringLiteral_15228/*"UserId "*/,
                                                       v9,
                                                       0);
        if ( !userInfoLabel )
          goto LABEL_71;
        UILabel__set_text(userInfoLabel, (System_String_o *)userInfoObject, 0);
        graphicsAPILabel = this->fields.graphicsAPILabel;
        graphicsDeviceType = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
        v26.klass = (System_Enum_c *)UnityEngine_Rendering_GraphicsDeviceType_TypeInfo;
        v26.monitor = (void *)-1LL;
        v11 = System_Enum__ToString(&v26, 0);
        userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_63561656(
                                                       (System_String_o *)StringLiteral_7167/*"Graphics API "*/,
                                                       v11,
                                                       0);
        if ( !graphicsAPILabel )
          goto LABEL_71;
        UILabel__set_text(graphicsAPILabel, (System_String_o *)userInfoObject, 0);
      }
    }
    userInfoObject = this->fields.assetbundleInfoObject;
    if ( !userInfoObject )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive(userInfoObject, 1, 0);
    versionInfoLabel = this->fields.versionInfoLabel;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !byte_4C40530 )
    {
      sub_1C37058(&AssetManager_TypeInfo);
      byte_4C40530 = 1;
    }
    v13 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v13 = AssetManager_TypeInfo;
    }
    assetBundleMasterVersion = v13->static_fields->assetBundleMasterVersion;
    if ( !byte_4C40531 )
    {
      sub_1C37058(&AssetManager_TypeInfo);
      v13 = AssetManager_TypeInfo;
      byte_4C40531 = 1;
    }
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = AssetManager_TypeInfo;
    }
    userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_63599904(
                                                   assetBundleMasterVersion,
                                                   (System_String_o *)StringLiteral_113/*" "*/,
                                                   v13->static_fields->assetBundleDateVersion,
                                                   0);
    if ( !versionInfoLabel )
      goto LABEL_71;
    UILabel__set_text(versionInfoLabel, (System_String_o *)userInfoObject, 0);
    folderInfoLabel = this->fields.folderInfoLabel;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C40532 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C40532 = 1;
    }
    v16 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v16 = NetworkManager_TypeInfo;
    }
    userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_63599904(
                                                   (System_String_o *)StringLiteral_15804/*"["*/,
                                                   v16->static_fields->dataServerFolder,
                                                   (System_String_o *)StringLiteral_16058/*"]"*/,
                                                   0);
    if ( !folderInfoLabel )
      goto LABEL_71;
    UILabel__set_text(folderInfoLabel, (System_String_o *)userInfoObject, 0);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( System_String__op_Equality(v4->static_fields->ServerDefaultType, (System_String_o *)StringLiteral_11481/*"SCRIPT"*/, 0) )
  {
    userInfoObject = this->fields.scriptPlayerButtonObject;
    if ( !userInfoObject )
      goto LABEL_71;
  }
  else
  {
    userInfoObject = this->fields.returnButtonObject;
    if ( !userInfoObject )
      goto LABEL_71;
  }
  UnityEngine_GameObject__SetActive(userInfoObject, 1, 0);
  v17 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v17 = ManagerConfig_TypeInfo;
  }
  if ( !System_String__op_Equality(v17->static_fields->ServerDefaultType, (System_String_o *)StringLiteral_11481/*"SCRIPT"*/, 0) )
    goto LABEL_61;
  v18 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v18 = ManagerConfig_TypeInfo;
  }
  if ( v18->static_fields->IsNetworkMock )
  {
    userInfoObject = this->fields.scriptPlayerBase;
    if ( !userInfoObject )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive(userInfoObject, 1, 0);
  }
  else
  {
LABEL_61:
    userInfoObject = this->fields.debugBase;
    if ( !userInfoObject )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive(userInfoObject, 1, 0);
    userInfoObject = (UnityEngine_GameObject_o *)this->fields.topMenu;
    if ( !userInfoObject )
      goto LABEL_71;
    DebugListViewMenu__Init((DebugListViewMenu_o *)userInfoObject, v19);
  }
  userInfoObject = this->fields.criVersionInfoObject;
  if ( !userInfoObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(userInfoObject, 1, 0);
  criScriptVersionInfoLabel = this->fields.criScriptVersionInfoLabel;
  ScriptVersionString = (Il2CppObject *)CriWare_Common__GetScriptVersionString(0);
  userInfoObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                 (System_String_o *)StringLiteral_3921/*"CRIScriptVersion:{0}"*/,
                                                 ScriptVersionString,
                                                 0);
  if ( !criScriptVersionInfoLabel )
    goto LABEL_71;
  UILabel__set_text(criScriptVersionInfoLabel, (System_String_o *)userInfoObject, 0);
  criBinaryVersionInfoLabel = this->fields.criBinaryVersionInfoLabel;
  BinaryVersionNumber = CriWare_Common__GetBinaryVersionNumber(0);
  v23 = (Il2CppObject *)System_Int32__ToString_65071764(
                          (int32_t)&BinaryVersionNumber,
                          (System_String_o *)StringLiteral_15695/*"X"*/,
                          0);
  userInfoObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_3919/*"CRIBinaryVersion:{0}"*/, v23, 0);
  if ( !criBinaryVersionInfoLabel )
    goto LABEL_71;
  UILabel__set_text(criBinaryVersionInfoLabel, (System_String_o *)userInfoObject, 0);
  this->fields.sceneJumpInfo = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sceneJumpInfo, 0, v24, v25);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0);
  userInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !userInfoObject )
LABEL_71:
    sub_1C372B4(userInfoObject);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)userInfoObject, (SceneRootComponent_o *)this, 0);
}


void DebugTestRootComponent__beginStartUp(DebugTestRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppClass *v6; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v8; // x10
  int32_t v9; // w1

  if ( (byte_4C40470 & 1) == 0 )
  {
    sub_1C37058(&DebugTestRootComponent_DebugTestSceneJumpInfo_TypeInfo);
    byte_4C40470 = 1;
  }
  if ( data )
  {
    v6 = (Il2CppClass *)DebugTestRootComponent_DebugTestSceneJumpInfo_TypeInfo;
    naturalAligment = DebugTestRootComponent_DebugTestSceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (DebugTestRootComponent_DebugTestSceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == DebugTestRootComponent_DebugTestSceneJumpInfo_TypeInfo )
        v8 = data;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    this->fields.sceneJumpInfo = (struct DebugTestRootComponent_DebugTestSceneJumpInfo_o *)v8;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v6 )
        v9 = (int)data;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sceneJumpInfo, v9, (int32_t)method, v3);
  }
  SceneRootComponent__beginStartUp_41481188((SceneRootComponent_o *)this, 0);
}


void DebugTestRootComponent__callbackLogin(
        DebugTestRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v7; // x9

  if ( (byte_4C40494 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    sub_1C37058(&StringLiteral_11081/*"REQUEST_DO_SIGNUP"*/);
    sub_1C37058(&StringLiteral_18660/*"do_signup"*/);
    byte_4C40494 = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_18660/*"do_signup"*/, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(v5);
  v7 = &StringLiteral_11081/*"REQUEST_DO_SIGNUP"*/;
  if ( !v5 )
    v7 = &StringLiteral_11084/*"REQUEST_OK"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0);
}


void DebugTestRootComponent__debugSlowConnectOnOff(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__debugSlowLoadOnOff(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__debugStatusViewOnOff(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__endSetUserServerTime(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  DebugUserServerTimeMenu_o *dbgUserServerTimeMenu; // x0

  dbgUserServerTimeMenu = this->fields.dbgUserServerTimeMenu;
  if ( !dbgUserServerTimeMenu )
    sub_1C372B4(0);
  DebugUserServerTimeMenu__close(dbgUserServerTimeMenu, method);
}


void DebugTestRootComponent__scriptEscapeURL(System_String_o **url, const MethodInfo *method)
{
  void *v3; // x0
  System_String_o *v4; // x20
  System_String_o *v5; // x20
  int32_t stringLength; // w1
  System_String_o *v7; // x20
  NetworkManager_c *v8; // x0
  System_String_o **p_FILE_URL_SCHEME; // x8
  System_String_o *v10; // x21
  __int64 v11; // x8
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C40481 & 1) == 0 )
  {
    sub_1C37058(&DebugTestRootComponent_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C40481 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  v4 = *url;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !v4 )
    goto LABEL_25;
  if ( System_String__StartsWith(v4, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0) )
  {
    v3 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v3 = NetworkManager_TypeInfo;
    }
    v5 = (System_String_o *)**((_QWORD **)v3 + 23);
    if ( v5 )
    {
      v3 = *url;
      if ( *url )
      {
        stringLength = v5->fields._stringLength;
LABEL_23:
        v12 = System_String__Substring((System_String_o *)v3, stringLength, 0);
        v13 = UnityEngine_Networking_UnityWebRequest__EscapeURL(v12, 0);
        v14 = System_String__Concat_63561656(v5, v13, 0);
        *url = v14;
        sub_1C36FFC((CGThumbnailListItem_o *)url, (int32_t)v14, v15, v16);
        return;
      }
    }
    goto LABEL_25;
  }
  v7 = *url;
  v3 = DebugTestRootComponent_TypeInfo;
  if ( !DebugTestRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DebugTestRootComponent_TypeInfo);
  if ( !v7 )
    goto LABEL_25;
  if ( System_String__StartsWith(v7, DebugTestRootComponent_TypeInfo->static_fields->oldScheme, 0) )
  {
    v8 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager_TypeInfo;
    }
    p_FILE_URL_SCHEME = &v8->static_fields->FILE_URL_SCHEME;
    v3 = DebugTestRootComponent_TypeInfo;
    v10 = *url;
    v5 = *p_FILE_URL_SCHEME;
    if ( !DebugTestRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DebugTestRootComponent_TypeInfo);
      v3 = DebugTestRootComponent_TypeInfo;
    }
    v11 = **((_QWORD **)v3 + 23);
    if ( v11 && v10 )
    {
      stringLength = *(_DWORD *)(v11 + 16);
      v3 = v10;
      goto LABEL_23;
    }
LABEL_25:
    sub_1C372B4(v3);
  }
}


void DebugTestRootComponent__setSwitchingDbgButton(
        DebugTestRootComponent_o *this,
        bool flag,
        System_String_o *eventString,
        System_String_o *displayString,
        const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__setSwitchingDbgSlowConnect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__setSwitchingDbgSlowLoad(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__setSwitchingDbgStatusView(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__startSetUserServerTime(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  DebugUserServerTimeMenu_o *dbgUserServerTimeMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C404A6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_endSetUserServerTime__);
    byte_4C404A6 = 1;
  }
  dbgUserServerTimeMenu = this->fields.dbgUserServerTimeMenu;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_endSetUserServerTime__, 0);
  if ( !dbgUserServerTimeMenu )
    sub_1C372B4(v5);
  DebugUserServerTimeMenu__open(dbgUserServerTimeMenu, v4, v6);
}


void DebugTestRootComponent_DebugTestSceneJumpInfo___ctor(
        DebugTestRootComponent_DebugTestSceneJumpInfo_o *this,
        const MethodInfo *method)
{
  SceneJumpInfo___ctor((SceneJumpInfo_o *)this, 0);
}


bool DebugTestRootComponent_DebugTestSceneJumpInfo__get_isFirstServerSetting(
        DebugTestRootComponent_DebugTestSceneJumpInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._isFirstServerSetting_k__BackingField;
}


void DebugTestRootComponent_DebugTestSceneJumpInfo__set_isFirstServerSetting(
        DebugTestRootComponent_DebugTestSceneJumpInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isFirstServerSetting_k__BackingField = value;
}


void DebugTestRootComponent_ScriptReloadCallback___ctor(
        DebugTestRootComponent_ScriptReloadCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A78788;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A78740;
}


System_IAsyncResult_o *DebugTestRootComponent_ScriptReloadCallback__BeginInvoke(
        DebugTestRootComponent_ScriptReloadCallback_o *this,
        int32_t jumpLine,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = jumpLine;
  if ( (byte_4C404AB & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    byte_4C404AB = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void DebugTestRootComponent_ScriptReloadCallback__EndInvoke(
        DebugTestRootComponent_ScriptReloadCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void DebugTestRootComponent_ScriptReloadCallback__Invoke(
        DebugTestRootComponent_ScriptReloadCallback_o *this,
        int32_t jumpLine,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    jumpLine,
    this->fields.method);
}


void DebugTestRootComponent__RequestFileCR_d__76___ctor(
        DebugTestRootComponent__RequestFileCR_d__76_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DebugTestRootComponent__RequestFileCR_d__76__MoveNext(
        DebugTestRootComponent__RequestFileCR_d__76_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  void *_8__1; // x0
  struct System_Action_o *failedCallback; // x1
  const MethodInfo *v11; // x1
  struct UnityEngine_Networking_UnityWebRequest_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  float time; // s8
  ManagerConfig_c *v18; // x0
  float TIMEOUT; // s0
  float downloadProgress; // s0
  float loadProgress_5__4; // s9
  float v22; // s8
  float v23; // s0
  bool v24; // zf
  float v25; // s8
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *error; // x0
  struct System_String_o *v29; // x1
  struct DebugTestRootComponent___c__DisplayClass76_0_o *v30; // x8
  Il2CppObject *Instance; // x0
  System_String_o *errorMessage_5__5; // x20
  Il2CppObject *v33; // x23
  CommonUI_o *v34; // x21
  ErrorDialog_ClickDelegate_o *v35; // x22
  struct System_Action_string__o *v36; // x20
  ManagerConfig_c *v37; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  UnityEngine_WaitForEndOfFrame_o *v39; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  bool result; // w0
  struct System_Action_string__o *successCallback; // x8
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]

  if ( (byte_4C404B9 & 1) == 0 )
  {
    sub_1C37058(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&DebugTestRootComponent_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass76_0__RequestFileCR_b__0__);
    sub_1C37058(&DebugTestRootComponent___c__DisplayClass76_0_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C37058(&StringLiteral_19435/*"file download time over"*/);
    sub_1C37058(&StringLiteral_4660/*"Connect Script Error"*/);
    byte_4C404B9 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C372A4(DebugTestRootComponent___c__DisplayClass76_0_TypeInfo);
    System_Object___ctor(v4, 0);
    this->fields.__8__1 = (struct DebugTestRootComponent___c__DisplayClass76_0_o *)v4;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v4, v5, v6);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_46;
    failedCallback = this->fields.failedCallback;
    *((_QWORD *)_8__1 + 2) = failedCallback;
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)_8__1 + 16), (int32_t)failedCallback, v7, v8);
    if ( !DebugTestRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DebugTestRootComponent_TypeInfo);
    DebugTestRootComponent__scriptEscapeURL(&this->fields.fullPath, v11);
    v12 = UnityEngine_Networking_UnityWebRequest__Get(this->fields.fullPath, 0);
    this->fields._loader_5__2 = v12;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._loader_5__2, (int32_t)v12, v13, v14);
    time = UnityEngine_Time__get_time(0);
    v18 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v18 = ManagerConfig_TypeInfo;
    }
    TIMEOUT = v18->static_fields->TIMEOUT;
    this->fields._errorMessage_5__5 = 0;
    this->fields._loadProgress_5__4 = 0.0;
    this->fields._requestTime_5__3 = time + TIMEOUT;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._errorMessage_5__5, 0, v15, v16);
    _8__1 = this->fields._loader_5__2;
    if ( !_8__1 )
      goto LABEL_46;
    UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)_8__1, 0);
  }
  _8__1 = this->fields._loader_5__2;
  if ( !_8__1 )
    goto LABEL_46;
  if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)_8__1, 0) )
  {
    _8__1 = this->fields._loader_5__2;
    if ( !_8__1 )
      goto LABEL_46;
    downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                         (UnityEngine_Networking_UnityWebRequest_o *)_8__1,
                         0);
    loadProgress_5__4 = this->fields._loadProgress_5__4;
    v22 = downloadProgress;
    v23 = UnityEngine_Time__get_time(0);
    v24 = v22 == loadProgress_5__4;
    v25 = v23;
    if ( !v24 )
    {
      v37 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v37 = ManagerConfig_TypeInfo;
      }
      static_fields = v37->static_fields;
      _8__1 = this->fields._loader_5__2;
      this->fields._requestTime_5__3 = v25 + static_fields->TIMEOUT;
      if ( _8__1 )
      {
        this->fields._loadProgress_5__4 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)_8__1,
                                            0);
        goto LABEL_40;
      }
LABEL_46:
      sub_1C372B4(_8__1);
    }
    if ( v23 < this->fields._requestTime_5__3 )
    {
LABEL_40:
      v39 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v39, 0);
      this->fields.__2__current = (Il2CppObject *)v39;
      p__2__current = &this->fields.__2__current;
      sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v39, v41, v42);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
  }
  _8__1 = this->fields._loader_5__2;
  if ( !_8__1 )
    goto LABEL_46;
  if ( UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)_8__1, 0) )
  {
    _8__1 = this->fields._loader_5__2;
    if ( !_8__1 )
      goto LABEL_46;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)_8__1, 0);
    _8__1 = (void *)System_String__IsNullOrEmpty(error, 0);
    if ( ((unsigned __int8)_8__1 & 1) != 0 )
      goto LABEL_27;
    _8__1 = this->fields._loader_5__2;
    if ( !_8__1 )
      goto LABEL_46;
    v29 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)_8__1, 0);
  }
  else
  {
    v29 = (struct System_String_o *)StringLiteral_19435/*"file download time over"*/;
  }
  this->fields._errorMessage_5__5 = v29;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._errorMessage_5__5, (int32_t)v29, v26, v27);
LABEL_27:
  if ( this->fields._errorMessage_5__5 )
  {
    v30 = this->fields.__8__1;
    if ( !v30 )
      goto LABEL_46;
    if ( v30->fields.failedCallback )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorMessage_5__5 = this->fields._errorMessage_5__5;
      v33 = (Il2CppObject *)this->fields.__8__1;
      v34 = (CommonUI_o *)Instance;
      v35 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v35,
        v33,
        Method_DebugTestRootComponent___c__DisplayClass76_0__RequestFileCR_b__0__,
        0);
      if ( !v34 )
        goto LABEL_46;
      *(_QWORD *)&effectDistance.fields.hasValue = 0;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v34,
        (System_String_o *)StringLiteral_4660/*"Connect Script Error"*/,
        errorMessage_5__5,
        v35,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0);
    }
    else
    {
      successCallback = this->fields.successCallback;
      if ( !successCallback )
        goto LABEL_46;
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))successCallback->fields.invoke_impl)(
        successCallback->fields.method_code,
        0,
        successCallback->fields.method);
    }
  }
  else
  {
    _8__1 = this->fields._loader_5__2;
    if ( !_8__1 )
      goto LABEL_46;
    v36 = this->fields.successCallback;
    _8__1 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
              (UnityEngine_Networking_UnityWebRequest_o *)_8__1,
              0);
    if ( !_8__1 )
      goto LABEL_46;
    _8__1 = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)_8__1, 0);
    if ( !v36 )
      goto LABEL_46;
    ((void (__fastcall *)(intptr_t, void *, intptr_t))v36->fields.invoke_impl)(
      v36->fields.method_code,
      _8__1,
      v36->fields.method);
  }
  _8__1 = this->fields._loader_5__2;
  if ( !_8__1 )
    goto LABEL_46;
  UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)_8__1, 0);
  return 0;
}


Il2CppObject *DebugTestRootComponent__RequestFileCR_d__76__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DebugTestRootComponent__RequestFileCR_d__76_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DebugTestRootComponent__RequestFileCR_d__76__System_Collections_IEnumerator_Reset(
        DebugTestRootComponent__RequestFileCR_d__76_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_DebugTestRootComponent__RequestFileCR_d__76_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *DebugTestRootComponent__RequestFileCR_d__76__System_Collections_IEnumerator_get_Current(
        DebugTestRootComponent__RequestFileCR_d__76_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DebugTestRootComponent__RequestFileCR_d__76__System_IDisposable_Dispose(
        DebugTestRootComponent__RequestFileCR_d__76_o *this,
        const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__RequestScriptFileCR_d__75___ctor(
        DebugTestRootComponent__RequestScriptFileCR_d__75_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DebugTestRootComponent__RequestScriptFileCR_d__75__MoveNext(
        DebugTestRootComponent__RequestScriptFileCR_d__75_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct DebugTestRootComponent_o *_4__this; // x20
  Il2CppObject *v5; // x22
  struct DebugTestRootComponent___c__DisplayClass75_0_o **p__8__1; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  char *String_63592568; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *ConnectPath; // x22
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  struct System_String_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x23
  System_Action_object__o *v21; // x22
  const MethodInfo *v22; // x4
  Il2CppObject *v23; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  bool result; // w0
  System_String_o *orgPath_5__2; // x21
  Il2CppObject *v29; // x23
  System_Action_object__o *v30; // x22
  const MethodInfo *v31; // x4
  Il2CppObject *v32; // x0
  Il2CppObject **v33; // x19
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct DebugTestRootComponent___c__DisplayClass75_0_o *_8__1; // x21
  System_String_o *v37; // x1
  CGThumbnailListItem_o *p_fields; // x21
  struct System_String_o *scriptData; // t1
  System_String_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x0
  const MethodInfo *v44; // x4
  __int128 v45; // q0
  __int128 v46; // q1
  struct DebugTestRootComponent___c__DisplayClass75_0_o *v47; // x8
  System_String_o *v48; // x2
  System_String_o *orgData; // x3
  ScriptConnectData_o v50; // [xsp+0h] [xbp-90h] BYREF
  ScriptConnectData_o v51; // [xsp+30h] [xbp-60h]

  if ( (byte_4C404BA & 1) == 0 )
  {
    sub_1C37058(&System_Action_string__TypeInfo);
    sub_1C37058(&char___TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass75_0__RequestScriptFileCR_b__0__);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass75_0__RequestScriptFileCR_b__1__);
    sub_1C37058(&DebugTestRootComponent___c__DisplayClass75_0_TypeInfo);
    sub_1C37058(&StringLiteral_16025/*"\\"*/);
    sub_1C37058(&StringLiteral_1039/*".org"*/);
    sub_1C37058(&StringLiteral_1044/*".txt"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C404BA = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    String_63592568 = (char *)sub_1C37100(char___TypeInfo, 1);
    if ( !String_63592568 )
      goto LABEL_22;
    if ( !*((_DWORD *)String_63592568 + 6) )
      sub_1C372BC(String_63592568);
    *((_WORD *)String_63592568 + 16) = -257;
    String_63592568 = (char *)System_String__CreateString_63592568(0, (System_Char_array *)String_63592568, 0);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_22;
    v37 = (System_String_o *)String_63592568;
    scriptData = _8__1->fields.scriptData;
    p_fields = (CGThumbnailListItem_o *)&_8__1->fields;
    String_63592568 = (char *)scriptData;
    if ( !scriptData )
      goto LABEL_22;
    v40 = System_String__Replace_63608204(
            (System_String_o *)String_63592568,
            v37,
            (System_String_o *)StringLiteral_1/*""*/,
            0);
    p_fields->klass = (CGThumbnailListItem_c *)v40;
    sub_1C36FFC(p_fields, (int32_t)v40, v41, v42);
    if ( !_4__this )
      sub_1C372B4(v43);
    v46 = *(_OWORD *)&_4__this->fields.currentConnectData.fields.ConnectPath;
    v45 = *(_OWORD *)&_4__this->fields.currentConnectData.fields.EndCallback;
    *(_QWORD *)&v51.fields.JumpLine = *(_QWORD *)&_4__this->fields.currentConnectData.fields.JumpLine;
    *(_OWORD *)&v51.fields.ConnectPath = v46;
    *(_OWORD *)&v51.fields.EndCallback = v45;
    v47 = this->fields.__8__1;
    if ( !v47 )
      sub_1C372B4(v43);
    v48 = v47->fields.scriptData;
    orgData = v47->fields.orgData;
    v50 = v51;
    DebugTestRootComponent__StartScript(_4__this, &v50, v48, orgData, v44);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v5 = (Il2CppObject *)sub_1C372A4(DebugTestRootComponent___c__DisplayClass75_0_TypeInfo);
      System_Object___ctor(v5, 0);
      this->fields.__8__1 = (struct DebugTestRootComponent___c__DisplayClass75_0_o *)v5;
      p__8__1 = &this->fields.__8__1;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v5, v7, v8);
      String_63592568 = (char *)this->fields.__8__1;
      if ( String_63592568 )
      {
        *((_QWORD *)String_63592568 + 2) = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)(String_63592568 + 16), 0, v9, v10);
        String_63592568 = (char *)*p__8__1;
        if ( *p__8__1 )
        {
          *((_QWORD *)String_63592568 + 3) = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)(String_63592568 + 24), 0, v12, v13);
          String_63592568 = (char *)System_String__Concat_63599904(
                                      this->fields.connectData.fields.ConnectPath,
                                      (System_String_o *)StringLiteral_16025/*"\\"*/,
                                      this->fields.connectData.fields.ObjectPath,
                                      0);
          if ( this->fields.connectData.fields.ObjectPath )
          {
            ConnectPath = this->fields.connectData.fields.ConnectPath;
            v15 = (System_String_o *)String_63592568;
            v16 = System_String__Replace_63608204(
                    this->fields.connectData.fields.ObjectPath,
                    (System_String_o *)StringLiteral_1044/*".txt"*/,
                    (System_String_o *)StringLiteral_1039/*".org"*/,
                    0);
            v17 = System_String__Concat_63599904(ConnectPath, (System_String_o *)StringLiteral_16025/*"\\"*/, v16, 0);
            this->fields._orgPath_5__2 = v17;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._orgPath_5__2, (int32_t)v17, v18, v19);
            v20 = (Il2CppObject *)this->fields.__8__1;
            v21 = (System_Action_object__o *)sub_1C372A4(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v21,
              v20,
              Method_DebugTestRootComponent___c__DisplayClass75_0__RequestScriptFileCR_b__0__,
              0);
            if ( _4__this )
            {
              v23 = (Il2CppObject *)DebugTestRootComponent__RequestFileCR(
                                      (DebugTestRootComponent_o *)String_63592568,
                                      v15,
                                      (System_Action_string__o *)v21,
                                      this->fields.connectData.fields.ErrorCallback,
                                      v22);
              this->fields.__2__current = v23;
              p__2__current = &this->fields.__2__current;
              sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v23, v25, v26);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
LABEL_22:
      sub_1C372B4(String_63592568);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  v29 = (Il2CppObject *)this->fields.__8__1;
  orgPath_5__2 = this->fields._orgPath_5__2;
  v30 = (System_Action_object__o *)sub_1C372A4(System_Action_string__TypeInfo);
  System_Action_object____ctor(
    v30,
    v29,
    Method_DebugTestRootComponent___c__DisplayClass75_0__RequestScriptFileCR_b__1__,
    0);
  if ( !_4__this )
    goto LABEL_22;
  v32 = (Il2CppObject *)DebugTestRootComponent__RequestFileCR(
                          (DebugTestRootComponent_o *)String_63592568,
                          orgPath_5__2,
                          (System_Action_string__o *)v30,
                          0,
                          v31);
  this->fields.__2__current = v32;
  v33 = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)v33, (int32_t)v32, v34, v35);
  result = 1;
  *((_DWORD *)v33 - 2) = 2;
  return result;
}


Il2CppObject *DebugTestRootComponent__RequestScriptFileCR_d__75__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DebugTestRootComponent__RequestScriptFileCR_d__75_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DebugTestRootComponent__RequestScriptFileCR_d__75__System_Collections_IEnumerator_Reset(
        DebugTestRootComponent__RequestScriptFileCR_d__75_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_DebugTestRootComponent__RequestScriptFileCR_d__75_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *DebugTestRootComponent__RequestScriptFileCR_d__75__System_Collections_IEnumerator_get_Current(
        DebugTestRootComponent__RequestScriptFileCR_d__75_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DebugTestRootComponent__RequestScriptFileCR_d__75__System_IDisposable_Dispose(
        DebugTestRootComponent__RequestScriptFileCR_d__75_o *this,
        const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent___c__DisplayClass113_0___ctor(
        DebugTestRootComponent___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass113_0___StartNoblePhantasm_b__0(
        DebugTestRootComponent___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  DebugTestRootComponent___c__DisplayClass113_0_o *v2; // x19
  struct DebugTestRootComponent_o *_4__this; // x8
  struct DebugTestRootComponent_o *v4; // x8
  UILabel_o *v5; // x19
  System_String_o *v6; // x0

  v2 = this;
  if ( (byte_4C404AC & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UILabel___);
    this = (DebugTestRootComponent___c__DisplayClass113_0_o *)sub_1C37058(&StringLiteral_8430/*"LimitCount:"*/);
    byte_4C404AC = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.ServantLimitCount = (_4__this->fields.ServantLimitCount + 1) % 5,
        (this = (DebugTestRootComponent___c__DisplayClass113_0_o *)v2->fields.limitCountLabel) == 0)
    || (this = (DebugTestRootComponent___c__DisplayClass113_0_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)this,
                                                                    (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UILabel___),
        (v4 = v2->fields.__4__this) == 0)
    || (v5 = (UILabel_o *)this,
        v6 = System_Int32__ToString((int)v4 + 368, 0),
        this = (DebugTestRootComponent___c__DisplayClass113_0_o *)System_String__Concat_63561656(
                                                                    (System_String_o *)StringLiteral_8430/*"LimitCount:"*/,
                                                                    v6,
                                                                    0),
        !v5) )
  {
    sub_1C372B4(this);
  }
  UILabel__set_text(v5, (System_String_o *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass113_0___StartNoblePhantasm_b__1(
        DebugTestRootComponent___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  DebugTestRootComponent___c__DisplayClass113_0_o *v2; // x19
  struct DebugTestRootComponent_o *_4__this; // x8
  struct DebugTestRootComponent_o *v4; // x8

  v2 = this;
  if ( (byte_4C404AD & 1) == 0 )
  {
    this = (DebugTestRootComponent___c__DisplayClass113_0_o *)sub_1C37058(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C404AD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (DebugTestRootComponent___c__DisplayClass113_0_o *)_4__this->fields.NoblePhantasmSelectPanel) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0), (v4 = v2->fields.__4__this) == 0)
    || (this = (DebugTestRootComponent___c__DisplayClass113_0_o *)v4->fields.myFSM) == 0 )
  {
    sub_1C372B4(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


void DebugTestRootComponent___c__DisplayClass113_1___ctor(
        DebugTestRootComponent___c__DisplayClass113_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass113_1___StartNoblePhantasm_b__2(
        DebugTestRootComponent___c__DisplayClass113_1_o *this,
        const MethodInfo *method)
{
  DebugTestRootComponent___c__DisplayClass113_1_o *v2; // x19
  struct DebugTestRootComponent___c__DisplayClass113_0_o *CS___8__locals1; // x8
  struct ServantEntity_o *svt; // x9
  DebugTestRootComponent_o *_4__this; // x19
  __int64 v6; // x20
  __int64 v7; // x21
  const MethodInfo *v8; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v2 = this;
  if ( (byte_4C404AE & 1) == 0 )
  {
    this = (DebugTestRootComponent___c__DisplayClass113_1_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C404AE = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  svt = v2->fields.svt;
  if ( !svt )
    goto LABEL_9;
  _4__this = CS___8__locals1->fields.__4__this;
  v7 = *(_QWORD *)&svt->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&svt->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (DebugTestRootComponent___c__DisplayClass113_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                              v9,
                                                              0);
  if ( !_4__this )
LABEL_9:
    sub_1C372B4(this);
  DebugTestRootComponent__ClickNoblePhantasm(_4__this, (int32_t)this, v8);
}


void DebugTestRootComponent___c__DisplayClass75_0___ctor(
        DebugTestRootComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass75_0___RequestScriptFileCR_b__0(
        DebugTestRootComponent___c__DisplayClass75_0_o *this,
        System_String_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.scriptData = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
}


void DebugTestRootComponent___c__DisplayClass75_0___RequestScriptFileCR_b__1(
        DebugTestRootComponent___c__DisplayClass75_0_o *this,
        System_String_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.orgData = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.orgData, (int32_t)data, (int32_t)method, v3);
}


void DebugTestRootComponent___c__DisplayClass76_0___ctor(
        DebugTestRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass76_0___RequestFileCR_b__0(
        DebugTestRootComponent___c__DisplayClass76_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct System_Action_o *failedCallback; // x8

  failedCallback = this->fields.failedCallback;
  if ( !failedCallback )
    sub_1C372B4(this);
  ((void (__fastcall *)(intptr_t, intptr_t))failedCallback->fields.invoke_impl)(
    failedCallback->fields.method_code,
    failedCallback->fields.method);
}


void DebugTestRootComponent___c__DisplayClass78_0___ctor(
        DebugTestRootComponent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass78_0___StartScript_b__0(
        DebugTestRootComponent___c__DisplayClass78_0_o *this,
        int32_t viewResult,
        int32_t viewJumpLine,
        const MethodInfo *method)
{
  __int64 v7; // x23
  ScriptTextViewMenu_o *scriptTextViewMenu; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct DebugTestRootComponent_o *_4__this; // x20
  System_String_o *scriptData; // x21
  System_Action_o *v13; // x22
  const MethodInfo *v14; // x5
  System_Action_o *_9__3; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Action_o *ErrorCallback; // x8

  if ( (byte_4C404AF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__3__);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass78_1__StartScript_b__2__);
    sub_1C37058(&DebugTestRootComponent___c__DisplayClass78_1_TypeInfo);
    byte_4C404AF = 1;
  }
  v7 = sub_1C372A4(DebugTestRootComponent___c__DisplayClass78_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v9, v10);
  *(_DWORD *)(v7 + 16) = viewJumpLine;
  _4__this = this->fields.__4__this;
  if ( (viewResult & 0xFFFFFFFE) == 2 )
  {
    scriptData = this->fields.scriptData;
    v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)v7,
      Method_DebugTestRootComponent___c__DisplayClass78_1__StartScript_b__2__,
      0);
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__3__,
        0);
      this->fields.__9__3 = _9__3;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v16, v17);
    }
    if ( _4__this )
    {
      DebugTestRootComponent__ScriptCheckAndStart(_4__this, scriptData, 0, v13, _9__3, v14);
      return;
    }
LABEL_15:
    sub_1C372B4(scriptTextViewMenu);
  }
  if ( !_4__this )
    goto LABEL_15;
  scriptTextViewMenu = _4__this->fields.scriptTextViewMenu;
  if ( !scriptTextViewMenu )
    goto LABEL_15;
  ScriptTextViewMenu__Close(scriptTextViewMenu, 0);
  if ( this->fields.connectData.fields.EndCallback )
  {
    ErrorCallback = this->fields.connectData.fields.ErrorCallback;
    if ( !ErrorCallback )
      goto LABEL_15;
    ((void (__fastcall *)(intptr_t, intptr_t))ErrorCallback->fields.invoke_impl)(
      ErrorCallback->fields.method_code,
      ErrorCallback->fields.method);
  }
}


void DebugTestRootComponent___c__DisplayClass78_0___StartScript_b__1(
        DebugTestRootComponent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugTestRootComponent___c__DisplayClass78_0_o *v3; // x19
  __int128 v4; // q0
  __int128 v5; // q1
  struct DebugTestRootComponent_o *_4__this; // x9
  System_String_o *DebugScriptStartMode; // x0
  System_String_o *scriptData; // x21
  System_String_o *orgData; // x20
  System_String_o *v10; // x22
  ScriptManager_c *v11; // x0
  int32_t scriptGenderSettingIndex; // w23
  ScriptManager_CallbackFunc_o *_9__5; // x25
  int32_t JumpLine; // w24
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x26
  DebugTestRootComponent_ScriptReloadCallback_o *v18; // x19
  const MethodInfo *v19; // x3
  ScriptConnectData_o v20; // [xsp+0h] [xbp-C0h] BYREF
  ScriptConnectData_o v21; // [xsp+30h] [xbp-90h]

  v3 = this;
  if ( (byte_4C404B1 & 1) == 0 )
  {
    sub_1C37058(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_OnReloadScript__);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass78_0_o *)sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__5__);
    byte_4C404B1 = 1;
  }
  v4 = *(_OWORD *)&v3->fields.connectData.fields.ConnectPath;
  v5 = *(_OWORD *)&v3->fields.connectData.fields.EndCallback;
  _4__this = v3->fields.__4__this;
  *(_QWORD *)&v21.fields.JumpLine = *(_QWORD *)&v3->fields.connectData.fields.JumpLine;
  *(_OWORD *)&v21.fields.ConnectPath = v4;
  *(_OWORD *)&v21.fields.EndCallback = v5;
  if ( !_4__this )
    sub_1C372B4(this);
  v20 = v21;
  DebugScriptStartMode = DebugTestRootComponent__GetDebugScriptStartMode((DebugTestRootComponent_o *)this, &v20, v2);
  scriptData = v3->fields.scriptData;
  orgData = v3->fields.orgData;
  v10 = DebugScriptStartMode;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C40539 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C40539 = 1;
  }
  v11 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v11 = ScriptManager_TypeInfo;
  }
  scriptGenderSettingIndex = v11->static_fields->scriptGenderSettingIndex;
  _9__5 = v3->fields.__9__5;
  JumpLine = v3->fields.connectData.fields.JumpLine;
  if ( !_9__5 )
  {
    _9__5 = (ScriptManager_CallbackFunc_o *)sub_1C372A4(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__5__,
      0);
    v3->fields.__9__5 = _9__5;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.__9__5, (int32_t)_9__5, v15, v16);
  }
  v17 = (Il2CppObject *)v3->fields.__4__this;
  v18 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_1C372A4(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(v18, v17, Method_DebugTestRootComponent_OnReloadScript__, v19);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay_44669232(v10, scriptData, orgData, scriptGenderSettingIndex, JumpLine, _9__5, v18, 0);
}


void DebugTestRootComponent___c__DisplayClass78_0___StartScript_b__3(
        DebugTestRootComponent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  struct DebugTestRootComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (DebugTestRootComponent___c__DisplayClass78_0_o *)_4__this->fields.scriptTextViewMenu) == 0 )
    sub_1C372B4(this);
  ScriptTextViewMenu__Reset((ScriptTextViewMenu_o *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass78_0___StartScript_b__4(
        DebugTestRootComponent___c__DisplayClass78_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct System_Action_o *ErrorCallback; // x8

  if ( (byte_4C404B0 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C404B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  Instance = (Il2CppObject *)CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0, 0);
  if ( this->fields.connectData.fields.EndCallback )
  {
    ErrorCallback = this->fields.connectData.fields.ErrorCallback;
    if ( ErrorCallback )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))ErrorCallback->fields.invoke_impl)(
        ErrorCallback->fields.method_code,
        ErrorCallback->fields.method);
      return;
    }
LABEL_8:
    sub_1C372B4(Instance);
  }
}


void DebugTestRootComponent___c__DisplayClass78_0___StartScript_b__5(
        DebugTestRootComponent___c__DisplayClass78_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct System_Action_o *ErrorCallback; // x8

  if ( (byte_4C404B2 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C404B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  Instance = (Il2CppObject *)CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0, 0);
  if ( this->fields.connectData.fields.EndCallback )
  {
    ErrorCallback = this->fields.connectData.fields.ErrorCallback;
    if ( ErrorCallback )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))ErrorCallback->fields.invoke_impl)(
        ErrorCallback->fields.method_code,
        ErrorCallback->fields.method);
      return;
    }
LABEL_8:
    sub_1C372B4(Instance);
  }
}


void DebugTestRootComponent___c__DisplayClass78_1___ctor(
        DebugTestRootComponent___c__DisplayClass78_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass78_1___StartScript_b__2(
        DebugTestRootComponent___c__DisplayClass78_1_o *this,
        const MethodInfo *method)
{
  DebugTestRootComponent___c__DisplayClass78_1_o *v2; // x19
  struct DebugTestRootComponent___c__DisplayClass78_0_o *CS___8__locals1; // x8
  struct DebugTestRootComponent_o *_4__this; // x8
  const MethodInfo *v5; // x2
  struct DebugTestRootComponent___c__DisplayClass78_0_o *v6; // x8
  __int64 v7; // x9
  __int128 v8; // q0
  __int128 v9; // q1
  struct DebugTestRootComponent_o *v10; // x8
  struct DebugTestRootComponent___c__DisplayClass78_0_o *v11; // x8
  DebugTestRootComponent___c__DisplayClass78_1_o *v12; // x20
  System_String_o *scriptData; // x21
  System_String_o *orgData; // x22
  struct DebugTestRootComponent___c__DisplayClass78_0_o *v15; // x26
  int32_t viewJumpLine; // w23
  int32_t EndCallback; // w24
  ScriptManager_CallbackFunc_o *_9__4; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x26
  DebugTestRootComponent_ScriptReloadCallback_o *v22; // x19
  const MethodInfo *v23; // x3
  ScriptConnectData_o v24; // [xsp+0h] [xbp-C0h] BYREF
  ScriptConnectData_o v25; // [xsp+30h] [xbp-90h]

  v2 = this;
  if ( (byte_4C404B3 & 1) == 0 )
  {
    sub_1C37058(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_OnReloadScript__);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass78_1_o *)sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__4__);
    byte_4C404B3 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_21;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  this = (DebugTestRootComponent___c__DisplayClass78_1_o *)_4__this->fields.scriptTextViewMenu;
  if ( !this )
    goto LABEL_21;
  ScriptTextViewMenu__Close((ScriptTextViewMenu_o *)this, 0);
  v6 = v2->fields.CS___8__locals1;
  if ( !v6 )
    goto LABEL_21;
  v7 = *(_QWORD *)&v6->fields.connectData.fields.JumpLine;
  v8 = *(_OWORD *)&v6->fields.connectData.fields.ConnectPath;
  v9 = *(_OWORD *)&v6->fields.connectData.fields.EndCallback;
  v10 = v6->fields.__4__this;
  *(_QWORD *)&v25.fields.JumpLine = v7;
  *(_OWORD *)&v25.fields.ConnectPath = v8;
  *(_OWORD *)&v25.fields.EndCallback = v9;
  if ( !v10 )
    goto LABEL_21;
  v24 = v25;
  this = (DebugTestRootComponent___c__DisplayClass78_1_o *)DebugTestRootComponent__GetDebugScriptStartMode(
                                                             (DebugTestRootComponent_o *)this,
                                                             &v24,
                                                             v5);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_21;
  v12 = this;
  scriptData = v11->fields.scriptData;
  orgData = v11->fields.orgData;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C40539 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C40539 = 1;
  }
  this = (DebugTestRootComponent___c__DisplayClass78_1_o *)ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass78_1_o *)ScriptManager_TypeInfo;
  }
  v15 = v2->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_21;
  viewJumpLine = v2->fields.viewJumpLine;
  EndCallback = (int32_t)this[5].fields.CS___8__locals1[1].fields.connectData.fields.EndCallback;
  _9__4 = v15->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (ScriptManager_CallbackFunc_o *)sub_1C372A4(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)v15,
      Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__4__,
      0);
    v15->fields.__9__4 = _9__4;
    sub_1C36FFC((CGThumbnailListItem_o *)&v15->fields.__9__4, (int32_t)_9__4, v19, v20);
    v15 = v2->fields.CS___8__locals1;
    if ( !v15 )
LABEL_21:
      sub_1C372B4(this);
  }
  v21 = (Il2CppObject *)v15->fields.__4__this;
  v22 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_1C372A4(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(v22, v21, Method_DebugTestRootComponent_OnReloadScript__, v23);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay_44669232(
    (System_String_o *)v12,
    scriptData,
    orgData,
    EndCallback,
    viewJumpLine,
    _9__4,
    v22,
    0);
}


void DebugTestRootComponent___c__DisplayClass80_0___ctor(
        DebugTestRootComponent___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass80_0___ScriptCheckAndStart_b__0(
        DebugTestRootComponent___c__DisplayClass80_0_o *this,
        bool b,
        const MethodInfo *method)
{
  struct DebugTestRootComponent_o *_4__this; // x8
  DebugTestRootComponent___c__DisplayClass80_0_o *v4; // x19
  struct System_Action_o *scriptStartAction; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (DebugTestRootComponent___c__DisplayClass80_0_o *)_4__this->fields.scriptBranchMenu) == 0) )
  {
LABEL_5:
    sub_1C372B4(this);
  }
  ScriptBranchMenu__Close((ScriptBranchMenu_o *)this, 0);
  if ( b )
  {
    scriptStartAction = v4->fields.scriptStartAction;
    if ( !scriptStartAction )
      goto LABEL_5;
  }
  else
  {
    scriptStartAction = v4->fields.endCallback;
    if ( !scriptStartAction )
      return;
  }
  ((void (__fastcall *)(intptr_t, intptr_t))scriptStartAction->fields.invoke_impl)(
    scriptStartAction->fields.method_code,
    scriptStartAction->fields.method);
}


void DebugTestRootComponent___c__DisplayClass90_0___ctor(
        DebugTestRootComponent___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass90_0___LoadFileScript_b__0(
        DebugTestRootComponent___c__DisplayClass90_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct System_Action_o *ErrorCallback; // x8

  ErrorCallback = this->fields.connectData.fields.ErrorCallback;
  if ( ErrorCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))ErrorCallback->fields.invoke_impl)(
      ErrorCallback->fields.method_code,
      ErrorCallback->fields.method);
}


void DebugTestRootComponent___c__DisplayClass90_0___LoadFileScript_b__1(
        DebugTestRootComponent___c__DisplayClass90_0_o *this,
        int32_t viewResult,
        int32_t viewJumpLine,
        const MethodInfo *method)
{
  __int64 v7; // x24
  ScriptTextViewMenu_o *scriptTextViewMenu; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct DebugTestRootComponent_o *_4__this; // x20
  System_String_o *scriptData; // x21
  System_String_o *orgScriptData; // x22
  System_Action_o *v14; // x23
  const MethodInfo *v15; // x5
  System_Action_o *_9__4; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Action_o *EndCallback; // x8

  if ( (byte_4C404B4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__4__);
    sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass90_1__LoadFileScript_b__3__);
    sub_1C37058(&DebugTestRootComponent___c__DisplayClass90_1_TypeInfo);
    byte_4C404B4 = 1;
  }
  v7 = sub_1C372A4(DebugTestRootComponent___c__DisplayClass90_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v9, v10);
  *(_DWORD *)(v7 + 16) = viewJumpLine;
  _4__this = this->fields.__4__this;
  if ( (viewResult & 0xFFFFFFFE) == 2 )
  {
    scriptData = this->fields.scriptData;
    orgScriptData = this->fields.orgScriptData;
    v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v7,
      Method_DebugTestRootComponent___c__DisplayClass90_1__LoadFileScript_b__3__,
      0);
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__4__,
        0);
      this->fields.__9__4 = _9__4;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__4, (int32_t)_9__4, v17, v18);
    }
    if ( _4__this )
    {
      DebugTestRootComponent__ScriptCheckAndStart(_4__this, scriptData, orgScriptData, v14, _9__4, v15);
      return;
    }
LABEL_14:
    sub_1C372B4(scriptTextViewMenu);
  }
  if ( !_4__this )
    goto LABEL_14;
  scriptTextViewMenu = _4__this->fields.scriptTextViewMenu;
  if ( !scriptTextViewMenu )
    goto LABEL_14;
  ScriptTextViewMenu__Close(scriptTextViewMenu, 0);
  EndCallback = this->fields.connectData.fields.EndCallback;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void DebugTestRootComponent___c__DisplayClass90_0___LoadFileScript_b__2(
        DebugTestRootComponent___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugTestRootComponent___c__DisplayClass90_0_o *v3; // x19
  struct DebugTestRootComponent_o *_4__this; // x8
  __int128 v5; // q0
  __int128 v6; // q1
  System_String_o *DebugScriptStartMode; // x0
  System_String_o *orgScriptData; // x20
  System_String_o *scriptData; // x21
  System_String_o *v10; // x22
  ScriptManager_c *v11; // x0
  int32_t scriptGenderSettingIndex; // w23
  ScriptManager_CallbackFunc_o *_9__6; // x25
  int32_t JumpLine; // w24
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x26
  DebugTestRootComponent_ScriptReloadCallback_o *v18; // x19
  const MethodInfo *v19; // x3
  ScriptConnectData_o v20; // [xsp+0h] [xbp-C0h] BYREF
  ScriptConnectData_o v21; // [xsp+30h] [xbp-90h]

  v3 = this;
  if ( (byte_4C404B6 & 1) == 0 )
  {
    sub_1C37058(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_OnReloadFileScript__);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass90_0_o *)sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__6__);
    byte_4C404B6 = 1;
  }
  _4__this = v3->fields.__4__this;
  v6 = *(_OWORD *)&v3->fields.connectData.fields.ConnectPath;
  v5 = *(_OWORD *)&v3->fields.connectData.fields.EndCallback;
  *(_QWORD *)&v21.fields.JumpLine = *(_QWORD *)&v3->fields.connectData.fields.JumpLine;
  *(_OWORD *)&v21.fields.ConnectPath = v6;
  *(_OWORD *)&v21.fields.EndCallback = v5;
  if ( !_4__this )
    sub_1C372B4(this);
  v20 = v21;
  DebugScriptStartMode = DebugTestRootComponent__GetDebugScriptStartMode((DebugTestRootComponent_o *)this, &v20, v2);
  scriptData = v3->fields.scriptData;
  orgScriptData = v3->fields.orgScriptData;
  v10 = DebugScriptStartMode;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C40539 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C40539 = 1;
  }
  v11 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v11 = ScriptManager_TypeInfo;
  }
  scriptGenderSettingIndex = v11->static_fields->scriptGenderSettingIndex;
  _9__6 = v3->fields.__9__6;
  JumpLine = v3->fields.connectData.fields.JumpLine;
  if ( !_9__6 )
  {
    _9__6 = (ScriptManager_CallbackFunc_o *)sub_1C372A4(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__6__,
      0);
    v3->fields.__9__6 = _9__6;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.__9__6, (int32_t)_9__6, v15, v16);
  }
  v17 = (Il2CppObject *)v3->fields.__4__this;
  v18 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_1C372A4(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(v18, v17, Method_DebugTestRootComponent_OnReloadFileScript__, v19);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay_44669232(v10, scriptData, orgScriptData, scriptGenderSettingIndex, JumpLine, _9__6, v18, 0);
}


void DebugTestRootComponent___c__DisplayClass90_0___LoadFileScript_b__4(
        DebugTestRootComponent___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DebugTestRootComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (DebugTestRootComponent___c__DisplayClass90_0_o *)_4__this->fields.scriptTextViewMenu) == 0 )
    sub_1C372B4(this);
  ScriptTextViewMenu__Reset((ScriptTextViewMenu_o *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass90_0___LoadFileScript_b__5(
        DebugTestRootComponent___c__DisplayClass90_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct System_Action_o *EndCallback; // x8

  if ( (byte_4C404B5 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C404B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0, 0);
  EndCallback = this->fields.connectData.fields.EndCallback;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void DebugTestRootComponent___c__DisplayClass90_0___LoadFileScript_b__6(
        DebugTestRootComponent___c__DisplayClass90_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct System_Action_o *EndCallback; // x8

  if ( (byte_4C404B7 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C404B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0, 0);
  EndCallback = this->fields.connectData.fields.EndCallback;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void DebugTestRootComponent___c__DisplayClass90_1___ctor(
        DebugTestRootComponent___c__DisplayClass90_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass90_1___LoadFileScript_b__3(
        DebugTestRootComponent___c__DisplayClass90_1_o *this,
        const MethodInfo *method)
{
  DebugTestRootComponent___c__DisplayClass90_1_o *v2; // x19
  struct DebugTestRootComponent___c__DisplayClass90_0_o *CS___8__locals1; // x8
  struct DebugTestRootComponent_o *_4__this; // x8
  const MethodInfo *v5; // x2
  struct DebugTestRootComponent___c__DisplayClass90_0_o *v6; // x8
  struct DebugTestRootComponent_o *v7; // x9
  __int128 v8; // q0
  __int128 v9; // q1
  struct DebugTestRootComponent___c__DisplayClass90_0_o *v10; // x8
  DebugTestRootComponent___c__DisplayClass90_1_o *v11; // x20
  System_String_o *orgScriptData; // x21
  System_String_o *scriptData; // x22
  struct DebugTestRootComponent___c__DisplayClass90_0_o *v14; // x26
  int32_t viewJumpLine; // w23
  int32_t JumpLine; // w24
  ScriptManager_CallbackFunc_o *_9__5; // x25
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x26
  DebugTestRootComponent_ScriptReloadCallback_o *v21; // x19
  const MethodInfo *v22; // x3
  ScriptConnectData_o v23; // [xsp+0h] [xbp-C0h] BYREF
  ScriptConnectData_o v24; // [xsp+30h] [xbp-90h]

  v2 = this;
  if ( (byte_4C404B8 & 1) == 0 )
  {
    sub_1C37058(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DebugTestRootComponent_OnReloadFileScript__);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass90_1_o *)sub_1C37058(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__5__);
    byte_4C404B8 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_21;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  this = (DebugTestRootComponent___c__DisplayClass90_1_o *)_4__this->fields.scriptTextViewMenu;
  if ( !this )
    goto LABEL_21;
  ScriptTextViewMenu__Close((ScriptTextViewMenu_o *)this, 0);
  v6 = v2->fields.CS___8__locals1;
  if ( !v6 )
    goto LABEL_21;
  v7 = v6->fields.__4__this;
  v9 = *(_OWORD *)&v6->fields.connectData.fields.ConnectPath;
  v8 = *(_OWORD *)&v6->fields.connectData.fields.EndCallback;
  *(_QWORD *)&v24.fields.JumpLine = *(_QWORD *)&v6->fields.connectData.fields.JumpLine;
  *(_OWORD *)&v24.fields.ConnectPath = v9;
  *(_OWORD *)&v24.fields.EndCallback = v8;
  if ( !v7 )
    goto LABEL_21;
  v23 = v24;
  this = (DebugTestRootComponent___c__DisplayClass90_1_o *)DebugTestRootComponent__GetDebugScriptStartMode(
                                                             (DebugTestRootComponent_o *)this,
                                                             &v23,
                                                             v5);
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_21;
  v11 = this;
  scriptData = v10->fields.scriptData;
  orgScriptData = v10->fields.orgScriptData;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C40539 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C40539 = 1;
  }
  this = (DebugTestRootComponent___c__DisplayClass90_1_o *)ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass90_1_o *)ScriptManager_TypeInfo;
  }
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_21;
  viewJumpLine = v2->fields.viewJumpLine;
  JumpLine = this[5].fields.CS___8__locals1[1].fields.connectData.fields.JumpLine;
  _9__5 = v14->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (ScriptManager_CallbackFunc_o *)sub_1C372A4(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__5,
      (Il2CppObject *)v14,
      Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__5__,
      0);
    v14->fields.__9__5 = _9__5;
    sub_1C36FFC((CGThumbnailListItem_o *)&v14->fields.__9__5, (int32_t)_9__5, v18, v19);
    v14 = v2->fields.CS___8__locals1;
    if ( !v14 )
LABEL_21:
      sub_1C372B4(this);
  }
  v20 = (Il2CppObject *)v14->fields.__4__this;
  v21 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_1C372A4(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(v21, v20, Method_DebugTestRootComponent_OnReloadFileScript__, v22);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay_44669232(
    (System_String_o *)v11,
    scriptData,
    orgScriptData,
    JumpLine,
    viewJumpLine,
    _9__5,
    v21,
    0);
}