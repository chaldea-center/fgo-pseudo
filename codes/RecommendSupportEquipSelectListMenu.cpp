void __fastcall RecommendSupportEquipSelectListMenu___ctor(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12353 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B12353 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
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

  RecommendSupportEquipSelectListMenu__Close_33087812(this, 0LL, v2);
}


void __fastcall RecommendSupportEquipSelectListMenu__Close_33087812(
        RecommendSupportEquipSelectListMenu_o *this,
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

  if ( (byte_4B12345 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_EndClose__, v10, v11);
    byte_4B12345 = 1;
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
  RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v12);
  v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_RecommendSupportEquipSelectListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndCancelButton(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4B12349 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, isRequest, method);
    byte_4B12349 = 1;
  }
  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_10:
      sub_1BCAA3C(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_33088268(supportServantEquipListViewManager, 3, v6);
  }
  RecommendSupportEquipSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_10;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantEquipListViewManager, 0, v7);
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
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1BCAA3C(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_33088268(supportServantEquipListViewManager, 3, v5);
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
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1BCAA3C(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_33088268(supportServantEquipListViewManager, 3, v5);
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
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1BCAA3C(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_33088268(supportServantEquipListViewManager, 3, v5);
  }
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 0, method);
}


void __fastcall RecommendSupportEquipSelectListMenu__EndClose(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
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

  RecommendSupportEquipSelectListMenu__Init(this, method);
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


void __fastcall RecommendSupportEquipSelectListMenu__EndCloseShowServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v8; // x21
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

  if ( (byte_4B1234C & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__, v5, v6);
    byte_4B1234C = 1;
  }
  this->fields.state = 2;
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  v8 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                      RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo,
                                                                      method,
                                                                      v2,
                                                                      v3);
  RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
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
  RecommendSupportEquipSelectListViewManager__SetMode_33088268(supportServantEquipListViewManager, 2, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndDecide(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  bool v3; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t supportServantEquipListViewManager; // x0
  const MethodInfo *v10; // x2
  RecommendSupportEquipSelectListViewItem_o *Item; // x20
  RecommendSupportData_o *v12; // x19
  int32_t v13; // w21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v15; // q1
  struct UserServantEntity_o *v16; // x8
  int64_t v17; // x20
  __int64 v18; // x22
  __int64 v19; // x23
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v3 = isRequest;
  if ( (byte_4B12347 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isRequest, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v7, v8);
    byte_4B12347 = 1;
  }
  if ( v3 )
  {
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_30;
    RecommendSupportEquipSelectListViewManager__ModifyList(
      (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
      0,
      method);
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_30;
    RecommendSupportEquipSelectListViewManager__SetMode_33088268(
      (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
      3,
      v10);
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
             method);
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
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  v12 = *(RecommendSupportData_o **)(supportServantEquipListViewManager + 112);
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  v13 = *(_DWORD *)(supportServantEquipListViewManager + 120);
  if ( Item )
  {
    userSvtEntity = Item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v15 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v22.fields.fakeValue = v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isRequest);
      v21 = v22;
      supportServantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                             &v21,
                                             0LL);
      v16 = Item->fields.userSvtEntity;
      if ( v16 )
      {
        v17 = supportServantEquipListViewManager;
        v19 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isRequest);
        *(_QWORD *)&v23.fields.currentCryptoKey = v19;
        *(_QWORD *)&v23.fields.fakeValue = v18;
        supportServantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               v23,
                                               0LL);
        if ( v12 )
        {
          RecommendSupportData__SetEquipData(v12, v13, v17, supportServantEquipListViewManager, 0LL);
          goto LABEL_28;
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(supportServantEquipListViewManager, isRequest);
  }
  if ( !v12 )
    goto LABEL_30;
  RecommendSupportData__RemoveEquipData(v12, v13, 0LL);
LABEL_28:
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantEquipListViewManager, 0, v20);
}


