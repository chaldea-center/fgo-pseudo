void __fastcall SupportServantEquipListMenu___ctor(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418AC3E & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_418AC3E = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantEquipListMenu__Callback(
        SupportServantEquipListMenu_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportServantEquipListMenu_CallbackFunc__Invoke(callbackFunc, result, classPos, item, 0LL);
}


void __fastcall SupportServantEquipListMenu__Close(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantEquipListMenu__Close_30882968(this, 0LL, v2);
}


void __fastcall SupportServantEquipListMenu__Close_30882968(
        SupportServantEquipListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_418AC31 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_SupportServantEquipListMenu_EndClose__, v10);
    byte_418AC31 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  SupportServantEquipListMenu__SetListManagerStatus(this, v11);
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0LL);
}


void __fastcall SupportServantEquipListMenu__Decide(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SupportServantEquipListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418AC33 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SupportServantEquipListMenu_EndDecide__, v4);
    byte_418AC33 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v5 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
  SupportServantEquipListMenu_RequestCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_SupportServantEquipListMenu_EndDecide__,
    0LL);
  SupportServantEquipListMenu__StatusRequest(this, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndClickTabChoice(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_B2C434(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_31647624(supportServantEquipListViewManager, 3, 0LL);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndClickTabLock(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_B2C434(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_31647624(supportServantEquipListViewManager, 3, 0LL);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndClickTabNormal(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_B2C434(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_31647624(supportServantEquipListViewManager, 3, 0LL);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 0, method);
}


void __fastcall SupportServantEquipListMenu__EndClose(SupportServantEquipListMenu_o *this, const MethodInfo *method)
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

  SupportServantEquipListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall SupportServantEquipListMenu__EndCloseEventServantWarning(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportServantEquipListMenu_CallbackFunc__Invoke(callbackFunc, 1, this->fields.classPos, 0LL, 0LL);
}


void __fastcall SupportServantEquipListMenu__EndCloseList(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportServantEquipListMenu__EndCloseShowServantEquip(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_418AC37 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SupportServantEquipListMenu_OnSelectServantEquip__, v3);
    byte_418AC37 = 1;
  }
  this->fields.state = 2;
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  v5 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B2C42C(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    0LL);
  if ( !supportServantEquipListViewManager )
    sub_B2C434(v6, v7);
  SupportServantEquipListViewManager__SetMode(supportServantEquipListViewManager, 2, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndDecide(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewItem_o *Item; // x20
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_16;
    SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_16;
    SupportServantEquipListViewManager__SetMode_31647624(supportServantEquipListViewManager, 3, 0LL);
  }
  *(_QWORD *)&isRequest = (unsigned int)this->fields.selectNum;
  this->fields.state = 3;
  if ( (isRequest & 0x80000000) != 0 )
  {
    Item = 0LL;
LABEL_10:
    if ( this->fields.isSelectedSvt )
      goto LABEL_13;
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( supportServantEquipListViewManager )
    {
      ListViewManager__SetScrollBarValue((ListViewManager_o *)supportServantEquipListViewManager, 0LL);
      goto LABEL_13;
    }
LABEL_16:
    sub_B2C434(supportServantEquipListViewManager, isRequest);
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_16;
  Item = SupportServantEquipListViewManager__GetItem(supportServantEquipListViewManager, isRequest, 0LL);
  if ( !Item )
    goto LABEL_10;
LABEL_13:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportServantEquipListMenu_CallbackFunc__Invoke(callbackFunc, 1, this->fields.classPos, Item, 0LL);
}


void __fastcall SupportServantEquipListMenu__EndOpen(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x20
  TutorialFlag_ImageId_array *v7; // x0
  TutorialFlag_ImageId_array *v8; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v10; // x0

  if ( (byte_418AC30 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_ImageId___TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&TutorialFlag_TypeInfo, v4);
    byte_418AC30 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28617756(110, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (TutorialFlag_ImageId_array *)sub_B2C374(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v7 )
      goto LABEL_14;
    max_length = v7->max_length;
    v8 = v7;
    if ( !max_length || (v7->m_Items[1] = 4, max_length == 1) )
    {
      v10 = sub_B2C460(v7);
      sub_B2C400(v10, 0LL);
    }
    v7->m_Items[2] = 5;
    if ( !Instance )
LABEL_14:
      sub_B2C434(v7, v8);
    CommonUI__OpenTutorialImageDialog(Instance, v7, 110, 0LL, 0LL, 0LL, 0LL);
  }
  this->fields.state = 2;
  SupportServantEquipListMenu__SetListManagerStatus(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndShowServantEquip(
        SupportServantEquipListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_418AC36 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, v6);
    byte_418AC36 = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B2C434(supportServantEquipListViewManager, isDecide);
    }
    SupportServantEquipListViewManager__SetMode_31647624(supportServantEquipListViewManager, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog(Instance, v9, 0LL);
}


void __fastcall SupportServantEquipListMenu__EndStatusSync(
        SupportServantEquipListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_requedstCallback; // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v9; // x19
  struct SupportServantEquipListMenu_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (BattleServantConfConponent_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0LL;
    sub_B2C2F8(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SupportServantEquipListMenu_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall SupportServantEquipListMenu__Init(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UnityEngine_Behaviour_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v8; // x2

  if ( (byte_418AC2E & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_11708/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v3);
    byte_418AC2E = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_10;
  SupportServantEquipListViewManager__DestroyList(supportServantEquipListViewManager, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_11708/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/,
                                                                                 0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantEquipListViewManager, 0LL),
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton,
        this->fields.state = 0,
        !normalTabButton) )
  {
LABEL_10:
    sub_B2C434(supportServantEquipListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled(normalTabButton, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)normalTabButton, enabled, 1, 0LL);
  SupportServantEquipListMenu__setModeTabKind(this, 0, v8);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantEquipListMenu__OnClickCancel(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_418AC34 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SupportServantEquipListMenu_endCancelButton__, v4);
    byte_418AC34 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      supportServantEquipListViewManager = (ListViewManager_o *)this->fields.supportServantEquipListViewManager;
      if ( !supportServantEquipListViewManager )
        sub_B2C434(0LL, method);
      ListViewManager__SetScrollBarValue(supportServantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v6 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_endCancelButton__,
      0LL);
    SupportServantEquipListMenu__StatusRequest(this, v6, v7);
  }
}


void __fastcall SupportServantEquipListMenu__OnClickDecide(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewItem_o *SelectItem; // x0
  const MethodInfo *v5; // x1
  int32_t index; // w8

  if ( this->fields.state == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      sub_B2C434(0LL, method);
    SelectItem = SupportServantEquipListViewManager__GetSelectItem(supportServantEquipListViewManager, 0LL);
    if ( SelectItem )
      index = SelectItem->fields.index;
    else
      index = -1;
    this->fields.selectNum = index;
    SupportServantEquipListMenu__Decide(this, v5);
  }
}


void __fastcall SupportServantEquipListMenu__OnClickScaleChange(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_418AC3D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AC3D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ChangeIconScale(supportServantEquipListViewManager, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                                                         supportServantEquipListViewManager,
                                                                                         0LL),
          !scaleChangeTabSprite) )
    {
      sub_B2C434(supportServantEquipListViewManager, v3);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantEquipListViewManager, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__OnSelectServantEquip(
        SupportServantEquipListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  SupportServantEquipListMenu_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  SupportServantEquipListViewItem_o *v13; // x20
  int32_t tabModeKind; // w8
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v17; // x22
  char v18; // w20
  int32_t v19; // w8
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x20
  struct SupportServantEquipListViewManager_o *v22; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  SupportServantEquipServantItem_o *v25; // x0
  SupportServantEquipListMenu_o *v26; // x1
  SupportServantEquipListViewManager_CallbackFunc_o *v27; // x21
  ServantStatusDialog_EndDelegate_o *v28; // x23
  struct UserServantEntity_o *v29; // x8
  __int128 v30; // q1
  SupportServantEquipListViewManager_o *v31; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v32; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_418AC35 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&Method_SupportServantEquipListMenu_EndShowServantEquip__, v11);
    this = (SupportServantEquipListMenu_o *)sub_B2C35C(&Method_SupportServantEquipListMenu_OnSelectServantEquip__, v12);
    byte_418AC35 = 1;
  }
  if ( v6->fields.state == 2 )
  {
    v6->fields.selectNum = n;
    if ( (n & 0x80000000) != 0 )
    {
      v13 = 0LL;
    }
    else
    {
      this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
      if ( !this )
        goto LABEL_85;
      this = (SupportServantEquipListMenu_o *)SupportServantEquipListViewManager__GetItem(
                                                (SupportServantEquipListViewManager_o *)this,
                                                n,
                                                0LL);
      v13 = (SupportServantEquipListViewItem_o *)this;
    }
    switch ( kind )
    {
      case 1:
        SupportServantEquipListMenu__Decide(v6, *(const MethodInfo **)&kind);
        return;
      case 2:
        if ( v13 )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v6->fields.state = 5;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          userSvtEntity = v13->fields.userSvtEntity;
          v17 = (CommonUI_o *)Instance;
          v18 = v13->fields.isUse || v13->fields.isBase;
          v28 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v28,
            (Il2CppObject *)v6,
            Method_SupportServantEquipListMenu_EndShowServantEquip__,
            0LL);
          if ( v17 )
          {
            CommonUI__OpenServantEquipStatusDialog_17986180(v17, 0, userSvtEntity, v18, v28, 0LL, 0LL);
            return;
          }
        }
        else
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          v6->fields.state = 2;
          supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
LABEL_63:
          v27 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B2C42C(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
          SupportServantEquipListViewManager_CallbackFunc___ctor(
            v27,
            (Il2CppObject *)v6,
            Method_SupportServantEquipListMenu_OnSelectServantEquip__,
            0LL);
          if ( supportServantEquipListViewManager )
          {
            SupportServantEquipListViewManager__SetMode(supportServantEquipListViewManager, 2, v27, 0LL);
            return;
          }
        }
LABEL_85:
        sub_B2C434(this, *(_QWORD *)&kind);
      case 3:
        tabModeKind = v6->fields.tabModeKind;
        if ( tabModeKind == 2 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          if ( !v13 )
            goto LABEL_85;
          v13->fields.isSwapChoice ^= 1u;
        }
        else if ( tabModeKind == 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(11, 0LL);
          if ( !v13 )
            goto LABEL_85;
          v13->fields.isSwapLock ^= 1u;
        }
        else
        {
          v22 = v6->fields.supportServantEquipListViewManager;
          if ( !v22 || !v13 )
            goto LABEL_85;
          servantItemInfo = v22->fields.servantItemInfo;
          servantItemDraw = v22->fields.servantItemDraw;
          if ( v13->fields.isBase )
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            v13->fields.isBase = 0;
            if ( !servantItemInfo )
              goto LABEL_85;
            v25 = servantItemInfo;
            v26 = 0LL;
          }
          else
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_85;
            SupportServantEquipListViewManager__resetEquipItemBaseFlag(
              (SupportServantEquipListViewManager_o *)this,
              0LL);
            v29 = v13->fields.userSvtEntity;
            v13->fields.isBase = 1;
            if ( !v29 )
              goto LABEL_85;
            v30 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
            *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v34.fields.fakeValue = v30;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v33 = v34;
            this = (SupportServantEquipListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                      &v33,
                                                      0LL);
            if ( !servantItemInfo )
              goto LABEL_85;
            v26 = this;
            v25 = servantItemInfo;
          }
          SupportServantEquipServantItem__SetEquipTarget(v25, (int64_t)v26, 0LL);
          if ( !servantItemDraw )
            goto LABEL_85;
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, servantItemInfo, 0LL);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_85;
          SupportServantEquipListViewManager__RefreshEquipped((SupportServantEquipListViewManager_o *)this, 0LL);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_85;
          SupportServantEquipListViewManager__RefreshListDisp((SupportServantEquipListViewManager_o *)this, 0LL);
        }
        v6->fields.state = 2;
        v31 = v6->fields.supportServantEquipListViewManager;
        v32 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B2C42C(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
        SupportServantEquipListViewManager_CallbackFunc___ctor(
          v32,
          (Il2CppObject *)v6,
          Method_SupportServantEquipListMenu_OnSelectServantEquip__,
          0LL);
        if ( !v31 )
          goto LABEL_85;
        SupportServantEquipListViewManager__SetMode(v31, 2, v32, 0LL);
        return;
      case 4:
        v19 = v6->fields.tabModeKind;
        if ( v19 == 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(11, 0LL);
          if ( !v13 )
            goto LABEL_85;
          v13->fields.isSwapLock ^= 1u;
        }
        else if ( v19 == 2 )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          if ( !v13 )
            goto LABEL_85;
          v13->fields.isSwapChoice ^= 1u;
        }
        else
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_85;
          SupportServantEquipListViewManager__checkEquipChange((SupportServantEquipListViewManager_o *)this, v13, 0LL);
        }
        supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
        v6->fields.state = 2;
        goto LABEL_63;
      default:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        callbackFunc = v6->fields.callbackFunc;
        v6->fields.state = 3;
        if ( callbackFunc )
          SupportServantEquipListMenu_CallbackFunc__Invoke(callbackFunc, 1, v6->fields.classPos, 0LL, 0LL);
        return;
    }
  }
}


void __fastcall SupportServantEquipListMenu__Open(
        SupportServantEquipListMenu_o *this,
        SupportServantData_array *supportServantDatas,
        int32_t nowDeckNum,
        int32_t classPos,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        SupportServantEquipListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v18; // x1
  SupportServantData_o *Equip; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  Il2CppClass **v22; // x28
  struct SupportServantData_o **v23; // x28
  SupportServantData_o *v24; // t1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct SupportServantData_o *v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t state; // w8
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v42; // x20
  __int64 v43; // x0

  if ( (byte_418AC2F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, supportServantDatas);
    sub_B2C35C(&Method_SupportServantEquipListMenu_EndOpen__, v18);
    byte_418AC2F = 1;
  }
  SupportServantEquipListMenu__Init(this, (const MethodInfo *)supportServantDatas);
  if ( !supportServantDatas )
    goto LABEL_18;
  if ( supportServantDatas->max_length <= nowDeckNum )
    goto LABEL_19;
  v22 = &supportServantDatas->obj.klass + nowDeckNum;
  v24 = (SupportServantData_o *)v22[4];
  v23 = (struct SupportServantData_o **)(v22 + 4);
  Equip = v24;
  if ( !v24 )
    goto LABEL_18;
  Equip = (SupportServantData_o *)SupportServantData__getEquip(Equip, classPos, v21);
  this->fields.isSelectedSvt = (__int64)Equip > 0;
  if ( supportServantDatas->max_length <= nowDeckNum )
  {
LABEL_19:
    v43 = sub_B2C460(Equip);
    sub_B2C400(v43, 0LL);
  }
  v31 = *v23;
  this->fields.supportServantData = *v23;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v31,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    this->fields.state = 2;
    SupportServantEquipListMenu__SetListManagerStatus(this, v39);
    return;
  }
  if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    this->fields.classPos = classPos;
    Equip = (SupportServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( Equip )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Equip, 1, 0LL);
      Equip = (SupportServantData_o *)this->fields.titleInfo;
      if ( Equip )
      {
        TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Equip, 0LL, 1, 0LL, 23, 0LL);
        Equip = (SupportServantData_o *)this->fields.titleInfo;
        if ( Equip )
        {
          TitleInfoControl__setBackBtnSprite_19529688((TitleInfoControl_o *)Equip, 1, 0, 0, 0LL);
          Equip = (SupportServantData_o *)this->fields.supportServantEquipListViewManager;
          if ( Equip )
          {
            SupportServantEquipListViewManager__CreateList(
              (SupportServantEquipListViewManager_o *)Equip,
              supportServantDatas,
              nowDeckNum,
              classPos,
              eventSetupInfo,
              nowDeckId,
              fixMainDeckIds,
              fixEventDeckIds,
              0LL);
            this->fields.state = 1;
            SupportServantEquipListMenu__SetListManagerStatus(this, v40);
            Equip = (SupportServantData_o *)this->fields.supportServantEquipListViewManager;
            if ( Equip )
            {
              scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
              Equip = (SupportServantData_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                (SupportServantEquipListViewManager_o *)Equip,
                                                0LL);
              if ( scaleChangeTabSprite )
              {
                UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Equip, 0LL);
                v42 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(v42, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndOpen__, 0LL);
                BaseMenu__Open((BaseMenu_o *)this, v42, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_B2C434(Equip, v20);
  }
}


void __fastcall SupportServantEquipListMenu__SetListManagerStatus(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  SupportServantEquipListMenu_o *v2; // x20
  __int64 v3; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x19
  SupportServantEquipListViewManager_CallbackFunc_o *v5; // x21

  v2 = this;
  if ( (byte_418AC32 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, method);
    this = (SupportServantEquipListMenu_o *)sub_B2C35C(&Method_SupportServantEquipListMenu_OnSelectServantEquip__, v3);
    byte_418AC32 = 1;
  }
  supportServantEquipListViewManager = v2->fields.supportServantEquipListViewManager;
  if ( v2->fields.state == 2 )
  {
    v5 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B2C42C(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    SupportServantEquipListViewManager_CallbackFunc___ctor(
      v5,
      (Il2CppObject *)v2,
      Method_SupportServantEquipListMenu_OnSelectServantEquip__,
      0LL);
    if ( supportServantEquipListViewManager )
    {
      SupportServantEquipListViewManager__SetMode(supportServantEquipListViewManager, 2, v5, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(this, method);
  }
  if ( !supportServantEquipListViewManager )
    goto LABEL_8;
  SupportServantEquipListViewManager__SetMode_31647624(v2->fields.supportServantEquipListViewManager, 1, 0LL);
}


void __fastcall SupportServantEquipListMenu__StatusRequest(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t tabModeKind; // w8
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int64_array *v17; // x2
  System_Int64_array *v18; // x1
  bool v19; // w4
  bool v20; // w5
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_418AC3C & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&Method_SupportServantEquipListMenu_EndStatusSync__, v7);
    byte_418AC3C = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_23;
    if ( SupportServantEquipListViewManager__GetSwapChoiceList(
           supportServantEquipListViewManager,
           &choiceList,
           &unchoiceList,
           0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                                     v27,
                                                                                     (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v17 = unchoiceList;
        v18 = choiceList;
        v20 = 1;
        v19 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B2C434(supportServantEquipListViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_23;
    if ( SupportServantEquipListViewManager__GetSwapLockList(
           supportServantEquipListViewManager,
           &lockList,
           &unlockList,
           0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                                     v16,
                                                                                     (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v17 = unlockList;
        v18 = lockList;
        v19 = 1;
        v20 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantEquipListViewManager,
          v18,
          v17,
          0,
          v19,
          v20,
          0LL);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    SupportServantEquipListMenu_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall SupportServantEquipListMenu__add_callbackFunc(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportServantEquipListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantEquipListMenu_o *v11; // x0
  SupportServantEquipListMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418AC2C & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, value);
    byte_418AC2C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantEquipListMenu_CallbackFunc_c *)v8->klass != SupportServantEquipListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportServantEquipListMenu__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__endCancelButton(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B2C434(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_31647624(supportServantEquipListViewManager, 3, 0LL);
  }
  SupportServantEquipListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)this,
                                                                                 0LL);
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantEquipListViewManager, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportServantEquipListMenu_CallbackFunc__Invoke(callbackFunc, 0, this->fields.classPos, 0LL, 0LL);
}


void __fastcall SupportServantEquipListMenu__onClickChoiceTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_418AC3A & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SupportServantEquipListMenu_EndClickTabChoice__, v4);
    byte_418AC3A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabChoice__,
          0LL);
        SupportServantEquipListMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabChoice__,
        0LL);
      SupportServantEquipListMenu__StatusRequest(this, v9, v10);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 2, v5);
  }
}


void __fastcall SupportServantEquipListMenu__onClickLockTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_418AC39 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SupportServantEquipListMenu_EndClickTabLock__, v4);
    byte_418AC39 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabLock__,
          0LL);
        SupportServantEquipListMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabLock__,
        0LL);
      SupportServantEquipListMenu__StatusRequest(this, v9, v10);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 1, v5);
  }
}


