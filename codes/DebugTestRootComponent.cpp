void DebugTestRootComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596DC0F & 1) == 0 )
  {
    sub_2213A60(&DebugTestRootComponent_TypeInfo);
    sub_2213A60(&StringLiteral_20347/*"file://"*/);
    byte_596DC0F = 1;
  }
  v7 = StringLiteral_20347/*"file://"*/;
  DebugTestRootComponent_TypeInfo->static_fields->oldScheme = (struct System_String_o *)StringLiteral_20347/*"file://"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)DebugTestRootComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  DebugTestRootComponent_TypeInfo->static_fields->SendReceiptErrorFlag = 0;
}


void DebugTestRootComponent___ctor(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


bool DebugTestRootComponent__BootSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  CommonConfirmDialog_ClickDelegate_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_596DBD5 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndBootSelect__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_5159/*"DEBUG_TEST_EXIT_APPLICATION_TITLE"*/);
    sub_2213A60(&StringLiteral_5158/*"DEBUG_TEST_EXIT_APPLICATION_DITAIL"*/);
    byte_596DBD5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5159/*"DEBUG_TEST_EXIT_APPLICATION_TITLE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5158/*"DEBUG_TEST_EXIT_APPLICATION_DITAIL"*/, 0);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v8, (Il2CppObject *)this, Method_DebugTestRootComponent_EndBootSelect__, 0);
  if ( !Instance )
    sub_2213CDC(v9, v10);
  CommonUI__OpenConfirmDialog((CommonUI_o *)Instance, v6, v7, v8, 0, 0, 0, 0);
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
  __int64 v2; // x2

  if ( (byte_596DBD7 & 1) == 0 )
  {
    sub_2213A60(&DataManager_TypeInfo);
    byte_596DBD7 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  DataManager__ClearCacheAll(0);
}


void DebugTestRootComponent__ClearReboot(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_596DC02 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    byte_596DC02 = 1;
  }
  AssetStorageCache__ClearCache(1, 0);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v2, v3);
  UnityEngine_Application__Quit_83177108(0);
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

  if ( (byte_596DC09 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&StringLiteral_22303/*"limitCount"*/);
    sub_2213A60(&StringLiteral_24521/*"servantId"*/);
    byte_596DC09 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v5
    || (System_Collections_Generic_Dictionary_object__int___set_Item(
          v5,
          (Il2CppObject *)StringLiteral_24521/*"servantId"*/,
          svtId,
          (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__),
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v5,
          (Il2CppObject *)StringLiteral_22303/*"limitCount"*/,
          this->fields.ServantLimitCount,
          (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v7);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 10, 1, (Il2CppObject *)v5, 0);
}


bool DebugTestRootComponent__ClientTutorialComplete(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596DC07 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596DC07 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  TutorialFlag__CompleteProgress(0);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndBackSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  BackViewListViewMenu_o *backSelectMenu; // x0

  if ( (byte_596DBF9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DBF9 = 1;
  }
  backSelectMenu = this->fields.backSelectMenu;
  if ( !backSelectMenu
    || (BackViewListViewMenu__Close(backSelectMenu, (const MethodInfo *)result),
        (backSelectMenu = (BackViewListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_2213CDC(backSelectMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)backSelectMenu, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndBattleCharaSelect(
        DebugTestRootComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_596DC00 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DC00 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_2213CDC(0, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndBootSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596DBD6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DBD6 = 1;
  }
  if ( result )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, result, method);
    UnityEngine_Application__Quit_83177108(0);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance || (CommonUI__CloseConfirmDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
      sub_2213CDC(Instance, v6);
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndChangeDPISelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  DPIListViewMenu_o *dPIListViewMenu; // x0

  if ( (byte_596DC0E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DC0E = 1;
  }
  dPIListViewMenu = this->fields.dPIListViewMenu;
  if ( !dPIListViewMenu
    || (DPIListViewMenu__Close(dPIListViewMenu, (const MethodInfo *)result),
        (dPIListViewMenu = (DPIListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_2213CDC(dPIListViewMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)dPIListViewMenu, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EndConnectScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_596DBE2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12015/*"SCRIPT_FINISHED"*/);
    byte_596DBE2 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_12015/*"SCRIPT_FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndConnectScriptSelect(
        DebugTestRootComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  ScriptConnectMenu_o *connectScriptMenu; // x0
  __int64 *v6; // x8

  if ( (byte_596DBE0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12016/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    sub_2213A60(&StringLiteral_12017/*"SCRIPT_PLAY_SELECT_OK"*/);
    byte_596DBE0 = 1;
  }
  connectScriptMenu = this->fields.connectScriptMenu;
  if ( !connectScriptMenu )
    goto LABEL_10;
  ScriptConnectMenu__Close(connectScriptMenu, 0);
  connectScriptMenu = (ScriptConnectMenu_o *)this->fields.myFSM;
  if ( !result )
  {
    if ( connectScriptMenu )
    {
      v6 = &StringLiteral_12016/*"SCRIPT_PLAY_SELECT_CANCEL"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(connectScriptMenu, result);
  }
  if ( !connectScriptMenu )
    goto LABEL_10;
  v6 = &StringLiteral_12017/*"SCRIPT_PLAY_SELECT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)connectScriptMenu, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndConnectWebView(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  WebConnectMenu_o *webViewConnectMenu; // x0

  if ( (byte_596DC04 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DC04 = 1;
  }
  webViewConnectMenu = this->fields.webViewConnectMenu;
  if ( !webViewConnectMenu
    || (WebConnectMenu__Close(webViewConnectMenu, 0), (webViewConnectMenu = (WebConnectMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_2213CDC(webViewConnectMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)webViewConnectMenu, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndEquipGraphSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  EquipGraphViewListViewMenu_o *equipGraphSelectMenu; // x0

  if ( (byte_596DBFF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DBFF = 1;
  }
  equipGraphSelectMenu = this->fields.equipGraphSelectMenu;
  if ( !equipGraphSelectMenu
    || (EquipGraphViewListViewMenu__Close(equipGraphSelectMenu, (const MethodInfo *)result),
        (equipGraphSelectMenu = (EquipGraphViewListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_2213CDC(equipGraphSelectMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipGraphSelectMenu, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndFigureSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  FigureViewListViewMenu_o *figureSelectMenu; // x0

  if ( (byte_596DBFB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DBFB = 1;
  }
  figureSelectMenu = this->fields.figureSelectMenu;
  if ( !figureSelectMenu
    || (FigureViewListViewMenu__Close(figureSelectMenu, (const MethodInfo *)result),
        (figureSelectMenu = (FigureViewListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_2213CDC(figureSelectMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)figureSelectMenu, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndImageSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ImageViewListViewMenu_o *imageSelectMenu; // x0

  if ( (byte_596DBFD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DBFD = 1;
  }
  imageSelectMenu = this->fields.imageSelectMenu;
  if ( !imageSelectMenu
    || (ImageViewListViewMenu__Close(imageSelectMenu, (const MethodInfo *)result),
        (imageSelectMenu = (ImageViewListViewMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_2213CDC(imageSelectMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)imageSelectMenu, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EndLogin(
        DebugTestRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_596DBD1 & 1) == 0 )
  {
    sub_2213A60(&Method_DebugTestRootComponent_EndTopHome__);
    sub_2213A60(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596DBD1 = 1;
  }
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndTopHome__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  Request_object = NetworkManager__getRequest_object_(
                     v4,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v8);
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

  if ( (byte_596DBEE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12016/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    byte_596DBEE = 1;
  }
  playScriptDefaultFileMenu = this->fields.playScriptDefaultFileMenu;
  if ( !playScriptDefaultFileMenu
    || (ScriptDefaultFilePlayerMenu__Close(playScriptDefaultFileMenu, 0),
        (playScriptDefaultFileMenu = (ScriptDefaultFilePlayerMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_2213CDC(playScriptDefaultFileMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playScriptDefaultFileMenu, (System_String_o *)StringLiteral_12016/*"SCRIPT_PLAY_SELECT_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndPlayScriptSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ScriptFilePlayerMenu_o *playScriptFileMenu; // x0

  if ( (byte_596DBEC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12016/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    byte_596DBEC = 1;
  }
  playScriptFileMenu = this->fields.playScriptFileMenu;
  if ( !playScriptFileMenu
    || (ScriptFilePlayerMenu__Close(playScriptFileMenu, 0),
        (playScriptFileMenu = (ScriptFilePlayerMenu_o *)this->fields.myFSM) == 0) )
  {
    sub_2213CDC(playScriptFileMenu, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playScriptFileMenu, (System_String_o *)StringLiteral_12016/*"SCRIPT_PLAY_SELECT_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndReceiptSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ReceiptListViewMenu_o *receiptSelectMenu; // x0
  __int64 *v6; // x8

  if ( (byte_596DBF5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11449/*"RECEIPT_SELECT_OK"*/);
    sub_2213A60(&StringLiteral_11448/*"RECEIPT_SELECT_CANCEL"*/);
    byte_596DBF5 = 1;
  }
  receiptSelectMenu = this->fields.receiptSelectMenu;
  if ( !receiptSelectMenu )
    goto LABEL_10;
  ReceiptListViewMenu__Close(receiptSelectMenu, 0);
  receiptSelectMenu = (ReceiptListViewMenu_o *)this->fields.myFSM;
  if ( !result )
  {
    if ( receiptSelectMenu )
    {
      v6 = &StringLiteral_11448/*"RECEIPT_SELECT_CANCEL"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(receiptSelectMenu, result);
  }
  if ( !receiptSelectMenu )
    goto LABEL_10;
  v6 = &StringLiteral_11449/*"RECEIPT_SELECT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)receiptSelectMenu, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndScriptSelect(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ScriptAssetListViewMenu_o *scriptSelectMenu; // x0
  __int64 *v6; // x8

  if ( (byte_596DBDE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12016/*"SCRIPT_PLAY_SELECT_CANCEL"*/);
    sub_2213A60(&StringLiteral_12017/*"SCRIPT_PLAY_SELECT_OK"*/);
    byte_596DBDE = 1;
  }
  scriptSelectMenu = this->fields.scriptSelectMenu;
  if ( !scriptSelectMenu )
    goto LABEL_10;
  ScriptAssetListViewMenu__Close(scriptSelectMenu, 0);
  scriptSelectMenu = (ScriptAssetListViewMenu_o *)this->fields.myFSM;
  if ( !result )
  {
    if ( scriptSelectMenu )
    {
      v6 = &StringLiteral_12016/*"SCRIPT_PLAY_SELECT_CANCEL"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(scriptSelectMenu, result);
  }
  if ( !scriptSelectMenu )
    goto LABEL_10;
  v6 = &StringLiteral_12017/*"SCRIPT_PLAY_SELECT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)scriptSelectMenu, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent__EndServerSetting(DebugTestRootComponent_o *this, bool result, const MethodInfo *method)
{
  ServerSettingMenu_o *serverSettingMenu; // x0
  __int64 *v6; // x8

  if ( (byte_596DBDC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12526/*"SERVER_SETTING_INPUT_CANCEL"*/);
    sub_2213A60(&StringLiteral_12527/*"SERVER_SETTING_INPUT_OK"*/);
    byte_596DBDC = 1;
  }
  serverSettingMenu = this->fields.serverSettingMenu;
  if ( !serverSettingMenu )
    goto LABEL_10;
  ServerSettingMenu__Close(serverSettingMenu, 0);
  serverSettingMenu = (ServerSettingMenu_o *)this->fields.myFSM;
  if ( !result )
  {
    if ( serverSettingMenu )
    {
      v6 = &StringLiteral_12526/*"SERVER_SETTING_INPUT_CANCEL"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(serverSettingMenu, result);
  }
  if ( !serverSettingMenu )
    goto LABEL_10;
  v6 = &StringLiteral_12527/*"SERVER_SETTING_INPUT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)serverSettingMenu, (System_String_o *)*v6, 0);
}


void DebugTestRootComponent__EndSoundTest(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  SoundTestMenu_o *soundTestMenu; // x0

  soundTestMenu = this->fields.soundTestMenu;
  if ( !soundTestMenu )
    sub_2213CDC(0, method);
  SoundTestMenu__close(soundTestMenu, 0);
}


void DebugTestRootComponent__EndStartPlayScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_596DBF0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12015/*"SCRIPT_FINISHED"*/);
    byte_596DBF0 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_12015/*"SCRIPT_FINISHED"*/, 0);
}


void DebugTestRootComponent__EndTestRequest(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596DC06 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DC06 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__maskFadein(Instance, 0.1, 0, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
    sub_2213CDC(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EndTopHome(
        DebugTestRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_596DBD2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DBD2 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_2213CDC(0, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
}


void DebugTestRootComponent__EntryService(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__ErrorConnectScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_596DBE3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12015/*"SCRIPT_FINISHED"*/);
    byte_596DBE3 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_12015/*"SCRIPT_FINISHED"*/, 0);
}


void DebugTestRootComponent__ErrorStartPlayScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_596DBF1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12015/*"SCRIPT_FINISHED"*/);
    byte_596DBF1 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_12015/*"SCRIPT_FINISHED"*/, 0);
}


System_String_o *DebugTestRootComponent__GetDebugScriptStartMode(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        const MethodInfo *method)
{
  ScriptManager_c *v4; // x0
  System_String_o *scriptStartModeSettingName; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *ObjectPath; // x19
  System_String_o *ConnectPath; // x20
  System_String_o *FileNameWithoutExtension; // x0
  __int64 v11; // x1
  System_String_o *v12; // x19
  _DWORD *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *v17; // x20
  System_String_o *DirectoryName; // x0
  System_String_o *v19; // x8
  ScriptManager_c *v21; // x0
  System_String_o *textPathRaw; // x20

  if ( (byte_596DBE8 & 1) == 0 )
  {
    sub_2213A60(&System_IO_Path_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&StringLiteral_16657/*"\\"*/);
    sub_2213A60(&StringLiteral_2150/*"AUTO"*/);
    sub_2213A60(&StringLiteral_2502/*"Assets/AssetStorages/"*/);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DBE8 = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, connectData, method);
  if ( !byte_596DC8B )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DC8B = 1;
  }
  v4 = ScriptManager_TypeInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, connectData, method);
    v4 = ScriptManager_TypeInfo;
  }
  scriptStartModeSettingName = v4->static_fields->scriptStartModeSettingName;
  if ( !System_String__op_Equality(scriptStartModeSettingName, (System_String_o *)StringLiteral_2150/*"AUTO"*/, 0) )
    return scriptStartModeSettingName;
  ConnectPath = connectData->fields.ConnectPath;
  ObjectPath = connectData->fields.ObjectPath;
  if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v6, v7);
  FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(ObjectPath, 0);
  if ( !ConnectPath )
    goto LABEL_30;
  v12 = FileNameWithoutExtension;
  v13 = StringLiteral_2502/*"Assets/AssetStorages/"*/;
  FileNameWithoutExtension = (System_String_o *)System_String__IndexOf_75713748(
                                                  ConnectPath,
                                                  (System_String_o *)StringLiteral_2502/*"Assets/AssetStorages/"*/,
                                                  5,
                                                  0);
  if ( ((unsigned int)FileNameWithoutExtension & 0x80000000) != 0 )
  {
    v21 = ScriptManager_TypeInfo;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v11, v14);
      v21 = ScriptManager_TypeInfo;
    }
    textPathRaw = v21->static_fields->textPathRaw;
    goto LABEL_27;
  }
  if ( !v13 )
LABEL_30:
    sub_2213CDC(FileNameWithoutExtension, v11);
  v17 = System_String__Substring(ConnectPath, v13[4] + (int)FileNameWithoutExtension, 0);
  if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v15, v16);
  DirectoryName = System_IO_Path__GetDirectoryName(v17, 0);
  if ( DirectoryName )
    v19 = System_String__Replace_75703400(
            DirectoryName,
            (System_String_o *)StringLiteral_16657/*"\\"*/,
            (System_String_o *)StringLiteral_1123/*"/"*/,
            0);
  else
    v19 = 0;
  v21 = ScriptManager_TypeInfo;
  if ( v19 )
    textPathRaw = v19;
  else
    textPathRaw = (System_String_o *)StringLiteral_1/*""*/;
LABEL_27:
  if ( !*(&v21->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v21, v11, v14);
  return ScriptManager__GetStartModeForAssetStorage(textPathRaw, v12, 0);
}


void DebugTestRootComponent__LoadFileScript(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int128 v14; // q0
  __int128 v15; // q1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x23
  System_String_o *AllText; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x22
  System_String_o *v43; // x23
  System_String_o *v44; // x0
  System_String_o *v45; // x23
  System_String_o *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 *v53; // x8
  System_String_o *v54; // x1
  Il2CppObject *Instance; // x19
  ErrorDialog_ClickDelegate_o *v56; // x21
  System_String_o *v57; // x21
  System_String_o *v58; // x22
  System_Action_o *v59; // x23
  const MethodInfo *v60; // x5
  ScriptTextViewMenu_o *scriptTextViewMenu; // x19
  int32_t v62; // w22
  __int64 v63; // x8
  System_String_o *v64; // x21
  ScriptTextViewMenu_CallbackFunc_o *v65; // x23
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]

  if ( (byte_596DBF3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__0__);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__1__);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__2__);
    sub_2213A60(&DebugTestRootComponent___c__DisplayClass91_0_TypeInfo);
    sub_2213A60(&StringLiteral_1114/*".org"*/);
    sub_2213A60(&StringLiteral_23421/*"not find directory ["*/);
    sub_2213A60(&StringLiteral_1119/*".txt"*/);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    sub_2213A60(&StringLiteral_11088/*"Play Script Error"*/);
    sub_2213A60(&StringLiteral_23422/*"not find file ["*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_596DBF3 = 1;
  }
  v5 = sub_2213CCC(DebugTestRootComponent___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  v15 = *(_OWORD *)&connectData->fields.ConnectPath;
  v14 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)(v5 + 48) = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)(v5 + 16) = v15;
  *(_OWORD *)(v5 + 32) = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), 0, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 56) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 56), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v5 + 64) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 64), 0, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v5 + 72) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 72), 0, v28, v29, v30, v31, v32, v33);
  v34 = System_String__Concat_75694928(
          *(System_String_o **)(v5 + 16),
          (System_String_o *)StringLiteral_1123/*"/"*/,
          *(System_String_o **)(v5 + 24),
          0);
  if ( !System_IO_Directory__Exists(*(System_String_o **)(v5 + 16), 0) )
  {
    v53 = &StringLiteral_23421/*"not find directory ["*/;
    v54 = *(System_String_o **)(v5 + 16);
LABEL_13:
    v42 = System_String__Concat_75694928((System_String_o *)*v53, v54, (System_String_o *)StringLiteral_16691/*"]"*/, 0);
    goto LABEL_14;
  }
  if ( !System_IO_File__Exists(v34, 0) )
  {
    v54 = v34;
    v53 = &StringLiteral_23422/*"not find file ["*/;
    goto LABEL_13;
  }
  AllText = System_IO_File__ReadAllText(v34, 0);
  *(_QWORD *)(v5 + 64) = AllText;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 64), (int32_t)AllText, v36, v37, v38, v39, v40, v41);
  v42 = 0;
  v6 = *(System_String_o **)(v5 + 24);
  if ( !v6 )
    goto LABEL_24;
  if ( System_String__EndsWith(v6, (System_String_o *)StringLiteral_1119/*".txt"*/, 0) )
  {
    v6 = *(System_String_o **)(v5 + 24);
    if ( !v6 )
      goto LABEL_24;
    v43 = *(System_String_o **)(v5 + 16);
    v44 = System_String__Substring_75702848(v6, 0, v6->fields._stringLength - 4, 0);
    v45 = System_String__Concat_75696856(
            v43,
            (System_String_o *)StringLiteral_1123/*"/"*/,
            v44,
            (System_String_o *)StringLiteral_1114/*".org"*/,
            0);
    if ( System_IO_File__Exists(v45, 0) )
    {
      v46 = System_IO_File__ReadAllText(v45, 0);
      *(_QWORD *)(v5 + 72) = v46;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 72), (int32_t)v46, v47, v48, v49, v50, v51, v52);
    }
  }
