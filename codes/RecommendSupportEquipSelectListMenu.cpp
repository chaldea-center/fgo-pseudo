void __fastcall RecommendSupportEquipSelectListMenu___ctor(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F86A6 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F86A6 = 1;
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

  RecommendSupportEquipSelectListMenu__Close_32164340(this, 0LL, v2);
}


void __fastcall RecommendSupportEquipSelectListMenu__Close_32164340(
        RecommendSupportEquipSelectListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x20

  if ( (byte_49F8698 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_EndClose__, v6);
    byte_49F8698 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v7);
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_RecommendSupportEquipSelectListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndCancelButton(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0

  if ( (byte_49F869C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, isRequest);
    byte_49F869C = 1;
  }
  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_10:
      sub_1B64324(supportServantEquipListViewManager);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_32182572(supportServantEquipListViewManager, 3, 0LL);
  }
  RecommendSupportEquipSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
      sub_1B64324(supportServantEquipListViewManager);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_32182572(supportServantEquipListViewManager, 3, 0LL);
  }
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 2, method);
}


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
      sub_1B64324(supportServantEquipListViewManager);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_32182572(supportServantEquipListViewManager, 3, 0LL);
  }
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 1, method);
}


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
      sub_1B64324(supportServantEquipListViewManager);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_32182572(supportServantEquipListViewManager, 3, 0LL);
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
    sub_1B6406C(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__EndCloseShowServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49F869F & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__, v4);
    byte_49F869F = 1;
  }
  this->fields.state = 2;
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  v6 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                      RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo,
                                                                      method,
                                                                      v2);
  RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
    0LL);
  if ( !supportServantEquipListViewManager )
    sub_1B64324(v7);
  RecommendSupportEquipSelectListViewManager__SetMode(supportServantEquipListViewManager, 2, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndDecide(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t supportServantEquipListViewManager; // x0
  const MethodInfo *selectNum; // x1
  RecommendSupportEquipSelectListViewItem_o *Item; // x20
  RecommendSupportData_o *v10; // x19
  const MethodInfo *v11; // x2
  int32_t v12; // w21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v14; // q1
  struct UserServantEntity_o *v15; // x8
  int64_t v16; // x20
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w3
  const MethodInfo *v20; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49F869A & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isRequest);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    byte_49F869A = 1;
  }
  if ( isRequest )
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
    RecommendSupportEquipSelectListViewManager__SetMode_32182572(
      (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
      3,
      0LL);
  }
  selectNum = (const MethodInfo *)(unsigned int)this->fields.selectNum;
  this->fields.state = 3;
  if ( ((unsigned int)selectNum & 0x80000000) != 0 )
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
             (int32_t)selectNum,
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
  RecommendSupportEquipSelectListMenu__Init(this, selectNum);
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  v10 = *(RecommendSupportData_o **)(supportServantEquipListViewManager + 112);
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  v12 = *(_DWORD *)(supportServantEquipListViewManager + 120);
  if ( Item )
  {
    userSvtEntity = Item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v22.fields.fakeValue = v14;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v21 = v22;
      supportServantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                             &v21,
                                             0LL);
      v15 = Item->fields.userSvtEntity;
      if ( v15 )
      {
        v16 = supportServantEquipListViewManager;
        v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
        v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v18;
        *(_QWORD *)&v23.fields.fakeValue = v17;
        supportServantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                               v23,
                                               0LL);
        if ( v10 )
        {
          RecommendSupportData__SetEquipData(v10, v12, v16, v19, v20);
          goto LABEL_28;
        }
      }
    }
LABEL_30:
    sub_1B64324(supportServantEquipListViewManager);
  }
  if ( !v10 )
    goto LABEL_30;
  RecommendSupportData__RemoveEquipData(v10, v12, v11);
LABEL_28:
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantEquipListViewManager, 0, 0LL);
}


