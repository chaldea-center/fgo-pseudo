void ClearPlayerPrefs___ctor(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7

  if ( (byte_4CC4842 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_4486/*"Clear All Player Prefs"*/);
    sub_1C713B0(&StringLiteral_25522/*"はい"*/);
    sub_1C713B0(&StringLiteral_10686/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/);
    sub_1C713B0(&StringLiteral_25515/*"いいえ"*/);
    sub_1C713B0(&StringLiteral_10685/*"PlayerPrefsの削除"*/);
    sub_1C713B0(&StringLiteral_25557/*"データ更新のため再起動します。"*/);
    sub_1C713B0(&StringLiteral_25556/*"データ更新のためゲームを終了します。"*/);
    byte_4CC4842 = 1;
  }
  v9 = StringLiteral_10685/*"PlayerPrefsの削除"*/;
  this->fields.windowTitle = (struct System_String_o *)StringLiteral_10685/*"PlayerPrefsの削除"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.windowTitle, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_4486/*"Clear All Player Prefs"*/;
  this->fields.allClearTitle = (struct System_String_o *)StringLiteral_4486/*"Clear All Player Prefs"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.allClearTitle, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_10686/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  this->fields.message = (struct System_String_o *)StringLiteral_10686/*"PlayerPrefsを全て削除します\n※元に戻せません\n※再起動後反映されます"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.message, v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_25556/*"データ更新のためゲームを終了します。"*/;
  this->fields.quitMessage = (struct System_String_o *)StringLiteral_25556/*"データ更新のためゲームを終了します。"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.quitMessage, v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_25557/*"データ更新のため再起動します。"*/;
  this->fields.rebootMessage = (struct System_String_o *)StringLiteral_25557/*"データ更新のため再起動します。"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rebootMessage, v31, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_25515/*"いいえ"*/;
  this->fields.cancelBtnMsg = (struct System_String_o *)StringLiteral_25515/*"いいえ"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.cancelBtnMsg, v38, v39, v40, v41, v42, v43, v44);
  v45 = StringLiteral_25522/*"はい"*/;
  this->fields.decideBtnMsg = (struct System_String_o *)StringLiteral_25522/*"はい"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.decideBtnMsg, v45, v46, v47, v48, v49, v50, v51);
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
  System_String_o *allClearTitle; // x20
  System_String_o *decideBtnMsg; // x21
  System_String_o *cancelBtnMsg; // x22
  __int64 v11; // x8
  System_String_o *v12; // x23
  CommonUI_o *v13; // x24
  CommonConfirmDialog_ClickDelegate_o *v14; // x25

  if ( (byte_4CC4841 & 1) == 0 )
  {
    sub_1C713B0(&Method_ClearPlayerPrefs__Dialog_b__9_0__);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC4841 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, 0, 0);
  if ( !result )
    return;
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  allClearTitle = this->fields.allClearTitle;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v11 = this->fields.isQuit ? 88LL : 96LL;
  v12 = *(System_String_o **)((char *)&this->klass + v11);
  v13 = (CommonUI_o *)v7;
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_ClearPlayerPrefs__Dialog_b__9_0__, 0);
  if ( !v13 )
LABEL_11:
    sub_1C71608(Instance, v6);
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
    0,
    0);
}


void ClearPlayerPrefs__StartMenu(ClearPlayerPrefs_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *windowTitle; // x19
  System_String_o *message; // x20
  System_String_o *decideBtnMsg; // x22
  System_String_o *cancelBtnMsg; // x23
  CommonUI_o *v8; // x24
  CommonConfirmDialog_ClickDelegate_o *v9; // x25
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4CC4840 & 1) == 0 )
  {
    sub_1C713B0(&Method_ClearPlayerPrefs_Dialog__);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC4840 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  windowTitle = this->fields.windowTitle;
  message = this->fields.message;
  cancelBtnMsg = this->fields.cancelBtnMsg;
  decideBtnMsg = this->fields.decideBtnMsg;
  v8 = (CommonUI_o *)Instance;
  v9 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v9, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0);
  if ( !v8 )
    sub_1C71608(v10, v11);
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
    0,
    0);
}


void ClearPlayerPrefs___Dialog_b__9_0(ClearPlayerPrefs_o *this, bool isDecide, const MethodInfo *method)
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

  if ( (byte_4CC4843 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&Method_ClearPlayerPrefs_Dialog__);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CC4843 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, 0, 0);
  if ( !isDecide )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    windowTitle = this->fields.windowTitle;
    message = this->fields.message;
    cancelBtnMsg = this->fields.cancelBtnMsg;
    decideBtnMsg = this->fields.decideBtnMsg;
    v12 = (CommonUI_o *)v7;
    v13 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v13, (Il2CppObject *)this, Method_ClearPlayerPrefs_Dialog__, 0);
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
        0,
        0);
      return;
    }
    goto LABEL_13;
  }
  if ( !this->fields.isQuit )
  {
    UserSaveData__DeleteAndInitContinueData(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( Instance )
    {
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
      return;
    }
LABEL_13:
    sub_1C71608(Instance, v6);
  }
  UnityEngine_PlayerPrefs__DeleteAll(0);
  UserSaveData__DeleteData(0, 0);
  UserSaveData__Save(0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71517772(0);
}