LABEL_14:
  if ( v42 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v56 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v56,
      (Il2CppObject *)v5,
      Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__0__,
      0);
    if ( Instance )
    {
      *(_QWORD *)&effectDistance.fields.hasValue = 0;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        (CommonUI_o *)Instance,
        (System_String_o *)StringLiteral_11088/*"Play Script Error"*/,
        v42,
        v56,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0);
      return;
    }
LABEL_24:
    sub_2213CDC(v6, v7);
  }
  if ( *(_BYTE *)(v5 + 52) && !*(_BYTE *)(v5 + 53) )
  {
    scriptTextViewMenu = this->fields.scriptTextViewMenu;
    v62 = *(_DWORD *)(v5 + 48);
    v63 = 64;
    if ( *(_QWORD *)(v5 + 72) )
      v63 = 72;
    v64 = *(System_String_o **)(v5 + v63);
    v65 = (ScriptTextViewMenu_CallbackFunc_o *)sub_2213CCC(ScriptTextViewMenu_CallbackFunc_TypeInfo);
    ScriptTextViewMenu_CallbackFunc___ctor(
      v65,
      (Il2CppObject *)v5,
      Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__1__,
      0);
    if ( !scriptTextViewMenu )
      goto LABEL_24;
    ScriptTextViewMenu__Open(scriptTextViewMenu, v64, v62, v65, 0);
  }
  else
  {
    v57 = *(System_String_o **)(v5 + 64);
    v58 = *(System_String_o **)(v5 + 72);
    v59 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      (Il2CppObject *)v5,
      Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__2__,
      0);
    DebugTestRootComponent__ScriptCheckAndStart(this, v57, v58, v59, *(System_Action_o **)(v5 + 32), v60);
  }
}


void DebugTestRootComponent__Login(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagerConfig_c *v4; // x0
  NetworkManager_c *v5; // x0
  PlayMakerFSM_o *myFSM; // x0
  NetworkManager_c *v7; // x0
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v9; // x21

  if ( (byte_596DBD0 & 1) == 0 )
  {
    sub_2213A60(&Method_DebugTestRootComponent_EndLogin__);
    sub_2213A60(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DBD0 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    goto LABEL_13;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_596DC88 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596DC88 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    v5 = NetworkManager_TypeInfo;
  }
  if ( v5->static_fields->isLogin )
    goto LABEL_13;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, method, v2);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    v7 = NetworkManager_TypeInfo;
  }
  if ( v7->static_fields->userIdNumber < 1 )
    goto LABEL_13;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, method, v2);
  if ( !NetworkManager__CheckUserCreateServer(0) )
  {
LABEL_13:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
      return;
    }
LABEL_27:
    sub_2213CDC(myFSM, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v9 = (NetworkManager_LoginCallbackFunc_o *)sub_2213CCC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v9, (Il2CppObject *)this, Method_DebugTestRootComponent_EndLogin__, 0);
  if ( !Instance )
    goto LABEL_27;
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v9, 1, 1, 0);
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
    sub_2213CDC(mergeFileForMoviePlay, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mergeFileForMoviePlay, 1, 0);
}


void DebugTestRootComponent__OnReloadFileScript(
        DebugTestRootComponent_o *this,
        int32_t jumpLine,
        const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int128 v8; // q1
  __int64 v9; // x8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x2
  ScriptConnectData_o v17; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_596DBF2 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_596DBF2 = 1;
  }
  v5 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__;
  this->fields.currentConnectData.fields.JumpLine = jumpLine;
  this->fields.currentConnectData.fields.IsReboot = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance(v5);
  if ( !Instance )
    sub_2213CDC(0, v7);
  ScriptManager__reboot((ScriptManager_o *)Instance, 0, 0);
  v8 = *(_OWORD *)&this->fields.currentConnectData.fields.EndCallback;
  v9 = *(_QWORD *)&this->fields.currentConnectData.fields.JumpLine;
  *(_OWORD *)&v17.fields.ConnectPath = *(_OWORD *)&this->fields.currentConnectData.fields.ConnectPath;
  *(_OWORD *)&v17.fields.EndCallback = v8;
  *(_QWORD *)&v17.fields.JumpLine = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.currentConnectData, 0, v10, v11, v12, v13, v14, v15);
  DebugTestRootComponent__LoadFileScript(this, &v17, v16);
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
    sub_2213CDC(debugOverrideAsset, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugOverrideAsset, 1, 0);
}


void DebugTestRootComponent__Reboot(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DC01 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_596DC01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void DebugTestRootComponent__ReleaseService(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DBDA & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_596DBDA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  NetworkManager__ReleseService((NetworkManager_o *)Instance, 0);
}


void DebugTestRootComponent__Reload(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int128 v5; // q1
  __int64 v6; // x8
  const MethodInfo *v7; // x2
  System_Collections_IEnumerator_o *v8; // x0
  ScriptConnectData_o v9; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_596DBE5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_596DBE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  ScriptManager__reboot((ScriptManager_o *)Instance, 0, 0);
  v5 = *(_OWORD *)&this->fields.currentConnectData.fields.EndCallback;
  v6 = *(_QWORD *)&this->fields.currentConnectData.fields.JumpLine;
  *(_OWORD *)&v9.fields.ConnectPath = *(_OWORD *)&this->fields.currentConnectData.fields.ConnectPath;
  *(_OWORD *)&v9.fields.EndCallback = v5;
  *(_QWORD *)&v9.fields.JumpLine = v6;
  v8 = DebugTestRootComponent__RequestScriptFileCR(this, &v9, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v8, 0);
}


System_Collections_IEnumerator_o *DebugTestRootComponent__RequestFileCR(
        DebugTestRootComponent_o *this,
        System_String_o *fullPath,
        System_Action_string__o *successCallback,
        System_Action_o *failedCallback,
        const MethodInfo *method)
{
  __int64 v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596DBE7 & 1) == 0 )
  {
    sub_2213A60(&DebugTestRootComponent__RequestFileCR_d__77_TypeInfo);
    byte_596DBE7 = 1;
  }
  v8 = sub_2213CCC(DebugTestRootComponent__RequestFileCR_d__77_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = fullPath;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 40), (int32_t)fullPath, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 56) = successCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 56), (int32_t)successCallback, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 32) = failedCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), (int32_t)failedCallback, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void DebugTestRootComponent__RequestLogin(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596DBF6 & 1) == 0 )
  {
    sub_2213A60(&Method_DebugTestRootComponent_callbackLogin__);
    sub_2213A60(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_596DBF6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_2213CCC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_callbackLogin__, 0);
  if ( !Instance )
    sub_2213CDC(v5, v6);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, 1, 0);
}


System_Collections_IEnumerator_o *DebugTestRootComponent__RequestScriptFileCR(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int128 v12; // q0
  __int128 v13; // q1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596DBE6 & 1) == 0 )
  {
    sub_2213A60(&DebugTestRootComponent__RequestScriptFileCR_d__76_TypeInfo);
    byte_596DBE6 = 1;
  }
  v5 = sub_2213CCC(DebugTestRootComponent__RequestScriptFileCR_d__76_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 72) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 72), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v13 = *(_OWORD *)&connectData->fields.ConnectPath;
  v12 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)(v5 + 64) = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)(v5 + 32) = v13;
  *(_OWORD *)(v5 + 48) = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), 0, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


bool DebugTestRootComponent__RequestSignup(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugSignupMenu_o *debugSignupMenu; // x0

  debugSignupMenu = this->fields.debugSignupMenu;
  if ( !debugSignupMenu )
    sub_2213CDC(0, method);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x25
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_List_string___o *v35; // x20
  ScriptBranchMenu_o *scriptBranchMenu; // x19
  ScriptBranchMenu_CallbackFunc_o *v37; // x21

  if ( (byte_596DBEA & 1) == 0 )
  {
    sub_2213A60(&ScriptBranchMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass81_0__ScriptCheckAndStart_b__0__);
    sub_2213A60(&DebugTestRootComponent___c__DisplayClass81_0_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DBEA = 1;
  }
  v11 = sub_2213CCC(DebugTestRootComponent___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = scriptStartAction;
  v20 = v11 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)scriptStartAction, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v11 + 32) = endCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)endCallback, v27, v28, v29, v30, v31, v32);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v33, v34);
  v12 = ScriptManager__DebugScriptAnalys((System_String_o *)StringLiteral_1/*""*/, scriptData, orgScriptData, 0);
  if ( v12 )
  {
    v35 = v12;
    scriptBranchMenu = this->fields.scriptBranchMenu;
    v37 = (ScriptBranchMenu_CallbackFunc_o *)sub_2213CCC(ScriptBranchMenu_CallbackFunc_TypeInfo);
    ScriptBranchMenu_CallbackFunc___ctor(
      v37,
      (Il2CppObject *)v11,
      Method_DebugTestRootComponent___c__DisplayClass81_0__ScriptCheckAndStart_b__0__,
      0);
    if ( scriptBranchMenu )
    {
      ScriptBranchMenu__Open(scriptBranchMenu, v35, v37, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(v12, v13);
  }
  if ( !*(_QWORD *)v20 )
    goto LABEL_11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v20 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v20 + 64LL),
    *(_QWORD *)(*(_QWORD *)v20 + 40LL));
}


