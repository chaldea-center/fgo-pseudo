void EquipGraphListMenu___ctor(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2BCD8 & 1) == 0 )
  {
    sub_1C94098(&BaseMenu_TypeInfo);
    byte_4D2BCD8 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__Callback(EquipGraphListMenu_o *this, int32_t result, int32_t n, const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
        sub_1C942F0(0, result);
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, *(const MethodInfo **)&n);
    }
    this->fields.callbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_callbackFunc, 0, n, (int32_t)method, v4, v5, v6, v7);
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

  EquipGraphListMenu__Close_41725960(this, 0, v2);
}


void EquipGraphListMenu__Close_41725960(
        EquipGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t modeKind; // w1
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4D2BCCA & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EquipGraphListMenu_EndClose__);
    byte_4D2BCCA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v11);
  v12 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EquipGraphListMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0);
}


void EquipGraphListMenu__Decide(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t servantEquipListViewManager; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t selectNum; // w1
  __int64 v21; // x29
  EquipGraphListViewItem_o *Item; // x1
  __int64 v23; // x22
  EventServantEntity_o *v24; // x21
  bool IsNoPeriod; // w0
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
  __int128 v36; // q1
  CommonUI_o *v37; // x19
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
  __int64 v49; // x24
  __int64 v50; // x25
  int64_t v51; // x23
  Il2CppObject *v52; // x26
  int32_t v53; // w27
  __int64 v54; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x19
  __int64 v56; // x23
  __int64 v57; // x24
  ServantEntity_o *Entity; // x23
  __int64 v59; // x8
  __int128 v60; // q1
  CommonUI_o *v61; // x19
  int32_t v62; // w24
  int64_t v63; // x22
  System_Action_bool__bool__int__o *v64; // x25
  PartyOrganizationUtility_o *v65; // x20
  System_String_o *ServantShortName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+80h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4D2BCCC & 1) == 0 )
  {
    sub_1C94098(&System_Action_bool__int__TypeInfo);
    sub_1C94098(&System_Action_bool__bool__int__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_EquipGraphListMenu_Decide__);
    sub_1C94098(&Method_EquipGraphListMenu_EndCloseEventServantWarning__);
    sub_1C94098(&Method_EquipGraphListMenu_EndRequestClickDecide__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C94098(&Method_EquipGraphListMenu___c__DisplayClass40_0__Decide_b__0__);
    sub_1C94098(&Method_EquipGraphListMenu___c__DisplayClass40_0__Decide_b__1__);
    sub_1C94098(&EquipGraphListMenu___c__DisplayClass40_0_TypeInfo);
    sub_1C94098(&StringLiteral_5488/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/);
    sub_1C94098(&StringLiteral_5489/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/);
    sub_1C94098(&StringLiteral_7012/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    byte_4D2BCCC = 1;
  }
  v3 = sub_1C942E4(EquipGraphListMenu___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_64;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = Method_EquipGraphListMenu_Decide__;
  if ( (*((_BYTE *)Method_EquipGraphListMenu_Decide__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1C940B0(Method_EquipGraphListMenu_Decide__);
  v13 = (System_Reflection_MethodBase_o *)sub_1C9407C(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0, 0);
  servantEquipListViewManager = (int64_t)this->fields.servantEquipListViewManager;
  this->fields.state = 3;
  if ( !servantEquipListViewManager )
    goto LABEL_64;
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Item, (int32_t)v14, v15, v16, v17, v18, v19);
  if ( !*(_QWORD *)(v3 + 16) )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (int64_t)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        goto LABEL_64;
      ListViewManager__SetScrollBarValue((ListViewManager_o *)servantEquipListViewManager, 0);
    }
    goto LABEL_35;
  }
  if ( !v21 )
    goto LABEL_64;
  servantEquipListViewManager = *(_QWORD *)(v21 + 24);
  if ( !servantEquipListViewManager )
    goto LABEL_64;
  servantEquipListViewManager = (int64_t)UserServantEntity__getEventServant(
                                           (UserServantEntity_o *)servantEquipListViewManager,
                                           0);
  if ( !*(_QWORD *)(v21 + 24) )
    goto LABEL_64;
  v24 = (EventServantEntity_o *)servantEquipListViewManager;
  if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(v21 + 24), 0) )
  {
    servantEquipListViewManager = *(_QWORD *)(v21 + 24);
    if ( !servantEquipListViewManager )
      goto LABEL_64;
    IsNoPeriod = UserServantEntity__IsNoPeriod((UserServantEntity_o *)servantEquipListViewManager, 0);
    if ( v24 )
    {
      if ( !IsNoPeriod )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5488/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, 0);
        EndTimeStr = (Il2CppObject *)EventServantEntity__getEndTimeStr(v24, 0);
        v28 = System_String__Format(v26, EndTimeStr, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5489/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, 0);
        v31 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseEventServantWarning__, 0);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v30, v28, v31, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
          return;
        }
