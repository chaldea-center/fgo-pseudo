void GrandServantListMenuBranchDialog___ctor(GrandServantListMenuBranchDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C327B4 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C327B4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void GrandServantListMenuBranchDialog__Awake(GrandServantListMenuBranchDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void GrandServantListMenuBranchDialog__Callback(
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
    *p_callbackFunc = 0;
    sub_1C32BC4(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      (unsigned int)result,
      v4->fields.method);
  }
}


void GrandServantListMenuBranchDialog__Close(
        GrandServantListMenuBranchDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, callback, 0);
}


void GrandServantListMenuBranchDialog__OnClickCancel(
        GrandServantListMenuBranchDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandServantListMenuBranchDialog__Callback(this, 3, v2);
}


void GrandServantListMenuBranchDialog__OnClickChangeServant(
        GrandServantListMenuBranchDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandServantListMenuBranchDialog__Callback(this, 1, v2);
}


void GrandServantListMenuBranchDialog__OnClickJumpClassBoard(
        GrandServantListMenuBranchDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandServantListMenuBranchDialog__Callback(this, 2, v2);
}


void GrandServantListMenuBranchDialog__OnClickResetGrand(
        GrandServantListMenuBranchDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandServantListMenuBranchDialog__Callback(this, 0, v2);
}


void GrandServantListMenuBranchDialog__OnEnable(GrandServantListMenuBranchDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C327B2 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15636/*"Window/Buttons/CancelButton"*/);
    byte_4C327B2 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_15636/*"Window/Buttons/CancelButton"*/, 0);
}


void GrandServantListMenuBranchDialog__Open(
        GrandServantListMenuBranchDialog_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        GrandServantListMenuBranchDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  void **p_monitor; // x23
  struct UICommonButton_o *changeServantButton; // x8
  __int64 v13; // kr00_8
  __int64 v14; // kr08_8
  struct UICommonButton_o *resetGrandButton; // x8
  _QWORD *v16; // x9
  __int64 v17; // x8
  __int64 v18; // x9
  int32_t v19; // w20
  int32_t v20; // w24
  Il2CppObject *Entity; // x0
  UILabel_o *messageLabel; // x23
  Il2CppObject *v23; // x22
  UILabel_o *resetGrandButtonCoverLabel; // x23
  System_String_o *v25; // x0
  System_Object_array *OrganizationList; // x22
  System_Func_object__bool__o *v27; // x23
  char v28; // w21
  Il2CppObject *v29; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  UnityEngine_Color_o v32; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4C327B3 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_UserServantEntity____78062504);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__);
    sub_1C32C20(&GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo);
    sub_1C32C20(&StringLiteral_7009/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_410/*"#4D4D4D"*/);
    sub_1C32C20(&StringLiteral_7010/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/);
    byte_4C327B3 = 1;
  }
  *(_QWORD *)&v32.fields.r = 0;
  *(_QWORD *)&v32.fields.b = 0;
  v9 = (Il2CppObject *)sub_1C32E6C(GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_36;
  v9[1].klass = (Il2CppClass *)userServantEntity;
  sub_1C32BC4(&v9[1], userServantEntity);
  v9[1].monitor = grandGraphEntity;
  p_monitor = &v9[1].monitor;
  sub_1C32BC4(&v9[1].monitor, grandGraphEntity);
  this->fields.callbackFunc = callback;
  sub_1C32BC4(&this->fields.callbackFunc, callback);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                                  (System_String_o *)StringLiteral_410/*"#4D4D4D"*/,
                                                                  &v32,
                                                                  0);
  changeServantButton = this->fields.changeServantButton;
  if ( !changeServantButton )
    goto LABEL_36;
  v13 = *(_QWORD *)&v32.fields.r;
  v14 = *(_QWORD *)&v32.fields.b;
  *(_QWORD *)&changeServantButton->fields.specifyDisabledColor.fields.r = *(_QWORD *)&v32.fields.r;
  *(_QWORD *)&changeServantButton->fields.specifyDisabledColor.fields.b = v14;
  resetGrandButton = this->fields.resetGrandButton;
  if ( !resetGrandButton )
    goto LABEL_36;
  *(_QWORD *)&resetGrandButton->fields.specifyDisabledColor.fields.r = v13;
  *(_QWORD *)&resetGrandButton->fields.specifyDisabledColor.fields.b = v14;
  v16 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_36;
  v17 = v16[9];
  if ( !v17 )
    goto LABEL_36;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_37;
  v18 = v16[10];
  if ( !v18 )
    goto LABEL_36;
  if ( !*(_DWORD *)(v18 + 24) )