bool DebugTestRootComponent__SetupTakeover(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugSignupMenu_o *debugSignupMenu; // x0

  debugSignupMenu = this->fields.debugSignupMenu;
  if ( !debugSignupMenu )
    sub_2213CDC(0, method);
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

  if ( (byte_596DBF8 & 1) == 0 )
  {
    sub_2213A60(&BackViewListViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndBackSelect__);
    byte_596DBF8 = 1;
  }
  backSelectMenu = this->fields.backSelectMenu;
  v4 = (BackViewListViewMenu_CallbackFunc_o *)sub_2213CCC(BackViewListViewMenu_CallbackFunc_TypeInfo);
  BackViewListViewMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndBackSelect__, v5);
  if ( !backSelectMenu )
    sub_2213CDC(v6, v7);
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

  if ( (byte_596DC0D & 1) == 0 )
  {
    sub_2213A60(&DPIListViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndChangeDPISelect__);
    byte_596DC0D = 1;
  }
  dPIListViewMenu = this->fields.dPIListViewMenu;
  v4 = (DPIListViewMenu_CallbackFunc_o *)sub_2213CCC(DPIListViewMenu_CallbackFunc_TypeInfo);
  DPIListViewMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndChangeDPISelect__, v5);
  if ( !dPIListViewMenu )
    sub_2213CDC(v6, v7);
  DPIListViewMenu__Open(dPIListViewMenu, v4, v8);
  return 1;
}


void DebugTestRootComponent__StartConnectScript(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int128 v8; // q0
  __int128 v9; // q1
  __int128 v12; // q1
  __int64 v13; // x8
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *v15; // x0
  ScriptConnectData_o v16; // [xsp+0h] [xbp-50h] BYREF

  v9 = *(_OWORD *)&connectData->fields.ConnectPath;
  v8 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)&this->fields.currentConnectData.fields.JumpLine = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)&this->fields.currentConnectData.fields.ConnectPath = v9;
  *(_OWORD *)&this->fields.currentConnectData.fields.EndCallback = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentConnectData,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = *(_OWORD *)&connectData->fields.EndCallback;
  v13 = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)&v16.fields.ConnectPath = *(_OWORD *)&connectData->fields.ConnectPath;
  *(_OWORD *)&v16.fields.EndCallback = v12;
  *(_QWORD *)&v16.fields.JumpLine = v13;
  v15 = DebugTestRootComponent__RequestScriptFileCR(this, &v16, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v15, 0);
}


bool DebugTestRootComponent__StartConnectScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptManager_c *v4; // x0
  System_String_o *scriptServerSettingAddress; // x21
  System_String_o *scriptObjectSettingAddress; // x20
  System_Action_o *v7; // x22
  System_Action_o *v8; // x23
  const MethodInfo *v9; // x2
  ScriptConnectData_o v11; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v12; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_596DBE1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndConnectScriptPlay__);
    sub_2213A60(&Method_DebugTestRootComponent_ErrorConnectScriptPlay__);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DBE1 = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
  if ( !byte_596DC89 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DC89 = 1;
  }
  v4 = ScriptManager_TypeInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
    v4 = ScriptManager_TypeInfo;
  }
  scriptServerSettingAddress = v4->static_fields->scriptServerSettingAddress;
  if ( !byte_596DC8A )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    v4 = ScriptManager_TypeInfo;
    byte_596DC8A = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = ScriptManager_TypeInfo;
  }
  scriptObjectSettingAddress = v4->static_fields->scriptObjectSettingAddress;
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_DebugTestRootComponent_EndConnectScriptPlay__, 0);
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_DebugTestRootComponent_ErrorConnectScriptPlay__, 0);
  memset(&v12, 0, sizeof(v12));
  ScriptConnectData___ctor(&v12, scriptServerSettingAddress, scriptObjectSettingAddress, v7, v8, -1, 0, 0);
  v11 = v12;
  DebugTestRootComponent__StartConnectScript(this, &v11, v9);
  return 1;
}


bool DebugTestRootComponent__StartConnectScriptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptConnectMenu_o *connectScriptMenu; // x20
  ScriptConnectMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596DBDF & 1) == 0 )
  {
    sub_2213A60(&ScriptConnectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndConnectScriptSelect__);
    byte_596DBDF = 1;
  }
  connectScriptMenu = this->fields.connectScriptMenu;
  v4 = (ScriptConnectMenu_CallbackFunc_o *)sub_2213CCC(ScriptConnectMenu_CallbackFunc_TypeInfo);
  ScriptConnectMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndConnectScriptSelect__,
    0);
  if ( !connectScriptMenu )
    sub_2213CDC(v5, v6);
  ScriptConnectMenu__Open(connectScriptMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartConnectWebView(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  WebConnectMenu_o *webViewConnectMenu; // x20
  WebConnectMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596DC03 & 1) == 0 )
  {
    sub_2213A60(&WebConnectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndConnectWebView__);
    byte_596DC03 = 1;
  }
  webViewConnectMenu = this->fields.webViewConnectMenu;
  v4 = (WebConnectMenu_CallbackFunc_o *)sub_2213CCC(WebConnectMenu_CallbackFunc_TypeInfo);
  WebConnectMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndConnectWebView__, 0);
  if ( !webViewConnectMenu )
    sub_2213CDC(v5, v6);
  WebConnectMenu__Open(webViewConnectMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartDefaultScriptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptDefaultFilePlayerMenu_o *playScriptDefaultFileMenu; // x20
  ScriptDefaultFilePlayerMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596DBED & 1) == 0 )
  {
    sub_2213A60(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndPlayDefaultScriptSelect__);
    byte_596DBED = 1;
  }
  playScriptDefaultFileMenu = this->fields.playScriptDefaultFileMenu;
  v4 = (ScriptDefaultFilePlayerMenu_CallbackFunc_o *)sub_2213CCC(ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
  ScriptDefaultFilePlayerMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndPlayDefaultScriptSelect__,
    0);
  if ( !playScriptDefaultFileMenu )
    sub_2213CDC(v5, v6);
  ScriptDefaultFilePlayerMenu__Open(playScriptDefaultFileMenu, v4, 0);
  return 1;
}


void DebugTestRootComponent__StartEditBattleMock(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_596DC0C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DC0C = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
}


bool DebugTestRootComponent__StartEquipGraphSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  EquipGraphViewListViewMenu_o *equipGraphSelectMenu; // x20
  EquipGraphViewListViewMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596DBFE & 1) == 0 )
  {
    sub_2213A60(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndEquipGraphSelect__);
    byte_596DBFE = 1;
  }
  equipGraphSelectMenu = this->fields.equipGraphSelectMenu;
  v4 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_2213CCC(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
  EquipGraphViewListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndEquipGraphSelect__,
    v5);
  if ( !equipGraphSelectMenu )
    sub_2213CDC(v6, v7);
  EquipGraphViewListViewMenu__Open(equipGraphSelectMenu, v4, v8);
  return 1;
}


bool DebugTestRootComponent__StartEventVoicePlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  EventRewardVoicePlayCountView_o *eventRewardVoicePlayCountView; // x0

  eventRewardVoicePlayCountView = this->fields.eventRewardVoicePlayCountView;
  if ( !eventRewardVoicePlayCountView )
    sub_2213CDC(0, method);
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

  if ( (byte_596DBFA & 1) == 0 )
  {
    sub_2213A60(&FigureViewListViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndFigureSelect__);
    byte_596DBFA = 1;
  }
  figureSelectMenu = this->fields.figureSelectMenu;
  v4 = (FigureViewListViewMenu_CallbackFunc_o *)sub_2213CCC(FigureViewListViewMenu_CallbackFunc_TypeInfo);
  FigureViewListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndFigureSelect__,
    v5);
  if ( !figureSelectMenu )
    sub_2213CDC(v6, v7);
  FigureViewListViewMenu__Open(figureSelectMenu, v4, v8);
  return 1;
}


void DebugTestRootComponent__StartFileScript(
        DebugTestRootComponent_o *this,
        ScriptConnectData_o *connectData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int128 v8; // q0
  __int128 v9; // q1
  __int128 v12; // q1
  __int64 v13; // x8
  const MethodInfo *v14; // x2
  ScriptConnectData_o v15; // [xsp+0h] [xbp-50h] BYREF

  v9 = *(_OWORD *)&connectData->fields.ConnectPath;
  v8 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)&this->fields.currentConnectData.fields.JumpLine = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)&this->fields.currentConnectData.fields.ConnectPath = v9;
  *(_OWORD *)&this->fields.currentConnectData.fields.EndCallback = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentConnectData,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = *(_OWORD *)&connectData->fields.EndCallback;
  v13 = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)&v15.fields.ConnectPath = *(_OWORD *)&connectData->fields.ConnectPath;
  *(_OWORD *)&v15.fields.EndCallback = v12;
  *(_QWORD *)&v15.fields.JumpLine = v13;
  DebugTestRootComponent__LoadFileScript(this, &v15, v14);
}


void DebugTestRootComponent__StartFileScriptPlay(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptManager_c *v4; // x0
  System_String_o *scriptPlayerPathSettingAddress; // x21
  System_String_o *scriptPlayerObjectSettingAddress; // x20
  System_Action_o *v7; // x22
  System_Action_o *v8; // x23
  __int128 v9; // q1
  __int64 v10; // x8
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2
  ScriptConnectData_o v18; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v19; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_596DBEF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndStartPlayScriptPlay__);
    sub_2213A60(&Method_DebugTestRootComponent_ErrorStartPlayScriptPlay__);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DBEF = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
  if ( !byte_596DC8C )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DC8C = 1;
  }
  v4 = ScriptManager_TypeInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
    v4 = ScriptManager_TypeInfo;
  }
  scriptPlayerPathSettingAddress = v4->static_fields->scriptPlayerPathSettingAddress;
  if ( !byte_596DC8D )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    v4 = ScriptManager_TypeInfo;
    byte_596DC8D = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = ScriptManager_TypeInfo;
  }
  scriptPlayerObjectSettingAddress = v4->static_fields->scriptPlayerObjectSettingAddress;
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_DebugTestRootComponent_EndStartPlayScriptPlay__, 0);
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_DebugTestRootComponent_ErrorStartPlayScriptPlay__, 0);
  memset(&v18, 0, sizeof(v18));
  ScriptConnectData___ctor(&v18, scriptPlayerPathSettingAddress, scriptPlayerObjectSettingAddress, v7, v8, -1, 0, 0);
  v9 = *(_OWORD *)&v18.fields.EndCallback;
  v10 = *(_QWORD *)&v18.fields.JumpLine;
  v19 = v18;
  *(_OWORD *)&this->fields.currentConnectData.fields.ConnectPath = *(_OWORD *)&v18.fields.ConnectPath;
  *(_OWORD *)&this->fields.currentConnectData.fields.EndCallback = v9;
  *(_QWORD *)&this->fields.currentConnectData.fields.JumpLine = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.currentConnectData, 0, v11, v12, v13, v14, v15, v16);
  DebugTestRootComponent__LoadFileScript(this, &v19, v17);
}


bool DebugTestRootComponent__StartFileScriptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ScriptFilePlayerMenu_o *playScriptFileMenu; // x20
  ScriptFilePlayerMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596DBEB & 1) == 0 )
  {
    sub_2213A60(&ScriptFilePlayerMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndPlayScriptSelect__);
    byte_596DBEB = 1;
  }
  playScriptFileMenu = this->fields.playScriptFileMenu;
  v4 = (ScriptFilePlayerMenu_CallbackFunc_o *)sub_2213CCC(ScriptFilePlayerMenu_CallbackFunc_TypeInfo);
  ScriptFilePlayerMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndPlayScriptSelect__,
    0);
  if ( !playScriptFileMenu )
    sub_2213CDC(v5, v6);
  ScriptFilePlayerMenu__Open(playScriptFileMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartImageSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ImageViewListViewMenu_o *imageSelectMenu; // x20
  ImageViewListViewMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596DBFC & 1) == 0 )
  {
    sub_2213A60(&ImageViewListViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndImageSelect__);
    byte_596DBFC = 1;
  }
  imageSelectMenu = this->fields.imageSelectMenu;
  v4 = (ImageViewListViewMenu_CallbackFunc_o *)sub_2213CCC(ImageViewListViewMenu_CallbackFunc_TypeInfo);
  ImageViewListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndImageSelect__,
    v5);
  if ( !imageSelectMenu )
    sub_2213CDC(v6, v7);
  ImageViewListViewMenu__Open(imageSelectMenu, v4, v8);
  return 1;
}


