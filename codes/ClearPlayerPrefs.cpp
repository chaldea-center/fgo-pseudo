void __fastcall ClearPlayerPrefs___ctor(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w1
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
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49F9AF7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4500/*"Clear All Player Prefs"*/, method);
    sub_1B640C8(&StringLiteral_25180/*"はい"*/, v5);
    sub_1B640C8(&StringLiteral_10624/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/, v6);
    sub_1B640C8(&StringLiteral_25174/*"いいえ"*/, v7);
    sub_1B640C8(&StringLiteral_10623/*"PlayerPrefsの削除"*/, v8);
    sub_1B640C8(&StringLiteral_25211/*"データ更新のため再起動します。"*/, v9);
    sub_1B640C8(&StringLiteral_25210/*"データ更新のためゲームを終了します。"*/, v10);
    byte_49F9AF7 = 1;
  }
  v11 = StringLiteral_10623/*"PlayerPrefsの削除"*/;
  this->fields.windowTitle = (struct System_String_o *)StringLiteral_10623/*"PlayerPrefsの削除"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.windowTitle, v11, v2, v3);
  v12 = StringLiteral_4500/*"Clear All Player Prefs"*/;
  this->fields.allClearTitle = (struct System_String_o *)StringLiteral_4500/*"Clear All Player Prefs"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allClearTitle, v12, v13, v14);
  v15 = StringLiteral_10624/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  this->fields.message = (struct System_String_o *)StringLiteral_10624/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.message, v15, v16, v17);
  v18 = StringLiteral_25210/*"データ更新のためゲームを終了します。"*/;
  this->fields.quitMessage = (struct System_String_o *)StringLiteral_25210/*"データ更新のためゲームを終了します。"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.quitMessage, v18, v19, v20);
  v21 = StringLiteral_25211/*"データ更新のため再起動します。"*/;
  this->fields.rebootMessage = (struct System_String_o *)StringLiteral_25211/*"データ更新のため再起動します。"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rebootMessage, v21, v22, v23);
  v24 = StringLiteral_25174/*"いいえ"*/;
  this->fields.cancelBtnMsg = (struct System_String_o *)StringLiteral_25174/*"いいえ"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cancelBtnMsg, v24, v25, v26);
  v27 = StringLiteral_25180/*"はい"*/;
  this->fields.decideBtnMsg = (struct System_String_o *)StringLiteral_25180/*"はい"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.decideBtnMsg, v27, v28, v29);
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
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *allClearTitle; // x20
  System_String_o *decideBtnMsg; // x21
  System_String_o *cancelBtnMsg; // x22
  __int64 v14; // x8
  System_String_o *v15; // x23
  CommonUI_o *v16; // x24
  CommonConfirmDialog_ClickDelegate_o *v17; // x25

  if ( (byte_49F9AF6 & 1) == 0 )
  {
    sub_1B640C8(&Method_ClearPlayerPrefs__Dialog_b__9_0__, result);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F9AF6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, 0LL, 0LL);
  if ( !result )
    return;
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  allClearTitle = this->fields.allClearTitle;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v14 = this->fields.isQuit ? 88LL : 96LL;
  v15 = *(System_String_o **)((char *)&this->klass + v14);
  v16 = (CommonUI_o *)v8;
  v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10);
  CommonConfirmDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_ClearPlayerPrefs__Dialog_b__9_0__, 0LL);
  if ( !v16 )
LABEL_11:
    sub_1B64324(Instance);
  CommonUI__OpenConfirmDecideDlg(
    v16,
    allClearTitle,
    v15,
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
    0LL);
}


void __fastcall ClearPlayerPrefs__StartMenu(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  System_String_o *windowTitle; // x20
  System_String_o *message; // x21
  System_String_o *decideBtnMsg; // x22
  System_String_o *cancelBtnMsg; // x23
  CommonUI_o *v10; // x24
  __int64 v11; // x1
  __int64 v12; // x2
  CommonConfirmDialog_ClickDelegate_o *v13; // x25
  __int64 v14; // x0

  if ( (byte_49F9AF5 & 1) == 0 )
  {
    sub_1B640C8(&Method_ClearPlayerPrefs_Dialog__, method);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49F9AF5 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  windowTitle = this->fields.windowTitle;
  message = this->fields.message;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v10 = (CommonUI_o *)Instance;
  v13 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v11, v12);
  CommonConfirmDialog_ClickDelegate___ctor(v13, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
  if ( !v10 )
    sub_1B64324(v14);
  CommonUI__OpenConfirmDecideDlg(
    v10,
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
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClearPlayerPrefs___Dialog_b__9_0(ClearPlayerPrefs_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v10; // x0
  System_String_o *windowTitle; // x20
  System_String_o *message; // x21
  System_String_o *decideBtnMsg; // x22
  System_String_o *cancelBtnMsg; // x23
  CommonUI_o *v15; // x24
  __int64 v16; // x1
  __int64 v17; // x2
  CommonConfirmDialog_ClickDelegate_o *v18; // x25

  if ( (byte_49F9AF8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1B640C8(&Method_ClearPlayerPrefs_Dialog__, v5);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v8);
    byte_49F9AF8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, 0LL, 0LL);
  if ( !isDecide )
  {
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    windowTitle = this->fields.windowTitle;
    message = this->fields.message;
    cancelBtnMsg = this->fields.cancelBtnMsg;
    decideBtnMsg = this->fields.decideBtnMsg;
    v15 = (CommonUI_o *)v10;
    v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v16, v17);
    CommonConfirmDialog_ClickDelegate___ctor(v18, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
    if ( v15 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v15,
        windowTitle,
        message,
        decideBtnMsg,
        cancelBtnMsg,
        v18,
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( Instance )
    {
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1B64324(Instance);
  }
  UnityEngine_PlayerPrefs__DeleteAll(0LL);
  UserSaveData__DeleteData(0, 0LL);
  UserSaveData__Save(0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_68921692(0LL);
}