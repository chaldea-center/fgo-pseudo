void __fastcall EquipGraphListMenu___ctor(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4B4405C & 1) == 0 )
  {
    sub_1BDB878(&BaseMenu_TypeInfo, method);
    byte_4B4405C = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__Callback(
        EquipGraphListMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x20
  struct EquipGraphListMenu_CallbackFunc_o *callbackFunc; // x22
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x21

  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      servantEquipListViewManager = this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1BDBAD4(0LL, result);
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, *(const MethodInfo **)&n);
    }
    p_callbackFunc->klass = 0LL;
    sub_1BDB81C(p_callbackFunc, 0, n, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, EquipGraphListViewItem_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      Item,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall EquipGraphListMenu__Close(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphListMenu__Close_40111188(this, 0LL, v2);
}


void __fastcall EquipGraphListMenu__Close_40111188(
        EquipGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t modeKind; // w1
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_4B4404E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_EquipGraphListMenu_EndClose__, v6);
    byte_4B4404E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v8);
  v9 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v9, 0LL);
}


void __fastcall EquipGraphListMenu__Decide(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  int32_t selectNum; // w1
  struct EquipGraphServantItem_o *servantItemInfo; // x23
  EquipGraphListViewItem_o *Item; // x1
  __int64 v28; // x21
  EventServantEntity_o *v29; // x22
  bool IsNoPeriod; // w0
  System_String_o *v31; // x20
  Il2CppObject *EndTimeStr; // x0
  System_String_o *v33; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v35; // x22
  System_Action_o *v36; // x23
  int32_t v37; // w22
  __int64 v38; // x8
  __int128 v39; // q1
  CommonUI_o *v40; // x19
  int64_t v41; // x21
  System_Action_bool__int__o *v42; // x23
  EquipGraphListMenu_RequestCallbackFunc_o *v43; // x20
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+60h] [xbp-50h]

  if ( (byte_4B44050 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_bool__int__TypeInfo, method);
    sub_1BDB878(&System_Action_TypeInfo, v3);
    sub_1BDB878(&Method_EquipGraphListMenu_Decide__, v4);
    sub_1BDB878(&Method_EquipGraphListMenu_EndCloseEventServantWarning__, v5);
    sub_1BDB878(&Method_EquipGraphListMenu_EndRequestClickDecide__, v6);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BDB878(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BDB878(&Method_EquipGraphListMenu___c__DisplayClass38_0__Decide_b__0__, v11);
    sub_1BDB878(&EquipGraphListMenu___c__DisplayClass38_0_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_5517/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, v13);
    sub_1BDB878(&StringLiteral_5518/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, v14);
    sub_1BDB878(&StringLiteral_7005/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, v15);
    byte_4B44050 = 1;
  }
  v16 = sub_1BDBAC4(EquipGraphListMenu___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_36;
  *(_QWORD *)(v16 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 24), (int32_t)this, v19, v20);
  v21 = Method_EquipGraphListMenu_Decide__;
  if ( (*((_BYTE *)Method_EquipGraphListMenu_Decide__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BDB890(Method_EquipGraphListMenu_Decide__);
  v22 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 8, 0, 0LL);
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  this->fields.state = 3;
  if ( !servantEquipListViewManager )
    goto LABEL_36;
  selectNum = this->fields.selectNum;
  servantItemInfo = servantEquipListViewManager->fields.servantItemInfo;
  if ( (selectNum & 0x80000000) != 0 )
    Item = 0LL;
  else
    Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, selectNum, v23);
  *(_QWORD *)(v16 + 16) = Item;
  v28 = v16 + 16;
  sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)Item, (int32_t)v23, v24);
  if ( !*(_QWORD *)(v16 + 16) )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        goto LABEL_36;
      ListViewManager__SetScrollBarValue((ListViewManager_o *)servantEquipListViewManager, 0LL);
    }