bool DebugTestRootComponent__StartNoblePhantasm(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  intptr_t NoblePhantasmSelectPanel; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_EventDelegate__o *v20; // x20
  EventDelegate_Callback_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Transform_o *v24; // x0
  System_Collections_Generic_List_EventDelegate__o *v25; // x20
  EventDelegate_Callback_o *v26; // x22
  Il2CppClass *v27; // x20
  UnityEngine_GameObject_o *v28; // x8
  UnityEngine_Object_o *v29; // x21
  UnityEngine_Transform_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *v33; // x23
  __int64 v34; // x2
  UnityEngine_Font_o *trueTypeFont; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v37; // x1
  System_Collections_Generic_IEnumerator_T__o *v38; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v40; // x9
  int *p_offset; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  System_Collections_Generic_IEnumerator_T__o *v45; // x24
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x24
  __int64 v51; // x25
  __int64 v52; // x0
  __int64 v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  ServantEntity_o **v60; // x27
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  UnityEngine_GameObject_o *v67; // x24
  __int64 v68; // x0
  __int64 v69; // x1
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  UILabel_o *v72; // x26
  __int64 v73; // x0
  __int64 v74; // x1
  const MethodInfo *v75; // x2
  __int64 v76; // x1
  System_String_o *v77; // x28
  __int64 v78; // x1
  __int64 v79; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x27
  System_String_o *v81; // x2
  System_String_o *v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  Il2CppObject *v85; // x0
  __int64 v86; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x26
  EventDelegate_Callback_o *v88; // x27
  __int64 v89; // x1
  __int64 v90; // x2
  Il2CppObject *v91; // x0
  __int64 v92; // x1
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  UnityEngine_Transform_o *v99; // x0
  __int64 v100; // x1
  UnityEngine_Transform_o *v101; // x25
  UnityEngine_Transform_o *v102; // x0
  UnityEngine_Transform_o *v103; // x0
  __int64 v104; // x1
  UnityEngine_Transform_o *v105; // x25
  UnityEngine_Transform_o *v106; // x0
  __int64 v107; // x1
  UnityEngine_Transform_o *v108; // x24
  System_Collections_Generic_IEnumerator_T__o *v109; // x20
  System_Collections_Generic_IEnumerator_T__c *v110; // x8
  __int64 v111; // x9
  int *v112; // x10
  __int64 v113; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+10h] [xbp-80h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v116; // [xsp+28h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596DC08 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntityList__);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UIButton___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UILabel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UIGrid___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass116_0__StartNoblePhantasm_b__0__);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass116_0__StartNoblePhantasm_b__1__);
    sub_2213A60(&DebugTestRootComponent___c__DisplayClass116_0_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass116_1__StartNoblePhantasm_b__2__);
    sub_2213A60(&DebugTestRootComponent___c__DisplayClass116_1_TypeInfo);
    sub_2213A60(&StringLiteral_4179/*"CancelButton"*/);
    sub_2213A60(&StringLiteral_8793/*"LimitCountLabel"*/);
    sub_2213A60(&StringLiteral_15107/*"TitleLabel"*/);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_596DC08 = 1;
  }
  v116 = 0;
  id = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  v3 = sub_2213CCC(DebugTestRootComponent___c__DisplayClass116_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_90;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  NoblePhantasmSelectPanel = (intptr_t)this->fields.NoblePhantasmSelectPanel;
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoblePhantasmSelectPanel, 1, 0);
  NoblePhantasmSelectPanel = (intptr_t)this->fields.NoblePhantasmSelectPanel;
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_90;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)NoblePhantasmSelectPanel, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_8793/*"LimitCountLabel"*/, 1, 0);
  *(_QWORD *)(v3 + 24) = NodeFromName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)NodeFromName, v14, v15, v16, v17, v18, v19);
  NoblePhantasmSelectPanel = *(_QWORD *)(v3 + 24);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_90;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)NoblePhantasmSelectPanel,
                                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_90;
  v20 = *(System_Collections_Generic_List_EventDelegate__o **)(NoblePhantasmSelectPanel + 200);
  v21 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v21,
    (Il2CppObject *)v3,
    Method_DebugTestRootComponent___c__DisplayClass116_0__StartNoblePhantasm_b__0__,
    0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v22, v23);
  EventDelegate__Add(v20, v21, 0);
  NoblePhantasmSelectPanel = (intptr_t)this->fields.NoblePhantasmSelectPanel;
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_90;
  v24 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)NoblePhantasmSelectPanel, 0);
  NoblePhantasmSelectPanel = (intptr_t)TransformHelper__getNodeFromName(
                                         v24,
                                         (System_String_o *)StringLiteral_4179/*"CancelButton"*/,
                                         1,
                                         0);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_90;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)NoblePhantasmSelectPanel,
                                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_90;
  v25 = *(System_Collections_Generic_List_EventDelegate__o **)(NoblePhantasmSelectPanel + 200);
  v26 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v26,
    (Il2CppObject *)v3,
    Method_DebugTestRootComponent___c__DisplayClass116_0__StartNoblePhantasm_b__1__,
    0);
  EventDelegate__Add(v25, v26, 0);
  NoblePhantasmSelectPanel = (intptr_t)this->fields.NoblePhantasmSelectPanel;
  if ( !NoblePhantasmSelectPanel )
    goto LABEL_90;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)NoblePhantasmSelectPanel,
                                         (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
  if ( !this->fields.NoblePhantasmSelectPanel )
    goto LABEL_90;
  v27 = (Il2CppClass *)NoblePhantasmSelectPanel;
  NoblePhantasmSelectPanel = (intptr_t)UnityEngine_GameObject__GetComponentInChildren_object_(
                                         this->fields.NoblePhantasmSelectPanel,
                                         (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIGrid___);
  v28 = this->fields.NoblePhantasmSelectPanel;
  if ( !v28 )
    goto LABEL_90;
  v29 = (UnityEngine_Object_o *)NoblePhantasmSelectPanel;
  v30 = UnityEngine_GameObject__get_transform(v28, 0);
  v33 = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(v30, (System_String_o *)StringLiteral_15107/*"TitleLabel"*/, 1, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
  NoblePhantasmSelectPanel = UnityEngine_Object__op_Inequality(v33, 0, 0);
  trueTypeFont = 0;
  if ( (NoblePhantasmSelectPanel & 1) != 0 )
  {
    if ( !v33 )
      goto LABEL_90;
    NoblePhantasmSelectPanel = (intptr_t)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)v33,
                                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    if ( !NoblePhantasmSelectPanel )
      goto LABEL_90;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)NoblePhantasmSelectPanel, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v34);
  if ( !UnityEngine_Object__op_Inequality(v29, 0, 0) )
    return 1;
  NoblePhantasmSelectPanel = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NoblePhantasmSelectPanel
    || (NoblePhantasmSelectPanel = (intptr_t)DataManager__GetMasterData_object_(
                                               (DataManager_o *)NoblePhantasmSelectPanel,
                                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (NoblePhantasmSelectPanel = *(_QWORD *)(NoblePhantasmSelectPanel + 40)) == 0 )
  {
LABEL_90:
    sub_2213CDC(NoblePhantasmSelectPanel, v5);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)NoblePhantasmSelectPanel,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
  v116 = Enumerator;
  if ( !Enumerator )
LABEL_68:
    sub_2213CDC(Enumerator, v37);
  v38 = Enumerator;
  while ( 1 )
  {
    klass = v38->klass;
    v40 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        p_offset += 4;
        if ( !v40 )
          goto LABEL_34;
      }
      v42 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_34:
      v42 = sub_224BC3C(v38, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
            v38,
            *(_QWORD *)(v42 + 8));
    if ( (v43 & 1) == 0 )
      break;
    v45 = v116;
    if ( !v116 )
      sub_2213CDC(v43, v44);
    v46 = v116->klass;
    v47 = *(unsigned __int16 *)&v116->klass->_2.rank;
    if ( *(_WORD *)&v116->klass->_2.rank )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantEntity__c **)v48 - 1) != System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_42;
      }
      v49 = (__int64)&v46->vtable[*v48];
    }
    else
    {
LABEL_42:
      v49 = sub_224BC3C(v116, System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, 0);
    }
    v50 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
            v45,
            *(_QWORD *)(v49 + 8));
    v51 = sub_2213CCC(DebugTestRootComponent___c__DisplayClass116_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v51, 0);
    if ( !v51 )
      sub_2213CDC(v52, v53);
    *(_QWORD *)(v51 + 24) = v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 24), v3, v54, v55, v56, v57, v58, v59);
    *(_QWORD *)(v51 + 16) = v50;
    v60 = (ServantEntity_o **)(v51 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 16), v50, v61, v62, v63, v64, v65, v66);
    v67 = (UnityEngine_GameObject_o *)sub_2213CCC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor_83438680(v67, 0);
    if ( !v67 )
      sub_2213CDC(v68, v69);
    v70 = UnityEngine_GameObject__AddComponent_object_(
            v67,
            (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UILabel___);
    v72 = (UILabel_o *)v70;
    if ( !v70 )
      sub_2213CDC(0, v71);
    UILabel__set_trueTypeFont((UILabel_o *)v70, trueTypeFont, 0);
    UILabel__set_overflowMethod(v72, 2, 0);
    v118.fields.r = 0.0;
    v118.fields.g = 0.0;
    v118.fields.b = 0.0;
    v118.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)v72, v118, 0);
    UILabel__set_fontSize(v72, 24, 0);
    UIWidget__set_pivot((UIWidget_o *)v72, 3, 0);
    if ( !*v60 )
      sub_2213CDC(v73, v74);
    id = (*v60)->fields.id;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v74, v75);
    *(_QWORD *)&v117.fields.currentCryptoKey = &id;
    *(_QWORD *)&v117.fields.fakeValue = 0;
    v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v117, v75);
    if ( !*v60 )
      sub_2213CDC(0, v76);
    Name = ServantEntity__GetName(*v60, -1, 0, -1, 0, 0);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v78, v79);
    v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(Name, 0);
    v82 = System_String__Concat_75694928(v77, (System_String_o *)StringLiteral_1533/*":"*/, v81, 0);
    UILabel__set_text(v72, v82, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v83, v84);
    NGUITools__AddWidgetCollider(v67, 0);
    v85 = UnityEngine_GameObject__AddComponent_object_(
            v67,
            (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
    if ( !v85 )
      sub_2213CDC(0, v86);
    monitor = (System_Collections_Generic_List_EventDelegate__o *)v85[12].monitor;
    v88 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v88,
      (Il2CppObject *)v51,
      Method_DebugTestRootComponent___c__DisplayClass116_1__StartNoblePhantasm_b__2__,
      0);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v89, v90);
    EventDelegate__Add(monitor, v88, 0);
    v91 = UnityEngine_GameObject__AddComponent_object_(
            v67,
            (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    if ( !v91 )
      sub_2213CDC(0, v92);
    v91[2].klass = v27;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v91[2], (int32_t)v27, v93, v94, v95, v96, v97, v98);
    v99 = UnityEngine_GameObject__get_transform(v67, 0);
    if ( !v29 )
      sub_2213CDC(v99, v100);
    v101 = v99;
    v102 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v29, 0);
    if ( !v101 )
      sub_2213CDC(v102, v102);
    UnityEngine_Transform__set_parent(v101, v102, 0);
    v103 = UnityEngine_GameObject__get_transform(v67, 0);
    v105 = v103;
    if ( !byte_5969AE0 )
    {
      v103 = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v105 )
      sub_2213CDC(v103, v104);
    UnityEngine_Transform__set_localPosition(v105, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v106 = UnityEngine_GameObject__get_transform(v67, 0);
    v108 = v106;
    if ( !byte_5969AE5 )
    {
      v106 = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v108 )
      sub_2213CDC(v106, v107);
    UnityEngine_Transform__set_localScale(v108, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v38 = v116;
    if ( !v116 )
      goto LABEL_68;
  }
  v109 = v116;
  if ( v116 )
  {
    v110 = v116->klass;
    v111 = *(unsigned __int16 *)&v116->klass->_2.rank;
    if ( *(_WORD *)&v116->klass->_2.rank )
    {
      v112 = &v110->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v112 - 1) != System_IDisposable_TypeInfo )
      {
        --v111;
        v112 += 4;
        if ( !v111 )
          goto LABEL_74;
      }
      v113 = (__int64)&v110->vtable[*v112];
    }
    else
    {
LABEL_74:
      v113 = sub_224BC3C(v116, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v113)(v109, *(_QWORD *)(v113 + 8));
  }
  return 1;
}


bool DebugTestRootComponent__StartReceiptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ReceiptListViewMenu_o *receiptSelectMenu; // x20
  ReceiptListViewMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596DBF4 & 1) == 0 )
  {
    sub_2213A60(&ReceiptListViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndReceiptSelect__);
    byte_596DBF4 = 1;
  }
  receiptSelectMenu = this->fields.receiptSelectMenu;
  v4 = (ReceiptListViewMenu_CallbackFunc_o *)sub_2213CCC(ReceiptListViewMenu_CallbackFunc_TypeInfo);
  ReceiptListViewMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndReceiptSelect__, 0);
  if ( !receiptSelectMenu )
    sub_2213CDC(v5, v6);
  ReceiptListViewMenu__Open(receiptSelectMenu, v4, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int128 v24; // q0
  __int128 v25; // q1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x21
  System_Action_o *v39; // x22
  const MethodInfo *v40; // x5
  ScriptTextViewMenu_o *scriptTextViewMenu; // x19
  System_String_o *v42; // x21
  int32_t v43; // w22
  ScriptTextViewMenu_CallbackFunc_o *v44; // x23

  if ( (byte_596DBE9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass79_0__StartScript_b__0__);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass79_0__StartScript_b__1__);
    sub_2213A60(&DebugTestRootComponent___c__DisplayClass79_0_TypeInfo);
    byte_596DBE9 = 1;
  }
  v9 = sub_2213CCC(DebugTestRootComponent___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = scriptData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)scriptData, v18, v19, v20, v21, v22, v23);
  v25 = *(_OWORD *)&connectData->fields.ConnectPath;
  v24 = *(_OWORD *)&connectData->fields.EndCallback;
  *(_QWORD *)(v9 + 64) = *(_QWORD *)&connectData->fields.JumpLine;
  *(_OWORD *)(v9 + 32) = v25;
  *(_OWORD *)(v9 + 48) = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), 0, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v9 + 72) = orgData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 72), (int32_t)orgData, v32, v33, v34, v35, v36, v37);
  if ( !*(_BYTE *)(v9 + 68) || *(_BYTE *)(v9 + 69) )
  {
    v38 = *(System_String_o **)(v9 + 24);
    v39 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v9,
      Method_DebugTestRootComponent___c__DisplayClass79_0__StartScript_b__1__,
      0);
    DebugTestRootComponent__ScriptCheckAndStart(this, v38, 0, v39, *(System_Action_o **)(v9 + 48), v40);
    return;
  }
  scriptTextViewMenu = this->fields.scriptTextViewMenu;
  v42 = *(System_String_o **)(v9 + 24);
  v43 = *(_DWORD *)(v9 + 64);
  v44 = (ScriptTextViewMenu_CallbackFunc_o *)sub_2213CCC(ScriptTextViewMenu_CallbackFunc_TypeInfo);
  ScriptTextViewMenu_CallbackFunc___ctor(
    v44,
    (Il2CppObject *)v9,
    Method_DebugTestRootComponent___c__DisplayClass79_0__StartScript_b__0__,
    0);
  if ( !scriptTextViewMenu )
