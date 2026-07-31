void ConfirmUseGrandServantResetItemDialog___ctor(
        ConfirmUseGrandServantResetItemDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59331E3 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59331E3 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *v9; // x20
  struct ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
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

  if ( (byte_59331E1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16224/*"Window/Buttons/CancelButton"*/);
    byte_59331E1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16224/*"Window/Buttons/CancelButton"*/, 0);
}


void ConfirmUseGrandServantResetItemDialog__Open(
        ConfirmUseGrandServantResetItemDialog_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  GrandGraphDetailMaster_o *Master_object; // x0
  __int64 v19; // x1
  GrandGraphDetailMaster_o *v20; // x23
  int32_t id; // w24
  GrandGraphDetailEntity_o *Entity; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  UILabel_o *messageLabel; // x23
  GrandGraphDetailEntity_o *v26; // x24
  System_String_o *v27; // x25
  struct System_Int32_array *removeItemIds; // x8
  int32_t v29; // w22
  __int64 v30; // x2
  Il2CppObject *v31; // x23
  UserItemEntity_o *EntityDefinitely; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x23
  System_Collections_Generic_IEnumerable_T__o *needItemIcons; // x24
  System_Action_object__o *v41; // x25
  struct UILabel_array *needItemNameLabels; // x8
  UILabel_o *v43; // x21
  struct UILabel_array *v44; // x8
  UILabel_o *v45; // x21
  struct System_Int32_array *removeItemNums; // x8
  UILabel_o *needNumLabel; // x20
  UILabel_o *haveNumLabel; // x20

  if ( (byte_59331E2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ItemIconComponent__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_21FFC50(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0__Open_b__0__);
    sub_21FFC50(&ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0_TypeInfo);
    sub_21FFC50(&StringLiteral_3920/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_NEED_ITEM"*/);
    sub_21FFC50(&StringLiteral_3919/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_3918/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_HAVE_ITEM"*/);
    byte_59331E2 = 1;
  }
  v9 = sub_21FFEBC(ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_38;
  if ( !userServantEntity )
    goto LABEL_38;
  v20 = Master_object;
  id = grandGraphEntity->fields.id;
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__getSvtClassId(userServantEntity, 0, 0, 0);
  if ( !v20 )
    goto LABEL_38;
  Entity = GrandGraphDetailMaster__GetEntity(v20, id, (int32_t)Master_object, 0);
  messageLabel = this->fields.messageLabel;
  v26 = Entity;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3919/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_MESSAGE"*/, 0);
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__GetSvtName(userServantEntity, 1, 0);
  if ( !v26 )
    goto LABEL_38;
  Master_object = (GrandGraphDetailMaster_o *)System_String__Format_75484576(
                                                v27,
                                                (Il2CppObject *)Master_object,
                                                (Il2CppObject *)v26->fields.nameFull,
                                                0);
  if ( !messageLabel )
    goto LABEL_38;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  Master_object = (GrandGraphDetailMaster_o *)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_38;
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, 0, 0);
  removeItemIds = grandGraphEntity->fields.removeItemIds;
  if ( !removeItemIds )
    goto LABEL_38;
  if ( !LODWORD(removeItemIds->max_length) )
    goto LABEL_39;
  v29 = removeItemIds->m_Items[0];
  v31 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v30);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Master_object = (GrandGraphDetailMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v30);
    Master_object = (GrandGraphDetailMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v31 )
    goto LABEL_38;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)v31,
                       (int64_t)Master_object[2].fields.list[1].monitor,
                       v29,
                       0);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !EntityDefinitely )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (GrandGraphDetailMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                EntityDefinitely->fields.itemId,
                                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !v9 )
    goto LABEL_38;
  *(_QWORD *)(v9 + 16) = Master_object;
  v39 = v9 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)Master_object, v33, v34, v35, v36, v37, v38);
  needItemIcons = (System_Collections_Generic_IEnumerable_T__o *)this->fields.needItemIcons;
  v41 = (System_Action_object__o *)sub_21FFEBC(System_Action_ItemIconComponent__TypeInfo);
  System_Action_object____ctor(
    v41,
    (Il2CppObject *)v9,
    Method_ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0__Open_b__0__,
    0);
  BasicHelper__ForEach_object_(
    needItemIcons,
    (System_Action_T__o *)v41,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_ItemIconComponent___);
  needItemNameLabels = this->fields.needItemNameLabels;
  if ( !needItemNameLabels )
    goto LABEL_38;
  if ( !LODWORD(needItemNameLabels->max_length) )
    goto LABEL_39;
  v43 = needItemNameLabels->m_Items[0];
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3920/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_NEED_ITEM"*/, 0);
  if ( !*(_QWORD *)v39 )
    goto LABEL_38;
  Master_object = (GrandGraphDetailMaster_o *)System_String__Format(
                                                (System_String_o *)Master_object,
                                                *(Il2CppObject **)(*(_QWORD *)v39 + 24LL),
                                                0);
  if ( !v43 )
    goto LABEL_38;
  UILabel__set_text(v43, (System_String_o *)Master_object, 0);
  v44 = this->fields.needItemNameLabels;
  if ( !v44 )
    goto LABEL_38;
  if ( (v44->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_39;
  v45 = v44->m_Items[1];
  Master_object = (GrandGraphDetailMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3918/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_HAVE_ITEM"*/, 0);
  if ( !*(_QWORD *)v39
    || (Master_object = (GrandGraphDetailMaster_o *)System_String__Format(
                                                      (System_String_o *)Master_object,
                                                      *(Il2CppObject **)(*(_QWORD *)v39 + 24LL),
                                                      0),
        !v45)
    || (UILabel__set_text(v45, (System_String_o *)Master_object, 0),
        (removeItemNums = grandGraphEntity->fields.removeItemNums) == 0) )
  {
LABEL_38:
    sub_21FFECC(Master_object, v19);
  }
  if ( !LODWORD(removeItemNums->max_length) )
LABEL_39:
    sub_21FFED4(Master_object);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ConfirmUseGrandServantResetItemDialog_o *v13; // x0
  ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59331DF & 1) == 0 )
  {
    sub_21FFC50(&ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo);
    byte_59331DF = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ConfirmUseGrandServantResetItemDialog_o *)sub_220024C(
                                                     v8,
                                                     ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo,
                                                     v9,
                                                     v10);
  ConfirmUseGrandServantResetItemDialog__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ConfirmUseGrandServantResetItemDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_59331E0 & 1) == 0 )
  {
    sub_21FFC50(&ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo);
    byte_59331E0 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ConfirmUseGrandServantResetItemDialog_o *)sub_220024C(
                                                     v8,
                                                     ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo,
                                                     v9,
                                                     v10);
  ConfirmUseGrandServantResetItemDialog__Awake(v13, v14);
}


void ConfirmUseGrandServantResetItemDialog_CallbackFunc___ctor(
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FEE988;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEE940;
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
  if ( (byte_59331E4 & 1) == 0 )
  {
    sub_21FFC50(&ConfirmUseGrandServantResetItemDialog_Result_TypeInfo);
    byte_59331E4 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ConfirmUseGrandServantResetItemDialog_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void ConfirmUseGrandServantResetItemDialog_CallbackFunc__EndInvoke(
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
    sub_21FFECC(this, 0);
  ItemIconComponent__SetItem_47933276(icon, this->fields.itemEntity, -1, 1, 0);
}