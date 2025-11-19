void ConfirmUseGrandServantResetItemDialog___ctor(
        ConfirmUseGrandServantResetItemDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB1015 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB1015 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ConfirmUseGrandServantResetItemDialog__Awake(
        ConfirmUseGrandServantResetItemDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void ConfirmUseGrandServantResetItemDialog__Callback(
        ConfirmUseGrandServantResetItemDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct ConfirmUseGrandServantResetItemDialog_CallbackFunc_o **p_callbackFunc; // x0
  struct ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *v4; // x20
  struct ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C6B9AC(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      (unsigned int)result,
      v4->fields.method);
  }
}


void ConfirmUseGrandServantResetItemDialog__Close(
        ConfirmUseGrandServantResetItemDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, callback, 0);
}


void ConfirmUseGrandServantResetItemDialog__OnClickCancel(
        ConfirmUseGrandServantResetItemDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    ConfirmUseGrandServantResetItemDialog__Callback(this, 1, v2);
}


void ConfirmUseGrandServantResetItemDialog__OnClickOk(
        ConfirmUseGrandServantResetItemDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    ConfirmUseGrandServantResetItemDialog__Callback(this, 0, v2);
}


void ConfirmUseGrandServantResetItemDialog__OnEnable(
        ConfirmUseGrandServantResetItemDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CB1013 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15635/*"Window/Buttons/CancelButton"*/);
    byte_4CB1013 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(transform, (System_String_o *)StringLiteral_15635/*"Window/Buttons/CancelButton"*/, 0);
}


void ConfirmUseGrandServantResetItemDialog__Open(
        ConfirmUseGrandServantResetItemDialog_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x21
  GrandGraphDetailMaster_o *Master_object; // x0
  __int64 v11; // x1
  int32_t id; // w24
  GrandGraphDetailMaster_o *v13; // x23
  GrandGraphDetailEntity_o *Entity; // x0
  UILabel_o *messageLabel; // x23
  GrandGraphDetailEntity_o *v16; // x24
  System_String_o *v17; // x25
  const MethodInfo *v18; // x2
  struct System_Int32_array *removeItemIds; // x8
  int32_t v20; // w22
  Il2CppObject *v21; // x23
  UserItemEntity_o *EntityDefinitely; // x22
  Il2CppObject *v23; // x23
  System_Collections_Generic_IEnumerable_T__o *needItemIcons; // x24
  System_Action_object__o *v25; // x25
  struct UILabel_array *needItemNameLabels; // x8
  UILabel_o *v27; // x21
  struct UILabel_array *v28; // x8
  UILabel_o *v29; // x21
  struct System_Int32_array *removeItemNums; // x8
  UILabel_o *needNumLabel; // x20
  UILabel_o *haveNumLabel; // x20

  if ( (byte_4CB1014 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_ItemIconComponent__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_1C6BA08(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0__Open_b__0__);
    sub_1C6BA08(&ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_3773/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_NEED_ITEM"*/);
    sub_1C6BA08(&StringLiteral_3772/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_3771/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_HAVE_ITEM"*/);
    byte_4CB1014 = 1;
  }
  v9 = (Il2CppObject *)sub_1C6BC54(ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor(v9, 0);
  this->fields.callbackFunc = callback;
  sub_1C6B9AC(&this->fields.callbackFunc, callback);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_38;
  if ( !userServantEntity )
    goto LABEL_38;
  id = grandGraphEntity->fields.id;
  v13 = Master_object;
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__getSvtClassId(userServantEntity, 0, 0, 0);
  if ( !v13 )
    goto LABEL_38;
  Entity = GrandGraphDetailMaster__GetEntity(v13, id, (int32_t)Master_object, 0);
  messageLabel = this->fields.messageLabel;
  v16 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3772/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_MESSAGE"*/, 0);
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__GetSvtName(userServantEntity, 0);
  if ( !v16 )
    goto LABEL_38;
  Master_object = (GrandGraphDetailMaster_o *)System_String__Format_64008100(
                                                v17,
                                                (Il2CppObject *)Master_object,
                                                (Il2CppObject *)v16->fields.nameFull,
                                                0);
  if ( !messageLabel )
    goto LABEL_38;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  Master_object = (GrandGraphDetailMaster_o *)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_38;
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, v18);
  removeItemIds = grandGraphEntity->fields.removeItemIds;
  if ( !removeItemIds )
    goto LABEL_38;
  if ( !LODWORD(removeItemIds->max_length) )
    goto LABEL_39;
  v20 = removeItemIds->m_Items[0];
  v21 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
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
  if ( !v21 )
    goto LABEL_38;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)v21,
                       (int64_t)Master_object[2].fields.list[1].monitor,
                       v20,
                       0);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !EntityDefinitely )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (GrandGraphDetailMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                EntityDefinitely->fields.itemId,
                                                (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !v9 )
    goto LABEL_38;
  v9[1].klass = (Il2CppClass *)Master_object;
  v23 = v9 + 1;
  sub_1C6B9AC(&v9[1], Master_object);
  needItemIcons = (System_Collections_Generic_IEnumerable_T__o *)this->fields.needItemIcons;
  v25 = (System_Action_object__o *)sub_1C6BC54(System_Action_ItemIconComponent__TypeInfo);
  System_Action_object____ctor(
    v25,
    v9,
    Method_ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0__Open_b__0__,
    0);
  BasicHelper__ForEach_object_(
    needItemIcons,
    (System_Action_T__o *)v25,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_ItemIconComponent___);
  needItemNameLabels = this->fields.needItemNameLabels;
  if ( !needItemNameLabels )
    goto LABEL_38;
  if ( !LODWORD(needItemNameLabels->max_length) )
    goto LABEL_39;
  v27 = needItemNameLabels->m_Items[0];
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3773/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_NEED_ITEM"*/, 0);
  if ( !v23->klass )
    goto LABEL_38;
  Master_object = (GrandGraphDetailMaster_o *)System_String__Format(
                                                (System_String_o *)Master_object,
                                                (Il2CppObject *)v23->klass->_1.namespaze,
                                                0);
  if ( !v27 )
    goto LABEL_38;
  UILabel__set_text(v27, (System_String_o *)Master_object, 0);
  v28 = this->fields.needItemNameLabels;
  if ( !v28 )
    goto LABEL_38;
  if ( LODWORD(v28->max_length) <= 1 )
    goto LABEL_39;
  v29 = v28->m_Items[1];
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3771/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_HAVE_ITEM"*/, 0);
  if ( !v23->klass
    || (Master_object = (GrandGraphDetailMaster_o *)System_String__Format(
                                                      (System_String_o *)Master_object,
                                                      (Il2CppObject *)v23->klass->_1.namespaze,
                                                      0),
        !v29)
    || (UILabel__set_text(v29, (System_String_o *)Master_object, 0),
        (removeItemNums = grandGraphEntity->fields.removeItemNums) == 0) )
  {
LABEL_38:
    sub_1C6BC60(Master_object, v11);
  }
  if ( !LODWORD(removeItemNums->max_length) )
LABEL_39:
    sub_1C6BC68(Master_object);
  needNumLabel = this->fields.needNumLabel;
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__GetNumberFormat(removeItemNums->m_Items[0], 0);
  if ( !needNumLabel )
    goto LABEL_38;
  UILabel__set_text(needNumLabel, (System_String_o *)Master_object, 0);
  haveNumLabel = this->fields.haveNumLabel;
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__GetNumberFormat(EntityDefinitely->fields.num, 0);
  if ( !haveNumLabel )
    goto LABEL_38;
  UILabel__set_text(haveNumLabel, (System_String_o *)Master_object, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void ConfirmUseGrandServantResetItemDialog__add_callbackFunc(
        ConfirmUseGrandServantResetItemDialog_o *this,
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ConfirmUseGrandServantResetItemDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ConfirmUseGrandServantResetItemDialog_o *v11; // x0
  ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB1011 & 1) == 0 )
  {
    sub_1C6BA08(&ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo);
    byte_4CB1011 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ConfirmUseGrandServantResetItemDialog_CallbackFunc_c *)v8->klass != ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmUseGrandServantResetItemDialog_o *)sub_1C6BFFC(v8);
  ConfirmUseGrandServantResetItemDialog__remove_callbackFunc(v11, v12, v13);
}