LABEL_9:
    sub_2213CDC(v10, v11);
  ScriptTextViewMenu__Open(scriptTextViewMenu, v42, v43, v44, 0);
}


bool DebugTestRootComponent__StartScriptSelect(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptAssetListViewMenu_o *scriptSelectMenu; // x20
  ScriptAssetListViewMenu_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596DBDD & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndScriptSelect__);
    sub_2213A60(&StringLiteral_13161/*"ScriptActionEncrypt"*/);
    byte_596DBDD = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_13161/*"ScriptActionEncrypt"*/, 0);
  scriptSelectMenu = this->fields.scriptSelectMenu;
  v5 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_2213CCC(ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_DebugTestRootComponent_EndScriptSelect__,
    0);
  if ( !scriptSelectMenu )
    sub_2213CDC(v6, v7);
  ScriptAssetListViewMenu__Open(scriptSelectMenu, v5, 0);
  return 1;
}


bool DebugTestRootComponent__StartServerSettingInput(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ServerSettingMenu_o *serverSettingMenu; // x20
  ServerSettingMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596DBDB & 1) == 0 )
  {
    sub_2213A60(&ServerSettingMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndServerSetting__);
    byte_596DBDB = 1;
  }
  serverSettingMenu = this->fields.serverSettingMenu;
  v4 = (ServerSettingMenu_CallbackFunc_o *)sub_2213CCC(ServerSettingMenu_CallbackFunc_TypeInfo);
  ServerSettingMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndServerSetting__, 0);
  if ( !serverSettingMenu )
    sub_2213CDC(v5, v6);
  ServerSettingMenu__Open(serverSettingMenu, v4, 0);
  return 1;
}


bool DebugTestRootComponent__StartSignupInput(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugSignupMenu_o *debugSignupMenu; // x0

  debugSignupMenu = this->fields.debugSignupMenu;
  if ( !debugSignupMenu )
    sub_2213CDC(0, method);
  DebugSignupMenu__Open(debugSignupMenu, this->fields.myFSM, v2);
  return 1;
}


bool DebugTestRootComponent__StartSoundCheck(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  SoundCheckMenu_o *soundCheckMenu; // x0

  soundCheckMenu = this->fields.soundCheckMenu;
  if ( !soundCheckMenu )
    sub_2213CDC(0, method);
  SoundCheckMenu__Open(soundCheckMenu, 0);
  return 1;
}


bool DebugTestRootComponent__StartSoundTest(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  SoundTestMenu_o *soundTestMenu; // x20
  SoundTestMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596DC0A & 1) == 0 )
  {
    sub_2213A60(&SoundTestMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndSoundTest__);
    byte_596DC0A = 1;
  }
  soundTestMenu = this->fields.soundTestMenu;
  v4 = (SoundTestMenu_CallbackFunc_o *)sub_2213CCC(SoundTestMenu_CallbackFunc_TypeInfo);
  SoundTestMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndSoundTest__, 0);
  if ( !soundTestMenu )
    sub_2213CDC(v5, v6);
  SoundTestMenu__open(soundTestMenu, v4, 0);
  return 1;
}


void DebugTestRootComponent__StartSwitchingUser(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  ;
}


bool DebugTestRootComponent__StartTestRequest(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Action_o *v4; // x20

  if ( (byte_596DC05 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_EndTestRequest__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&StringLiteral_14293/*"Test"*/);
    byte_596DC05 = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
  ScriptManager__InitNotificationInfo(0);
  ScriptManager__AddNotificationInfo(0, 0, (System_String_o *)StringLiteral_14293/*"Test"*/, 0);
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_EndTestRequest__, 0);
  ScriptManager__PlayGacha(100100, 0, 1, v4, 0, -1, 0);
  return 1;
}


void DebugTestRootComponent__StartTopInput(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagerConfig_c *v4; // x0
  DebugListViewMenu_o *topMenu; // x0
  struct DebugTestRootComponent_DebugTestSceneJumpInfo_o *sceneJumpInfo; // x8

  if ( (byte_596DBD4 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&StringLiteral_5156/*"DEBUG_MENU_SETTING_SERVER"*/);
    byte_596DBD4 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseDebugCommand )
  {
    topMenu = this->fields.topMenu;
    if ( !topMenu )
      goto LABEL_13;
    DebugListViewMenu__StartInput(topMenu, method);
  }
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( sceneJumpInfo && sceneJumpInfo->fields._isFirstServerSetting_k__BackingField )
  {
    topMenu = (DebugListViewMenu_o *)this->fields.myFSM;
    sceneJumpInfo->fields._isFirstServerSetting_k__BackingField = 0;
    if ( topMenu )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)topMenu, (System_String_o *)StringLiteral_5156/*"DEBUG_MENU_SETTING_SERVER"*/, 0);
      return;
    }
LABEL_13:
    sub_2213CDC(topMenu, method);
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

  if ( (byte_596DBD8 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DBD8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__switchingAllocMem((CommonUI_o *)Instance, 0);
}


void DebugTestRootComponent__SwitchingAssetLoad(DebugTestRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DBD9 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596DBD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
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
  __int64 v5; // x1
  __int64 v6; // x2
  ManagerConfig_c *v7; // x0
  __int64 v8; // x2
  NetworkManager_c *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *serverInfoLabel; // x20
  NetworkManager_c *v13; // x0
  UILabel_o *userInfoLabel; // x20
  System_String_o *v15; // x0
  UILabel_o *graphicsAPILabel; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *versionInfoLabel; // x20
  AssetManager_c *v21; // x0
  System_String_o *assetBundleMasterVersion; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  UILabel_o *folderInfoLabel; // x20
  NetworkManager_c *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  ManagerConfig_c *v29; // x0
  __int64 v30; // x2
  ManagerConfig_c *v31; // x0
  UILabel_o *criScriptVersionInfoLabel; // x20
  Il2CppObject *ScriptVersionString; // x0
  UILabel_o *criBinaryVersionInfoLabel; // x20
  Il2CppObject *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x1
  __int64 v43; // x2
  System_Enum_o v44; // [xsp+0h] [xbp-60h] BYREF
  int32_t graphicsDeviceType; // [xsp+10h] [xbp-50h]
  int32_t BinaryVersionNumber; // [xsp+1Ch] [xbp-44h] BYREF
  __int64 userIdNumber; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_596DBCF & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Rendering_GraphicsDeviceType_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_15836/*"UserId "*/);
    sub_2213A60(&StringLiteral_4063/*"CRIBinaryVersion:{0}"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_4065/*"CRIScriptVersion:{0}"*/);
    sub_2213A60(&StringLiteral_7464/*"Graphics API "*/);
    sub_2213A60(&StringLiteral_11989/*"SCRIPT"*/);
    sub_2213A60(&StringLiteral_13304/*"Server "*/);
    sub_2213A60(&StringLiteral_16313/*"X"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_596DBCF = 1;
  }
  userIdNumber = 0;
  BinaryVersionNumber = 0;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  userInfoObject = this->fields.userInfoObject;
  if ( !userInfoObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(userInfoObject, 0, 0);
  v7 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v5, v6);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( !v7->static_fields->UseMock )
  {
    userInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !userInfoObject )
      goto LABEL_71;
    if ( !NetworkManager__ReadAuth((NetworkManager_o *)userInfoObject, 0) )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3, v8);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v9 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3, v8);
        v9 = NetworkManager_TypeInfo;
      }
      userIdNumber = v9->static_fields->userIdNumber;
      if ( userIdNumber >= 1 )
      {
        userInfoObject = this->fields.userInfoObject;
        if ( !userInfoObject )
          goto LABEL_71;
        UnityEngine_GameObject__SetActive(userInfoObject, 1, 0);
        serverInfoLabel = this->fields.serverInfoLabel;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
        if ( !byte_596DC84 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_596DC84 = 1;
        }
        v13 = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
          v13 = NetworkManager_TypeInfo;
        }
        userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_75651716(
                                                       (System_String_o *)StringLiteral_13304/*"Server "*/,
                                                       v13->static_fields->userCreateServer,
                                                       0);
        if ( !serverInfoLabel )
          goto LABEL_71;
        UILabel__set_text(serverInfoLabel, (System_String_o *)userInfoObject, 0);
        userInfoLabel = this->fields.userInfoLabel;
        v15 = System_Int64__ToString((int64_t)&userIdNumber, 0);
        userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_75651716(
                                                       (System_String_o *)StringLiteral_15836/*"UserId "*/,
                                                       v15,
                                                       0);
        if ( !userInfoLabel )
          goto LABEL_71;
        UILabel__set_text(userInfoLabel, (System_String_o *)userInfoObject, 0);
        graphicsAPILabel = this->fields.graphicsAPILabel;
        graphicsDeviceType = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
        v44.klass = (System_Enum_c *)UnityEngine_Rendering_GraphicsDeviceType_TypeInfo;
        v44.monitor = (void *)-1LL;
        v17 = System_Enum__ToString(&v44, 0);
        userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_75651716(
                                                       (System_String_o *)StringLiteral_7464/*"Graphics API "*/,
                                                       v17,
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
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v18, v19);
    if ( !byte_596DC85 )
    {
      sub_2213A60(&AssetManager_TypeInfo);
      byte_596DC85 = 1;
    }
    v21 = AssetManager_TypeInfo;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v18, v19);
      v21 = AssetManager_TypeInfo;
    }
    assetBundleMasterVersion = v21->static_fields->assetBundleMasterVersion;
    if ( !byte_596DC86 )
    {
      sub_2213A60(&AssetManager_TypeInfo);
      v21 = AssetManager_TypeInfo;
      byte_596DC86 = 1;
    }
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v18, v19);
      v21 = AssetManager_TypeInfo;
    }
    userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_75694928(
                                                   assetBundleMasterVersion,
                                                   (System_String_o *)StringLiteral_113/*" "*/,
                                                   v21->static_fields->assetBundleDateVersion,
                                                   0);
    if ( !versionInfoLabel )
      goto LABEL_71;
    UILabel__set_text(versionInfoLabel, (System_String_o *)userInfoObject, 0);
    folderInfoLabel = this->fields.folderInfoLabel;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23, v24);
    if ( !byte_596DC87 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_596DC87 = 1;
    }
    v26 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23, v24);
      v26 = NetworkManager_TypeInfo;
    }
    userInfoObject = (UnityEngine_GameObject_o *)System_String__Concat_75694928(
                                                   (System_String_o *)StringLiteral_16427/*"["*/,
                                                   v26->static_fields->dataServerFolder,
                                                   (System_String_o *)StringLiteral_16691/*"]"*/,
                                                   0);
    if ( !folderInfoLabel )
      goto LABEL_71;
    UILabel__set_text(folderInfoLabel, (System_String_o *)userInfoObject, 0);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( System_String__op_Equality(v7->static_fields->ServerDefaultType, (System_String_o *)StringLiteral_11989/*"SCRIPT"*/, 0) )
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
  v29 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v27, v28);
    v29 = ManagerConfig_TypeInfo;
  }
  if ( !System_String__op_Equality(v29->static_fields->ServerDefaultType, (System_String_o *)StringLiteral_11989/*"SCRIPT"*/, 0) )
    goto LABEL_61;
  v31 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v3, v30);
    v31 = ManagerConfig_TypeInfo;
  }
  if ( v31->static_fields->IsNetworkMock )
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
                                                 (System_String_o *)StringLiteral_4065/*"CRIScriptVersion:{0}"*/,
                                                 ScriptVersionString,
                                                 0);
  if ( !criScriptVersionInfoLabel )
    goto LABEL_71;
  UILabel__set_text(criScriptVersionInfoLabel, (System_String_o *)userInfoObject, 0);
  criBinaryVersionInfoLabel = this->fields.criBinaryVersionInfoLabel;
  BinaryVersionNumber = CriWare_Common__GetBinaryVersionNumber(0);
  v35 = (Il2CppObject *)System_Int32__ToString_77138656(
                          (int32_t)&BinaryVersionNumber,
                          (System_String_o *)StringLiteral_16313/*"X"*/,
                          0);
  userInfoObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_4063/*"CRIBinaryVersion:{0}"*/, v35, 0);
  if ( !criBinaryVersionInfoLabel )
    goto LABEL_71;
  UILabel__set_text(criBinaryVersionInfoLabel, (System_String_o *)userInfoObject, 0);
  this->fields.sceneJumpInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sceneJumpInfo, 0, v36, v37, v38, v39, v40, v41);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v42, v43);
  SoundManager__stopBgm(0);
  userInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !userInfoObject )
LABEL_71:
    sub_2213CDC(userInfoObject, v3);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)userInfoObject, (SceneRootComponent_o *)this, 0);
}


void DebugTestRootComponent__beginStartUp(DebugTestRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppClass *v10; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v12; // x10
  int32_t v13; // w1

  if ( (byte_596DBD3 & 1) == 0 )
  {
    sub_2213A60(&DebugTestRootComponent_DebugTestSceneJumpInfo_TypeInfo);
    byte_596DBD3 = 1;
  }
  if ( data )
  {
    v10 = (Il2CppClass *)DebugTestRootComponent_DebugTestSceneJumpInfo_TypeInfo;
    naturalAligment = DebugTestRootComponent_DebugTestSceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (DebugTestRootComponent_DebugTestSceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == DebugTestRootComponent_DebugTestSceneJumpInfo_TypeInfo )
        v12 = data;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    this->fields.sceneJumpInfo = (struct DebugTestRootComponent_DebugTestSceneJumpInfo_o *)v12;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v10 )
        v13 = (int)data;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.sceneJumpInfo,
      v13,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  SceneRootComponent__beginStartUp_48466984((SceneRootComponent_o *)this, 0);
}


