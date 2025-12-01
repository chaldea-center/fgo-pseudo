void GrandServantListMenuBranchDialog___ctor(GrandServantListMenuBranchDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC2173 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC2173 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct GrandServantListMenuBranchDialog_CallbackFunc_o *v9; // x20
  struct GrandServantListMenuBranchDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
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

  if ( (byte_4CC2171 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15642/*"Window/Buttons/CancelButton"*/);
    byte_4CC2171 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45260884(transform, (System_String_o *)StringLiteral_15642/*"Window/Buttons/CancelButton"*/, 0);
}


void GrandServantListMenuBranchDialog__Open(
        GrandServantListMenuBranchDialog_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        GrandServantListMenuBranchDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct UICommonButton_o *changeServantButton; // x8
  __int64 v32; // kr00_8
  __int64 v33; // kr08_8
  struct UICommonButton_o *resetGrandButton; // x8
  __int64 v35; // x9
  __int64 v36; // x8
  __int64 v37; // x9
  int32_t v38; // w20
  int32_t v39; // w24
  Il2CppObject *Entity; // x0
  UILabel_o *messageLabel; // x23
  Il2CppObject *v42; // x22
  UILabel_o *resetGrandButtonCoverLabel; // x23
  System_String_o *v44; // x0
  System_Object_array *OrganizationList; // x22
  System_Func_object__bool__o *v46; // x23
  char v47; // w21
  Il2CppObject *v48; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  UnityEngine_Color_o v51; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4CC2172 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_UserServantEntity____78640096);
    sub_1C713B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__);
    sub_1C713B0(&GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo);
    sub_1C713B0(&StringLiteral_7007/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_409/*"#4D4D4D"*/);
    sub_1C713B0(&StringLiteral_7008/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/);
    byte_4CC2172 = 1;
  }
  *(_QWORD *)&v51.fields.r = 0;
  *(_QWORD *)&v51.fields.b = 0;
  v9 = sub_1C715FC(GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = userServantEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)userServantEntity, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = grandGraphEntity;
  v18 = (__int64 *)(v9 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)grandGraphEntity, v19, v20, v21, v22, v23, v24);
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                                  (System_String_o *)StringLiteral_409/*"#4D4D4D"*/,
                                                                  &v51,
                                                                  0);
  changeServantButton = this->fields.changeServantButton;
  if ( !changeServantButton )
    goto LABEL_36;
  v32 = *(_QWORD *)&v51.fields.r;
  v33 = *(_QWORD *)&v51.fields.b;
  *(_QWORD *)&changeServantButton->fields.specifyDisabledColor.fields.r = *(_QWORD *)&v51.fields.r;
  *(_QWORD *)&changeServantButton->fields.specifyDisabledColor.fields.b = v33;
  resetGrandButton = this->fields.resetGrandButton;
  if ( !resetGrandButton )
    goto LABEL_36;
  *(_QWORD *)&resetGrandButton->fields.specifyDisabledColor.fields.r = v32;
  *(_QWORD *)&resetGrandButton->fields.specifyDisabledColor.fields.b = v33;
  v35 = *v18;
  if ( !*v18 )
    goto LABEL_36;
  v36 = *(_QWORD *)(v35 + 72);
  if ( !v36 )
    goto LABEL_36;
  if ( !*(_DWORD *)(v36 + 24) )
    goto LABEL_37;
  v37 = *(_QWORD *)(v35 + 80);
  if ( !v37 )
    goto LABEL_36;
  if ( !*(_DWORD *)(v37 + 24) )
LABEL_37:
    sub_1C71610(Master_object);
  v38 = *(_DWORD *)(v36 + 32);
  v39 = *(_DWORD *)(v37 + 32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             v38,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v42 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_7007/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/,
                                                                  0);
  if ( !v42 )
    goto LABEL_36;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)Master_object,
                                                                  (Il2CppObject *)v42[1].monitor,
                                                                  0);
  if ( !messageLabel )
    goto LABEL_36;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  resetGrandButtonCoverLabel = this->fields.resetGrandButtonCoverLabel;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_7008/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  v44,
                                                                  (Il2CppObject *)v42[1].monitor,
                                                                  0);
  if ( !resetGrandButtonCoverLabel )
    goto LABEL_36;
  UILabel__set_text(resetGrandButtonCoverLabel, (System_String_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_36;
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0);
  v46 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v46,
    (Il2CppObject *)v9,
    Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__Any_object__51593856(
                                                                  OrganizationList,
                                                                  (System_Func_T__bool__o *)v46,
                                                                  (const MethodInfo_3134280 *)Method_BasicHelper_Any_UserServantEntity____78640096);
  if ( !this->fields.changeServantButton )
    goto LABEL_36;
  v47 = (char)Master_object;
  UICommonButton__SetButtonEnable(this->fields.changeServantButton, (unsigned __int8)Master_object & 1, 1, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeServantButtonCover;
  if ( !Master_object )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, (v47 & 1) == 0, 0);
  v48 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v48
    || ((EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)v48,
                              (int64_t)Master_object[2].fields.list[1].monitor,
                              v38,
                              0)) == 0
      ? (num = 0)
      : (num = EntityDefinitely->fields.num),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.resetGrandButton) == 0
     || (UICommonButton__SetButtonEnable((UICommonButton_o *)Master_object, num >= v39, 1, 0),
         (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.resetGrandButtonCoverLabel) == 0)
     || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)Master_object,
                                                                         0)) == 0) )
  {
LABEL_36:
    sub_1C71608(Master_object, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, num < v39, 0);
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

  if ( (byte_4CC216F & 1) == 0 )
  {
    sub_1C713B0(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    byte_4CC216F = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantListMenuBranchDialog_o *)sub_1C719A4(v8);
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

  if ( (byte_4CC2170 & 1) == 0 )
  {
    sub_1C713B0(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    byte_4CC2170 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantListMenuBranchDialog_o *)sub_1C719A4(v8);
  GrandServantListMenuBranchDialog__Awake(v11, v12);
}


void GrandServantListMenuBranchDialog_CallbackFunc___ctor(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9F070;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9F028;
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
  if ( (byte_4CC2174 & 1) == 0 )
  {
    sub_1C713B0(&GrandServantListMenuBranchDialog_Result_TypeInfo);
    byte_4CC2174 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(GrandServantListMenuBranchDialog_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void GrandServantListMenuBranchDialog_CallbackFunc__EndInvoke(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  if ( (byte_4CC2175 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC2175 = 1;
  }
  if ( !e )
    goto LABEL_16;
  v6 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                                       v16,
                                                                       0);
  userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_16;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(userServantEntity[5], 0) )
  {
    v8 = *(_OWORD *)&e->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                                         &v14,
                                                                         0);
    v9 = v4->fields.userServantEntity;
    if ( v9 )
    {
      v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v10;
      if ( this == (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                                                 &v13,
                                                                                 0) )
        return 0;
      this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)v4->fields.grandGraphEntity;
      if ( this )
        return GrandGraphEntity__CanSelectToGrand((GrandGraphEntity_o *)this, e, 0);
    }
LABEL_16:
    sub_1C71608(this, e);
  }
  return 0;
}