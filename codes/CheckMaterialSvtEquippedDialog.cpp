void __fastcall CheckMaterialSvtEquippedDialog___ctor(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FAF3C & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_40FAF3C = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__CallOnConfirm(
        CheckMaterialSvtEquippedDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_int__o *callback; // x21

  if ( (byte_40FAF34 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_40FAF34 = 1;
  }
  callback = this->fields.callback;
  if ( callback )
  {
    this->fields.callback = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callback,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(callback, result, (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0

  if ( (byte_40FAF2F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_40FAF2F = 1;
  }
  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B170D4();
  System_Collections_Generic_List_long___Clear(
    lastSvtCommandCodeList,
    (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall CheckMaterialSvtEquippedDialog__Close(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_40FAF3A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__, method);
    sub_B16FFC(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, v6);
    sub_B16FFC(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v7);
    byte_40FAF3A = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                              System_Action_CheckMaterialSvtListViewItem__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v3,
                                                                              v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_24B7310 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B170D4();
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&listViewManager->fields.onSelectItem,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  CheckMaterialSvtListViewManager__SetMode_26927816(listViewManager, 2, v16);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_40FAF37 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__, method);
    sub_B16FFC(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, v6);
    sub_B16FFC(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v7);
    byte_40FAF37 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                              System_Action_CheckMaterialSvtListViewItem__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v3,
                                                                              v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_24B7310 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B170D4();
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&listViewManager->fields.onSelectItem,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  CheckMaterialSvtListViewManager__SetMode_26927816(listViewManager, 2, v16);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndOpen(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_40FAF30 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__, method);
    sub_B16FFC(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, v6);
    sub_B16FFC(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v7);
    byte_40FAF30 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                              System_Action_CheckMaterialSvtListViewItem__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v3,
                                                                              v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_24B7310 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B170D4();
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&listViewManager->fields.onSelectItem,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  CheckMaterialSvtListViewManager__SetMode_26927816(listViewManager, 2, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FAF39 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FAF39 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.commandCodeStatusId, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FAF36 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FAF36 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.servantStatusId, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__Init(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *upperLabel; // x0
  UILabel_o *lowerLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *closeLabel; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v14; // x0

  if ( (byte_40FAF2C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FAF2C = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  upperLabel = this->fields.upperLabel;
  if ( !upperLabel )
    goto LABEL_16;
  UILabel__set_text(upperLabel, (System_String_o *)StringLiteral_1, 0LL);
  lowerLabel = this->fields.lowerLabel;
  if ( !lowerLabel )
    goto LABEL_16;
  UILabel__set_text(lowerLabel, (System_String_o *)StringLiteral_1, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !decideLabel )
    goto LABEL_16;
  UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1, 0LL);
  cancelLabel = this->fields.cancelLabel;
  if ( !cancelLabel )
    goto LABEL_16;
  UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !closeLabel )
    goto LABEL_16;
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (gameObject = UnityEngine_Component__get_gameObject(decideButton, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton) == 0LL)
    || (v12 = UnityEngine_Component__get_gameObject(cancelButton, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v12, 0, 0LL),
        (closeButton = (UnityEngine_Component_o *)this->fields.closeButton) == 0LL)
    || (v14 = UnityEngine_Component__get_gameObject(closeButton, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v14, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__ModifyItem(
        CheckMaterialSvtEquippedDialog_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_B170D4();
  CheckMaterialSvtListViewManager__ModifyItem(listViewManager, selectedId, method);
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickCancel(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40FAF32 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FAF32 = 1;
  }
  if ( this->fields.state == 1 )
  {
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      sub_B170D4();
    System_Collections_Generic_List_long___Clear(
      lastSvtCommandCodeList,
      (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 0, v5);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickClose(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FAF33 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FAF33 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickDecide(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FAF31 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FAF31 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 1, v3);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  WebViewManager_o *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ServantStatusDialog_EndDelegate_o *v16; // x22

  if ( (byte_40FAF38 & 1) == 0 )
  {
    sub_B16FFC(&Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__, selectItem);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40FAF38 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(selectItem, v8),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v11 = (CommonUI_o *)Instance,
          v16 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14,
                                                       v15),
          ServantStatusDialog_EndDelegate___ctor(
            v16,
            (Il2CppObject *)this,
            Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__,
            0LL),
          !v11) )
    {
      sub_B170D4();
    }
    CommonUI__OpenServantStatusDialog_18250552(v11, 32, UserCommandCodeEntity_k__BackingField, v16, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnSelectServantDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  WebViewManager_o *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ServantStatusDialog_EndDelegate_o *v16; // x22
  const MethodInfo *v17; // x2

  if ( (byte_40FAF35 & 1) == 0 )
  {
    sub_B16FFC(&Method_CheckMaterialSvtEquippedDialog_EndShowServant__, selectItem);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40FAF35 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( !selectItem )
      goto LABEL_14;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserSvtId(selectItem, v8);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = this->fields.servantStatusId;
      v11 = (CommonUI_o *)Instance;
      v16 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                   ServantStatusDialog_EndDelegate_TypeInfo,
                                                   v12,
                                                   v13,
                                                   v14,
                                                   v15);
      ServantStatusDialog_EndDelegate___ctor(
        v16,
        (Il2CppObject *)this,
        Method_CheckMaterialSvtEquippedDialog_EndShowServant__,
        0LL);
      if ( v11 )
      {
        CommonUI__OpenServantStatusDialog_18247068(v11, 29, servantStatusId, v16, 0LL, 0LL);
        return;
      }
LABEL_14:
      sub_B170D4();
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      this->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                                       selectItem,
                                       (const MethodInfo *)selectItem);
      CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(this, selectItem, v17);
    }
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__Open(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o *servantIdList,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  UILabel_o *titleLabel; // x22
  System_String_o *v36; // x0
  UILabel_o *upperLabel; // x22
  System_String_o *v38; // x0
  UILabel_o *lowerLabel; // x22
  System_String_o *v40; // x0
  UnityEngine_Component_o *listViewManager; // x0
  UnityEngine_GameObject_o *v42; // x0
  const MethodInfo *v43; // x7
  CheckMaterialSvtListViewManager_o *v44; // x0
  UnityEngine_GameObject_o *listViewBg; // x0
  Il2CppObject *current; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  int32_t SvtId; // w20
  WebViewManager_o *v51; // x0
  UserServantCommandCodeMaster_o *v52; // x21
  int64_t UserId; // x1
  System_Collections_Generic_IEnumerable_T__o *UserSvtCommandCodeIdList; // x1
  System_Collections_Generic_List_long__o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Collections_Generic_List_long__o *v60; // x20
  CheckMaterialSvtEquippedDialog___c_c *v61; // x0
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__20_0; // x21
  Il2CppObject *v64; // x22
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  UnityEngine_Component_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_Component_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  const MethodInfo *v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  System_Action_o *v83; // x20
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FAF2D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, selectMaterialItemList);
    sub_B16FFC(&Method_CheckMaterialSvtEquippedDialog_EndOpen__, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__AddRange__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__RemoveAll__, v22);
    sub_B16FFC(&LocalizationManager_TypeInfo, v23);
    sub_B16FFC(&NetworkManager_TypeInfo, v24);
    sub_B16FFC(&Method_System_Predicate_long___ctor__, v25);
    sub_B16FFC(&System_Predicate_long__TypeInfo, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B16FFC(&Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__, v28);
    sub_B16FFC(&CheckMaterialSvtEquippedDialog___c_TypeInfo, v29);
    sub_B16FFC(&StringLiteral_3176, v30);
    sub_B16FFC(&StringLiteral_3177, v31);
    sub_B16FFC(&StringLiteral_3329, v32);
    byte_40FAF2D = 1;
  }
  memset(&v85, 0, sizeof(v85));
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callback,
      (System_Int32_array **)callback,
      (System_String_array **)servantIdList,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    System_Collections_Generic_List_long___Clear(
      lastSvtCommandCodeList,
      (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3329, 0LL);
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, v36, 0LL);
    upperLabel = this->fields.upperLabel;
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3176, 0LL);
    if ( !upperLabel )
      goto LABEL_51;
    UILabel__set_text(upperLabel, v38, 0LL);
    lowerLabel = this->fields.lowerLabel;
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3177, 0LL);
    if ( !lowerLabel )
      goto LABEL_51;
    UILabel__set_text(lowerLabel, v40, 0LL);
    listViewManager = (UnityEngine_Component_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_51;
    v42 = UnityEngine_Component__get_gameObject(listViewManager, 0LL);
    if ( !v42 )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(v42, 1, 0LL);
    v44 = this->fields.listViewManager;
    if ( !v44 )
      goto LABEL_51;
    CheckMaterialSvtListViewManager__CreateList(v44, selectMaterialItemList, 0, servantIdList, 0LL, 0, 1, v43);
    listViewBg = this->fields.listViewBg;
    if ( !listViewBg )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(listViewBg, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_51;
    System_Collections_Generic_List_long___GetEnumerator(
      &v84,
      servantIdList,
      (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v85 = v84;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v85,
              (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v85.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B170D4();
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)current,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_B170D4();
      SvtId = UserServantEntity__getSvtId(Entity, 0LL);
      v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v51 )
        sub_B170D4();
      v52 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)v51,
                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v52 )
        sub_B170D4();
      UserSvtCommandCodeIdList = (System_Collections_Generic_IEnumerable_T__o *)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                                                                  v52,
                                                                                  UserId,
                                                                                  SvtId,
                                                                                  0LL);
      if ( UserSvtCommandCodeIdList )
      {
        v55 = this->fields.lastSvtCommandCodeList;
        if ( !v55 )
          sub_B170D4();
        System_Collections_Generic_List_long___AddRange(
          v55,
          UserSvtCommandCodeIdList,
          (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__);
        v60 = this->fields.lastSvtCommandCodeList;
        v61 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        if ( (BYTE3(CheckMaterialSvtEquippedDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CheckMaterialSvtEquippedDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CheckMaterialSvtEquippedDialog___c_TypeInfo);
          v61 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        }
        static_fields = v61->static_fields;
        _9__20_0 = static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v61);
            static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          }
          v64 = (Il2CppObject *)static_fields->__9;
          _9__20_0 = (System_Predicate_long__o *)sub_B170CC(System_Predicate_long__TypeInfo, v56, v57, v58, v59);
          System_Predicate_long____ctor(
            _9__20_0,
            v64,
            Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__,
            (const MethodInfo_2B0A168 *)Method_System_Predicate_long___ctor__);
          v65 = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          v65->__9__20_0 = _9__20_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v65->__9__20_0,
            (System_Int32_array **)_9__20_0,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71);
        }
        if ( !v60 )
          sub_B170D4();
        System_Collections_Generic_List_long___RemoveAll(
          v60,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_2F17FC4 *)Method_System_Collections_Generic_List_long__RemoveAll__);
      }
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v85,
      (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    v72 = (UnityEngine_Component_o *)this->fields.lowerLabel;
    if ( !v72
      || (v73 = UnityEngine_Component__get_gameObject(v72, 0LL),
          GameObjectExtensions__SetLocalPositionY(v73, -140.0, 0LL),
          (v74 = this->fields.listViewBg) == 0LL)
      || (v75 = UnityEngine_GameObject__get_gameObject(v74, 0LL),
          GameObjectExtensions__SetLocalPositionY(v75, 44.0, 0LL),
          (v76 = (UnityEngine_Component_o *)this->fields.listViewManager) == 0LL) )
    {
LABEL_51:
      sub_B170D4();
    }
    v77 = UnityEngine_Component__get_gameObject(v76, 0LL);
    GameObjectExtensions__SetLocalPositionY(v77, 94.0, 0LL);
    this->fields.state = 2;
    CheckMaterialSvtEquippedDialog__SetObjActive(this, 0, v78);
    v83 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v79, v80, v81, v82);
    System_Action___ctor(v83, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v83, 0, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OpenCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  struct System_Collections_Generic_List_long__o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UILabel_o *titleLabel; // x20
  System_String_o *v28; // x0
  UILabel_o *lowerLabel; // x20
  System_String_o *v30; // x0
  UnityEngine_Component_o *listViewManager; // x0
  UnityEngine_GameObject_o *v32; // x0
  const MethodInfo *v33; // x7
  CheckMaterialSvtListViewManager_o *v34; // x0
  UnityEngine_GameObject_o *listViewBg; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  const MethodInfo *v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *v47; // x20

  if ( (byte_40FAF2E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_CheckMaterialSvtEquippedDialog_EndOpen__, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_long___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_long___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_3234, v15);
    sub_B16FFC(&StringLiteral_3235, v16);
    byte_40FAF2E = 1;
  }
  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_21;
  if ( lastSvtCommandCodeList->fields._size >= 1 && !this->fields.state )
  {
    this->fields.callback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callback,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v19 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lastSvtCommandCodeList,
              (const MethodInfo_18D4E34 *)Method_System_Linq_Enumerable_Distinct_long___);
      v20 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                                v19,
                                                                (const MethodInfo_19C7A08 *)Method_System_Linq_Enumerable_ToList_long___);
      this->fields.lastSvtCommandCodeList = v20;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
        (System_Int32_array **)v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3235, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, v28, 0LL);
        lowerLabel = this->fields.lowerLabel;
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3234, 0LL);
        if ( lowerLabel )
        {
          UILabel__set_text(lowerLabel, v30, 0LL);
          listViewManager = (UnityEngine_Component_o *)this->fields.listViewManager;
          if ( listViewManager )
          {
            v32 = UnityEngine_Component__get_gameObject(listViewManager, 0LL);
            if ( v32 )
            {
              UnityEngine_GameObject__SetActive(v32, 1, 0LL);
              v34 = this->fields.listViewManager;
              if ( v34 )
              {
                CheckMaterialSvtListViewManager__CreateList(
                  v34,
                  0LL,
                  2,
                  0LL,
                  this->fields.lastSvtCommandCodeList,
                  0,
                  0,
                  v33);
                listViewBg = this->fields.listViewBg;
                if ( listViewBg )
                {
                  UnityEngine_GameObject__SetActive(listViewBg, 1, 0LL);
                  v36 = (UnityEngine_Component_o *)this->fields.lowerLabel;
                  if ( v36 )
                  {
                    v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
                    GameObjectExtensions__SetLocalPositionY(v37, -120.0, 0LL);
                    v38 = this->fields.listViewBg;
                    if ( v38 )
                    {
                      v39 = UnityEngine_GameObject__get_gameObject(v38, 0LL);
                      GameObjectExtensions__SetLocalPositionY(v39, 90.0, 0LL);
                      v40 = (UnityEngine_Component_o *)this->fields.listViewManager;
                      if ( v40 )
                      {
                        v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
                        GameObjectExtensions__SetLocalPositionY(v41, 140.0, 0LL);
                        CheckMaterialSvtEquippedDialog__SetObjActive(this, 1, v42);
                        this->fields.state = 2;
                        v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
                        System_Action___ctor(
                          v47,
                          (Il2CppObject *)this,
                          Method_CheckMaterialSvtEquippedDialog_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__SetObjActive(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isOneButton,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v13; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v15; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v17; // x0
  UILabel_o *closeLabel; // x19
  System_String_o *v19; // x0

  if ( (byte_40FAF3B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, isOneButton);
    sub_B16FFC(&StringLiteral_3253, v5);
    sub_B16FFC(&StringLiteral_3251, v6);
    sub_B16FFC(&StringLiteral_3252, v7);
    byte_40FAF3B = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, !isOneButton, 0LL);
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_16;
  v11 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
  if ( !v11 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v11, !isOneButton, 0LL);
  closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !closeButton )
    goto LABEL_16;
  v13 = UnityEngine_Component__get_gameObject(closeButton, 0LL);
  if ( !v13 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v13, isOneButton, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, v15, 0LL),
        cancelLabel = this->fields.cancelLabel,
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, v17, 0LL),
        closeLabel = this->fields.closeLabel,
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL),
        !closeLabel) )
  {
LABEL_16:
    sub_B170D4();
  }
  UILabel__set_text(closeLabel, v19, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70C1 & 1) == 0 )
  {
    sub_B16FFC(&CheckMaterialSvtEquippedDialog___c_TypeInfo, v1);
    byte_40F70C1 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CheckMaterialSvtEquippedDialog___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall CheckMaterialSvtEquippedDialog___c___ctor(
        CheckMaterialSvtEquippedDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CheckMaterialSvtEquippedDialog___c___Open_b__20_0(
        CheckMaterialSvtEquippedDialog___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s == 0;
}