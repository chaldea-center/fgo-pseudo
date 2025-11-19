void CheckMaterialSvtEquippedDialog___ctor(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CBA490 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CBA490 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.lastSvtCommandCodeList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CheckMaterialSvtEquippedDialog__CallOnConfirm(
        CheckMaterialSvtEquippedDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_int__o **p_callback; // x0
  struct System_Action_int__o *v6; // x21
  struct System_Action_int__o *callback; // t1

  callback = this->fields.callback;
  p_callback = &this->fields.callback;
  v6 = callback;
  if ( callback )
  {
    this->fields.callback = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_callback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v6->fields.invoke_impl)(
      v6->fields.method_code,
      (unsigned int)result,
      v6->fields.method);
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
  if ( (byte_4CBA484 & 1) == 0 )
  {
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4CBA484 = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1C6BC60(this, method);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4CBA48E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_4CBA48E = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_object__o *)sub_1C6BC54(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0);
  if ( !listViewManager )
    sub_1C6BC60(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&listViewManager->fields.onSelectItem, (int32_t)v4, v7, v8);
  CheckMaterialSvtListViewManager__SetMode_49025684(listViewManager, 2, v9);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4CBA48B & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_4CBA48B = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_object__o *)sub_1C6BC54(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0);
  if ( !listViewManager )
    sub_1C6BC60(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&listViewManager->fields.onSelectItem, (int32_t)v4, v7, v8);
  CheckMaterialSvtListViewManager__SetMode_49025684(listViewManager, 2, v9);
}


