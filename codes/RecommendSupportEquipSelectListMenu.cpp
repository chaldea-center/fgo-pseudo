void __fastcall RecommendSupportEquipSelectListMenu___ctor(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57375 & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A57375 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportEquipSelectListMenu__Awake(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportEquipSelectListMenu__Close(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportEquipSelectListMenu__Close_32428216(this, 0LL, v2);
}


void __fastcall RecommendSupportEquipSelectListMenu__Close_32428216(
        RecommendSupportEquipSelectListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A57367 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_EndClose__);
    byte_4A57367 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v6);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_RecommendSupportEquipSelectListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndCancelButton(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0

  if ( (byte_4A5736B & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A5736B = 1;
  }
  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_10:
      sub_1B8880C(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_32446448(supportServantEquipListViewManager, 3, 0LL);
  }
  RecommendSupportEquipSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_10;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantEquipListViewManager, 0, 0LL);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)this,
                                                                                         0LL);
  if ( !supportServantEquipListViewManager )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantEquipListViewManager, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndClickTabChoice(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1B8880C(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_32446448(supportServantEquipListViewManager, 3, 0LL);
  }
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndClickTabLock(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1B8880C(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_32446448(supportServantEquipListViewManager, 3, 0LL);
  }
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndClickTabNormal(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1B8880C(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_32446448(supportServantEquipListViewManager, 3, 0LL);
  }
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 0, method);
}


void __fastcall RecommendSupportEquipSelectListMenu__EndClose(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecommendSupportEquipSelectListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__EndCloseShowServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5736E & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
    byte_4A5736E = 1;
  }
  this->fields.state = 2;
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  v4 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1B887FC(RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
    0LL);
  if ( !supportServantEquipListViewManager )
    sub_1B8880C(v5, v6);
  RecommendSupportEquipSelectListViewManager__SetMode(supportServantEquipListViewManager, 2, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndDecide(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  bool v3; // w20
  int64_t supportServantEquipListViewManager; // x0
  RecommendSupportEquipSelectListViewItem_o *Item; // x20
  RecommendSupportData_o *v7; // x19
  const MethodInfo *v8; // x2
  int32_t v9; // w21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v11; // q1
  struct UserServantEntity_o *v12; // x8
  int64_t v13; // x20
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w3
  const MethodInfo *v17; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v3 = isRequest;
  if ( (byte_4A57369 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A57369 = 1;
  }
  if ( v3 )
  {
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_30;
    RecommendSupportEquipSelectListViewManager__ModifyList(
      (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
      0,
      0LL);
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_30;
    RecommendSupportEquipSelectListViewManager__SetMode_32446448(
      (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
      3,
      0LL);
  }
  *(_QWORD *)&isRequest = (unsigned int)this->fields.selectNum;
  this->fields.state = 3;
  if ( (isRequest & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_30;
    Item = RecommendSupportEquipSelectListViewManager__GetItem(
             (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
             isRequest,
             0LL);
    if ( Item )
      goto LABEL_15;
  }
  if ( !this->fields.isSelectedSvt )
  {
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_30;
    ListViewManager__SetScrollBarValue((ListViewManager_o *)supportServantEquipListViewManager, 0LL);
  }
LABEL_15:
  RecommendSupportEquipSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  v7 = *(RecommendSupportData_o **)(supportServantEquipListViewManager + 112);
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  v9 = *(_DWORD *)(supportServantEquipListViewManager + 120);
  if ( Item )
  {
    userSvtEntity = Item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v19.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v18 = v19;
      supportServantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                             &v18,
                                             0LL);
      v12 = Item->fields.userSvtEntity;
      if ( v12 )
      {
        v13 = supportServantEquipListViewManager;
        v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v20.fields.currentCryptoKey = v15;
        *(_QWORD *)&v20.fields.fakeValue = v14;
        supportServantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                               v20,
                                               0LL);
        if ( v7 )
        {
          RecommendSupportData__SetEquipData(v7, v9, v13, v16, v17);
          goto LABEL_28;
        }
      }
    }
LABEL_30:
    sub_1B8880C(supportServantEquipListViewManager, isRequest);
  }
  if ( !v7 )
    goto LABEL_30;
  RecommendSupportData__RemoveEquipData(v7, v9, v8);
LABEL_28:
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantEquipListViewManager, 0, 0LL);
}


void __fastcall RecommendSupportEquipSelectListMenu__EndOpen(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppObject *Instance; // x20
  TutorialFlag_ImageId_array *v5; // x0
  TutorialFlag_ImageId_array *v6; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A57366 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_ImageId___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A57366 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37688364(110, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (TutorialFlag_ImageId_array *)sub_1B88658(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v5 )
      goto LABEL_13;
    max_length = v5->max_length;
    v6 = v5;
    if ( !max_length || (v5->m_Items[1] = 4, max_length == 1) )
      sub_1B88814(v5, v5);
    v5->m_Items[2] = 5;
    if ( !Instance )
LABEL_13:
      sub_1B8880C(v5, v6);
    CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v5, 110, 0LL, 0LL, 0LL, 0LL);
  }
  this->fields.state = 2;
  RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndShowServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4A5736D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_EndCloseShowServantEquip__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5736D = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B8880C(supportServantEquipListViewManager, isDecide);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_32446448(supportServantEquipListViewManager, 3, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_RecommendSupportEquipSelectListMenu_EndCloseShowServantEquip__,
    0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall RecommendSupportEquipSelectListMenu__EndStatusSync(
        RecommendSupportEquipSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_requestedCallback; // x0
  struct RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v5; // x19
  struct RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *requestedCallback; // t1

  requestedCallback = this->fields.requestedCallback;
  p_requestedCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requestedCallback;
  v5 = requestedCallback;
  if ( requestedCallback )
  {
    p_requestedCallback->klass = 0LL;
    sub_1B88554(p_requestedCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      1LL,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__Init(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UnityEngine_Behaviour_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4A57364 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11593/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    byte_4A57364 = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  RecommendSupportEquipSelectListViewManager__DestroyList(supportServantEquipListViewManager, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)LocalizationManager__Get(
                                                                                         (System_String_o *)StringLiteral_11593/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/,
                                                                                         0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantEquipListViewManager, 0LL),
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton,
        this->fields.state = 0,
        !normalTabButton) )
  {
LABEL_9:
    sub_1B8880C(supportServantEquipListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled(normalTabButton, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)normalTabButton, enabled, 1, 0LL);
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 0, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickCancel(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *supportServantEquipListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4A5736A & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_EndCancelButton__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_OnClickCancel__);
    sub_1B885B0(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A5736A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      supportServantEquipListViewManager = (ListViewManager_o *)this->fields.supportServantEquipListViewManager;
      if ( !supportServantEquipListViewManager )
        sub_1B8880C(0LL, method);
      ListViewManager__SetScrollBarValue(supportServantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    v4 = Method_RecommendSupportEquipSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    v6 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListMenu_EndCancelButton__,
      0LL);
    RecommendSupportEquipSelectListMenu__StatusRequest(this, v6, v7);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickChoiceTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4A57371 & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__);
    sub_1B885B0(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57371 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__,
          0LL);
        RecommendSupportEquipSelectListMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__,
        0LL);
      RecommendSupportEquipSelectListMenu__StatusRequest(this, v9, v10);
    }
    RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 2, v5);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickLockTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4A57370 & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__);
    sub_1B885B0(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57370 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__,
          0LL);
        RecommendSupportEquipSelectListMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__,
        0LL);
      RecommendSupportEquipSelectListMenu__StatusRequest(this, v9, v10);
    }
    RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 1, v5);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickNormalTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A5736F & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_EndClickTabNormal__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__);
    sub_1B885B0(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A5736F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListMenu_EndClickTabNormal__,
      0LL);
    RecommendSupportEquipSelectListMenu__StatusRequest(this, v5, v6);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickScaleChange(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4A57374 & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__);
    byte_4A57374 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ChangeIconScale(supportServantEquipListViewManager, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)RecommendSupportEquipSelectListViewManager__GetScaleButtonSpriteName(
                                                                                                 supportServantEquipListViewManager,
                                                                                                 0LL),
          !scaleChangeTabSprite) )
    {
      sub_1B8880C(supportServantEquipListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantEquipListViewManager, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__OnSelectServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListMenu_o *v6; // x19
  RecommendSupportEquipSelectListViewItem_o *v7; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  int32_t tabModeKind; // w8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject *Instance; // x21
  char v18; // w22
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  const MethodInfo *v21; // x1
  struct UILabel_o *explanationLabel; // x19
  struct UserServantEntity_o *v23; // x8
  __int128 v24; // q1
  int32_t normalTabSprite; // w21
  struct UserServantEntity_o *v26; // x8
  RecommendSupportEquipSelectListMenu_o *v27; // x20
  __int64 v28; // x22
  __int64 v29; // x23
  int32_t v30; // w3
  const MethodInfo *v31; // x4
  RecommendSupportEquipSelectListViewManager_o *v32; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v33; // x21
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  _QWORD *v39; // x0
  _BOOL4 isBase; // w23
  System_Reflection_MethodBase_o *v41; // x0
  SupportServantEquipServantItem_o *v42; // x0
  RecommendSupportEquipSelectListMenu_o *v43; // x1
  UserServantEntity_o *v44; // x20
  ServantStatusDialog_EndDelegate_o *v45; // x23
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v49; // q1
  RecommendSupportEquipSelectListViewManager_o *v50; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v51; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v6 = this;
  if ( (byte_4A5736C & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_EndDecide__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_EndShowServantEquip__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
    sub_1B885B0(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (RecommendSupportEquipSelectListMenu_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A5736C = 1;
  }
  if ( v6->fields.state != 2 )
    return;
  v6->fields.selectNum = n;
  if ( (n & 0x80000000) != 0 )
  {
    v7 = 0LL;
  }
  else
  {
    this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
    if ( !this )
      goto LABEL_73;
    this = (RecommendSupportEquipSelectListMenu_o *)RecommendSupportEquipSelectListViewManager__GetItem(
                                                      (RecommendSupportEquipSelectListViewManager_o *)this,
                                                      n,
                                                      0LL);
    v7 = (RecommendSupportEquipSelectListViewItem_o *)this;
  }
  switch ( kind )
  {
    case 3:
      tabModeKind = v6->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        v34 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v34 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v35 = (System_Reflection_MethodBase_o *)sub_1B88594(v34, v34[4]);
        OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
        if ( v7 )
          RecommendSupportEquipSelectListViewItem__SwapChoice(v7, 0LL);
      }
      else if ( tabModeKind == 1 )
      {
        v13 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v14 = (System_Reflection_MethodBase_o *)sub_1B88594(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 11, 0LL);
        if ( v7 )
          RecommendSupportEquipSelectListViewItem__SwapLock(v7, 0LL);
      }
      else
      {
        supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
        if ( !supportServantEquipListViewManager )
          goto LABEL_73;
        servantItemInfo = supportServantEquipListViewManager->fields.servantItemInfo;
        servantItemDraw = supportServantEquipListViewManager->fields.servantItemDraw;
        if ( v7 )
        {
          v39 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
          isBase = v7->fields.isBase;
          if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v39 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
          v41 = (System_Reflection_MethodBase_o *)sub_1B88594(v39, v39[4]);
          OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
          if ( isBase )
          {
            v7->fields.isBase = 0;
            if ( !servantItemInfo )
              goto LABEL_73;
            v42 = servantItemInfo;
            v43 = 0LL;
          }
          else
          {
            this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_73;
            RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
              (RecommendSupportEquipSelectListViewManager_o *)this,
              0LL);
            userSvtEntity = v7->fields.userSvtEntity;
            v7->fields.isBase = 1;
            if ( !userSvtEntity )
              goto LABEL_73;
            v49 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v54.fields.fakeValue = v49;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v53 = v54;
            this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                              &v53,
                                                              0LL);
            if ( !servantItemInfo )
              goto LABEL_73;
            v43 = this;
            v42 = servantItemInfo;
          }
          SupportServantEquipServantItem__SetEquipTarget(v42, (int64_t)v43, 0LL);
        }
        else
        {
          v46 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v46 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
          v47 = (System_Reflection_MethodBase_o *)sub_1B88594(v46, v46[4]);
          OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0LL);
          this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_73;
          RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
            (RecommendSupportEquipSelectListViewManager_o *)this,
            0LL);
        }
        if ( !servantItemDraw )
          goto LABEL_73;
        SupportServantEquipServantItemDraw__SetItem(servantItemDraw, servantItemInfo, 0LL);
        this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
        if ( !this )
          goto LABEL_73;
        RecommendSupportEquipSelectListViewManager__RefreshEquipped(
          (RecommendSupportEquipSelectListViewManager_o *)this,
          0LL);
        this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
        if ( !this )
          goto LABEL_73;
        RecommendSupportEquipSelectListViewManager__RefreshListDisp(
          (RecommendSupportEquipSelectListViewManager_o *)this,
          0LL);
      }
      v6->fields.state = 2;
      v50 = v6->fields.supportServantEquipListViewManager;
      v51 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1B887FC(RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
      RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
        v51,
        (Il2CppObject *)v6,
        (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
        0LL);
      if ( v50 )
      {
        RecommendSupportEquipSelectListViewManager__SetMode(v50, 2, v51, 0LL);
        return;
      }
LABEL_73:
      sub_1B8880C(this, *(_QWORD *)&kind);
    case 2:
      v15 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
      v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
      if ( v7 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
        v6->fields.state = 5;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v18 = v7->fields.isUse || v7->fields.isBase;
        v44 = v7->fields.userSvtEntity;
        v45 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v45,
          (Il2CppObject *)v6,
          Method_RecommendSupportEquipSelectListMenu_EndShowServantEquip__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenServantEquipStatusDialog_30509280((CommonUI_o *)Instance, 0, v44, v18, v45, 0LL, 0LL);
          return;
        }
      }
      else
      {
        OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
        v6->fields.state = 2;
        v32 = v6->fields.supportServantEquipListViewManager;
        v33 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1B887FC(RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
        RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
          v33,
          (Il2CppObject *)v6,
          (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
          0LL);
        if ( v32 )
        {
          RecommendSupportEquipSelectListViewManager__SetMode(v32, 2, v33, 0LL);
          return;
        }
      }
      goto LABEL_73;
    case 1:
      v8 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
      v10 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v6,
        Method_RecommendSupportEquipSelectListMenu_EndDecide__,
        0LL);
      RecommendSupportEquipSelectListMenu__StatusRequest(v6, v10, v11);
      return;
  }
  v19 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
  v20 = (System_Reflection_MethodBase_o *)sub_1B88594(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 1, 0LL);
  v6->fields.state = 3;
  RecommendSupportEquipSelectListMenu__Init(v6, v21);
  if ( v7 )
  {
    this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
    {
      explanationLabel = this->fields.explanationLabel;
      this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( this )
      {
        v23 = v7->fields.userSvtEntity;
        if ( v23 )
        {
          v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
          normalTabSprite = (int32_t)this->fields.normalTabSprite;
          *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v54.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v52 = v54;
          this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                            &v52,
                                                            0LL);
          v26 = v7->fields.userSvtEntity;
          if ( v26 )
          {
            v27 = this;
            v29 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
            v28 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v55.fields.currentCryptoKey = v29;
            *(_QWORD *)&v55.fields.fakeValue = v28;
            this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                              v55,
                                                              0LL);
            if ( explanationLabel )
            {
              RecommendSupportData__SetEquipData(
                (RecommendSupportData_o *)explanationLabel,
                normalTabSprite,
                (int64_t)v27,
                v30,
                v31);
              this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( this )
              {
                RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)this, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_73;
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__Open(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  int64_t SelectEquipId; // x0
  const MethodInfo *v6; // x1
  int32_t state; // w8
  const MethodInfo *v8; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v10; // x20

  if ( (byte_4A57365 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_EndOpen__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A57365 = 1;
  }
  RecommendSupportEquipSelectListMenu__Init(this, method);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  SelectEquipId = RecommendSupportSelectControl__get_SelectEquipId(Instance, 0LL);
  state = this->fields.state;
  this->fields.isSelectedSvt = SelectEquipId > 0;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.state = 2;
    RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v6);
    return;
  }
  if ( !state )
  {
    Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (RecommendSupportSelectControl_o *)this->fields.titleInfo;
      if ( Instance )
      {
        TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, 0LL, 23, 0LL);
        Instance = (RecommendSupportSelectControl_o *)this->fields.titleInfo;
        if ( Instance )
        {
          TitleInfoControl__setBackBtnSprite_37184884((TitleInfoControl_o *)Instance, 1, 0, 0, 0LL);
          Instance = (RecommendSupportSelectControl_o *)this->fields.supportServantEquipListViewManager;
          if ( Instance )
          {
            RecommendSupportEquipSelectListViewManager__CreateList(
              (RecommendSupportEquipSelectListViewManager_o *)Instance,
              0LL);
            this->fields.state = 1;
            RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v8);
            Instance = (RecommendSupportSelectControl_o *)this->fields.supportServantEquipListViewManager;
            if ( Instance )
            {
              scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
              Instance = (RecommendSupportSelectControl_o *)RecommendSupportEquipSelectListViewManager__GetScaleButtonSpriteName(
                                                              (RecommendSupportEquipSelectListViewManager_o *)Instance,
                                                              0LL);
              if ( scaleChangeTabSprite )
              {
                UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0LL);
                v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(
                  v10,
                  (Il2CppObject *)this,
                  Method_RecommendSupportEquipSelectListMenu_EndOpen__,
                  0LL);
                BaseMenu__Open((BaseMenu_o *)this, v10, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_15:
    sub_1B8880C(Instance, v4);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__SetListManagerStatus(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListMenu_o *v2; // x20
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x19
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v4; // x21

  v2 = this;
  if ( (byte_4A57368 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    this = (RecommendSupportEquipSelectListMenu_o *)sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
    byte_4A57368 = 1;
  }
  supportServantEquipListViewManager = v2->fields.supportServantEquipListViewManager;
  if ( v2->fields.state == 2 )
  {
    v4 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1B887FC(RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
      v4,
      (Il2CppObject *)v2,
      (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
      0LL);
    if ( supportServantEquipListViewManager )
    {
      RecommendSupportEquipSelectListViewManager__SetMode(supportServantEquipListViewManager, 2, v4, 0LL);
      return;
    }
LABEL_8:
    sub_1B8880C(this, method);
  }
  if ( !supportServantEquipListViewManager )
    goto LABEL_8;
  RecommendSupportEquipSelectListViewManager__SetMode_32446448(v2->fields.supportServantEquipListViewManager, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__SetModeTabKind(
        RecommendSupportEquipSelectListMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v6; // x20
  bool enabled; // w0
  System_String_o **v8; // x8
  UICommonButton_o *lockTabButton; // x20
  bool v10; // w0
  System_String_o **v11; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v13; // w0
  __int64 *v14; // x8
  const MethodInfo *v15; // x1
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x20
  __int64 *v18; // x8
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x8

  if ( (byte_4A57372 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11591/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_11593/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    sub_1B885B0(&StringLiteral_11592/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A57372 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    v6 = this->fields.normalTabButton;
    if ( !v6 )
      goto LABEL_39;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
    UICommonButton__SetColliderEnable(v6, enabled, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17664/*"button_select_unreg"*/ : &StringLiteral_17663/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_39;
    v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v10, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17649/*"button_alllock_reg"*/ : &StringLiteral_17650/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v11, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_39;
    v13 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v13, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    if ( this->fields.tabModeKind == 2 )
      v14 = &StringLiteral_17647/*"button_allchoice_reg"*/;
    else
      v14 = &StringLiteral_17648/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v14, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11591/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( tabModeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11592/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( tabModeKind )
      {
LABEL_36:
        RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v15);
        supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
        if ( supportServantEquipListViewManager )
        {
          supportServantEquipListViewManager->fields.isCanNotLongPush = this->fields.tabModeKind != 0;
          return;
        }
LABEL_39:
        sub_1B8880C(normalTabButton, *(_QWORD *)&modeKind);
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11593/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v18, 0LL);
    if ( !explanationLabel )
      goto LABEL_39;
    UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0LL);
    goto LABEL_36;
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__StatusRequest(
        RecommendSupportEquipSelectListMenu_o *this,
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t tabModeKind; // w8
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  System_Int64_array *v10; // x1
  System_Int64_array *v11; // x2
  bool v12; // w4
  bool v13; // w5
  int32_t v14; // w2
  int32_t v15; // w3
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int64_array *v17; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A57373 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListMenu_EndStatusSync__);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A57373 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v17 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_21;
    if ( RecommendSupportEquipSelectListViewManager__GetSwapChoiceList(
           supportServantEquipListViewManager,
           &choiceList,
           &v17,
           0LL) )
    {
      this->fields.requestedCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestedCallback, (int32_t)callback, v14, v15);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                             v16,
                                                                                             (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v11 = v17;
        v10 = choiceList;
        v13 = 1;
        v12 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B8880C(supportServantEquipListViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_21;
    if ( RecommendSupportEquipSelectListViewManager__GetSwapLockList(
           supportServantEquipListViewManager,
           &lockList,
           &unlockList,
           0LL) )
    {
      this->fields.requestedCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestedCallback, (int32_t)callback, v7, v8);
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                             v9,
                                                                                             (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v11 = unlockList;
        v10 = lockList;
        v12 = 1;
        v13 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantEquipListViewManager,
          v10,
          v11,
          0,
          v12,
          v13,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9ABC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9A74;
}


System_IAsyncResult_o *__fastcall RecommendSupportEquipSelectListMenu_RequestCallbackFunc__BeginInvoke(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4A57376 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A57376 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall RecommendSupportEquipSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall RecommendSupportEquipSelectListMenu_RequestCallbackFunc__Invoke(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}