LABEL_35:
    v43 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BDBAC4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v43,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndRequestClickDecide__,
      v44);
    EquipGraphListMenu__StatusRequest(this, v43, v45);
    return;
  }
  if ( !servantItemInfo )
    goto LABEL_36;
  servantEquipListViewManager = (EquipGraphListViewManager_o *)servantItemInfo->fields.userServantEntity;
  if ( !servantEquipListViewManager )
    goto LABEL_36;
  servantEquipListViewManager = (EquipGraphListViewManager_o *)UserServantEntity__getEventServant(
                                                                 (UserServantEntity_o *)servantEquipListViewManager,
                                                                 0LL);
  if ( !servantItemInfo->fields.userServantEntity )
    goto LABEL_36;
  v29 = (EventServantEntity_o *)servantEquipListViewManager;
  if ( UserServantEntity__IsEventJoin(servantItemInfo->fields.userServantEntity, 0LL) )
  {
    servantEquipListViewManager = (EquipGraphListViewManager_o *)servantItemInfo->fields.userServantEntity;
    if ( !servantEquipListViewManager )
      goto LABEL_36;
    IsNoPeriod = UserServantEntity__IsNoPeriod((UserServantEntity_o *)servantEquipListViewManager, 0LL);
    if ( v29 )
    {
      if ( !IsNoPeriod )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5517/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, 0LL);
        EndTimeStr = (Il2CppObject *)EventServantEntity__getEndTimeStr(v29, 0LL);
        v33 = System_String__Format(v31, EndTimeStr, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5518/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, 0LL);
        v36 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(v36, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseEventServantWarning__, 0LL);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v35,
            v33,
            v36,
            -1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0LL,
            0.0,
            0,
            0LL);
          return;
        }
