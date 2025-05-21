void __fastcall GrandServantListMenuBranchDialog___ctor(
        GrandServantListMenuBranchDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B3F97C & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B3F97C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall GrandServantListMenuBranchDialog__Awake(
        GrandServantListMenuBranchDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall GrandServantListMenuBranchDialog__Callback(
        GrandServantListMenuBranchDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct GrandServantListMenuBranchDialog_CallbackFunc_o **p_callbackFunc; // x0
  struct GrandServantListMenuBranchDialog_CallbackFunc_o *v4; // x20
  struct GrandServantListMenuBranchDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1BDB81C(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall GrandServantListMenuBranchDialog__Close(
        GrandServantListMenuBranchDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, callback, 0LL);
}


void __fastcall GrandServantListMenuBranchDialog__OnClickCancel(
        GrandServantListMenuBranchDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandServantListMenuBranchDialog__Callback(this, 3, v2);
}


void __fastcall GrandServantListMenuBranchDialog__OnClickChangeServant(
        GrandServantListMenuBranchDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandServantListMenuBranchDialog__Callback(this, 1, v2);
}


void __fastcall GrandServantListMenuBranchDialog__OnClickJumpClassBoard(
        GrandServantListMenuBranchDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandServantListMenuBranchDialog__Callback(this, 2, v2);
}


void __fastcall GrandServantListMenuBranchDialog__OnClickResetGrand(
        GrandServantListMenuBranchDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandServantListMenuBranchDialog__Callback(this, 0, v2);
}


void __fastcall GrandServantListMenuBranchDialog__OnEnable(
        GrandServantListMenuBranchDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B3F97A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15613/*"Window/Buttons/CancelButton"*/, method);
    byte_4B3F97A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43873512(transform, (System_String_o *)StringLiteral_15613/*"Window/Buttons/CancelButton"*/, 0LL);
}


void __fastcall GrandServantListMenuBranchDialog__Open(
        GrandServantListMenuBranchDialog_o *this,
        UserServantEntity_o *userServantEntity,
        GrandServantListMenuBranchDialog_CallbackFunc_o *callback,
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
  __int64 v21; // x1
  Il2CppObject *v22; // x20
  GrandGraphMaster_o *Master_object; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x23
  struct UICommonButton_o *changeServantButton; // x8
  __int64 v27; // kr00_8
  float b; // s2
  float a; // s3
  struct UICommonButton_o *resetGrandButton; // x8
  Il2CppClass *klass; // x8
  GrandGraphMaster_o *v32; // x21
  Il2CppClass *parent; // x22
  Il2CppClass *declaringType; // x23
  __int64 v35; // x2
  _QWORD *monitor; // x9
  __int64 v37; // x8
  __int64 v38; // x9
  int32_t v39; // w21
  int32_t v40; // w24
  Il2CppObject *Entity; // x0
  UILabel_o *messageLabel; // x23
  Il2CppObject *v43; // x22
  UILabel_o *resetGrandButtonCoverLabel; // x23
  System_String_o *v45; // x0
  System_Object_array *OrganizationList; // x22
  System_Func_object__bool__o *v47; // x23
  char v48; // w20
  Il2CppObject *v49; // x20
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  UnityEngine_Color_o v52; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4B3F97B & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_UserServantEntity____77077248, userServantEntity);
    sub_1BDB878(&Method_DataManager_GetMaster_GrandGraphMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_ItemMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMaster_UserItemMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1BDB878(&System_Func_UserServantEntity__bool__TypeInfo, v13);
    sub_1BDB878(&LocalizationManager_TypeInfo, v14);
    sub_1BDB878(&NetworkManager_TypeInfo, v15);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BDB878(&Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__, v17);
    sub_1BDB878(&GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo, v18);
    sub_1BDB878(&StringLiteral_7011/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/, v19);
    sub_1BDB878(&StringLiteral_410/*"#4D4D4D"*/, v20);
    sub_1BDB878(&StringLiteral_7012/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/, v21);
    byte_4B3F97B = 1;
  }
  *(_QWORD *)&v52.fields.r = 0LL;
  *(_QWORD *)&v52.fields.b = 0LL;
  v22 = (Il2CppObject *)sub_1BDBAC4(GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_40;
  v22[1].klass = (Il2CppClass *)userServantEntity;
  v25 = v22 + 1;
  sub_1BDB81C(&v22[1]);
  this->fields.callbackFunc = callback;
  sub_1BDB81C(&this->fields.callbackFunc);
  Master_object = (GrandGraphMaster_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                          (System_String_o *)StringLiteral_410/*"#4D4D4D"*/,
                                          &v52,
                                          0LL);
  changeServantButton = this->fields.changeServantButton;
  if ( !changeServantButton )
    goto LABEL_40;
  v27 = *(_QWORD *)&v52.fields.r;
  b = v52.fields.b;
  a = v52.fields.a;
  *(_QWORD *)&changeServantButton->fields.specifyDisabledColor.fields.r = *(_QWORD *)&v52.fields.r;
  changeServantButton->fields.specifyDisabledColor.fields.b = b;
  changeServantButton->fields.specifyDisabledColor.fields.a = a;
  resetGrandButton = this->fields.resetGrandButton;
  if ( !resetGrandButton )
    goto LABEL_40;
  *(_QWORD *)&resetGrandButton->fields.specifyDisabledColor.fields.r = v27;
  resetGrandButton->fields.specifyDisabledColor.fields.b = b;
  resetGrandButton->fields.specifyDisabledColor.fields.a = a;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  klass = v25->klass;
  if ( !v25->klass )
    goto LABEL_40;
  v32 = Master_object;
  declaringType = klass->_1.declaringType;
  parent = klass->_1.parent;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = declaringType;
  *(_QWORD *)&v53.fields.fakeValue = parent;
  Master_object = (GrandGraphMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v53, 0LL);
  if ( !v32 )
    goto LABEL_40;
  v22[1].monitor = GrandGraphMaster__GetEntityBySvtId(v32, (int32_t)Master_object, 0LL);
  Master_object = (GrandGraphMaster_o *)sub_1BDB81C(&v22[1].monitor);
  monitor = v22[1].monitor;
  if ( !monitor )
    goto LABEL_40;
  v37 = monitor[9];
  if ( !v37 )
    goto LABEL_40;
  if ( !*(_DWORD *)(v37 + 24) )
    goto LABEL_41;
  v38 = monitor[10];
  if ( !v38 )
    goto LABEL_40;
  if ( !*(_DWORD *)(v38 + 24) )
LABEL_41:
    sub_1BDBADC(Master_object, v24, v35);
  v39 = *(_DWORD *)(v37 + 32);
  v40 = *(_DWORD *)(v38 + 32);
  Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v39,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v43 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (GrandGraphMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7011/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/, 0LL);
  if ( !v43 )
    goto LABEL_40;
  Master_object = (GrandGraphMaster_o *)System_String__Format(
                                          (System_String_o *)Master_object,
                                          (Il2CppObject *)v43[1].monitor,
                                          0LL);
  if ( !messageLabel )
    goto LABEL_40;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
  resetGrandButtonCoverLabel = this->fields.resetGrandButtonCoverLabel;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_7012/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/, 0LL);
  Master_object = (GrandGraphMaster_o *)System_String__Format(v45, (Il2CppObject *)v43[1].monitor, 0LL);
  if ( !resetGrandButtonCoverLabel )
    goto LABEL_40;
  UILabel__set_text(resetGrandButtonCoverLabel, (System_String_o *)Master_object, 0LL);
  Master_object = (GrandGraphMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_40;
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0LL);
  v47 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v47,
    v22,
    Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__,
    0LL);
  Master_object = (GrandGraphMaster_o *)BasicHelper__Any_object__50450088(
                                          OrganizationList,
                                          (System_Func_T__bool__o *)v47,
                                          (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_UserServantEntity____77077248);
  if ( !this->fields.changeServantButton )
    goto LABEL_40;
  v48 = (char)Master_object;
  UICommonButton__SetButtonEnable(this->fields.changeServantButton, (unsigned __int8)Master_object & 1, 1, 0LL);
  Master_object = (GrandGraphMaster_o *)this->fields.changeServantButtonCover;
  if ( !Master_object )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, (v48 & 1) == 0, 0LL);
  v49 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v24);
    byte_4B3ED56 = 1;
  }
  Master_object = (GrandGraphMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (GrandGraphMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v49
    || ((EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)v49,
                              (int64_t)Master_object[2].fields.list[1].monitor,
                              v39,
                              0LL)) == 0LL
      ? (num = 0)
      : (num = EntityDefinitely->fields.num),
        (Master_object = (GrandGraphMaster_o *)this->fields.resetGrandButton) == 0LL
     || (UICommonButton__SetButtonEnable((UICommonButton_o *)Master_object, num >= v40, 1, 0LL),
         (Master_object = (GrandGraphMaster_o *)this->fields.resetGrandButtonCoverLabel) == 0LL)
     || (Master_object = (GrandGraphMaster_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Master_object,
                                                 0LL)) == 0LL) )
  {
LABEL_40:
    sub_1BDBAD4(Master_object, v24);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, num < v40, 0LL);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall GrandServantListMenuBranchDialog__add_callbackFunc(
        GrandServantListMenuBranchDialog_o *this,
        GrandServantListMenuBranchDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct GrandServantListMenuBranchDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandServantListMenuBranchDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  GrandServantListMenuBranchDialog_o *v11; // x0
  GrandServantListMenuBranchDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B3F978 & 1) == 0 )
  {
    sub_1BDB878(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo, value);
    byte_4B3F978 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (GrandServantListMenuBranchDialog_CallbackFunc_c *)v8->klass != GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantListMenuBranchDialog_o *)sub_1BDBD94(v8);
  GrandServantListMenuBranchDialog__remove_callbackFunc(v11, v12, v13);
}