void __fastcall RecommendSupportEquipSelectListMenu__EndOpen(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
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

  if ( (byte_4B12344 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_ImageId___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v6, v7);
    byte_4B12344 = 1;
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
  RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__EndShowServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21

  if ( (byte_4B1234B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_EndCloseShowServantEquip__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B1234B = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1BCAA3C(supportServantEquipListViewManager, isDecide);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_33088268(supportServantEquipListViewManager, 3, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_RecommendSupportEquipSelectListMenu_EndCloseShowServantEquip__,
    0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall RecommendSupportEquipSelectListMenu__EndStatusSync(
        RecommendSupportEquipSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_requestedCallback; // x0
  struct RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v9; // x19
  struct RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *requestedCallback; // t1

  requestedCallback = this->fields.requestedCallback;
  p_requestedCallback = (PartyOrganizationUtility_o *)&this->fields.requestedCallback;
  v9 = requestedCallback;
  if ( requestedCallback )
  {
    p_requestedCallback->klass = 0LL;
    sub_1BCA784(p_requestedCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      1LL,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__Init(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  __int64 v7; // x1
  UILabel_o *explanationLabel; // x20
  UnityEngine_Behaviour_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v11; // x2

  if ( (byte_4B12342 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_11731/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v4, v5);
    byte_4B12342 = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  RecommendSupportEquipSelectListViewManager__DestroyList(supportServantEquipListViewManager, method);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)LocalizationManager__Get(
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
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 0, v11);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickCancel(
        RecommendSupportEquipSelectListMenu_o *this,
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
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B12348 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_EndCancelButton__, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B12348 = 1;
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
    v9 = Method_RecommendSupportEquipSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnClickCancel__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
    v14 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                         RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                         v11,
                                                                         v12,
                                                                         v13);
    RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListMenu_EndCancelButton__,
      v15);
    RecommendSupportEquipSelectListMenu__StatusRequest(this, v14, v16);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickChoiceTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
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
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B1234F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__, v4, v5);
    sub_1BCA7E0(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B1234F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v14 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                             RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                             v10,
                                                                             v11,
                                                                             v12);
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__,
          v15);
        RecommendSupportEquipSelectListMenu__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                           RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                           v10,
                                                                           v11,
                                                                           v12);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__,
        v18);
      RecommendSupportEquipSelectListMenu__StatusRequest(this, v17, v19);
    }
    RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 2, v11);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickLockTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
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
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B1234E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__, v4, v5);
    sub_1BCA7E0(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B1234E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v14 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                             RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                             v10,
                                                                             v11,
                                                                             v12);
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__,
          v15);
        RecommendSupportEquipSelectListMenu__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                           RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                           v10,
                                                                           v11,
                                                                           v12);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__,
        v18);
      RecommendSupportEquipSelectListMenu__StatusRequest(this, v17, v19);
    }
    RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 1, v11);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickNormalTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
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
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B1234D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_EndClickTabNormal__, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__, v4, v5);
    sub_1BCA7E0(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B1234D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                         RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                         v10,
                                                                         v11,
                                                                         v12);
    RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListMenu_EndClickTabNormal__,
      v14);
    RecommendSupportEquipSelectListMenu__StatusRequest(this, v13, v15);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__OnClickScaleChange(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4B12352 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__, method, v2);
    byte_4B12352 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ChangeIconScale(supportServantEquipListViewManager, v6),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)RecommendSupportEquipSelectListViewManager__GetScaleButtonSpriteName(
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
void __fastcall RecommendSupportEquipSelectListMenu__OnSelectServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListMenu_o *v6; // x19
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
  __int64 v23; // x1
  __int64 v24; // x2
  RecommendSupportEquipSelectListMenu_o *v25; // x20
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v31; // x20
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  int32_t tabModeKind; // w8
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  Il2CppObject *Instance; // x21
  char v46; // w22
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  const MethodInfo *v49; // x1
  struct UILabel_o *v50; // x19
  struct UILabel_o *v51; // x8
  __int128 v52; // q1
  int32_t normalTabSprite; // w21
  struct UILabel_o *v54; // x8
  RecommendSupportEquipSelectListMenu_o *v55; // x20
  struct BetterList_UIRect__o *mChildren; // x22
  struct UnityEngine_Transform_o *mTrans; // x23
  const MethodInfo *v58; // x2
  struct RecommendSupportEquipSelectListViewManager_o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v63; // x21
  const MethodInfo *v64; // x3
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  const MethodInfo *v71; // x2
  _QWORD *v72; // x0
  System_Reflection_MethodBase_o *v73; // x0
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  _QWORD *v77; // x0
  int v78; // w23
  System_Reflection_MethodBase_o *v79; // x0
  SupportServantEquipServantItem_o *v80; // x0
  RecommendSupportEquipSelectListMenu_o *v81; // x1
  UserServantEntity_o *v82; // x20
  ServantStatusDialog_EndDelegate_o *v83; // x23
  _QWORD *v84; // x0
  System_Reflection_MethodBase_o *v85; // x0
  struct UILabel_o *explanationLabel; // x8
  __int128 v87; // q1
  struct RecommendSupportEquipSelectListViewManager_o *v88; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v89; // x21
  const MethodInfo *v90; // x3
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  const MethodInfo *v97; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  v6 = this;
  if ( (byte_4B1234A & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_EndDecide__, v13, v14);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_EndShowServantEquip__, v15, v16);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__, v17, v18);
    sub_1BCA7E0(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22);
    this = (RecommendSupportEquipSelectListMenu_o *)sub_1BCA7E0(
                                                      &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                      v23,
                                                      v24);
    byte_4B1234A = 1;
  }
  if ( v6->fields.state != 2 )
    return;
  v6->fields.selectNum = n;
  if ( (n & 0x80000000) != 0 )
  {
    v25 = 0LL;
  }
  else
  {
    this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
    if ( !this )
      goto LABEL_73;
    this = (RecommendSupportEquipSelectListMenu_o *)RecommendSupportEquipSelectListViewManager__GetItem(
                                                      (RecommendSupportEquipSelectListViewManager_o *)this,
                                                      n,
                                                      *(const MethodInfo **)&n);
    v25 = this;
  }
  switch ( kind )
  {
    case 3:
      tabModeKind = v6->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        v72 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v72 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v73 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v72, v72[4]);
        OverwriteAssetSoundName__PlaySystemSe(v73, 0, 0LL);
        if ( v25 )
          BYTE1(v25->fields.tabModeKind) ^= 1u;
      }
      else if ( tabModeKind == 1 )
      {
        v35 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v35 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v36 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v35, v35[4]);
        OverwriteAssetSoundName__PlaySystemSe(v36, 11, 0LL);
        if ( v25 )
          LOBYTE(v25->fields.tabModeKind) ^= 1u;
      }
      else
      {
        supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
        if ( !supportServantEquipListViewManager )
          goto LABEL_73;
        servantItemInfo = supportServantEquipListViewManager->fields.servantItemInfo;
        servantItemDraw = supportServantEquipListViewManager->fields.servantItemDraw;
        if ( v25 )
        {
          v77 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
          v78 = BYTE1(v25->fields.lockTabButton);
          if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v77 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
          v79 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v77, v77[4]);
          OverwriteAssetSoundName__PlaySystemSe(v79, 0, 0LL);
          if ( v78 )
          {
            BYTE1(v25->fields.lockTabButton) = 0;
            if ( !servantItemInfo )
              goto LABEL_73;
            v80 = servantItemInfo;
            v81 = 0LL;
          }
          else
          {
            this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_73;
            RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
              (RecommendSupportEquipSelectListViewManager_o *)this,
              *(const MethodInfo **)&kind);
            explanationLabel = v25->fields.explanationLabel;
            BYTE1(v25->fields.lockTabButton) = 1;
            if ( !explanationLabel )
              goto LABEL_73;
            v87 = *(_OWORD *)&explanationLabel->fields.leftAnchor;
            *(UnityEngine_MonoBehaviour_Fields *)&v100.fields.currentCryptoKey = explanationLabel->fields.UnityEngine_MonoBehaviour_Fields;
            *(_OWORD *)&v100.fields.fakeValue = v87;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
            v99 = v100;
            this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                              &v99,
                                                              0LL);
            if ( !servantItemInfo )
              goto LABEL_73;
            v81 = this;
            v80 = servantItemInfo;
          }
          SupportServantEquipServantItem__SetEquipTarget(v80, (int64_t)v81, 0LL);
        }
        else
        {
          v84 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v84 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
          v85 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v84, v84[4]);
          OverwriteAssetSoundName__PlaySystemSe(v85, 0, 0LL);
          this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_73;
          RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
            (RecommendSupportEquipSelectListViewManager_o *)this,
            *(const MethodInfo **)&kind);
        }
        if ( !servantItemDraw )
          goto LABEL_73;
        SupportServantEquipServantItemDraw__SetItem(servantItemDraw, servantItemInfo, 0LL);
        this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
        if ( !this )
          goto LABEL_73;
        RecommendSupportEquipSelectListViewManager__RefreshEquipped(
          (RecommendSupportEquipSelectListViewManager_o *)this,
          *(const MethodInfo **)&kind);
        this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
        if ( !this )
          goto LABEL_73;
        RecommendSupportEquipSelectListViewManager__RefreshListDisp(
          (RecommendSupportEquipSelectListViewManager_o *)this,
          *(const MethodInfo **)&kind);
      }
      v6->fields.state = 2;
      v88 = v6->fields.supportServantEquipListViewManager;
      v89 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                           RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo,
                                                                           v37,
                                                                           v38,
                                                                           v39);
      RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
        v89,
        (Il2CppObject *)v6,
        (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
        v90);
      if ( v88 )
      {
        v88->fields.callbackFunc = v89;
        sub_1BCA784((PartyOrganizationUtility_o *)&v88->fields.callbackFunc, (int64_t)v89, v91, v92, v93, v94, v95, v96);
        RecommendSupportEquipSelectListViewManager__SetMode_33088268(v88, 2, v97);
        return;
      }
