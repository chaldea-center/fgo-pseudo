void __fastcall SupportServantEquipListMenu___ctor(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F8EE0 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F8EE0 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
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
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, SupportServantEquipListViewItem_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      classPos,
      item,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportServantEquipListMenu__Close(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantEquipListMenu__Close_33060936(this, 0LL, v2);
}


void __fastcall SupportServantEquipListMenu__Close_33060936(
        SupportServantEquipListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x20

  if ( (byte_49F8ED3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_SupportServantEquipListMenu_EndClose__, v6);
    byte_49F8ED3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  SupportServantEquipListMenu__SetListManagerStatus(this, v7);
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0LL);
}


void __fastcall SupportServantEquipListMenu__Decide(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F8ED5 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantEquipListMenu_Decide__, v3);
    sub_1B640C8(&Method_SupportServantEquipListMenu_EndDecide__, v4);
    byte_49F8ED5 = 1;
  }
  v5 = Method_SupportServantEquipListMenu_Decide__;
  if ( (*((_BYTE *)Method_SupportServantEquipListMenu_Decide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_Decide__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
  v9 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                              SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                              v7,
                                                              v8);
  SupportServantEquipListMenu_RequestCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportServantEquipListMenu_EndDecide__,
    v10);
  SupportServantEquipListMenu__StatusRequest(this, v9, v11);
}


void __fastcall SupportServantEquipListMenu__EndClickTabChoice(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1B64324(supportServantEquipListViewManager);
    }
    SupportServantEquipListViewManager__SetMode_33061424(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 2, method);
}


void __fastcall SupportServantEquipListMenu__EndClickTabLock(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1B64324(supportServantEquipListViewManager);
    }
    SupportServantEquipListViewManager__SetMode_33061424(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 1, method);
}


void __fastcall SupportServantEquipListMenu__EndClickTabNormal(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1B64324(supportServantEquipListViewManager);
    }
    SupportServantEquipListViewManager__SetMode_33061424(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 0, method);
}


void __fastcall SupportServantEquipListMenu__EndClose(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SupportServantEquipListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall SupportServantEquipListMenu__EndCloseEventServantWarning(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      (unsigned int)this->fields.classPos,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  __int64 v4; // x1
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_49F8ED9 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantEquipListMenu_OnSelectServantEquip__, v4);
    byte_49F8ED9 = 1;
  }
  this->fields.state = 2;
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  v6 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1B64314(
                                                              SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    v7);
  if ( !supportServantEquipListViewManager )
    sub_1B64324(v8);
  supportServantEquipListViewManager->fields.callbackFunc = v6;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (int32_t)v6,
    v9,
    v10);
  SupportServantEquipListViewManager__SetMode_33061424(supportServantEquipListViewManager, 2, v11);
}


void __fastcall SupportServantEquipListMenu__EndDecide(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2
  int32_t selectNum; // w1
  SupportServantEquipListViewItem_o *Item; // x20
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_16;
    SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_16;
    SupportServantEquipListViewManager__SetMode_33061424(supportServantEquipListViewManager, 3, v5);
  }
  selectNum = this->fields.selectNum;
  this->fields.state = 3;
  if ( (selectNum & 0x80000000) != 0 )
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
    sub_1B64324(supportServantEquipListViewManager);
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_16;
  Item = SupportServantEquipListViewManager__GetItem(supportServantEquipListViewManager, selectNum, method);
  if ( !Item )
    goto LABEL_10;
