void __fastcall ClearPlayerPrefs___ctor(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w1
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4AFF523 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4454/*"Clear All Player Prefs"*/, method);
    sub_1BC3008(&StringLiteral_25150/*"はい"*/, v5);
    sub_1BC3008(&StringLiteral_10589/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/, v6);
    sub_1BC3008(&StringLiteral_25143/*"いいえ"*/, v7);
    sub_1BC3008(&StringLiteral_10588/*"PlayerPrefsの削除"*/, v8);
    sub_1BC3008(&StringLiteral_25182/*"データ更新のため再起動します。"*/, v9);
    sub_1BC3008(&StringLiteral_25181/*"データ更新のためゲームを終了します。"*/, v10);
    byte_4AFF523 = 1;
  }
  v11 = StringLiteral_10588/*"PlayerPrefsの削除"*/;
  this->fields.windowTitle = (struct System_String_o *)StringLiteral_10588/*"PlayerPrefsの削除"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.windowTitle, v11, v2, v3);
  v12 = StringLiteral_4454/*"Clear All Player Prefs"*/;
  this->fields.allClearTitle = (struct System_String_o *)StringLiteral_4454/*"Clear All Player Prefs"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.allClearTitle, v12, v13, v14);
  v15 = StringLiteral_10589/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  this->fields.message = (struct System_String_o *)StringLiteral_10589/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.message, v15, v16, v17);
  v18 = StringLiteral_25181/*"データ更新のためゲームを終了します。"*/;
  this->fields.quitMessage = (struct System_String_o *)StringLiteral_25181/*"データ更新のためゲームを終了します。"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.quitMessage, v18, v19, v20);
  v21 = StringLiteral_25182/*"データ更新のため再起動します。"*/;
  this->fields.rebootMessage = (struct System_String_o *)StringLiteral_25182/*"データ更新のため再起動します。"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.rebootMessage, v21, v22, v23);
  v24 = StringLiteral_25143/*"いいえ"*/;
  this->fields.cancelBtnMsg = (struct System_String_o *)StringLiteral_25143/*"いいえ"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.cancelBtnMsg, v24, v25, v26);
  v27 = StringLiteral_25150/*"はい"*/;
  this->fields.decideBtnMsg = (struct System_String_o *)StringLiteral_25150/*"はい"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.decideBtnMsg, v27, v28, v29);
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

  if ( (byte_4AFF522 & 1) == 0 )
  {
    sub_1BC3008(&Method_ClearPlayerPrefs__Dialog_b__9_0__, result);
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AFF522 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30731324((CommonUI_o *)Instance, 0LL, 0LL);
  if ( !result )
    return;
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  allClearTitle = this->fields.allClearTitle;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v13 = this->fields.isQuit ? 88LL : 96LL;
  v14 = *(System_String_o **)((char *)&this->klass + v13);
  v15 = (CommonUI_o *)v9;
  v16 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v16, (Il2CppObject *)this, Method_ClearPlayerPrefs__Dialog_b__9_0__, 0LL);
  if ( !v15 )
LABEL_11:
    sub_1BC3264(Instance, v8);
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

  if ( (byte_4AFF521 & 1) == 0 )
  {
    sub_1BC3008(&Method_ClearPlayerPrefs_Dialog__, method);
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4AFF521 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  windowTitle = this->fields.windowTitle;
  message = this->fields.message;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v10 = (CommonUI_o *)Instance;
  v11 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v11, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
  if ( !v10 )
    sub_1BC3264(v12, v13);
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

  if ( (byte_4AFF524 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1BC3008(&Method_ClearPlayerPrefs_Dialog__, v5);
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v8);
    byte_4AFF524 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_30731324((CommonUI_o *)Instance, 0LL, 0LL);
  if ( !isDecide )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    windowTitle = this->fields.windowTitle;
    message = this->fields.message;
    cancelBtnMsg = this->fields.cancelBtnMsg;
    decideBtnMsg = this->fields.decideBtnMsg;
    v16 = (CommonUI_o *)v11;
    v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( Instance )
    {
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1BC3264(Instance, v10);
  }
  UnityEngine_PlayerPrefs__DeleteAll(0LL);
  UserSaveData__DeleteData(0, 0LL);
  UserSaveData__Save(0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69829232(0LL);
}