void DebugTestRootComponent__callbackLogin(
        DebugTestRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_596DBF7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11565/*"REQUEST_OK"*/);
    sub_2213A60(&StringLiteral_11562/*"REQUEST_DO_SIGNUP"*/);
    sub_2213A60(&StringLiteral_19510/*"do_signup"*/);
    byte_596DBF7 = 1;
  }
  v6 = System_String__op_Equality(result, (System_String_o *)StringLiteral_19510/*"do_signup"*/, 0);
  myFSM = this->fields.myFSM;
  if ( !v6 )
  {
    if ( myFSM )
    {
      v8 = &StringLiteral_11565/*"REQUEST_OK"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(myFSM, v5);
  }
  if ( !myFSM )
    goto LABEL_9;
  v8 = &StringLiteral_11562/*"REQUEST_DO_SIGNUP"*/;
LABEL_8:
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
    sub_2213CDC(0, method);
  DebugUserServerTimeMenu__close(dbgUserServerTimeMenu, method);
}


void DebugTestRootComponent__scriptEscapeURL(System_String_o **url, const MethodInfo *method)
{
  __int64 v2; // x2
  void *v4; // x0
  System_String_o *v5; // x20
  __int64 v6; // x2
  System_String_o *v7; // x20
  int32_t stringLength; // w1
  System_String_o *v9; // x20
  __int64 v10; // x2
  DebugTestRootComponent_c *v11; // x8
  System_String_o *v12; // x21
  struct System_String_o *oldScheme; // x8
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596DBE4 & 1) == 0 )
  {
    sub_2213A60(&DebugTestRootComponent_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596DBE4 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  v5 = *url;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !v5 )
    goto LABEL_25;
  if ( System_String__StartsWith(v5, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0) )
  {
    v4 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v6);
      v4 = NetworkManager_TypeInfo;
    }
    v7 = (System_String_o *)**((_QWORD **)v4 + 23);
    if ( v7 )
    {
      v4 = *url;
      if ( *url )
      {
        stringLength = v7->fields._stringLength;
LABEL_23:
        v14 = System_String__Substring((System_String_o *)v4, stringLength, 0);
        v15 = UnityEngine_Networking_UnityWebRequest__EscapeURL(v14, 0);
        v16 = System_String__Concat_75651716(v7, v15, 0);
        *url = v16;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)url, (int32_t)v16, v17, v18, v19, v20, v21, v22);
        return;
      }
    }
    goto LABEL_25;
  }
  v9 = *url;
  v4 = DebugTestRootComponent_TypeInfo;
  if ( !*(&DebugTestRootComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DebugTestRootComponent_TypeInfo, method, v6);
  if ( !v9 )
    goto LABEL_25;
  if ( System_String__StartsWith(v9, DebugTestRootComponent_TypeInfo->static_fields->oldScheme, 0) )
  {
    v4 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v10);
      v4 = NetworkManager_TypeInfo;
    }
    v11 = DebugTestRootComponent_TypeInfo;
    v12 = *url;
    v7 = (System_String_o *)**((_QWORD **)v4 + 23);
    if ( !*(&DebugTestRootComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DebugTestRootComponent_TypeInfo, method, v10);
      v11 = DebugTestRootComponent_TypeInfo;
    }
    oldScheme = v11->static_fields->oldScheme;
    if ( oldScheme && v12 )
    {
      stringLength = oldScheme->fields._stringLength;
      v4 = v12;
      goto LABEL_23;
    }
LABEL_25:
    sub_2213CDC(v4, method);
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

  if ( (byte_596DC0B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_endSetUserServerTime__);
    byte_596DC0B = 1;
  }
  dbgUserServerTimeMenu = this->fields.dbgUserServerTimeMenu;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_DebugTestRootComponent_endSetUserServerTime__, 0);
  if ( !dbgUserServerTimeMenu )
    sub_2213CDC(v5, v6);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200818C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2008144;
}


System_IAsyncResult_o *DebugTestRootComponent_ScriptReloadCallback__BeginInvoke(
        DebugTestRootComponent_ScriptReloadCallback_o *this,
        int32_t jumpLine,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = jumpLine;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void DebugTestRootComponent_ScriptReloadCallback__EndInvoke(
        DebugTestRootComponent_ScriptReloadCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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


void DebugTestRootComponent__RequestFileCR_d__77___ctor(
        DebugTestRootComponent__RequestFileCR_d__77_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DebugTestRootComponent__RequestFileCR_d__77__MoveNext(
        DebugTestRootComponent__RequestFileCR_d__77_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  void *_8__1; // x0
  struct System_Action_o *failedCallback; // x1
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  struct UnityEngine_Networking_UnityWebRequest_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  float time; // s8
  ManagerConfig_c *v36; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  float TIMEOUT; // s0
  float downloadProgress; // s0
  float loadProgress_5__4; // s9
  float v41; // s8
  __int64 v42; // x2
  float v43; // s0
  bool v44; // zf
  float v45; // s8
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_o *error; // x0
  struct System_String_o *v53; // x1
  struct DebugTestRootComponent___c__DisplayClass77_0_o *v54; // x8
  Il2CppObject *Instance; // x21
  System_String_o *errorMessage_5__5; // x20
  Il2CppObject *v57; // x23
  ErrorDialog_ClickDelegate_o *v58; // x22
  struct System_Action_string__o *v59; // x20
  ManagerConfig_c *v60; // x0
  struct ManagerConfig_StaticFields *v61; // x8
  UnityEngine_WaitForEndOfFrame_o *v62; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  bool result; // w0
  struct System_Action_string__o *successCallback; // x8
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]

  if ( (byte_596DC1D & 1) == 0 )
  {
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&DebugTestRootComponent_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass77_0__RequestFileCR_b__0__);
    sub_2213A60(&DebugTestRootComponent___c__DisplayClass77_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_2213A60(&StringLiteral_20343/*"file download time over"*/);
    sub_2213A60(&StringLiteral_4838/*"Connect Script Error"*/);
    byte_596DC1D = 1;
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
    v4 = (Il2CppObject *)sub_2213CCC(DebugTestRootComponent___c__DisplayClass77_0_TypeInfo);
    System_Object___ctor(v4, 0);
    this->fields.__8__1 = (struct DebugTestRootComponent___c__DisplayClass77_0_o *)v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_46;
    failedCallback = this->fields.failedCallback;
    *((_QWORD *)_8__1 + 2) = failedCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)_8__1 + 16),
      (int32_t)failedCallback,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    if ( !*(&DebugTestRootComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DebugTestRootComponent_TypeInfo, v19, v20);
    DebugTestRootComponent__scriptEscapeURL(&this->fields.fullPath, v19);
    v21 = UnityEngine_Networking_UnityWebRequest__Get(this->fields.fullPath, 0);
    this->fields._loader_5__2 = v21;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._loader_5__2,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    time = UnityEngine_Time__get_time(0);
    v36 = ManagerConfig_TypeInfo;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v28, v29);
      v36 = ManagerConfig_TypeInfo;
    }
    static_fields = v36->static_fields;
    this->fields._errorMessage_5__5 = 0;
    TIMEOUT = static_fields->TIMEOUT;
    this->fields._loadProgress_5__4 = 0.0;
    this->fields._requestTime_5__3 = time + TIMEOUT;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._errorMessage_5__5, 0, v29, v30, v31, v32, v33, v34);
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
    v41 = downloadProgress;
    v43 = UnityEngine_Time__get_time(0);
    v44 = v41 == loadProgress_5__4;
    v45 = v43;
    if ( !v44 )
    {
      v60 = ManagerConfig_TypeInfo;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v42);
        v60 = ManagerConfig_TypeInfo;
      }
      v61 = v60->static_fields;
      _8__1 = this->fields._loader_5__2;
      this->fields._requestTime_5__3 = v45 + v61->TIMEOUT;
      if ( _8__1 )
      {
        this->fields._loadProgress_5__4 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)_8__1,
                                            0);
        goto LABEL_40;
      }
LABEL_46:
      sub_2213CDC(_8__1, method);
    }
    if ( v43 < this->fields._requestTime_5__3 )
    {
LABEL_40:
      v62 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v62, 0);
      this->fields.__2__current = (Il2CppObject *)v62;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v62, v64, v65, v66, v67, v68, v69);
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
    v53 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)_8__1, 0);
  }
  else
  {
    v53 = (struct System_String_o *)StringLiteral_20343/*"file download time over"*/;
  }
  this->fields._errorMessage_5__5 = v53;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._errorMessage_5__5,
    (int32_t)v53,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
LABEL_27:
  if ( this->fields._errorMessage_5__5 )
  {
    v54 = this->fields.__8__1;
    if ( !v54 )
      goto LABEL_46;
    if ( v54->fields.failedCallback )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorMessage_5__5 = this->fields._errorMessage_5__5;
      v57 = (Il2CppObject *)this->fields.__8__1;
      v58 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v58,
        v57,
        Method_DebugTestRootComponent___c__DisplayClass77_0__RequestFileCR_b__0__,
        0);
      if ( !Instance )
        goto LABEL_46;
      *(_QWORD *)&effectDistance.fields.hasValue = 0;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        (CommonUI_o *)Instance,
        (System_String_o *)StringLiteral_4838/*"Connect Script Error"*/,
        errorMessage_5__5,
        v58,
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
    v59 = this->fields.successCallback;
    _8__1 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
              (UnityEngine_Networking_UnityWebRequest_o *)_8__1,
              0);
    if ( !_8__1 )
      goto LABEL_46;
    _8__1 = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)_8__1, 0);
    if ( !v59 )
      goto LABEL_46;
    ((void (__fastcall *)(intptr_t, void *, intptr_t))v59->fields.invoke_impl)(
      v59->fields.method_code,
      _8__1,
      v59->fields.method);
  }
  _8__1 = this->fields._loader_5__2;
  if ( !_8__1 )
    goto LABEL_46;
  UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)_8__1, 0);
  return 0;
}


Il2CppObject *DebugTestRootComponent__RequestFileCR_d__77__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DebugTestRootComponent__RequestFileCR_d__77_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DebugTestRootComponent__RequestFileCR_d__77__System_Collections_IEnumerator_Reset(
        DebugTestRootComponent__RequestFileCR_d__77_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DebugTestRootComponent__RequestFileCR_d__77_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *DebugTestRootComponent__RequestFileCR_d__77__System_Collections_IEnumerator_get_Current(
        DebugTestRootComponent__RequestFileCR_d__77_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DebugTestRootComponent__RequestFileCR_d__77__System_IDisposable_Dispose(
        DebugTestRootComponent__RequestFileCR_d__77_o *this,
        const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent__RequestScriptFileCR_d__76___ctor(
        DebugTestRootComponent__RequestScriptFileCR_d__76_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DebugTestRootComponent__RequestScriptFileCR_d__76__MoveNext(
        DebugTestRootComponent__RequestScriptFileCR_d__76_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct DebugTestRootComponent_o *_4__this; // x20
  Il2CppObject *v5; // x22
  struct DebugTestRootComponent___c__DisplayClass76_0_o **p__8__1; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  char *String_75682240; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x21
  System_String_o *ConnectPath; // x22
  System_String_o *v29; // x0
  struct System_String_o *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *v37; // x23
  System_Action_object__o *v38; // x22
  const MethodInfo *v39; // x4
  Il2CppObject *v40; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  bool result; // w0
  System_String_o *orgPath_5__2; // x21
  Il2CppObject *v50; // x23
  System_Action_object__o *v51; // x22
  const MethodInfo *v52; // x4
  Il2CppObject *v53; // x0
  Il2CppObject **v54; // x19
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct DebugTestRootComponent___c__DisplayClass76_0_o *_8__1; // x21
  MissionNaviTransitionBoardItem_o *p_fields; // x21
  struct System_String_o *scriptData; // t1
  System_String_o *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x0
  __int64 v72; // x1
  const MethodInfo *v73; // x4
  struct DebugTestRootComponent___c__DisplayClass76_0_o *v74; // x8
  __int128 v75; // q0
  __int128 v76; // q1
  System_String_o *v77; // x2
  System_String_o *orgData; // x3
  ScriptConnectData_o v79; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_596DC1E & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__TypeInfo);
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass76_0__RequestScriptFileCR_b__0__);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass76_0__RequestScriptFileCR_b__1__);
    sub_2213A60(&DebugTestRootComponent___c__DisplayClass76_0_TypeInfo);
    sub_2213A60(&StringLiteral_16657/*"\\"*/);
    sub_2213A60(&StringLiteral_1114/*".org"*/);
    sub_2213A60(&StringLiteral_1119/*".txt"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DC1E = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    String_75682240 = (char *)sub_2213B20(char___TypeInfo, 1);
    if ( !String_75682240 )
      goto LABEL_22;
    if ( !*((_DWORD *)String_75682240 + 6) )
      sub_2213CE4(String_75682240);
    *((_WORD *)String_75682240 + 16) = -257;
    String_75682240 = (char *)System_String__CreateString_75682240(0, (System_Char_array *)String_75682240, 0);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_22;
    v13 = (System_String_o *)String_75682240;
    scriptData = _8__1->fields.scriptData;
    p_fields = (MissionNaviTransitionBoardItem_o *)&_8__1->fields;
    String_75682240 = (char *)scriptData;
    if ( !scriptData )
      goto LABEL_22;
    v64 = System_String__Replace_75703400(
            (System_String_o *)String_75682240,
            v13,
            (System_String_o *)StringLiteral_1/*""*/,
            0);
    p_fields->klass = (MissionNaviTransitionBoardItem_c *)v64;
    sub_2213A04(p_fields, (int32_t)v64, v65, v66, v67, v68, v69, v70);
    if ( !_4__this )
      sub_2213CDC(v71, v72);
    v74 = this->fields.__8__1;
    if ( !v74 )
      sub_2213CDC(v71, v72);
    v75 = *(_OWORD *)&_4__this->fields.currentConnectData.fields.ConnectPath;
    v76 = *(_OWORD *)&_4__this->fields.currentConnectData.fields.EndCallback;
    v77 = v74->fields.scriptData;
    orgData = v74->fields.orgData;
    *(_QWORD *)&v79.fields.JumpLine = *(_QWORD *)&_4__this->fields.currentConnectData.fields.JumpLine;
    *(_OWORD *)&v79.fields.ConnectPath = v75;
    *(_OWORD *)&v79.fields.EndCallback = v76;
    DebugTestRootComponent__StartScript(_4__this, &v79, v77, orgData, v73);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v5 = (Il2CppObject *)sub_2213CCC(DebugTestRootComponent___c__DisplayClass76_0_TypeInfo);
      System_Object___ctor(v5, 0);
      this->fields.__8__1 = (struct DebugTestRootComponent___c__DisplayClass76_0_o *)v5;
      p__8__1 = &this->fields.__8__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v5, v7, v8, v9, v10, v11, v12);
      String_75682240 = (char *)this->fields.__8__1;
      if ( String_75682240 )
      {
        *((_QWORD *)String_75682240 + 2) = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(String_75682240 + 16), 0, v14, v15, v16, v17, v18, v19);
        String_75682240 = (char *)*p__8__1;
        if ( *p__8__1 )
        {
          *((_QWORD *)String_75682240 + 3) = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(String_75682240 + 24), 0, v21, v22, v23, v24, v25, v26);
          String_75682240 = (char *)System_String__Concat_75694928(
                                      this->fields.connectData.fields.ConnectPath,
                                      (System_String_o *)StringLiteral_16657/*"\\"*/,
                                      this->fields.connectData.fields.ObjectPath,
                                      0);
          if ( this->fields.connectData.fields.ObjectPath )
          {
            v27 = (System_String_o *)String_75682240;
            ConnectPath = this->fields.connectData.fields.ConnectPath;
            v29 = System_String__Replace_75703400(
                    this->fields.connectData.fields.ObjectPath,
                    (System_String_o *)StringLiteral_1119/*".txt"*/,
                    (System_String_o *)StringLiteral_1114/*".org"*/,
                    0);
            v30 = System_String__Concat_75694928(ConnectPath, (System_String_o *)StringLiteral_16657/*"\\"*/, v29, 0);
            this->fields._orgPath_5__2 = v30;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._orgPath_5__2,
              (int32_t)v30,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36);
            v37 = (Il2CppObject *)this->fields.__8__1;
            v38 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v38,
              v37,
              Method_DebugTestRootComponent___c__DisplayClass76_0__RequestScriptFileCR_b__0__,
              0);
            if ( _4__this )
            {
              v40 = (Il2CppObject *)DebugTestRootComponent__RequestFileCR(
                                      (DebugTestRootComponent_o *)String_75682240,
                                      v27,
                                      (System_Action_string__o *)v38,
                                      this->fields.connectData.fields.ErrorCallback,
                                      v39);
              this->fields.__2__current = v40;
              p__2__current = &this->fields.__2__current;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v40, v42, v43, v44, v45, v46, v47);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