void ConfirmUseGrandServantResetItemDialog__remove_callbackFunc(
        ConfirmUseGrandServantResetItemDialog_o *this,
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ConfirmUseGrandServantResetItemDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ConfirmUseGrandServantResetItemDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CB1012 & 1) == 0 )
  {
    sub_1C6BA08(&ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo);
    byte_4CB1012 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ConfirmUseGrandServantResetItemDialog_CallbackFunc_c *)v8->klass != ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmUseGrandServantResetItemDialog_o *)sub_1C6BFFC(v8);
  ConfirmUseGrandServantResetItemDialog__Awake(v11, v12);
}


void ConfirmUseGrandServantResetItemDialog_CallbackFunc___ctor(
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1A99AA0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A99A58;
}


System_IAsyncResult_o *ConfirmUseGrandServantResetItemDialog_CallbackFunc__BeginInvoke(
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CB1016 & 1) == 0 )
  {
    sub_1C6BA08(&ConfirmUseGrandServantResetItemDialog_Result_TypeInfo);
    byte_4CB1016 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ConfirmUseGrandServantResetItemDialog_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void ConfirmUseGrandServantResetItemDialog_CallbackFunc__EndInvoke(
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void ConfirmUseGrandServantResetItemDialog_CallbackFunc__Invoke(
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0___ctor(
        ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0___Open_b__0(
        ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0_o *this,
        ItemIconComponent_o *icon,
        const MethodInfo *method)
{
  if ( !icon )
    sub_1C6BC60(this, 0);
  ItemIconComponent__SetItem_41150048(icon, this->fields.itemEntity, -1, 1, 0);
}