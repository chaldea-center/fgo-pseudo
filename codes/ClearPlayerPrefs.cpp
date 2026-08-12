void ClearPlayerPrefs___ctor(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7

  if ( (byte_596DB9F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4666/*"Clear All Player Prefs"*/);
    sub_2213A60(&StringLiteral_26793/*"はい"*/);
    sub_2213A60(&StringLiteral_11139/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/);
    sub_2213A60(&StringLiteral_26786/*"いいえ"*/);
    sub_2213A60(&StringLiteral_11138/*"PlayerPrefsの削除"*/);
    sub_2213A60(&StringLiteral_26828/*"データ更新のため再起動します。"*/);
    sub_2213A60(&StringLiteral_26827/*"データ更新のためゲームを終了します。"*/);
    byte_596DB9F = 1;
  }
  v9 = StringLiteral_11138/*"PlayerPrefsの削除"*/;
  this->fields.windowTitle = (struct System_String_o *)StringLiteral_11138/*"PlayerPrefsの削除"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.windowTitle, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_4666/*"Clear All Player Prefs"*/;
  this->fields.allClearTitle = (struct System_String_o *)StringLiteral_4666/*"Clear All Player Prefs"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.allClearTitle, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_11139/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  this->fields.message = (struct System_String_o *)StringLiteral_11139/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.message, v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_26827/*"データ更新のためゲームを終了します。"*/;
  this->fields.quitMessage = (struct System_String_o *)StringLiteral_26827/*"データ更新のためゲームを終了します。"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.quitMessage, v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_26828/*"データ更新のため再起動します。"*/;
  this->fields.rebootMessage = (struct System_String_o *)StringLiteral_26828/*"データ更新のため再起動します。"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rebootMessage, v31, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_26786/*"いいえ"*/;
  this->fields.cancelBtnMsg = (struct System_String_o *)StringLiteral_26786/*"いいえ"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cancelBtnMsg, v38, v39, v40, v41, v42, v43, v44);
  v45 = StringLiteral_26793/*"はい"*/;
  this->fields.decideBtnMsg = (struct System_String_o *)StringLiteral_26793/*"はい"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.decideBtnMsg, v45, v46, v47, v48, v49, v50, v51);
  this->fields.isQuit = 1;
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void ClearPlayerPrefs__DeletePlayerPrefs(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  UnityEngine_PlayerPrefs__DeleteAll(0);
}


void ClearPlayerPrefs__Dialog(ClearPlayerPrefs_o *this, bool result, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  __int64 v8; // x9
  CommonUI_o *v9; // x24
  System_String_o *allClearTitle; // x20
  System_String_o *decideBtnMsg; // x22
  System_String_o *cancelBtnMsg; // x23
  System_String_o *v13; // x21
  CommonConfirmDialog_ClickDelegate_o *v14; // x25

  if ( (byte_596DB9E & 1) == 0 )
  {
    sub_2213A60(&Method_ClearPlayerPrefs__Dialog_b__9_0__);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DB9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, 0, 0);
  if ( !result )
    return;
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = 88;
  v9 = (CommonUI_o *)v7;
  if ( !this->fields.isQuit )
    v8 = 96;
  allClearTitle = this->fields.allClearTitle;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v13 = *(System_String_o **)((char *)&this->klass + v8);
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_ClearPlayerPrefs__Dialog_b__9_0__, 0);
  if ( !v9 )
LABEL_10:
    sub_2213CDC(Instance, v6);
  CommonUI__OpenConfirmDecideDlg(
    v9,
    allClearTitle,
    v13,
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
    0,
    0);
}


void ClearPlayerPrefs__StartMenu(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *decideBtnMsg; // x21
  System_String_o *cancelBtnMsg; // x22
  System_String_o *windowTitle; // x19
  CommonUI_o *v7; // x23
  System_String_o *message; // x20
  CommonConfirmDialog_ClickDelegate_o *v9; // x24
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596DB9D & 1) == 0 )
  {
    sub_2213A60(&Method_ClearPlayerPrefs_Dialog__);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DB9D = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  windowTitle = this->fields.windowTitle;
  v7 = (CommonUI_o *)Instance;
  message = this->fields.message;
  v9 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v9, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0);
  if ( !v7 )
    sub_2213CDC(v10, v11);
  CommonUI__OpenConfirmDecideDlg(
    v7,
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
    0,
    0);
}


void ClearPlayerPrefs___Dialog_b__9_0(ClearPlayerPrefs_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x24
  System_String_o *decideBtnMsg; // x22
  System_String_o *cancelBtnMsg; // x23
  System_String_o *windowTitle; // x20
  System_String_o *message; // x21
  CommonConfirmDialog_ClickDelegate_o *v14; // x25

  if ( (byte_596DBA0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_ClearPlayerPrefs_Dialog__);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_596DBA0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, 0, 0);
  if ( !isDecide )
  {
    v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    cancelBtnMsg = this->fields.cancelBtnMsg;
    decideBtnMsg = this->fields.decideBtnMsg;
    windowTitle = this->fields.windowTitle;
    message = this->fields.message;
    v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0);
    if ( v9 )
    {
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v9,
        windowTitle,
        message,
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
        0,
        0);
      return;
    }
    goto LABEL_13;
  }
  if ( !this->fields.isQuit )
  {
    UserSaveData__DeleteAndInitContinueData(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( Instance )
    {
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
      return;
    }
LABEL_13:
    sub_2213CDC(Instance, v6);
  }
  UnityEngine_PlayerPrefs__DeleteAll(0);
  UserSaveData__DeleteData(0, 0);
  UserSaveData__Save(0);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v7, v8);
  UnityEngine_Application__Quit_83177108(0);
}