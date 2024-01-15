void __fastcall SupportServantEquipListMenu___ctor(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FD2BC & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FD2BC = 1;
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

  SupportServantEquipListMenu__Close_30897240(this, 0LL, v2);
}


void __fastcall SupportServantEquipListMenu__Close_30897240(
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x20

  if ( (byte_40FD2AF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SupportServantEquipListMenu_EndClose__, v10);
    byte_40FD2AF = 1;
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
  this->fields.state = 4;
  SupportServantEquipListMenu__SetListManagerStatus(this, v11);
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
}


void __fastcall SupportServantEquipListMenu__Decide(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  SupportServantEquipListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FD2B1 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SupportServantEquipListMenu_EndDecide__, v4);
    byte_40FD2B1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v9 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                              SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                              v5,
                                                              v6,
                                                              v7,
                                                              v8);
  SupportServantEquipListMenu_RequestCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportServantEquipListMenu_EndDecide__,
    0LL);
  SupportServantEquipListMenu__StatusRequest(this, v9, v10);
}


void __fastcall SupportServantEquipListMenu__EndClickTabChoice(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewManager_o *v5; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (v5 = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    SupportServantEquipListViewManager__SetMode_31915380(v5, 3, 0LL);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 2, method);
}


void __fastcall SupportServantEquipListMenu__EndClickTabLock(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewManager_o *v5; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (v5 = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    SupportServantEquipListViewManager__SetMode_31915380(v5, 3, 0LL);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 1, method);
}


void __fastcall SupportServantEquipListMenu__EndClickTabNormal(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewManager_o *v5; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (v5 = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    SupportServantEquipListViewManager__SetMode_31915380(v5, 3, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40FD2B5 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SupportServantEquipListMenu_OnSelectServantEquip__, v6);
    byte_40FD2B5 = 1;
  }
  this->fields.state = 2;
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  v8 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3,
                                                              v4);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    0LL);
  if ( !supportServantEquipListViewManager )
    sub_B170D4();
  SupportServantEquipListViewManager__SetMode(supportServantEquipListViewManager, 2, v8, 0LL);
}