LABEL_73:
      sub_1BCAA3C(this, *(_QWORD *)&kind);
    case 2:
      v40 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v40 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
      v41 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v40, v40[4]);
      if ( v25 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
        v6->fields.state = 5;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( BYTE2(v25->fields.lockTabButton) )
          v46 = 1;
        else
          v46 = BYTE1(v25->fields.lockTabButton) != 0;
        v82 = (UserServantEntity_o *)v25->fields.explanationLabel;
        v83 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v42, v43, v44);
        ServantStatusDialog_EndDelegate___ctor(
          v83,
          (Il2CppObject *)v6,
          Method_RecommendSupportEquipSelectListMenu_EndShowServantEquip__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenServantEquipStatusDialog_30781580((CommonUI_o *)Instance, 0, v82, v46, v83, 0LL, 0LL);
          return;
        }
      }
      else
      {
        OverwriteAssetSoundName__PlaySystemSe(v41, 2, 0LL);
        v6->fields.state = 2;
        v59 = v6->fields.supportServantEquipListViewManager;
        v63 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                             RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo,
                                                                             v60,
                                                                             v61,
                                                                             v62);
        RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
          v63,
          (Il2CppObject *)v6,
          (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
          v64);
        if ( v59 )
        {
          v59->fields.callbackFunc = v63;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v59->fields.callbackFunc,
            (int64_t)v63,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70);
          RecommendSupportEquipSelectListViewManager__SetMode_33088268(v59, 2, v71);
          return;
        }
      }
      goto LABEL_73;
    case 1:
      v26 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
      v27 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v27, 8, 0LL);
      v31 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                           RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                           v28,
                                                                           v29,
                                                                           v30);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v31,
        (Il2CppObject *)v6,
        Method_RecommendSupportEquipSelectListMenu_EndDecide__,
        v32);
      RecommendSupportEquipSelectListMenu__StatusRequest(v6, v31, v33);
      return;
  }
  v47 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
    v47 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
  v48 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v47, v47[4]);
  OverwriteAssetSoundName__PlaySystemSe(v48, 1, 0LL);
  v6->fields.state = 3;
  RecommendSupportEquipSelectListMenu__Init(v6, v49);
  if ( v25 )
  {
    this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
    {
      v50 = this->fields.explanationLabel;
      this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( this )
      {
        v51 = v25->fields.explanationLabel;
        if ( v51 )
        {
          v52 = *(_OWORD *)&v51->fields.leftAnchor;
          normalTabSprite = (int32_t)this->fields.normalTabSprite;
          *(UnityEngine_MonoBehaviour_Fields *)&v100.fields.currentCryptoKey = v51->fields.UnityEngine_MonoBehaviour_Fields;
          *(_OWORD *)&v100.fields.fakeValue = v52;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
          v98 = v100;
          this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                            &v98,
                                                            0LL);
          v54 = v25->fields.explanationLabel;
          if ( v54 )
          {
            v55 = this;
            mTrans = v54->fields.mTrans;
            mChildren = v54->fields.mChildren;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&kind);
            *(_QWORD *)&v101.fields.currentCryptoKey = mTrans;
            *(_QWORD *)&v101.fields.fakeValue = mChildren;
            this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                              v101,
                                                              0LL);
            if ( v50 )
            {
              RecommendSupportData__SetEquipData(
                (RecommendSupportData_o *)v50,
                normalTabSprite,
                (int64_t)v55,
                (int32_t)this,
                0LL);
              this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( this )
              {
                RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)this, 0, v58);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  RecommendSupportSelectControl_o *Instance; // x0
  const MethodInfo *v9; // x1
  int64_t SelectEquipId; // x0
  const MethodInfo *v11; // x1
  int32_t state; // w8
  const MethodInfo *v13; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x20

  if ( (byte_4B12343 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_EndOpen__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6, v7);
    byte_4B12343 = 1;
  }
  RecommendSupportEquipSelectListMenu__Init(this, method);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  SelectEquipId = RecommendSupportSelectControl__get_SelectEquipId(Instance, v9);
  state = this->fields.state;
  this->fields.isSelectedSvt = SelectEquipId > 0;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.state = 2;
    RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v11);
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
          TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)Instance, 1, 0, 0, 0LL);
          Instance = (RecommendSupportSelectControl_o *)this->fields.supportServantEquipListViewManager;
          if ( Instance )
          {
            RecommendSupportEquipSelectListViewManager__CreateList(
              (RecommendSupportEquipSelectListViewManager_o *)Instance,
              v9);
            this->fields.state = 1;
            RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v13);
            Instance = (RecommendSupportSelectControl_o *)this->fields.supportServantEquipListViewManager;
            if ( Instance )
            {
              scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
              Instance = (RecommendSupportSelectControl_o *)RecommendSupportEquipSelectListViewManager__GetScaleButtonSpriteName(
                                                              (RecommendSupportEquipSelectListViewManager_o *)Instance,
                                                              v9);
              if ( scaleChangeTabSprite )
              {
                UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0LL);
                v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
                System_Action___ctor(
                  v18,
                  (Il2CppObject *)this,
                  Method_RecommendSupportEquipSelectListMenu_EndOpen__,
                  0LL);
                BaseMenu__Open((BaseMenu_o *)this, v18, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(Instance, v9);
  }
}


