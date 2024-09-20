void __fastcall ClearPlayerPrefs___ctor(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A588AD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4523/*"Clear All Player Prefs"*/);
    sub_1B885B0(&StringLiteral_25282/*"はい"*/);
    sub_1B885B0(&StringLiteral_10676/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/);
    sub_1B885B0(&StringLiteral_25276/*"いいえ"*/);
    sub_1B885B0(&StringLiteral_10675/*"PlayerPrefsの削除"*/);
    sub_1B885B0(&StringLiteral_25313/*"データ更新のため再起動します。"*/);
    sub_1B885B0(&StringLiteral_25312/*"データ更新のためゲームを終了します。"*/);
    byte_4A588AD = 1;
  }
  v5 = StringLiteral_10675/*"PlayerPrefsの削除"*/;
  this->fields.windowTitle = (struct System_String_o *)StringLiteral_10675/*"PlayerPrefsの削除"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.windowTitle, v5, v2, v3);
  v6 = StringLiteral_4523/*"Clear All Player Prefs"*/;
  this->fields.allClearTitle = (struct System_String_o *)StringLiteral_4523/*"Clear All Player Prefs"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allClearTitle, v6, v7, v8);
  v9 = StringLiteral_10676/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  this->fields.message = (struct System_String_o *)StringLiteral_10676/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.message, v9, v10, v11);
  v12 = StringLiteral_25312/*"データ更新のためゲームを終了します。"*/;
  this->fields.quitMessage = (struct System_String_o *)StringLiteral_25312/*"データ更新のためゲームを終了します。"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.quitMessage, v12, v13, v14);
  v15 = StringLiteral_25313/*"データ更新のため再起動します。"*/;
  this->fields.rebootMessage = (struct System_String_o *)StringLiteral_25313/*"データ更新のため再起動します。"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rebootMessage, v15, v16, v17);
  v18 = StringLiteral_25276/*"いいえ"*/;
  this->fields.cancelBtnMsg = (struct System_String_o *)StringLiteral_25276/*"いいえ"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cancelBtnMsg, v18, v19, v20);
  v21 = StringLiteral_25282/*"はい"*/;
  this->fields.decideBtnMsg = (struct System_String_o *)StringLiteral_25282/*"はい"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.decideBtnMsg, v21, v22, v23);
  this->fields.isQuit = 1;
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
}


void __fastcall ClearPlayerPrefs__DeletePlayerPrefs(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  UnityEngine_PlayerPrefs__DeleteAll(0LL);
}


void __fastcall ClearPlayerPrefs__Dialog(ClearPlayerPrefs_o *this, bool result, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  System_String_o *allClearTitle; // x20
  System_String_o *decideBtnMsg; // x21
  System_String_o *cancelBtnMsg; // x22
  __int64 v11; // x8
  System_String_o *v12; // x23
  CommonUI_o *v13; // x24
  CommonConfirmDialog_ClickDelegate_o *v14; // x25

  if ( (byte_4A588AC & 1) == 0 )
  {
    sub_1B885B0(&Method_ClearPlayerPrefs__Dialog_b__9_0__);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A588AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, 0LL, 0LL);
  if ( !result )
    return;
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  allClearTitle = this->fields.allClearTitle;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v11 = this->fields.isQuit ? 88LL : 96LL;
  v12 = *(System_String_o **)((char *)&this->klass + v11);
  v13 = (CommonUI_o *)v7;
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_ClearPlayerPrefs__Dialog_b__9_0__, 0LL);
  if ( !v13 )
LABEL_11:
    sub_1B8880C(Instance, v6);
  CommonUI__OpenConfirmDecideDlg(
    v13,
    allClearTitle,
    v12,
    decideBtnMsg,
    cancelBtnMsg,
    v14,
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
    0LL);
}


void __fastcall ClearPlayerPrefs__StartMenu(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *windowTitle; // x20
  System_String_o *message; // x21
  System_String_o *decideBtnMsg; // x22
  System_String_o *cancelBtnMsg; // x23
  CommonUI_o *v8; // x24
  CommonConfirmDialog_ClickDelegate_o *v9; // x25
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4A588AB & 1) == 0 )
  {
    sub_1B885B0(&Method_ClearPlayerPrefs_Dialog__);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A588AB = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  windowTitle = this->fields.windowTitle;
  message = this->fields.message;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v8 = (CommonUI_o *)Instance;
  v9 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v9, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
  if ( !v8 )
    sub_1B8880C(v10, v11);
  CommonUI__OpenConfirmDecideDlg(
    v8,
    windowTitle,
    message,
    decideBtnMsg,
    cancelBtnMsg,
    v9,
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
    0LL);
}


void __fastcall ClearPlayerPrefs___Dialog_b__9_0(ClearPlayerPrefs_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  System_String_o *windowTitle; // x20
  System_String_o *message; // x21
  System_String_o *decideBtnMsg; // x22
  System_String_o *cancelBtnMsg; // x23
  CommonUI_o *v12; // x24
  CommonConfirmDialog_ClickDelegate_o *v13; // x25

  if ( (byte_4A588AE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&Method_ClearPlayerPrefs_Dialog__);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4A588AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, 0LL, 0LL);
  if ( !isDecide )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    windowTitle = this->fields.windowTitle;
    message = this->fields.message;
    cancelBtnMsg = this->fields.cancelBtnMsg;
    decideBtnMsg = this->fields.decideBtnMsg;
    v12 = (CommonUI_o *)v7;
    v13 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v13, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
    if ( v12 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v12,
        windowTitle,
        message,
        decideBtnMsg,
        cancelBtnMsg,
        v13,
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
        0LL);
      return;
    }
    goto LABEL_13;
  }
  if ( !this->fields.isQuit )
  {
    UserSaveData__DeleteAndInitContinueData(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( Instance )
    {
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1B8880C(Instance, v6);
  }
  UnityEngine_PlayerPrefs__DeleteAll(0LL);
  UserSaveData__DeleteData(0, 0LL);
  UserSaveData__Save(0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69253336(0LL);
}