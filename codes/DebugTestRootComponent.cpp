void DebugTestRootComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C54247 & 1) == 0 )
  {
    sub_1C3E564(&DebugTestRootComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_19457/*"file://"*/);
    byte_4C54247 = 1;
  }
  DebugTestRootComponent_TypeInfo->static_fields->oldScheme = (struct System_String_o *)StringLiteral_19457/*"file://"*/;
  sub_1C3E508((CGThumbnailListItem_o *)DebugTestRootComponent_TypeInfo->static_fields, StringLiteral_19457/*"file://"*/, v1, v2);
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
  __int64 v8; // x1

  if ( (byte_4C5420F & 1) == 0 )
  {
    sub_1C3E564(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndBootSelect__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_4973/*"DEBUG_TEST_EXIT_APPLICATION_TITLE"*/);
    sub_1C3E564(&StringLiteral_4972/*"DEBUG_TEST_EXIT_APPLICATION_DITAIL"*/);
    byte_4C5420F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_4973/*"DEBUG_TEST_EXIT_APPLICATION_TITLE"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_4972/*"DEBUG_TEST_EXIT_APPLICATION_DITAIL"*/, 0);
  v6 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v6, (Il2CppObject *)this, Method_DebugTestRootComponent_EndBootSelect__, 0);
  if ( !Instance )
    sub_1C3E7C0(v7, v8);
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
  if ( (byte_4C54211 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C54211 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0);
}


