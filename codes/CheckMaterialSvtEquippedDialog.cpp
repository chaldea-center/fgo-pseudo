void CheckMaterialSvtEquippedDialog___ctor(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCB5E8 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CCB5E8 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.lastSvtCommandCodeList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CheckMaterialSvtEquippedDialog__CallOnConfirm(
        CheckMaterialSvtEquippedDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_int__o **p_callback; // x0
  struct System_Action_int__o *v10; // x21
  struct System_Action_int__o *callback; // t1

  callback = this->fields.callback;
  p_callback = &this->fields.callback;
  v10 = callback;
  if ( callback )
  {
    this->fields.callback = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_callback, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      (unsigned int)result,
      v10->fields.method);
    BaseDialog__Close((BaseDialog_o *)this, 0, 0);
  }
}


void CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v4; // w9

  v2 = this;
  if ( (byte_4CCB5DC & 1) == 0 )
  {
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1C713B0(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4CCB5DC = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1C71608(this, method);
  v4 = lastSvtCommandCodeList->fields._version + 1;
  lastSvtCommandCodeList->fields._size = 0;
  lastSvtCommandCodeList->fields._version = v4;
}


void CheckMaterialSvtEquippedDialog__Close(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0, 0);
}


void CheckMaterialSvtEquippedDialog__EndCloseShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4CCB5E6 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_4CCB5E6 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_object__o *)sub_1C715FC(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0);
  if ( !listViewManager )
    sub_1C71608(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&listViewManager->fields.onSelectItem,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  CheckMaterialSvtListViewManager__SetMode_49090356(listViewManager, 2, v13);
}


void CheckMaterialSvtEquippedDialog__EndCloseShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4CCB5E3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_4CCB5E3 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_object__o *)sub_1C715FC(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0);
  if ( !listViewManager )
    sub_1C71608(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&listViewManager->fields.onSelectItem,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  CheckMaterialSvtListViewManager__SetMode_49090356(listViewManager, 2, v13);
}


void CheckMaterialSvtEquippedDialog__EndOpen(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4CCB5DD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_4CCB5DD = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_object__o *)sub_1C715FC(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0);
  if ( !listViewManager )
    sub_1C71608(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&listViewManager->fields.onSelectItem,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  CheckMaterialSvtListViewManager__SetMode_49090356(listViewManager, 2, v13);
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtEquippedDialog__EndShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4CCB5E5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCB5E5 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.commandCodeStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C71608(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtEquippedDialog__EndShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4CCB5E2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCB5E2 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.servantStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C71608(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


void CheckMaterialSvtEquippedDialog__Init(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CCB5D9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCB5D9 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.upperLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.lowerLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.closeLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UILabel_o *)this->fields.decideButton;
  if ( !titleLabel
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0),
        (titleLabel = (UILabel_o *)this->fields.cancelButton) == 0)
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0),
        (titleLabel = (UILabel_o *)this->fields.closeButton) == 0)
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0)) == 0 )
  {
LABEL_16:
    sub_1C71608(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CheckMaterialSvtEquippedDialog__ModifyItem(
        CheckMaterialSvtEquippedDialog_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C71608(0, selectedId);
  CheckMaterialSvtListViewManager__ModifyItem(listViewManager, selectedId, method);
}


void CheckMaterialSvtEquippedDialog__OnClickCancel(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v4; // w9
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_4CCB5DF & 1) == 0 )
  {
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_OnClickCancel__);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1C713B0(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4CCB5DF = 1;
  }
  if ( v2->fields.state == 1 )
  {
    lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      sub_1C71608(this, method);
    v4 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v4;
    v5 = Method_CheckMaterialSvtEquippedDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_CheckMaterialSvtEquippedDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(v2, 0, v7);
  }
}


void CheckMaterialSvtEquippedDialog__OnClickClose(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4CCB5E0 & 1) == 0 )
  {
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_OnClickClose__);
    byte_4CCB5E0 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CheckMaterialSvtEquippedDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CheckMaterialSvtEquippedDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    BaseDialog__Close((BaseDialog_o *)this, 0, 0);
  }
}


void CheckMaterialSvtEquippedDialog__OnClickDecide(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CCB5DE & 1) == 0 )
  {
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_OnClickDecide__);
    byte_4CCB5DE = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CheckMaterialSvtEquippedDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CheckMaterialSvtEquippedDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 1, v5);
  }
}


void CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v11; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22

  if ( (byte_4CCB5E4 & 1) == 0 )
  {
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__);
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__);
    sub_1C713B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCB5E4 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v5 = Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(selectItem, v8),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v11 = (CommonUI_o *)Instance,
          v12 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__,
            0),
          !v11) )
    {
      sub_1C71608(v7, v8);
    }
    CommonUI__OpenServantStatusDialog_31453196(v11, 32, UserCommandCodeEntity_k__BackingField, v12, 0, 0);
  }
}


