void __fastcall SupportServantEquipListMenu___ctor(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12BB4 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B12BB4 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
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

  SupportServantEquipListMenu__Close_34002200(this, 0LL, v2);
}


void __fastcall SupportServantEquipListMenu__Close_34002200(
        SupportServantEquipListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x20

  if ( (byte_4B12BA7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_EndClose__, v10, v11);
    byte_4B12BA7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  SupportServantEquipListMenu__SetListManagerStatus(this, v12);
  v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
}


void __fastcall SupportServantEquipListMenu__Decide(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  SupportServantEquipListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B12BA9 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_Decide__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_EndDecide__, v6, v7);
    byte_4B12BA9 = 1;
  }
  v8 = Method_SupportServantEquipListMenu_Decide__;
  if ( (*((_BYTE *)Method_SupportServantEquipListMenu_Decide__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_Decide__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
  v13 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                               SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                               v10,
                                                               v11,
                                                               v12);
  SupportServantEquipListMenu_RequestCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportServantEquipListMenu_EndDecide__,
    v14);
  SupportServantEquipListMenu__StatusRequest(this, v13, v15);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_34002688(supportServantEquipListViewManager, 3, v5);
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
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1BCAA3C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_34002688(supportServantEquipListViewManager, 3, v5);
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
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1BCAA3C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_34002688(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 0, method);
}