void __fastcall SupportServantEquipListMenu__EndDecide(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewManager_o *v5; // x0
  int32_t selectNum; // w1
  SupportServantEquipListViewManager_o *v7; // x0
  SupportServantEquipListViewItem_o *Item; // x20
  ListViewManager_o *v9; // x0
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_16;
    SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL);
    v5 = this->fields.supportServantEquipListViewManager;
    if ( !v5 )
      goto LABEL_16;
    SupportServantEquipListViewManager__SetMode_31915380(v5, 3, 0LL);
  }
  selectNum = this->fields.selectNum;
  this->fields.state = 3;
  if ( (selectNum & 0x80000000) != 0 )
  {
    Item = 0LL;
LABEL_10:
    if ( this->fields.isSelectedSvt )
      goto LABEL_13;
    v9 = (ListViewManager_o *)this->fields.supportServantEquipListViewManager;
    if ( v9 )
    {
      ListViewManager__SetScrollBarValue(v9, 0LL);
      goto LABEL_13;
    }
LABEL_16:
    sub_B170D4();
  }
  v7 = this->fields.supportServantEquipListViewManager;
  if ( !v7 )
    goto LABEL_16;
  Item = SupportServantEquipListViewManager__GetItem(v7, selectNum, 0LL);
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
  __int64 v7; // x2
  TutorialFlag_ImageId_array *v8; // x0
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40FD2AE & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_ImageId___TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&TutorialFlag_TypeInfo, v4);
    byte_40FD2AE = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28023340(110, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (TutorialFlag_ImageId_array *)sub_B17014(TutorialFlag_ImageId___TypeInfo, 2LL, v7);
    if ( !v8 )
      goto LABEL_14;
    max_length = v8->max_length;
    if ( !max_length || (v8->m_Items[1] = 4, max_length == 1) )
    {
      sub_B17100(v8, v8, v9);
      sub_B170A0();
    }
    v8->m_Items[2] = 5;
    if ( !Instance )
LABEL_14:
      sub_B170D4();
    CommonUI__OpenTutorialImageDialog(Instance, v8, 110, 0LL, 0LL, 0LL, 0LL);
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
  SupportServantEquipListViewManager_o *v8; // x0
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40FD2B4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, v6);
    byte_40FD2B4 = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (v8 = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B170D4();
    }
    SupportServantEquipListViewManager__SetMode_31915380(v8, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog(Instance, v14, 0LL);
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
    sub_B16F98(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SupportServantEquipListMenu_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall SupportServantEquipListMenu__Init(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  System_String_o *v6; // x0
  UnityEngine_Behaviour_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v9; // x2

  if ( (byte_40FD2AC & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_11669/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v3);
    byte_40FD2AC = 1;
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
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11669/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, 0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, v6, 0LL),
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton,
        this->fields.state = 0,
        !normalTabButton) )
  {
LABEL_10:
    sub_B170D4();
  }
  enabled = UnityEngine_Behaviour__get_enabled(normalTabButton, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)normalTabButton, enabled, 1, 0LL);
  SupportServantEquipListMenu__setModeTabKind(this, 0, v9);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantEquipListMenu__OnClickCancel(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewManager_o *supportServantEquipListViewManager; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  SupportServantEquipListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_40FD2B2 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SupportServantEquipListMenu_endCancelButton__, v4);
    byte_40FD2B2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      supportServantEquipListViewManager = (ListViewManager_o *)this->fields.supportServantEquipListViewManager;
      if ( !supportServantEquipListViewManager )
        sub_B170D4();
      ListViewManager__SetScrollBarValue(supportServantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v10 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                 SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                 v6,
                                                                 v7,
                                                                 v8,
                                                                 v9);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_endCancelButton__,
      0LL);
    SupportServantEquipListMenu__StatusRequest(this, v10, v11);
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
      sub_B170D4();
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
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewManager_o *v4; // x0
  UISprite_o *scaleChangeTabSprite; // x19
  System_String_o *ScaleButtonSpriteName; // x0

  if ( (byte_40FD2BB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD2BB = 1;
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
          (v4 = this->fields.supportServantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          ScaleButtonSpriteName = SupportServantEquipListViewManager__GetScaleButtonSpriteName(v4, 0LL),
          !scaleChangeTabSprite) )
    {
      sub_B170D4();
    }
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__OnSelectServantEquip(
        SupportServantEquipListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewItem_o *Item; // x20
  int32_t tabModeKind; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  WebViewManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v26; // x22
  char v27; // w20
  int32_t v28; // w8
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0
  SupportServantEquipListViewManager_o *v34; // x20
  struct SupportServantEquipListViewManager_o *v35; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  SupportServantEquipServantItem_o *v38; // x0
  int64_t v39; // x1
  SupportServantEquipListViewManager_o *v40; // x0
  SupportServantEquipListViewManager_CallbackFunc_o *v41; // x21
  ServantStatusDialog_EndDelegate_o *v42; // x23
  SupportServantEquipListViewManager_o *v43; // x0
  struct UserServantEntity_o *v44; // x8
  __int128 v45; // q1
  int64_t v46; // x0
  SupportServantEquipListViewManager_o *v47; // x0
  SupportServantEquipListViewManager_o *v48; // x0
  SupportServantEquipListViewManager_o *v49; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v50; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-50h]

  if ( (byte_40FD2B3 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&Method_SupportServantEquipListMenu_EndShowServantEquip__, v11);
    sub_B16FFC(&Method_SupportServantEquipListMenu_OnSelectServantEquip__, v12);
    byte_40FD2B3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.selectNum = n;
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
      if ( !supportServantEquipListViewManager )
        goto LABEL_85;
      Item = SupportServantEquipListViewManager__GetItem(supportServantEquipListViewManager, n, 0LL);
    }
    switch ( kind )
    {
      case 1:
        SupportServantEquipListMenu__Decide(this, *(const MethodInfo **)&kind);
        return;
      case 2:
        if ( Item )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          this->fields.state = 5;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          userSvtEntity = Item->fields.userSvtEntity;
          v26 = (CommonUI_o *)Instance;
          v27 = Item->fields.isUse || Item->fields.isBase;
          v42 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23,
                                                       v24);
          ServantStatusDialog_EndDelegate___ctor(
            v42,
            (Il2CppObject *)this,
            Method_SupportServantEquipListMenu_EndShowServantEquip__,
            0LL);
          if ( v26 )
          {
            CommonUI__OpenServantEquipStatusDialog_18252416(v26, 0, userSvtEntity, v27, v42, 0LL, 0LL);
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
          this->fields.state = 2;
          v34 = this->fields.supportServantEquipListViewManager;
LABEL_63:
          v41 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                                       v29,
                                                                       v30,
                                                                       v31,
                                                                       v32);
          SupportServantEquipListViewManager_CallbackFunc___ctor(
            v41,
            (Il2CppObject *)this,
            Method_SupportServantEquipListMenu_OnSelectServantEquip__,
            0LL);
          if ( v34 )
          {
            SupportServantEquipListViewManager__SetMode(v34, 2, v41, 0LL);
            return;
          }
        }