void DebugTestRootComponent__ClearReboot(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C5423A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    byte_4C5423A = 1;
  }
  AssetStorageCache__ClearCache(1, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71136496(0);
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
  __int64 v7; // x1

  if ( (byte_4C54241 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&StringLiteral_21248/*"limitCount"*/);
    sub_1C3E564(&StringLiteral_23302/*"servantId"*/);
    byte_4C54241 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_346C0FC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v5
    || (System_Collections_Generic_Dictionary_object__int___set_Item(
          v5,
          (Il2CppObject *)StringLiteral_23302/*"servantId"*/,
          svtId,
          (const MethodInfo_346CA9C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__),
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v5,
          (Il2CppObject *)StringLiteral_21248/*"limitCount"*/,
          this->fields.ServantLimitCount,
          (const MethodInfo_346CA9C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C3E7C0(Instance, v7);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 10, 1, (Il2CppObject *)v5, 0);
}


bool DebugTestRootComponent__ClientTutorialComplete(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C5423F & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C5423F = 1;
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

  if ( (byte_4C54233 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C54233 = 1;
  }
  backSelectMenu = this->fields.backSelectMenu;
  if ( !backSelectMenu
    || (BackViewListViewMenu__Close(backSelectMenu, (const MethodInfo *)result),
        (backSelectMenu = (BackViewListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C3E7C0(backSelectMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)backSelectMenu, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndBattleCharaSelect(
        DebugTestRootComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C54238 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C54238 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3E7C0(0, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EndBootSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C54210 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C54210 = 1;
  }
  if ( result )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71136496(0);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance || (CommonUI__CloseConfirmDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
      sub_1C3E7C0(Instance, v6);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndChangeDPISelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  DPIListViewMenu_o *dPIListViewMenu; // x0

  if ( (byte_4C54246 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C54246 = 1;
  }
  dPIListViewMenu = this->fields.dPIListViewMenu;
  if ( !dPIListViewMenu
    || (DPIListViewMenu__Close(dPIListViewMenu, (const MethodInfo *)result),
        (dPIListViewMenu = (DPIListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C3E7C0(dPIListViewMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)dPIListViewMenu, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EndConnectScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C5421C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11509/*"SCRIPT_FINISHED"*/);
    byte_4C5421C = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11509/*"SCRIPT_FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndConnectScriptSelect(
        DebugTestRootComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  ScriptConnectMenu_o *connectScriptMenu; // x0
  System_String_o **v6; // x8

  if ( (byte_4C5421A & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11510/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    sub_1C3E564(&StringLiteral_11511/*"SCRIPT_PLAY_SELECT_OK"*/);
    byte_4C5421A = 1;
  }
  connectScriptMenu = this->fields.connectScriptMenu;
  if ( !connectScriptMenu
    || (ScriptConnectMenu__Close(connectScriptMenu, 0),
        (connectScriptMenu = (ScriptConnectMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C3E7C0(connectScriptMenu, result);
  }
  v6 = (System_String_o **)&StringLiteral_11511/*"SCRIPT_PLAY_SELECT_OK"*/;
  if ( !result )
    v6 = (System_String_o **)&StringLiteral_11510/*"SCRIPT_PLAY_SELECT_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)connectScriptMenu, *v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndConnectWebView(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  WebConnectMenu_o *webViewConnectMenu; // x0

  if ( (byte_4C5423C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C5423C = 1;
  }
  webViewConnectMenu = this->fields.webViewConnectMenu;
  if ( !webViewConnectMenu
    || (WebConnectMenu__Close(webViewConnectMenu, 0), (webViewConnectMenu = (WebConnectMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C3E7C0(webViewConnectMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)webViewConnectMenu, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndEquipGraphSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  EquipGraphViewListViewMenu_o *equipGraphSelectMenu; // x0

  if ( (byte_4C54237 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C54237 = 1;
  }
  equipGraphSelectMenu = this->fields.equipGraphSelectMenu;
  if ( !equipGraphSelectMenu
    || (EquipGraphViewListViewMenu__Close(equipGraphSelectMenu, (const MethodInfo *)result),
        (equipGraphSelectMenu = (EquipGraphViewListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C3E7C0(equipGraphSelectMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipGraphSelectMenu, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndFigureSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  FigureViewListViewMenu_o *figureSelectMenu; // x0

  if ( (byte_4C54235 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C54235 = 1;
  }
  figureSelectMenu = this->fields.figureSelectMenu;
  if ( !figureSelectMenu
    || (FigureViewListViewMenu__Close(figureSelectMenu, (const MethodInfo *)result),
        (figureSelectMenu = (FigureViewListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C3E7C0(figureSelectMenu, result);
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
  __int64 v6; // x1

  if ( (byte_4C5420B & 1) == 0 )
  {
    sub_1C3E564(&Method_DebugTestRootComponent_EndTopHome__);
    sub_1C3E564(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C5420B = 1;
  }
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3E7B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndTopHome__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v4,
                     (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !Request_object )
    sub_1C3E7C0(0, v6);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void DebugTestRootComponent__EndNoblePhantasm(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndPlayDefaultScriptSelect(
        DebugTestRootComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  ScriptDefaultFilePlayerMenu_o *playScriptDefaultFileMenu; // x0

  if ( (byte_4C54228 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11510/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    byte_4C54228 = 1;
  }
  playScriptDefaultFileMenu = this->fields.playScriptDefaultFileMenu;
  if ( !playScriptDefaultFileMenu
    || (ScriptDefaultFilePlayerMenu__Close(playScriptDefaultFileMenu, 0),
        (playScriptDefaultFileMenu = (ScriptDefaultFilePlayerMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C3E7C0(playScriptDefaultFileMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playScriptDefaultFileMenu, (System_String_o *)StringLiteral_11510/*"SCRIPT_PLAY_SELECT_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndPlayScriptSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ScriptFilePlayerMenu_o *playScriptFileMenu; // x0

  if ( (byte_4C54226 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11510/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    byte_4C54226 = 1;
  }
  playScriptFileMenu = this->fields.playScriptFileMenu;
  if ( !playScriptFileMenu
    || (ScriptFilePlayerMenu__Close(playScriptFileMenu, 0),
        (playScriptFileMenu = (ScriptFilePlayerMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C3E7C0(playScriptFileMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playScriptFileMenu, (System_String_o *)StringLiteral_11510/*"SCRIPT_PLAY_SELECT_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndReceiptSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ReceiptListViewMenu_o *receiptSelectMenu; // x0
  System_String_o **v6; // x8

  if ( (byte_4C5422F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_10974/*"RECEIPT_SELECT_OK"*/);
    sub_1C3E564(&StringLiteral_10973/*"RECEIPT_SELECT_CANCEL"*/);
    byte_4C5422F = 1;
  }
  receiptSelectMenu = this->fields.receiptSelectMenu;
  if ( !receiptSelectMenu
    || (ReceiptListViewMenu__Close(receiptSelectMenu, (const MethodInfo *)result),
        (receiptSelectMenu = (ReceiptListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C3E7C0(receiptSelectMenu, result);
  }
  v6 = (System_String_o **)&StringLiteral_10974/*"RECEIPT_SELECT_OK"*/;
  if ( !result )
    v6 = (System_String_o **)&StringLiteral_10973/*"RECEIPT_SELECT_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)receiptSelectMenu, *v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndScriptSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ScriptAssetListViewMenu_o *scriptSelectMenu; // x0
  System_String_o **v6; // x8

  if ( (byte_4C54218 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11510/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    sub_1C3E564(&StringLiteral_11511/*"SCRIPT_PLAY_SELECT_OK"*/);
    byte_4C54218 = 1;
  }
  scriptSelectMenu = this->fields.scriptSelectMenu;
  if ( !scriptSelectMenu
    || (ScriptAssetListViewMenu__Close(scriptSelectMenu, 0),
        (scriptSelectMenu = (ScriptAssetListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C3E7C0(scriptSelectMenu, result);
  }
  v6 = (System_String_o **)&StringLiteral_11511/*"SCRIPT_PLAY_SELECT_OK"*/;
  if ( !result )
    v6 = (System_String_o **)&StringLiteral_11510/*"SCRIPT_PLAY_SELECT_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)scriptSelectMenu, *v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndServerSetting(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ServerSettingMenu_o *serverSettingMenu; // x0
  System_String_o **v6; // x8

  if ( (byte_4C54216 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_12013/*"SERVER_SETTING_INPUT_CANCEL"*/);
    sub_1C3E564(&StringLiteral_12014/*"SERVER_SETTING_INPUT_OK"*/);
    byte_4C54216 = 1;
  }
  serverSettingMenu = this->fields.serverSettingMenu;
  if ( !serverSettingMenu
    || (ServerSettingMenu__Close(serverSettingMenu, 0),
        (serverSettingMenu = (ServerSettingMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_1C3E7C0(serverSettingMenu, result);
  }
  v6 = (System_String_o **)&StringLiteral_12014/*"SERVER_SETTING_INPUT_OK"*/;
  if ( !result )
    v6 = (System_String_o **)&StringLiteral_12013/*"SERVER_SETTING_INPUT_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)serverSettingMenu, *v6, 0);
}


void DebugTestRootComponent__EndSoundTest(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  SoundTestMenu_o *soundTestMenu; // x0

  soundTestMenu = this->fields.soundTestMenu;
  if ( !soundTestMenu )
    sub_1C3E7C0(0, method);
  SoundTestMenu__close(soundTestMenu, 0);
}


void DebugTestRootComponent__EndStartPlayScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C5422A & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11509/*"SCRIPT_FINISHED"*/);
    byte_4C5422A = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11509/*"SCRIPT_FINISHED"*/, 0);
}


void DebugTestRootComponent__EndTestRequest(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C5423E & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C5423E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__maskFadein(Instance, 0.1, 0, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
    sub_1C3E7C0(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EndTopHome(
        DebugTestRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C5420C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C5420C = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3E7C0(0, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EntryService(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__ErrorConnectScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C5421D & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11509/*"SCRIPT_FINISHED"*/);
    byte_4C5421D = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11509/*"SCRIPT_FINISHED"*/, 0);
}


void DebugTestRootComponent__ErrorStartPlayScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C5422B & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11509/*"SCRIPT_FINISHED"*/);
    byte_4C5422B = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11509/*"SCRIPT_FINISHED"*/, 0);
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
  __int64 v9; // x1
  System_String_o *v10; // x19
  _DWORD *v11; // x21
  System_String_o *v12; // x20
  System_String_o *DirectoryName; // x0
  System_String_o *v14; // x8
  ScriptManager_c *v16; // x0
  System_String_o *textPathRaw; // x20

  if ( (byte_4C54222 & 1) == 0 )
  {
    sub_1C3E564(&System_IO_Path_TypeInfo);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&StringLiteral_16035/*"\\"*/);
    sub_1C3E564(&StringLiteral_2052/*"AUTO"*/);
    sub_1C3E564(&StringLiteral_2397/*"Assets/AssetStorages/"*/);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54222 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C542D3 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C542D3 = 1;
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
  v10 = FileNameWithoutExtension;
  v11 = StringLiteral_2397/*"Assets/AssetStorages/"*/;
  FileNameWithoutExtension = (System_String_o *)System_String__IndexOf_63693424(
                                                  ConnectPath,
                                                  (System_String_o *)StringLiteral_2397/*"Assets/AssetStorages/"*/,
                                                  5,
                                                  0);
  if ( ((unsigned int)FileNameWithoutExtension & 0x80000000) != 0 )
  {
    v16 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v16 = ScriptManager_TypeInfo;
    }
    textPathRaw = v16->static_fields->textPathRaw;
    goto LABEL_27;
  }
  if ( !v11 )
LABEL_30:
    sub_1C3E7C0(FileNameWithoutExtension, v9);
  v12 = System_String__Substring(ConnectPath, v11[4] + (int)FileNameWithoutExtension, 0);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  DirectoryName = System_IO_Path__GetDirectoryName(v12, 0);
  if ( DirectoryName )
    v14 = System_String__Replace_63683016(
            DirectoryName,
            (System_String_o *)StringLiteral_16035/*"\\"*/,
            (System_String_o *)StringLiteral_1048/*"/"*/,
            0);
  else
    v14 = 0;
  v16 = ScriptManager_TypeInfo;
  if ( v14 )
    textPathRaw = v14;
  else
    textPathRaw = (System_String_o *)StringLiteral_1/*""*/;
LABEL_27:
  if ( !v16->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  return ScriptManager__GetStartModeForAssetStorage(textPathRaw, v10, 0);
}


void DebugTestRootComponent__LoadFileScript(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o **v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x24
  System_String_o *AllText; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_o *v21; // x22
  System_String_o *v22; // x24
  System_String_o *v23; // x0
  System_String_o *v24; // x24
  System_String_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *v28; // x1
  __int64 *v29; // x8
  Il2CppObject *Instance; // x19
  ErrorDialog_ClickDelegate_o *v31; // x21
  System_String_o *v32; // x21
  System_String_o *v33; // x22
  System_Action_o *v34; // x23
  const MethodInfo *v35; // x5
  ScriptTextViewMenu_o *scriptTextViewMenu; // x19
  int32_t v37; // w21
  __int64 v38; // x8
  System_String_o *v39; // x22
  ScriptTextViewMenu_CallbackFunc_o *v40; // x23
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-90h]
  __int128 v42; // [xsp+20h] [xbp-70h]
  __int128 v43; // [xsp+30h] [xbp-60h]
  __int64 v44; // [xsp+40h] [xbp-50h]

  if ( (byte_4C5422D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__0__);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__1__);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__2__);
    sub_1C3E564(&DebugTestRootComponent___c__DisplayClass90_0_TypeInfo);
    sub_1C3E564(&StringLiteral_1039/*".org"*/);
    sub_1C3E564(&StringLiteral_22312/*"not find directory ["*/);
    sub_1C3E564(&StringLiteral_1044/*".txt"*/);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    sub_1C3E564(&StringLiteral_10641/*"Play Script Error"*/);
    sub_1C3E564(&StringLiteral_22313/*"not find file ["*/);
    sub_1C3E564(&StringLiteral_16068/*"]"*/);
    byte_4C5422D = 1;
  }
  v5 = sub_1C3E7B0(DebugTestRootComponent___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v44 = *(_QWORD *)&connectData->fields.JumpLine;
  v42 = *(_OWORD *)&connectData->fields.ConnectPath;
  v43 = *(_OWORD *)&connectData->fields.EndCallback;
  if ( !v5 )
    goto LABEL_25;
  v10 = (System_String_o **)(v5 + 16);
  *(_QWORD *)(v5 + 48) = v44;
  *(_OWORD *)(v5 + 16) = v42;
  *(_OWORD *)(v5 + 32) = v43;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), 0, v8, v9);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 56), (int32_t)this, v11, v12);
  *(_QWORD *)(v5 + 64) = 0;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 64), 0, v13, v14);
  *(_QWORD *)(v5 + 72) = 0;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 72), 0, v15, v16);
  v17 = System_String__Concat_63674716(
          *(System_String_o **)(v5 + 16),
          (System_String_o *)StringLiteral_1048/*"/"*/,
          *(System_String_o **)(v5 + 24),
          0);
  if ( !System_IO_Directory__Exists(*(System_String_o **)(v5 + 16), 0) )
  {
    v28 = *v10;
    v29 = &StringLiteral_22312/*"not find directory ["*/;
LABEL_13:
    v21 = System_String__Concat_63674716((System_String_o *)*v29, v28, (System_String_o *)StringLiteral_16068/*"]"*/, 0);
    goto LABEL_14;
  }
  if ( !System_IO_File__Exists(v17, 0) )
  {
    v29 = &StringLiteral_22313/*"not find file ["*/;
    v28 = v17;
    goto LABEL_13;
  }
  AllText = System_IO_File__ReadAllText(v17, 0);
  *(_QWORD *)(v5 + 64) = AllText;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 64), (int32_t)AllText, v19, v20);
  v21 = 0;
  v6 = *(System_String_o **)(v5 + 24);
  if ( !v6 )
    goto LABEL_25;
  if ( System_String__EndsWith(v6, (System_String_o *)StringLiteral_1044/*".txt"*/, 0) )
  {
    v6 = *(System_String_o **)(v5 + 24);
    if ( !v6 )
      goto LABEL_25;
    v22 = *v10;
    v23 = System_String__Substring_63682392(v6, 0, v6->fields._stringLength - 4, 0);
    v24 = System_String__Concat_63676720(
            v22,
            (System_String_o *)StringLiteral_1048/*"/"*/,
            v23,
            (System_String_o *)StringLiteral_1039/*".org"*/,
            0);
    if ( System_IO_File__Exists(v24, 0) )
    {
      v25 = System_IO_File__ReadAllText(v24, 0);
      *(_QWORD *)(v5 + 72) = v25;
      sub_1C3E508((CGThumbnailListItem_o *)(v5 + 72), (int32_t)v25, v26, v27);
    }
  }
LABEL_14:
  if ( v21 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v31 = (ErrorDialog_ClickDelegate_o *)sub_1C3E7B0(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v31,
      (Il2CppObject *)v5,
      Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__0__,
      0);
    if ( Instance )
    {
      *(_QWORD *)&effectDistance.fields.hasValue = 0;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        (CommonUI_o *)Instance,
        (System_String_o *)StringLiteral_10641/*"Play Script Error"*/,
        v21,
        v31,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0);
      return;
    }
LABEL_25:
    sub_1C3E7C0(v6, v7);
  }
  if ( *(_BYTE *)(v5 + 52) && !*(_BYTE *)(v5 + 53) )
  {
    scriptTextViewMenu = this->fields.scriptTextViewMenu;
    v37 = *(_DWORD *)(v5 + 48);
    if ( *(_QWORD *)(v5 + 72) )
      v38 = 72;
    else
      v38 = 64;
    v39 = *(System_String_o **)(v5 + v38);
    v40 = (ScriptTextViewMenu_CallbackFunc_o *)sub_1C3E7B0(ScriptTextViewMenu_CallbackFunc_TypeInfo);
    ScriptTextViewMenu_CallbackFunc___ctor(
      v40,
      (Il2CppObject *)v5,
      Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__1__,
      0);
    if ( !scriptTextViewMenu )
      goto LABEL_25;
    ScriptTextViewMenu__Open(scriptTextViewMenu, v39, v37, v40, 0);
  }
  else
  {
    v32 = *(System_String_o **)(v5 + 64);
    v33 = *(System_String_o **)(v5 + 72);
    v34 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v5,
      Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__2__,
      0);
    DebugTestRootComponent__ScriptCheckAndStart(this, v32, v33, v34, *(System_Action_o **)(v5 + 32), v35);
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

  if ( (byte_4C5420A & 1) == 0 )
  {
    sub_1C3E564(&Method_DebugTestRootComponent_EndLogin__);
    sub_1C3E564(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C5420A = 1;
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
  if ( !byte_4C542D0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C542D0 = 1;
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
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
    sub_1C3E7C0(myFSM, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v8 = (NetworkManager_LoginCallbackFunc_o *)sub_1C3E7B0(NetworkManager_LoginCallbackFunc_TypeInfo);
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
    sub_1C3E7C0(mergeFileForMoviePlay, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mergeFileForMoviePlay, 1, 0);
}


void DebugTestRootComponent__OnReloadFileScript(
        DebugTestRootComponent_o *this,
        int32_t jumpLine,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  ScriptConnectData_o v10; // [xsp+0h] [xbp-90h]
  ScriptConnectData_o v11; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4C5422C & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C5422C = 1;
  }
  this->fields.currentConnectData.fields.JumpLine = jumpLine;
  this->fields.currentConnectData.fields.IsReboot = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v6);
  ScriptManager__reboot((ScriptManager_o *)Instance, 0, 0);
  *(_QWORD *)&v10.fields.JumpLine = *(_QWORD *)&this->fields.currentConnectData.fields.JumpLine;
  *(_OWORD *)&v10.fields.ConnectPath = *(_OWORD *)&this->fields.currentConnectData.fields.ConnectPath;
  *(_OWORD *)&v10.fields.EndCallback = *(_OWORD *)&this->fields.currentConnectData.fields.EndCallback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.currentConnectData, 0, v7, v8);
  v11 = v10;
  DebugTestRootComponent__LoadFileScript(this, &v11, v9);
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
    sub_1C3E7C0(debugOverrideAsset, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugOverrideAsset, 1, 0);
}


void DebugTestRootComponent__Reboot(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C54239 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C54239 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void DebugTestRootComponent__ReleaseService(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C54214 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4C54214 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
  NetworkManager__ReleseService((NetworkManager_o *)Instance, 0);
}


void DebugTestRootComponent__Reload(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int128 v5; // q0
  __int128 v6; // q1
  const MethodInfo *v7; // x2
  System_Collections_IEnumerator_o *v8; // x0
  ScriptConnectData_o v9; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4C5421F & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C5421F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  ScriptManager__reboot((ScriptManager_o *)Instance, 0, 0);
  v6 = *(_OWORD *)&this->fields.currentConnectData.fields.ConnectPath;
  v5 = *(_OWORD *)&this->fields.currentConnectData.fields.EndCallback;
  *(_QWORD *)&v9.fields.JumpLine = *(_QWORD *)&this->fields.currentConnectData.fields.JumpLine;
  *(_OWORD *)&v9.fields.ConnectPath = v6;
  *(_OWORD *)&v9.fields.EndCallback = v5;
  v8 = DebugTestRootComponent__RequestScriptFileCR(this, &v9, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v8, 0);
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

  if ( (byte_4C54221 & 1) == 0 )
  {
    sub_1C3E564(&DebugTestRootComponent__RequestFileCR_d__76_TypeInfo);
    byte_4C54221 = 1;
  }
  v8 = sub_1C3E7B0(DebugTestRootComponent__RequestFileCR_d__76_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = fullPath;
  sub_1C3E508((CGThumbnailListItem_o *)(v8 + 40), (int32_t)fullPath, v9, v10);
  *(_QWORD *)(v8 + 56) = successCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v8 + 56), (int32_t)successCallback, v11, v12);
  *(_QWORD *)(v8 + 32) = failedCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v8 + 32), (int32_t)failedCallback, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


void DebugTestRootComponent__RequestLogin(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C54230 & 1) == 0 )
  {
    sub_1C3E564(&Method_DebugTestRootComponent_callbackLogin__);
    sub_1C3E564(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4C54230 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C3E7B0(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_callbackLogin__, 0);
  if ( !Instance )
    sub_1C3E7C0(v5, v6);
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

  if ( (byte_4C54220 & 1) == 0 )
  {
    sub_1C3E564(&DebugTestRootComponent__RequestScriptFileCR_d__75_TypeInfo);
    byte_4C54220 = 1;
  }
  v5 = sub_1C3E7B0(DebugTestRootComponent__RequestScriptFileCR_d__75_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 72) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 72), (int32_t)this, v6, v7);
  v9 = *(_OWORD *)&connectData->fields.ConnectPath;
  v8 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)(v5 + 64) = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)(v5 + 32) = v9;
  *(_OWORD *)(v5 + 48) = v8;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), 0, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