void __fastcall SupportServantEquipListMenu__EndClose(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SupportServantEquipListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4B12BAD & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_OnSelectServantEquip__, v5, v6);
    byte_4B12BAD = 1;
  }
  this->fields.state = 2;
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  v8 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    v9);
  if ( !supportServantEquipListViewManager )
    sub_1BCAA3C(v10, v11);
  supportServantEquipListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (int64_t)v8,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SupportServantEquipListViewManager__SetMode_34002688(supportServantEquipListViewManager, 2, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndDecide(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2
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
    SupportServantEquipListViewManager__SetMode_34002688(supportServantEquipListViewManager, 3, v5);
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
    sub_1BCAA3C(supportServantEquipListViewManager, isRequest);
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_16;
  Item = SupportServantEquipListViewManager__GetItem(supportServantEquipListViewManager, isRequest, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x20
  TutorialFlag_ImageId_array *v10; // x0
  TutorialFlag_ImageId_array *v11; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B12BA6 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_ImageId___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v6, v7);
    byte_4B12BA6 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( !TutorialFlag__Get_38402052(110, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (TutorialFlag_ImageId_array *)sub_1BCA888(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v10 )
      goto LABEL_13;
    max_length = v10->max_length;
    v11 = v10;
    if ( !max_length || (v10->m_Items[1] = 4, max_length == 1) )
      sub_1BCAA44(v10, v10);
    v10->m_Items[2] = 5;
    if ( !Instance )
LABEL_13:
      sub_1BCAA3C(v10, v11);
    CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v10, 110, 0LL, 0LL, 0LL, 0LL);
  }
  this->fields.state = 2;
  SupportServantEquipListMenu__SetListManagerStatus(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndShowServantEquip(
        SupportServantEquipListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21

  if ( (byte_4B12BAC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, v7, v8);
    byte_4B12BAC = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1BCAA3C(supportServantEquipListViewManager, isDecide);
    }
    SupportServantEquipListViewManager__SetMode_34002688(supportServantEquipListViewManager, 3, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall SupportServantEquipListMenu__EndStatusSync(
        SupportServantEquipListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_requedstCallback; // x0
  struct SupportServantEquipListMenu_RequestCallbackFunc_o *v9; // x19
  struct SupportServantEquipListMenu_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (PartyOrganizationUtility_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0LL;
    sub_1BCA784(p_requedstCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      1LL,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall SupportServantEquipListMenu__Init(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  __int64 v7; // x1
  UILabel_o *explanationLabel; // x20
  UnityEngine_Behaviour_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v11; // x2

  if ( (byte_4B12BA4 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_11731/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v4, v5);
    byte_4B12BA4 = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  SupportServantEquipListViewManager__DestroyList(supportServantEquipListViewManager, method);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_11731/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/,
                                                                                 0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantEquipListViewManager, 0LL),
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton,
        this->fields.state = 0,
        !normalTabButton) )
  {
LABEL_9:
    sub_1BCAA3C(supportServantEquipListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled(normalTabButton, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)normalTabButton, enabled, 1, 0LL);
  SupportServantEquipListMenu__setModeTabKind(this, 0, v11);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantEquipListMenu__OnClickCancel(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewManager_o *supportServantEquipListViewManager; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  SupportServantEquipListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B12BAA & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_endCancelButton__, v6, v7);
    byte_4B12BAA = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      supportServantEquipListViewManager = (ListViewManager_o *)this->fields.supportServantEquipListViewManager;
      if ( !supportServantEquipListViewManager )
        sub_1BCAA3C(0LL, method);
      ListViewManager__SetScrollBarValue(supportServantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    v9 = Method_SupportServantEquipListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_OnClickCancel__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
    v14 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                 SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                 v11,
                                                                 v12,
                                                                 v13);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_endCancelButton__,
      v15);
    SupportServantEquipListMenu__StatusRequest(this, v14, v16);
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
      sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4B12BB3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_OnClickScaleChange__, method, v2);
    byte_4B12BB3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_SupportServantEquipListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ChangeIconScale(supportServantEquipListViewManager, v6),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                                                         supportServantEquipListViewManager,
                                                                                         v6),
          !scaleChangeTabSprite) )
    {
      sub_1BCAA3C(supportServantEquipListViewManager, v6);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  SupportServantEquipListViewItem_o *v17; // x20
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  Il2CppObject *Instance; // x21
  char v27; // w22
  int32_t tabModeKind; // w8
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  int32_t v33; // w21
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x2
  __int64 v37; // x3
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  SupportServantEquipListViewManager_CallbackFunc_o *v44; // x0
  const MethodInfo *v45; // x3
  intptr_t v46; // w2
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  struct SupportServantEquipListViewManager_o *v49; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  _BOOL4 isBase; // w23
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  const MethodInfo *v55; // x2
  SupportServantEquipServantItem_o *v56; // x0
  SupportServantEquipListMenu_o *v57; // x1
  int64_t v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // x2
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v67; // x23
  struct UserServantEntity_o *v68; // x8
  __int128 v69; // q1
  const MethodInfo *v70; // x2
  struct SupportServantEquipListViewManager_o *v71; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v72; // x21
  const MethodInfo *v73; // x3
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  const MethodInfo *v80; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_4B12BAB & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_EndShowServantEquip__, v13, v14);
    this = (SupportServantEquipListMenu_o *)sub_1BCA7E0(
                                              &Method_SupportServantEquipListMenu_OnSelectServantEquip__,
                                              v15,
                                              v16);
    byte_4B12BAB = 1;
  }
  if ( v6->fields.state == 2 )
  {
    v6->fields.selectNum = n;
    if ( (n & 0x80000000) != 0 )
    {
      v17 = 0LL;
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
      v17 = (SupportServantEquipListViewItem_o *)this;
    }
    switch ( kind )
    {
      case 1:
        SupportServantEquipListMenu__Decide(v6, *(const MethodInfo **)&kind);
        return;
      case 2:
        v21 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v21 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
        v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
        if ( v17 )
        {
          OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
          v6->fields.state = 5;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v27 = v17->fields.isUse || v17->fields.isBase;
          userSvtEntity = v17->fields.userSvtEntity;
          v67 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
          ServantStatusDialog_EndDelegate___ctor(
            v67,
            (Il2CppObject *)v6,
            Method_SupportServantEquipListMenu_EndShowServantEquip__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog_30781580(
              (CommonUI_o *)Instance,
              0,
              userSvtEntity,
              v27,
              v67,
              0LL,
              0LL);
            return;
          }
        }
        else
        {
          OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
          v6->fields.state = 2;
          supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
          v44 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                                       v41,
                                                                       v42,
                                                                       v43);
          v46 = (int)Method_SupportServantEquipListMenu_OnSelectServantEquip__;
LABEL_50:
          v58 = (int64_t)v44;
          SupportServantEquipListViewManager_CallbackFunc___ctor(v44, (Il2CppObject *)v6, v46, v45);
          if ( supportServantEquipListViewManager )
          {
            supportServantEquipListViewManager->fields.callbackFunc = (struct SupportServantEquipListViewManager_CallbackFunc_o *)v58;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&supportServantEquipListViewManager->fields.callbackFunc,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64);
            SupportServantEquipListViewManager__SetMode_34002688(supportServantEquipListViewManager, 2, v65);
            return;
          }
        }
LABEL_68:
        sub_1BCAA3C(this, *(_QWORD *)&kind);
      case 3:
        tabModeKind = v6->fields.tabModeKind;
        if ( tabModeKind == 2 )
        {
          v47 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v47 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v48 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v47, v47[4]);
          OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0LL);
          if ( !v17 )
            goto LABEL_68;
          v17->fields.isSwapChoice ^= 1u;
        }
        else if ( tabModeKind == 1 )
        {
          v29 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v29 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v30 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v29, v29[4]);
          OverwriteAssetSoundName__PlaySystemSe(v30, 11, 0LL);
          if ( !v17 )
            goto LABEL_68;
          v17->fields.isSwapLock ^= 1u;
        }
        else
        {
          v49 = v6->fields.supportServantEquipListViewManager;
          if ( !v49 || !v17 )
            goto LABEL_68;
          servantItemInfo = v49->fields.servantItemInfo;
          servantItemDraw = v49->fields.servantItemDraw;
          isBase = v17->fields.isBase;
          v53 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v53 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v54 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v53, v53[4]);
          OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0LL);
          if ( isBase )
          {
            v17->fields.isBase = 0;
            if ( !servantItemInfo )
              goto LABEL_68;
            v56 = servantItemInfo;
            v57 = 0LL;
          }
          else
          {
            this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_68;
            SupportServantEquipListViewManager__resetEquipItemBaseFlag(
              (SupportServantEquipListViewManager_o *)this,
              *(const MethodInfo **)&kind);
            v68 = v17->fields.userSvtEntity;
            v17->fields.isBase = 1;
            if ( !v68 )
              goto LABEL_68;
            v69 = *(_OWORD *)&v68->fields.id.fields.fakeValue;
            *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v68->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v82.fields.fakeValue = v69;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
            v81 = v82;
            this = (SupportServantEquipListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                      &v81,
                                                      0LL);
            if ( !servantItemInfo )
              goto LABEL_68;
            v57 = this;
            v56 = servantItemInfo;
          }
          SupportServantEquipServantItem__SetEquipTarget(v56, (int64_t)v57, v55);
          if ( !servantItemDraw )
            goto LABEL_68;
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, servantItemInfo, v70);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_68;
          SupportServantEquipListViewManager__RefreshEquipped(
            (SupportServantEquipListViewManager_o *)this,
            *(const MethodInfo **)&kind);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_68;
          SupportServantEquipListViewManager__RefreshListDisp(
            (SupportServantEquipListViewManager_o *)this,
            *(const MethodInfo **)&kind);
        }
        v6->fields.state = 2;
        v71 = v6->fields.supportServantEquipListViewManager;
        v72 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                     SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                                     *(_QWORD *)&kind,
                                                                     v31,
                                                                     v32);
        SupportServantEquipListViewManager_CallbackFunc___ctor(
          v72,
          (Il2CppObject *)v6,
          (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
          v73);
        if ( !v71 )
          goto LABEL_68;
        v71->fields.callbackFunc = v72;
        sub_1BCA784((PartyOrganizationUtility_o *)&v71->fields.callbackFunc, (int64_t)v72, v74, v75, v76, v77, v78, v79);
        SupportServantEquipListViewManager__SetMode_34002688(v71, 2, v80);
        return;
      case 4:
        v33 = v6->fields.tabModeKind;
        if ( v33 == 1 )
        {
          v34 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v34 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v35 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v34, v34[4]);
          OverwriteAssetSoundName__PlaySystemSe(v35, 11, 0LL);
          if ( !v17 )
            goto LABEL_68;
          v17->fields.isSwapLock ^= 1u;
        }
        else
        {
          v38 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v38 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v39 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v38, v38[4]);
          OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0LL);
          if ( v33 == 2 )
          {
            if ( !v17 )
              goto LABEL_68;
            v17->fields.isSwapChoice ^= 1u;
          }
          else
          {
            this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_68;
            SupportServantEquipListViewManager__checkEquipChange((SupportServantEquipListViewManager_o *)this, v17, v36);
          }
        }
        v6->fields.state = 2;
        supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
        v44 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                     SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                                     *(_QWORD *)&kind,
                                                                     v36,
                                                                     v37);
        v46 = (int)Method_SupportServantEquipListMenu_OnSelectServantEquip__;
        goto LABEL_50;
      default:
        v18 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v18 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
        v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
        OverwriteAssetSoundName__PlaySystemSe(v19, 1, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v19; // x2
  SupportServantData_o *Equip; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  Il2CppClass **v23; // x28
  struct SupportServantData_o **v24; // x28
  SupportServantData_o *v25; // t1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct SupportServantData_o *v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int32_t state; // w8
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x20
  const MethodInfo *v47; // [xsp+0h] [xbp-70h]

  if ( (byte_4B12BA5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, supportServantDatas, *(_QWORD *)&nowDeckNum);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_EndOpen__, v18, v19);
    byte_4B12BA5 = 1;
  }
  SupportServantEquipListMenu__Init(this, (const MethodInfo *)supportServantDatas);
  if ( !supportServantDatas )
    goto LABEL_18;
  if ( supportServantDatas->max_length <= nowDeckNum )
    goto LABEL_19;
  v23 = &supportServantDatas->obj.klass + nowDeckNum;
  v25 = (SupportServantData_o *)v23[4];
  v24 = (struct SupportServantData_o **)(v23 + 4);
  Equip = v25;
  if ( !v25 )
    goto LABEL_18;
  Equip = (SupportServantData_o *)SupportServantData__getEquip(Equip, classPos, v22);
  this->fields.isSelectedSvt = (__int64)Equip > 0;
  if ( supportServantDatas->max_length <= nowDeckNum )
