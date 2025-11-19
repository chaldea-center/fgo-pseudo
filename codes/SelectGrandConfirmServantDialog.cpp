void SelectGrandConfirmServantDialog___ctor(SelectGrandConfirmServantDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB10CC & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB10CC = 1;
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

  if ( (byte_4CB10CB & 1) == 0 )
  {
    sub_1C6BA08(&Method_SelectGrandConfirmServantDialog_OnClickCancel__);
    byte_4CB10CB = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SelectGrandConfirmServantDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectGrandConfirmServantDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_SelectGrandConfirmServantDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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

  if ( (byte_4CB10CA & 1) == 0 )
  {
    sub_1C6BA08(&Method_SelectGrandConfirmServantDialog_OnClickDecide__);
    byte_4CB10CA = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SelectGrandConfirmServantDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectGrandConfirmServantDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_SelectGrandConfirmServantDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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

  if ( (byte_4CB10C8 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15635/*"Window/Buttons/CancelButton"*/);
    byte_4CB10C8 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(transform, (System_String_o *)StringLiteral_15635/*"Window/Buttons/CancelButton"*/, 0);
}


void SelectGrandConfirmServantDialog__OpenConfirm(
        SelectGrandConfirmServantDialog_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        SelectGrandConfirmServantDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  GrandGraphDetailMaster_o *Master_object; // x0
  __int64 v10; // x1
  int32_t id; // w23
  GrandGraphDetailMaster_o *v12; // x22
  struct System_Int32_array *removeItemIds; // x8
  GrandGraphDetailMaster_o *v14; // x21
  int32_t v15; // w22
  Il2CppObject *v16; // x23
  UserItemEntity_o *EntityDefinitely; // x22
  Il2CppObject *Entity; // x22
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  System_String_o *v21; // x24
  UILabel_o *cancelButtonLabel; // x21
  UILabel_o *decideButtonLabel; // x21

  if ( (byte_4CB10C9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11530/*"SELECT_GRAND_CONFIRM_DIALOG_CANCEL_BUTTON_TEXT"*/);
    sub_1C6BA08(&StringLiteral_11531/*"SELECT_GRAND_CONFIRM_DIALOG_DECIDE_BUTTON_TEXT"*/);
    sub_1C6BA08(&StringLiteral_11532/*"SELECT_GRAND_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_11533/*"SELECT_GRAND_CONFIRM_DIALOG_TITLE"*/);
    byte_4CB10C9 = 1;
  }
  this->fields.clickFunc = callback;
  sub_1C6B9AC(&this->fields.clickFunc, callback);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_29;
  if ( !userServantEntity )
    goto LABEL_29;
  id = grandGraphEntity->fields.id;
  v12 = Master_object;
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__getSvtClassId(userServantEntity, 0, 0, 0);
  if ( !v12 )
    goto LABEL_29;
  Master_object = (GrandGraphDetailMaster_o *)GrandGraphDetailMaster__GetEntity(v12, id, (int32_t)Master_object, 0);
  removeItemIds = grandGraphEntity->fields.removeItemIds;
  if ( !removeItemIds )
    goto LABEL_29;
  if ( !LODWORD(removeItemIds->max_length) )
    sub_1C6BC68(Master_object);
  v14 = Master_object;
  v15 = removeItemIds->m_Items[0];
  v16 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Master_object = (GrandGraphDetailMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (GrandGraphDetailMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_29;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)v16,
                       (int64_t)Master_object[2].fields.list[1].monitor,
                       v15,
                       0);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !EntityDefinitely || !Master_object )
    goto LABEL_29;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             EntityDefinitely->fields.itemId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleLabel, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11533/*"SELECT_GRAND_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  messageLabel = this->fields.messageLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11532/*"SELECT_GRAND_CONFIRM_DIALOG_MESSAGE"*/, 0);
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__GetSvtName(userServantEntity, 0);
  if ( !v14 )
    goto LABEL_29;
  if ( !Entity )
    goto LABEL_29;
  Master_object = (GrandGraphDetailMaster_o *)System_String__Format_64008168(
                                                v21,
                                                (Il2CppObject *)Master_object,
                                                (Il2CppObject *)v14[1].klass,
                                                (Il2CppObject *)Entity[1].monitor,
                                                0);
  if ( !messageLabel )
    goto LABEL_29;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11530/*"SELECT_GRAND_CONFIRM_DIALOG_CANCEL_BUTTON_TEXT"*/, 0);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, (System_String_o *)Master_object, 0),
        decideButtonLabel = this->fields.decideButtonLabel,
        Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11531/*"SELECT_GRAND_CONFIRM_DIALOG_DECIDE_BUTTON_TEXT"*/, 0),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)Master_object, 0),
        (Master_object = (GrandGraphDetailMaster_o *)this->fields.servantFaceIcon) == 0) )
  {
LABEL_29:
    sub_1C6BC60(Master_object, v10);
  }
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void SelectGrandConfirmServantDialog_ClickDelegate___ctor(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A99C20;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A99BD8;
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
  if ( (byte_4CB10CD & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB10CD = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void SelectGrandConfirmServantDialog_ClickDelegate__EndInvoke(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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