bool DebugTestRootComponent__RequestSignup(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugSignupMenu_o *debugSignupMenu; // x0

  debugSignupMenu = this->fields.debugSignupMenu;
  if ( !debugSignupMenu )
    sub_1C3E7C0(0, method);
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
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_List_string___o *v21; // x20
  ScriptBranchMenu_o *scriptBranchMenu; // x19
  ScriptBranchMenu_CallbackFunc_o *v23; // x21

  if ( (byte_4C54224 & 1) == 0 )
  {
    sub_1C3E564(&ScriptBranchMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass80_0__ScriptCheckAndStart_b__0__);
    sub_1C3E564(&DebugTestRootComponent___c__DisplayClass80_0_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54224 = 1;
  }
  v11 = sub_1C3E7B0(DebugTestRootComponent___c__DisplayClass80_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = scriptStartAction;
  v16 = v11 + 24;
  sub_1C3E508((CGThumbnailListItem_o *)(v11 + 24), (int32_t)scriptStartAction, v17, v18);
  *(_QWORD *)(v11 + 32) = endCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v11 + 32), (int32_t)endCallback, v19, v20);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  v12 = ScriptManager__DebugScriptAnalys((System_String_o *)StringLiteral_1/*""*/, scriptData, orgScriptData, 0);
  if ( v12 )
  {
    v21 = v12;
    scriptBranchMenu = this->fields.scriptBranchMenu;
    v23 = (ScriptBranchMenu_CallbackFunc_o *)sub_1C3E7B0(ScriptBranchMenu_CallbackFunc_TypeInfo);
    ScriptBranchMenu_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)v11,
      Method_DebugTestRootComponent___c__DisplayClass80_0__ScriptCheckAndStart_b__0__,
      0);
    if ( scriptBranchMenu )
    {
      ScriptBranchMenu__Open(scriptBranchMenu, v21, v23, 0);
      return;
    }
LABEL_11:
    sub_1C3E7C0(v12, v13);
  }
  if ( !*(_QWORD *)v16 )
    goto LABEL_11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v16 + 64LL),
    *(_QWORD *)(*(_QWORD *)v16 + 40LL));
}


bool DebugTestRootComponent__SetupTakeover(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugSignupMenu_o *debugSignupMenu; // x0

  debugSignupMenu = this->fields.debugSignupMenu;
  if ( !debugSignupMenu )
    sub_1C3E7C0(0, method);
  DebugSignupMenu__SetupTakeover(debugSignupMenu, this->fields.myFSM, v2);
  return 1;
}


bool DebugTestRootComponent__StartBackSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  BackViewListViewMenu_o *backSelectMenu; // x20
  BackViewListViewMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C54232 & 1) == 0 )
  {
    sub_1C3E564(&BackViewListViewMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndBackSelect__);
    byte_4C54232 = 1;
  }
  backSelectMenu = this->fields.backSelectMenu;
  v4 = (BackViewListViewMenu_CallbackFunc_o *)sub_1C3E7B0(BackViewListViewMenu_CallbackFunc_TypeInfo);
  BackViewListViewMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndBackSelect__, v5);
  if ( !backSelectMenu )
    sub_1C3E7C0(v6, v7);
  BackViewListViewMenu__Open(backSelectMenu, v4, v8);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C54245 & 1) == 0 )
  {
    sub_1C3E564(&DPIListViewMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndChangeDPISelect__);
    byte_4C54245 = 1;
  }
  dPIListViewMenu = this->fields.dPIListViewMenu;
  v4 = (DPIListViewMenu_CallbackFunc_o *)sub_1C3E7B0(DPIListViewMenu_CallbackFunc_TypeInfo);
  DPIListViewMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndChangeDPISelect__, v5);
  if ( !dPIListViewMenu )
    sub_1C3E7C0(v6, v7);
  DPIListViewMenu__Open(dPIListViewMenu, v4, v8);
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
  sub_1C3E508((CGThumbnailListItem_o *)p_currentConnectData, 0, (int32_t)method, v3);
  v10 = *(_OWORD *)&connectData->fields.ConnectPath;
  v9 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)&v13.fields.JumpLine = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)&v13.fields.ConnectPath = v10;
  *(_OWORD *)&v13.fields.EndCallback = v9;
  v12 = DebugTestRootComponent__RequestScriptFileCR(this, &v13, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v12, 0);
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

  if ( (byte_4C5421B & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndConnectScriptPlay__);
    sub_1C3E564(&Method_DebugTestRootComponent_ErrorConnectScriptPlay__);
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C5421B = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C542D1 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C542D1 = 1;
  }
  v3 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v3 = ScriptManager_TypeInfo;
  }
  scriptServerSettingAddress = v3->static_fields->scriptServerSettingAddress;
  if ( !byte_4C542D2 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    v3 = ScriptManager_TypeInfo;
    byte_4C542D2 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = ScriptManager_TypeInfo;
  }
  scriptObjectSettingAddress = v3->static_fields->scriptObjectSettingAddress;
  v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_DebugTestRootComponent_EndConnectScriptPlay__, 0);
  v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
  __int64 v6; // x1

  if ( (byte_4C54219 & 1) == 0 )
  {
    sub_1C3E564(&ScriptConnectMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndConnectScriptSelect__);
    byte_4C54219 = 1;
  }
  connectScriptMenu = this->fields.connectScriptMenu;
  v4 = (ScriptConnectMenu_CallbackFunc_o *)sub_1C3E7B0(ScriptConnectMenu_CallbackFunc_TypeInfo);
  ScriptConnectMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndConnectScriptSelect__,
    0);
  if ( !connectScriptMenu )
    sub_1C3E7C0(v5, v6);
  ScriptConnectMenu__Open(connectScriptMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartConnectWebView(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  WebConnectMenu_o *webViewConnectMenu; // x20
  WebConnectMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C5423B & 1) == 0 )
  {
    sub_1C3E564(&WebConnectMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndConnectWebView__);
    byte_4C5423B = 1;
  }
  webViewConnectMenu = this->fields.webViewConnectMenu;
  v4 = (WebConnectMenu_CallbackFunc_o *)sub_1C3E7B0(WebConnectMenu_CallbackFunc_TypeInfo);
  WebConnectMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndConnectWebView__, 0);
  if ( !webViewConnectMenu )
    sub_1C3E7C0(v5, v6);
  WebConnectMenu__Open(webViewConnectMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartDefaultScriptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptDefaultFilePlayerMenu_o *playScriptDefaultFileMenu; // x20
  ScriptDefaultFilePlayerMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C54227 & 1) == 0 )
  {
    sub_1C3E564(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndPlayDefaultScriptSelect__);
    byte_4C54227 = 1;
  }
  playScriptDefaultFileMenu = this->fields.playScriptDefaultFileMenu;
  v4 = (ScriptDefaultFilePlayerMenu_CallbackFunc_o *)sub_1C3E7B0(ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
  ScriptDefaultFilePlayerMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndPlayDefaultScriptSelect__,
    0);
  if ( !playScriptDefaultFileMenu )
    sub_1C3E7C0(v5, v6);
  ScriptDefaultFilePlayerMenu__Open(playScriptDefaultFileMenu, v4, 0);
  return 1;
}


