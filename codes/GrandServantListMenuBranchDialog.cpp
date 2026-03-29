void GrandServantListMenuBranchDialog___ctor(GrandServantListMenuBranchDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B61C & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2B61C = 1;
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
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4D2B61A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15738/*"Window/Buttons/CancelButton"*/);
    byte_4D2B61A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_15738/*"Window/Buttons/CancelButton"*/, 0);
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
  float b; // s2
  float a; // s3
  struct UICommonButton_o *resetGrandButton; // x8
  __int64 v36; // x9
  __int64 v37; // x8
  __int64 v38; // x9
  int32_t v39; // w20
  int32_t v40; // w24
  Il2CppObject *Entity; // x0
  UILabel_o *messageLabel; // x23
  Il2CppObject *v43; // x22
  UILabel_o *resetGrandButtonCoverLabel; // x23
  System_String_o *v45; // x0
  System_Object_array *OrganizationList; // x22
  System_Func_object__bool__o *v47; // x23
  char v48; // w21
  Il2CppObject *v49; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  UnityEngine_Color_o v52; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4D2B61B & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_UserServantEntity____79061064);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__);
    sub_1C93AD4(&GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_7047/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_410/*"#4D4D4D"*/);
    sub_1C93AD4(&StringLiteral_7048/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/);
    byte_4D2B61B = 1;
  }
  *(_QWORD *)&v52.fields.r = 0;
  *(_QWORD *)&v52.fields.b = 0;
  v9 = sub_1C93D20(GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = userServantEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)userServantEntity, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = grandGraphEntity;
  v18 = (__int64 *)(v9 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)grandGraphEntity, v19, v20, v21, v22, v23, v24);
  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                                  (System_String_o *)StringLiteral_410/*"#4D4D4D"*/,
                                                                  &v52,
                                                                  0);
  changeServantButton = this->fields.changeServantButton;
  if ( !changeServantButton )
    goto LABEL_36;
  v32 = *(_QWORD *)&v52.fields.r;
  b = v52.fields.b;
  a = v52.fields.a;
  *(_QWORD *)&changeServantButton->fields.specifyDisabledColor.fields.r = *(_QWORD *)&v52.fields.r;
  changeServantButton->fields.specifyDisabledColor.fields.b = b;
  changeServantButton->fields.specifyDisabledColor.fields.a = a;
  resetGrandButton = this->fields.resetGrandButton;
  if ( !resetGrandButton )
    goto LABEL_36;
  *(_QWORD *)&resetGrandButton->fields.specifyDisabledColor.fields.r = v32;
  resetGrandButton->fields.specifyDisabledColor.fields.b = b;
  resetGrandButton->fields.specifyDisabledColor.fields.a = a;
  v36 = *v18;
  if ( !*v18 )
    goto LABEL_36;
  v37 = *(_QWORD *)(v36 + 72);
  if ( !v37 )
    goto LABEL_36;
  if ( !*(_DWORD *)(v37 + 24) )
    goto LABEL_37;
  v38 = *(_QWORD *)(v36 + 80);
  if ( !v38 )
    goto LABEL_36;
  if ( !*(_DWORD *)(v38 + 24) )
LABEL_37:
    sub_1C93D34(Master_object);
  v39 = *(_DWORD *)(v37 + 32);
  v40 = *(_DWORD *)(v38 + 32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             v39,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v43 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_7047/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/,
                                                                  0);
  if ( !v43 )
    goto LABEL_36;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)Master_object,
                                                                  (Il2CppObject *)v43[1].monitor,
                                                                  0);
  if ( !messageLabel )
    goto LABEL_36;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  resetGrandButtonCoverLabel = this->fields.resetGrandButtonCoverLabel;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_7048/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  v45,
                                                                  (Il2CppObject *)v43[1].monitor,
                                                                  0);
  if ( !resetGrandButtonCoverLabel )
    goto LABEL_36;
  UILabel__set_text(resetGrandButtonCoverLabel, (System_String_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_36;
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0);
  v47 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v47,
    (Il2CppObject *)v9,
    Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__Any_object__51960868(
                                                                  OrganizationList,
                                                                  (System_Func_T__bool__o *)v47,
                                                                  (const MethodInfo_318DC24 *)Method_BasicHelper_Any_UserServantEntity____79061064);
  if ( !this->fields.changeServantButton )
    goto LABEL_36;
  v48 = (char)Master_object;
  UICommonButton__SetButtonEnable(this->fields.changeServantButton, (unsigned __int8)Master_object & 1, 1, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeServantButtonCover;
  if ( !Master_object )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, (v48 & 1) == 0, 0);
  v49 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v49
    || ((EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)v49,
                              (int64_t)Master_object[2].fields.list[1].monitor,
                              v39,
                              0)) == 0
      ? (num = 0)
      : (num = EntityDefinitely->fields.num),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.resetGrandButton) == 0
     || (UICommonButton__SetButtonEnable((UICommonButton_o *)Master_object, num >= v40, 1, 0),
         (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.resetGrandButtonCoverLabel) == 0)
     || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)Master_object,
                                                                         0)) == 0) )
  {
LABEL_36:
    sub_1C93D2C(Master_object, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, num < v40, 0);
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

  if ( (byte_4D2B618 & 1) == 0 )
  {
    sub_1C93AD4(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    byte_4D2B618 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantListMenuBranchDialog_o *)sub_1C940C8(v8);
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

  if ( (byte_4D2B619 & 1) == 0 )
  {
    sub_1C93AD4(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    byte_4D2B619 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantListMenuBranchDialog_o *)sub_1C940C8(v8);
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC0AB0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0A68;
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
  if ( (byte_4D2B61D & 1) == 0 )
  {
    sub_1C93AD4(&GrandServantListMenuBranchDialog_Result_TypeInfo);
    byte_4D2B61D = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(GrandServantListMenuBranchDialog_Result_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void GrandServantListMenuBranchDialog_CallbackFunc__EndInvoke(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  if ( (byte_4D2B61E & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2B61E = 1;
  }
  if ( !e )
    goto LABEL_16;
  v6 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                       v16,
                                                                       0);
  userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_16;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userServantEntity[5], 0) )
  {
    v8 = *(_OWORD *)&e->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                                         &v14,
                                                                         0);
    v9 = v4->fields.userServantEntity;
    if ( v9 )
    {
      v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v10;
      if ( this == (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                                                 &v13,
                                                                                 0) )
        return 0;
      this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)v4->fields.grandGraphEntity;
      if ( this )
        return GrandGraphEntity__CanSelectToGrand((GrandGraphEntity_o *)this, e, 0);
    }
LABEL_16:
    sub_1C93D2C(this, e);
  }
  return 0;
}