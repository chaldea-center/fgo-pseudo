void GrandServantListMenuBranchDialog___ctor(GrandServantListMenuBranchDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B33F & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B33F = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct GrandServantListMenuBranchDialog_CallbackFunc_o *v9; // x20
  struct GrandServantListMenuBranchDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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

  if ( (byte_596B33D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16256/*"Window/Buttons/CancelButton"*/);
    byte_596B33D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16256/*"Window/Buttons/CancelButton"*/, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 *v18; // x23
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x2
  struct UICommonButton_o *changeServantButton; // x8
  __int64 v33; // kr00_8
  __int64 v34; // kr08_8
  struct UICommonButton_o *resetGrandButton; // x8
  __int64 v36; // x9
  __int64 v37; // x8
  __int64 v38; // x9
  int32_t v39; // w20
  int32_t v40; // w24
  Il2CppObject *Entity; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  UILabel_o *messageLabel; // x23
  Il2CppObject *v45; // x22
  UILabel_o *resetGrandButtonCoverLabel; // x23
  System_String_o *v47; // x0
  System_Object_array *OrganizationList; // x22
  System_Func_object__bool__o *v49; // x23
  char v50; // w21
  __int64 v51; // x2
  Il2CppObject *v52; // x21
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  UnityEngine_Color_o v55; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_596B33E & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_UserServantEntity____91711592);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__);
    sub_2213A60(&GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo);
    sub_2213A60(&StringLiteral_7306/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_435/*"#4D4D4D"*/);
    sub_2213A60(&StringLiteral_7307/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/);
    byte_596B33E = 1;
  }
  *(_QWORD *)&v55.fields.r = 0;
  *(_QWORD *)&v55.fields.b = 0;
  v9 = sub_2213CCC(GrandServantListMenuBranchDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = userServantEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)userServantEntity, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = grandGraphEntity;
  v18 = (__int64 *)(v9 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)grandGraphEntity, v19, v20, v21, v22, v23, v24);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                                  (System_String_o *)StringLiteral_435/*"#4D4D4D"*/,
                                                                  &v55,
                                                                  0);
  changeServantButton = this->fields.changeServantButton;
  if ( !changeServantButton )
    goto LABEL_36;
  v33 = *(_QWORD *)&v55.fields.r;
  v34 = *(_QWORD *)&v55.fields.b;
  *(_QWORD *)&changeServantButton->fields.specifyDisabledColor.fields.r = *(_QWORD *)&v55.fields.r;
  *(_QWORD *)&changeServantButton->fields.specifyDisabledColor.fields.b = v34;
  resetGrandButton = this->fields.resetGrandButton;
  if ( !resetGrandButton )
    goto LABEL_36;
  *(_QWORD *)&resetGrandButton->fields.specifyDisabledColor.fields.r = v33;
  *(_QWORD *)&resetGrandButton->fields.specifyDisabledColor.fields.b = v34;
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
    sub_2213CE4(Master_object);
  v39 = *(_DWORD *)(v37 + 32);
  v40 = *(_DWORD *)(v38 + 32);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v31);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             v39,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  messageLabel = this->fields.messageLabel;
  v45 = Entity;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42, v43);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_7306/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_MESSAGE"*/,
                                                                  0);
  if ( !v45 )
    goto LABEL_36;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)Master_object,
                                                                  (Il2CppObject *)v45[1].monitor,
                                                                  0);
  if ( !messageLabel )
    goto LABEL_36;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  resetGrandButtonCoverLabel = this->fields.resetGrandButtonCoverLabel;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_7307/*"GRAND_SERVANT_LIST_MENU_BRANCH_DIALOG_RESET_GRAND_COVER_TEXT"*/, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  v47,
                                                                  (Il2CppObject *)v45[1].monitor,
                                                                  0);
  if ( !resetGrandButtonCoverLabel )
    goto LABEL_36;
  UILabel__set_text(resetGrandButtonCoverLabel, (System_String_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_36;
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0);
  v49 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v49,
    (Il2CppObject *)v9,
    Method_GrandServantListMenuBranchDialog___c__DisplayClass12_0__Open_b__0__,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__Any_object__58785420(
                                                                  OrganizationList,
                                                                  (System_Func_T__bool__o *)v49,
                                                                  (const MethodInfo_380FE8C *)Method_BasicHelper_Any_UserServantEntity____91711592);
  if ( !this->fields.changeServantButton )
    goto LABEL_36;
  v50 = (char)Master_object;
  UICommonButton__SetButtonEnable(this->fields.changeServantButton, (unsigned __int8)Master_object & 1, 1, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeServantButtonCover;
  if ( !Master_object )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, (v50 & 1) == 0, 0);
  v52 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v51);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v51);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v52
    || ((EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)v52,
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
    sub_2213CDC(Master_object, v11);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  GrandServantListMenuBranchDialog_o *v13; // x0
  GrandServantListMenuBranchDialog_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B33B & 1) == 0 )
  {
    sub_2213A60(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    byte_596B33B = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (GrandServantListMenuBranchDialog_o *)sub_221405C(
                                                v8,
                                                GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo,
                                                v9,
                                                v10);
  GrandServantListMenuBranchDialog__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  GrandServantListMenuBranchDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B33C & 1) == 0 )
  {
    sub_2213A60(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    byte_596B33C = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (GrandServantListMenuBranchDialog_o *)sub_221405C(
                                                v8,
                                                GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo,
                                                v9,
                                                v10);
  GrandServantListMenuBranchDialog__Awake(v13, v14);
}


void GrandServantListMenuBranchDialog_CallbackFunc___ctor(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200193C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20018F4;
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
  if ( (byte_596B340 & 1) == 0 )
  {
    sub_2213A60(&GrandServantListMenuBranchDialog_Result_TypeInfo);
    byte_596B340 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(GrandServantListMenuBranchDialog_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void GrandServantListMenuBranchDialog_CallbackFunc__EndInvoke(
        GrandServantListMenuBranchDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int128 v10; // q1
  struct UserServantEntity_o *v11; // x8
  __int128 v12; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_596B341 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596B341 = 1;
  }
  if ( !e )
    goto LABEL_16;
  v5 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, e, method);
  *(_QWORD *)&v18.fields.currentCryptoKey = v5;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                       v18,
                                                                       0);
  userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_16;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(userServantEntity[5], 0) )
  {
    v10 = *(_OWORD *)&e->fields.id.fields.fakeValue;
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v17.fields.fakeValue = v10;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
    v16 = v17;
    this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                                         &v16,
                                                                         0);
    v11 = v4->fields.userServantEntity;
    if ( v11 )
    {
      v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
      *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v15.fields.fakeValue = v12;
      if ( this == (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                                                 &v15,
                                                                                 0) )
        return 0;
      this = (GrandServantListMenuBranchDialog___c__DisplayClass12_0_o *)v4->fields.grandGraphEntity;
      if ( this )
        return GrandGraphEntity__CanSelectToGrand((GrandGraphEntity_o *)this, e, 0);
    }
LABEL_16:
    sub_2213CDC(this, e);
  }
  return 0;
}