void __fastcall RecommendSupportEquipSelectListMenu__SetListManagerStatus(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  RecommendSupportEquipSelectListMenu_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x19
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int32_t v16; // w1

  v4 = this;
  if ( (byte_4B12346 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo, method, v2);
    this = (RecommendSupportEquipSelectListMenu_o *)sub_1BCA7E0(
                                                      &Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
                                                      v5,
                                                      v6);
    byte_4B12346 = 1;
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
  v8 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                      RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo,
                                                                      method,
                                                                      v2,
                                                                      v3);
  RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)v4,
    (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
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
  RecommendSupportEquipSelectListViewManager__SetMode_33088268(supportServantEquipListViewManager, v16, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu__SetModeTabKind(
        RecommendSupportEquipSelectListMenu_o *this,
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
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x8

  if ( (byte_4B12350 & 1) == 0 )
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
    byte_4B12350 = 1;
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
        RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v33);
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


void __fastcall RecommendSupportEquipSelectListMenu__StatusRequest(
        RecommendSupportEquipSelectListMenu_o *this,
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *callback,
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
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
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

  if ( (byte_4B12351 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_RecommendSupportEquipSelectListMenu_EndStatusSync__, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B12351 = 1;
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
    if ( RecommendSupportEquipSelectListViewManager__GetSwapChoiceList(
           supportServantEquipListViewManager,
           &choiceList,
           &v40,
           v3) )
    {
      this->fields.requestedCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requestedCallback,
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
        Method_RecommendSupportEquipSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
      supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)NetworkManager__getRequest_object_(
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
    if ( RecommendSupportEquipSelectListViewManager__GetSwapLockList(
           supportServantEquipListViewManager,
           &lockList,
           &unlockList,
           v3) )
    {
      this->fields.requestedCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requestedCallback,
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
        Method_RecommendSupportEquipSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
      supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)NetworkManager__getRequest_object_(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_1A08024;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07FDC;
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
  if ( (byte_4B12354 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B12354 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall RecommendSupportEquipSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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