void DebugTestRootComponent__StartEditBattleMock(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C54244 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C54244 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6419/*"FINISHED"*/, 0);
}


bool DebugTestRootComponent__StartEquipGraphSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  EquipGraphViewListViewMenu_o *equipGraphSelectMenu; // x20
  EquipGraphViewListViewMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C54236 & 1) == 0 )
  {
    sub_1C3E564(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndEquipGraphSelect__);
    byte_4C54236 = 1;
  }
  equipGraphSelectMenu = this->fields.equipGraphSelectMenu;
  v4 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_1C3E7B0(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
  EquipGraphViewListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndEquipGraphSelect__,
    v5);
  if ( !equipGraphSelectMenu )
    sub_1C3E7C0(v6, v7);
  EquipGraphViewListViewMenu__Open(equipGraphSelectMenu, v4, v8);
  return 1;
}


bool DebugTestRootComponent__StartEventVoicePlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  EventRewardVoicePlayCountView_o *eventRewardVoicePlayCountView; // x0

  eventRewardVoicePlayCountView = this->fields.eventRewardVoicePlayCountView;
  if ( !eventRewardVoicePlayCountView )
    sub_1C3E7C0(0, method);
  EventRewardVoicePlayCountView__SetUp(eventRewardVoicePlayCountView, method);
  return 1;
}


bool DebugTestRootComponent__StartFigureSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  FigureViewListViewMenu_o *figureSelectMenu; // x20
  FigureViewListViewMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C54234 & 1) == 0 )
  {
    sub_1C3E564(&FigureViewListViewMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndFigureSelect__);
    byte_4C54234 = 1;
  }
  figureSelectMenu = this->fields.figureSelectMenu;
  v4 = (FigureViewListViewMenu_CallbackFunc_o *)sub_1C3E7B0(FigureViewListViewMenu_CallbackFunc_TypeInfo);
  FigureViewListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndFigureSelect__,
    v5);
  if ( !figureSelectMenu )
    sub_1C3E7C0(v6, v7);
  FigureViewListViewMenu__Open(figureSelectMenu, v4, v8);
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
  sub_1C3E508((CGThumbnailListItem_o *)p_currentConnectData, 0, (int32_t)method, v3);
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

  if ( (byte_4C54229 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndStartPlayScriptPlay__);
    sub_1C3E564(&Method_DebugTestRootComponent_ErrorStartPlayScriptPlay__);
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C54229 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C542D4 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C542D4 = 1;
  }
  v3 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v3 = ScriptManager_TypeInfo;
  }
  scriptPlayerPathSettingAddress = v3->static_fields->scriptPlayerPathSettingAddress;
  if ( !byte_4C542D5 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    v3 = ScriptManager_TypeInfo;
    byte_4C542D5 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = ScriptManager_TypeInfo;
  }
  scriptPlayerObjectSettingAddress = v3->static_fields->scriptPlayerObjectSettingAddress;
  v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_DebugTestRootComponent_EndStartPlayScriptPlay__, 0);
  v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_DebugTestRootComponent_ErrorStartPlayScriptPlay__, 0);
  memset(&v14, 0, sizeof(v14));
  ScriptConnectData___ctor(&v14, scriptPlayerPathSettingAddress, scriptPlayerObjectSettingAddress, v6, v7, -1, 0, 0);
  v8 = *(_OWORD *)&v14.fields.ConnectPath;
  v9 = *(_OWORD *)&v14.fields.EndCallback;
  v13 = v14;
  *(_QWORD *)&this->fields.currentConnectData.fields.JumpLine = *(_QWORD *)&v14.fields.JumpLine;
  *(_OWORD *)&this->fields.currentConnectData.fields.ConnectPath = v8;
  *(_OWORD *)&this->fields.currentConnectData.fields.EndCallback = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.currentConnectData, 0, v10, v11);
  v15 = v13;
  DebugTestRootComponent__LoadFileScript(this, &v15, v12);
}