LABEL_37:
    sub_1C32E84(Master_object);
  v19 = *(_DWORD *)(v17 + 32);
  v20 = *(_DWORD *)(v18 + 32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             v19,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v23 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_7009/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/,
                                                                  0);
  if ( !v23 )
    goto LABEL_36;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)Master_object,
                                                                  (Il2CppObject *)v23[1].monitor,
                                                                  0);
  if ( !messageLabel )
    goto LABEL_36;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  resetGrandButtonCoverLabel = this->fields.resetGrandButtonCoverLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_7010/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  v25,
                                                                  (Il2CppObject *)v23[1].monitor,
                                                                  0);
  if ( !resetGrandButtonCoverLabel )
    goto LABEL_36;
  UILabel__set_text(resetGrandButtonCoverLabel, (System_String_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_36;
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0);
  v27 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v27,
    v9,
    Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__Any_object__51144764(
                                                                  OrganizationList,
                                                                  (System_Func_T__bool__o *)v27,
                                                                  (const MethodInfo_30C683C *)Method_BasicHelper_Any_UserServantEntity____78062504);
  if ( !this->fields.changeServantButton )
    goto LABEL_36;
  v28 = (char)Master_object;
  UICommonButton__SetButtonEnable(this->fields.changeServantButton, (unsigned __int8)Master_object & 1, 1, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeServantButtonCover;
  if ( !Master_object )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, (v28 & 1) == 0, 0);
  v29 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v29
    || ((EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)v29,
                              (int64_t)Master_object[2].fields.list[1].monitor,
                              v19,
                              0)) == 0
      ? (num = 0)
      : (num = EntityDefinitely->fields.num),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.resetGrandButton) == 0
     || (UICommonButton__SetButtonEnable((UICommonButton_o *)Master_object, num >= v20, 1, 0),
         (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.resetGrandButtonCoverLabel) == 0)
     || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)Master_object,
                                                                         0)) == 0) )
  {
LABEL_36:
    sub_1C32E7C(Master_object);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, num < v20, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void GrandServantListMenuBranchDialog__add_callbackFunc(
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

  if ( (byte_4C327B0 & 1) == 0 )
  {
    sub_1C32C20(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    byte_4C327B0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandServantListMenuBranchDialog_CallbackFunc_c *)v8->klass != GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantListMenuBranchDialog_o *)sub_1C3313C(v8);
  GrandServantListMenuBranchDialog__remove_callbackFunc(v11, v12, v13);
}


void GrandServantListMenuBranchDialog__remove_callbackFunc(
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

  if ( (byte_4C327B1 & 1) == 0 )
  {
    sub_1C32C20(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    byte_4C327B1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandServantListMenuBranchDialog_CallbackFunc_c *)v8->klass != GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantListMenuBranchDialog_o *)sub_1C3313C(v8);
  GrandServantListMenuBranchDialog__Awake(v11, v12);
}


void GrandServantListMenuBranchDialog_CallbackFunc___ctor(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
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
  sub_1C32BC4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6FA18;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6F9D0;
}


System_IAsyncResult_o *GrandServantListMenuBranchDialog_CallbackFunc__BeginInvoke(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C327B5 & 1) == 0 )
  {
    sub_1C32C20(&GrandServantListMenuBranchDialog_Result_TypeInfo);
    byte_4C327B5 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(
             GrandServantListMenuBranchDialog_Result_TypeInfo,
             &v13,
             callback,
             object,
             method,
             v5,
             v6,
             v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void GrandServantListMenuBranchDialog_CallbackFunc__EndInvoke(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void GrandServantListMenuBranchDialog_CallbackFunc__Invoke(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void GrandServantListMenuBranchDialog___c__DisplayClass12_0___ctor(
        GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandServantListMenuBranchDialog___c__DisplayClass12_0___Open_b__0(
        GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8
  __int128 v8; // q1
  struct UserServantEntity_o *v9; // x8
  __int128 v10; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = this;
  if ( (byte_4C327B6 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C327B6 = 1;
  }
  if ( !e )
    goto LABEL_16;
  v6 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                       v16,
                                                                       0);
  userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_16;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userServantEntity[5], 0) )
  {
    v8 = *(_OWORD *)&e->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                                         &v14,
                                                                         0);
    v9 = v4->fields.userServantEntity;
    if ( v9 )
    {
      v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v10;
      if ( this == (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                                                 &v13,
                                                                                 0) )
        return 0;
      this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)v4->fields.grandGraphEntity;
      if ( this )
        return GrandGraphEntity__CanSelectToGrand((GrandGraphEntity_o *)this, e, 0);
    }
LABEL_16:
    sub_1C32E7C(this);
  }
  return 0;
}