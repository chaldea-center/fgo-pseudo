void __fastcall ServantCheckEquipDialog___ctor(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F94DE & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F94DE = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckEquipDialog__Close(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantCheckEquipDialog__Close_23855412(this, 0LL, v2);
}


void __fastcall ServantCheckEquipDialog__Close_23855412(
        ServantCheckEquipDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x20

  if ( (byte_40F94DA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ServantCheckEquipDialog_EndClose__, v10);
    byte_40F94DA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeFunc, 0LL, v11, v12, v13, v14, v15, v16);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0LL);
}


void __fastcall ServantCheckEquipDialog__EndClose(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantCheckEquipDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall ServantCheckEquipDialog__EndOpen(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ServantCheckEquipDialog__Init(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *warningLabel; // x0
  UILabel_o *decideButtonLabel; // x0
  UILabel_o *cancelButtonLabel; // x0
  ListViewManager_o *servantEquipListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F94D6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F94D6 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_10;
  UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_1, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !decideButtonLabel
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)StringLiteral_1, 0LL),
        (cancelButtonLabel = this->fields.cancelButtonLabel) == 0LL)
    || (UILabel__set_text(cancelButtonLabel, (System_String_o *)StringLiteral_1, 0LL),
        (servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager) == 0LL)
    || (ListViewManager__DestroyList(servantEquipListViewManager, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckEquipDialog__OnClickCancel(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_40F94DC & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F94DC = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_B170D4();
    ServantCheckEquipDialog_ClickDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


void __fastcall ServantCheckEquipDialog__OnClickDecide(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_40F94DB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F94DB = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_B170D4();
    ServantCheckEquipDialog_ClickDelegate__Invoke(closeFunc, 1, 0LL);
  }
}


void __fastcall ServantCheckEquipDialog__OnEnable(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40F94DD & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15422, v3);
    byte_40F94DD = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_15422, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipDialog__Open(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
        bool isLastCheck,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o **v20; // x8
  System_String_o *v21; // x24
  System_String_o **v22; // x8
  UILabel_o *titleLabel; // x23
  System_String_o *v24; // x22
  System_String_o *v25; // x0
  UILabel_o *warningLabel; // x23
  System_String_o *v27; // x0
  UnityEngine_Component_o *v28; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  float v32; // s0
  UnityEngine_Component_o *v33; // x0
  UILabel_o *decideButtonLabel; // x21
  System_String_o *v35; // x0
  UILabel_o *cancelButtonLabel; // x21
  System_String_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  const MethodInfo *v39; // x2
  ServantCheckEquipListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v41; // x2
  ServantCheckEquipListViewManager_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *v47; // x20

  if ( (byte_40F94D7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, materialList);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_ServantCheckEquipDialog_EndOpen__, v13);
    sub_B16FFC(&StringLiteral_11631, v14);
    sub_B16FFC(&StringLiteral_3253, v15);
    sub_B16FFC(&StringLiteral_11629, v16);
    sub_B16FFC(&StringLiteral_3251, v17);
    sub_B16FFC(&StringLiteral_11630, v18);
    sub_B16FFC(&StringLiteral_11628, v19);
    byte_40F94D7 = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    (System_String_array **)isLastCheck,
    (System_String_array **)closeCallback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v20 = (System_String_o **)&StringLiteral_11629;
  if ( !isLastCheck )
    v20 = (System_String_o **)&StringLiteral_11630;
  v21 = *v20;
  v22 = (System_String_o **)&StringLiteral_11631;
  titleLabel = this->fields.titleLabel;
  if ( isLastCheck )
    v22 = (System_String_o **)&StringLiteral_11628;
  v24 = *v22;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get(v21, 0LL);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, v25, 0LL);
  warningLabel = this->fields.warningLabel;
  v27 = LocalizationManager__Get(v24, 0LL);
  if ( !warningLabel )
    goto LABEL_27;
  UILabel__set_text(warningLabel, v27, 0LL);
  v28 = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !v28 )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(v28, 0LL);
  if ( isLastCheck )
  {
    GameObjectExtensions__SetLocalPosition_27419968(gameObject, 9.0, 250.0, 0LL);
    v30 = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( !v30 )
      goto LABEL_27;
    v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
    v32 = 0.0;
  }
  else
  {
    GameObjectExtensions__SetLocalPosition_27419968(gameObject, 1.0, 250.0, 0LL);
    v33 = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( !v33 )
      goto LABEL_27;
    v31 = UnityEngine_Component__get_gameObject(v33, 0LL);
    v32 = 7.0;
  }
  GameObjectExtensions__SetLocalPosition_27419968(v31, v32, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_27;
  UILabel__set_text(decideButtonLabel, v35, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, v37, 0LL),
        (v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(v38, 1, 0LL),
        (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL)
    || (ServantCheckEquipListViewManager__CreateList(servantEquipListViewManager, materialList, v39),
        (v42 = this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_27:
    sub_B170D4();
  }
  ServantCheckEquipListViewManager__SetMode_23853976(v42, 3, v41);
  v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0LL);
}


void __fastcall ServantCheckEquipDialog__OpenShopLastCheck(
        ServantCheckEquipDialog_o *this,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *v8; // x0
  UILabel_o *warningLabel; // x21
  System_String_o *v10; // x0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F94D9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, closeCallback);
    sub_B16FFC(&StringLiteral_11635, v5);
    sub_B16FFC(&StringLiteral_11634, v6);
    byte_40F94D9 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11635, 0LL);
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, v8, 0LL);
  warningLabel = this->fields.warningLabel;
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11634, 0LL);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, v10, 0LL), (v11 = (UnityEngine_Component_o *)this->fields.titleLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v11, 0LL),
        GameObjectExtensions__SetLocalPosition_27419968(gameObject, 9.0, 250.0, 0LL),
        (v13 = (UnityEngine_Component_o *)this->fields.warningLabel) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  v14 = UnityEngine_Component__get_gameObject(v13, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(v14, 0.0, -151.0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall ServantCheckEquipDialog__Open_23854092(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *v18; // x0
  UILabel_o *warningLabel; // x21
  System_String_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UILabel_o *decideButtonLabel; // x21
  System_String_o *v26; // x0
  UILabel_o *cancelButtonLabel; // x21
  System_String_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x2
  ServantCheckEquipListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v32; // x2
  ServantCheckEquipListViewManager_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Action_o *v38; // x20

  if ( (byte_40F94D8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, materialList);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&Method_ServantCheckEquipDialog_EndOpen__, v12);
    sub_B16FFC(&StringLiteral_11633, v13);
    sub_B16FFC(&StringLiteral_3253, v14);
    sub_B16FFC(&StringLiteral_3251, v15);
    sub_B16FFC(&StringLiteral_11632, v16);
    byte_40F94D8 = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    (System_String_array **)closeCallback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11632, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, v18, 0LL);
  warningLabel = this->fields.warningLabel;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11633, 0LL);
  if ( !warningLabel )
    goto LABEL_16;
  UILabel__set_text(warningLabel, v20, 0LL);
  v21 = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !v21 )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(gameObject, 1.0, 250.0, 0LL);
  v23 = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !v23 )
    goto LABEL_16;
  v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(v24, 7.0, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_16;
  UILabel__set_text(decideButtonLabel, v26, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, v28, 0LL),
        (v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(v29, 1, 0LL),
        (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL)
    || (ServantCheckEquipListViewManager__CreateList_23854664(servantEquipListViewManager, materialList, v30),
        (v33 = this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  ServantCheckEquipListViewManager__SetMode_23853976(v33, 3, v32);
  v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipDialog_ClickDelegate___ctor(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantCheckEquipDialog_ClickDelegate__BeginInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_40F760D & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F760D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantCheckEquipDialog_ClickDelegate__EndInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipDialog_ClickDelegate__Invoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ServantCheckEquipDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  ServantCheckEquipDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ServantCheckEquipDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ServantCheckEquipDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isDecide, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}