bool DebugTestRootComponent__StartFileScriptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptFilePlayerMenu_o *playScriptFileMenu; // x20
  ScriptFilePlayerMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C54225 & 1) == 0 )
  {
    sub_1C3E564(&ScriptFilePlayerMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndPlayScriptSelect__);
    byte_4C54225 = 1;
  }
  playScriptFileMenu = this->fields.playScriptFileMenu;
  v4 = (ScriptFilePlayerMenu_CallbackFunc_o *)sub_1C3E7B0(ScriptFilePlayerMenu_CallbackFunc_TypeInfo);
  ScriptFilePlayerMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndPlayScriptSelect__,
    0);
  if ( !playScriptFileMenu )
    sub_1C3E7C0(v5, v6);
  ScriptFilePlayerMenu__Open(playScriptFileMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartNoblePhantasm(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  intptr_t NoblePhantasmSelectPanel; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_EventDelegate__o *v12; // x21
  EventDelegate_Callback_o *v13; // x22
  UnityEngine_Transform_o *v14; // x0
  System_Collections_Generic_List_EventDelegate__o *v15; // x21
  EventDelegate_Callback_o *v16; // x22
  Il2CppClass *v17; // x21
  UnityEngine_GameObject_o *v18; // x8
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Object_o *v21; // x19
  UnityEngine_Font_o *trueTypeFont; // x23
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x25
  __int64 v34; // x26
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  ServantEntity_o **v39; // x28
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UnityEngine_GameObject_o *v42; // x25
  __int64 v43; // x0
  __int64 v44; // x1
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  UILabel_o *v47; // x27
  __int64 v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  __int64 v51; // x1
  System_String_o *v52; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x28
  System_String_o *v54; // x2
  System_String_o *v55; // x0
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x27
  EventDelegate_Callback_o *v59; // x28
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  UnityEngine_Transform_o *v64; // x0
  __int64 v65; // x1
  UnityEngine_Transform_o *v66; // x26
  UnityEngine_Transform_o *v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  UnityEngine_Transform_o *v70; // x26
  __int64 v71; // x0
  __int64 v72; // x1
  UnityEngine_Transform_o *v73; // x25
  System_Collections_Generic_IEnumerator_T__c *v74; // x8
  __int64 v75; // x9
  int32_t *v76; // x10
  __int64 v77; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C54240 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntityList__);
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_AddComponent_UIButton___);
    sub_1C3E564(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_1C3E564(&Method_UnityEngine_GameObject_AddComponent_UILabel___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_UIGrid___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
    sub_1C3E564(&UnityEngine_GameObject_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass113_0__StartNoblePhantasm_b__0__);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass113_0__StartNoblePhantasm_b__1__);
    sub_1C3E564(&DebugTestRootComponent___c__DisplayClass113_0_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass113_1__StartNoblePhantasm_b__2__);
    sub_1C3E564(&DebugTestRootComponent___c__DisplayClass113_1_TypeInfo);
    sub_1C3E564(&StringLiteral_4032/*"CancelButton"*/);
    sub_1C3E564(&StringLiteral_8431/*"LimitCountLabel"*/);
    sub_1C3E564(&StringLiteral_14529/*"TitleLabel"*/);
    sub_1C3E564(&StringLiteral_1456/*":"*/);
    byte_4C54240 = 1;
  }
  id = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  v3 = sub_1C3E7B0(DebugTestRootComponent___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_85;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
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
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 24), (int32_t)NodeFromName, v10, v11);
  NoblePhantasmSelectPanel = *(_QWORD *)(v3 + 24);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)NoblePhantasmSelectPanel,
                                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  v12 = *(System_Collections_Generic_List_EventDelegate__o **)(NoblePhantasmSelectPanel + 200);
  v13 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v13,
    (Il2CppObject *)v3,
    Method_DebugTestRootComponent___c__DisplayClass113_0__StartNoblePhantasm_b__0__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(v12, v13, 0);
  NoblePhantasmSelectPanel = (intptr_t)this->fields.NoblePhantasmSelectPanel;
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)NoblePhantasmSelectPanel, 0);
  NoblePhantasmSelectPanel = (intptr_t)TransformHelper__getNodeFromName(
                                         v14,
                                         (System_String_o *)StringLiteral_4032/*"CancelButton"*/,
                                         1,
                                         0);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)NoblePhantasmSelectPanel,
                                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  v15 = *(System_Collections_Generic_List_EventDelegate__o **)(NoblePhantasmSelectPanel + 200);
  v16 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v16,
    (Il2CppObject *)v3,
    Method_DebugTestRootComponent___c__DisplayClass113_0__StartNoblePhantasm_b__1__,
    0);
  EventDelegate__Add(v15, v16, 0);
  NoblePhantasmSelectPanel = (intptr_t)this->fields.NoblePhantasmSelectPanel;
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_85;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)NoblePhantasmSelectPanel,
                                         (const MethodInfo_3151330 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
  if ( !this->fields.NoblePhantasmSelectPanel )
    goto LABEL_85;
  v17 = (Il2CppClass *)NoblePhantasmSelectPanel;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_GameObject__GetComponentInChildren_object_(
                                         this->fields.NoblePhantasmSelectPanel,
                                         (const MethodInfo_3151330 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIGrid___);
  v18 = this->fields.NoblePhantasmSelectPanel;
  if ( !v18 )
    goto LABEL_85;
  v19 = (UnityEngine_Object_o *)NoblePhantasmSelectPanel;
  v20 = UnityEngine_GameObject__get_transform(v18, 0);
  v21 = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v20, (System_String_o *)StringLiteral_14529/*"TitleLabel"*/, 1, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  NoblePhantasmSelectPanel = UnityEngine_Object__op_Inequality(v21, 0, 0);
  trueTypeFont = 0;
  if ( (NoblePhantasmSelectPanel & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_85;
    NoblePhantasmSelectPanel = (intptr_t)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)v21,
                                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    if ( !NoblePhantasmSelectPanel )
      goto LABEL_85;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)NoblePhantasmSelectPanel, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v19, 0, 0) )
    return 1;
  NoblePhantasmSelectPanel = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NoblePhantasmSelectPanel
    || (NoblePhantasmSelectPanel = (intptr_t)DataManager__GetMasterData_object_(
                                               (DataManager_o *)NoblePhantasmSelectPanel,
                                               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (NoblePhantasmSelectPanel = *(_QWORD *)(NoblePhantasmSelectPanel + 40)) == 0 )
  {
LABEL_85:
    sub_1C3E7C0(NoblePhantasmSelectPanel, v5);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)NoblePhantasmSelectPanel,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_33;
      }
      v28 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_33:
      v28 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8))
        & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_40;
      }
      v32 = (__int64)&v29->vtable[*v31];
    }
    else
    {
LABEL_40:
      v32 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v34 = sub_1C3E7B0(DebugTestRootComponent___c__DisplayClass113_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v34, 0);
    if ( !v34 )
      sub_1C3E7C0(v35, v36);
    *(_QWORD *)(v34 + 24) = v3;
    sub_1C3E508((CGThumbnailListItem_o *)(v34 + 24), v3, v37, v38);
    *(_QWORD *)(v34 + 16) = v33;
    v39 = (ServantEntity_o **)(v34 + 16);
    sub_1C3E508((CGThumbnailListItem_o *)(v34 + 16), v33, v40, v41);
    v42 = (UnityEngine_GameObject_o *)sub_1C3E7B0(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor_71323728(v42, 0);
    if ( !v42 )
      sub_1C3E7C0(v43, v44);
    v45 = UnityEngine_GameObject__AddComponent_object_(
            v42,
            (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_UILabel___);
    v47 = (UILabel_o *)v45;
    if ( !v45 )
      sub_1C3E7C0(0, v46);
    UILabel__set_trueTypeFont((UILabel_o *)v45, trueTypeFont, 0);
    UILabel__set_overflowMethod(v47, 2, 0);
    v81.fields.r = 0.0;
    v81.fields.g = 0.0;
    v81.fields.b = 0.0;
    v81.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)v47, v81, 0);
    UILabel__set_fontSize(v47, 24, 0);
    UIWidget__set_pivot((UIWidget_o *)v47, 3, 0);
    if ( !*v39 )
      sub_1C3E7C0(v48, v49);
    id = (*v39)->fields.id;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v80.fields.currentCryptoKey = &id;
    *(_QWORD *)&v80.fields.fakeValue = 0;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v80, v50);
    if ( !*v39 )
      sub_1C3E7C0(0, v51);
    Name = ServantEntity__GetName(*v39, -1, 0, -1, 0, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(Name, 0);
    v55 = System_String__Concat_63674716(v52, (System_String_o *)StringLiteral_1456/*":"*/, v54, 0);
    UILabel__set_text(v47, v55, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__AddWidgetCollider(v42, 0);
    v56 = UnityEngine_GameObject__AddComponent_object_(
            v42,
            (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
    if ( !v56 )
      sub_1C3E7C0(0, v57);
    monitor = (System_Collections_Generic_List_EventDelegate__o *)v56[12].monitor;
    v59 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v59,
      (Il2CppObject *)v34,
      Method_DebugTestRootComponent___c__DisplayClass113_1__StartNoblePhantasm_b__2__,
      0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add(monitor, v59, 0);
    v60 = UnityEngine_GameObject__AddComponent_object_(
            v42,
            (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    if ( !v60 )
      sub_1C3E7C0(0, v61);
    v60[2].klass = v17;
    sub_1C3E508((CGThumbnailListItem_o *)&v60[2], (int32_t)v17, v62, v63);
    v64 = UnityEngine_GameObject__get_transform(v42, 0);
    if ( !v19 )
      sub_1C3E7C0(v64, v65);
    v66 = v64;
    v67 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0);
    if ( !v66 )
      sub_1C3E7C0(v67, v67);
    UnityEngine_Transform__set_parent(v66, v67, 0);
    v68 = (__int64)UnityEngine_GameObject__get_transform(v42, 0);
    v70 = (UnityEngine_Transform_o *)v68;
    if ( !byte_4C506A1 )
    {
      v68 = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    if ( !v70 )
      sub_1C3E7C0(v68, v69);
    UnityEngine_Transform__set_localPosition(v70, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v71 = (__int64)UnityEngine_GameObject__get_transform(v42, 0);
    v73 = (UnityEngine_Transform_o *)v71;
    if ( !byte_4C506A6 )
    {
      v71 = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A6 = 1;
    }
    if ( !v73 )
      sub_1C3E7C0(v71, v72);
    UnityEngine_Transform__set_localScale(v73, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  v74 = Enumerator->klass;
  v75 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v76 = &v74->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      --v75;
      v76 += 4;
      if ( !v75 )
        goto LABEL_70;
    }
    v77 = (__int64)&v74->vtable[*v76];
  }
  else
  {
LABEL_70:
    v77 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v77)(Enumerator, *(_QWORD *)(v77 + 8));
  return 1;
}


bool DebugTestRootComponent__StartReceiptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ReceiptListViewMenu_o *receiptSelectMenu; // x20
  ReceiptListViewMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C5422E & 1) == 0 )
  {
    sub_1C3E564(&ReceiptListViewMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndReceiptSelect__);
    byte_4C5422E = 1;
  }
  receiptSelectMenu = this->fields.receiptSelectMenu;
  v4 = (ReceiptListViewMenu_CallbackFunc_o *)sub_1C3E7B0(ReceiptListViewMenu_CallbackFunc_TypeInfo);
  ReceiptListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndReceiptSelect__,
    v5);
  if ( !receiptSelectMenu )
    sub_1C3E7C0(v6, v7);
  ReceiptListViewMenu__Open(receiptSelectMenu, v4, v8);
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int128 v16; // q0
  __int128 v17; // q1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *v22; // x21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x5
  ScriptTextViewMenu_o *scriptTextViewMenu; // x19
  System_String_o *v26; // x21
  int32_t v27; // w22
  ScriptTextViewMenu_CallbackFunc_o *v28; // x23

  if ( (byte_4C54223 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__0__);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__1__);
    sub_1C3E564(&DebugTestRootComponent___c__DisplayClass78_0_TypeInfo);
    byte_4C54223 = 1;
  }
  v9 = sub_1C3E7B0(DebugTestRootComponent___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = scriptData;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)scriptData, v14, v15);
  v17 = *(_OWORD *)&connectData->fields.ConnectPath;
  v16 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)(v9 + 64) = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)(v9 + 32) = v17;
  *(_OWORD *)(v9 + 48) = v16;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), 0, v18, v19);
  *(_QWORD *)(v9 + 72) = orgData;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 72), (int32_t)orgData, v20, v21);
  if ( !*(_BYTE *)(v9 + 68) || *(_BYTE *)(v9 + 69) )
  {
    v22 = *(System_String_o **)(v9 + 24);
    v23 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v9,
      Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__1__,
      0);
    DebugTestRootComponent__ScriptCheckAndStart(this, v22, 0, v23, *(System_Action_o **)(v9 + 48), v24);
    return;
  }
  scriptTextViewMenu = this->fields.scriptTextViewMenu;
  v26 = *(System_String_o **)(v9 + 24);
  v27 = *(_DWORD *)(v9 + 64);
  v28 = (ScriptTextViewMenu_CallbackFunc_o *)sub_1C3E7B0(ScriptTextViewMenu_CallbackFunc_TypeInfo);
  ScriptTextViewMenu_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__0__,
    0);
  if ( !scriptTextViewMenu )
LABEL_9:
    sub_1C3E7C0(v10, v11);
  ScriptTextViewMenu__Open(scriptTextViewMenu, v26, v27, v28, 0);
}


bool DebugTestRootComponent__StartScriptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptAssetListViewMenu_o *scriptSelectMenu; // x20
  ScriptAssetListViewMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C54217 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndScriptSelect__);
    sub_1C3E564(&StringLiteral_12640/*"ScriptActionEncrypt"*/);
    byte_4C54217 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_12640/*"ScriptActionEncrypt"*/, 0);
  scriptSelectMenu = this->fields.scriptSelectMenu;
  v4 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_1C3E7B0(ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndScriptSelect__,
    0);
  if ( !scriptSelectMenu )
    sub_1C3E7C0(v5, v6);
  ScriptAssetListViewMenu__Open(scriptSelectMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartServerSettingInput(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ServerSettingMenu_o *serverSettingMenu; // x20
  ServerSettingMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C54215 & 1) == 0 )
  {
    sub_1C3E564(&ServerSettingMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndServerSetting__);
    byte_4C54215 = 1;
  }
  serverSettingMenu = this->fields.serverSettingMenu;
  v4 = (ServerSettingMenu_CallbackFunc_o *)sub_1C3E7B0(ServerSettingMenu_CallbackFunc_TypeInfo);
  ServerSettingMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndServerSetting__, 0);
  if ( !serverSettingMenu )
    sub_1C3E7C0(v5, v6);
  ServerSettingMenu__Open(serverSettingMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartSignupInput(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugSignupMenu_o *debugSignupMenu; // x0

  debugSignupMenu = this->fields.debugSignupMenu;
  if ( !debugSignupMenu )
    sub_1C3E7C0(0, method);
  DebugSignupMenu__Open(debugSignupMenu, this->fields.myFSM, v2);
  return 1;
}


bool DebugTestRootComponent__StartSoundCheck(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  SoundCheckMenu_o *soundCheckMenu; // x0

  soundCheckMenu = this->fields.soundCheckMenu;
  if ( !soundCheckMenu )
    sub_1C3E7C0(0, method);
  SoundCheckMenu__Open(soundCheckMenu, 0);
  return 1;
}


bool DebugTestRootComponent__StartSoundTest(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  SoundTestMenu_o *soundTestMenu; // x20
  SoundTestMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C54242 & 1) == 0 )
  {
    sub_1C3E564(&SoundTestMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndSoundTest__);
    byte_4C54242 = 1;
  }
  soundTestMenu = this->fields.soundTestMenu;
  v4 = (SoundTestMenu_CallbackFunc_o *)sub_1C3E7B0(SoundTestMenu_CallbackFunc_TypeInfo);
  SoundTestMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndSoundTest__, 0);
  if ( !soundTestMenu )
    sub_1C3E7C0(v5, v6);
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

  if ( (byte_4C5423D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_EndTestRequest__);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&StringLiteral_13733/*"Test"*/);
    byte_4C5423D = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__InitNotificationInfo(0);
  ScriptManager__AddNotificationInfo(0, 0, (System_String_o *)StringLiteral_13733/*"Test"*/, 0);
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_DebugTestRootComponent_EndTestRequest__, 0);
  ScriptManager__PlayGacha(100100, 0, 1, v3, 0, -1, 0);
  return 1;
}


void DebugTestRootComponent__StartTopInput(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DebugListViewMenu_o *topMenu; // x0
  struct DebugTestRootComponent_DebugTestSceneJumpInfo_o *sceneJumpInfo; // x8

  if ( (byte_4C5420E & 1) == 0 )
  {
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&StringLiteral_4970/*"DEBUG_MENU_SETTING_SERVER"*/);
    byte_4C5420E = 1;
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
    sub_1C3E7C0(topMenu, method);
  }
}


