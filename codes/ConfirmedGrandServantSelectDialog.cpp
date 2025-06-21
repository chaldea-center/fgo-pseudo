void __fastcall ConfirmedGrandServantSelectDialog___ctor(
        ConfirmedGrandServantSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1737F & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B1737F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ConfirmedGrandServantSelectDialog__Awake(
        ConfirmedGrandServantSelectDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall ConfirmedGrandServantSelectDialog__Callback(
        ConfirmedGrandServantSelectDialog_o *this,
        const MethodInfo *method)
{
  struct ConfirmedGrandServantSelectDialog_CallbackFunc_o **p_callbackFunc; // x0
  struct ConfirmedGrandServantSelectDialog_CallbackFunc_o *v3; // x19
  struct ConfirmedGrandServantSelectDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1BCAF9C(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall ConfirmedGrandServantSelectDialog__Close(
        ConfirmedGrandServantSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, callback, 0LL);
}


void __fastcall ConfirmedGrandServantSelectDialog__OnClickClose(
        ConfirmedGrandServantSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( this->fields.baseState == 2 )
    ConfirmedGrandServantSelectDialog__Callback(this, method);
}


void __fastcall ConfirmedGrandServantSelectDialog__OnEnable(
        ConfirmedGrandServantSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B1737D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15505/*"Window/Buttons/CloseButton"*/, method);
    byte_4B1737D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_44083552(transform, (System_String_o *)StringLiteral_15505/*"Window/Buttons/CloseButton"*/, 0LL);
}


void __fastcall ConfirmedGrandServantSelectDialog__Open(
        ConfirmedGrandServantSelectDialog_o *this,
        UserServantEntity_o *userServantEntity,
        ConfirmedGrandServantSelectDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  GrandGraphMaster_o *Master_object; // x0
  __int64 v12; // x1
  GrandGraphMaster_o *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  GrandGraphEntity_o *EntityBySvtId; // x0
  UILabel_o *messageLabel; // x21
  GrandGraphEntity_o *v18; // x22
  System_String_o *v19; // x23
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B1737E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_GrandGraphMaster___, userServantEntity);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_3701/*"CONFIRMED_GRAND_SERVANT_SELECT_DIALOG_MESSAGE"*/, v10);
    byte_4B1737E = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(&this->fields.callbackFunc);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !userServantEntity )
    goto LABEL_15;
  v13 = Master_object;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  Master_object = (GrandGraphMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v21, 0LL);
  if ( !v13 )
    goto LABEL_15;
  EntityBySvtId = GrandGraphMaster__GetEntityBySvtId(v13, (int32_t)Master_object, 0LL);
  messageLabel = this->fields.messageLabel;
  v18 = EntityBySvtId;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3701/*"CONFIRMED_GRAND_SERVANT_SELECT_DIALOG_MESSAGE"*/, 0LL);
  Master_object = (GrandGraphMaster_o *)UserServantEntity__GetSvtName(userServantEntity, 0LL);
  if ( !v18
    || (Master_object = (GrandGraphMaster_o *)System_String__Format_62491716(
                                                v19,
                                                (Il2CppObject *)Master_object,
                                                (Il2CppObject *)v18->fields.nameShort,
                                                0LL),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL),
        (Master_object = (GrandGraphMaster_o *)this->fields.servantFaceIcon) == 0LL) )
  {
LABEL_15:
    sub_1BCB254(Master_object, v12);
  }
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, v20);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall ConfirmedGrandServantSelectDialog__add_callbackFunc(
        ConfirmedGrandServantSelectDialog_o *this,
        ConfirmedGrandServantSelectDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ConfirmedGrandServantSelectDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ConfirmedGrandServantSelectDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ConfirmedGrandServantSelectDialog_o *v11; // x0
  ConfirmedGrandServantSelectDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B1737B & 1) == 0 )
  {
    sub_1BCAFF8(&ConfirmedGrandServantSelectDialog_CallbackFunc_TypeInfo, value);
    byte_4B1737B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ConfirmedGrandServantSelectDialog_CallbackFunc_c *)v8->klass != ConfirmedGrandServantSelectDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmedGrandServantSelectDialog_o *)sub_1BCB514(v8);
  ConfirmedGrandServantSelectDialog__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ConfirmedGrandServantSelectDialog__remove_callbackFunc(
        ConfirmedGrandServantSelectDialog_o *this,
        ConfirmedGrandServantSelectDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ConfirmedGrandServantSelectDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ConfirmedGrandServantSelectDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ConfirmedGrandServantSelectDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B1737C & 1) == 0 )
  {
    sub_1BCAFF8(&ConfirmedGrandServantSelectDialog_CallbackFunc_TypeInfo, value);
    byte_4B1737C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ConfirmedGrandServantSelectDialog_CallbackFunc_c *)v8->klass != ConfirmedGrandServantSelectDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ConfirmedGrandServantSelectDialog_o *)sub_1BCB514(v8);
  ConfirmedGrandServantSelectDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ConfirmedGrandServantSelectDialog_CallbackFunc___ctor(
        ConfirmedGrandServantSelectDialog_CallbackFunc_o *this,
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
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0D8B4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0D874;
}


System_IAsyncResult_o *__fastcall ConfirmedGrandServantSelectDialog_CallbackFunc__BeginInvoke(
        ConfirmedGrandServantSelectDialog_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, &v5, callback, object);
}


void __fastcall ConfirmedGrandServantSelectDialog_CallbackFunc__EndInvoke(
        ConfirmedGrandServantSelectDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall ConfirmedGrandServantSelectDialog_CallbackFunc__Invoke(
        ConfirmedGrandServantSelectDialog_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}