void CheckMaterialSvtEquippedDialog__EndOpen(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4CBA485 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_4CBA485 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_object__o *)sub_1C6BC54(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0);
  if ( !listViewManager )
    sub_1C6BC60(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&listViewManager->fields.onSelectItem, (int32_t)v4, v7, v8);
  CheckMaterialSvtListViewManager__SetMode_49025684(listViewManager, 2, v9);
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

  if ( (byte_4CBA48D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA48D = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.commandCodeStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C6BC60(listViewManager, isDecide);
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

  if ( (byte_4CBA48A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA48A = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.servantStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C6BC60(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


void CheckMaterialSvtEquippedDialog__Init(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CBA481 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA481 = 1;
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
    sub_1C6BC60(titleLabel, method);
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
    sub_1C6BC60(0, selectedId);
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
  if ( (byte_4CBA487 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_OnClickCancel__);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4CBA487 = 1;
  }
  if ( v2->fields.state == 1 )
  {
    lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      sub_1C6BC60(this, method);
    v4 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v4;
    v5 = Method_CheckMaterialSvtEquippedDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C6BA20(Method_CheckMaterialSvtEquippedDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(v2, 0, v7);
  }
}


void CheckMaterialSvtEquippedDialog__OnClickClose(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4CBA488 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_OnClickClose__);
    byte_4CBA488 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CheckMaterialSvtEquippedDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CheckMaterialSvtEquippedDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    BaseDialog__Close((BaseDialog_o *)this, 0, 0);
  }
}


void CheckMaterialSvtEquippedDialog__OnClickDecide(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CBA486 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_OnClickDecide__);
    byte_4CBA486 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CheckMaterialSvtEquippedDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CheckMaterialSvtEquippedDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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

  if ( (byte_4CBA48C & 1) == 0 )
  {
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__);
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__);
    sub_1C6BA08(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA48C = 1;
  }
  if ( this->fields.state == 1 )
  {
    v5 = Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C6BA20(Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(selectItem, v8),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v11 = (CommonUI_o *)Instance,
          v12 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__,
            0),
          !v11) )
    {
      sub_1C6BC60(v7, v8);
    }
    CommonUI__OpenServantStatusDialog_31430244(v11, 32, UserCommandCodeEntity_k__BackingField, v12, 0, 0);
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
  if ( (byte_4CBA489 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_EndShowServant__);
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    sub_1C6BA08(&ServantStatusDialog_EndDelegate_TypeInfo);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA489 = 1;
  }
  if ( v4->fields.state == 1 )
  {
    if ( !selectItem )
      goto LABEL_13;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      v5 = Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__;
      if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C6BA20(Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserSvtId(selectItem, v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v10 = (CommonUI_o *)Instance;
      v11 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v11,
        (Il2CppObject *)v4,
        Method_CheckMaterialSvtEquippedDialog_EndShowServant__,
        0);
      if ( v10 )
      {
        CommonUI__OpenServantStatusDialog_31426860(v10, 29, servantStatusId, v11, 0, 0);
        return;
      }
LABEL_13:
      sub_1C6BC60(this, selectItem);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v12; // w9
  UILabel_o *titleLabel; // x22
  UILabel_o *upperLabel; // x22
  UILabel_o *lowerLabel; // x22
  const MethodInfo *v16; // x7
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x1
  Il2CppObject *Entity; // x0
  __int64 v23; // x1
  int32_t SvtId; // w21
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  Il2CppObject *v28; // x22
  NetworkManager_c *v29; // x0
  System_Collections_Generic_IEnumerable_T__o *UserSvtCommandCodeIdList; // x1
  System_Collections_Generic_List_long__o *v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  CheckMaterialSvtEquippedDialog___c_c *v34; // x8
  System_Collections_Generic_List_long__o *v35; // x21
  System_Predicate_long__o *_9__20_0; // x22
  Il2CppObject *v37; // x23
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  const MethodInfo *v44; // x2
  System_Action_o *v45; // x20
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CBA482 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_EndOpen__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__RemoveAll__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&System_Predicate_long__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__);
    sub_1C6BA08(&CheckMaterialSvtEquippedDialog___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_3591/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/);
    sub_1C6BA08(&StringLiteral_3592/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_3767/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4CBA482 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.callback,
      (int32_t)callback,
      (int32_t)servantIdList,
      (const MethodInfo *)callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    v12 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v12;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    upperLabel = this->fields.upperLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3591/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, 0);
    if ( !upperLabel )
      goto LABEL_51;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0);
    lowerLabel = this->fields.lowerLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3592/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0);
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
      v16);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( !servantIdList )
      goto LABEL_51;
    System_Collections_Generic_List_long___GetEnumerator(
      &v46,
      servantIdList,
      (const MethodInfo_37E947C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v47 = v46;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v47,
              (const MethodInfo_35839E4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v47.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C6BC60(0, v19);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1C6BC60(0, v21);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_1C6BC60(0, v23);
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Entity, 0);
      v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v25 )
        sub_1C6BC60(0, v26);
      v28 = DataManager__GetMasterData_object_(
              (DataManager_o *)v25,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      v29 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v29 = NetworkManager_TypeInfo;
      }
      if ( !v28 )
        sub_1C6BC60(v29, v27);
      UserSvtCommandCodeIdList = (System_Collections_Generic_IEnumerable_T__o *)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                                                                  (UserServantCommandCodeMaster_o *)v28,
                                                                                  v29->static_fields->userIdNumber,
                                                                                  SvtId,
                                                                                  0);
      if ( UserSvtCommandCodeIdList )
      {
        v31 = this->fields.lastSvtCommandCodeList;
        if ( !v31 )
          sub_1C6BC60(0, UserSvtCommandCodeIdList);
        System_Collections_Generic_List_long___AddRange(
          v31,
          UserSvtCommandCodeIdList,
          (const MethodInfo_37E8BB4 *)Method_System_Collections_Generic_List_long__AddRange__);
        v34 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        v35 = this->fields.lastSvtCommandCodeList;
        if ( !CheckMaterialSvtEquippedDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CheckMaterialSvtEquippedDialog___c_TypeInfo);
          v34 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        }
        _9__20_0 = v34->static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( !v34->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v34);
            v34 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
          }
          v37 = (Il2CppObject *)v34->static_fields->__9;
          _9__20_0 = (System_Predicate_long__o *)sub_1C6BC54(System_Predicate_long__TypeInfo);
          System_Predicate_long____ctor(_9__20_0, v37, Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__, 0);
          static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = _9__20_0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v39, v40);
        }
        if ( !v35 )
          sub_1C6BC60(v32, v33);
        System_Collections_Generic_List_long___RemoveAll(
          v35,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_37E9FD0 *)Method_System_Collections_Generic_List_long__RemoveAll__);
      }
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v47,
      (const MethodInfo_35839E0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    gameObject = (UnityEngine_GameObject_o *)this->fields.lowerLabel;
    if ( !gameObject
      || (v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0),
          GameObjectExtensions__SetLocalPositionY(v41, -140.0, 0),
          (gameObject = this->fields.listViewBg) == 0)
      || (v42 = UnityEngine_GameObject__get_gameObject(gameObject, 0),
          GameObjectExtensions__SetLocalPositionY(v42, 44.0, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
    {
LABEL_51:
      sub_1C6BC60(gameObject, v10);
    }
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v43, 94.0, 0);
    this->fields.state = 2;
    CheckMaterialSvtEquippedDialog__SetObjActive(this, 0, v44);
    v45 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0, 0);
  }
}