bool DebugTestRootComponent__StartindividualEncryptionMenu(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  return 1;
}


void DebugTestRootComponent__SwitchingAllocMem(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C54212 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C54212 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
  CommonUI__switchingAllocMem((CommonUI_o *)Instance, 0);
}


void DebugTestRootComponent__SwitchingAssetLoad(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C54213 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4C54213 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
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
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *userInfoObject; // x0
  ManagerConfig_c *v5; // x0
  NetworkManager_c *v6; // x0
  UILabel_o *serverInfoLabel; // x20
  NetworkManager_c *v8; // x0
  UILabel_o *userInfoLabel; // x20
  System_String_o *v10; // x0
  UILabel_o *graphicsAPILabel; // x20
  System_String_o *v12; // x0
  UILabel_o *versionInfoLabel; // x20
  AssetManager_c *v14; // x0
  System_String_o *assetBundleMasterVersion; // x22
  UILabel_o *folderInfoLabel; // x20
  NetworkManager_c *v17; // x0
  ManagerConfig_c *v18; // x0
  ManagerConfig_c *v19; // x0
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

  if ( (byte_4C54209 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Rendering_GraphicsDeviceType_TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&StringLiteral_15238/*"UserId "*/);
    sub_1C3E564(&StringLiteral_3919/*"CRIBinaryVersion:{0}"*/);
    sub_1C3E564(&StringLiteral_113/*" "*/);
    sub_1C3E564(&StringLiteral_3921/*"CRIScriptVersion:{0}"*/);
    sub_1C3E564(&StringLiteral_7167/*"Graphics API "*/);
    sub_1C3E564(&StringLiteral_11483/*"SCRIPT"*/);
    sub_1C3E564(&StringLiteral_12772/*"Server "*/);
    sub_1C3E564(&StringLiteral_15705/*"X"*/);
    sub_1C3E564(&StringLiteral_15814/*"["*/);
    sub_1C3E564(&StringLiteral_16068/*"]"*/);
    byte_4C54209 = 1;
  }
  userIdNumber = 0;
  BinaryVersionNumber = 0;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  userInfoObject = this->fields.userInfoObject;
  if ( !userInfoObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(userInfoObject, 0, 0);
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    userInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !userInfoObject )
      goto LABEL_71;
    if ( !NetworkManager__ReadAuth((NetworkManager_o *)userInfoObject, 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      v6 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v6 = NetworkManager_TypeInfo;
      }
      userIdNumber = v6->static_fields->userIdNumber;
      if ( userIdNumber >= 1 )
      {
        userInfoObject = this->fields.userInfoObject;
        if ( !userInfoObject )
          goto LABEL_71;
        UnityEngine_GameObject__SetActive(userInfoObject, 1, 0);
        serverInfoLabel = this->fields.serverInfoLabel;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C542CC )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C542CC = 1;
        }
        v8 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v8 = NetworkManager_TypeInfo;
        }
        userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_63636468(
                                                       (System_String_o *)StringLiteral_12772/*"Server "*/,
                                                       v8->static_fields->userCreateServer,
                                                       0);
        if ( !serverInfoLabel )
          goto LABEL_71;
        UILabel__set_text(serverInfoLabel, (System_String_o *)userInfoObject, 0);
        userInfoLabel = this->fields.userInfoLabel;
        v10 = System_Int64__ToString((int64_t)&userIdNumber, 0);
        userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_63636468(
                                                       (System_String_o *)StringLiteral_15238/*"UserId "*/,
                                                       v10,
                                                       0);
        if ( !userInfoLabel )
          goto LABEL_71;
        UILabel__set_text(userInfoLabel, (System_String_o *)userInfoObject, 0);
        graphicsAPILabel = this->fields.graphicsAPILabel;
        graphicsDeviceType = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
        v26.klass = (System_Enum_c *)UnityEngine_Rendering_GraphicsDeviceType_TypeInfo;
        v26.monitor = (void *)-1LL;
        v12 = System_Enum__ToString(&v26, 0);
        userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_63636468(
                                                       (System_String_o *)StringLiteral_7167/*"Graphics API "*/,
                                                       v12,
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
    if ( !byte_4C542CD )
    {
      sub_1C3E564(&AssetManager_TypeInfo);
      byte_4C542CD = 1;
    }
    v14 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v14 = AssetManager_TypeInfo;
    }
    assetBundleMasterVersion = v14->static_fields->assetBundleMasterVersion;
    if ( !byte_4C542CE )
    {
      sub_1C3E564(&AssetManager_TypeInfo);
      v14 = AssetManager_TypeInfo;
      byte_4C542CE = 1;
    }
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = AssetManager_TypeInfo;
    }
    userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_63674716(
                                                   assetBundleMasterVersion,
                                                   (System_String_o *)StringLiteral_113/*" "*/,
                                                   v14->static_fields->assetBundleDateVersion,
                                                   0);
    if ( !versionInfoLabel )
      goto LABEL_71;
    UILabel__set_text(versionInfoLabel, (System_String_o *)userInfoObject, 0);
    folderInfoLabel = this->fields.folderInfoLabel;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C542CF )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C542CF = 1;
    }
    v17 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v17 = NetworkManager_TypeInfo;
    }
    userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_63674716(
                                                   (System_String_o *)StringLiteral_15814/*"["*/,
                                                   v17->static_fields->dataServerFolder,
                                                   (System_String_o *)StringLiteral_16068/*"]"*/,
                                                   0);
    if ( !folderInfoLabel )
      goto LABEL_71;
    UILabel__set_text(folderInfoLabel, (System_String_o *)userInfoObject, 0);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( System_String__op_Equality(v5->static_fields->ServerDefaultType, (System_String_o *)StringLiteral_11483/*"SCRIPT"*/, 0) )
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
  v18 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v18 = ManagerConfig_TypeInfo;
  }
  if ( !System_String__op_Equality(v18->static_fields->ServerDefaultType, (System_String_o *)StringLiteral_11483/*"SCRIPT"*/, 0) )
    goto LABEL_61;
  v19 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v19 = ManagerConfig_TypeInfo;
  }
  if ( v19->static_fields->IsNetworkMock )
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
    DebugListViewMenu__Init((DebugListViewMenu_o *)userInfoObject, v3);
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
  v23 = (Il2CppObject *)System_Int32__ToString_65146576(
                          (int32_t)&BinaryVersionNumber,
                          (System_String_o *)StringLiteral_15705/*"X"*/,
                          0);
  userInfoObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_3919/*"CRIBinaryVersion:{0}"*/, v23, 0);
  if ( !criBinaryVersionInfoLabel )
    goto LABEL_71;
  UILabel__set_text(criBinaryVersionInfoLabel, (System_String_o *)userInfoObject, 0);
  this->fields.sceneJumpInfo = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sceneJumpInfo, 0, v24, v25);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0);
  userInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !userInfoObject )
LABEL_71:
    sub_1C3E7C0(userInfoObject, v3);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)userInfoObject, (SceneRootComponent_o *)this, 0);
}


void DebugTestRootComponent__beginStartUp(DebugTestRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppClass *v6; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v8; // x10
  int32_t v9; // w1

  if ( (byte_4C5420D & 1) == 0 )
  {
    sub_1C3E564(&DebugTestRootComponent_DebugTestSceneJumpInfo_TypeInfo);
    byte_4C5420D = 1;
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sceneJumpInfo, v9, (int32_t)method, v3);
  }
  SceneRootComponent__beginStartUp_41529716((SceneRootComponent_o *)this, 0);
}


void DebugTestRootComponent__callbackLogin(
        DebugTestRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v8; // x9

  if ( (byte_4C54231 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11086/*"REQUEST_OK"*/);
    sub_1C3E564(&StringLiteral_11083/*"REQUEST_DO_SIGNUP"*/);
    sub_1C3E564(&StringLiteral_18678/*"do_signup"*/);
    byte_4C54231 = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_18678/*"do_signup"*/, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3E7C0(v5, v6);
  v8 = &StringLiteral_11083/*"REQUEST_DO_SIGNUP"*/;
  if ( !v5 )
    v8 = &StringLiteral_11086/*"REQUEST_OK"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0);
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
    sub_1C3E7C0(0, method);
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

  if ( (byte_4C5421E & 1) == 0 )
  {
    sub_1C3E564(&DebugTestRootComponent_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C5421E = 1;
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
        v14 = System_String__Concat_63636468(v5, v13, 0);
        *url = v14;
        sub_1C3E508((CGThumbnailListItem_o *)url, (int32_t)v14, v15, v16);
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
    sub_1C3E7C0(v3, method);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C54243 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_endSetUserServerTime__);
    byte_4C54243 = 1;
  }
  dbgUserServerTimeMenu = this->fields.dbgUserServerTimeMenu;
  v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_endSetUserServerTime__, 0);
  if ( !dbgUserServerTimeMenu )
    sub_1C3E7C0(v5, v6);
  DebugUserServerTimeMenu__open(dbgUserServerTimeMenu, v4, v7);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7FB30;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7FAE8;
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
  if ( (byte_4C54248 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C54248 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void DebugTestRootComponent_ScriptReloadCallback__EndInvoke(
        DebugTestRootComponent_ScriptReloadCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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

  if ( (byte_4C54256 & 1) == 0 )
  {
    sub_1C3E564(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&DebugTestRootComponent_TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass76_0__RequestFileCR_b__0__);
    sub_1C3E564(&DebugTestRootComponent___c__DisplayClass76_0_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C3E564(&StringLiteral_19453/*"file download time over"*/);
    sub_1C3E564(&StringLiteral_4660/*"Connect Script Error"*/);
    byte_4C54256 = 1;
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
    v4 = (Il2CppObject *)sub_1C3E7B0(DebugTestRootComponent___c__DisplayClass76_0_TypeInfo);
    System_Object___ctor(v4, 0);
    this->fields.__8__1 = (struct DebugTestRootComponent___c__DisplayClass76_0_o *)v4;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v4, v5, v6);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_46;
    failedCallback = this->fields.failedCallback;
    *((_QWORD *)_8__1 + 2) = failedCallback;
    sub_1C3E508((CGThumbnailListItem_o *)((char *)_8__1 + 16), (int32_t)failedCallback, v7, v8);
    if ( !DebugTestRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DebugTestRootComponent_TypeInfo);
    DebugTestRootComponent__scriptEscapeURL(&this->fields.fullPath, v11);
    v12 = UnityEngine_Networking_UnityWebRequest__Get(this->fields.fullPath, 0);
    this->fields._loader_5__2 = v12;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields._loader_5__2, (int32_t)v12, v13, v14);
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields._errorMessage_5__5, 0, v15, v16);
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
      sub_1C3E7C0(_8__1, method);
    }
    if ( v23 < this->fields._requestTime_5__3 )
    {
LABEL_40:
      v39 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v39, 0);
      this->fields.__2__current = (Il2CppObject *)v39;
      p__2__current = &this->fields.__2__current;
      sub_1C3E508((CGThumbnailListItem_o *)p__2__current, (int32_t)v39, v41, v42);
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
    v29 = (struct System_String_o *)StringLiteral_19453/*"file download time over"*/;
  }
  this->fields._errorMessage_5__5 = v29;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._errorMessage_5__5, (int32_t)v29, v26, v27);
