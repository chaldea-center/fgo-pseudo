void __fastcall ClearPlayerPrefs___ctor(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  int64_t v21; // x1
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4B13841 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4591/*"Clear All Player Prefs"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_25537/*"はい"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_10811/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_25531/*"いいえ"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_10810/*"PlayerPrefsの削除"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_25568/*"データ更新のため再起動します。"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_25567/*"データ更新のためゲームを終了します。"*/, v19, v20);
    byte_4B13841 = 1;
  }
  v21 = StringLiteral_10810/*"PlayerPrefsの削除"*/;
  this->fields.windowTitle = (struct System_String_o *)StringLiteral_10810/*"PlayerPrefsの削除"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.windowTitle, v21, v2, v3, v4, v5, v6, v7);
  v22 = StringLiteral_4591/*"Clear All Player Prefs"*/;
  this->fields.allClearTitle = (struct System_String_o *)StringLiteral_4591/*"Clear All Player Prefs"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.allClearTitle, v22, v23, v24, v25, v26, v27, v28);
  v29 = StringLiteral_10811/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  this->fields.message = (struct System_String_o *)StringLiteral_10811/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.message, v29, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_25567/*"データ更新のためゲームを終了します。"*/;
  this->fields.quitMessage = (struct System_String_o *)StringLiteral_25567/*"データ更新のためゲームを終了します。"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.quitMessage, v36, v37, v38, v39, v40, v41, v42);
  v43 = StringLiteral_25568/*"データ更新のため再起動します。"*/;
  this->fields.rebootMessage = (struct System_String_o *)StringLiteral_25568/*"データ更新のため再起動します。"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rebootMessage, v43, v44, v45, v46, v47, v48, v49);
  v50 = StringLiteral_25531/*"いいえ"*/;
  this->fields.cancelBtnMsg = (struct System_String_o *)StringLiteral_25531/*"いいえ"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cancelBtnMsg, v50, v51, v52, v53, v54, v55, v56);
  v57 = StringLiteral_25537/*"はい"*/;
  this->fields.decideBtnMsg = (struct System_String_o *)StringLiteral_25537/*"はい"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.decideBtnMsg, v57, v58, v59, v60, v61, v62, v63);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_String_o *allClearTitle; // x20
  System_String_o *decideBtnMsg; // x21
  System_String_o *cancelBtnMsg; // x22
  __int64 v18; // x8
  System_String_o *v19; // x23
  CommonUI_o *v20; // x24
  CommonConfirmDialog_ClickDelegate_o *v21; // x25

  if ( (byte_4B13840 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClearPlayerPrefs__Dialog_b__9_0__, result, method);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B13840 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, 0LL, 0LL);
  if ( !result )
    return;
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  allClearTitle = this->fields.allClearTitle;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v18 = this->fields.isQuit ? 88LL : 96LL;
  v19 = *(System_String_o **)((char *)&this->klass + v18);
  v20 = (CommonUI_o *)v11;
  v21 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v12, v13, v14);
  CommonConfirmDialog_ClickDelegate___ctor(v21, (Il2CppObject *)this, Method_ClearPlayerPrefs__Dialog_b__9_0__, 0LL);
  if ( !v20 )
LABEL_11:
    sub_1BCAA3C(Instance, v10);
  CommonUI__OpenConfirmDecideDlg(
    v20,
    allClearTitle,
    v19,
    decideBtnMsg,
    cancelBtnMsg,
    v21,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  System_String_o *windowTitle; // x19
  System_String_o *message; // x20
  System_String_o *decideBtnMsg; // x22
  System_String_o *cancelBtnMsg; // x23
  CommonUI_o *v13; // x24
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  CommonConfirmDialog_ClickDelegate_o *v17; // x25
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1383F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClearPlayerPrefs_Dialog__, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B1383F = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  windowTitle = this->fields.windowTitle;
  message = this->fields.message;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v13 = (CommonUI_o *)Instance;
  v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v14, v15, v16);
  CommonConfirmDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v18, v19);
  CommonUI__OpenConfirmDecideDlg(
    v13,
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
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClearPlayerPrefs___Dialog_b__9_0(ClearPlayerPrefs_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *v16; // x0
  System_String_o *windowTitle; // x20
  System_String_o *message; // x21
  System_String_o *decideBtnMsg; // x22
  System_String_o *cancelBtnMsg; // x23
  CommonUI_o *v21; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  CommonConfirmDialog_ClickDelegate_o *v25; // x25

  if ( (byte_4B13842 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ClearPlayerPrefs_Dialog__, v5, v6);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v11, v12);
    byte_4B13842 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, 0LL, 0LL);
  if ( !isDecide )
  {
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    windowTitle = this->fields.windowTitle;
    message = this->fields.message;
    cancelBtnMsg = this->fields.cancelBtnMsg;
    decideBtnMsg = this->fields.decideBtnMsg;
    v21 = (CommonUI_o *)v16;
    v25 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v22, v23, v24);
    CommonConfirmDialog_ClickDelegate___ctor(v25, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
    if ( v21 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v21,
        windowTitle,
        message,
        decideBtnMsg,
        cancelBtnMsg,
        v25,
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( Instance )
    {
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(Instance, v14);
  }
  UnityEngine_PlayerPrefs__DeleteAll(0LL);
  UserSaveData__DeleteData(0, 0LL);
  UserSaveData__Save(0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v15);
  UnityEngine_Application__Quit_69948112(0LL);
}