void CheckMaterialSvtEquippedDialog__OpenCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CheckMaterialSvtEquippedDialog_o *v5; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Collections_Generic_List_TSource__o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  const MethodInfo *v13; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  const MethodInfo *v17; // x2
  System_Action_o *v18; // x20

  v5 = this;
  if ( (byte_4CBA483 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CheckMaterialSvtEquippedDialog_EndOpen__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3655/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1C6BA08(&StringLiteral_3656/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/);
    byte_4CBA483 = 1;
  }
  lastSvtCommandCodeList = v5->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_20;
  if ( lastSvtCommandCodeList->fields._size >= 1 && !v5->fields.state )
  {
    v5->fields.callback = callback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.callback, (int32_t)callback, (int32_t)method, v3);
    this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v7 = System_Linq_Enumerable__Distinct_long_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.lastSvtCommandCodeList,
             (const MethodInfo_315E68C *)Method_System_Linq_Enumerable_Distinct_long___);
      v8 = System_Linq_Enumerable__ToList_long_(
             v7,
             (const MethodInfo_317FD70 *)Method_System_Linq_Enumerable_ToList_long___);
      v5->fields.lastSvtCommandCodeList = (struct System_Collections_Generic_List_long__o *)v8;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.lastSvtCommandCodeList, (int32_t)v8, v9, v10);
      titleLabel = v5->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0);
        lowerLabel = v5->fields.lowerLabel;
        this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3655/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, 0);
        if ( lowerLabel )
        {
          UILabel__set_text(lowerLabel, (System_String_o *)this, 0);
          this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.listViewManager;
          if ( this )
          {
            this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.listViewManager;
              if ( this )
              {
                CheckMaterialSvtListViewManager__CreateList(
                  (CheckMaterialSvtListViewManager_o *)this,
                  0,
                  2,
                  0,
                  v5->fields.lastSvtCommandCodeList,
                  0,
                  0,
                  v13);
                this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.listViewBg;
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                  this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.lowerLabel;
                  if ( this )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                    GameObjectExtensions__SetLocalPositionY(gameObject, -120.0, 0);
                    this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.listViewBg;
                    if ( this )
                    {
                      v15 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
                      GameObjectExtensions__SetLocalPositionY(v15, 90.0, 0);
                      this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.listViewManager;
                      if ( this )
                      {
                        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                        GameObjectExtensions__SetLocalPositionY(v16, 140.0, 0);
                        CheckMaterialSvtEquippedDialog__SetObjActive(v5, 1, v17);
                        v5->fields.state = 2;
                        v18 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                        System_Action___ctor(
                          v18,
                          (Il2CppObject *)v5,
                          Method_CheckMaterialSvtEquippedDialog_EndOpen__,
                          0);
                        BaseDialog__Open((BaseDialog_o *)v5, v18, 0, 0, 0);
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
    sub_1C6BC60(this, callback);
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

  if ( (byte_4CBA48F & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4CBA48F = 1;
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
  decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)decideButton, 0),
        cancelLabel = this->fields.cancelLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)decideButton, 0),
        closeLabel = this->fields.closeLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeLabel) )
  {
LABEL_15:
    sub_1C6BC60(decideButton, isOneButton);
  }
  UILabel__set_text(closeLabel, (System_String_o *)decideButton, 0);
}


void CheckMaterialSvtEquippedDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CBA491 & 1) == 0 )
  {
    sub_1C6BA08(&CheckMaterialSvtEquippedDialog___c_TypeInfo);
    byte_4CBA491 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(CheckMaterialSvtEquippedDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtEquippedDialog___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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