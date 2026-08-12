void SelectGrandConfirmServantDialog___ctor(SelectGrandConfirmServantDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B3A1 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B3A1 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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

  if ( (byte_596B3A0 & 1) == 0 )
  {
    sub_2213A60(&Method_SelectGrandConfirmServantDialog_OnClickCancel__);
    byte_596B3A0 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SelectGrandConfirmServantDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectGrandConfirmServantDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SelectGrandConfirmServantDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596B39F & 1) == 0 )
  {
    sub_2213A60(&Method_SelectGrandConfirmServantDialog_OnClickDecide__);
    byte_596B39F = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SelectGrandConfirmServantDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectGrandConfirmServantDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SelectGrandConfirmServantDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596B39D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16256/*"Window/Buttons/CancelButton"*/);
    byte_596B39D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16256/*"Window/Buttons/CancelButton"*/, 0);
}


void SelectGrandConfirmServantDialog__OpenConfirm(
        SelectGrandConfirmServantDialog_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        SelectGrandConfirmServantDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  GrandGraphDetailMaster_o *Master_object; // x0
  __int64 v15; // x1
  GrandGraphDetailMaster_o *v16; // x22
  int32_t id; // w23
  struct System_Int32_array *removeItemIds; // x8
  GrandGraphDetailMaster_o *v19; // x21
  int32_t v20; // w22
  __int64 v21; // x2
  Il2CppObject *v22; // x23
  UserItemEntity_o *EntityDefinitely; // x22
  Il2CppObject *Entity; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  System_String_o *v29; // x24
  UILabel_o *cancelButtonLabel; // x21
  UILabel_o *decideButtonLabel; // x21
  const MethodInfo *v32; // x3

  if ( (byte_596B39E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_12039/*"SELECT_GRAND_CONFIRM_DIALOG_CANCEL_BUTTON_TEXT"*/);
    sub_2213A60(&StringLiteral_12040/*"SELECT_GRAND_CONFIRM_DIALOG_DECIDE_BUTTON_TEXT"*/);
    sub_2213A60(&StringLiteral_12041/*"SELECT_GRAND_CONFIRM_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12042/*"SELECT_GRAND_CONFIRM_DIALOG_TITLE"*/);
    byte_596B39E = 1;
  }
  this->fields.clickFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)callback,
    (System_String_o *)userServantEntity,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_29;
  if ( !userServantEntity )
    goto LABEL_29;
  v16 = Master_object;
  id = grandGraphEntity->fields.id;
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__getSvtClassId(userServantEntity, 0, 0, 0);
  if ( !v16 )
    goto LABEL_29;
  Master_object = (GrandGraphDetailMaster_o *)GrandGraphDetailMaster__GetEntity(v16, id, (int32_t)Master_object, 0);
  removeItemIds = grandGraphEntity->fields.removeItemIds;
  if ( !removeItemIds )
    goto LABEL_29;
  if ( !LODWORD(removeItemIds->max_length) )
    sub_2213CE4(Master_object);
  v19 = Master_object;
  v20 = removeItemIds->m_Items[0];
  v22 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v21);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Master_object = (GrandGraphDetailMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v21);
    Master_object = (GrandGraphDetailMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v22 )
    goto LABEL_29;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)v22,
                       (int64_t)Master_object[2].fields.list[1].monitor,
                       v20,
                       0);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !EntityDefinitely || !Master_object )
    goto LABEL_29;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             EntityDefinitely->fields.itemId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleLabel, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12042/*"SELECT_GRAND_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  messageLabel = this->fields.messageLabel;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12041/*"SELECT_GRAND_CONFIRM_DIALOG_MESSAGE"*/, 0);
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__GetSvtName(userServantEntity, 1, 0);
  if ( !v19 )
    goto LABEL_29;
  if ( !Entity )
    goto LABEL_29;
  Master_object = (GrandGraphDetailMaster_o *)System_String__Format_75697948(
                                                v29,
                                                (Il2CppObject *)Master_object,
                                                (Il2CppObject *)v19[1].klass,
                                                (Il2CppObject *)Entity[1].monitor,
                                                0);
  if ( !messageLabel )
    goto LABEL_29;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12039/*"SELECT_GRAND_CONFIRM_DIALOG_CANCEL_BUTTON_TEXT"*/, 0);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, (System_String_o *)Master_object, 0),
        decideButtonLabel = this->fields.decideButtonLabel,
        Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12040/*"SELECT_GRAND_CONFIRM_DIALOG_DECIDE_BUTTON_TEXT"*/, 0),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)Master_object, 0),
        (Master_object = (GrandGraphDetailMaster_o *)this->fields.servantFaceIcon) == 0) )
  {
LABEL_29:
    sub_2213CDC(Master_object, v15);
  }
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, 0, v32);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void SelectGrandConfirmServantDialog_ClickDelegate___ctor(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20019F4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20019AC;
}


System_IAsyncResult_o *SelectGrandConfirmServantDialog_ClickDelegate__BeginInvoke(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void SelectGrandConfirmServantDialog_ClickDelegate__EndInvoke(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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