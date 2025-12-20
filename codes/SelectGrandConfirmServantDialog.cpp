void SelectGrandConfirmServantDialog___ctor(SelectGrandConfirmServantDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D27526 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D27526 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SelectGrandConfirmServantDialog__Awake(SelectGrandConfirmServantDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void SelectGrandConfirmServantDialog__OnClickCancel(SelectGrandConfirmServantDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SelectGrandConfirmServantDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4D27525 & 1) == 0 )
  {
    sub_1C94098(&Method_SelectGrandConfirmServantDialog_OnClickCancel__);
    byte_4D27525 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SelectGrandConfirmServantDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectGrandConfirmServantDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SelectGrandConfirmServantDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void SelectGrandConfirmServantDialog__OnClickDecide(SelectGrandConfirmServantDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SelectGrandConfirmServantDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4D27524 & 1) == 0 )
  {
    sub_1C94098(&Method_SelectGrandConfirmServantDialog_OnClickDecide__);
    byte_4D27524 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SelectGrandConfirmServantDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectGrandConfirmServantDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SelectGrandConfirmServantDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void SelectGrandConfirmServantDialog__OnEnable(SelectGrandConfirmServantDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D27522 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_15695/*"Window/Buttons/CancelButton"*/);
    byte_4D27522 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45761432(transform, (System_String_o *)StringLiteral_15695/*"Window/Buttons/CancelButton"*/, 0);
}


void SelectGrandConfirmServantDialog__OpenConfirm(
        SelectGrandConfirmServantDialog_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        SelectGrandConfirmServantDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandGraphDetailMaster_o *Master_object; // x0
  __int64 v13; // x1
  int32_t id; // w23
  GrandGraphDetailMaster_o *v15; // x22
  struct System_Int32_array *removeItemIds; // x8
  GrandGraphDetailMaster_o *v17; // x21
  int32_t v18; // w22
  Il2CppObject *v19; // x23
  UserItemEntity_o *EntityDefinitely; // x22
  Il2CppObject *Entity; // x22
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  System_String_o *v24; // x24
  UILabel_o *cancelButtonLabel; // x21
  UILabel_o *decideButtonLabel; // x21

  if ( (byte_4D27523 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_11578/*"SELECT_GRAND_CONFIRM_DIALOG_CANCEL_BUTTON_TEXT"*/);
    sub_1C94098(&StringLiteral_11579/*"SELECT_GRAND_CONFIRM_DIALOG_DECIDE_BUTTON_TEXT"*/);
    sub_1C94098(&StringLiteral_11580/*"SELECT_GRAND_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C94098(&StringLiteral_11581/*"SELECT_GRAND_CONFIRM_DIALOG_TITLE"*/);
    byte_4D27523 = 1;
  }
  this->fields.clickFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc,
    (int32_t)callback,
    (int32_t)userServantEntity,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_29;
  if ( !userServantEntity )
    goto LABEL_29;
  id = grandGraphEntity->fields.id;
  v15 = Master_object;
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__getSvtClassId(userServantEntity, 0, 0, 0);
  if ( !v15 )
    goto LABEL_29;
  Master_object = (GrandGraphDetailMaster_o *)GrandGraphDetailMaster__GetEntity(v15, id, (int32_t)Master_object, 0);
  removeItemIds = grandGraphEntity->fields.removeItemIds;
  if ( !removeItemIds )
    goto LABEL_29;
  if ( !LODWORD(removeItemIds->max_length) )
    sub_1C942F8(Master_object);
  v17 = Master_object;
  v18 = removeItemIds->m_Items[0];
  v19 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  Master_object = (GrandGraphDetailMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (GrandGraphDetailMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_29;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)v19,
                       (int64_t)Master_object[2].fields.list[1].monitor,
                       v18,
                       0);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !EntityDefinitely || !Master_object )
    goto LABEL_29;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             EntityDefinitely->fields.itemId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleLabel, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11581/*"SELECT_GRAND_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  messageLabel = this->fields.messageLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11580/*"SELECT_GRAND_CONFIRM_DIALOG_MESSAGE"*/, 0);
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__GetSvtName(userServantEntity, 0);
  if ( !v17 )
    goto LABEL_29;
  if ( !Entity )
    goto LABEL_29;
  Master_object = (GrandGraphDetailMaster_o *)System_String__Format_64459120(
                                                v24,
                                                (Il2CppObject *)Master_object,
                                                (Il2CppObject *)v17[1].klass,
                                                (Il2CppObject *)Entity[1].monitor,
                                                0);
  if ( !messageLabel )
    goto LABEL_29;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11578/*"SELECT_GRAND_CONFIRM_DIALOG_CANCEL_BUTTON_TEXT"*/, 0);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, (System_String_o *)Master_object, 0),
        decideButtonLabel = this->fields.decideButtonLabel,
        Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11579/*"SELECT_GRAND_CONFIRM_DIALOG_DECIDE_BUTTON_TEXT"*/, 0),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)Master_object, 0),
        (Master_object = (GrandGraphDetailMaster_o *)this->fields.servantFaceIcon) == 0) )
  {
LABEL_29:
    sub_1C942F0(Master_object, v13);
  }
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, 0, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void SelectGrandConfirmServantDialog_ClickDelegate___ctor(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC08F0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC08A8;
}


System_IAsyncResult_o *SelectGrandConfirmServantDialog_ClickDelegate__BeginInvoke(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4D27527 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D27527 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void SelectGrandConfirmServantDialog_ClickDelegate__EndInvoke(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void SelectGrandConfirmServantDialog_ClickDelegate__Invoke(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}