LABEL_13:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, SupportServantEquipListViewItem_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      (unsigned int)this->fields.classPos,
      Item,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportServantEquipListMenu__EndOpen(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  TutorialFlag_ImageId_array *v7; // x0
  il2cpp_array_size_t max_length; // w8

  if ( (byte_49F8ED2 & 1) == 0 )
  {
    sub_1B640C8(&TutorialFlag_ImageId___TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&TutorialFlag_TypeInfo, v4);
    byte_49F8ED2 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37376848(110, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (TutorialFlag_ImageId_array *)sub_1B64170(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v7 )
      goto LABEL_13;
    max_length = v7->max_length;
    if ( !max_length || (v7->m_Items[1] = 4, max_length == 1) )
      sub_1B6432C(v7, v7);
    v7->m_Items[2] = 5;
    if ( !Instance )
LABEL_13:
      sub_1B64324(v7);
    CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v7, 110, 0LL, 0LL, 0LL, 0LL);
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
  const MethodInfo *v8; // x2
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_49F8ED8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, v6);
    byte_49F8ED8 = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B64324(supportServantEquipListViewManager);
    }
    SupportServantEquipListViewManager__SetMode_33061424(supportServantEquipListViewManager, 3, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall SupportServantEquipListMenu__EndStatusSync(
        SupportServantEquipListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_requedstCallback; // x0
  struct SupportServantEquipListMenu_RequestCallbackFunc_o *v5; // x19
  struct SupportServantEquipListMenu_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback;
  v5 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0LL;
    sub_1B6406C(p_requedstCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      1LL,
      *(_QWORD *)&v5->fields.extra_arg);
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

  if ( (byte_49F8ED0 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_11538/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v3);
    byte_49F8ED0 = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  SupportServantEquipListViewManager__DestroyList(supportServantEquipListViewManager, method);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_11538/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/,
                                                                                 0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantEquipListViewManager, 0LL),
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton,
        this->fields.state = 0,
        !normalTabButton) )
  {
LABEL_9:
    sub_1B64324(supportServantEquipListViewManager);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49F8ED6 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantEquipListMenu_OnClickCancel__, v3);
    sub_1B640C8(&Method_SupportServantEquipListMenu_endCancelButton__, v4);
    byte_49F8ED6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      supportServantEquipListViewManager = (ListViewManager_o *)this->fields.supportServantEquipListViewManager;
      if ( !supportServantEquipListViewManager )
        sub_1B64324(0LL);
      ListViewManager__SetScrollBarValue(supportServantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    v6 = Method_SupportServantEquipListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    v10 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                 SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                 v8,
                                                                 v9);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_endCancelButton__,
      v11);
    SupportServantEquipListMenu__StatusRequest(this, v10, v12);
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
      sub_1B64324(0LL);
    SelectItem = SupportServantEquipListViewManager__GetSelectItem(supportServantEquipListViewManager, method);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v7; // x1
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_49F8EDF & 1) == 0 )
  {
    sub_1B640C8(&Method_SupportServantEquipListMenu_OnClickScaleChange__, method);
    byte_49F8EDF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantEquipListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ChangeIconScale(supportServantEquipListViewManager, v5),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                                                         supportServantEquipListViewManager,
                                                                                         v7),
          !scaleChangeTabSprite) )
    {
      sub_1B64324(supportServantEquipListViewManager);
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
  SupportServantEquipListViewItem_o *v12; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x21
  char v21; // w22
  int32_t tabModeKind; // w8
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t v27; // w21
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  SupportServantEquipListViewManager_CallbackFunc_o *v37; // x0
  const MethodInfo *v38; // x3
  intptr_t v39; // w2
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  struct SupportServantEquipListViewManager_o *v42; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  _BOOL4 isBase; // w23
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x2
  SupportServantEquipServantItem_o *v50; // x0
  SupportServantEquipListMenu_o *v51; // x1
  SupportServantEquipListViewManager_CallbackFunc_o *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  const MethodInfo *v55; // x2
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v57; // x23
  struct UserServantEntity_o *v58; // x8
  __int128 v59; // q1
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  struct SupportServantEquipListViewManager_o *v63; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v64; // x21
  const MethodInfo *v65; // x3
  int32_t v66; // w2
  int32_t v67; // w3
  const MethodInfo *v68; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_49F8ED7 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&Method_SupportServantEquipListMenu_EndShowServantEquip__, v10);
    this = (SupportServantEquipListMenu_o *)sub_1B640C8(&Method_SupportServantEquipListMenu_OnSelectServantEquip__, v11);
    byte_49F8ED7 = 1;
  }
  if ( v6->fields.state == 2 )
  {
    v6->fields.selectNum = n;
    if ( (n & 0x80000000) != 0 )
    {
      v12 = 0LL;
    }
    else
    {
      this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
      if ( !this )
        goto LABEL_68;
      this = (SupportServantEquipListMenu_o *)SupportServantEquipListViewManager__GetItem(
                                                (SupportServantEquipListViewManager_o *)this,
                                                n,
                                                *(const MethodInfo **)&n);
      v12 = (SupportServantEquipListViewItem_o *)this;
    }
    switch ( kind )
    {
      case 1:
        SupportServantEquipListMenu__Decide(v6, *(const MethodInfo **)&kind);
        return;
      case 2:
        v16 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
        v17 = (System_Reflection_MethodBase_o *)sub_1B640AC(v16, v16[4]);
        if ( v12 )
        {
          OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
          v6->fields.state = 5;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = v12->fields.isUse || v12->fields.isBase;
          userSvtEntity = v12->fields.userSvtEntity;
          v57 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v18, v19);
          ServantStatusDialog_EndDelegate___ctor(
            v57,
            (Il2CppObject *)v6,
            Method_SupportServantEquipListMenu_EndShowServantEquip__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog_30360316(
              (CommonUI_o *)Instance,
              0,
              userSvtEntity,
              v21,
              v57,
              0LL,
              0LL);
            return;
          }
        }
        else
        {
          OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
          v6->fields.state = 2;
          supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
          v37 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                       SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                                       v35,
                                                                       v36);
          v39 = (int)Method_SupportServantEquipListMenu_OnSelectServantEquip__;
LABEL_50:
          v52 = v37;
          SupportServantEquipListViewManager_CallbackFunc___ctor(v37, (Il2CppObject *)v6, v39, v38);
          if ( supportServantEquipListViewManager )
          {
            supportServantEquipListViewManager->fields.callbackFunc = v52;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
              (int32_t)v52,
              v53,
              v54);
            SupportServantEquipListViewManager__SetMode_33061424(supportServantEquipListViewManager, 2, v55);
            return;
          }
        }