LABEL_64:
        sub_1C942F0(servantEquipListViewManager, v5);
      }
    }
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_7012/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0);
  equipGraphType = this->fields.equipGraphType;
  v34 = Value;
  if ( Value >= 1 && equipGraphType == 1 )
  {
    servantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(_QWORD *)v23 )
      goto LABEL_64;
    v35 = *(_QWORD *)(*(_QWORD *)v23 + 120LL);
    if ( !v35 )
      goto LABEL_64;
    v36 = *(_OWORD *)(v35 + 32);
    v37 = (CommonUI_o *)servantEquipListViewManager;
    *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v35 + 16);
    *(_OWORD *)&v69.fields.fakeValue = v36;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v68 = v69;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v68, 0);
    v39 = (System_Action_bool__int__o *)sub_1C942E4(System_Action_bool__int__TypeInfo);
    System_Action_bool__int____ctor(
      v39,
      (Il2CppObject *)v3,
      Method_EquipGraphListMenu___c__DisplayClass40_0__Decide_b__0__,
      0);
    if ( !v37 )
      goto LABEL_64;
    CommonUI__OpenGrandBondEquipSkillSelectDialog(v37, v38, v34, v39, 0);
    return;
  }
  if ( equipGraphType )
    goto LABEL_35;
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_35;
  servantEquipListViewManager = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    servantEquipListViewManager = (int64_t)BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*(_QWORD *)(servantEquipListViewManager + 184) + 52LL) != LODWORD(equipIdList->max_length) )
    goto LABEL_35;
  v44 = *(_QWORD *)(v21 + 24);
  if ( !v44 )
    goto LABEL_64;
  if ( !*(_QWORD *)v23 )
    goto LABEL_64;
  v45 = *(_QWORD *)(*(_QWORD *)v23 + 120LL);
  if ( !v45 )
    goto LABEL_64;
  v46 = this->fields.equipIdList;
  if ( !v46 )
    goto LABEL_64;
  if ( LODWORD(v46->max_length) <= 1 )
    sub_1C942F8(servantEquipListViewManager);
  v47 = *(_QWORD *)(v44 + 80);
  v48 = *(_QWORD *)(v44 + 88);
  v49 = *(_QWORD *)(v45 + 80);
  v50 = *(_QWORD *)(v45 + 88);
  v51 = v46->m_Items[1];
  v52 = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v70.fields.currentCryptoKey = v47;
  *(_QWORD *)&v70.fields.fakeValue = v48;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v70, 0);
  *(_QWORD *)&v71.fields.currentCryptoKey = v49;
  *(_QWORD *)&v71.fields.fakeValue = v50;
  servantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v71, 0);
  if ( !v52 )
    goto LABEL_64;
  if ( !PartyOrganizationUtility__IsShowBondEquipGuideDialog(
          (PartyOrganizationUtility_o *)v52,
          v53,
          servantEquipListViewManager,
          v51,
          0) )
  {
LABEL_35:
    v40 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v40,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndRequestClickDecide__,
      v41);
    EquipGraphListMenu__StatusRequest(this, v40, v42);
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  servantEquipListViewManager = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  v54 = *(_QWORD *)(v21 + 24);
  if ( !v54 )
    goto LABEL_64;
  v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)servantEquipListViewManager;
  v57 = *(_QWORD *)(v54 + 80);
  v56 = *(_QWORD *)(v54 + 88);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v72.fields.currentCryptoKey = v57;
  *(_QWORD *)&v72.fields.fakeValue = v56;
  servantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v72, 0);
  if ( !v55 )
    goto LABEL_64;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                v55,
                                servantEquipListViewManager,
                                (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  servantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(_QWORD *)v23 )
    goto LABEL_64;
  v59 = *(_QWORD *)(*(_QWORD *)v23 + 120LL);
  if ( !v59 )
    goto LABEL_64;
  v60 = *(_OWORD *)(v59 + 32);
  v61 = (CommonUI_o *)servantEquipListViewManager;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v59 + 16);
  *(_OWORD *)&v69.fields.fakeValue = v60;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v67 = v69;
  servantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v67, 0);
  if ( !*(_QWORD *)v23 )
    goto LABEL_64;
  v62 = *(_DWORD *)(*(_QWORD *)v23 + 268LL);
  v63 = servantEquipListViewManager;
  v64 = (System_Action_bool__bool__int__o *)sub_1C942E4(System_Action_bool__bool__int__TypeInfo);
  System_Action_bool__bool__int____ctor(
    v64,
    (Il2CppObject *)v3,
    Method_EquipGraphListMenu___c__DisplayClass40_0__Decide_b__1__,
    0);
  servantEquipListViewManager = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Entity )
    goto LABEL_64;
  v65 = (PartyOrganizationUtility_o *)servantEquipListViewManager;
  servantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                  Entity->fields.id,
                                  0);
  if ( !v65 )
    goto LABEL_64;
  ServantShortName = PartyOrganizationUtility__GetServantShortName(v65, servantEquipListViewManager, 0);
  servantEquipListViewManager = (int64_t)ServantEntity__getClassName(Entity, 0);
  if ( !v61 )
    goto LABEL_64;
  CommonUI__OpenGrandBondEquipTargetConfirmDialog(
    v61,
    v63,
    v34,
    v62,
    v64,
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
      sub_1C942F0(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_41726268(servantEquipListViewManager, 3, v6);
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
      sub_1C942F0(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_41726268(servantEquipListViewManager, 3, v6);
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
      sub_1C942F0(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_41726268(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__SetTabKind(this, 0, 0, v3);
}


void EquipGraphListMenu__EndClose(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EquipGraphListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C9403C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void EquipGraphListMenu__EndCloseEventServantWarning(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4D2BCCD & 1) == 0 )
  {
    sub_1C94098(&Method_EquipGraphListMenu_EndRequestClickDecide__);
    sub_1C94098(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2BCCD = 1;
  }
  v3 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2BCD6 & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    byte_4D2BCD6 = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v4 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C942E4(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    0);
  if ( !servantEquipListViewManager )
    sub_1C942F0(v5, v6);
  servantEquipListViewManager->fields.callbackFunc = v4;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  EquipGraphListViewManager__SetMode_41726268(servantEquipListViewManager, 2, v13);
}


void EquipGraphListMenu__EndOpen(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // w8
  int32_t modeKind; // w1

  if ( (byte_4D2BCC9 & 1) == 0 )
  {
    sub_1C94098(&TutorialFlag_ImageId___TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&TutorialFlag_TypeInfo);
    byte_4D2BCC9 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_41176064(110, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = sub_1C94140(TutorialFlag_ImageId___TypeInfo, 2);
    if ( !v5 )
      goto LABEL_13;
    v7 = *(_DWORD *)(v5 + 24);
    v6 = v5;
    if ( !v7 || (*(_DWORD *)(v5 + 32) = 4, v7 == 1) )
      sub_1C942F8(v5);
    *(_DWORD *)(v5 + 36) = 5;
    if ( !Instance )
LABEL_13:
      sub_1C942F0(v5, v6);
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
      sub_1C942F0(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_41726268(servantEquipListViewManager, 3, v6);
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
      sub_1C942F0(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_41726268(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__Callback(this, 1, this->fields.selectNum, v3);
}


void EquipGraphListMenu__EndSelectEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2BCD4 & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    byte_4D2BCD4 = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v4 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C942E4(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    0);
  if ( !servantEquipListViewManager )
    sub_1C942F0(v5, v6);
  servantEquipListViewManager->fields.callbackFunc = v4;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  EquipGraphListViewManager__SetMode_41726268(servantEquipListViewManager, 2, v13);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListMenu__EndShowServantEquip(EquipGraphListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4D2BCD5 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EquipGraphListMenu_EndCloseShowServantEquip__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BCD5 = 1;
  }
  if ( isDecide )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0) )
    {
LABEL_9:
      sub_1C942F0(servantEquipListViewManager, isDecide);
    }
    EquipGraphListViewManager__SetMode_41726268(servantEquipListViewManager, 3, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void EquipGraphListMenu__EndStatusSync(EquipGraphListMenu_o *this, System_String_o *result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_requedstCallback; // x0
  struct EquipGraphListMenu_RequestCallbackFunc_o *v9; // x19
  struct EquipGraphListMenu_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0;
    sub_1C9403C(p_requedstCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
    sub_1C942F0(0, method);
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

  if ( (byte_4D2BCCE & 1) == 0 )
  {
    sub_1C94098(&Method_EquipGraphListMenu_EndRequestClickCancel__);
    sub_1C94098(&Method_EquipGraphListMenu_OnClickCancel__);
    sub_1C94098(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2BCCE = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1C942F0(0, method);
      ListViewManager__SetScrollBarValue(servantEquipListViewManager, 0);
    }
    this->fields.state = 3;
    v4 = Method_EquipGraphListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_EquipGraphListMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
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
      sub_1C942F0(0, method);
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

  if ( (byte_4D2BCD7 & 1) == 0 )
  {
    sub_1C94098(&Method_EquipGraphListMenu_OnClickScaleChange__);
    byte_4D2BCD7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EquipGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_EquipGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
      sub_1C942F0(servantEquipListViewManager, v5);
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

  if ( (byte_4D2BCD1 & 1) == 0 )
  {
    sub_1C94098(&Method_EquipGraphListMenu_EndClickTabChoice__);
    sub_1C94098(&Method_EquipGraphListMenu_OnClickTabChoice__);
    sub_1C94098(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2BCD1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EquipGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_EquipGraphListMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabChoice__,
          v8);
        EquipGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2BCD0 & 1) == 0 )
  {
    sub_1C94098(&Method_EquipGraphListMenu_EndClickTabLock__);
    sub_1C94098(&Method_EquipGraphListMenu_OnClickTabLock__);
    sub_1C94098(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2BCD0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EquipGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_EquipGraphListMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabLock__,
          v8);
        EquipGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2BCCF & 1) == 0 )
  {
    sub_1C94098(&Method_EquipGraphListMenu_EndClickTabStatus__);
    sub_1C94098(&Method_EquipGraphListMenu_OnClickTabStatus__);
    sub_1C94098(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2BCCF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EquipGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_EquipGraphListMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  int32_t modeKind; // w8
  struct EquipGraphListViewManager_o *v10; // x20
  EquipGraphListViewManager_CallbackFunc_o *v11; // x0
  void *v12; // x2
  int32_t v13; // w8
  EquipGraphListViewManager_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3
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
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  EquipGraphListViewManager_CallbackFunc_c *v31; // x0
  struct EquipGraphListViewManager_CallbackFunc_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  const MethodInfo *v39; // x2
  ServantStatusDialog_EndDelegate_o *v40; // x23

  if ( (byte_4D2BCD3 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C94098(&Method_EquipGraphListMenu_EndSelectEquip__);
    sub_1C94098(&Method_EquipGraphListMenu_EndShowServantEquip__);
    sub_1C94098(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BCD3 = 1;
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
        v10 = this->fields.servantEquipListViewManager;
        v11 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C942E4(EquipGraphListViewManager_CallbackFunc_TypeInfo);
        v12 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        goto LABEL_40;
      }
      v20 = Method_EquipGraphListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1C940B0(Method_EquipGraphListMenu_OnSelectServantEquip__);
      v21 = (System_Reflection_MethodBase_o *)sub_1C9407C(v20, v20[4]);
      if ( Item )
      {
        OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0);
        this->fields.state = 5;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        userSvtEntity = Item->fields.userSvtEntity;
        v24 = (CommonUI_o *)Instance;
        v26 = EquipGraphListViewItem__get_IsUse(Item, v25) || Item->fields.isBase;
        v40 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v40,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndShowServantEquip__,
          0);
        if ( v24 )
        {
          CommonUI__OpenServantEquipStatusDialog_31598688(v24, 0, userSvtEntity, v26, v40, 0, 0);
          return;
        }
        goto LABEL_45;
      }
      OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
      this->fields.state = 2;
      v10 = this->fields.servantEquipListViewManager;
      v31 = EquipGraphListViewManager_CallbackFunc_TypeInfo;
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
            v17 = (_QWORD *)sub_1C940B0(Method_EquipGraphListMenu_OnSelectServantEquip__);
          v18 = (System_Reflection_MethodBase_o *)sub_1C9407C(v17, v17[4]);
          OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0, 0);
          this->fields.state = 3;
          EquipGraphListMenu__Callback(this, 0, -1, v19);
        }
        return;
      }
      v13 = this->fields.modeKind;
      if ( v13 == 2 )
      {
        v27 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v27 = (_QWORD *)sub_1C940B0(Method_EquipGraphListMenu_OnSelectServantEquip__);
        v28 = (System_Reflection_MethodBase_o *)sub_1C9407C(v27, v27[4]);
        OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0);
        if ( !Item )
          goto LABEL_45;
        Item->fields.isSwapChoice ^= 1u;
      }
      else
      {
        if ( v13 != 1 )
        {
          if ( v13 )
            return;
          v14 = this->fields.servantEquipListViewManager;
          v15 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)this, Method_EquipGraphListMenu_EndSelectEquip__, 0);
          if ( v14 )
          {
            EquipGraphListViewManager__SelectEquip(v14, Item, v15, v16);
            return;
          }
LABEL_45:
          sub_1C942F0(servantEquipListViewManager, *(_QWORD *)&kind);
        }
        v29 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v29 = (_QWORD *)sub_1C940B0(Method_EquipGraphListMenu_OnSelectServantEquip__);
        v30 = (System_Reflection_MethodBase_o *)sub_1C9407C(v29, v29[4]);
        OverwriteAssetSoundName__PlaySystemSe(v30, 11, 0, 0);
        if ( !Item )
          goto LABEL_45;
        Item->fields.isSwapLock ^= 1u;
      }
      this->fields.state = 2;
      v10 = this->fields.servantEquipListViewManager;
      v31 = EquipGraphListViewManager_CallbackFunc_TypeInfo;
    }
    v11 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C942E4(v31);
    v12 = Method_EquipGraphListMenu_OnSelectServantEquip__;
LABEL_40:
    v32 = v11;
    EquipGraphListViewManager_CallbackFunc___ctor(v11, (Il2CppObject *)this, (intptr_t)v12, 0);
    if ( v10 )
    {
      v10->fields.callbackFunc = v32;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10->fields.callbackFunc, (int32_t)v32, v33, v34, v35, v36, v37, v38);
      EquipGraphListViewManager__SetMode_41726268(v10, 2, v39);
      return;
    }
    goto LABEL_45;
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
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
  if ( (byte_4D2BCC7 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (EquipGraphListMenu_o *)sub_1C94098(&Method_EquipGraphListMenu_EndOpen__);
    byte_4D2BCC7 = 1;
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
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v14->fields.equipIdList,
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
        sub_1C942F8(this);
      v14->fields.isSelectedSvt = equipIdList->m_Items[type] > 0;
      v14->fields.callbackFunc = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v14->fields.callbackFunc,
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
      v33 = type == 1 ? 24 : 23;
      v34 = type == 2 ? 25 : v33;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0, 1, 0, v34, 0);
      this = (EquipGraphListMenu_o *)v14->fields.titleInfo;
      if ( !this )
        goto LABEL_26;
      TitleInfoControl__setBackBtnSprite_40657648((TitleInfoControl_o *)this, 1, 0, 0, 0);
      servantEquipListViewManager = v14->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1C942F0(0, v35);
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
        sub_1C942F0(this, baseDeckItemList);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0);
      v14->fields.state = 1;
      v39 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v39, (Il2CppObject *)v14, Method_EquipGraphListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)v14, v39, 0);
    }
  }
  else
  {
    v14->fields.callbackFunc = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v14->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      member,
      (System_String_o *)setupInfo,
      (int32_t)callback,
      *(int64_t *)&type,
      (System_String_o *)method);
    modeKind = v14->fields.modeKind;
    v14->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v14, modeKind, 0, v17);
  }
}