LABEL_22:
      sub_2213CDC(String_75682240, v13);
    }
    return 0;
  }
  v50 = (Il2CppObject *)this->fields.__8__1;
  orgPath_5__2 = this->fields._orgPath_5__2;
  this->fields.__1__state = -1;
  v51 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
  System_Action_object____ctor(
    v51,
    v50,
    Method_DebugTestRootComponent___c__DisplayClass76_0__RequestScriptFileCR_b__1__,
    0);
  if ( !_4__this )
    goto LABEL_22;
  v53 = (Il2CppObject *)DebugTestRootComponent__RequestFileCR(
                          (DebugTestRootComponent_o *)String_75682240,
                          orgPath_5__2,
                          (System_Action_string__o *)v51,
                          0,
                          v52);
  this->fields.__2__current = v53;
  v54 = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v54, (int32_t)v53, v55, v56, v57, v58, v59, v60);
  result = 1;
  *((_DWORD *)v54 - 2) = 2;
  return result;
}


Il2CppObject *DebugTestRootComponent__RequestScriptFileCR_d__76__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DebugTestRootComponent__RequestScriptFileCR_d__76_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DebugTestRootComponent__RequestScriptFileCR_d__76__System_Collections_IEnumerator_Reset(
        DebugTestRootComponent__RequestScriptFileCR_d__76_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DebugTestRootComponent__RequestScriptFileCR_d__76_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *DebugTestRootComponent__RequestScriptFileCR_d__76__System_Collections_IEnumerator_get_Current(
        DebugTestRootComponent__RequestScriptFileCR_d__76_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DebugTestRootComponent__RequestScriptFileCR_d__76__System_IDisposable_Dispose(
        DebugTestRootComponent__RequestScriptFileCR_d__76_o *this,
        const MethodInfo *method)
{
  ;
}


void DebugTestRootComponent___c__DisplayClass116_0___ctor(
        DebugTestRootComponent___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass116_0___StartNoblePhantasm_b__0(
        DebugTestRootComponent___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  DebugTestRootComponent___c__DisplayClass116_0_o *v2; // x19
  struct DebugTestRootComponent_o *_4__this; // x8
  struct DebugTestRootComponent_o *v4; // x8
  UILabel_o *v5; // x19
  System_String_o *v6; // x0

  v2 = this;
  if ( (byte_596DC10 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UILabel___);
    this = (DebugTestRootComponent___c__DisplayClass116_0_o *)sub_2213A60(&StringLiteral_8792/*"LimitCount:"*/);
    byte_596DC10 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (DebugTestRootComponent___c__DisplayClass116_0_o *)v2->fields.limitCountLabel,
        _4__this->fields.ServantLimitCount = (_4__this->fields.ServantLimitCount + 1) % 5,
        !this)
    || (this = (DebugTestRootComponent___c__DisplayClass116_0_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)this,
                                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UILabel___),
        (v4 = v2->fields.__4__this) == 0)
    || (v5 = (UILabel_o *)this,
        v6 = System_Int32__ToString((int)v4 + 376, 0),
        this = (DebugTestRootComponent___c__DisplayClass116_0_o *)System_String__Concat_75651716(
                                                                    (System_String_o *)StringLiteral_8792/*"LimitCount:"*/,
                                                                    v6,
                                                                    0),
        !v5) )
  {
    sub_2213CDC(this, method);
  }
  UILabel__set_text(v5, (System_String_o *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass116_0___StartNoblePhantasm_b__1(
        DebugTestRootComponent___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  DebugTestRootComponent___c__DisplayClass116_0_o *v2; // x19
  struct DebugTestRootComponent_o *_4__this; // x8
  struct DebugTestRootComponent_o *v4; // x8

  v2 = this;
  if ( (byte_596DC11 & 1) == 0 )
  {
    this = (DebugTestRootComponent___c__DisplayClass116_0_o *)sub_2213A60(&StringLiteral_6703/*"FINISHED"*/);
    byte_596DC11 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (DebugTestRootComponent___c__DisplayClass116_0_o *)_4__this->fields.NoblePhantasmSelectPanel) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0), (v4 = v2->fields.__4__this) == 0)
    || (this = (DebugTestRootComponent___c__DisplayClass116_0_o *)v4->fields.myFSM) == 0 )
  {
    sub_2213CDC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6703/*"FINISHED"*/, 0);
}


void DebugTestRootComponent___c__DisplayClass116_1___ctor(
        DebugTestRootComponent___c__DisplayClass116_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass116_1___StartNoblePhantasm_b__2(
        DebugTestRootComponent___c__DisplayClass116_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DebugTestRootComponent___c__DisplayClass116_1_o *v3; // x19
  struct DebugTestRootComponent___c__DisplayClass116_0_o *CS___8__locals1; // x8
  struct ServantEntity_o *svt; // x9
  __int64 v6; // x20
  __int64 v7; // x21
  DebugTestRootComponent_o *_4__this; // x19
  const MethodInfo *v9; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v3 = this;
  if ( (byte_596DC12 & 1) == 0 )
  {
    this = (DebugTestRootComponent___c__DisplayClass116_1_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596DC12 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  svt = v3->fields.svt;
  if ( !svt )
    goto LABEL_9;
  v6 = *(_QWORD *)&svt->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svt->fields.id.fields.fakeValue;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  this = (DebugTestRootComponent___c__DisplayClass116_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                              v10,
                                                              0);
  if ( !_4__this )
LABEL_9:
    sub_2213CDC(this, method);
  DebugTestRootComponent__ClickNoblePhantasm(_4__this, (int32_t)this, v9);
}


void DebugTestRootComponent___c__DisplayClass76_0___ctor(
        DebugTestRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass76_0___RequestScriptFileCR_b__0(
        DebugTestRootComponent___c__DisplayClass76_0_o *this,
        System_String_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.scriptData = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DebugTestRootComponent___c__DisplayClass76_0___RequestScriptFileCR_b__1(
        DebugTestRootComponent___c__DisplayClass76_0_o *this,
        System_String_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.orgData = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.orgData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DebugTestRootComponent___c__DisplayClass77_0___ctor(
        DebugTestRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent___c__DisplayClass77_0___RequestFileCR_b__0(
        DebugTestRootComponent___c__DisplayClass77_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct System_Action_o *failedCallback; // x8

  failedCallback = this->fields.failedCallback;
  if ( !failedCallback )
    sub_2213CDC(this, isDecide);
  ((void (__fastcall *)(intptr_t, intptr_t))failedCallback->fields.invoke_impl)(
    failedCallback->fields.method_code,
    failedCallback->fields.method);
}


void DebugTestRootComponent___c__DisplayClass79_0___ctor(
        DebugTestRootComponent___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass79_0___StartScript_b__0(
        DebugTestRootComponent___c__DisplayClass79_0_o *this,
        int32_t viewResult,
        int32_t viewJumpLine,
        const MethodInfo *method)
{
  __int64 v7; // x23
  ScriptTextViewMenu_o *scriptTextViewMenu; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  unsigned int v16; // w8
  struct DebugTestRootComponent_o *_4__this; // x20
  System_String_o *scriptData; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x5
  System_Action_o *_9__3; // x23
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Action_o *ErrorCallback; // x8

  if ( (byte_596DC13 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass79_0__StartScript_b__3__);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass79_1__StartScript_b__2__);
    sub_2213A60(&DebugTestRootComponent___c__DisplayClass79_1_TypeInfo);
    byte_596DC13 = 1;
  }
  v7 = sub_2213CCC(DebugTestRootComponent___c__DisplayClass79_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v16 = viewResult & 0xFFFFFFFE;
  _4__this = this->fields.__4__this;
  *(_DWORD *)(v7 + 16) = viewJumpLine;
  if ( v16 == 2 )
  {
    scriptData = this->fields.scriptData;
    v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v7,
      Method_DebugTestRootComponent___c__DisplayClass79_1__StartScript_b__2__,
      0);
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_DebugTestRootComponent___c__DisplayClass79_0__StartScript_b__3__,
        0);
      this->fields.__9__3 = _9__3;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__9__3,
        (int32_t)_9__3,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    if ( _4__this )
    {
      DebugTestRootComponent__ScriptCheckAndStart(_4__this, scriptData, 0, v19, _9__3, v20);
      return;
    }
LABEL_15:
    sub_2213CDC(scriptTextViewMenu, v9);
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


void DebugTestRootComponent___c__DisplayClass79_0___StartScript_b__1(
        DebugTestRootComponent___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugTestRootComponent___c__DisplayClass79_0_o *v3; // x19
  __int128 v4; // q1
  __int64 v5; // x8
  System_String_o *DebugScriptStartMode; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *scriptData; // x20
  System_String_o *v10; // x22
  System_String_o *orgData; // x21
  ScriptManager_c *v12; // x0
  ScriptManager_CallbackFunc_o *_9__5; // x25
  int32_t JumpLine; // w24
  int32_t scriptGenderSettingIndex; // w23
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *_4__this; // x26
  DebugTestRootComponent_ScriptReloadCallback_o *v23; // x19
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  __int64 v26; // x2
  ScriptConnectData_o v27; // [xsp+0h] [xbp-90h] BYREF

  v3 = this;
  if ( (byte_596DC15 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_OnReloadScript__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass79_0_o *)sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass79_0__StartScript_b__5__);
    byte_596DC15 = 1;
  }
  if ( !v3->fields.__4__this )
    sub_2213CDC(this, method);
  v4 = *(_OWORD *)&v3->fields.connectData.fields.EndCallback;
  v5 = *(_QWORD *)&v3->fields.connectData.fields.JumpLine;
  *(_OWORD *)&v27.fields.ConnectPath = *(_OWORD *)&v3->fields.connectData.fields.ConnectPath;
  *(_OWORD *)&v27.fields.EndCallback = v4;
  *(_QWORD *)&v27.fields.JumpLine = v5;
  DebugScriptStartMode = DebugTestRootComponent__GetDebugScriptStartMode((DebugTestRootComponent_o *)this, &v27, v2);
  scriptData = v3->fields.scriptData;
  v10 = DebugScriptStartMode;
  orgData = v3->fields.orgData;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7, v8);
  if ( !byte_596DC8E )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DC8E = 1;
  }
  v12 = ScriptManager_TypeInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7, v8);
    v12 = ScriptManager_TypeInfo;
  }
  _9__5 = v3->fields.__9__5;
  JumpLine = v3->fields.connectData.fields.JumpLine;
  scriptGenderSettingIndex = v12->static_fields->scriptGenderSettingIndex;
  if ( !_9__5 )
  {
    _9__5 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_DebugTestRootComponent___c__DisplayClass79_0__StartScript_b__5__,
      0);
    v3->fields.__9__5 = _9__5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__5, (int32_t)_9__5, v16, v17, v18, v19, v20, v21);
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  v23 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_2213CCC(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(v23, _4__this, Method_DebugTestRootComponent_OnReloadScript__, v24);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v25, v26);
  ScriptManager__DebugPlay_51776400(v10, scriptData, orgData, scriptGenderSettingIndex, JumpLine, _9__5, v23, 0);
}


void DebugTestRootComponent___c__DisplayClass79_0___StartScript_b__3(
        DebugTestRootComponent___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  struct DebugTestRootComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (DebugTestRootComponent___c__DisplayClass79_0_o *)_4__this->fields.scriptTextViewMenu) == 0 )
    sub_2213CDC(this, method);
  ScriptTextViewMenu__Reset((ScriptTextViewMenu_o *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass79_0___StartScript_b__4(
        DebugTestRootComponent___c__DisplayClass79_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_Action_o *ErrorCallback; // x8

  if ( (byte_596DC14 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DC14 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_2213CDC(Instance, v5);
  }
}


void DebugTestRootComponent___c__DisplayClass79_0___StartScript_b__5(
        DebugTestRootComponent___c__DisplayClass79_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_Action_o *ErrorCallback; // x8

  if ( (byte_596DC16 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DC16 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_2213CDC(Instance, v5);
  }
}


void DebugTestRootComponent___c__DisplayClass79_1___ctor(
        DebugTestRootComponent___c__DisplayClass79_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass79_1___StartScript_b__2(
        DebugTestRootComponent___c__DisplayClass79_1_o *this,
        const MethodInfo *method)
{
  DebugTestRootComponent___c__DisplayClass79_1_o *v2; // x19
  struct DebugTestRootComponent___c__DisplayClass79_0_o *CS___8__locals1; // x8
  struct DebugTestRootComponent_o *_4__this; // x8
  const MethodInfo *v5; // x2
  struct DebugTestRootComponent___c__DisplayClass79_0_o *v6; // x8
  __int128 v7; // q0
  __int128 v8; // q1
  __int64 v9; // x8
  __int64 v10; // x2
  struct DebugTestRootComponent___c__DisplayClass79_0_o *v11; // x8
  DebugTestRootComponent___c__DisplayClass79_1_o *v12; // x20
  System_String_o *scriptData; // x21
  System_String_o *orgData; // x22
  struct DebugTestRootComponent___c__DisplayClass79_0_o *v15; // x26
  int32_t viewJumpLine; // w24
  ScriptManager_CallbackFunc_o *_9__4; // x25
  int32_t JumpLine; // w23
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x26
  DebugTestRootComponent_ScriptReloadCallback_o *v26; // x19
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  __int64 v29; // x2
  ScriptConnectData_o v30; // [xsp+0h] [xbp-90h] BYREF

  v2 = this;
  if ( (byte_596DC17 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_OnReloadScript__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass79_1_o *)sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass79_0__StartScript_b__4__);
    byte_596DC17 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_21;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  this = (DebugTestRootComponent___c__DisplayClass79_1_o *)_4__this->fields.scriptTextViewMenu;
  if ( !this )
    goto LABEL_21;
  ScriptTextViewMenu__Close((ScriptTextViewMenu_o *)this, 0);
  v6 = v2->fields.CS___8__locals1;
  if ( !v6 )
    goto LABEL_21;
  if ( !v6->fields.__4__this )
    goto LABEL_21;
  v7 = *(_OWORD *)&v6->fields.connectData.fields.ConnectPath;
  v8 = *(_OWORD *)&v6->fields.connectData.fields.EndCallback;
  v9 = *(_QWORD *)&v6->fields.connectData.fields.JumpLine;
  *(_OWORD *)&v30.fields.ConnectPath = v7;
  *(_OWORD *)&v30.fields.EndCallback = v8;
  *(_QWORD *)&v30.fields.JumpLine = v9;
  this = (DebugTestRootComponent___c__DisplayClass79_1_o *)DebugTestRootComponent__GetDebugScriptStartMode(
                                                             (DebugTestRootComponent_o *)this,
                                                             &v30,
                                                             v5);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_21;
  v12 = this;
  scriptData = v11->fields.scriptData;
  orgData = v11->fields.orgData;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v10);
  if ( !byte_596DC8E )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DC8E = 1;
  }
  this = (DebugTestRootComponent___c__DisplayClass79_1_o *)ScriptManager_TypeInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v10);
    this = (DebugTestRootComponent___c__DisplayClass79_1_o *)ScriptManager_TypeInfo;
  }
  v15 = v2->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_21;
  viewJumpLine = v2->fields.viewJumpLine;
  _9__4 = v15->fields.__9__4;
  JumpLine = this[5].fields.CS___8__locals1[1].fields.connectData.fields.JumpLine;
  if ( !_9__4 )
  {
    _9__4 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)v15,
      Method_DebugTestRootComponent___c__DisplayClass79_0__StartScript_b__4__,
      0);
    v15->fields.__9__4 = _9__4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->fields.__9__4, (int32_t)_9__4, v19, v20, v21, v22, v23, v24);
    v15 = v2->fields.CS___8__locals1;
    if ( !v15 )
LABEL_21:
      sub_2213CDC(this, method);
  }
  v25 = (Il2CppObject *)v15->fields.__4__this;
  v26 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_2213CCC(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(v26, v25, Method_DebugTestRootComponent_OnReloadScript__, v27);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v28, v29);
  ScriptManager__DebugPlay_51776400((System_String_o *)v12, scriptData, orgData, JumpLine, viewJumpLine, _9__4, v26, 0);
}