void __fastcall SupportServantEquipListMenu__onClickNormalTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SupportServantEquipListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418AC38 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SupportServantEquipListMenu_EndClickTabNormal__, v4);
    byte_418AC38 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_EndClickTabNormal__,
      0LL);
    SupportServantEquipListMenu__StatusRequest(this, v5, v6);
  }
}


void __fastcall SupportServantEquipListMenu__remove_callbackFunc(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportServantEquipListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantEquipListMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_418AC2D & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, value);
    byte_418AC2D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantEquipListMenu_CallbackFunc_c *)v8->klass != SupportServantEquipListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportServantEquipListMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__setModeTabKind(
        SupportServantEquipListMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v15; // x20
  bool enabled; // w0
  System_String_o **v17; // x8
  UICommonButton_o *lockTabButton; // x20
  bool v19; // w0
  System_String_o **v20; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v22; // w0
  System_String_o **v23; // x8
  const MethodInfo *v24; // x1
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x20
  __int64 *v27; // x8
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x8

  if ( (byte_418AC3B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B2C35C(&StringLiteral_11706/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/, v5);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v6);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v7);
    sub_B2C35C(&StringLiteral_11708/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v8);
    sub_B2C35C(&StringLiteral_11707/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/, v9);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v10);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v11);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v12);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v13);
    byte_418AC3B = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_42;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    v15 = this->fields.normalTabButton;
    if ( !v15 )
      goto LABEL_42;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
    UICommonButton__SetColliderEnable(v15, enabled, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_42;
    v17 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17140/*"button_select_unreg"*/ : &StringLiteral_17139/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v17, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_42;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_42;
    v19 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v19, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_42;
    v20 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17125/*"button_alllock_reg"*/ : &StringLiteral_17126/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v20, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_42;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_42;
    v22 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v22, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_42;
    if ( this->fields.tabModeKind == 2 )
      v23 = (System_String_o **)&StringLiteral_17123/*"button_allchoice_reg"*/;
    else
      v23 = (System_String_o **)&StringLiteral_17124/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v23, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = &StringLiteral_11706/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( tabModeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = &StringLiteral_11707/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( tabModeKind )
      {
LABEL_39:
        SupportServantEquipListMenu__SetListManagerStatus(this, v24);
        supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
        if ( supportServantEquipListViewManager )
        {
          supportServantEquipListViewManager->fields.isCanNotLongPush = this->fields.tabModeKind != 0;
          return;
        }
LABEL_42:
        sub_B2C434(normalTabButton, *(_QWORD *)&modeKind);
      }
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = &StringLiteral_11708/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
    if ( !explanationLabel )
      goto LABEL_42;
    UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0LL);
    goto LABEL_39;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_CallbackFunc___ctor(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantEquipListMenu_CallbackFunc__BeginInvoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = result;
  v14 = classPos;
  if ( (byte_41847D8 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&SupportSelectRootComponent_ResultKind_TypeInfo, v11);
    byte_41847D8 = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13[2] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B2C300(this, v13, callback, object);
}


void __fastcall SupportServantEquipListMenu_CallbackFunc__EndInvoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_CallbackFunc__Invoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  SupportServantEquipListMenu_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD); // x0
  SupportServantEquipListMenu_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, SupportServantEquipListViewItem_o *, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  SupportServantEquipListMenu_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (SupportServantEquipListMenu_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, SupportServantEquipListViewItem_o *, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&classPos, item);
      if ( (sub_B2C38C(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)classPos, item, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)classPos, item, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AC5258(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD))sub_B2C40C(v20, v25);
        (*v22)(v24, v30, (unsigned int)classPos, item, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AC5258(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)classPos,
            item,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD))(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 312))(
            v24,
            v36,
            (unsigned int)classPos,
            item,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, __int64))v26)(
      v24,
      v36,
      (unsigned int)classPos,
      item,
      v25);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantEquipListMenu_RequestCallbackFunc__BeginInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_41847D9 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_41847D9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall SupportServantEquipListMenu_RequestCallbackFunc__EndInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_RequestCallbackFunc__Invoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SupportServantEquipListMenu_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  SupportServantEquipListMenu_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SupportServantEquipListMenu_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
    goto LABEL_37;
  }
}