void __fastcall SelectGrandConfirmServantDialog___ctor(
        SelectGrandConfirmServantDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFCF3B & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFCF3B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectGrandConfirmServantDialog__Awake(
        SelectGrandConfirmServantDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectGrandConfirmServantDialog__OnClickCancel(
        SelectGrandConfirmServantDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SelectGrandConfirmServantDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4AFCF3A & 1) == 0 )
  {
    sub_1BC3008(&Method_SelectGrandConfirmServantDialog_OnClickCancel__, method);
    byte_4AFCF3A = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SelectGrandConfirmServantDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectGrandConfirmServantDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_SelectGrandConfirmServantDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall SelectGrandConfirmServantDialog__OnClickDecide(
        SelectGrandConfirmServantDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SelectGrandConfirmServantDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4AFCF39 & 1) == 0 )
  {
    sub_1BC3008(&Method_SelectGrandConfirmServantDialog_OnClickDecide__, method);
    byte_4AFCF39 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SelectGrandConfirmServantDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectGrandConfirmServantDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_SelectGrandConfirmServantDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall SelectGrandConfirmServantDialog__OnEnable(
        SelectGrandConfirmServantDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4AFCF37 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_15492/*"Window/Buttons/CancelButton"*/, method);
    byte_4AFCF37 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43913684(transform, (System_String_o *)StringLiteral_15492/*"Window/Buttons/CancelButton"*/, 0LL);
}


void __fastcall SelectGrandConfirmServantDialog__OpenConfirm(
        SelectGrandConfirmServantDialog_o *this,
        UserServantEntity_o *userServantEntity,
        SelectGrandConfirmServantDialog_ClickDelegate_o *callback,
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
  GrandGraphMaster_o *Master_object; // x0
  __int64 v19; // x1
  GrandGraphMaster_o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  __int64 v23; // x2
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  GrandGraphMaster_o *v25; // x21
  int32_t data; // w22
  Il2CppObject *v27; // x23
  UserItemEntity_o *EntityDefinitely; // x22
  Il2CppObject *Entity; // x22
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  System_String_o *v32; // x24
  UILabel_o *cancelButtonLabel; // x21
  UILabel_o *decideButtonLabel; // x21
  const MethodInfo *v35; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4AFCF38 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_GrandGraphMaster___, userServantEntity);
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_UserItemMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&NetworkManager_TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_11417/*"SELECT_GRAND_CONFIRM_DIALOG_CANCEL_BUTTON_TEXT"*/, v14);
    sub_1BC3008(&StringLiteral_11418/*"SELECT_GRAND_CONFIRM_DIALOG_DECIDE_BUTTON_TEXT"*/, v15);
    sub_1BC3008(&StringLiteral_11419/*"SELECT_GRAND_CONFIRM_DIALOG_MESSAGE"*/, v16);
    sub_1BC3008(&StringLiteral_11420/*"SELECT_GRAND_CONFIRM_DIALOG_TITLE"*/, v17);
    byte_4AFCF38 = 1;
  }
  this->fields.clickFunc = callback;
  sub_1BC2FAC(&this->fields.clickFunc);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !userServantEntity )
    goto LABEL_30;
  v20 = Master_object;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v22;
  *(_QWORD *)&v36.fields.fakeValue = v21;
  Master_object = (GrandGraphMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v36, 0LL);
  if ( !v20 )
    goto LABEL_30;
  Master_object = (GrandGraphMaster_o *)GrandGraphMaster__GetEntityBySvtId(v20, (int32_t)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_30;
  klass = (DataMasterBase_TMaster__TEntity__PKType__c *)Master_object[1].klass;
  v25 = Master_object;
  if ( !klass )
    goto LABEL_30;
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1BC326C(Master_object, v19, v23);
  data = (int32_t)klass->_1.byval_arg.data;
  v27 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v19);
    byte_4AFC1F1 = 1;
  }
  Master_object = (GrandGraphMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (GrandGraphMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v27 )
    goto LABEL_30;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)v27,
                       (int64_t)Master_object[2].fields.list[1].monitor,
                       data,
                       0LL);
  Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !EntityDefinitely || !Master_object )
    goto LABEL_30;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             EntityDefinitely->fields.itemId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleLabel, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (GrandGraphMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11420/*"SELECT_GRAND_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_30;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  messageLabel = this->fields.messageLabel;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11419/*"SELECT_GRAND_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  Master_object = (GrandGraphMaster_o *)UserServantEntity__GetSvtName(userServantEntity, 0LL);
  if ( !Entity )
    goto LABEL_30;
  Master_object = (GrandGraphMaster_o *)System_String__Format_62390008(
                                          v32,
                                          (Il2CppObject *)Master_object,
                                          *(Il2CppObject **)&v25->fields.revision,
                                          (Il2CppObject *)Entity[1].monitor,
                                          0LL);
  if ( !messageLabel )
    goto LABEL_30;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  Master_object = (GrandGraphMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11417/*"SELECT_GRAND_CONFIRM_DIALOG_CANCEL_BUTTON_TEXT"*/, 0LL);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, (System_String_o *)Master_object, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        Master_object = (GrandGraphMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11418/*"SELECT_GRAND_CONFIRM_DIALOG_DECIDE_BUTTON_TEXT"*/, 0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)Master_object, 0LL),
        (Master_object = (GrandGraphMaster_o *)this->fields.servantFaceIcon) == 0LL) )
  {
LABEL_30:
    sub_1BC3264(Master_object, v19);
  }
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, v35);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectGrandConfirmServantDialog_ClickDelegate___ctor(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
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
  sub_1BC2FAC(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05C20;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05BD8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SelectGrandConfirmServantDialog_ClickDelegate__BeginInvoke(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4AFCF3C & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, isDecide);
    byte_4AFCF3C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall SelectGrandConfirmServantDialog_ClickDelegate__EndInvoke(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall SelectGrandConfirmServantDialog_ClickDelegate__Invoke(
        SelectGrandConfirmServantDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}