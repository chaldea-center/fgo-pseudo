void __fastcall ClearPlayerPrefs___ctor(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t v15; // x1
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4B347D7 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_4599/*"Clear All Player Prefs"*/, method);
    sub_1BD3458(&StringLiteral_25575/*"はい"*/, v9);
    sub_1BD3458(&StringLiteral_10826/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/, v10);
    sub_1BD3458(&StringLiteral_25569/*"いいえ"*/, v11);
    sub_1BD3458(&StringLiteral_10825/*"PlayerPrefsの削除"*/, v12);
    sub_1BD3458(&StringLiteral_25606/*"データ更新のため再起動します。"*/, v13);
    sub_1BD3458(&StringLiteral_25605/*"データ更新のためゲームを終了します。"*/, v14);
    byte_4B347D7 = 1;
  }
  v15 = StringLiteral_10825/*"PlayerPrefsの削除"*/;
  this->fields.windowTitle = (struct System_String_o *)StringLiteral_10825/*"PlayerPrefsの削除"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.windowTitle, v15, v2, v3, v4, v5, v6, v7);
  v16 = StringLiteral_4599/*"Clear All Player Prefs"*/;
  this->fields.allClearTitle = (struct System_String_o *)StringLiteral_4599/*"Clear All Player Prefs"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.allClearTitle, v16, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_10826/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  this->fields.message = (struct System_String_o *)StringLiteral_10826/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.message, v23, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_25605/*"データ更新のためゲームを終了します。"*/;
  this->fields.quitMessage = (struct System_String_o *)StringLiteral_25605/*"データ更新のためゲームを終了します。"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.quitMessage, v30, v31, v32, v33, v34, v35, v36);
  v37 = StringLiteral_25606/*"データ更新のため再起動します。"*/;
  this->fields.rebootMessage = (struct System_String_o *)StringLiteral_25606/*"データ更新のため再起動します。"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.rebootMessage, v37, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_25569/*"いいえ"*/;
  this->fields.cancelBtnMsg = (struct System_String_o *)StringLiteral_25569/*"いいえ"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.cancelBtnMsg, v44, v45, v46, v47, v48, v49, v50);
  v51 = StringLiteral_25575/*"はい"*/;
  this->fields.decideBtnMsg = (struct System_String_o *)StringLiteral_25575/*"はい"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.decideBtnMsg, v51, v52, v53, v54, v55, v56, v57);
  this->fields.isQuit = 1;
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
}


void __fastcall ClearPlayerPrefs__DeletePlayerPrefs(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  UnityEngine_PlayerPrefs__DeleteAll(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClearPlayerPrefs__Dialog(ClearPlayerPrefs_o *this, bool result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  System_String_o *allClearTitle; // x20
  System_String_o *decideBtnMsg; // x21
  System_String_o *cancelBtnMsg; // x22
  __int64 v13; // x8
  System_String_o *v14; // x23
  CommonUI_o *v15; // x24
  CommonConfirmDialog_ClickDelegate_o *v16; // x25

  if ( (byte_4B347D6 & 1) == 0 )
  {
    sub_1BD3458(&Method_ClearPlayerPrefs__Dialog_b__9_0__, result);
    sub_1BD3458(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B347D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30803004((CommonUI_o *)Instance, 0LL, 0LL);
  if ( !result )
    return;
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  allClearTitle = this->fields.allClearTitle;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v13 = this->fields.isQuit ? 88LL : 96LL;
  v14 = *(System_String_o **)((char *)&this->klass + v13);
  v15 = (CommonUI_o *)v9;
  v16 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BD36A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v16, (Il2CppObject *)this, Method_ClearPlayerPrefs__Dialog_b__9_0__, 0LL);
  if ( !v15 )
LABEL_11:
    sub_1BD36B4(Instance, v8);
  CommonUI__OpenConfirmDecideDlg(
    v15,
    allClearTitle,
    v14,
    decideBtnMsg,
    cancelBtnMsg,
    v16,
    0,
    0.0,
    15.0,
    0,
    0,
    0,
    240,
    0,
    1,
    0,
    0,
    0LL);
}


void __fastcall ClearPlayerPrefs__StartMenu(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  System_String_o *windowTitle; // x19
  System_String_o *message; // x20
  System_String_o *decideBtnMsg; // x22
  System_String_o *cancelBtnMsg; // x23
  CommonUI_o *v10; // x24
  CommonConfirmDialog_ClickDelegate_o *v11; // x25
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B347D5 & 1) == 0 )
  {
    sub_1BD3458(&Method_ClearPlayerPrefs_Dialog__, method);
    sub_1BD3458(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B347D5 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  windowTitle = this->fields.windowTitle;
  message = this->fields.message;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v10 = (CommonUI_o *)Instance;
  v11 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BD36A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v11, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
  if ( !v10 )
    sub_1BD36B4(v12, v13);
  CommonUI__OpenConfirmDecideDlg(
    v10,
    windowTitle,
    message,
    decideBtnMsg,
    cancelBtnMsg,
    v11,
    0,
    0.0,
    15.0,
    0,
    0,
    0,
    240,
    0,
    1,
    0,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClearPlayerPrefs___Dialog_b__9_0(ClearPlayerPrefs_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  System_String_o *windowTitle; // x20
  System_String_o *message; // x21
  System_String_o *decideBtnMsg; // x22
  System_String_o *cancelBtnMsg; // x23
  CommonUI_o *v16; // x24
  CommonConfirmDialog_ClickDelegate_o *v17; // x25

  if ( (byte_4B347D8 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1BD3458(&Method_ClearPlayerPrefs_Dialog__, v5);
    sub_1BD3458(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v8);
    byte_4B347D8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_30803004((CommonUI_o *)Instance, 0LL, 0LL);
  if ( !isDecide )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    windowTitle = this->fields.windowTitle;
    message = this->fields.message;
    cancelBtnMsg = this->fields.cancelBtnMsg;
    decideBtnMsg = this->fields.decideBtnMsg;
    v16 = (CommonUI_o *)v11;
    v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BD36A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
    if ( v16 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v16,
        windowTitle,
        message,
        decideBtnMsg,
        cancelBtnMsg,
        v17,
        0,
        0.0,
        15.0,
        0,
        0,
        0,
        240,
        0,
        1,
        0,
        0,
        0LL);
      return;
    }
    goto LABEL_13;
  }
  if ( !this->fields.isQuit )
  {
    UserSaveData__DeleteAndInitContinueData(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( Instance )
    {
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1BD36B4(Instance, v10);
  }
  UnityEngine_PlayerPrefs__DeleteAll(0LL);
  UserSaveData__DeleteData(0, 0LL);
  UserSaveData__Save(0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_70072140(0LL);
}