LABEL_68:
        sub_1B64324(this);
      case 3:
        tabModeKind = v6->fields.tabModeKind;
        if ( tabModeKind == 2 )
        {
          v40 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v40 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v41 = (System_Reflection_MethodBase_o *)sub_1B640AC(v40, v40[4]);
          OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
          if ( !v12 )
            goto LABEL_68;
          v12->fields.isSwapChoice ^= 1u;
        }
        else if ( tabModeKind == 1 )
        {
          v23 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v23 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v24 = (System_Reflection_MethodBase_o *)sub_1B640AC(v23, v23[4]);
          OverwriteAssetSoundName__PlaySystemSe(v24, 11, 0LL);
          if ( !v12 )
            goto LABEL_68;
          v12->fields.isSwapLock ^= 1u;
        }
        else
        {
          v42 = v6->fields.supportServantEquipListViewManager;
          if ( !v42 || !v12 )
            goto LABEL_68;
          servantItemInfo = v42->fields.servantItemInfo;
          servantItemDraw = v42->fields.servantItemDraw;
          isBase = v12->fields.isBase;
          v46 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v46 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v47 = (System_Reflection_MethodBase_o *)sub_1B640AC(v46, v46[4]);
          OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0LL);
          if ( isBase )
          {
            v12->fields.isBase = 0;
            if ( !servantItemInfo )
              goto LABEL_68;
            v50 = servantItemInfo;
            v51 = 0LL;
          }
          else
          {
            this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_68;
            SupportServantEquipListViewManager__resetEquipItemBaseFlag(
              (SupportServantEquipListViewManager_o *)this,
              v48);
            v58 = v12->fields.userSvtEntity;
            v12->fields.isBase = 1;
            if ( !v58 )
              goto LABEL_68;
            v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
            *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v70.fields.fakeValue = v59;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v69 = v70;
            this = (SupportServantEquipListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                      &v69,
                                                      0LL);
            if ( !servantItemInfo )
              goto LABEL_68;
            v51 = this;
            v50 = servantItemInfo;
          }
          SupportServantEquipServantItem__SetEquipTarget(v50, (int64_t)v51, v49);
          if ( !servantItemDraw )
            goto LABEL_68;
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, servantItemInfo, v60);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_68;
          SupportServantEquipListViewManager__RefreshEquipped((SupportServantEquipListViewManager_o *)this, v61);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_68;
          SupportServantEquipListViewManager__RefreshListDisp((SupportServantEquipListViewManager_o *)this, v62);
        }
        v6->fields.state = 2;
        v63 = v6->fields.supportServantEquipListViewManager;
        v64 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                     SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                                     v25,
                                                                     v26);
        SupportServantEquipListViewManager_CallbackFunc___ctor(
          v64,
          (Il2CppObject *)v6,
          (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
          v65);
        if ( !v63 )
          goto LABEL_68;
        v63->fields.callbackFunc = v64;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v63->fields.callbackFunc, (int32_t)v64, v66, v67);
        SupportServantEquipListViewManager__SetMode_33061424(v63, 2, v68);
        return;
      case 4:
        v27 = v6->fields.tabModeKind;
        if ( v27 == 1 )
        {
          v28 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v28 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v29 = (System_Reflection_MethodBase_o *)sub_1B640AC(v28, v28[4]);
          OverwriteAssetSoundName__PlaySystemSe(v29, 11, 0LL);
          if ( !v12 )
            goto LABEL_68;
          v12->fields.isSwapLock ^= 1u;
        }
        else
        {
          v32 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v32 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v33 = (System_Reflection_MethodBase_o *)sub_1B640AC(v32, v32[4]);
          OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
          if ( v27 == 2 )
          {
            if ( !v12 )
              goto LABEL_68;
            v12->fields.isSwapChoice ^= 1u;
          }
          else
          {
            this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_68;
            SupportServantEquipListViewManager__checkEquipChange((SupportServantEquipListViewManager_o *)this, v12, v31);
          }
        }
        v6->fields.state = 2;
        supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
        v37 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                     SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                                     v30,
                                                                     v31);
        v39 = (int)Method_SupportServantEquipListMenu_OnSelectServantEquip__;
        goto LABEL_50;
      default:
        v13 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
        v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 1, 0LL);
        callbackFunc = v6->fields.callbackFunc;
        v6->fields.state = 3;
        if ( callbackFunc )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            1LL,
            (unsigned int)v6->fields.classPos,
            0LL,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  int32_t v25; // w2
  int32_t v26; // w3
  struct SupportServantData_o *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t state; // w8
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x20
  const MethodInfo *v38; // [xsp+0h] [xbp-70h]

  if ( (byte_49F8ED1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, supportServantDatas);
    sub_1B640C8(&Method_SupportServantEquipListMenu_EndOpen__, v18);
    byte_49F8ED1 = 1;
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
LABEL_19:
    sub_1B6432C(Equip, v20);
  v27 = *v23;
  this->fields.supportServantData = *v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, (int32_t)v27, v25, v26);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v28, v29);
    this->fields.state = 2;
    SupportServantEquipListMenu__SetListManagerStatus(this, v31);
    return;
  }
  if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v28, v29);
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
          TitleInfoControl__setBackBtnSprite_36875508((TitleInfoControl_o *)Equip, 1, 0, 0, 0LL);
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
              v38);
            this->fields.state = 1;
            SupportServantEquipListMenu__SetListManagerStatus(this, v32);
            Equip = (SupportServantData_o *)this->fields.supportServantEquipListViewManager;
            if ( Equip )
            {
              scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
              Equip = (SupportServantData_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                (SupportServantEquipListViewManager_o *)Equip,
                                                v33);
              if ( scaleChangeTabSprite )
              {
                UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Equip, 0LL);
                v37 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v35, v36);
                System_Action___ctor(v37, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndOpen__, 0LL);
                BaseMenu__Open((BaseMenu_o *)this, v37, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_1B64324(Equip);
  }
}