LABEL_27:
  if ( this->fields._errorMessage_5__5 )
  {
    v30 = this->fields.__8__1;
    if ( !v30 )
      goto LABEL_46;
    if ( v30->fields.failedCallback )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorMessage_5__5 = this->fields._errorMessage_5__5;
      v33 = (Il2CppObject *)this->fields.__8__1;
      v34 = (CommonUI_o *)Instance;
      v35 = (ErrorDialog_ClickDelegate_o *)sub_1C3E7B0(ErrorDialog_ClickDelegate_TypeInfo);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_DebugTestRootComponent__RequestFileCR_d__76_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  System_String_o *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  char *String_63667380; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_o *ConnectPath; // x22
  System_String_o *v16; // x21
  System_String_o *v17; // x0
  struct System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x23
  System_Action_object__o *v22; // x22
  const MethodInfo *v23; // x4
  Il2CppObject *v24; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  bool result; // w0
  System_String_o *orgPath_5__2; // x21
  Il2CppObject *v30; // x23
  System_Action_object__o *v31; // x22
  const MethodInfo *v32; // x4
  Il2CppObject *v33; // x0
  Il2CppObject **v34; // x19
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct DebugTestRootComponent___c__DisplayClass75_0_o *_8__1; // x21
  CGThumbnailListItem_o *p_fields; // x21
  struct System_String_o *scriptData; // t1
  System_String_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x4
  __int128 v46; // q0
  __int128 v47; // q1
  struct DebugTestRootComponent___c__DisplayClass75_0_o *v48; // x8
  System_String_o *v49; // x2
  System_String_o *orgData; // x3
  ScriptConnectData_o v51; // [xsp+0h] [xbp-90h] BYREF
  ScriptConnectData_o v52; // [xsp+30h] [xbp-60h]

  if ( (byte_4C54257 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_string__TypeInfo);
    sub_1C3E564(&char___TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass75_0__RequestScriptFileCR_b__0__);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass75_0__RequestScriptFileCR_b__1__);
    sub_1C3E564(&DebugTestRootComponent___c__DisplayClass75_0_TypeInfo);
    sub_1C3E564(&StringLiteral_16035/*"\\"*/);
    sub_1C3E564(&StringLiteral_1039/*".org"*/);
    sub_1C3E564(&StringLiteral_1044/*".txt"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54257 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    String_63667380 = (char *)sub_1C3E60C(char___TypeInfo, 1);
    if ( !String_63667380 )
      goto LABEL_22;
    if ( !*((_DWORD *)String_63667380 + 6) )
      sub_1C3E7C8(String_63667380, String_63667380);
    *((_WORD *)String_63667380 + 16) = -257;
    String_63667380 = (char *)System_String__CreateString_63667380(0, (System_Char_array *)String_63667380, 0);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_22;
    v9 = (System_String_o *)String_63667380;
    scriptData = _8__1->fields.scriptData;
    p_fields = (CGThumbnailListItem_o *)&_8__1->fields;
    String_63667380 = (char *)scriptData;
    if ( !scriptData )
      goto LABEL_22;
    v40 = System_String__Replace_63683016((System_String_o *)String_63667380, v9, (System_String_o *)StringLiteral_1/*""*/, 0);
    p_fields->klass = (CGThumbnailListItem_c *)v40;
    sub_1C3E508(p_fields, (int32_t)v40, v41, v42);
    if ( !_4__this )
      sub_1C3E7C0(v43, v44);
    v47 = *(_OWORD *)&_4__this->fields.currentConnectData.fields.ConnectPath;
    v46 = *(_OWORD *)&_4__this->fields.currentConnectData.fields.EndCallback;
    *(_QWORD *)&v52.fields.JumpLine = *(_QWORD *)&_4__this->fields.currentConnectData.fields.JumpLine;
    *(_OWORD *)&v52.fields.ConnectPath = v47;
    *(_OWORD *)&v52.fields.EndCallback = v46;
    v48 = this->fields.__8__1;
    if ( !v48 )
      sub_1C3E7C0(v43, v44);
    v49 = v48->fields.scriptData;
    orgData = v48->fields.orgData;
    v51 = v52;
    DebugTestRootComponent__StartScript(_4__this, &v51, v49, orgData, v45);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v5 = (Il2CppObject *)sub_1C3E7B0(DebugTestRootComponent___c__DisplayClass75_0_TypeInfo);
      System_Object___ctor(v5, 0);
      this->fields.__8__1 = (struct DebugTestRootComponent___c__DisplayClass75_0_o *)v5;
      p__8__1 = &this->fields.__8__1;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v5, v7, v8);
      String_63667380 = (char *)this->fields.__8__1;
      if ( String_63667380 )
      {
        *((_QWORD *)String_63667380 + 2) = 0;
        sub_1C3E508((CGThumbnailListItem_o *)(String_63667380 + 16), 0, v10, v11);
        String_63667380 = (char *)*p__8__1;
        if ( *p__8__1 )
        {
          *((_QWORD *)String_63667380 + 3) = 0;
          sub_1C3E508((CGThumbnailListItem_o *)(String_63667380 + 24), 0, v13, v14);
          String_63667380 = (char *)System_String__Concat_63674716(
                                      this->fields.connectData.fields.ConnectPath,
                                      (System_String_o *)StringLiteral_16035/*"\\"*/,
                                      this->fields.connectData.fields.ObjectPath,
                                      0);
          if ( this->fields.connectData.fields.ObjectPath )
          {
            ConnectPath = this->fields.connectData.fields.ConnectPath;
            v16 = (System_String_o *)String_63667380;
            v17 = System_String__Replace_63683016(
                    this->fields.connectData.fields.ObjectPath,
                    (System_String_o *)StringLiteral_1044/*".txt"*/,
                    (System_String_o *)StringLiteral_1039/*".org"*/,
                    0);
            v18 = System_String__Concat_63674716(ConnectPath, (System_String_o *)StringLiteral_16035/*"\\"*/, v17, 0);
            this->fields._orgPath_5__2 = v18;
            sub_1C3E508((CGThumbnailListItem_o *)&this->fields._orgPath_5__2, (int32_t)v18, v19, v20);
            v21 = (Il2CppObject *)this->fields.__8__1;
            v22 = (System_Action_object__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v22,
              v21,
              Method_DebugTestRootComponent___c__DisplayClass75_0__RequestScriptFileCR_b__0__,
              0);
            if ( _4__this )
            {
              v24 = (Il2CppObject *)DebugTestRootComponent__RequestFileCR(
                                      (DebugTestRootComponent_o *)String_63667380,
                                      v16,
                                      (System_Action_string__o *)v22,
                                      this->fields.connectData.fields.ErrorCallback,
                                      v23);
              this->fields.__2__current = v24;
              p__2__current = &this->fields.__2__current;
              sub_1C3E508((CGThumbnailListItem_o *)p__2__current, (int32_t)v24, v26, v27);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
LABEL_22:
      sub_1C3E7C0(String_63667380, v9);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  v30 = (Il2CppObject *)this->fields.__8__1;
  orgPath_5__2 = this->fields._orgPath_5__2;
  v31 = (System_Action_object__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
  System_Action_object____ctor(
    v31,
    v30,
    Method_DebugTestRootComponent___c__DisplayClass75_0__RequestScriptFileCR_b__1__,
    0);
  if ( !_4__this )
    goto LABEL_22;
  v33 = (Il2CppObject *)DebugTestRootComponent__RequestFileCR(
                          (DebugTestRootComponent_o *)String_63667380,
                          orgPath_5__2,
                          (System_Action_string__o *)v31,
                          0,
                          v32);
  this->fields.__2__current = v33;
  v34 = &this->fields.__2__current;
  sub_1C3E508((CGThumbnailListItem_o *)v34, (int32_t)v33, v35, v36);
  result = 1;
  *((_DWORD *)v34 - 2) = 2;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_DebugTestRootComponent__RequestScriptFileCR_d__75_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  if ( (byte_4C54249 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UILabel___);
    this = (DebugTestRootComponent___c__DisplayClass113_0_o *)sub_1C3E564(&StringLiteral_8430/*"LimitCount:"*/);
    byte_4C54249 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.ServantLimitCount = (_4__this->fields.ServantLimitCount + 1) % 5,
        (this = (DebugTestRootComponent___c__DisplayClass113_0_o *)v2->fields.limitCountLabel) == 0)
    || (this = (DebugTestRootComponent___c__DisplayClass113_0_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)this,
                                                                    (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UILabel___),
        (v4 = v2->fields.__4__this) == 0)
    || (v5 = (UILabel_o *)this,
        v6 = System_Int32__ToString((int)v4 + 368, 0),
        this = (DebugTestRootComponent___c__DisplayClass113_0_o *)System_String__Concat_63636468(
                                                                    (System_String_o *)StringLiteral_8430/*"LimitCount:"*/,
                                                                    v6,
                                                                    0),
        !v5) )
  {
    sub_1C3E7C0(this, method);
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
  if ( (byte_4C5424A & 1) == 0 )
  {
    this = (DebugTestRootComponent___c__DisplayClass113_0_o *)sub_1C3E564(&StringLiteral_6419/*"FINISHED"*/);
    byte_4C5424A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (DebugTestRootComponent___c__DisplayClass113_0_o *)_4__this->fields.NoblePhantasmSelectPanel) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0), (v4 = v2->fields.__4__this) == 0)
    || (this = (DebugTestRootComponent___c__DisplayClass113_0_o *)v4->fields.myFSM) == 0 )
  {
    sub_1C3E7C0(this, method);
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
  if ( (byte_4C5424B & 1) == 0 )
  {
    this = (DebugTestRootComponent___c__DisplayClass113_1_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C5424B = 1;
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
  this = (DebugTestRootComponent___c__DisplayClass113_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                                              v9,
                                                              0);
  if ( !_4__this )
LABEL_9:
    sub_1C3E7C0(this, method);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
}


void DebugTestRootComponent___c__DisplayClass75_0___RequestScriptFileCR_b__1(
        DebugTestRootComponent___c__DisplayClass75_0_o *this,
        System_String_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.orgData = data;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.orgData, (int32_t)data, (int32_t)method, v3);
}


void DebugTestRootComponent___c__DisplayClass76_0___ctor(
        DebugTestRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent___c__DisplayClass76_0___RequestFileCR_b__0(
        DebugTestRootComponent___c__DisplayClass76_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct System_Action_o *failedCallback; // x8

  failedCallback = this->fields.failedCallback;
  if ( !failedCallback )
    sub_1C3E7C0(this, isDecide);
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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct DebugTestRootComponent_o *_4__this; // x20
  System_String_o *scriptData; // x21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x5
  System_Action_o *_9__3; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Action_o *ErrorCallback; // x8

  if ( (byte_4C5424C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__3__);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass78_1__StartScript_b__2__);
    sub_1C3E564(&DebugTestRootComponent___c__DisplayClass78_1_TypeInfo);
    byte_4C5424C = 1;
  }
  v7 = sub_1C3E7B0(DebugTestRootComponent___c__DisplayClass78_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 16) = viewJumpLine;
  _4__this = this->fields.__4__this;
  if ( (viewResult & 0xFFFFFFFE) == 2 )
  {
    scriptData = this->fields.scriptData;
    v14 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v7,
      Method_DebugTestRootComponent___c__DisplayClass78_1__StartScript_b__2__,
      0);
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__3__,
        0);
      this->fields.__9__3 = _9__3;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v17, v18);
    }
    if ( _4__this )
    {
      DebugTestRootComponent__ScriptCheckAndStart(_4__this, scriptData, 0, v14, _9__3, v15);
      return;
    }
LABEL_15:
    sub_1C3E7C0(scriptTextViewMenu, v9);
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
  if ( (byte_4C5424E & 1) == 0 )
  {
    sub_1C3E564(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_OnReloadScript__);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass78_0_o *)sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__5__);
    byte_4C5424E = 1;
  }
  v4 = *(_OWORD *)&v3->fields.connectData.fields.ConnectPath;
  v5 = *(_OWORD *)&v3->fields.connectData.fields.EndCallback;
  _4__this = v3->fields.__4__this;
  *(_QWORD *)&v21.fields.JumpLine = *(_QWORD *)&v3->fields.connectData.fields.JumpLine;
  *(_OWORD *)&v21.fields.ConnectPath = v4;
  *(_OWORD *)&v21.fields.EndCallback = v5;
  if ( !_4__this )
    sub_1C3E7C0(this, method);
  v20 = v21;
  DebugScriptStartMode = DebugTestRootComponent__GetDebugScriptStartMode((DebugTestRootComponent_o *)this, &v20, v2);
  scriptData = v3->fields.scriptData;
  orgData = v3->fields.orgData;
  v10 = DebugScriptStartMode;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C542D6 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C542D6 = 1;
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
    _9__5 = (ScriptManager_CallbackFunc_o *)sub_1C3E7B0(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__5__,
      0);
    v3->fields.__9__5 = _9__5;
    sub_1C3E508((CGThumbnailListItem_o *)&v3->fields.__9__5, (int32_t)_9__5, v15, v16);
  }
  v17 = (Il2CppObject *)v3->fields.__4__this;
  v18 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_1C3E7B0(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(v18, v17, Method_DebugTestRootComponent_OnReloadScript__, v19);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay_44725048(v10, scriptData, orgData, scriptGenderSettingIndex, JumpLine, _9__5, v18, 0);
}