LABEL_36:
        sub_1BDBAD4(servantEquipListViewManager, v18);
      }
    }
  }
  servantEquipListViewManager = (EquipGraphListViewManager_o *)ConstantMaster__getValue(
                                                                 (System_String_o *)StringLiteral_7005/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/,
                                                                 0LL);
  if ( !*(_QWORD *)v28 )
    goto LABEL_36;
  v37 = (int)servantEquipListViewManager;
  if ( (int)servantEquipListViewManager < 1 || *(_DWORD *)(*(_QWORD *)v28 + 204LL) != 1 )
    goto LABEL_35;
  servantEquipListViewManager = (EquipGraphListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(_QWORD *)v28 )
    goto LABEL_36;
  v38 = *(_QWORD *)(*(_QWORD *)v28 + 112LL);
  if ( !v38 )
    goto LABEL_36;
  v39 = *(_OWORD *)(v38 + 32);
  v40 = (CommonUI_o *)servantEquipListViewManager;
  *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)(v38 + 16);
  *(_OWORD *)&v47.fields.fakeValue = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v46 = v47;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v46, 0LL);
  v42 = (System_Action_bool__int__o *)sub_1BDBAC4(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v42,
    (Il2CppObject *)v16,
    Method_EquipGraphListMenu___c__DisplayClass38_0__Decide_b__0__,
    0LL);
  if ( !v40 )
    goto LABEL_36;
  CommonUI__OpenGrandBondEquipSkillSelectDialog(v40, v41, v37, v42, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndClickTabChoice(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_1BDBAD4(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_40111656(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__SetTabKind(this, 2, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndClickTabLock(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_1BDBAD4(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_40111656(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__SetTabKind(this, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndClickTabStatus(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_1BDBAD4(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_40111656(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__SetTabKind(this, 0, 0, v3);
}


void __fastcall EquipGraphListMenu__EndClose(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EquipGraphListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BDB81C(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall EquipGraphListMenu__EndCloseEventServantWarning(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EquipGraphListMenu_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4B44051 & 1) == 0 )
  {
    sub_1BDB878(&Method_EquipGraphListMenu_EndRequestClickDecide__, method);
    sub_1BDB878(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    byte_4B44051 = 1;
  }
  v4 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BDBAC4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    v5);
  EquipGraphListMenu__StatusRequest(this, v4, v6);
}


void __fastcall EquipGraphListMenu__EndCloseList(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListMenu__EndCloseShowServantEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4B4405A & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_EquipGraphListMenu_OnSelectServantEquip__, v3);
    byte_4B4405A = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v5 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1BDBAC4(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    v6);
  if ( !servantEquipListViewManager )
    sub_1BDBAD4(v7, v8);
  servantEquipListViewManager->fields.callbackFunc = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&servantEquipListViewManager->fields.callbackFunc, (int32_t)v5, v9, v10);
  EquipGraphListViewManager__SetMode_40111656(servantEquipListViewManager, 2, v11);
}


void __fastcall EquipGraphListMenu__EndOpen(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  Il2CppObject *Instance; // x20
  TutorialFlag_ImageId_array *v7; // x0
  TutorialFlag_ImageId_array *v8; // x1
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // w8
  int32_t modeKind; // w1

  if ( (byte_4B4404D & 1) == 0 )
  {
    sub_1BDB878(&TutorialFlag_ImageId___TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&TutorialFlag_TypeInfo, v4);
    byte_4B4404D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_39449392(110, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (TutorialFlag_ImageId_array *)sub_1BDB920(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v7 )
      goto LABEL_13;
    max_length = v7->max_length;
    v8 = v7;
    if ( !max_length || (v7->m_Items[1] = 4, max_length == 1) )
      sub_1BDBADC(v7, v7, v9);
    v7->m_Items[2] = 5;
    if ( !Instance )
LABEL_13:
      sub_1BDBAD4(v7, v8);
    CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v7, 110, 0LL, 0LL, 0LL, 0LL);
  }
  modeKind = this->fields.modeKind;
  this->fields.state = 2;
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndRequestClickCancel(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_1BDBAD4(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_40111656(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__Callback(this, 0, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndRequestClickDecide(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_1BDBAD4(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_40111656(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__Callback(this, 1, this->fields.selectNum, v3);
}


void __fastcall EquipGraphListMenu__EndSelectEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4B44058 & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_EquipGraphListMenu_OnSelectServantEquip__, v3);
    byte_4B44058 = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v5 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1BDBAC4(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    v6);
  if ( !servantEquipListViewManager )
    sub_1BDBAD4(v7, v8);
  servantEquipListViewManager->fields.callbackFunc = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&servantEquipListViewManager->fields.callbackFunc, (int32_t)v5, v9, v10);
  EquipGraphListViewManager__SetMode_40111656(servantEquipListViewManager, 2, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndShowServantEquip(
        EquipGraphListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v8; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4B44059 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_EquipGraphListMenu_EndCloseShowServantEquip__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B44059 = 1;
  }
  if ( isDecide )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1BDBAD4(servantEquipListViewManager, isDecide);
    }
    EquipGraphListViewManager__SetMode_40111656(servantEquipListViewManager, 3, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v10, 0LL);
}


void __fastcall EquipGraphListMenu__EndStatusSync(
        EquipGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_requedstCallback; // x0
  struct EquipGraphListMenu_RequestCallbackFunc_o *v5; // x19
  struct EquipGraphListMenu_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (CGThumbnailListItem_o *)&this->fields.requedstCallback;
  v5 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0LL;
    sub_1BDB81C(p_requedstCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      1LL,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


int32_t __fastcall EquipGraphListMenu__GetModeKind(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


void __fastcall EquipGraphListMenu__Init(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0

  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  if ( !servantEquipListViewManager )
    sub_1BDBAD4(0LL, method);
  EquipGraphListViewManager__DestroyList(servantEquipListViewManager, method);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall EquipGraphListMenu__OnClickCancel(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewManager_o *servantEquipListViewManager; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4B44052 & 1) == 0 )
  {
    sub_1BDB878(&Method_EquipGraphListMenu_EndRequestClickCancel__, method);
    sub_1BDB878(&Method_EquipGraphListMenu_OnClickCancel__, v3);
    sub_1BDB878(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B44052 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1BDBAD4(0LL, method);
      ListViewManager__SetScrollBarValue(servantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    v6 = Method_EquipGraphListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BDB890(Method_EquipGraphListMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
    v8 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BDBAC4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndRequestClickCancel__,
      v9);
    EquipGraphListMenu__StatusRequest(this, v8, v10);
  }
}


void __fastcall EquipGraphListMenu__OnClickDecide(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *SelectItem; // x0
  const MethodInfo *v5; // x1
  int32_t index; // w8

  if ( this->fields.state == 2 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      sub_1BDBAD4(0LL, method);
    SelectItem = EquipGraphListViewManager__GetSelectItem(servantEquipListViewManager, method);
    if ( SelectItem )
      index = SelectItem->fields.index;
    else
      index = -1;
    this->fields.selectNum = index;
    EquipGraphListMenu__Decide(this, v5);
  }
}


void __fastcall EquipGraphListMenu__OnClickScaleChange(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4B4405B & 1) == 0 )
  {
    sub_1BDB878(&Method_EquipGraphListMenu_OnClickScaleChange__, method);
    byte_4B4405B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EquipGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_EquipGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ChangeIconScale(servantEquipListViewManager, v5),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          servantEquipListViewManager = (EquipGraphListViewManager_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                                                         servantEquipListViewManager,
                                                                         v5),
          !scaleChangeTabSprite) )
    {
      sub_1BDBAD4(servantEquipListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantEquipListViewManager, 0LL);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabChoice(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4B44055 & 1) == 0 )
  {
    sub_1BDB878(&Method_EquipGraphListMenu_EndClickTabChoice__, method);
    sub_1BDB878(&Method_EquipGraphListMenu_OnClickTabChoice__, v3);
    sub_1BDB878(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B44055 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_EquipGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_EquipGraphListMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v9 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BDBAC4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabChoice__,
          v10);
        EquipGraphListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BDBAC4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabChoice__,
        v13);
      EquipGraphListMenu__StatusRequest(this, v12, v14);
    }
    EquipGraphListMenu__SetTabKind(this, 2, 0, v7);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabLock(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4B44054 & 1) == 0 )
  {
    sub_1BDB878(&Method_EquipGraphListMenu_EndClickTabLock__, method);
    sub_1BDB878(&Method_EquipGraphListMenu_OnClickTabLock__, v3);
    sub_1BDB878(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B44054 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_EquipGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_EquipGraphListMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v9 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BDBAC4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabLock__,
          v10);
        EquipGraphListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BDBAC4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabLock__,
        v13);
      EquipGraphListMenu__StatusRequest(this, v12, v14);
    }
    EquipGraphListMenu__SetTabKind(this, 1, 0, v7);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabStatus(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4B44053 & 1) == 0 )
  {
    sub_1BDB878(&Method_EquipGraphListMenu_EndClickTabStatus__, method);
    sub_1BDB878(&Method_EquipGraphListMenu_OnClickTabStatus__, v3);
    sub_1BDB878(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B44053 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_EquipGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_EquipGraphListMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BDBAC4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndClickTabStatus__,
      v8);
    EquipGraphListMenu__StatusRequest(this, v7, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__OnSelectServantEquip(
        EquipGraphListMenu_o *this,
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
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x20
  int32_t modeKind; // w8
  struct EquipGraphListViewManager_o *v16; // x20
  EquipGraphListViewManager_CallbackFunc_o *v17; // x0
  const MethodInfo *v18; // x3
  intptr_t v19; // w2
  int32_t v20; // w8
  EquipGraphListViewManager_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x3
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo *v26; // x3
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  Il2CppObject *Instance; // x0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v31; // x22
  const MethodInfo *v32; // x1
  bool v33; // w20
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  EquipGraphListViewManager_CallbackFunc_c *v38; // x0
  struct EquipGraphListViewManager_CallbackFunc_o *v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  ServantStatusDialog_EndDelegate_o *v43; // x23

  if ( (byte_4B44057 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&EquipGraphListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1BDB878(&ServantStatusDialog_EndDelegate_TypeInfo, v8);
    sub_1BDB878(&Method_EquipGraphListMenu_EndSelectEquip__, v9);
    sub_1BDB878(&Method_EquipGraphListMenu_EndShowServantEquip__, v10);
    sub_1BDB878(&Method_EquipGraphListMenu_OnSelectServantEquip__, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4B44057 = 1;
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
      servantEquipListViewManager = this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        goto LABEL_45;
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, *(const MethodInfo **)&n);
    }
    if ( kind == 3 )
    {
      modeKind = this->fields.modeKind;
      if ( modeKind )
      {
        if ( (unsigned int)(modeKind - 1) >= 2 )
          return;
        this->fields.state = 2;
        v16 = this->fields.servantEquipListViewManager;
        v17 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1BDBAC4(EquipGraphListViewManager_CallbackFunc_TypeInfo);
        v19 = (int)Method_EquipGraphListMenu_OnSelectServantEquip__;
        goto LABEL_40;
      }
      v27 = Method_EquipGraphListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1BDB890(Method_EquipGraphListMenu_OnSelectServantEquip__);
      v28 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v27, v27[4]);
      if ( Item )
      {
        OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0LL);
        this->fields.state = 5;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        userSvtEntity = Item->fields.userSvtEntity;
        v31 = (CommonUI_o *)Instance;
        v33 = EquipGraphListViewItem__get_IsUse(Item, v32) || Item->fields.isBase;
        v43 = (ServantStatusDialog_EndDelegate_o *)sub_1BDBAC4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v43,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndShowServantEquip__,
          0LL);
        if ( v31 )
        {
          CommonUI__OpenServantEquipStatusDialog_30848764(v31, 0, userSvtEntity, v33, v43, 0LL, 0LL);
          return;
        }
        goto LABEL_45;
      }
      OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0LL);
      this->fields.state = 2;
      v16 = this->fields.servantEquipListViewManager;
      v38 = EquipGraphListViewManager_CallbackFunc_TypeInfo;
    }
    else
    {
      if ( kind != 2 )
      {
        if ( kind == 1 )
        {
          EquipGraphListMenu__Decide(this, *(const MethodInfo **)&kind);
        }
        else
        {
          v24 = Method_EquipGraphListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v24 = (_QWORD *)sub_1BDB890(Method_EquipGraphListMenu_OnSelectServantEquip__);
          v25 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v24, v24[4]);
          OverwriteAssetSoundName__PlaySystemSe(v25, 1, 0, 0LL);
          this->fields.state = 3;
          EquipGraphListMenu__Callback(this, 0, -1, v26);
        }
        return;
      }
      v20 = this->fields.modeKind;
      if ( v20 == 2 )
      {
        v34 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v34 = (_QWORD *)sub_1BDB890(Method_EquipGraphListMenu_OnSelectServantEquip__);
        v35 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v34, v34[4]);
        OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0, 0LL);
        if ( !Item )
          goto LABEL_45;
        Item->fields.isSwapChoice ^= 1u;
      }
      else
      {
        if ( v20 != 1 )
        {
          if ( v20 )
            return;
          v21 = this->fields.servantEquipListViewManager;
          v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)this, Method_EquipGraphListMenu_EndSelectEquip__, 0LL);
          if ( v21 )
          {
            EquipGraphListViewManager__SelectEquip(v21, Item, v22, v23);
            return;
          }
LABEL_45:
          sub_1BDBAD4(servantEquipListViewManager, *(_QWORD *)&kind);
        }
        v36 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v36 = (_QWORD *)sub_1BDB890(Method_EquipGraphListMenu_OnSelectServantEquip__);
        v37 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v36, v36[4]);
        OverwriteAssetSoundName__PlaySystemSe(v37, 11, 0, 0LL);
        if ( !Item )
          goto LABEL_45;
        Item->fields.isSwapLock ^= 1u;
      }
      this->fields.state = 2;
      v16 = this->fields.servantEquipListViewManager;
      v38 = EquipGraphListViewManager_CallbackFunc_TypeInfo;
    }
    v17 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1BDBAC4(v38);
    v19 = (int)Method_EquipGraphListMenu_OnSelectServantEquip__;
LABEL_40:
    v39 = v17;
    EquipGraphListViewManager_CallbackFunc___ctor(v17, (Il2CppObject *)this, v19, v18);
    if ( v16 )
    {
      v16->fields.callbackFunc = v39;
      sub_1BDB81C((CGThumbnailListItem_o *)&v16->fields.callbackFunc, (int32_t)v39, v40, v41);
      EquipGraphListViewManager__SetMode_40111656(v16, 2, v42);
      return;
    }
    goto LABEL_45;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__Open(
        EquipGraphListMenu_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        EquipGraphListMenu_CallbackFunc_o *callback,
        int32_t type,
        const MethodInfo *method)
{
  EquipGraphListMenu_o *v14; // x19
  __int64 v15; // x1
  int32_t state; // w8
  int32_t modeKind; // w1
  const MethodInfo *v18; // x3
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  int v22; // w8
  int32_t v23; // w4
  __int64 v24; // x1
  const MethodInfo *v25; // x6
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v28; // x20

  v14 = this;
  if ( (byte_4B4404B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, baseDeckItemList);
    this = (EquipGraphListMenu_o *)sub_1BDB878(&Method_EquipGraphListMenu_EndOpen__, v15);
    byte_4B4404B = 1;
  }
  state = v14->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      if ( !partyItem )
        goto LABEL_26;
      this = (EquipGraphListMenu_o *)PartyListViewItem__GetMember(partyItem, member, 0LL);
      if ( !this )
        goto LABEL_26;
      this = (EquipGraphListMenu_o *)PartyOrganizationListViewItem__GetEquipList(
                                       (PartyOrganizationListViewItem_o *)this,
                                       0LL);
      if ( !this )
        goto LABEL_26;
      if ( LODWORD(this->fields.m_CancellationTokenSource) <= type )
        sub_1BDBADC(this, baseDeckItemList, v19);
      v14->fields.isSelectedSvt = *((_QWORD *)&this->fields.basePanelList + type) > 0LL;
      v14->fields.callbackFunc = callback;
      sub_1BDB81C((CGThumbnailListItem_o *)&v14->fields.callbackFunc, (int32_t)callback, v19, v20);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      EquipGraphListMenu__SetTabKind(v14, v14->fields.modeKind, 1, v21);
      this = (EquipGraphListMenu_o *)v14->fields.titleInfo;
      if ( !this )
        goto LABEL_26;
      v22 = type == 1 ? 24 : 23;
      v23 = type == 2 ? 25 : v22;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, v23, 0LL);
      this = (EquipGraphListMenu_o *)v14->fields.titleInfo;
      if ( !this )
        goto LABEL_26;
      TitleInfoControl__setBackBtnSprite_38890076((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v14->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1BDBAD4(0LL, v24);
      EquipGraphListViewManager__CreateList(
        servantEquipListViewManager,
        baseDeckItemList,
        partyItem,
        member,
        setupInfo,
        type,
        v25);
      this = (EquipGraphListMenu_o *)v14->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v14->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             (const MethodInfo *)baseDeckItemList),
            !scaleChangeTabSprite) )
      {
LABEL_26:
        sub_1BDBAD4(this, baseDeckItemList);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v14->fields.state = 1;
      v28 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)v14, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v14, v28, 0LL);
    }
  }
  else
  {
    v14->fields.callbackFunc = callback;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&v14->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      *(const MethodInfo **)&member);
    modeKind = v14->fields.modeKind;
    v14->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v14, modeKind, 0, v18);
  }
}


