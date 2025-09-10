void GrandServantListMenuBranchDialog___ctor(GrandServantListMenuBranchDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C220E5 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C220E5 = 1;
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
    sub_1C2D434(p_callbackFunc);
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

  if ( (byte_4C220E3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15635/*"Window/Buttons/CancelButton"*/);
    byte_4C220E3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_15635/*"Window/Buttons/CancelButton"*/, 0);
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
  __int64 v11; // x1
  void **p_monitor; // x23
  __int64 v13; // x2
  struct UICommonButton_o *changeServantButton; // x8
  __int64 v15; // kr00_8
  __int64 v16; // kr08_8
  struct UICommonButton_o *resetGrandButton; // x8
  _QWORD *v18; // x9
  __int64 v19; // x8
  __int64 v20; // x9
  int32_t v21; // w20
  int32_t v22; // w24
  Il2CppObject *Entity; // x0
  UILabel_o *messageLabel; // x23
  Il2CppObject *v25; // x22
  UILabel_o *resetGrandButtonCoverLabel; // x23
  System_String_o *v27; // x0
  System_Object_array *OrganizationList; // x22
  System_Func_object__bool__o *v29; // x23
  char v30; // w21
  Il2CppObject *v31; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  UnityEngine_Color_o v34; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4C220E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_UserServantEntity____77997192);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__);
    sub_1C2D490(&GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo);
    sub_1C2D490(&StringLiteral_7004/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_410/*"#4D4D4D"*/);
    sub_1C2D490(&StringLiteral_7005/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/);
    byte_4C220E4 = 1;
  }
  *(_QWORD *)&v34.fields.r = 0;
  *(_QWORD *)&v34.fields.b = 0;
  v9 = (Il2CppObject *)sub_1C2D6DC(GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_36;
  v9[1].klass = (Il2CppClass *)userServantEntity;
  sub_1C2D434(&v9[1]);
  v9[1].monitor = grandGraphEntity;
  p_monitor = &v9[1].monitor;
  sub_1C2D434(&v9[1].monitor);
  this->fields.callbackFunc = callback;
  sub_1C2D434(&this->fields.callbackFunc);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                                  (System_String_o *)StringLiteral_410/*"#4D4D4D"*/,
                                                                  &v34,
                                                                  0);
  changeServantButton = this->fields.changeServantButton;
  if ( !changeServantButton )
    goto LABEL_36;
  v15 = *(_QWORD *)&v34.fields.r;
  v16 = *(_QWORD *)&v34.fields.b;
  *(_QWORD *)&changeServantButton->fields.specifyDisabledColor.fields.r = *(_QWORD *)&v34.fields.r;
  *(_QWORD *)&changeServantButton->fields.specifyDisabledColor.fields.b = v16;
  resetGrandButton = this->fields.resetGrandButton;
  if ( !resetGrandButton )
    goto LABEL_36;
  *(_QWORD *)&resetGrandButton->fields.specifyDisabledColor.fields.r = v15;
  *(_QWORD *)&resetGrandButton->fields.specifyDisabledColor.fields.b = v16;
  v18 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_36;
  v19 = v18[9];
  if ( !v19 )
    goto LABEL_36;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_37;
  v20 = v18[10];
  if ( !v20 )
    goto LABEL_36;
  if ( !*(_DWORD *)(v20 + 24) )
LABEL_37:
    sub_1C2D6F4(Master_object, v11, v13);
  v21 = *(_DWORD *)(v19 + 32);
  v22 = *(_DWORD *)(v20 + 32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             v21,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v25 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_7004/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/,
                                                                  0);
  if ( !v25 )
    goto LABEL_36;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)Master_object,
                                                                  (Il2CppObject *)v25[1].monitor,
                                                                  0);
  if ( !messageLabel )
    goto LABEL_36;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  resetGrandButtonCoverLabel = this->fields.resetGrandButtonCoverLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_7005/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  v27,
                                                                  (Il2CppObject *)v25[1].monitor,
                                                                  0);
  if ( !resetGrandButtonCoverLabel )
    goto LABEL_36;
  UILabel__set_text(resetGrandButtonCoverLabel, (System_String_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_36;
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0);
  v29 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    v9,
    Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__Any_object__51084700(
                                                                  OrganizationList,
                                                                  (System_Func_T__bool__o *)v29,
                                                                  (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_UserServantEntity____77997192);
  if ( !this->fields.changeServantButton )
    goto LABEL_36;
  v30 = (char)Master_object;
  UICommonButton__SetButtonEnable(this->fields.changeServantButton, (unsigned __int8)Master_object & 1, 1, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeServantButtonCover;
  if ( !Master_object )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, (v30 & 1) == 0, 0);
  v31 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v31
    || ((EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)v31,
                              (int64_t)Master_object[2].fields.list[1].monitor,
                              v21,
                              0)) == 0
      ? (num = 0)
      : (num = EntityDefinitely->fields.num),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.resetGrandButton) == 0
     || (UICommonButton__SetButtonEnable((UICommonButton_o *)Master_object, num >= v22, 1, 0),
         (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.resetGrandButtonCoverLabel) == 0)
     || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)Master_object,
                                                                         0)) == 0) )
  {
LABEL_36:
    sub_1C2D6EC(Master_object, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, num < v22, 0);
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

  if ( (byte_4C220E1 & 1) == 0 )
  {
    sub_1C2D490(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    byte_4C220E1 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantListMenuBranchDialog_o *)sub_1C2D9AC(v8);
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

  if ( (byte_4C220E2 & 1) == 0 )
  {
    sub_1C2D490(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    byte_4C220E2 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantListMenuBranchDialog_o *)sub_1C2D9AC(v8);
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
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6A2F0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6A2A8;
}


System_IAsyncResult_o *GrandServantListMenuBranchDialog_CallbackFunc__BeginInvoke(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4C220E6 & 1) == 0 )
  {
    sub_1C2D490(&GrandServantListMenuBranchDialog_Result_TypeInfo);
    byte_4C220E6 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(GrandServantListMenuBranchDialog_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void GrandServantListMenuBranchDialog_CallbackFunc__EndInvoke(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  if ( (byte_4C220E7 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C220E7 = 1;
  }
  if ( !e )
    goto LABEL_16;
  v6 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                       v16,
                                                                       0);
  userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_16;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(userServantEntity[5], 0) )
  {
    v8 = *(_OWORD *)&e->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                                         &v14,
                                                                         0);
    v9 = v4->fields.userServantEntity;
    if ( v9 )
    {
      v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v10;
      if ( this == (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                                                 &v13,
                                                                                 0) )
        return 0;
      this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)v4->fields.grandGraphEntity;
      if ( this )
        return GrandGraphEntity__CanSelectToGrand((GrandGraphEntity_o *)this, e, 0);
    }
LABEL_16:
    sub_1C2D6EC(this, e);
  }
  return 0;
}