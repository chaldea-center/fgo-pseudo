void __fastcall ClearPlayerPrefs___ctor(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Int32_array **v15; // x1
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_4214709 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4038/*"Clear All Player Prefs"*/, method);
    sub_B0D8A4(&StringLiteral_23883/*"はい"*/, v9);
    sub_B0D8A4(&StringLiteral_10726/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/, v10);
    sub_B0D8A4(&StringLiteral_23879/*"いいえ"*/, v11);
    sub_B0D8A4(&StringLiteral_10725/*"PlayerPrefsの削除"*/, v12);
    sub_B0D8A4(&StringLiteral_23911/*"データ更新のため再起動します。"*/, v13);
    sub_B0D8A4(&StringLiteral_23910/*"データ更新のためゲームを終了します。"*/, v14);
    byte_4214709 = 1;
  }
  v15 = (System_Int32_array **)StringLiteral_10725/*"PlayerPrefsの削除"*/;
  this->fields.allClearTitle = (struct System_String_o *)StringLiteral_10725/*"PlayerPrefsの削除"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.allClearTitle, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Int32_array **)StringLiteral_4038/*"Clear All Player Prefs"*/;
  this->fields.message = (struct System_String_o *)StringLiteral_4038/*"Clear All Player Prefs"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.message, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_10726/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  this->fields.quitMessage = (struct System_String_o *)StringLiteral_10726/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.quitMessage, v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)StringLiteral_23910/*"データ更新のためゲームを終了します。"*/;
  this->fields.rebootMessage = (struct System_String_o *)StringLiteral_23910/*"データ更新のためゲームを終了します。"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rebootMessage, v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Int32_array **)StringLiteral_23911/*"データ更新のため再起動します。"*/;
  this->fields.cancelBtnMsg = (struct System_String_o *)StringLiteral_23911/*"データ更新のため再起動します。"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.cancelBtnMsg, v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_Int32_array **)StringLiteral_23879/*"いいえ"*/;
  this->fields.decideBtnMsg = (struct System_String_o *)StringLiteral_23879/*"いいえ"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.decideBtnMsg, v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Int32_array **)StringLiteral_23883/*"はい"*/;
  *(_QWORD *)&this->fields.isQuit = StringLiteral_23883/*"はい"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.isQuit, v51, v52, v53, v54, v55, v56, v57);
  LOBYTE(this[1].klass) = 1;
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
  CommonUI_o *Instance; // x0
  WebViewManager_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *message; // x20
  System_String_o *decideBtnMsg; // x21
  System_String_o *v13; // x22
  __int64 v14; // x8
  System_String_o *v15; // x23
  CommonUI_o *v16; // x24
  CommonConfirmDialog_ClickDelegate_o *v17; // x25

  if ( (byte_4214708 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClearPlayerPrefs__Dialog_b__9_0__, result);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4214708 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_17017160(Instance, 0LL, 0LL);
  if ( !result )
    return;
  v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  message = this->fields.message;
  decideBtnMsg = this->fields.decideBtnMsg;
  v13 = *(System_String_o **)&this->fields.isQuit;
  v14 = LOBYTE(this[1].klass) ? 80LL : 88LL;
  v15 = *(System_String_o **)((char *)&this->klass + v14);
  v16 = (CommonUI_o *)v8;
  v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10);
  CommonConfirmDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_ClearPlayerPrefs__Dialog_b__9_0__, 0LL);
  if ( !v16 )
LABEL_11:
    sub_B0D97C(Instance);
  CommonUI__OpenConfirmDecideDlg(v16, message, v15, v13, decideBtnMsg, v17, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
}


void __fastcall ClearPlayerPrefs__StartMenu(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  System_String_o *allClearTitle; // x19
  System_String_o *quitMessage; // x21
  System_String_o *decideBtnMsg; // x22
  System_String_o *v9; // x23
  CommonUI_o *v10; // x24
  __int64 v11; // x1
  __int64 v12; // x2
  CommonConfirmDialog_ClickDelegate_o *v13; // x25
  __int64 v14; // x0

  if ( (byte_4214707 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClearPlayerPrefs_Dialog__, method);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4214707 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  allClearTitle = this->fields.allClearTitle;
  quitMessage = this->fields.quitMessage;
  decideBtnMsg = this->fields.decideBtnMsg;
  v9 = *(System_String_o **)&this->fields.isQuit;
  v10 = (CommonUI_o *)Instance;
  v13 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v11, v12);
  CommonConfirmDialog_ClickDelegate___ctor(v13, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
  if ( !v10 )
    sub_B0D97C(v14);
  CommonUI__OpenConfirmDecideDlg(
    v10,
    allClearTitle,
    quitMessage,
    v9,
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
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClearPlayerPrefs___Dialog_b__9_0(ClearPlayerPrefs_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  WebViewManager_o *v9; // x0
  System_String_o *allClearTitle; // x20
  System_String_o *quitMessage; // x21
  System_String_o *decideBtnMsg; // x22
  System_String_o *v13; // x23
  CommonUI_o *v14; // x24
  __int64 v15; // x1
  __int64 v16; // x2
  CommonConfirmDialog_ClickDelegate_o *v17; // x25

  if ( (byte_421470A & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClearPlayerPrefs_Dialog__, isDecide);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_421470A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_17017160(Instance, 0LL, 0LL);
  if ( !isDecide )
  {
    v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    allClearTitle = this->fields.allClearTitle;
    quitMessage = this->fields.quitMessage;
    decideBtnMsg = this->fields.decideBtnMsg;
    v13 = *(System_String_o **)&this->fields.isQuit;
    v14 = (CommonUI_o *)v9;
    v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v15, v16);
    CommonConfirmDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0LL);
    if ( v14 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v14,
        allClearTitle,
        quitMessage,
        v13,
        decideBtnMsg,
        v17,
        0,
        0.0,
        15.0,
        0,
        0,
        0,
        240,
        0,
        0LL);
      return;
    }
LABEL_11:
    sub_B0D97C(Instance);
  }
  if ( LOBYTE(this[1].klass) )
  {
    UnityEngine_PlayerPrefs__DeleteAll(0LL);
    UserSaveData__DeleteData(0, 0LL);
    UserSaveData__Save(0LL);
    UnityEngine_Application__Quit_40735960(0LL);
    return;
  }
  UserSaveData__DeleteAndInitContinueData(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 0LL);
}