void __fastcall RecommendSupportEquipSelectListMenu__EndOpen(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  TutorialFlag_ImageId_array *v7; // x0
  il2cpp_array_size_t max_length; // w8

  if ( (byte_49F8697 & 1) == 0 )
  {
    sub_1B640C8(&TutorialFlag_ImageId___TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&TutorialFlag_TypeInfo, v4);
    byte_49F8697 = 1;
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
  RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndShowServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21

  if ( (byte_49F869E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_EndCloseShowServantEquip__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F869E = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0LL),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B64324(supportServantEquipListViewManager);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_32182572(supportServantEquipListViewManager, 3, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_RecommendSupportEquipSelectListMenu_EndCloseShowServantEquip__,
    0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v11, 0LL);
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
    sub_1B6406C(p_requestedCallback, 0, (int32_t)method, v3);
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
  __int64 v3; // x1
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UnityEngine_Behaviour_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v8; // x2

  if ( (byte_49F8695 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_11538/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v3);
    byte_49F8695 = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  RecommendSupportEquipSelectListViewManager__DestroyList(supportServantEquipListViewManager, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)LocalizationManager__Get(
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
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 0, v8);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickCancel(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewManager_o *supportServantEquipListViewManager; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_49F869B & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_EndCancelButton__, method);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_OnClickCancel__, v3);
    sub_1B640C8(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F869B = 1;
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
    v6 = Method_RecommendSupportEquipSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    v10 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                         RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                         v8,
                                                                         v9);
    RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListMenu_EndCancelButton__,
      0LL);
    RecommendSupportEquipSelectListMenu__StatusRequest(this, v10, v11);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickChoiceTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_49F86A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__, method);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__, v3);
    sub_1B640C8(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F86A2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v10 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                             RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                             v7,
                                                                             v8);
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__,
          0LL);
        RecommendSupportEquipSelectListMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                           RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                           v7,
                                                                           v8);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__,
        0LL);
      RecommendSupportEquipSelectListMenu__StatusRequest(this, v12, v13);
    }
    RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 2, v8);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickLockTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_49F86A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__, method);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__, v3);
    sub_1B640C8(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F86A1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v10 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                             RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                             v7,
                                                                             v8);
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__,
          0LL);
        RecommendSupportEquipSelectListMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                           RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                           v7,
                                                                           v8);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__,
        0LL);
      RecommendSupportEquipSelectListMenu__StatusRequest(this, v12, v13);
    }
    RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 1, v8);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickNormalTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_49F86A0 & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_EndClickTabNormal__, method);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__, v3);
    sub_1B640C8(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F86A0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                        v7,
                                                                        v8);
    RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListMenu_EndClickTabNormal__,
      0LL);
    RecommendSupportEquipSelectListMenu__StatusRequest(this, v9, v10);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickScaleChange(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_49F86A5 & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__, method);
    byte_49F86A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
      sub_1B64324(supportServantEquipListViewManager);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  RecommendSupportEquipSelectListViewItem_o *v16; // x20
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v21; // x20
  const MethodInfo *v22; // x2
  int32_t tabModeKind; // w8
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *Instance; // x21
  char v33; // w22
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x1
  struct UILabel_o *explanationLabel; // x19
  struct UserServantEntity_o *v38; // x8
  __int128 v39; // q1
  int32_t normalTabSprite; // w21
  struct UserServantEntity_o *v41; // x8
  RecommendSupportEquipSelectListMenu_o *v42; // x20
  __int64 v43; // x22
  __int64 v44; // x23
  int32_t v45; // w3
  const MethodInfo *v46; // x4
  RecommendSupportEquipSelectListViewManager_o *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v50; // x21
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  _QWORD *v56; // x0
  _BOOL4 isBase; // w23
  System_Reflection_MethodBase_o *v58; // x0
  SupportServantEquipServantItem_o *v59; // x0
  RecommendSupportEquipSelectListMenu_o *v60; // x1
  UserServantEntity_o *v61; // x20
  ServantStatusDialog_EndDelegate_o *v62; // x23
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v66; // q1
  RecommendSupportEquipSelectListViewManager_o *v67; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v68; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  v6 = this;
  if ( (byte_49F869D & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_EndDecide__, v10);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_EndShowServantEquip__, v11);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__, v12);
    sub_1B640C8(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    this = (RecommendSupportEquipSelectListMenu_o *)sub_1B640C8(
                                                      &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                      v15);
    byte_49F869D = 1;
  }
  if ( v6->fields.state != 2 )
    return;
  v6->fields.selectNum = n;
  if ( (n & 0x80000000) != 0 )
  {
    v16 = 0LL;
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
    v16 = (RecommendSupportEquipSelectListViewItem_o *)this;
  }
  switch ( kind )
  {
    case 3:
      tabModeKind = v6->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        v51 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v51 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v52 = (System_Reflection_MethodBase_o *)sub_1B640AC(v51, v51[4]);
        OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0LL);
        if ( v16 )
          RecommendSupportEquipSelectListViewItem__SwapChoice(v16, 0LL);
      }
      else if ( tabModeKind == 1 )
      {
        v24 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v24 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v25 = (System_Reflection_MethodBase_o *)sub_1B640AC(v24, v24[4]);
        OverwriteAssetSoundName__PlaySystemSe(v25, 11, 0LL);
        if ( v16 )
          RecommendSupportEquipSelectListViewItem__SwapLock(v16, 0LL);
      }
      else
      {
        supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
        if ( !supportServantEquipListViewManager )
          goto LABEL_73;
        servantItemInfo = supportServantEquipListViewManager->fields.servantItemInfo;
        servantItemDraw = supportServantEquipListViewManager->fields.servantItemDraw;
        if ( v16 )
        {
          v56 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
          isBase = v16->fields.isBase;
          if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v56 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
          v58 = (System_Reflection_MethodBase_o *)sub_1B640AC(v56, v56[4]);
          OverwriteAssetSoundName__PlaySystemSe(v58, 0, 0LL);
          if ( isBase )
          {
            v16->fields.isBase = 0;
            if ( !servantItemInfo )
              goto LABEL_73;
            v59 = servantItemInfo;
            v60 = 0LL;
          }
          else
          {
            this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_73;
            RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
              (RecommendSupportEquipSelectListViewManager_o *)this,
              0LL);
            userSvtEntity = v16->fields.userSvtEntity;
            v16->fields.isBase = 1;
            if ( !userSvtEntity )
              goto LABEL_73;
            v66 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v71.fields.fakeValue = v66;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v70 = v71;
            this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                              &v70,
                                                              0LL);
            if ( !servantItemInfo )
              goto LABEL_73;
            v60 = this;
            v59 = servantItemInfo;
          }
          SupportServantEquipServantItem__SetEquipTarget(v59, (int64_t)v60, 0LL);
        }
        else
        {
          v63 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v63 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
          v64 = (System_Reflection_MethodBase_o *)sub_1B640AC(v63, v63[4]);
          OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0LL);
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
      v67 = v6->fields.supportServantEquipListViewManager;
      v68 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                           RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo,
                                                                           v26,
                                                                           v27);
      RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
        v68,
        (Il2CppObject *)v6,
        (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
        0LL);
      if ( v67 )
      {
        RecommendSupportEquipSelectListViewManager__SetMode(v67, 2, v68, 0LL);
        return;
      }