LABEL_19:
    sub_1BCAA44(Equip, v21);
  v32 = *v24;
  this->fields.supportServantData = *v24;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.supportServantData,
    (int64_t)v32,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    this->fields.state = 2;
    SupportServantEquipListMenu__SetListManagerStatus(this, v40);
    return;
  }
  if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
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
          TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)Equip, 1, 0, 0, 0LL);
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
              v47);
            this->fields.state = 1;
            SupportServantEquipListMenu__SetListManagerStatus(this, v41);
            Equip = (SupportServantData_o *)this->fields.supportServantEquipListViewManager;
            if ( Equip )
            {
              scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
              Equip = (SupportServantData_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                (SupportServantEquipListViewManager_o *)Equip,
                                                v21);
              if ( scaleChangeTabSprite )
              {
                UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Equip, 0LL);
                v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
                System_Action___ctor(v46, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndOpen__, 0LL);
                BaseMenu__Open((BaseMenu_o *)this, v46, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(Equip, v21);
  }
}


void __fastcall SupportServantEquipListMenu__SetListManagerStatus(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  SupportServantEquipListMenu_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x19
  SupportServantEquipListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int32_t v16; // w1

  v4 = this;
  if ( (byte_4B12BA8 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, method, v2);
    this = (SupportServantEquipListMenu_o *)sub_1BCA7E0(
                                              &Method_SupportServantEquipListMenu_OnSelectServantEquip__,
                                              v5,
                                              v6);
    byte_4B12BA8 = 1;
  }
  supportServantEquipListViewManager = v4->fields.supportServantEquipListViewManager;
  if ( v4->fields.state != 2 )
  {
    if ( supportServantEquipListViewManager )
    {
      v16 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_1BCAA3C(this, method);
  }
  v8 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              SupportServantEquipListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)v4,
    (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    v9);
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  supportServantEquipListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (int64_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = 2;
LABEL_8:
  SupportServantEquipListViewManager__SetMode_34002688(supportServantEquipListViewManager, v16, v2);
}


void __fastcall SupportServantEquipListMenu__StatusRequest(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t tabModeKind; // w8
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  __int64 v24; // x1
  System_Int64_array *v25; // x1
  System_Int64_array *v26; // x2
  bool v27; // w4
  bool v28; // w5
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  NetworkManager_ResultCallbackFunc_o *v38; // x20
  __int64 v39; // x1
  System_Int64_array *v40; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B12BB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_EndStatusSync__, v10, v11);
    byte_4B12BB2 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v40 = 0LL;
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
           &v40,
           v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v38 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v35,
                                                     v36,
                                                     v37);
      NetworkManager_ResultCallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                     v38,
                                                                                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v26 = v40;
        v25 = choiceList;
        v28 = 1;
        v27 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BCAA3C(supportServantEquipListViewManager, callback);
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
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                     v23,
                                                                                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v26 = unlockList;
        v25 = lockList;
        v27 = 1;
        v28 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantEquipListViewManager,
          v25,
          v26,
          0,
          v27,
          v28,
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

  if ( (byte_4B12BA2 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B12BA2 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
      sub_1BCAA3C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_34002688(supportServantEquipListViewManager, 3, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B12BB0 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_EndClickTabChoice__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_onClickChoiceTabButton__, v6, v7);
    byte_4B12BB0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_SupportServantEquipListMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_onClickChoiceTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v14 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                     SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                     v10,
                                                                     v11,
                                                                     v12);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabChoice__,
          v15);
        SupportServantEquipListMenu__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                   SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                   v10,
                                                                   v11,
                                                                   v12);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabChoice__,
        v18);
      SupportServantEquipListMenu__StatusRequest(this, v17, v19);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 2, v11);
  }
}