void EquipGraphListMenu__Open_41723252(
        EquipGraphListMenu_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        EquipGraphListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  EquipGraphListMenu_o *v12; // x19
  int32_t state; // w8
  int32_t modeKind; // w1
  const MethodInfo *v15; // x3
  PartyOrganizationListViewItem_o *MemberItem; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  const MethodInfo *v31; // x4
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v34; // x20

  v12 = this;
  if ( (byte_4D2BCC8 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (EquipGraphListMenu_o *)sub_1C94098(&Method_EquipGraphListMenu_EndOpen__);
    byte_4D2BCC8 = 1;
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
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12->fields.equipIdList, 0, v17, v18, v19, v20, v21, v22);
      if ( !MemberItem )
        goto LABEL_17;
      v12->fields.isSelectedSvt = PartyOrganizationListViewItem__get_EquipUserSvtId(MemberItem, 0) > 0;
      v12->fields.callbackFunc = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v12->fields.callbackFunc,
        (int32_t)callback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
      if ( !this )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      EquipGraphListMenu__SetTabKind(v12, v12->fields.modeKind, 1, v29);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0, 1, 0, 23, 0);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_40657648((TitleInfoControl_o *)this, 1, 0, 0, 0);
      servantEquipListViewManager = v12->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1C942F0(0, v30);
      EquipGraphListViewManager__CreateList_41724200(servantEquipListViewManager, partyItem, member, setupInfo, v31);
      this = (EquipGraphListMenu_o *)v12->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v12->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             (const MethodInfo *)partyItem),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_1C942F0(this, partyItem);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0);
      v12->fields.state = 1;
      v34 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v34, (Il2CppObject *)v12, Method_EquipGraphListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)v12, v34, 0);
    }
  }
  else
  {
    v12->fields.callbackFunc = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v12->fields.callbackFunc,
      (int32_t)callback,
      member,
      (int32_t)setupInfo,
      (System_String_o *)callback,
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
  bool v9; // w23
  _BOOL4 v10; // w21
  UICommonButton_o *statusTabButton; // x22
  bool enabled; // w0
  __int64 *v13; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v15; // w0
  __int64 *v16; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v18; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v20; // x8
  int32_t state; // w8
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x21
  EquipGraphListViewManager_CallbackFunc_o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w1

  v6 = this;
  if ( (byte_4D2BCCB & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11671/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/);
    sub_1C94098(&StringLiteral_17728/*"button_allchoice_reg"*/);
    sub_1C94098(&StringLiteral_17731/*"button_alllock_unreg"*/);
    sub_1C94098(&StringLiteral_11673/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    sub_1C94098(&StringLiteral_11672/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/);
    sub_1C94098(&StringLiteral_17744/*"button_select_reg"*/);
    sub_1C94098(&StringLiteral_17745/*"button_select_unreg"*/);
    sub_1C94098(&StringLiteral_17730/*"button_alllock_reg"*/);
    this = (EquipGraphListMenu_o *)sub_1C94098(&StringLiteral_17729/*"button_allchoice_unreg"*/);
    byte_4D2BCCB = 1;
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
    v8 = &StringLiteral_17744/*"button_select_reg"*/;
    if ( modeKind )
      v8 = &StringLiteral_17745/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v8, 0);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_46;
    v9 = !v7;
    v10 = !v7;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, _BOOL4, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                     this,
                                     0,
                                     v10,
                                     this->klass[1]._1.implementedInterfaces);
    statusTabButton = v6->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_46;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.statusTabButton, 0);
    UICommonButton__SetColliderEnable(statusTabButton, enabled, v10, 0);
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
    v13 = &StringLiteral_17730/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v13 = &StringLiteral_17731/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v13, 0);
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
    v15 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.lockTabButton, 0);
    UICommonButton__SetColliderEnable(lockTabButton, v15, v9, 0);
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
    v16 = &StringLiteral_17728/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v16 = &StringLiteral_17729/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v16, 0);
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
    v18 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.choiceTabButton, 0);
    UICommonButton__SetColliderEnable(choiceTabButton, v18, v9, 0);
    if ( modeKind == 2 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = &StringLiteral_11671/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( modeKind == 1 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = &StringLiteral_11672/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( modeKind )
        goto LABEL_40;
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = &StringLiteral_11673/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    this = (EquipGraphListMenu_o *)LocalizationManager__Get((System_String_o *)*v20, 0);
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
      v30 = 1;
      goto LABEL_45;
    }
LABEL_46:
    sub_1C942F0(this, *(_QWORD *)&modeKind);
  }
  v23 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C942E4(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v23,
    (Il2CppObject *)v6,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    0);
  if ( !servantEquipListViewManager )
    goto LABEL_46;
  servantEquipListViewManager->fields.callbackFunc = v23;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = 2;
