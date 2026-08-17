void EquipGraphListMenu___ctor(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_596FC46 & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596FC46 = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__Callback(EquipGraphListMenu_o *this, int32_t result, int32_t n, const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EquipGraphListMenu_CallbackFunc_o **p_callbackFunc; // x21
  struct EquipGraphListMenu_CallbackFunc_o *callbackFunc; // x23
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x22

  p_callbackFunc = &this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( n < 0 )
    {
      Item = 0;
    }
    else
    {
      servantEquipListViewManager = this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_2213CDC(0, *(_QWORD *)&result);
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, *(const MethodInfo **)&n);
    }
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_callbackFunc,
      0,
      *(System_String_o **)&n,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, _QWORD, EquipGraphListViewItem_o *, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)result,
      Item,
      (unsigned int)this->fields.equipGraphType,
      callbackFunc->fields.method);
  }
}


void EquipGraphListMenu__Close(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphListMenu__Close_47936452(this, 0, v2);
}


void EquipGraphListMenu__Close_47936452(
        EquipGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t modeKind; // w1
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_596FC38 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EquipGraphListMenu_EndClose__);
    byte_596FC38 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v11);
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EquipGraphListMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0);
}


void EquipGraphListMenu__Decide(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t servantEquipListViewManager; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  MethodInfo *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t selectNum; // w1
  __int64 v21; // x29
  EquipGraphListViewItem_o *Item; // x1
  __int64 v23; // x22
  EventServantEntity_o *v24; // x21
  __int64 v25; // x1
  System_String_o *v26; // x20
  Il2CppObject *EndTimeStr; // x0
  System_String_o *v28; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v30; // x22
  System_Action_o *v31; // x23
  int32_t Value; // w0
  int32_t equipGraphType; // w8
  int32_t v34; // w21
  __int64 v35; // x8
  CommonUI_o *v36; // x19
  __int128 v37; // q1
  int64_t v38; // x22
  System_Action_bool__int__o *v39; // x23
  EquipGraphListMenu_RequestCallbackFunc_o *v40; // x20
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  struct System_Int64_array *equipIdList; // x23
  __int64 v44; // x8
  __int64 v45; // x9
  struct System_Int64_array *v46; // x10
  __int64 v47; // x27
  __int64 v48; // x28
  __int64 v49; // x25
  __int64 v50; // x26
  int64_t v51; // x23
  __int64 v52; // x1
  Il2CppObject *v53; // x24
  int32_t v54; // w27
  ServantEntity_o *ServantEntity; // x23
  __int64 v56; // x8
  CommonUI_o *v57; // x19
  __int128 v58; // q1
  __int64 v59; // x8
  int64_t v60; // x22
  int32_t v61; // w24
  System_Action_bool__bool__int__o *v62; // x25
  PartyOrganizationUtility_o *v63; // x20
  __int64 v64; // x26
  __int64 v65; // x27
  int32_t v66; // w26
  System_String_o *ServantShortName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+80h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_596FC3A & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__int__TypeInfo);
    sub_2213A60(&System_Action_bool__bool__int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_EquipGraphListMenu_Decide__);
    sub_2213A60(&Method_EquipGraphListMenu_EndCloseEventServantWarning__);
    sub_2213A60(&Method_EquipGraphListMenu_EndRequestClickDecide__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_EquipGraphListMenu___c__DisplayClass40_0__Decide_b__0__);
    sub_2213A60(&Method_EquipGraphListMenu___c__DisplayClass40_0__Decide_b__1__);
    sub_2213A60(&EquipGraphListMenu___c__DisplayClass40_0_TypeInfo);
    sub_2213A60(&StringLiteral_5684/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/);
    sub_2213A60(&StringLiteral_5685/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/);
    sub_2213A60(&StringLiteral_7296/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    byte_596FC3A = 1;
  }
  v3 = sub_2213CCC(EquipGraphListMenu___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_63;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = Method_EquipGraphListMenu_Decide__;
  if ( (*((_BYTE *)Method_EquipGraphListMenu_Decide__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_2213A78(Method_EquipGraphListMenu_Decide__);
  v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0, 0);
  servantEquipListViewManager = (int64_t)this->fields.servantEquipListViewManager;
  this->fields.state = 3;
  if ( !servantEquipListViewManager )
    goto LABEL_63;
  selectNum = this->fields.selectNum;
  v21 = *(_QWORD *)(servantEquipListViewManager + 488);
  if ( selectNum < 0 )
    Item = 0;
  else
    Item = EquipGraphListViewManager__GetItem(
             (EquipGraphListViewManager_o *)servantEquipListViewManager,
             selectNum,
             v14);
  *(_QWORD *)(v3 + 16) = Item;
  v23 = v3 + 16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 16),
    (int32_t)Item,
    (System_String_o *)v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !*(_QWORD *)(v3 + 16) )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (int64_t)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        goto LABEL_63;
      ListViewManager__SetScrollBarValue((ListViewManager_o *)servantEquipListViewManager, 0);
    }
    goto LABEL_35;
  }
  if ( !v21 )
    goto LABEL_63;
  servantEquipListViewManager = *(_QWORD *)(v21 + 24);
  if ( !servantEquipListViewManager )
    goto LABEL_63;
  servantEquipListViewManager = (int64_t)UserServantEntity__getEventServant(
                                           (UserServantEntity_o *)servantEquipListViewManager,
                                           0);
  if ( !*(_QWORD *)(v21 + 24) )
    goto LABEL_63;
  v24 = (EventServantEntity_o *)servantEquipListViewManager;
  if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(v21 + 24), 0) )
  {
    servantEquipListViewManager = *(_QWORD *)(v21 + 24);
    if ( !servantEquipListViewManager )
      goto LABEL_63;
    if ( !UserServantEntity__IsNoPeriod((UserServantEntity_o *)servantEquipListViewManager, 0) && v24 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5684/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, 0);
      EndTimeStr = (Il2CppObject *)EventServantEntity__getEndTimeStr(v24, 0);
      v28 = System_String__Format(v26, EndTimeStr, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5685/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, 0);
      v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseEventServantWarning__, 0);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v30, v28, v31, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
        return;
      }