LABEL_73:
      sub_1B64324(this);
    case 2:
      v28 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
      v29 = (System_Reflection_MethodBase_o *)sub_1B640AC(v28, v28[4]);
      if ( v16 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
        v6->fields.state = 5;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v33 = v16->fields.isUse || v16->fields.isBase;
        v61 = v16->fields.userSvtEntity;
        v62 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v30, v31);
        ServantStatusDialog_EndDelegate___ctor(
          v62,
          (Il2CppObject *)v6,
          Method_RecommendSupportEquipSelectListMenu_EndShowServantEquip__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenServantEquipStatusDialog_30360316((CommonUI_o *)Instance, 0, v61, v33, v62, 0LL, 0LL);
          return;
        }
      }
      else
      {
        OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
        v6->fields.state = 2;
        v47 = v6->fields.supportServantEquipListViewManager;
        v50 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                             RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo,
                                                                             v48,
                                                                             v49);
        RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
          v50,
          (Il2CppObject *)v6,
          (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
          0LL);
        if ( v47 )
        {
          RecommendSupportEquipSelectListViewManager__SetMode(v47, 2, v50, 0LL);
          return;
        }
      }
      goto LABEL_73;
    case 1:
      v17 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B640AC(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 8, 0LL);
      v21 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                           RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                           v19,
                                                                           v20);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v21,
        (Il2CppObject *)v6,
        Method_RecommendSupportEquipSelectListMenu_EndDecide__,
        0LL);
      RecommendSupportEquipSelectListMenu__StatusRequest(v6, v21, v22);
      return;
  }
  v34 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
    v34 = (_QWORD *)sub_1B640E0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
  v35 = (System_Reflection_MethodBase_o *)sub_1B640AC(v34, v34[4]);
  OverwriteAssetSoundName__PlaySystemSe(v35, 1, 0LL);
  v6->fields.state = 3;
  RecommendSupportEquipSelectListMenu__Init(v6, v36);
  if ( v16 )
  {
    this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
    {
      explanationLabel = this->fields.explanationLabel;
      this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( this )
      {
        v38 = v16->fields.userSvtEntity;
        if ( v38 )
        {
          v39 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
          normalTabSprite = (int32_t)this->fields.normalTabSprite;
          *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v71.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v69 = v71;
          this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                            &v69,
                                                            0LL);
          v41 = v16->fields.userSvtEntity;
          if ( v41 )
          {
            v42 = this;
            v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
            v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v72.fields.currentCryptoKey = v44;
            *(_QWORD *)&v72.fields.fakeValue = v43;
            this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                              v72,
                                                              0LL);
            if ( explanationLabel )
            {
              RecommendSupportData__SetEquipData(
                (RecommendSupportData_o *)explanationLabel,
                normalTabSprite,
                (int64_t)v42,
                v45,
                v46);
              this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  RecommendSupportSelectControl_o *Instance; // x0
  int64_t SelectEquipId; // x0
  const MethodInfo *v7; // x1
  int32_t state; // w8
  const MethodInfo *v9; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_49F8696 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_EndOpen__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    byte_49F8696 = 1;
  }
  RecommendSupportEquipSelectListMenu__Init(this, method);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  SelectEquipId = RecommendSupportSelectControl__get_SelectEquipId(Instance, 0LL);
  state = this->fields.state;
  this->fields.isSelectedSvt = SelectEquipId > 0;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.state = 2;
    RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v7);
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
          TitleInfoControl__setBackBtnSprite_36875508((TitleInfoControl_o *)Instance, 1, 0, 0, 0LL);
          Instance = (RecommendSupportSelectControl_o *)this->fields.supportServantEquipListViewManager;
          if ( Instance )
          {
            RecommendSupportEquipSelectListViewManager__CreateList(
              (RecommendSupportEquipSelectListViewManager_o *)Instance,
              0LL);
            this->fields.state = 1;
            RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v9);
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
                v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
                System_Action___ctor(
                  v13,
                  (Il2CppObject *)this,
                  Method_RecommendSupportEquipSelectListMenu_EndOpen__,
                  0LL);
                BaseMenu__Open((BaseMenu_o *)this, v13, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_15:
    sub_1B64324(Instance);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__SetListManagerStatus(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  RecommendSupportEquipSelectListMenu_o *v3; // x20
  __int64 v4; // x1
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x19
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v6; // x21

  v3 = this;
  if ( (byte_49F8699 & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo, method);
    this = (RecommendSupportEquipSelectListMenu_o *)sub_1B640C8(
                                                      &Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
                                                      v4);
    byte_49F8699 = 1;
  }
  supportServantEquipListViewManager = v3->fields.supportServantEquipListViewManager;
  if ( v3->fields.state == 2 )
  {
    v6 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                        RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo,
                                                                        method,
                                                                        v2);
    RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)v3,
      (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
      0LL);
    if ( supportServantEquipListViewManager )
    {
      RecommendSupportEquipSelectListViewManager__SetMode(supportServantEquipListViewManager, 2, v6, 0LL);
      return;
    }
LABEL_8:
    sub_1B64324(this);
  }
  if ( !supportServantEquipListViewManager )
    goto LABEL_8;
  RecommendSupportEquipSelectListViewManager__SetMode_32182572(v3->fields.supportServantEquipListViewManager, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__SetModeTabKind(
        RecommendSupportEquipSelectListMenu_o *this,
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
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x8

  if ( (byte_49F86A3 & 1) == 0 )
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
    byte_49F86A3 = 1;
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
        RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v24);
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


void __fastcall RecommendSupportEquipSelectListMenu__StatusRequest(
        RecommendSupportEquipSelectListMenu_o *this,
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t tabModeKind; // w8
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  System_Int64_array *v24; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49F86A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&Method_RecommendSupportEquipSelectListMenu_EndStatusSync__, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_49F86A4 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v24 = 0LL;
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
           &v24,
           0LL) )
    {
      this->fields.requestedCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestedCallback, (int32_t)callback, v19, v20);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                             v23,
                                                                                             (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v16 = v24;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
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
    if ( RecommendSupportEquipSelectListViewManager__GetSwapLockList(
           supportServantEquipListViewManager,
           &lockList,
           &unlockList,
           0LL) )
    {
      this->fields.requestedCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestedCallback, (int32_t)callback, v10, v11);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                             v14,
                                                                                             (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v16 = unlockList;
        v15 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantEquipListViewManager,
          v15,
          v16,
          0,
          v17,
          v18,
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
  this->fields.m_target = (Il2CppObject *)sub_19A72C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7280;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_49F86A7 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49F86A7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall RecommendSupportEquipSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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