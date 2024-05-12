void __fastcall CheckMaterialSvtEquippedDialog___ctor(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438C393 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    byte_438C393 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


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

  if ( (byte_438C38B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int__Invoke__);
    byte_438C38B = 1;
  }
  callback = this->fields.callback;
  if ( callback )
  {
    this->fields.callback = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callback,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(callback, result, (const MethodInfo_269F2EC *)Method_System_Action_int__Invoke__);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0

  if ( (byte_438C386 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Clear__);
    byte_438C386 = 1;
  }
  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_long___Clear(
    lastSvtCommandCodeList,
    (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall CheckMaterialSvtEquippedDialog__Close(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_438C391 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
    sub_B775C4(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_B775C4(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_438C391 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_26A0868 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B7769C(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&listViewManager->fields.onSelectItem,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  CheckMaterialSvtListViewManager__SetMode_27304572(listViewManager, 2, v13);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_438C38E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
    sub_B775C4(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_B775C4(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_438C38E = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_26A0868 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B7769C(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&listViewManager->fields.onSelectItem,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  CheckMaterialSvtListViewManager__SetMode_27304572(listViewManager, 2, v13);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndOpen(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_438C387 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
    sub_B775C4(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_B775C4(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_438C387 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_26A0868 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B7769C(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&listViewManager->fields.onSelectItem,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  CheckMaterialSvtListViewManager__SetMode_27304572(listViewManager, 2, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_438C390 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438C390 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.commandCodeStatusId, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B7769C(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_438C38D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438C38D = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.servantStatusId, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B7769C(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__Init(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_438C383 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C383 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.upperLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.lowerLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.closeLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)this->fields.decideButton;
  if ( !titleLabel
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)this->fields.cancelButton) == 0LL)
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)this->fields.closeButton) == 0LL)
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B7769C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
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
    sub_B7769C(0LL, selectedId);
  CheckMaterialSvtListViewManager__ModifyItem(listViewManager, selectedId, method);
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickCancel(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  const MethodInfo *v4; // x2

  if ( (byte_438C389 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C389 = 1;
  }
  if ( this->fields.state == 1 )
  {
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      sub_B7769C(0LL, method);
    System_Collections_Generic_List_long___Clear(
      lastSvtCommandCodeList,
      (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 0, v4);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickClose(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_438C38A & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C38A = 1;
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

  if ( (byte_438C388 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C388 = 1;
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
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  WebViewManager_o *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v9; // x21
  ServantStatusDialog_EndDelegate_o *v10; // x22

  if ( (byte_438C38F & 1) == 0 )
  {
    sub_B775C4(&Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C38F = 1;
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
      || (this->fields.commandCodeStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(selectItem, v6),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v9 = (CommonUI_o *)Instance,
          v10 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v10,
            (Il2CppObject *)this,
            Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__,
            0LL),
          !v9) )
    {
      sub_B7769C(v5, v6);
    }
    CommonUI__OpenServantStatusDialog_18069176(v9, 32, UserCommandCodeEntity_k__BackingField, v10, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnSelectServantDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v4; // x19
  const MethodInfo *v5; // x1
  WebViewManager_o *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v8; // x21
  ServantStatusDialog_EndDelegate_o *v9; // x22
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_438C38C & 1) == 0 )
  {
    sub_B775C4(&Method_CheckMaterialSvtEquippedDialog_EndShowServant__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438C38C = 1;
  }
  if ( v4->fields.state == 1 )
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
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserSvtId(selectItem, v5);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v8 = (CommonUI_o *)Instance;
      v9 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v9,
        (Il2CppObject *)v4,
        Method_CheckMaterialSvtEquippedDialog_EndShowServant__,
        0LL);
      if ( v8 )
      {
        CommonUI__OpenServantStatusDialog_18065604(v8, 29, servantStatusId, v9, 0LL, 0LL);
        return;
      }
LABEL_14:
      sub_B7769C(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(v4, selectItem, v10);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *upperLabel; // x22
  UILabel_o *lowerLabel; // x22
  const MethodInfo *v17; // x7
  Il2CppObject *current; // x20
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  UserServantEntity_o *Entity; // x0
  __int64 v24; // x1
  int32_t SvtId; // w20
  WebViewManager_o *v26; // x0
  __int64 v27; // x1
  UserServantCommandCodeMaster_o *v28; // x21
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_T__o *UserSvtCommandCodeIdList; // x1
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_long__o *v33; // x20
  CheckMaterialSvtEquippedDialog___c_c *v34; // x0
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__20_0; // x21
  Il2CppObject *v37; // x22
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x2
  System_Action_o *v49; // x20
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_438C384 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CheckMaterialSvtEquippedDialog_EndOpen__);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__RemoveAll__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_System_Predicate_long___ctor__);
    sub_B775C4(&System_Predicate_long__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__);
    sub_B775C4(&CheckMaterialSvtEquippedDialog___c_TypeInfo);
    sub_B775C4(&StringLiteral_3310/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/);
    sub_B775C4(&StringLiteral_3311/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/);
    sub_B775C4(&StringLiteral_3464/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_438C384 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_B77560(
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
    gameObject = (UnityEngine_GameObject_o *)this->fields.lastSvtCommandCodeList;
    if ( !gameObject )
      goto LABEL_51;
    System_Collections_Generic_List_long___Clear(
      (System_Collections_Generic_List_long__o *)gameObject,
      (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3464/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    upperLabel = this->fields.upperLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3310/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_51;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0LL);
    lowerLabel = this->fields.lowerLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3311/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
    if ( !lowerLabel )
      goto LABEL_51;
    UILabel__set_text(lowerLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( !gameObject )
      goto LABEL_51;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( !gameObject )
      goto LABEL_51;
    CheckMaterialSvtListViewManager__CreateList(
      (CheckMaterialSvtListViewManager_o *)gameObject,
      selectMaterialItemList,
      0,
      servantIdList,
      0LL,
      0,
      1,
      v17);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_51;
    System_Collections_Generic_List_long___GetEnumerator(
      &v50,
      servantIdList,
      (const MethodInfo_30ECBDC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v51 = v50;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v51,
              (const MethodInfo_225AF74 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v51.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B7769C(0LL, v20);
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B7769C(0LL, v22);
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)current,
                 (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_B7769C(0LL, v24);
      SvtId = UserServantEntity__getSvtId(Entity, 0LL);
      v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v26 )
        sub_B7769C(0LL, v27);
      v28 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)v26,
                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v28 )
        sub_B7769C(UserId, UserId);
      UserSvtCommandCodeIdList = (System_Collections_Generic_IEnumerable_T__o *)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                                                                  v28,
                                                                                  UserId,
                                                                                  SvtId,
                                                                                  0LL);
      if ( UserSvtCommandCodeIdList )
      {
        lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
        if ( !lastSvtCommandCodeList )
          sub_B7769C(0LL, UserSvtCommandCodeIdList);
        System_Collections_Generic_List_long___AddRange(
          lastSvtCommandCodeList,
          UserSvtCommandCodeIdList,
          (const MethodInfo_30EBFEC *)Method_System_Collections_Generic_List_long__AddRange__);
        v33 = this->fields.lastSvtCommandCodeList;
        v34 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        if ( (BYTE3(CheckMaterialSvtEquippedDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CheckMaterialSvtEquippedDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CheckMaterialSvtEquippedDialog___c_TypeInfo);
          v34 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        }
        static_fields = v34->static_fields;
        _9__20_0 = static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v34);
            static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          }
          v37 = (Il2CppObject *)static_fields->__9;
          _9__20_0 = (System_Predicate_long__o *)sub_B77694(System_Predicate_long__TypeInfo);
          System_Predicate_long____ctor(
            _9__20_0,
            v37,
            Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__,
            (const MethodInfo_2C313F0 *)Method_System_Predicate_long___ctor__);
          v38 = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          v38->__9__20_0 = _9__20_0;
          sub_B77560(
            (BattleServantConfConponent_o *)&v38->__9__20_0,
            (System_Int32_array **)_9__20_0,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
        }
        if ( !v33 )
          sub_B7769C(v34, v32);
        System_Collections_Generic_List_long___RemoveAll(
          v33,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_30ED8BC *)Method_System_Collections_Generic_List_long__RemoveAll__);
      }
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v51,
      (const MethodInfo_225AF70 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    gameObject = (UnityEngine_GameObject_o *)this->fields.lowerLabel;
    if ( !gameObject
      || (v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v45, -140.0, 0LL),
          (gameObject = this->fields.listViewBg) == 0LL)
      || (v46 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v46, 44.0, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
    {
LABEL_51:
      sub_B7769C(gameObject, v13);
    }
    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v47, 94.0, 0LL);
    this->fields.state = 2;
    CheckMaterialSvtEquippedDialog__SetObjActive(this, 0, v48);
    v49 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v49, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
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
  CheckMaterialSvtEquippedDialog_o *v9; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  const MethodInfo *v21; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  const MethodInfo *v25; // x2
  System_Action_o *v26; // x20

  v9 = this;
  if ( (byte_438C385 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CheckMaterialSvtEquippedDialog_EndOpen__);
    sub_B775C4(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_long___);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3368/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_B775C4(&StringLiteral_3369/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/);
    byte_438C385 = 1;
  }
  lastSvtCommandCodeList = v9->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_21;
  if ( lastSvtCommandCodeList->fields._size >= 1 && !v9->fields.state )
  {
    v9->fields.callback = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->fields.callback,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v11 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v9->fields.lastSvtCommandCodeList,
              (const MethodInfo_1D2E594 *)Method_System_Linq_Enumerable_Distinct_long___);
      v12 = (System_Int32_array **)System_Linq_Enumerable__ToList_long_(
                                     v11,
                                     (const MethodInfo_1D40420 *)Method_System_Linq_Enumerable_ToList_long___);
      v9->fields.lastSvtCommandCodeList = (struct System_Collections_Generic_List_long__o *)v12;
      sub_B77560((BattleServantConfConponent_o *)&v9->fields.lastSvtCommandCodeList, v12, v13, v14, v15, v16, v17, v18);
      titleLabel = v9->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3369/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
        lowerLabel = v9->fields.lowerLabel;
        this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3368/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, 0LL);
        if ( lowerLabel )
        {
          UILabel__set_text(lowerLabel, (System_String_o *)this, 0LL);
          this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
          if ( this )
          {
            this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
              if ( this )
              {
                CheckMaterialSvtListViewManager__CreateList(
                  (CheckMaterialSvtListViewManager_o *)this,
                  0LL,
                  2,
                  0LL,
                  v9->fields.lastSvtCommandCodeList,
                  0,
                  0,
                  v21);
                this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewBg;
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                  this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.lowerLabel;
                  if ( this )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPositionY(gameObject, -120.0, 0LL);
                    this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewBg;
                    if ( this )
                    {
                      v23 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
                      GameObjectExtensions__SetLocalPositionY(v23, 90.0, 0LL);
                      this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
                      if ( this )
                      {
                        v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                        GameObjectExtensions__SetLocalPositionY(v24, 140.0, 0LL);
                        CheckMaterialSvtEquippedDialog__SetObjActive(v9, 1, v25);
                        v9->fields.state = 2;
                        v26 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                        System_Action___ctor(
                          v26,
                          (Il2CppObject *)v9,
                          Method_CheckMaterialSvtEquippedDialog_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)v9, v26, 0, 0LL);
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
    sub_B7769C(this, callback);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__SetObjActive(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isOneButton,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *closeLabel; // x19

  if ( (byte_438C392 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    byte_438C392 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_16;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !decideButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, !isOneButton, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_16;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !decideButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, !isOneButton, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !decideButton )
    goto LABEL_16;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !decideButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isOneButton, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)decideButton, 0LL),
        cancelLabel = this->fields.cancelLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)decideButton, 0LL),
        closeLabel = this->fields.closeLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeLabel) )
  {
LABEL_16:
    sub_B7769C(decideButton, isOneButton);
  }
  UILabel__set_text(closeLabel, (System_String_o *)decideButton, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4388569 & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtEquippedDialog___c_TypeInfo);
    byte_4388569 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(CheckMaterialSvtEquippedDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CheckMaterialSvtEquippedDialog___c_o *)v1;
  sub_B77560(static_fields);
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