void __fastcall EquipGraphListMenu__Open_40108508(
        EquipGraphListMenu_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        EquipGraphListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  EquipGraphListMenu_o *v10; // x19
  __int64 v11; // x1
  int32_t state; // w8
  int32_t modeKind; // w1
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  const MethodInfo *v19; // x4
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v22; // x20

  v10 = this;
  if ( (byte_4B4404C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, partyItem);
    this = (EquipGraphListMenu_o *)sub_1BDB878(&Method_EquipGraphListMenu_EndOpen__, v11);
    byte_4B4404C = 1;
  }
  state = v10->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      if ( !partyItem )
        goto LABEL_17;
      this = (EquipGraphListMenu_o *)WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
      if ( !this )
        goto LABEL_17;
      v10->fields.isSelectedSvt = PartyOrganizationListViewItem__get_EquipUserSvtId(
                                    (PartyOrganizationListViewItem_o *)this,
                                    0LL) > 0;
      v10->fields.callbackFunc = callback;
      sub_1BDB81C((CGThumbnailListItem_o *)&v10->fields.callbackFunc, (int32_t)callback, v15, v16);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
      if ( !this )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      EquipGraphListMenu__SetTabKind(v10, v10->fields.modeKind, 1, v17);
      this = (EquipGraphListMenu_o *)v10->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 23, 0LL);
      this = (EquipGraphListMenu_o *)v10->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_38890076((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v10->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1BDBAD4(0LL, v18);
      EquipGraphListViewManager__CreateList_40109428(servantEquipListViewManager, partyItem, member, setupInfo, v19);
      this = (EquipGraphListMenu_o *)v10->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v10->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             (const MethodInfo *)partyItem),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_1BDBAD4(this, partyItem);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v10->fields.state = 1;
      v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)v10, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v10, v22, 0LL);
    }
  }
  else
  {
    v10->fields.callbackFunc = callback;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&v10->fields.callbackFunc,
      (int32_t)callback,
      member,
      (const MethodInfo *)setupInfo);
    modeKind = v10->fields.modeKind;
    v10->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v10, modeKind, 0, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__SetTabKind(
        EquipGraphListMenu_o *this,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  EquipGraphListMenu_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  bool v18; // w21
  __int64 *v19; // x8
  bool v20; // w23
  unsigned int v21; // w21
  UICommonButton_o *statusTabButton; // x22
  bool enabled; // w0
  __int64 *v24; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v26; // w0
  __int64 *v27; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v29; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v31; // x8
  int32_t state; // w8
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x21
  EquipGraphListViewManager_CallbackFunc_o *v34; // x20
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1

  v6 = this;
  if ( (byte_4B4404F & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1BDB878(&Method_EquipGraphListMenu_OnSelectServantEquip__, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_11593/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/, v9);
    sub_1BDB878(&StringLiteral_17650/*"button_allchoice_reg"*/, v10);
    sub_1BDB878(&StringLiteral_17653/*"button_alllock_unreg"*/, v11);
    sub_1BDB878(&StringLiteral_11595/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v12);
    sub_1BDB878(&StringLiteral_11594/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/, v13);
    sub_1BDB878(&StringLiteral_17666/*"button_select_reg"*/, v14);
    sub_1BDB878(&StringLiteral_17667/*"button_select_unreg"*/, v15);
    sub_1BDB878(&StringLiteral_17652/*"button_alllock_reg"*/, v16);
    this = (EquipGraphListMenu_o *)sub_1BDB878(&StringLiteral_17651/*"button_allchoice_unreg"*/, v17);
    byte_4B4404F = 1;
  }
  v18 = !v6->fields.isInitTab || isInit;
  if ( v18 || v6->fields.modeKind != modeKind )
  {
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_46;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, void *, const MethodInfo *))this->klass[1]._1.namespaze)(
      this,
      1LL,
      this->klass[1]._1.byval_arg.data,
      method);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 0, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabSprite;
    if ( !this )
      goto LABEL_46;
    v19 = &StringLiteral_17666/*"button_select_reg"*/;
    if ( modeKind )
      v19 = &StringLiteral_17667/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v19, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_46;
    v20 = !v18;
    v21 = !v18;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v21,
                                     this->klass[1]._1.interfaceOffsets);
    statusTabButton = v6->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_46;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(statusTabButton, enabled, v21, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_46;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, void *))this->klass[1]._1.namespaze)(
      this,
      1LL,
      this->klass[1]._1.byval_arg.data);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 1, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabSprite;
    if ( !this )
      goto LABEL_46;
    v24 = &StringLiteral_17652/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v24 = &StringLiteral_17653/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v24, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_46;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v20,
                                     this->klass[1]._1.interfaceOffsets);
    lockTabButton = v6->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_46;
    v26 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v26, v20, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_46;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, void *))this->klass[1]._1.namespaze)(
      this,
      1LL,
      this->klass[1]._1.byval_arg.data);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 2, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabSprite;
    if ( !this )
      goto LABEL_46;
    v27 = &StringLiteral_17650/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v27 = &StringLiteral_17651/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v27, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_46;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v20,
                                     this->klass[1]._1.interfaceOffsets);
    choiceTabButton = v6->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_46;
    v29 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v29, v20, 0LL);
    if ( modeKind == 2 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = &StringLiteral_11593/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( modeKind == 1 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = &StringLiteral_11594/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( modeKind )
        goto LABEL_40;
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = &StringLiteral_11595/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    this = (EquipGraphListMenu_o *)LocalizationManager__Get((System_String_o *)*v31, 0LL);
    if ( !explanationLabel )
      goto LABEL_46;
    UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
  }
LABEL_40:
  state = v6->fields.state;
  servantEquipListViewManager = v6->fields.servantEquipListViewManager;
  v6->fields.isInitTab = 1;
  v6->fields.modeKind = modeKind;
  if ( state != 2 )
  {
    if ( servantEquipListViewManager )
    {
      v38 = 1;
      goto LABEL_45;
    }
LABEL_46:
    sub_1BDBAD4(this, *(_QWORD *)&modeKind);
  }
  v34 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1BDBAC4(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v34,
    (Il2CppObject *)v6,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    v35);
  if ( !servantEquipListViewManager )
    goto LABEL_46;
  servantEquipListViewManager->fields.callbackFunc = v34;
  sub_1BDB81C((CGThumbnailListItem_o *)&servantEquipListViewManager->fields.callbackFunc, (int32_t)v34, v36, v37);
  v38 = 2;
LABEL_45:
  EquipGraphListViewManager__SetMode_40111656(servantEquipListViewManager, v38, (const MethodInfo *)isInit);
}