void DebugTestRootComponent___c__DisplayClass78_0___StartScript_b__3(
        DebugTestRootComponent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  struct DebugTestRootComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (DebugTestRootComponent___c__DisplayClass78_0_o *)_4__this->fields.scriptTextViewMenu) == 0 )
    sub_1C3E7C0(this, method);
  ScriptTextViewMenu__Reset((ScriptTextViewMenu_o *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass78_0___StartScript_b__4(
        DebugTestRootComponent___c__DisplayClass78_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_Action_o *ErrorCallback; // x8

  if ( (byte_4C5424D & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5424D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C3E7C0(Instance, v5);
  }
}


void DebugTestRootComponent___c__DisplayClass78_0___StartScript_b__5(
        DebugTestRootComponent___c__DisplayClass78_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_Action_o *ErrorCallback; // x8

  if ( (byte_4C5424F & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5424F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C3E7C0(Instance, v5);
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
  if ( (byte_4C54250 & 1) == 0 )
  {
    sub_1C3E564(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_OnReloadScript__);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass78_1_o *)sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__4__);
    byte_4C54250 = 1;
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
  if ( !byte_4C542D6 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C542D6 = 1;
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
    _9__4 = (ScriptManager_CallbackFunc_o *)sub_1C3E7B0(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)v15,
      Method_DebugTestRootComponent___c__DisplayClass78_0__StartScript_b__4__,
      0);
    v15->fields.__9__4 = _9__4;
    sub_1C3E508((CGThumbnailListItem_o *)&v15->fields.__9__4, (int32_t)_9__4, v19, v20);
    v15 = v2->fields.CS___8__locals1;
    if ( !v15 )
LABEL_21:
      sub_1C3E7C0(this, method);
  }
  v21 = (Il2CppObject *)v15->fields.__4__this;
  v22 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_1C3E7B0(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(v22, v21, Method_DebugTestRootComponent_OnReloadScript__, v23);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay_44725048(
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C0(this, b);
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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct DebugTestRootComponent_o *_4__this; // x20
  System_String_o *scriptData; // x21
  System_String_o *orgScriptData; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x5
  System_Action_o *_9__4; // x24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Action_o *EndCallback; // x8

  if ( (byte_4C54251 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__4__);
    sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass90_1__LoadFileScript_b__3__);
    sub_1C3E564(&DebugTestRootComponent___c__DisplayClass90_1_TypeInfo);
    byte_4C54251 = 1;
  }
  v7 = sub_1C3E7B0(DebugTestRootComponent___c__DisplayClass90_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 16) = viewJumpLine;
  _4__this = this->fields.__4__this;
  if ( (viewResult & 0xFFFFFFFE) == 2 )
  {
    scriptData = this->fields.scriptData;
    orgScriptData = this->fields.orgScriptData;
    v15 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)v7,
      Method_DebugTestRootComponent___c__DisplayClass90_1__LoadFileScript_b__3__,
      0);
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__4__,
        0);
      this->fields.__9__4 = _9__4;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__4, (int32_t)_9__4, v18, v19);
    }
    if ( _4__this )
    {
      DebugTestRootComponent__ScriptCheckAndStart(_4__this, scriptData, orgScriptData, v15, _9__4, v16);
      return;
    }
LABEL_14:
    sub_1C3E7C0(scriptTextViewMenu, v9);
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
  if ( (byte_4C54253 & 1) == 0 )
  {
    sub_1C3E564(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_OnReloadFileScript__);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass90_0_o *)sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__6__);
    byte_4C54253 = 1;
  }
  _4__this = v3->fields.__4__this;
  v6 = *(_OWORD *)&v3->fields.connectData.fields.ConnectPath;
  v5 = *(_OWORD *)&v3->fields.connectData.fields.EndCallback;
  *(_QWORD *)&v21.fields.JumpLine = *(_QWORD *)&v3->fields.connectData.fields.JumpLine;
  *(_OWORD *)&v21.fields.ConnectPath = v6;
  *(_OWORD *)&v21.fields.EndCallback = v5;
  if ( !_4__this )
    sub_1C3E7C0(this, method);
  v20 = v21;
  DebugScriptStartMode = DebugTestRootComponent__GetDebugScriptStartMode((DebugTestRootComponent_o *)this, &v20, v2);
  scriptData = v3->fields.scriptData;
  orgScriptData = v3->fields.orgScriptData;
  v10 = DebugScriptStartMode;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C542D6 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C542D6 = 1;
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
    _9__6 = (ScriptManager_CallbackFunc_o *)sub_1C3E7B0(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__6__,
      0);
    v3->fields.__9__6 = _9__6;
    sub_1C3E508((CGThumbnailListItem_o *)&v3->fields.__9__6, (int32_t)_9__6, v15, v16);
  }
  v17 = (Il2CppObject *)v3->fields.__4__this;
  v18 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_1C3E7B0(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(v18, v17, Method_DebugTestRootComponent_OnReloadFileScript__, v19);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay_44725048(v10, scriptData, orgScriptData, scriptGenderSettingIndex, JumpLine, _9__6, v18, 0);
}


void DebugTestRootComponent___c__DisplayClass90_0___LoadFileScript_b__4(
        DebugTestRootComponent___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DebugTestRootComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (DebugTestRootComponent___c__DisplayClass90_0_o *)_4__this->fields.scriptTextViewMenu) == 0 )
    sub_1C3E7C0(this, method);
  ScriptTextViewMenu__Reset((ScriptTextViewMenu_o *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass90_0___LoadFileScript_b__5(
        DebugTestRootComponent___c__DisplayClass90_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_Action_o *EndCallback; // x8

  if ( (byte_4C54252 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C54252 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v5);
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
  __int64 v5; // x1
  struct System_Action_o *EndCallback; // x8

  if ( (byte_4C54254 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C54254 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v5);
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
  if ( (byte_4C54255 & 1) == 0 )
  {
    sub_1C3E564(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DebugTestRootComponent_OnReloadFileScript__);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass90_1_o *)sub_1C3E564(&Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__5__);
    byte_4C54255 = 1;
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
  if ( !byte_4C542D6 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C542D6 = 1;
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
    _9__5 = (ScriptManager_CallbackFunc_o *)sub_1C3E7B0(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__5,
      (Il2CppObject *)v14,
      Method_DebugTestRootComponent___c__DisplayClass90_0__LoadFileScript_b__5__,
      0);
    v14->fields.__9__5 = _9__5;
    sub_1C3E508((CGThumbnailListItem_o *)&v14->fields.__9__5, (int32_t)_9__5, v18, v19);
    v14 = v2->fields.CS___8__locals1;
    if ( !v14 )
LABEL_21:
      sub_1C3E7C0(this, method);
  }
  v20 = (Il2CppObject *)v14->fields.__4__this;
  v21 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_1C3E7B0(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(v21, v20, Method_DebugTestRootComponent_OnReloadFileScript__, v22);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay_44725048(
    (System_String_o *)v11,
    scriptData,
    orgScriptData,
    JumpLine,
    viewJumpLine,
    _9__5,
    v21,
    0);
}