void __fastcall SupportServantEquipListMenu__onClickLockTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B12BAF & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_EndClickTabLock__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_onClickLockTabButton__, v6, v7);
    byte_4B12BAF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_SupportServantEquipListMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_onClickLockTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v14 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                     SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                     v10,
                                                                     v11,
                                                                     v12);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabLock__,
          v15);
        SupportServantEquipListMenu__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                   SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                   v10,
                                                                   v11,
                                                                   v12);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabLock__,
        v18);
      SupportServantEquipListMenu__StatusRequest(this, v17, v19);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 1, v11);
  }
}


void __fastcall SupportServantEquipListMenu__onClickNormalTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  SupportServantEquipListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B12BAE & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_EndClickTabNormal__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantEquipListMenu_onClickNormalTabButton__, v6, v7);
    byte_4B12BAE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_SupportServantEquipListMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SupportServantEquipListMenu_onClickNormalTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                 SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo,
                                                                 v10,
                                                                 v11,
                                                                 v12);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_EndClickTabNormal__,
      v14);
    SupportServantEquipListMenu__StatusRequest(this, v13, v15);
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

  if ( (byte_4B12BA3 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B12BA3 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  SupportServantEquipListMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__setModeTabKind(
        SupportServantEquipListMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v24; // x20
  bool enabled; // w0
  System_String_o **v26; // x8
  UICommonButton_o *lockTabButton; // x20
  bool v28; // w0
  System_String_o **v29; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v31; // w0
  __int64 *v32; // x8
  const MethodInfo *v33; // x1
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x20
  __int64 *v36; // x8
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x8

  if ( (byte_4B12BB1 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&StringLiteral_11729/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11731/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11730/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v21, v22);
    byte_4B12BB1 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    v24 = this->fields.normalTabButton;
    if ( !v24 )
      goto LABEL_39;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
    UICommonButton__SetColliderEnable(v24, enabled, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v26 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17842/*"button_select_unreg"*/ : &StringLiteral_17841/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v26, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_39;
    v28 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v28, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v29 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17827/*"button_alllock_reg"*/ : &StringLiteral_17828/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v29, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_39;
    v31 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v31, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    if ( this->fields.tabModeKind == 2 )
      v32 = &StringLiteral_17825/*"button_allchoice_reg"*/;
    else
      v32 = &StringLiteral_17826/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v32, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      v36 = &StringLiteral_11729/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( tabModeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      v36 = &StringLiteral_11730/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( tabModeKind )
      {
LABEL_36:
        SupportServantEquipListMenu__SetListManagerStatus(this, v33);
        supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
        if ( supportServantEquipListViewManager )
        {
          supportServantEquipListViewManager->fields.isCanNotLongPush = this->fields.tabModeKind != 0;
          return;
        }
LABEL_39:
        sub_1BCAA3C(normalTabButton, *(_QWORD *)&modeKind);
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      v36 = &StringLiteral_11731/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v36, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A098E8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09888;
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
  __int64 v12; // x2
  _QWORD v14[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v15; // [xsp+10h] [xbp-60h]
  int32_t v16; // [xsp+28h] [xbp-48h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-44h] BYREF

  v16 = classPos;
  v17 = result;
  if ( (byte_4B12BB5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&classPos);
    sub_1BCA7E0(&SupportSelectRootComponent_ResultKind_TypeInfo, v11, v12);
    byte_4B12BB5 = 1;
  }
  v15 = 0u;
  v14[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  *(_QWORD *)&v15 = item;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v14, callback, object);
}


void __fastcall SupportServantEquipListMenu_CallbackFunc__EndInvoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A09948;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09900;
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
  if ( (byte_4B12BB6 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B12BB6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall SupportServantEquipListMenu_RequestCallbackFunc__EndInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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