LABEL_45:
  EquipGraphListViewManager__SetMode_41726268(servantEquipListViewManager, v30, (const MethodInfo *)isInit);
}


void EquipGraphListMenu__StatusRequest(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  System_Int64_array *v26; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D2BCD2 & 1) == 0 )
  {
    sub_1C94098(&Method_EquipGraphListMenu_EndStatusSync__);
    sub_1C94098(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2BCD2 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v26 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      goto LABEL_21;
    if ( EquipGraphListViewManager__GetSwapChoiceList(servantEquipListViewManager, &choiceList, &v26, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v25, (Il2CppObject *)this, Method_EquipGraphListMenu_EndStatusSync__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                                     v25,
                                                                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v16 = v26;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C942F0(servantEquipListViewManager, callback);
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
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v14, (Il2CppObject *)this, Method_EquipGraphListMenu_EndStatusSync__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                                     v14,
                                                                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v16 = unlockList;
        v15 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)servantEquipListViewManager,
          v15,
          v16,
          0,
          v17,
          v18,
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


void EquipGraphListMenu__add_callbackFunc(
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

  if ( (byte_4D2BCC5 & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    byte_4D2BCC5 = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  EquipGraphListMenu__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2BCC6 & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    byte_4D2BCC6 = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  EquipGraphListMenu__GetModeKind(v11, v12);
}


void EquipGraphListMenu_CallbackFunc___ctor(
        EquipGraphListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC8BF4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC8B94;
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

  v14 = type;
  v15 = result;
  if ( (byte_4D2BCD9 & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListViewManager_EquipGraphType_TypeInfo);
    sub_1C94098(&EquipGraphListMenu_ResultKind_TypeInfo);
    byte_4D2BCD9 = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(EquipGraphListMenu_ResultKind_TypeInfo, &v15);
  v12[1] = item;
  *(_QWORD *)&v13 = j_il2cpp_value_box_0(EquipGraphListViewManager_EquipGraphType_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v12, callback, object);
}


void EquipGraphListMenu_CallbackFunc__EndInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC8C54;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC8C0C;
}


System_IAsyncResult_o *EquipGraphListMenu_RequestCallbackFunc__BeginInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4D2BCDA & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D2BCDA = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void EquipGraphListMenu_RequestCallbackFunc__EndInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2BCDB & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListMenu___c_TypeInfo);
    byte_4D2BCDB = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EquipGraphListMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphListMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphListMenu___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EquipGraphListMenu___c_TypeInfo->static_fields,
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

  if ( (byte_4D2BCDC & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4D2BCDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void EquipGraphListMenu___c___Open_b__31_0(EquipGraphListMenu___c_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2BCDD & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4D2BCDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
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
  Il2CppObject *_4__this; // x19
  EquipGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  struct EquipGraphListMenu_o *v12; // x20
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x19
  EquipGraphListViewManager_CallbackFunc_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2

  v6 = this;
  if ( (byte_4D2BCDE & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_EquipGraphListMenu_EndRequestClickDecide__);
    sub_1C94098(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    this = (EquipGraphListMenu___c__DisplayClass40_0_o *)sub_1C94098(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2BCDE = 1;
  }
  if ( isDecide )
  {
    equipItem = v6->fields.equipItem;
    if ( equipItem )
    {
      equipItem->fields._EquipFriendShipSkillChange_k__BackingField = equipBondSkillChange;
      _4__this = (Il2CppObject *)v6->fields.__4__this;
      v9 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
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
    sub_1C942F0(this, isDecide);
  }
  v12 = v6->fields.__4__this;
  if ( !v12 )
    goto LABEL_10;
  v12->fields.state = 2;
  servantEquipListViewManager = v12->fields.servantEquipListViewManager;
  v14 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C942E4(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)v12,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    0);
  if ( !servantEquipListViewManager )
    goto LABEL_10;
  servantEquipListViewManager->fields.callbackFunc = v14;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  EquipGraphListViewManager__SetMode_41726268(servantEquipListViewManager, 2, v21);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x2

  v8 = this;
  if ( (byte_4D2BCDF & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_EquipGraphListMenu_EndRequestClickDecide__);
    sub_1C94098(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    this = (EquipGraphListMenu___c__DisplayClass40_0_o *)sub_1C94098(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2BCDF = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( isDecide )
  {
    if ( changeBond )
    {
      if ( !_4__this )
        goto LABEL_13;
      _4__this->fields.equipGraphType = 1;
      equipItem = v8->fields.equipItem;
      if ( !equipItem )
        goto LABEL_13;
      equipItem->fields._EquipFriendShipSkillChange_k__BackingField = equipBondSkillChange;
    }
    v11 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
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
    sub_1C942F0(this, isDecide);
  }
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  servantEquipListViewManager = _4__this->fields.servantEquipListViewManager;
  v15 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C942E4(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v15,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    0);
  if ( !servantEquipListViewManager )
    goto LABEL_13;
  servantEquipListViewManager->fields.callbackFunc = v15;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  EquipGraphListViewManager__SetMode_41726268(servantEquipListViewManager, 2, v22);
}