LABEL_85:
        sub_B170D4();
      case 3:
        tabModeKind = this->fields.tabModeKind;
        if ( tabModeKind == 2 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          if ( !Item )
            goto LABEL_85;
          Item->fields.isSwapChoice ^= 1u;
        }
        else if ( tabModeKind == 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(11, 0LL);
          if ( !Item )
            goto LABEL_85;
          Item->fields.isSwapLock ^= 1u;
        }
        else
        {
          v35 = this->fields.supportServantEquipListViewManager;
          if ( !v35 || !Item )
            goto LABEL_85;
          servantItemInfo = v35->fields.servantItemInfo;
          servantItemDraw = v35->fields.servantItemDraw;
          if ( Item->fields.isBase )
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            Item->fields.isBase = 0;
            if ( !servantItemInfo )
              goto LABEL_85;
            v38 = servantItemInfo;
            v39 = 0LL;
          }
          else
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            v43 = this->fields.supportServantEquipListViewManager;
            if ( !v43 )
              goto LABEL_85;
            SupportServantEquipListViewManager__resetEquipItemBaseFlag(v43, 0LL);
            v44 = Item->fields.userSvtEntity;
            Item->fields.isBase = 1;
            if ( !v44 )
              goto LABEL_85;
            v45 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
            *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v52.fields.fakeValue = v45;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v51 = v52;
            v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v51, 0LL);
            if ( !servantItemInfo )
              goto LABEL_85;
            v39 = v46;
            v38 = servantItemInfo;
          }
          SupportServantEquipServantItem__SetEquipTarget(v38, v39, 0LL);
          if ( !servantItemDraw )
            goto LABEL_85;
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, servantItemInfo, 0LL);
          v47 = this->fields.supportServantEquipListViewManager;
          if ( !v47 )
            goto LABEL_85;
          SupportServantEquipListViewManager__RefreshEquipped(v47, 0LL);
          v48 = this->fields.supportServantEquipListViewManager;
          if ( !v48 )
            goto LABEL_85;
          SupportServantEquipListViewManager__RefreshListDisp(v48, 0LL);
        }
        this->fields.state = 2;
        v49 = this->fields.supportServantEquipListViewManager;
        v50 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                     SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                                     v16,
                                                                     v17,
                                                                     v18,
                                                                     v19);
        SupportServantEquipListViewManager_CallbackFunc___ctor(
          v50,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_OnSelectServantEquip__,
          0LL);
        if ( !v49 )
          goto LABEL_85;
        SupportServantEquipListViewManager__SetMode(v49, 2, v50, 0LL);
        return;
      case 4:
        v28 = this->fields.tabModeKind;
        if ( v28 == 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(11, 0LL);
          if ( !Item )
            goto LABEL_85;
          Item->fields.isSwapLock ^= 1u;
        }
        else if ( v28 == 2 )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          if ( !Item )
            goto LABEL_85;
          Item->fields.isSwapChoice ^= 1u;
        }
        else
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v40 = this->fields.supportServantEquipListViewManager;
          if ( !v40 )
            goto LABEL_85;
          SupportServantEquipListViewManager__checkEquipChange(v40, Item, 0LL);
        }
        v34 = this->fields.supportServantEquipListViewManager;
        this->fields.state = 2;
        goto LABEL_63;
      default:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        callbackFunc = this->fields.callbackFunc;
        this->fields.state = 3;
        if ( callbackFunc )
          SupportServantEquipListMenu_CallbackFunc__Invoke(callbackFunc, 1, this->fields.classPos, 0LL, 0LL);
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
  int64_t Equip; // x0
  __int64 v20; // x1
  MethodInfo *v21; // x2
  Il2CppClass **v22; // x28
  SupportServantData_o *v23; // x0
  struct SupportServantData_o **v24; // x28
  SupportServantData_o *v25; // t1
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
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v42; // x0
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v44; // x1
  SupportServantEquipListViewManager_o *v45; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_String_o *ScaleButtonSpriteName; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x20

  if ( (byte_40FD2AD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, supportServantDatas);
    sub_B16FFC(&Method_SupportServantEquipListMenu_EndOpen__, v18);
    byte_40FD2AD = 1;
  }
  SupportServantEquipListMenu__Init(this, (const MethodInfo *)supportServantDatas);
  if ( !supportServantDatas )
    goto LABEL_18;
  if ( supportServantDatas->max_length <= nowDeckNum )
    goto LABEL_19;
  v22 = &supportServantDatas->obj.klass + nowDeckNum;
  v25 = (SupportServantData_o *)v22[4];
  v24 = (struct SupportServantData_o **)(v22 + 4);
  v23 = v25;
  if ( !v25 )
    goto LABEL_18;
  Equip = SupportServantData__getEquip(v23, classPos, v21);
  this->fields.isSelectedSvt = Equip > 0;
  if ( supportServantDatas->max_length <= nowDeckNum )
  {
LABEL_19:
    sub_B17100(Equip, v20, v21);
    sub_B170A0();
  }
  v31 = *v24;
  this->fields.supportServantData = *v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v31,
    (System_String_array **)v21,
    v26,
    v27,
    v28,
    v29,
    v30);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    this->fields.classPos = classPos;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      titleInfo = this->fields.titleInfo;
      if ( titleInfo )
      {
        TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 23, 0LL);
        v42 = this->fields.titleInfo;
        if ( v42 )
        {
          TitleInfoControl__setBackBtnSprite_19608808(v42, 1, 0, 0, 0LL);
          supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
          if ( supportServantEquipListViewManager )
          {
            SupportServantEquipListViewManager__CreateList(
              supportServantEquipListViewManager,
              supportServantDatas,
              nowDeckNum,
              classPos,
              eventSetupInfo,
              nowDeckId,
              fixMainDeckIds,
              fixEventDeckIds,
              0LL);
            this->fields.state = 1;
            SupportServantEquipListMenu__SetListManagerStatus(this, v44);
            v45 = this->fields.supportServantEquipListViewManager;
            if ( v45 )
            {
              scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
              ScaleButtonSpriteName = SupportServantEquipListViewManager__GetScaleButtonSpriteName(v45, 0LL);
              if ( scaleChangeTabSprite )
              {
                UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
                v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
                System_Action___ctor(v52, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndOpen__, 0LL);
                BaseMenu__Open((BaseMenu_o *)this, v52, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall SupportServantEquipListMenu__SetListManagerStatus(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x19
  SupportServantEquipListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40FD2B0 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SupportServantEquipListMenu_OnSelectServantEquip__, v6);
    byte_40FD2B0 = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( this->fields.state == 2 )
  {
    v8 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    SupportServantEquipListViewManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_OnSelectServantEquip__,
      0LL);
    if ( supportServantEquipListViewManager )
    {
      SupportServantEquipListViewManager__SetMode(supportServantEquipListViewManager, 2, v8, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  if ( !supportServantEquipListViewManager )
    goto LABEL_8;
  SupportServantEquipListViewManager__SetMode_31915380(this->fields.supportServantEquipListViewManager, 1, 0LL);
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
  SupportServantEquipListViewManager_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v22; // x2
  System_Int64_array *v23; // x1
  bool v24; // w4
  bool v25; // w5
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  NetworkManager_ResultCallbackFunc_o *v37; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40FD2BA & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_SupportServantEquipListMenu_EndStatusSync__, v7);
    byte_40FD2BA = 1;
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
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      v37 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v33,
                                                     v34,
                                                     v35,
                                                     v36);
      NetworkManager_ResultCallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v37,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v22 = unchoiceList;
        v23 = choiceList;
        v25 = 1;
        v24 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B170D4();
    }
  }
  else if ( tabModeKind == 1 )
  {
    v9 = this->fields.supportServantEquipListViewManager;
    if ( !v9 )
      goto LABEL_23;
    if ( SupportServantEquipListViewManager__GetSwapLockList(v9, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v20,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v22 = unlockList;
        v23 = lockList;
        v24 = 1;
        v25 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v23, v22, 0, v24, v25, 0LL);
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

  if ( (byte_40FD2AA & 1) == 0 )
  {
    sub_B16FFC(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, value);
    byte_40FD2AA = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SupportServantEquipListMenu__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__endCancelButton(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewManager_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (v5 = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B170D4();
    }
    SupportServantEquipListViewManager__SetMode_31915380(v5, 3, 0LL);
  }
  SupportServantEquipListMenu__Init(this, (const MethodInfo *)isRequest);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FD2B8 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SupportServantEquipListMenu_EndClickTabChoice__, v4);
    byte_40FD2B8 = 1;
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
        v10 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                     SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                     v5,
                                                                     v6,
                                                                     v7,
                                                                     v8);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabChoice__,
          0LL);
        SupportServantEquipListMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                   SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                   v5,
                                                                   v6,
                                                                   v7,
                                                                   v8);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabChoice__,
        0LL);
      SupportServantEquipListMenu__StatusRequest(this, v12, v13);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 2, v6);
  }
}