void __fastcall GrandServantListMenuBranchDialog__remove_callbackFunc(
        GrandServantListMenuBranchDialog_o *this,
        GrandServantListMenuBranchDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct GrandServantListMenuBranchDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandServantListMenuBranchDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  GrandServantListMenuBranchDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B3F979 & 1) == 0 )
  {
    sub_1BDB878(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo, value);
    byte_4B3F979 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (GrandServantListMenuBranchDialog_CallbackFunc_c *)v8->klass != GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantListMenuBranchDialog_o *)sub_1BDBD94(v8);
  GrandServantListMenuBranchDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListMenuBranchDialog_CallbackFunc___ctor(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
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
  sub_1BDB81C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A1D628;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1D5E0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall GrandServantListMenuBranchDialog_CallbackFunc__BeginInvoke(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B3F97D & 1) == 0 )
  {
    sub_1BDB878(&GrandServantListMenuBranchDialog_Result_TypeInfo, *(_QWORD *)&result);
    byte_4B3F97D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(GrandServantListMenuBranchDialog_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall GrandServantListMenuBranchDialog_CallbackFunc__EndInvoke(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall GrandServantListMenuBranchDialog_CallbackFunc__Invoke(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall GrandServantListMenuBranchDialog___c__DisplayClass12_0___ctor(
        GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandServantListMenuBranchDialog___c__DisplayClass12_0___Open_b__0(
        GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8
  __int128 v9; // q1
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4B3F97E & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, e);
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)sub_1BDB878(
                                                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                         v5);
    byte_4B3F97E = 1;
  }
  if ( !e )
    goto LABEL_16;
  v7 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v7;
  *(_QWORD *)&v17.fields.fakeValue = v6;
  this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                       v17,
                                                                       0LL);
  userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_16;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(userServantEntity[5], 0LL) )
  {
    v9 = *(_OWORD *)&e->fields.id.fields.fakeValue;
    *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v16.fields.fakeValue = v9;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v15 = v16;
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                                         &v15,
                                                                         0LL);
    v10 = v4->fields.userServantEntity;
    if ( v10 )
    {
      v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v14.fields.fakeValue = v11;
      if ( this == (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                                                 &v14,
                                                                                 0LL) )
        return 0;
      this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)v4->fields.grandGraphEntity;
      if ( this )
        return GrandGraphEntity__CanSelectToGrand((GrandGraphEntity_o *)this, e, 0LL);
    }
LABEL_16:
    sub_1BDBAD4(this, e);
  }
  return 0;
}