void __fastcall EquipGraphListMenu__StatusRequest(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x1
  System_Int64_array *v15; // x2
  bool v16; // w4
  bool v17; // w5
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  System_Int64_array *v21; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B44056 & 1) == 0 )
  {
    sub_1BDB878(&Method_EquipGraphListMenu_EndStatusSync__, callback);
    sub_1BDB878(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1BDB878(&NetworkManager_TypeInfo, v7);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4B44056 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v21 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      goto LABEL_21;
    if ( EquipGraphListViewManager__GetSwapChoiceList(servantEquipListViewManager, &choiceList, &v21, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v18, v19);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                                     v20,
                                                                     (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v15 = v21;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BDBAD4(servantEquipListViewManager, callback);
    }
  }
  else if ( modeKind == 1 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      goto LABEL_21;
    if ( EquipGraphListViewManager__GetSwapLockList(servantEquipListViewManager, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v11, v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                                     v13,
                                                                     (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v15 = unlockList;
        v14 = lockList;
        v16 = 1;
        v17 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)servantEquipListViewManager,
          v14,
          v15,
          0,
          v16,
          v17,
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


void __fastcall EquipGraphListMenu__add_callbackFunc(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EquipGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EquipGraphListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListMenu_o *v11; // x0
  EquipGraphListMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B44049 & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_4B44049 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EquipGraphListMenu_CallbackFunc_c *)v8->klass != EquipGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BDBD94(v8);
  EquipGraphListMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EquipGraphListMenu__remove_callbackFunc(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EquipGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EquipGraphListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B4404A & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_4B4404A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EquipGraphListMenu_CallbackFunc_c *)v8->klass != EquipGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BDBD94(v8);
  EquipGraphListMenu__GetModeKind(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu_CallbackFunc___ctor(
        EquipGraphListMenu_CallbackFunc_o *this,
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A25388;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A25330;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EquipGraphListMenu_CallbackFunc__BeginInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        EquipGraphListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_4B4405D & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4B4405D = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListMenu_ResultKind_TypeInfo, &v12, item, callback, object);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v11, callback, object);
}


void __fastcall EquipGraphListMenu_CallbackFunc__EndInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall EquipGraphListMenu_CallbackFunc__Invoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        EquipGraphListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, EquipGraphListViewItem_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    item,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu_RequestCallbackFunc___ctor(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A253E4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2539C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EquipGraphListMenu_RequestCallbackFunc__BeginInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4B4405E & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, isRequest);
    byte_4B4405E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall EquipGraphListMenu_RequestCallbackFunc__EndInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall EquipGraphListMenu_RequestCallbackFunc__Invoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall EquipGraphListMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B4405F & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListMenu___c_TypeInfo, v1);
    byte_4B4405F = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EquipGraphListMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EquipGraphListMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphListMenu___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EquipGraphListMenu___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EquipGraphListMenu___c___ctor(EquipGraphListMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu___c___Open_b__28_0(
        EquipGraphListMenu___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B44060 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4B44060 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu___c___Open_b__29_0(
        EquipGraphListMenu___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B44061 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4B44061 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}


void __fastcall EquipGraphListMenu___c__DisplayClass38_0___ctor(
        EquipGraphListMenu___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu___c__DisplayClass38_0___Decide_b__0(
        EquipGraphListMenu___c__DisplayClass38_0_o *this,
        bool isDecide,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  EquipGraphListMenu___c__DisplayClass38_0_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EquipGraphListViewItem_o *equipItem; // x8
  Il2CppObject *_4__this; // x19
  EquipGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  struct EquipGraphListMenu_o *v15; // x20
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x19
  EquipGraphListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2

  v6 = this;
  if ( (byte_4B44062 & 1) == 0 )
  {
    sub_1BDB878(&EquipGraphListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BDB878(&Method_EquipGraphListMenu_EndRequestClickDecide__, v7);
    sub_1BDB878(&Method_EquipGraphListMenu_OnSelectServantEquip__, v8);
    this = (EquipGraphListMenu___c__DisplayClass38_0_o *)sub_1BDB878(
                                                           &EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                           v9);
    byte_4B44062 = 1;
  }
  if ( isDecide )
  {
    equipItem = v6->fields.equipItem;
    if ( equipItem )
    {
      equipItem->fields._EquipFriendShipSkillChange_k__BackingField = equipBondSkillChange;
      _4__this = (Il2CppObject *)v6->fields.__4__this;
      v12 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BDBAC4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v12,
        _4__this,
        Method_EquipGraphListMenu_EndRequestClickDecide__,
        v13);
      if ( _4__this )
      {
        EquipGraphListMenu__StatusRequest((EquipGraphListMenu_o *)_4__this, v12, v14);
        return;
      }
    }
LABEL_10:
    sub_1BDBAD4(this, isDecide);
  }
  v15 = v6->fields.__4__this;
  if ( !v15 )
    goto LABEL_10;
  v15->fields.state = 2;
  servantEquipListViewManager = v15->fields.servantEquipListViewManager;
  v17 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1BDBAC4(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)v15,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    v18);
  if ( !servantEquipListViewManager )
    goto LABEL_10;
  servantEquipListViewManager->fields.callbackFunc = v17;
  sub_1BDB81C((CGThumbnailListItem_o *)&servantEquipListViewManager->fields.callbackFunc, (int32_t)v17, v19, v20);
  EquipGraphListViewManager__SetMode_40111656(servantEquipListViewManager, 2, v21);
}