void CheckMaterialSvtEquippedDialog__OnSelectServantDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v10; // x21
  ServantStatusDialog_EndDelegate_o *v11; // x22
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4CCB5E1 & 1) == 0 )
  {
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_EndShowServant__);
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    sub_1C713B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCB5E1 = 1;
  }
  if ( v4->fields.state == 1 )
  {
    if ( !selectItem )
      goto LABEL_13;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      v5 = Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__;
      if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C713C8(Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserSvtId(selectItem, v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v10 = (CommonUI_o *)Instance;
      v11 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v11,
        (Il2CppObject *)v4,
        Method_CheckMaterialSvtEquippedDialog_EndShowServant__,
        0);
      if ( v10 )
      {
        CommonUI__OpenServantStatusDialog_31449812(v10, 29, servantStatusId, v11, 0, 0);
        return;
      }
LABEL_13:
      sub_1C71608(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(v4, selectItem, v12);
    }
  }
}


void CheckMaterialSvtEquippedDialog__Open(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o *servantIdList,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v15; // w9
  UILabel_o *titleLabel; // x22
  UILabel_o *upperLabel; // x22
  UILabel_o *lowerLabel; // x22
  const MethodInfo *v19; // x7
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v24; // x1
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  int32_t SvtId; // w21
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *v31; // x22
  NetworkManager_c *v32; // x0
  System_Collections_Generic_IEnumerable_T__o *UserSvtCommandCodeIdList; // x1
  System_Collections_Generic_List_long__o *v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  CheckMaterialSvtEquippedDialog___c_c *v37; // x8
  System_Collections_Generic_List_long__o *v38; // x21
  System_Predicate_long__o *_9__20_0; // x22
  Il2CppObject *v40; // x23
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  const MethodInfo *v51; // x2
  System_Action_o *v52; // x20
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CCB5DA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_EndOpen__);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__RemoveAll__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&System_Predicate_long__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__);
    sub_1C713B0(&CheckMaterialSvtEquippedDialog___c_TypeInfo);
    sub_1C713B0(&StringLiteral_3594/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/);
    sub_1C713B0(&StringLiteral_3595/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_3770/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4CCB5DA = 1;
  }
  memset(&v54, 0, sizeof(v54));
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.callback,
      (int32_t)callback,
      (int32_t)servantIdList,
      (int32_t)callback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    v15 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v15;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3770/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    upperLabel = this->fields.upperLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3594/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, 0);
    if ( !upperLabel )
      goto LABEL_51;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0);
    lowerLabel = this->fields.lowerLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3595/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0);
    if ( !lowerLabel )
      goto LABEL_51;
    UILabel__set_text(lowerLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( !gameObject )
      goto LABEL_51;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( !gameObject )
      goto LABEL_51;
    CheckMaterialSvtListViewManager__CreateList(
      (CheckMaterialSvtListViewManager_o *)gameObject,
      selectMaterialItemList,
      0,
      servantIdList,
      0,
      0,
      1,
      v19);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( !servantIdList )
      goto LABEL_51;
    System_Collections_Generic_List_long___GetEnumerator(
      &v53,
      servantIdList,
      (const MethodInfo_37F9220 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v54 = v53;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v54,
              (const MethodInfo_3593788 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v54.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C71608(0, v22);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1C71608(0, v24);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_1C71608(0, v26);
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Entity, 0);
      v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v28 )
        sub_1C71608(0, v29);
      v31 = DataManager__GetMasterData_object_(
              (DataManager_o *)v28,
              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CC112A )
      {
        sub_1C713B0(&NetworkManager_TypeInfo);
        byte_4CC112A = 1;
      }
      v32 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v32 = NetworkManager_TypeInfo;
      }
      if ( !v31 )
        sub_1C71608(v32, v30);
      UserSvtCommandCodeIdList = (System_Collections_Generic_IEnumerable_T__o *)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                                                                  (UserServantCommandCodeMaster_o *)v31,
                                                                                  v32->static_fields->userIdNumber,
                                                                                  SvtId,
                                                                                  0);
      if ( UserSvtCommandCodeIdList )
      {
        v34 = this->fields.lastSvtCommandCodeList;
        if ( !v34 )
          sub_1C71608(0, UserSvtCommandCodeIdList);
        System_Collections_Generic_List_long___AddRange(
          v34,
          UserSvtCommandCodeIdList,
          (const MethodInfo_37F8958 *)Method_System_Collections_Generic_List_long__AddRange__);
        v37 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        v38 = this->fields.lastSvtCommandCodeList;
        if ( !CheckMaterialSvtEquippedDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CheckMaterialSvtEquippedDialog___c_TypeInfo);
          v37 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        }
        _9__20_0 = v37->static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( !v37->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v37);
            v37 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
          }
          v40 = (Il2CppObject *)v37->static_fields->__9;
          _9__20_0 = (System_Predicate_long__o *)sub_1C715FC(System_Predicate_long__TypeInfo);
          System_Predicate_long____ctor(_9__20_0, v40, Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__, 0);
          static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = _9__20_0;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__20_0,
            (int32_t)_9__20_0,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
        }
        if ( !v38 )
          sub_1C71608(v35, v36);
        System_Collections_Generic_List_long___RemoveAll(
          v38,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_37F9D74 *)Method_System_Collections_Generic_List_long__RemoveAll__);
      }
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v54,
      (const MethodInfo_3593784 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    gameObject = (UnityEngine_GameObject_o *)this->fields.lowerLabel;
    if ( !gameObject
      || (v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0),
          GameObjectExtensions__SetLocalPositionY(v48, -140.0, 0),
          (gameObject = this->fields.listViewBg) == 0)
      || (v49 = UnityEngine_GameObject__get_gameObject(gameObject, 0),
          GameObjectExtensions__SetLocalPositionY(v49, 44.0, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
    {
LABEL_51:
      sub_1C71608(gameObject, v13);
    }
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v50, 94.0, 0);
    this->fields.state = 2;
    CheckMaterialSvtEquippedDialog__SetObjActive(this, 0, v51);
    v52 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v52, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0, 0);
  }
}