void __fastcall SupportServantEquipListMenu__SetListManagerStatus(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportServantEquipListMenu_o *v3; // x20
  __int64 v4; // x1
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x19
  SupportServantEquipListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1

  v3 = this;
  if ( (byte_49F8ED4 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, method);
    this = (SupportServantEquipListMenu_o *)sub_1B640C8(&Method_SupportServantEquipListMenu_OnSelectServantEquip__, v4);
    byte_49F8ED4 = 1;
  }
  supportServantEquipListViewManager = v3->fields.supportServantEquipListViewManager;
  if ( v3->fields.state != 2 )
  {
    if ( supportServantEquipListViewManager )
    {
      v10 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_1B64324(this);
  }
  v6 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1B64314(
                                                              SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)v3,
    (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    v7);
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  supportServantEquipListViewManager->fields.callbackFunc = v6;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (int32_t)v6,
    v8,
    v9);
  v10 = 2;
LABEL_8:
  SupportServantEquipListViewManager__SetMode_33061424(supportServantEquipListViewManager, v10, v2);
}


void __fastcall SupportServantEquipListMenu__StatusRequest(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t tabModeKind; // w8
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w4
  bool v19; // w5
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *v25; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49F8EDE & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B640C8(&Method_SupportServantEquipListMenu_EndStatusSync__, v8);
    byte_49F8EDE = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v25 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_21;
    if ( SupportServantEquipListViewManager__GetSwapChoiceList(
           supportServantEquipListViewManager,
           &choiceList,
           &v25,
           v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v20, v21);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v22, v23);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                     v24,
                                                                                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v17 = v25;
        v16 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B64324(supportServantEquipListViewManager);
    }
  }
  else if ( tabModeKind == 1 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_21;
    if ( SupportServantEquipListViewManager__GetSwapLockList(
           supportServantEquipListViewManager,
           &lockList,
           &unlockList,
           v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v11, v12);
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                     v15,
                                                                                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v17 = unlockList;
        v16 = lockList;
        v18 = 1;
        v19 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantEquipListViewManager,
          v16,
          v17,
          0,
          v18,
          v19,
          0LL);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
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

  if ( (byte_49F8ECE & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, value);
    byte_49F8ECE = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  SupportServantEquipListMenu__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__endCancelButton(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B64324(supportServantEquipListViewManager);
    }
    SupportServantEquipListViewManager__SetMode_33061424(supportServantEquipListViewManager, 3, v5);
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
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      (unsigned int)this->fields.classPos,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportServantEquipListMenu__onClickChoiceTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F8EDC & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantEquipListMenu_EndClickTabChoice__, v3);
    sub_1B640C8(&Method_SupportServantEquipListMenu_onClickChoiceTabButton__, v4);
    byte_49F8EDC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantEquipListMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_onClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v10 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                     SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                     v7,
                                                                     v8);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabChoice__,
          v11);
        SupportServantEquipListMenu__StatusRequest(this, v10, v12);
        return;
      }
      v13 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                   SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                   v7,
                                                                   v8);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabChoice__,
        v14);
      SupportServantEquipListMenu__StatusRequest(this, v13, v15);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 2, v8);
  }
}