void DebugTestRootComponent___c__DisplayClass81_0___ctor(
        DebugTestRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugTestRootComponent___c__DisplayClass81_0___ScriptCheckAndStart_b__0(
        DebugTestRootComponent___c__DisplayClass81_0_o *this,
        bool b,
        const MethodInfo *method)
{
  struct DebugTestRootComponent_o *_4__this; // x8
  DebugTestRootComponent___c__DisplayClass81_0_o *v4; // x19
  struct System_Action_o *scriptStartAction; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (DebugTestRootComponent___c__DisplayClass81_0_o *)_4__this->fields.scriptBranchMenu) == 0) )
  {
LABEL_5:
    sub_2213CDC(this, b);
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


void DebugTestRootComponent___c__DisplayClass91_0___ctor(
        DebugTestRootComponent___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass91_0___LoadFileScript_b__0(
        DebugTestRootComponent___c__DisplayClass91_0_o *this,
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


void DebugTestRootComponent___c__DisplayClass91_0___LoadFileScript_b__1(
        DebugTestRootComponent___c__DisplayClass91_0_o *this,
        int32_t viewResult,
        int32_t viewJumpLine,
        const MethodInfo *method)
{
  __int64 v7; // x24
  ScriptTextViewMenu_o *scriptTextViewMenu; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  unsigned int v16; // w8
  struct DebugTestRootComponent_o *_4__this; // x20
  System_String_o *scriptData; // x21
  System_String_o *orgScriptData; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x5
  System_Action_o *_9__4; // x24
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Action_o *EndCallback; // x8

  if ( (byte_596DC18 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__4__);
    sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass91_1__LoadFileScript_b__3__);
    sub_2213A60(&DebugTestRootComponent___c__DisplayClass91_1_TypeInfo);
    byte_596DC18 = 1;
  }
  v7 = sub_2213CCC(DebugTestRootComponent___c__DisplayClass91_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v16 = viewResult & 0xFFFFFFFE;
  _4__this = this->fields.__4__this;
  *(_DWORD *)(v7 + 16) = viewJumpLine;
  if ( v16 == 2 )
  {
    scriptData = this->fields.scriptData;
    orgScriptData = this->fields.orgScriptData;
    v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v7,
      Method_DebugTestRootComponent___c__DisplayClass91_1__LoadFileScript_b__3__,
      0);
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__4__,
        0);
      this->fields.__9__4 = _9__4;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__9__4,
        (int32_t)_9__4,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    if ( _4__this )
    {
      DebugTestRootComponent__ScriptCheckAndStart(_4__this, scriptData, orgScriptData, v20, _9__4, v21);
      return;
    }
LABEL_14:
    sub_2213CDC(scriptTextViewMenu, v9);
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


void DebugTestRootComponent___c__DisplayClass91_0___LoadFileScript_b__2(
        DebugTestRootComponent___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DebugTestRootComponent___c__DisplayClass91_0_o *v3; // x19
  __int128 v4; // q1
  __int64 v5; // x8
  System_String_o *DebugScriptStartMode; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *scriptData; // x20
  System_String_o *orgScriptData; // x21
  System_String_o *v11; // x22
  ScriptManager_c *v12; // x0
  ScriptManager_CallbackFunc_o *_9__6; // x25
  int32_t JumpLine; // w24
  int32_t scriptGenderSettingIndex; // w23
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *_4__this; // x26
  DebugTestRootComponent_ScriptReloadCallback_o *v23; // x19
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  __int64 v26; // x2
  ScriptConnectData_o v27; // [xsp+0h] [xbp-90h] BYREF

  v3 = this;
  if ( (byte_596DC1A & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_OnReloadFileScript__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass91_0_o *)sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__6__);
    byte_596DC1A = 1;
  }
  if ( !v3->fields.__4__this )
    sub_2213CDC(this, method);
  v4 = *(_OWORD *)&v3->fields.connectData.fields.EndCallback;
  v5 = *(_QWORD *)&v3->fields.connectData.fields.JumpLine;
  *(_OWORD *)&v27.fields.ConnectPath = *(_OWORD *)&v3->fields.connectData.fields.ConnectPath;
  *(_OWORD *)&v27.fields.EndCallback = v4;
  *(_QWORD *)&v27.fields.JumpLine = v5;
  DebugScriptStartMode = DebugTestRootComponent__GetDebugScriptStartMode((DebugTestRootComponent_o *)this, &v27, v2);
  scriptData = v3->fields.scriptData;
  orgScriptData = v3->fields.orgScriptData;
  v11 = DebugScriptStartMode;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7, v8);
  if ( !byte_596DC8E )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DC8E = 1;
  }
  v12 = ScriptManager_TypeInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7, v8);
    v12 = ScriptManager_TypeInfo;
  }
  _9__6 = v3->fields.__9__6;
  JumpLine = v3->fields.connectData.fields.JumpLine;
  scriptGenderSettingIndex = v12->static_fields->scriptGenderSettingIndex;
  if ( !_9__6 )
  {
    _9__6 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__6__,
      0);
    v3->fields.__9__6 = _9__6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__6, (int32_t)_9__6, v16, v17, v18, v19, v20, v21);
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  v23 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_2213CCC(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(
    v23,
    _4__this,
    Method_DebugTestRootComponent_OnReloadFileScript__,
    v24);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v25, v26);
  ScriptManager__DebugPlay_51776400(v11, scriptData, orgScriptData, scriptGenderSettingIndex, JumpLine, _9__6, v23, 0);
}


void DebugTestRootComponent___c__DisplayClass91_0___LoadFileScript_b__4(
        DebugTestRootComponent___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  struct DebugTestRootComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (DebugTestRootComponent___c__DisplayClass91_0_o *)_4__this->fields.scriptTextViewMenu) == 0 )
    sub_2213CDC(this, method);
  ScriptTextViewMenu__Reset((ScriptTextViewMenu_o *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass91_0___LoadFileScript_b__5(
        DebugTestRootComponent___c__DisplayClass91_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_Action_o *EndCallback; // x8

  if ( (byte_596DC19 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DC19 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0, 0);
  EndCallback = this->fields.connectData.fields.EndCallback;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void DebugTestRootComponent___c__DisplayClass91_0___LoadFileScript_b__6(
        DebugTestRootComponent___c__DisplayClass91_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_Action_o *EndCallback; // x8

  if ( (byte_596DC1B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DC1B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0, 0);
  EndCallback = this->fields.connectData.fields.EndCallback;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void DebugTestRootComponent___c__DisplayClass91_1___ctor(
        DebugTestRootComponent___c__DisplayClass91_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugTestRootComponent___c__DisplayClass91_1___LoadFileScript_b__3(
        DebugTestRootComponent___c__DisplayClass91_1_o *this,
        const MethodInfo *method)
{
  DebugTestRootComponent___c__DisplayClass91_1_o *v2; // x19
  struct DebugTestRootComponent___c__DisplayClass91_0_o *CS___8__locals1; // x8
  struct DebugTestRootComponent_o *_4__this; // x8
  const MethodInfo *v5; // x2
  struct DebugTestRootComponent___c__DisplayClass91_0_o *v6; // x8
  __int128 v7; // q0
  __int128 v8; // q1
  __int64 v9; // x8
  __int64 v10; // x2
  struct DebugTestRootComponent___c__DisplayClass91_0_o *v11; // x8
  DebugTestRootComponent___c__DisplayClass91_1_o *v12; // x20
  System_String_o *scriptData; // x21
  System_String_o *orgScriptData; // x22
  struct DebugTestRootComponent___c__DisplayClass91_0_o *v15; // x26
  int32_t viewJumpLine; // w24
  ScriptManager_CallbackFunc_o *_9__5; // x25
  int32_t v18; // w23
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x26
  DebugTestRootComponent_ScriptReloadCallback_o *v26; // x19
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  __int64 v29; // x2
  ScriptConnectData_o v30; // [xsp+0h] [xbp-90h] BYREF

  v2 = this;
  if ( (byte_596DC1C & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DebugTestRootComponent_OnReloadFileScript__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
    this = (DebugTestRootComponent___c__DisplayClass91_1_o *)sub_2213A60(&Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__5__);
    byte_596DC1C = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_21;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  this = (DebugTestRootComponent___c__DisplayClass91_1_o *)_4__this->fields.scriptTextViewMenu;
  if ( !this )
    goto LABEL_21;
  ScriptTextViewMenu__Close((ScriptTextViewMenu_o *)this, 0);
  v6 = v2->fields.CS___8__locals1;
  if ( !v6 )
    goto LABEL_21;
  if ( !v6->fields.__4__this )
    goto LABEL_21;
  v7 = *(_OWORD *)&v6->fields.connectData.fields.ConnectPath;
  v8 = *(_OWORD *)&v6->fields.connectData.fields.EndCallback;
  v9 = *(_QWORD *)&v6->fields.connectData.fields.JumpLine;
  *(_OWORD *)&v30.fields.ConnectPath = v7;
  *(_OWORD *)&v30.fields.EndCallback = v8;
  *(_QWORD *)&v30.fields.JumpLine = v9;
  this = (DebugTestRootComponent___c__DisplayClass91_1_o *)DebugTestRootComponent__GetDebugScriptStartMode(
                                                             (DebugTestRootComponent_o *)this,
                                                             &v30,
                                                             v5);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_21;
  v12 = this;
  scriptData = v11->fields.scriptData;
  orgScriptData = v11->fields.orgScriptData;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v10);
  if ( !byte_596DC8E )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DC8E = 1;
  }
  this = (DebugTestRootComponent___c__DisplayClass91_1_o *)ScriptManager_TypeInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v10);
    this = (DebugTestRootComponent___c__DisplayClass91_1_o *)ScriptManager_TypeInfo;
  }
  v15 = v2->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_21;
  viewJumpLine = v2->fields.viewJumpLine;
  _9__5 = v15->fields.__9__5;
  v18 = (int32_t)this[5].fields.CS___8__locals1[1].fields.scriptData;
  if ( !_9__5 )
  {
    _9__5 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__5,
      (Il2CppObject *)v15,
      Method_DebugTestRootComponent___c__DisplayClass91_0__LoadFileScript_b__5__,
      0);
    v15->fields.__9__5 = _9__5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->fields.__9__5, (int32_t)_9__5, v19, v20, v21, v22, v23, v24);
    v15 = v2->fields.CS___8__locals1;
    if ( !v15 )
LABEL_21:
      sub_2213CDC(this, method);
  }
  v25 = (Il2CppObject *)v15->fields.__4__this;
  v26 = (DebugTestRootComponent_ScriptReloadCallback_o *)sub_2213CCC(DebugTestRootComponent_ScriptReloadCallback_TypeInfo);
  DebugTestRootComponent_ScriptReloadCallback___ctor(v26, v25, Method_DebugTestRootComponent_OnReloadFileScript__, v27);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v28, v29);
  ScriptManager__DebugPlay_51776400((System_String_o *)v12, scriptData, orgScriptData, v18, viewJumpLine, _9__5, v26, 0);
}