void CheckMaterialSvtEquippedDialog__OpenCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  CheckMaterialSvtEquippedDialog_o *v9; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_List_TSource__o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  const MethodInfo *v21; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  const MethodInfo *v25; // x2
  System_Action_o *v26; // x20

  v9 = this;
  if ( (byte_4CCB5DB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CheckMaterialSvtEquippedDialog_EndOpen__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3658/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1C713B0(&StringLiteral_3659/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/);
    byte_4CCB5DB = 1;
  }
  lastSvtCommandCodeList = v9->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_20;
  if ( lastSvtCommandCodeList->fields._size >= 1 && !v9->fields.state )
  {
    v9->fields.callback = callback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&v9->fields.callback,
      (int32_t)callback,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v11 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v9->fields.lastSvtCommandCodeList,
              (const MethodInfo_316E430 *)Method_System_Linq_Enumerable_Distinct_long___);
      v12 = System_Linq_Enumerable__ToList_long_(
              v11,
              (const MethodInfo_318FB14 *)Method_System_Linq_Enumerable_ToList_long___);
      v9->fields.lastSvtCommandCodeList = (struct System_Collections_Generic_List_long__o *)v12;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v9->fields.lastSvtCommandCodeList,
        (int32_t)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      titleLabel = v9->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3659/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0);
        lowerLabel = v9->fields.lowerLabel;
        this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3658/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, 0);
        if ( lowerLabel )
        {
          UILabel__set_text(lowerLabel, (System_String_o *)this, 0);
          this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
          if ( this )
          {
            this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
              if ( this )
              {
                CheckMaterialSvtListViewManager__CreateList(
                  (CheckMaterialSvtListViewManager_o *)this,
                  0,
                  2,
                  0,
                  v9->fields.lastSvtCommandCodeList,
                  0,
                  0,
                  v21);
                this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewBg;
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                  this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.lowerLabel;
                  if ( this )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                    GameObjectExtensions__SetLocalPositionY(gameObject, -120.0, 0);
                    this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewBg;
                    if ( this )
                    {
                      v23 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
                      GameObjectExtensions__SetLocalPositionY(v23, 90.0, 0);
                      this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
                      if ( this )
                      {
                        v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                        GameObjectExtensions__SetLocalPositionY(v24, 140.0, 0);
                        CheckMaterialSvtEquippedDialog__SetObjActive(v9, 1, v25);
                        v9->fields.state = 2;
                        v26 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                        System_Action___ctor(
                          v26,
                          (Il2CppObject *)v9,
                          Method_CheckMaterialSvtEquippedDialog_EndOpen__,
                          0);
                        BaseDialog__Open((BaseDialog_o *)v9, v26, 0, 0, 0);
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
LABEL_20:
    sub_1C71608(this, callback);
  }
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtEquippedDialog__SetObjActive(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isOneButton,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *closeLabel; // x19

  if ( (byte_4CCB5E7 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4CCB5E7 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_15;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0);
  if ( !decideButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, !isOneButton, 0);
  decideButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_15;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0);
  if ( !decideButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, !isOneButton, 0);
  decideButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !decideButton )
    goto LABEL_15;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0);
  if ( !decideButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isOneButton, 0);
  decideLabel = this->fields.decideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)decideButton, 0),
        cancelLabel = this->fields.cancelLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)decideButton, 0),
        closeLabel = this->fields.closeLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeLabel) )
  {
LABEL_15:
    sub_1C71608(decideButton, isOneButton);
  }
  UILabel__set_text(closeLabel, (System_String_o *)decideButton, 0);
}


void CheckMaterialSvtEquippedDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCB5E9 & 1) == 0 )
  {
    sub_1C713B0(&CheckMaterialSvtEquippedDialog___c_TypeInfo);
    byte_4CCB5E9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(CheckMaterialSvtEquippedDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtEquippedDialog___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CheckMaterialSvtEquippedDialog___c___ctor(CheckMaterialSvtEquippedDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CheckMaterialSvtEquippedDialog___c___Open_b__20_0(
        CheckMaterialSvtEquippedDialog___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s == 0;
}