void __fastcall SupportServantEquipListMenu__onClickLockTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F8EDB & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantEquipListMenu_EndClickTabLock__, v3);
    sub_1B640C8(&Method_SupportServantEquipListMenu_onClickLockTabButton__, v4);
    byte_49F8EDB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantEquipListMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_onClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v10 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                     SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                     v7,
                                                                     v8);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabLock__,
          v11);
        SupportServantEquipListMenu__StatusRequest(this, v10, v12);
        return;
      }
      v13 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                   SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                   v7,
                                                                   v8);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabLock__,
        v14);
      SupportServantEquipListMenu__StatusRequest(this, v13, v15);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 1, v8);
  }
}


void __fastcall SupportServantEquipListMenu__onClickNormalTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F8EDA & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantEquipListMenu_EndClickTabNormal__, v3);
    sub_1B640C8(&Method_SupportServantEquipListMenu_onClickNormalTabButton__, v4);
    byte_49F8EDA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantEquipListMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListMenu_onClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_EndClickTabNormal__,
      v10);
    SupportServantEquipListMenu__StatusRequest(this, v9, v11);
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

  if ( (byte_49F8ECF & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, value);
    byte_49F8ECF = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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
  __int64 *v23; // x8
  const MethodInfo *v24; // x1
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x20
  __int64 *v27; // x8
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x8

  if ( (byte_49F8EDD & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B640C8(&StringLiteral_11536/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/, v5);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v6);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v7);
    sub_1B640C8(&StringLiteral_11538/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v8);
    sub_1B640C8(&StringLiteral_11537/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/, v9);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v10);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v11);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v12);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v13);
    byte_49F8EDD = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    v15 = this->fields.normalTabButton;
    if ( !v15 )
      goto LABEL_39;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
    UICommonButton__SetColliderEnable(v15, enabled, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v17 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17594/*"button_select_unreg"*/ : &StringLiteral_17593/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v17, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_39;
    v19 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v19, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v20 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17579/*"button_alllock_reg"*/ : &StringLiteral_17580/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v20, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_39;
    v22 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v22, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    if ( this->fields.tabModeKind == 2 )
      v23 = &StringLiteral_17577/*"button_allchoice_reg"*/;
    else
      v23 = &StringLiteral_17578/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v23, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_11536/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( tabModeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_11537/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( tabModeKind )
      {
LABEL_36:
        SupportServantEquipListMenu__SetListManagerStatus(this, v24);
        supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
        if ( supportServantEquipListViewManager )
        {
          supportServantEquipListViewManager->fields.isCanNotLongPush = this->fields.tabModeKind != 0;
          return;
        }
LABEL_39:
        sub_1B64324(normalTabButton);
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_11538/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
    if ( !explanationLabel )
      goto LABEL_39;
    UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0LL);
    goto LABEL_36;
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A8B8C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A8B2C;
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
  _QWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v14; // [xsp+10h] [xbp-60h]
  int32_t v15; // [xsp+28h] [xbp-48h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-44h] BYREF

  v15 = classPos;
  v16 = result;
  if ( (byte_49F8EE1 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&SupportSelectRootComponent_ResultKind_TypeInfo, v11);
    byte_49F8EE1 = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v16);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  *(_QWORD *)&v14 = item;
  return (System_IAsyncResult_o *)sub_1B6407C(this, v13, callback, object);
}


void __fastcall SupportServantEquipListMenu_CallbackFunc__EndInvoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall SupportServantEquipListMenu_CallbackFunc__Invoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, SupportServantEquipListViewItem_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    classPos,
    item,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A8BEC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A8BA4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantEquipListMenu_RequestCallbackFunc__BeginInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_49F8EE2 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49F8EE2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall SupportServantEquipListMenu_RequestCallbackFunc__EndInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall SupportServantEquipListMenu_RequestCallbackFunc__Invoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}