LABEL_63:
      sub_2213CDC(servantEquipListViewManager, v5);
    }
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_7296/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0);
  equipGraphType = this->fields.equipGraphType;
  v34 = Value;
  if ( equipGraphType == 1 && Value >= 1 )
  {
    servantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(_QWORD *)v23 )
      goto LABEL_63;
    v35 = *(_QWORD *)(*(_QWORD *)v23 + 120LL);
    if ( !v35 )
      goto LABEL_63;
    v36 = (CommonUI_o *)servantEquipListViewManager;
    v37 = *(_OWORD *)(v35 + 32);
    *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v35 + 16);
    *(_OWORD *)&v70.fields.fakeValue = v37;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    v69 = v70;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v69, 0);
    v39 = (System_Action_bool__int__o *)sub_2213CCC(System_Action_bool__int__TypeInfo);
    System_Action_bool__int____ctor(
      v39,
      (Il2CppObject *)v3,
      Method_EquipGraphListMenu___c__DisplayClass40_0__Decide_b__0__,
      0);
    if ( !v36 )
      goto LABEL_63;
    CommonUI__OpenGrandBondEquipSkillSelectDialog(v36, v38, v34, v39, 0);
    return;
  }
  if ( equipGraphType )
    goto LABEL_35;
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_35;
  servantEquipListViewManager = (int64_t)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    servantEquipListViewManager = (int64_t)BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*(_QWORD *)(servantEquipListViewManager + 184) + 52LL) != LODWORD(equipIdList->max_length) )
    goto LABEL_35;
  v44 = *(_QWORD *)(v21 + 24);
  if ( !v44 )
    goto LABEL_63;
  if ( !*(_QWORD *)v23 )
    goto LABEL_63;
  v45 = *(_QWORD *)(*(_QWORD *)v23 + 120LL);
  if ( !v45 )
    goto LABEL_63;
  v46 = this->fields.equipIdList;
  if ( !v46 )
    goto LABEL_63;
  if ( (v46->max_length & 0xFFFFFFFE) == 0 )
    sub_2213CE4(servantEquipListViewManager);
  v47 = *(_QWORD *)(v44 + 80);
  v48 = *(_QWORD *)(v44 + 88);
  v49 = *(_QWORD *)(v45 + 80);
  v50 = *(_QWORD *)(v45 + 88);
  v51 = v46->m_Items[1];
  v53 = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
  *(_QWORD *)&v71.fields.currentCryptoKey = v47;
  *(_QWORD *)&v71.fields.fakeValue = v48;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v71, 0);
  *(_QWORD *)&v72.fields.currentCryptoKey = v49;
  *(_QWORD *)&v72.fields.fakeValue = v50;
  servantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v72, 0);
  if ( !v53 )
    goto LABEL_63;
  if ( !PartyOrganizationUtility__IsShowBondEquipGuideDialog(
          (PartyOrganizationUtility_o *)v53,
          v54,
          servantEquipListViewManager,
          v51,
          0) )
  {
LABEL_35:
    v40 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v40,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndRequestClickDecide__,
      v41);
    EquipGraphListMenu__StatusRequest(this, v40, v42);
    return;
  }
  servantEquipListViewManager = *(_QWORD *)(v21 + 24);
  if ( !servantEquipListViewManager )
    goto LABEL_63;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)servantEquipListViewManager, -1, 0);
  servantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(_QWORD *)v23 )
    goto LABEL_63;
  v56 = *(_QWORD *)(*(_QWORD *)v23 + 120LL);
  if ( !v56 )
    goto LABEL_63;
  v57 = (CommonUI_o *)servantEquipListViewManager;
  v58 = *(_OWORD *)(v56 + 32);
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v56 + 16);
  *(_OWORD *)&v70.fields.fakeValue = v58;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
  v68 = v70;
  servantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v68, 0);
  v59 = *(_QWORD *)v23;
  if ( !*(_QWORD *)v23 )
    goto LABEL_63;
  v60 = servantEquipListViewManager;
  v61 = *(_DWORD *)(v59 + 268);
  v62 = (System_Action_bool__bool__int__o *)sub_2213CCC(System_Action_bool__bool__int__TypeInfo);
  System_Action_bool__bool__int____ctor(
    v62,
    (Il2CppObject *)v3,
    Method_EquipGraphListMenu___c__DisplayClass40_0__Decide_b__1__,
    0);
  servantEquipListViewManager = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !*(_QWORD *)(v21 + 24) )
    goto LABEL_63;
  v63 = (PartyOrganizationUtility_o *)servantEquipListViewManager;
  servantEquipListViewManager = (int64_t)UserServantEntity__get_BaseServantEntity(
                                           *(UserServantEntity_o **)(v21 + 24),
                                           0);
  if ( !servantEquipListViewManager )
    goto LABEL_63;
  v64 = *(_QWORD *)(servantEquipListViewManager + 16);
  v65 = *(_QWORD *)(servantEquipListViewManager + 24);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v73.fields.currentCryptoKey = v64;
  *(_QWORD *)&v73.fields.fakeValue = v65;
  servantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v73, 0);
  if ( !ServantEntity )
    goto LABEL_63;
  v66 = servantEquipListViewManager;
  servantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                  ServantEntity->fields.id,
                                  0);
  if ( !v63 )
    goto LABEL_63;
  ServantShortName = PartyOrganizationUtility__GetServantShortName(v63, v66, servantEquipListViewManager, 1, 0);
  servantEquipListViewManager = (int64_t)ServantEntity__getClassName(ServantEntity, 0);
  if ( !v57 )
    goto LABEL_63;
  CommonUI__OpenGrandBondEquipTargetConfirmDialog(
    v57,
    v60,
    v34,
    v61,
    v62,
    ServantShortName,
    (System_String_o *)servantEquipListViewManager,
    *(_DWORD *)(v21 + 52),
    0);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__EndClickTabChoice(EquipGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0) )
    {
      sub_2213CDC(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_47936760(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__SetTabKind(this, 2, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__EndClickTabLock(EquipGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0) )
    {
      sub_2213CDC(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_47936760(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__SetTabKind(this, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__EndClickTabStatus(EquipGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0) )
    {
      sub_2213CDC(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_47936760(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__SetTabKind(this, 0, 0, v3);
}


void EquipGraphListMenu__EndClose(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EquipGraphListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void EquipGraphListMenu__EndCloseEventServantWarning(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_596FC3B & 1) == 0 )
  {
    sub_2213A60(&Method_EquipGraphListMenu_EndRequestClickDecide__);
    sub_2213A60(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596FC3B = 1;
  }
  v3 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    v4);
  EquipGraphListMenu__StatusRequest(this, v3, v5);
}


void EquipGraphListMenu__EndCloseList(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void EquipGraphListMenu__EndCloseShowServantEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  EquipGraphListViewManager_CallbackFunc_c *v5; // x0
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596FC44 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    byte_596FC44 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        v5 = EquipGraphListViewManager_CallbackFunc_TypeInfo,
        servantEquipListViewManager = this->fields.servantEquipListViewManager,
        this->fields.state = 2,
        v7 = (EquipGraphListViewManager_CallbackFunc_o *)sub_2213CCC(v5),
        EquipGraphListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
          0),
        !servantEquipListViewManager) )
  {
    sub_2213CDC(gameObject, v4);
  }
  servantEquipListViewManager->fields.callbackFunc = v7;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  EquipGraphListViewManager__SetMode_47936760(servantEquipListViewManager, 2, v14);
}


void EquipGraphListMenu__EndOpen(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // w8
  int32_t modeKind; // w1

  if ( (byte_596FC37 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_ImageId___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596FC37 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( !TutorialFlag__Get_47388504(110, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = sub_2213B20(TutorialFlag_ImageId___TypeInfo, 2);
    if ( !v5 )
      goto LABEL_13;
    v7 = *(_DWORD *)(v5 + 24);
    v6 = v5;
    if ( !v7 || (*(_DWORD *)(v5 + 32) = 4, v7 == 1) )
      sub_2213CE4(v5);
    *(_DWORD *)(v5 + 36) = 5;
    if ( !Instance )
LABEL_13:
      sub_2213CDC(v5, v6);
    CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, (TutorialFlag_ImageId_array *)v5, 110, 0, 0, 0, 0);
  }
  modeKind = this->fields.modeKind;
  this->fields.state = 2;
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__EndRequestClickCancel(EquipGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0) )
    {
      sub_2213CDC(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_47936760(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__Callback(this, 0, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__EndRequestClickDecide(EquipGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0) )
    {
      sub_2213CDC(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_47936760(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__Callback(this, 1, this->fields.selectNum, v3);
}


void EquipGraphListMenu__EndSelectEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListViewManager_CallbackFunc_c *v3; // x0
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596FC42 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    byte_596FC42 = 1;
  }
  v3 = EquipGraphListViewManager_CallbackFunc_TypeInfo;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  this->fields.state = 2;
  v5 = (EquipGraphListViewManager_CallbackFunc_o *)sub_2213CCC(v3);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    0);
  if ( !servantEquipListViewManager )
    sub_2213CDC(v6, v7);
  servantEquipListViewManager->fields.callbackFunc = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  EquipGraphListViewManager__SetMode_47936760(servantEquipListViewManager, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__EndShowServantEquip(EquipGraphListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_596FC43 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EquipGraphListMenu_EndCloseShowServantEquip__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FC43 = 1;
  }
  if ( isDecide )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0) )
    {
LABEL_9:
      sub_2213CDC(servantEquipListViewManager, isDecide);
    }
    EquipGraphListViewManager__SetMode_47936760(servantEquipListViewManager, 3, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void EquipGraphListMenu__EndStatusSync(EquipGraphListMenu_o *this, System_String_o *result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_requedstCallback; // x0
  struct EquipGraphListMenu_RequestCallbackFunc_o *v9; // x19
  struct EquipGraphListMenu_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0;
    sub_2213A04(p_requedstCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      1,
      v9->fields.method);
  }
}


int32_t EquipGraphListMenu__GetModeKind(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


void EquipGraphListMenu__Init(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0

  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  if ( !servantEquipListViewManager )
    sub_2213CDC(0, method);
  EquipGraphListViewManager__DestroyList(servantEquipListViewManager, method);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void EquipGraphListMenu__OnClickCancel(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *servantEquipListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_596FC3C & 1) == 0 )
  {
    sub_2213A60(&Method_EquipGraphListMenu_EndRequestClickCancel__);
    sub_2213A60(&Method_EquipGraphListMenu_OnClickCancel__);
    sub_2213A60(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596FC3C = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_2213CDC(0, method);
      ListViewManager__SetScrollBarValue(servantEquipListViewManager, 0);
    }
    this->fields.state = 3;
    v4 = Method_EquipGraphListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_EquipGraphListMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndRequestClickCancel__,
      v7);
    EquipGraphListMenu__StatusRequest(this, v6, v8);
  }
}


void EquipGraphListMenu__OnClickDecide(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *SelectItem; // x0
  const MethodInfo *v5; // x1
  int32_t index; // w8

  if ( this->fields.state == 2 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      sub_2213CDC(0, method);
    SelectItem = EquipGraphListViewManager__GetSelectItem(servantEquipListViewManager, method);
    if ( SelectItem )
      index = SelectItem->fields.index;
    else
      index = -1;
    this->fields.selectNum = index;
    EquipGraphListMenu__Decide(this, v5);
  }
}


void EquipGraphListMenu__OnClickScaleChange(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_596FC45 & 1) == 0 )
  {
    sub_2213A60(&Method_EquipGraphListMenu_OnClickScaleChange__);
    byte_596FC45 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EquipGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EquipGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ChangeIconScale(servantEquipListViewManager, v5),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          servantEquipListViewManager = (EquipGraphListViewManager_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                                                         servantEquipListViewManager,
                                                                         v5),
          !scaleChangeTabSprite) )
    {
      sub_2213CDC(servantEquipListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantEquipListViewManager, 0);
  }
}


void EquipGraphListMenu__OnClickTabChoice(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_596FC3F & 1) == 0 )
  {
    sub_2213A60(&Method_EquipGraphListMenu_EndClickTabChoice__);
    sub_2213A60(&Method_EquipGraphListMenu_OnClickTabChoice__);
    sub_2213A60(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596FC3F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EquipGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EquipGraphListMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabChoice__,
          v8);
        EquipGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabChoice__,
        v11);
      EquipGraphListMenu__StatusRequest(this, v10, v12);
    }
    EquipGraphListMenu__SetTabKind(this, 2, 0, v5);
  }
}


