void __fastcall ClearPlayerPrefs___ctor(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_438B69D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_4154/*"Clear All Player Prefs"*/);
    sub_B775C4(&StringLiteral_24296/*"はい"*/);
    sub_B775C4(&StringLiteral_10907/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/);
    sub_B775C4(&StringLiteral_24290/*"いいえ"*/);
    sub_B775C4(&StringLiteral_10906/*"PlayerPrefsの削除"*/);
    sub_B775C4(&StringLiteral_24326/*"データ更新のため再起動します。"*/);
    sub_B775C4(&StringLiteral_24325/*"データ更新のためゲームを終了します。"*/);
    byte_438B69D = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_10906/*"PlayerPrefsの削除"*/;
  this->fields.allClearTitle = (struct System_String_o *)StringLiteral_10906/*"PlayerPrefsの削除"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.allClearTitle, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_4154/*"Clear All Player Prefs"*/;
  this->fields.message = (struct System_String_o *)StringLiteral_4154/*"Clear All Player Prefs"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.message, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_10907/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  this->fields.quitMessage = (struct System_String_o *)StringLiteral_10907/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.quitMessage, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_24325/*"データ更新のためゲームを終了します。"*/;
  this->fields.rebootMessage = (struct System_String_o *)StringLiteral_24325/*"データ更新のためゲームを終了します。"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.rebootMessage, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_24326/*"データ更新のため再起動します。"*/;
  this->fields.cancelBtnMsg = (struct System_String_o *)StringLiteral_24326/*"データ更新のため再起動します。"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.cancelBtnMsg, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_24290/*"いいえ"*/;
  this->fields.decideBtnMsg = (struct System_String_o *)StringLiteral_24290/*"いいえ"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.decideBtnMsg, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)StringLiteral_24296/*"はい"*/;
  *(_QWORD *)&this->fields.isQuit = StringLiteral_24296/*"はい"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.isQuit, v45, v46, v47, v48, v49, v50, v51);
  LOBYTE(this[1].klass) = 1;
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
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  WebViewManager_o *v7; // x0
  System_String_o *message; // x20
  System_String_o *decideBtnMsg; // x21
  System_String_o *v10; // x22
  __int64 v11; // x8
  System_String_o *v12; // x23
  CommonUI_o *v13; // x24
  CommonConfirmDialog_ClickDelegate_o *v14; // x25

  if ( (byte_438B69C & 1) == 0 )
  {
    sub_B775C4(&Method_ClearPlayerPrefs__Dialog_b__9_0__);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438B69C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_18056328(Instance, 0LL, 0LL);
  if ( !result )
    return;
  v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  message = this->fields.message;
  decideBtnMsg = this->fields.decideBtnMsg;
  v10 = *(System_String_o **)&this->fields.isQuit;
  v11 = LOBYTE(this[1].klass) ? 80LL : 88LL;
  v12 = *(System_String_o **)((char *)&this->klass + v11);
  v13 = (CommonUI_o *)v7;
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_ClearPlayerPrefs__Dialog_b__9_0__, 0LL);
  if ( !v13 )
LABEL_11:
    sub_B7769C(Instance, v6);
  CommonUI__OpenConfirmDecideDlg(v13, message, v12, v10, decideBtnMsg, v14, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0LL);
}


void __fastcall ClearPlayerPrefs__StartMenu(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  System_String_o *allClearTitle; // x19
  System_String_o *quitMessage; // x20
  System_String_o *decideBtnMsg; // x21
  System_String_o *v7; // x22
  CommonUI_o *v8; // x24
  CommonConfirmDialog_ClickDelegate_o *v9; // x25
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_438B69B & 1) == 0 )
  {
    sub_B775C4(&Method_ClearPlayerPrefs_Dialog__);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438B69B = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  allClearTitle = this->fields.allClearTitle;
  quitMessage = this->fields.quitMessage;
  decideBtnMsg = this->fields.decideBtnMsg;
  v7 = *(System_String_o **)&this->fields.isQuit;
  v8 = (CommonUI_o *)Instance;
  v9 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v9, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
  if ( !v8 )
    sub_B7769C(v10, v11);
  CommonUI__OpenConfirmDecideDlg(
    v8,
    allClearTitle,
    quitMessage,
    v7,
    decideBtnMsg,
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
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  WebViewManager_o *v7; // x0
  System_String_o *allClearTitle; // x20
  System_String_o *quitMessage; // x21
  System_String_o *decideBtnMsg; // x22
  System_String_o *v11; // x23
  CommonUI_o *v12; // x24
  CommonConfirmDialog_ClickDelegate_o *v13; // x25

  if ( (byte_438B69E & 1) == 0 )
  {
    sub_B775C4(&Method_ClearPlayerPrefs_Dialog__);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438B69E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_18056328(Instance, 0LL, 0LL);
  if ( !isDecide )
  {
    v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    allClearTitle = this->fields.allClearTitle;
    quitMessage = this->fields.quitMessage;
    decideBtnMsg = this->fields.decideBtnMsg;
    v11 = *(System_String_o **)&this->fields.isQuit;
    v12 = (CommonUI_o *)v7;
    v13 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v13, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
    if ( v12 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v12,
        allClearTitle,
        quitMessage,
        v11,
        decideBtnMsg,
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
LABEL_11:
    sub_B7769C(Instance, v6);
  }
  if ( LOBYTE(this[1].klass) )
  {
    UnityEngine_PlayerPrefs__DeleteAll(0LL);
    UserSaveData__DeleteData(0, 0LL);
    UserSaveData__Save(0LL);
    UnityEngine_Application__Quit_41389268(0LL);
    return;
  }
  UserSaveData__DeleteAndInitContinueData(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 0LL);
}