void __fastcall SupportServantEquipListMenu__onClickLockTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FD2B7 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SupportServantEquipListMenu_EndClickTabLock__, v4);
    byte_40FD2B7 = 1;
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
        v10 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                     SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                     v5,
                                                                     v6,
                                                                     v7,
                                                                     v8);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabLock__,
          0LL);
        SupportServantEquipListMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                   SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                   v5,
                                                                   v6,
                                                                   v7,
                                                                   v8);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabLock__,
        0LL);
      SupportServantEquipListMenu__StatusRequest(this, v12, v13);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 1, v6);
  }
}


void __fastcall SupportServantEquipListMenu__onClickNormalTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  SupportServantEquipListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FD2B6 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SupportServantEquipListMenu_EndClickTabNormal__, v4);
    byte_40FD2B6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                v5,
                                                                v6,
                                                                v7,
                                                                v8);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_EndClickTabNormal__,
      0LL);
    SupportServantEquipListMenu__StatusRequest(this, v9, v10);
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

  if ( (byte_40FD2AB & 1) == 0 )
  {
    sub_B16FFC(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, value);
    byte_40FD2AB = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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
  UISprite_o *normalTabSprite; // x0
  System_String_o **v18; // x8
  UnityEngine_Behaviour_o *lockTabButton; // x0
  UICommonButton_o *v20; // x20
  bool v21; // w0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v23; // x8
  UnityEngine_Behaviour_o *choiceTabButton; // x0
  UICommonButton_o *v25; // x20
  bool v26; // w0
  UISprite_o *choiceTabSprite; // x0
  System_String_o **v28; // x8
  const MethodInfo *v29; // x1
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x20
  __int64 *v32; // x8
  System_String_o *v33; // x0
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x8

  if ( (byte_40FD2B9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B16FFC(&StringLiteral_11667/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/, v5);
    sub_B16FFC(&StringLiteral_17057/*"button_allchoice_reg"*/, v6);
    sub_B16FFC(&StringLiteral_17060/*"button_alllock_unreg"*/, v7);
    sub_B16FFC(&StringLiteral_11669/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v8);
    sub_B16FFC(&StringLiteral_11668/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/, v9);
    sub_B16FFC(&StringLiteral_17073/*"button_select_reg"*/, v10);
    sub_B16FFC(&StringLiteral_17074/*"button_select_unreg"*/, v11);
    sub_B16FFC(&StringLiteral_17059/*"button_alllock_reg"*/, v12);
    sub_B16FFC(&StringLiteral_17058/*"button_allchoice_unreg"*/, v13);
    byte_40FD2B9 = 1;
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
    normalTabSprite = this->fields.normalTabSprite;
    if ( !normalTabSprite )
      goto LABEL_42;
    v18 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17074/*"button_select_unreg"*/ : &StringLiteral_17073/*"button_select_reg"*/);
    UISprite__set_spriteName(normalTabSprite, *v18, 0LL);
    lockTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_42;
    UnityEngine_Behaviour__set_enabled(lockTabButton, this->fields.tabModeKind != 1, 0LL);
    v20 = this->fields.lockTabButton;
    if ( !v20 )
      goto LABEL_42;
    v21 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(v20, v21, 1, 0LL);
    lockTabSprite = this->fields.lockTabSprite;
    if ( !lockTabSprite )
      goto LABEL_42;
    v23 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17059/*"button_alllock_reg"*/ : &StringLiteral_17060/*"button_alllock_unreg"*/);
    UISprite__set_spriteName(lockTabSprite, *v23, 0LL);
    choiceTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_42;
    UnityEngine_Behaviour__set_enabled(choiceTabButton, this->fields.tabModeKind != 2, 0LL);
    v25 = this->fields.choiceTabButton;
    if ( !v25 )
      goto LABEL_42;
    v26 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(v25, v26, 1, 0LL);
    choiceTabSprite = this->fields.choiceTabSprite;
    if ( !choiceTabSprite )
      goto LABEL_42;
    if ( this->fields.tabModeKind == 2 )
      v28 = (System_String_o **)&StringLiteral_17057/*"button_allchoice_reg"*/;
    else
      v28 = (System_String_o **)&StringLiteral_17058/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName(choiceTabSprite, *v28, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = &StringLiteral_11667/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( tabModeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = &StringLiteral_11668/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( tabModeKind )
      {
LABEL_39:
        SupportServantEquipListMenu__SetListManagerStatus(this, v29);
        supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
        if ( supportServantEquipListViewManager )
        {
          supportServantEquipListViewManager->fields.isCanNotLongPush = this->fields.tabModeKind != 0;
          return;
        }
LABEL_42:
        sub_B170D4();
      }
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = &StringLiteral_11669/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    v33 = LocalizationManager__Get((System_String_o *)*v32, 0LL);
    if ( !explanationLabel )
      goto LABEL_42;
    UILabel__set_text(explanationLabel, v33, 0LL);
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
  if ( (byte_40F778D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&SupportSelectRootComponent_ResultKind_TypeInfo, v11);
    byte_40F778D = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13[2] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v13, callback, object);
}


void __fastcall SupportServantEquipListMenu_CallbackFunc__EndInvoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v14; // x8
  unsigned int v15; // w24
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD); // x0
  SupportServantEquipListMenu_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(unsigned int *, _QWORD, SupportServantEquipListViewItem_o *, __int64); // x25
  char v26; // w25
  char v27; // w0
  unsigned int v28; // w25
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  SupportServantEquipListMenu_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v34 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v35;
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
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, _QWORD, SupportServantEquipListViewItem_o *, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&classPos);
      if ( (sub_B1702C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, (unsigned int)classPos, item, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, (unsigned int)classPos, item, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
      if ( (v26 & 1) != 0 )
      {
        v28 = v34;
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AAFEF8(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD))sub_B170AC(v19, v24);
        (*v21)(v23, v28, (unsigned int)classPos, item, v21);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          v15 = v34;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v14 + 16LL * (int)(*v17 + v12) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AAFEF8(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD))v18)(
            v23,
            v15,
            (unsigned int)classPos,
            item,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD))(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 312))(
            v23,
            v34,
            (unsigned int)classPos,
            item,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, __int64))v25)(
      v23,
      v34,
      (unsigned int)classPos,
      item,
      v24);
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
  if ( (byte_40F778E & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F778E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall SupportServantEquipListMenu_RequestCallbackFunc__EndInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_RequestCallbackFunc__Invoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SupportServantEquipListMenu_RequestCallbackFunc_o **v7; // x25
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
  SupportServantEquipListMenu_RequestCallbackFunc_o *v18; // x8
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
  SupportServantEquipListMenu_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (SupportServantEquipListMenu_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isRequest, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
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
        (*v17)(v19, isRequest, v17);
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
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
    goto LABEL_37;
  }
}