void EquipGraphListMenu__OnClickTabLock(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_596FC3E & 1) == 0 )
  {
    sub_2213A60(&Method_EquipGraphListMenu_EndClickTabLock__);
    sub_2213A60(&Method_EquipGraphListMenu_OnClickTabLock__);
    sub_2213A60(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596FC3E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EquipGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EquipGraphListMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabLock__,
          v8);
        EquipGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabLock__,
        v11);
      EquipGraphListMenu__StatusRequest(this, v10, v12);
    }
    EquipGraphListMenu__SetTabKind(this, 1, 0, v5);
  }
}


void EquipGraphListMenu__OnClickTabStatus(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_596FC3D & 1) == 0 )
  {
    sub_2213A60(&Method_EquipGraphListMenu_EndClickTabStatus__);
    sub_2213A60(&Method_EquipGraphListMenu_OnClickTabStatus__);
    sub_2213A60(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596FC3D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EquipGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EquipGraphListMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndClickTabStatus__,
      v6);
    EquipGraphListMenu__StatusRequest(this, v5, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__OnSelectServantEquip(
        EquipGraphListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x20
  int32_t v9; // w8
  EquipGraphListViewManager_o *v10; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x3
  unsigned int modeKind; // w8
  struct EquipGraphListViewManager_o *v14; // x20
  EquipGraphListViewManager_CallbackFunc_o *v15; // x0
  void *v16; // x2
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x3
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  Il2CppObject *Instance; // x0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v24; // x22
  const MethodInfo *v25; // x1
  bool v26; // w20
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  struct EquipGraphListViewManager_o *v29; // x21
  EquipGraphListViewManager_CallbackFunc_c *v30; // x0
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  EquipGraphListViewManager_CallbackFunc_o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  const MethodInfo *v40; // x2
  EquipGraphListViewManager_o *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  struct EquipGraphListViewManager_CallbackFunc_o *v43; // x21
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  ServantStatusDialog_EndDelegate_o *v50; // x23
  System_Action_o *v51; // x24

  if ( (byte_596FC41 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_EquipGraphListMenu_EndSelectEquip__);
    sub_2213A60(&Method_EquipGraphListMenu_EndShowServantEquip__);
    sub_2213A60(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    sub_2213A60(&Method_EquipGraphListMenu__OnSelectServantEquip_b__53_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FC41 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.selectNum = n;
    if ( n < 0 )
    {
      Item = 0;
    }
    else
    {
      servantEquipListViewManager = this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        goto LABEL_46;
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, *(const MethodInfo **)&n);
    }
    if ( kind == 3 )
    {
      modeKind = this->fields.modeKind;
      if ( modeKind )
      {
        if ( modeKind >= 3 )
          return;
        v14 = this->fields.servantEquipListViewManager;
        this->fields.state = 2;
        v15 = (EquipGraphListViewManager_CallbackFunc_o *)sub_2213CCC(EquipGraphListViewManager_CallbackFunc_TypeInfo);
        v16 = Method_EquipGraphListMenu_OnSelectServantEquip__;
      }
      else
      {
        v20 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        if ( Item )
        {
          if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v20 = (_QWORD *)sub_2213A78(Method_EquipGraphListMenu_OnSelectServantEquip__);
          v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v20, v20[4]);
          OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0);
          this->fields.state = 5;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          userSvtEntity = Item->fields.userSvtEntity;
          v24 = (CommonUI_o *)Instance;
          v26 = EquipGraphListViewItem__get_IsUse(Item, v25) || Item->fields.isBase;
          v50 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v50,
            (Il2CppObject *)this,
            Method_EquipGraphListMenu_EndShowServantEquip__,
            0);
          v51 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v51, (Il2CppObject *)this, Method_EquipGraphListMenu__OnSelectServantEquip_b__53_0__, 0);
          if ( v24 )
          {
            CommonUI__OpenServantEquipStatusDialog_37388460(v24, 0, userSvtEntity, v26, v50, v51, 0);
            return;
          }
          goto LABEL_46;
        }
        v42 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_EquipGraphListMenu_OnSelectServantEquip__);
        OverwriteAssetSoundName__PlaySystemSe(v42, 2, 0, 0);
        v14 = this->fields.servantEquipListViewManager;
        this->fields.state = 2;
        v15 = (EquipGraphListViewManager_CallbackFunc_o *)sub_2213CCC(EquipGraphListViewManager_CallbackFunc_TypeInfo);
        v16 = Method_EquipGraphListMenu_OnSelectServantEquip__;
      }
      v43 = v15;
      EquipGraphListViewManager_CallbackFunc___ctor(v15, (Il2CppObject *)this, (intptr_t)v16, 0);
      if ( !v14 )
        goto LABEL_46;
      v14->fields.callbackFunc = v43;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v14->fields.callbackFunc,
        (int32_t)v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      v41 = v14;
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
          v17 = Method_EquipGraphListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v17 = (_QWORD *)sub_2213A78(Method_EquipGraphListMenu_OnSelectServantEquip__);
          v18 = (System_Reflection_MethodBase_o *)sub_2213A44(v17, v17[4]);
          OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0, 0);
          this->fields.state = 3;
          EquipGraphListMenu__Callback(this, 0, -1, v19);
        }
        return;
      }
      v9 = this->fields.modeKind;
      if ( v9 == 2 )
      {
        v31 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v31 = (_QWORD *)sub_2213A78(Method_EquipGraphListMenu_OnSelectServantEquip__);
        v32 = (System_Reflection_MethodBase_o *)sub_2213A44(v31, v31[4]);
        OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0);
        if ( !Item )
          goto LABEL_46;
        v29 = this->fields.servantEquipListViewManager;
        v30 = EquipGraphListViewManager_CallbackFunc_TypeInfo;
        Item->fields.isSwapChoice ^= 1u;
      }
      else
      {
        if ( v9 != 1 )
        {
          if ( v9 )
            return;
          v10 = this->fields.servantEquipListViewManager;
          v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v11, (Il2CppObject *)this, Method_EquipGraphListMenu_EndSelectEquip__, 0);
          if ( v10 )
          {
            EquipGraphListViewManager__SelectEquip(v10, Item, v11, v12);
            return;
          }
LABEL_46:
          sub_2213CDC(servantEquipListViewManager, *(_QWORD *)&kind);
        }
        v27 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v27 = (_QWORD *)sub_2213A78(Method_EquipGraphListMenu_OnSelectServantEquip__);
        v28 = (System_Reflection_MethodBase_o *)sub_2213A44(v27, v27[4]);
        OverwriteAssetSoundName__PlaySystemSe(v28, 11, 0, 0);
        if ( !Item )
          goto LABEL_46;
        v29 = this->fields.servantEquipListViewManager;
        v30 = EquipGraphListViewManager_CallbackFunc_TypeInfo;
        Item->fields.isSwapLock ^= 1u;
      }
      this->fields.state = 2;
      v33 = (EquipGraphListViewManager_CallbackFunc_o *)sub_2213CCC(v30);
      EquipGraphListViewManager_CallbackFunc___ctor(
        v33,
        (Il2CppObject *)this,
        (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
        0);
      if ( !v29 )
        goto LABEL_46;
      v29->fields.callbackFunc = v33;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v29->fields.callbackFunc,
        (int32_t)v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      v41 = v29;
    }
    EquipGraphListViewManager__SetMode_47936760(v41, 2, v40);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__Open(
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
  int32_t state; // w8
  int32_t modeKind; // w1
  const MethodInfo *v17; // x3
  System_Int64_array *EquipList; // x0
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
  struct System_Int64_array *equipIdList; // x8
  const MethodInfo *v32; // x3
  int v33; // w8
  int32_t v34; // w4
  __int64 v35; // x1
  const MethodInfo *v36; // x6
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v39; // x20

  v14 = this;
  if ( (byte_596FC35 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (EquipGraphListMenu_o *)sub_2213A60(&Method_EquipGraphListMenu_EndOpen__);
    byte_596FC35 = 1;
  }
  state = v14->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      v14->fields.equipGraphType = type;
      if ( !partyItem )
        goto LABEL_26;
      this = (EquipGraphListMenu_o *)PartyListViewItem__GetMember(partyItem, member, 0);
      if ( !this )
        goto LABEL_26;
      EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)this, 0);
      v14->fields.equipIdList = EquipList;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v14->fields.equipIdList,
        (int32_t)EquipList,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      equipIdList = v14->fields.equipIdList;
      if ( !equipIdList )
        goto LABEL_26;
      if ( LODWORD(equipIdList->max_length) <= type )
        sub_2213CE4(this);
      v14->fields.callbackFunc = callback;
      v14->fields.isSelectedSvt = equipIdList->m_Items[type] > 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v14->fields.callbackFunc,
        (int32_t)callback,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      EquipGraphListMenu__SetTabKind(v14, v14->fields.modeKind, 1, v32);
      this = (EquipGraphListMenu_o *)v14->fields.titleInfo;
      if ( !this )
        goto LABEL_26;
      v33 = type == 1 ? 25 : 24;
      v34 = type == 2 ? 26 : v33;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0, 1, 0, v34, 0);
      this = (EquipGraphListMenu_o *)v14->fields.titleInfo;
      if ( !this )
        goto LABEL_26;
      TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)this, 1, 0, 0, 0);
      servantEquipListViewManager = v14->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_2213CDC(0, v35);
      EquipGraphListViewManager__CreateList(
        servantEquipListViewManager,
        baseDeckItemList,
        partyItem,
        member,
        setupInfo,
        type,
        v36);
      this = (EquipGraphListMenu_o *)v14->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v14->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             (const MethodInfo *)baseDeckItemList),
            !scaleChangeTabSprite) )
      {
LABEL_26:
        sub_2213CDC(this, baseDeckItemList);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0);
      v14->fields.state = 1;
      v39 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v39, (Il2CppObject *)v14, Method_EquipGraphListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)v14, v39, 0);
    }
  }
  else
  {
    v14->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v14->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)partyItem,
      *(System_String_o **)&member,
      (int32_t)setupInfo,
      (int32_t)callback,
      type,
      (bool)method);
    modeKind = v14->fields.modeKind;
    v14->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v14, modeKind, 0, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__Open_47933740(
        EquipGraphListMenu_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        EquipGraphListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  EquipGraphListMenu_o *v12; // x19
  int32_t state; // w8
  int32_t modeKind; // w1
  const MethodInfo *v15; // x3
  PartyOrganizationListViewItem_o *MemberItem; // x24
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int64_t EquipUserSvtId; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  const MethodInfo *v32; // x4
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v35; // x20

  v12 = this;
  if ( (byte_596FC36 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (EquipGraphListMenu_o *)sub_2213A60(&Method_EquipGraphListMenu_EndOpen__);
    byte_596FC36 = 1;
  }
  state = v12->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      v12->fields.equipGraphType = 0;
      if ( !partyItem )
        goto LABEL_17;
      MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0);
      v12->fields.equipIdList = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.equipIdList, 0, v17, v18, v19, v20, v21, v22);
      if ( !MemberItem )
        goto LABEL_17;
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(MemberItem, 0);
      v12->fields.callbackFunc = callback;
      v12->fields.isSelectedSvt = EquipUserSvtId > 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v12->fields.callbackFunc,
        (int32_t)callback,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
      if ( !this )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      EquipGraphListMenu__SetTabKind(v12, v12->fields.modeKind, 1, v30);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0, 1, 0, 24, 0);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)this, 1, 0, 0, 0);
      servantEquipListViewManager = v12->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_2213CDC(0, v31);
      EquipGraphListViewManager__CreateList_47934692(servantEquipListViewManager, partyItem, member, setupInfo, v32);
      this = (EquipGraphListMenu_o *)v12->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v12->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             (const MethodInfo *)partyItem),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_2213CDC(this, partyItem);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0);
      v12->fields.state = 1;
      v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v35, (Il2CppObject *)v12, Method_EquipGraphListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)v12, v35, 0);
    }
  }
  else
  {
    v12->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.callbackFunc,
      (int32_t)callback,
      *(System_String_o **)&member,
      (System_String_o *)setupInfo,
      (int32_t)callback,
      (int32_t)method,
      v6,
      v7);
    modeKind = v12->fields.modeKind;
    v12->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v12, modeKind, 0, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__SetTabKind(
        EquipGraphListMenu_o *this,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  EquipGraphListMenu_o *v6; // x19
  bool v7; // w21
  __int64 *v8; // x8
  bool v9; // w22
  UICommonButton_o *statusTabButton; // x21
  bool enabled; // w0
  __int64 *v12; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v14; // w0
  __int64 *v15; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v17; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v19; // x8
  int32_t state; // w8
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x21
  EquipGraphListViewManager_CallbackFunc_o *v22; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w1

  v6 = this;
  if ( (byte_596FC39 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12132/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_12134/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    sub_2213A60(&StringLiteral_12133/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/);
    sub_2213A60(&StringLiteral_18433/*"button_select_reg"*/);
    sub_2213A60(&StringLiteral_18434/*"button_select_unreg"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    this = (EquipGraphListMenu_o *)sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    byte_596FC39 = 1;
  }
  v7 = !v6->fields.isInitTab || isInit;
  if ( v7 || v6->fields.modeKind != modeKind )
  {
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_46;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, const char *, const MethodInfo *))this->klass[1]._1.name)(
      this,
      1,
      this->klass[1]._1.namespaze,
      method);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 0, 0);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabSprite;
    if ( !this )
      goto LABEL_46;
    v8 = &StringLiteral_18433/*"button_select_reg"*/;
    if ( modeKind )
      v8 = &StringLiteral_18434/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v8, 0);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_46;
    v9 = !v7;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                     this,
                                     0,
                                     !v7,
                                     this->klass[1]._1.implementedInterfaces);
    statusTabButton = v6->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_46;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.statusTabButton, 0);
    UICommonButton__SetColliderEnable(statusTabButton, enabled, v9, 0);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_46;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, const char *))this->klass[1]._1.name)(
      this,
      1,
      this->klass[1]._1.namespaze);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 1, 0);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabSprite;
    if ( !this )
      goto LABEL_46;
    v12 = &StringLiteral_18420/*"button_alllock_unreg"*/;
    if ( modeKind == 1 )
      v12 = &StringLiteral_18419/*"button_alllock_reg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v12, 0);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_46;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                     this,
                                     0,
                                     v9,
                                     this->klass[1]._1.implementedInterfaces);
    lockTabButton = v6->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_46;
    v14 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.lockTabButton, 0);
    UICommonButton__SetColliderEnable(lockTabButton, v14, v9, 0);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_46;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, const char *))this->klass[1]._1.name)(
      this,
      1,
      this->klass[1]._1.namespaze);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 2, 0);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabSprite;
    if ( !this )
      goto LABEL_46;
    v15 = &StringLiteral_18418/*"button_allchoice_unreg"*/;
    if ( modeKind == 2 )
      v15 = &StringLiteral_18417/*"button_allchoice_reg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v15, 0);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_46;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                     this,
                                     0,
                                     v9,
                                     this->klass[1]._1.implementedInterfaces);
    choiceTabButton = v6->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_46;
    v17 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.choiceTabButton, 0);
    UICommonButton__SetColliderEnable(choiceTabButton, v17, v9, 0);
    if ( modeKind == 2 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
      v19 = &StringLiteral_12132/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( modeKind == 1 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
      v19 = &StringLiteral_12133/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( modeKind )
        goto LABEL_40;
      explanationLabel = v6->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
      v19 = &StringLiteral_12134/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    this = (EquipGraphListMenu_o *)LocalizationManager__Get((System_String_o *)*v19, 0);
    if ( !explanationLabel )
      goto LABEL_46;
    UILabel__set_text(explanationLabel, (System_String_o *)this, 0);
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
      v29 = 1;
      goto LABEL_45;
    }
LABEL_46:
    sub_2213CDC(this, *(_QWORD *)&modeKind);
  }
  v22 = (EquipGraphListViewManager_CallbackFunc_o *)sub_2213CCC(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v22,
    (Il2CppObject *)v6,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    0);
  if ( !servantEquipListViewManager )
    goto LABEL_46;
  servantEquipListViewManager->fields.callbackFunc = v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = 2;
LABEL_45:
  EquipGraphListViewManager__SetMode_47936760(servantEquipListViewManager, v29, (const MethodInfo *)isInit);
}


void EquipGraphListMenu__StatusRequest(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w4
  bool v19; // w5
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  __int64 v27; // x1
  System_Int64_array *v28; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596FC40 & 1) == 0 )
  {
    sub_2213A60(&Method_EquipGraphListMenu_EndStatusSync__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596FC40 = 1;
  }
  modeKind = this->fields.modeKind;
  unlockList = 0;
  lockList = 0;
  v28 = 0;
  choiceList = 0;
  if ( modeKind == 2 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      goto LABEL_21;
    if ( EquipGraphListViewManager__GetSwapChoiceList(servantEquipListViewManager, &choiceList, &v28, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v26, (Il2CppObject *)this, Method_EquipGraphListMenu_EndStatusSync__, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                                     v26,
                                                                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v17 = v28;
        v16 = choiceList;
        v18 = 0;
        v19 = 1;
        goto LABEL_17;
      }
LABEL_21:
      sub_2213CDC(servantEquipListViewManager, callback);
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v14, (Il2CppObject *)this, Method_EquipGraphListMenu_EndStatusSync__, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                                     v14,
                                                                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v17 = unlockList;
        v16 = lockList;
        v18 = 1;
        v19 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)servantEquipListViewManager,
          v16,
          v17,
          0,
          v18,
          v19,
          0);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void EquipGraphListMenu___OnSelectServantEquip_b__53_0(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void EquipGraphListMenu__add_callbackFunc(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EquipGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EquipGraphListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EquipGraphListMenu_o *v13; // x0
  EquipGraphListMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596FC33 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    byte_596FC33 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (EquipGraphListMenu_CallbackFunc_c *)v8->klass != EquipGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, EquipGraphListMenu_CallbackFunc_TypeInfo, v9, v10);
  EquipGraphListMenu__remove_callbackFunc(v13, v14, v15);
}


void EquipGraphListMenu__remove_callbackFunc(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EquipGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EquipGraphListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EquipGraphListMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596FC34 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    byte_596FC34 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (EquipGraphListMenu_CallbackFunc_c *)v8->klass != EquipGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, EquipGraphListMenu_CallbackFunc_TypeInfo, v9, v10);
  EquipGraphListMenu__GetModeKind(v13, v14);
}


void EquipGraphListMenu_CallbackFunc___ctor(
        EquipGraphListMenu_CallbackFunc_o *this,
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
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200D2F8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200D298;
}


System_IAsyncResult_o *EquipGraphListMenu_CallbackFunc__BeginInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        EquipGraphListViewItem_o *item,
        int32_t type,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v12[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v13; // [xsp+10h] [xbp-60h]
  int32_t v14; // [xsp+28h] [xbp-48h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-44h] BYREF

  v15 = result;
  v14 = type;
  if ( (byte_596FC47 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_EquipGraphType_TypeInfo);
    sub_2213A60(&EquipGraphListMenu_ResultKind_TypeInfo);
    byte_596FC47 = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(EquipGraphListMenu_ResultKind_TypeInfo, &v15);
  v12[1] = item;
  *(_QWORD *)&v13 = j_il2cpp_value_box_0(EquipGraphListViewManager_EquipGraphType_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_2213A14(this, v12, callback, object);
}


void EquipGraphListMenu_CallbackFunc__EndInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void EquipGraphListMenu_CallbackFunc__Invoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        EquipGraphListViewItem_o *item,
        int32_t type,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, EquipGraphListViewItem_o *, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    item,
    type,
    this->fields.method);
}


void EquipGraphListMenu_RequestCallbackFunc___ctor(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_200D358;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200D310;
}


System_IAsyncResult_o *EquipGraphListMenu_RequestCallbackFunc__BeginInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void EquipGraphListMenu_RequestCallbackFunc__EndInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void EquipGraphListMenu_RequestCallbackFunc__Invoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void EquipGraphListMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596FC48 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListMenu___c_TypeInfo);
    byte_596FC48 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EquipGraphListMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphListMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphListMenu___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EquipGraphListMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EquipGraphListMenu___c___ctor(EquipGraphListMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipGraphListMenu___c___Open_b__30_0(EquipGraphListMenu___c_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596FC49 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_596FC49 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void EquipGraphListMenu___c___Open_b__31_0(EquipGraphListMenu___c_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596FC4A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_596FC4A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void EquipGraphListMenu___c__DisplayClass40_0___ctor(
        EquipGraphListMenu___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu___c__DisplayClass40_0___Decide_b__0(
        EquipGraphListMenu___c__DisplayClass40_0_o *this,
        bool isDecide,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  EquipGraphListMenu___c__DisplayClass40_0_o *v6; // x20
  struct EquipGraphListViewItem_o *equipItem; // x8
  Il2CppObject *_4__this; // x20
  EquipGraphListMenu_RequestCallbackFunc_o *v9; // x19
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  struct EquipGraphListMenu_o *v12; // x20
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x19
  EquipGraphListViewManager_CallbackFunc_o *v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x2

  v6 = this;
  if ( (byte_596FC4B & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EquipGraphListMenu_EndRequestClickDecide__);
    sub_2213A60(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    this = (EquipGraphListMenu___c__DisplayClass40_0_o *)sub_2213A60(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596FC4B = 1;
  }
  if ( isDecide )
  {
    equipItem = v6->fields.equipItem;
    if ( equipItem )
    {
      _4__this = (Il2CppObject *)v6->fields.__4__this;
      equipItem->fields._EquipFriendShipSkillChange_k__BackingField = equipBondSkillChange;
      v9 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v9,
        _4__this,
        Method_EquipGraphListMenu_EndRequestClickDecide__,
        v10);
      if ( _4__this )
      {
        EquipGraphListMenu__StatusRequest((EquipGraphListMenu_o *)_4__this, v9, v11);
        return;
      }
    }
LABEL_10:
    sub_2213CDC(this, isDecide);
  }
  v12 = v6->fields.__4__this;
  if ( !v12 )
    goto LABEL_10;
  servantEquipListViewManager = v12->fields.servantEquipListViewManager;
  v12->fields.state = 2;
  v14 = (EquipGraphListViewManager_CallbackFunc_o *)sub_2213CCC(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)v12,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    0);
  if ( !servantEquipListViewManager )
    goto LABEL_10;
  servantEquipListViewManager->fields.callbackFunc = v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  EquipGraphListViewManager__SetMode_47936760(servantEquipListViewManager, 2, v21);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu___c__DisplayClass40_0___Decide_b__1(
        EquipGraphListMenu___c__DisplayClass40_0_o *this,
        bool isDecide,
        bool changeBond,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  EquipGraphListMenu___c__DisplayClass40_0_o *v8; // x21
  struct EquipGraphListMenu_o *_4__this; // x19
  struct EquipGraphListViewItem_o *equipItem; // x8
  EquipGraphListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2

  v8 = this;
  if ( (byte_596FC4C & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EquipGraphListMenu_EndRequestClickDecide__);
    sub_2213A60(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    this = (EquipGraphListMenu___c__DisplayClass40_0_o *)sub_2213A60(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596FC4C = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( isDecide )
  {
    if ( changeBond )
    {
      if ( !_4__this )
        goto LABEL_13;
      equipItem = v8->fields.equipItem;
      _4__this->fields.equipGraphType = 1;
      if ( !equipItem )
        goto LABEL_13;
      equipItem->fields._EquipFriendShipSkillChange_k__BackingField = equipBondSkillChange;
    }
    v11 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)_4__this,
      Method_EquipGraphListMenu_EndRequestClickDecide__,
      v12);
    if ( _4__this )
    {
      EquipGraphListMenu__StatusRequest(_4__this, v11, v13);
      return;
    }
LABEL_13:
    sub_2213CDC(this, isDecide);
  }
  if ( !_4__this )
    goto LABEL_13;
  servantEquipListViewManager = _4__this->fields.servantEquipListViewManager;
  _4__this->fields.state = 2;
  v15 = (EquipGraphListViewManager_CallbackFunc_o *)sub_2213CCC(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v15,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    0);
  if ( !servantEquipListViewManager )
    goto LABEL_13;
  servantEquipListViewManager->fields.callbackFunc = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  EquipGraphListViewManager__SetMode_47936760(servantEquipListViewManager, 2, v22);
}