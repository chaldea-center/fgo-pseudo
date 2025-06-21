void __fastcall ConfirmUseGrandServantResetItemDialog___ctor(
        ConfirmUseGrandServantResetItemDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1738D & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B1738D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ConfirmUseGrandServantResetItemDialog__Awake(
        ConfirmUseGrandServantResetItemDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall ConfirmUseGrandServantResetItemDialog__Callback(
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
    *p_callbackFunc = 0LL;
    sub_1BCAF9C(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ConfirmUseGrandServantResetItemDialog__Close(
        ConfirmUseGrandServantResetItemDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, callback, 0LL);
}


void __fastcall ConfirmUseGrandServantResetItemDialog__OnClickCancel(
        ConfirmUseGrandServantResetItemDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    ConfirmUseGrandServantResetItemDialog__Callback(this, 1, v2);
}


void __fastcall ConfirmUseGrandServantResetItemDialog__OnClickOk(
        ConfirmUseGrandServantResetItemDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    ConfirmUseGrandServantResetItemDialog__Callback(this, 0, v2);
}


void __fastcall ConfirmUseGrandServantResetItemDialog__OnEnable(
        ConfirmUseGrandServantResetItemDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B1738B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15504/*"Window/Buttons/CancelButton"*/, method);
    byte_4B1738B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_44083552(transform, (System_String_o *)StringLiteral_15504/*"Window/Buttons/CancelButton"*/, 0LL);
}


void __fastcall ConfirmUseGrandServantResetItemDialog__Open(
        ConfirmUseGrandServantResetItemDialog_o *this,
        UserServantEntity_o *userServantEntity,
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *v21; // x21
  GrandGraphMaster_o *Master_object; // x0
  __int64 v23; // x1
  GrandGraphMaster_o *v24; // x20
  __int64 v25; // x23
  __int64 v26; // x24
  GrandGraphEntity_o *EntityBySvtId; // x0
  UILabel_o *messageLabel; // x23
  GrandGraphEntity_o *v29; // x20
  System_String_o *v30; // x24
  const MethodInfo *v31; // x2
  __int64 v32; // x2
  struct System_Int32_array *removeItemIds; // x8
  int32_t v34; // w22
  Il2CppObject *v35; // x23
  UserItemEntity_o *EntityDefinitely; // x22
  Il2CppObject *v37; // x23
  System_Collections_Generic_IEnumerable_T__o *needItemIcons; // x24
  System_Action_object__o *v39; // x25
  struct UILabel_array *needItemNameLabels; // x8
  UILabel_o *v41; // x21
  struct UILabel_array *v42; // x8
  UILabel_o *v43; // x21
  struct System_Int32_array *removeItemNums; // x8
  UILabel_o *needNumLabel; // x20
  UILabel_o *haveNumLabel; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4B1738C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_ItemIconComponent__TypeInfo, userServantEntity);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_ItemIconComponent___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GrandGraphMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserItemMaster___, v10);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v13);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BCAFF8(&Method_ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0__Open_b__0__, v16);
    sub_1BCAFF8(&ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_3744/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_NEED_ITEM"*/, v18);
    sub_1BCAFF8(&StringLiteral_3743/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_MESSAGE"*/, v19);
    sub_1BCAFF8(&StringLiteral_3742/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_HAVE_ITEM"*/, v20);
    byte_4B1738C = 1;
  }
  v21 = (Il2CppObject *)sub_1BCB244(ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor(v21, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(&this->fields.callbackFunc);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !userServantEntity )
    goto LABEL_39;
  v24 = Master_object;
  v26 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v26;
  *(_QWORD *)&v47.fields.fakeValue = v25;
  Master_object = (GrandGraphMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v47, 0LL);
  if ( !v24 )
    goto LABEL_39;
  EntityBySvtId = GrandGraphMaster__GetEntityBySvtId(v24, (int32_t)Master_object, 0LL);
  messageLabel = this->fields.messageLabel;
  v29 = EntityBySvtId;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3743/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_MESSAGE"*/, 0LL);
  Master_object = (GrandGraphMaster_o *)UserServantEntity__GetSvtName(userServantEntity, 0LL);
  if ( !v29 )
    goto LABEL_39;
  Master_object = (GrandGraphMaster_o *)System_String__Format_62491716(
                                          v30,
                                          (Il2CppObject *)Master_object,
                                          (Il2CppObject *)v29->fields.nameShort,
                                          0LL);
  if ( !messageLabel )
    goto LABEL_39;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
  Master_object = (GrandGraphMaster_o *)this->fields.servantFaceIcon;
  if ( !Master_object )
    goto LABEL_39;
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, v31);
  removeItemIds = v29->fields.removeItemIds;
  if ( !removeItemIds )
    goto LABEL_39;
  if ( !removeItemIds->max_length )
    goto LABEL_40;
  v34 = removeItemIds->m_Items[1];
  v35 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v23);
    byte_4B165D1 = 1;
  }
  Master_object = (GrandGraphMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (GrandGraphMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v35 )
    goto LABEL_39;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)v35,
                       (int64_t)Master_object[2].fields.list[1].monitor,
                       v34,
                       0LL);
  Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !EntityDefinitely )
    goto LABEL_39;
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (GrandGraphMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          EntityDefinitely->fields.itemId,
                                          (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !v21 )
    goto LABEL_39;
  v21[1].klass = (Il2CppClass *)Master_object;
  v37 = v21 + 1;
  sub_1BCAF9C(&v21[1]);
  needItemIcons = (System_Collections_Generic_IEnumerable_T__o *)this->fields.needItemIcons;
  v39 = (System_Action_object__o *)sub_1BCB244(System_Action_ItemIconComponent__TypeInfo);
  System_Action_object____ctor(
    v39,
    v21,
    Method_ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0__Open_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    needItemIcons,
    (System_Action_T__o *)v39,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_ItemIconComponent___);
  needItemNameLabels = this->fields.needItemNameLabels;
  if ( !needItemNameLabels )
    goto LABEL_39;
  if ( !needItemNameLabels->max_length )
    goto LABEL_40;
  v41 = needItemNameLabels->m_Items[0];
  Master_object = (GrandGraphMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_NEED_ITEM"*/, 0LL);
  if ( !v37->klass )
    goto LABEL_39;
  Master_object = (GrandGraphMaster_o *)System_String__Format(
                                          (System_String_o *)Master_object,
                                          (Il2CppObject *)v37->klass->_1.namespaze,
                                          0LL);
  if ( !v41 )
    goto LABEL_39;
  UILabel__set_text(v41, (System_String_o *)Master_object, 0LL);
  v42 = this->fields.needItemNameLabels;
  if ( !v42 )
    goto LABEL_39;
  if ( v42->max_length <= 1 )
    goto LABEL_40;
  v43 = v42->m_Items[1];
  Master_object = (GrandGraphMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3742/*"CONFIRM_USE_GRAND_SERVANT_RESET_ITEM_DIALOG_HAVE_ITEM"*/, 0LL);
  if ( !v37->klass
    || (Master_object = (GrandGraphMaster_o *)System_String__Format(
                                                (System_String_o *)Master_object,
                                                (Il2CppObject *)v37->klass->_1.namespaze,
                                                0LL),
        !v43)
    || (UILabel__set_text(v43, (System_String_o *)Master_object, 0LL),
        (removeItemNums = v29->fields.removeItemNums) == 0LL) )
  {
LABEL_39:
    sub_1BCB254(Master_object, v23);
  }
  if ( !removeItemNums->max_length )
LABEL_40:
    sub_1BCB25C(Master_object, v23, v32);
  needNumLabel = this->fields.needNumLabel;
  Master_object = (GrandGraphMaster_o *)LocalizationManager__GetNumberFormat(removeItemNums->m_Items[1], 0LL);
  if ( !needNumLabel )
    goto LABEL_39;
  UILabel__set_text(needNumLabel, (System_String_o *)Master_object, 0LL);
  haveNumLabel = this->fields.haveNumLabel;
  Master_object = (GrandGraphMaster_o *)LocalizationManager__GetNumberFormat(EntityDefinitely->fields.num, 0LL);
  if ( !haveNumLabel )
    goto LABEL_39;
  UILabel__set_text(haveNumLabel, (System_String_o *)Master_object, 0LL);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall ConfirmUseGrandServantResetItemDialog__add_callbackFunc(
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

  if ( (byte_4B17389 & 1) == 0 )
  {
    sub_1BCAFF8(&ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo, value);
    byte_4B17389 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ConfirmUseGrandServantResetItemDialog_CallbackFunc_c *)v8->klass != ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmUseGrandServantResetItemDialog_o *)sub_1BCB514(v8);
  ConfirmUseGrandServantResetItemDialog__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ConfirmUseGrandServantResetItemDialog__remove_callbackFunc(
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

  if ( (byte_4B1738A & 1) == 0 )
  {
    sub_1BCAFF8(&ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo, value);
    byte_4B1738A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ConfirmUseGrandServantResetItemDialog_CallbackFunc_c *)v8->klass != ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmUseGrandServantResetItemDialog_o *)sub_1BCB514(v8);
  ConfirmUseGrandServantResetItemDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ConfirmUseGrandServantResetItemDialog_CallbackFunc___ctor(
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0D974;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0D92C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ConfirmUseGrandServantResetItemDialog_CallbackFunc__BeginInvoke(
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B1738E & 1) == 0 )
  {
    sub_1BCAFF8(&ConfirmUseGrandServantResetItemDialog_Result_TypeInfo, *(_QWORD *)&result);
    byte_4B1738E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ConfirmUseGrandServantResetItemDialog_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall ConfirmUseGrandServantResetItemDialog_CallbackFunc__EndInvoke(
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall ConfirmUseGrandServantResetItemDialog_CallbackFunc__Invoke(
        ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0___ctor(
        ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0___Open_b__0(
        ConfirmUseGrandServantResetItemDialog___c__DisplayClass13_0_o *this,
        ItemIconComponent_o *icon,
        const MethodInfo *method)
{
  if ( !icon )
    sub_1BCB254(this, 0LL);
  ItemIconComponent__SetItem_40104412(icon, this->fields.itemEntity, -1, 1, 0LL);
}