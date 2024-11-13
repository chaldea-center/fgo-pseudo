void __fastcall ServantOperationManager___ctor(ServantOperationManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantOperationManager__CallOnSelect(
        ServantOperationManager_o *this,
        int32_t actionKind,
        System_Int64_array *servants,
        System_Int64_array *commandCodes,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onSelect; // x0
  struct System_Action_ServantOperationManager_ActionKind__long____long____o *v9; // x22
  struct System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect; // t1

  onSelect = this->fields.onSelect;
  p_onSelect = (PartyOrganizationUtility_o *)&this->fields.onSelect;
  v9 = onSelect;
  if ( onSelect )
  {
    p_onSelect->klass = 0LL;
    sub_1BCA784(p_onSelect, 0LL, (int64_t)servants, (int32_t)commandCodes, (System_String_o *)method, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_Int64_array *, System_Int64_array *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)actionKind,
      servants,
      commandCodes,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__ChangeList(
        ServantOperationManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationManager_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 v9; // x9
  ServantOperationListViewManager_o *v10; // x21
  System_Action_bool__o *v11; // x22
  __int64 v12; // x20
  __int64 v13; // x9
  __int64 v14; // x10
  struct ServantOperationListViewManager_array *v15; // x8
  __int64 v16; // x9

  v5 = this;
  if ( (byte_4B125EC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, *(_QWORD *)&kind, method);
    this = (ServantOperationManager_o *)sub_1BCA7E0(&Method_ServantOperationListViewManager_EndClickTabStatus__, v6, v7);
    byte_4B125EC = 1;
  }
  servantOperationListViewManager = v5->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_16;
  v9 = v5->fields.kind;
  if ( (unsigned int)v9 >= servantOperationListViewManager->max_length )
    goto LABEL_23;
  v10 = servantOperationListViewManager->m_Items[v9];
  if ( !v10 )
    goto LABEL_16;
  if ( v10->fields.modeKind )
  {
    v11 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, *(_QWORD *)&kind, method, v3);
    System_Action_bool____ctor(
      v11,
      (Il2CppObject *)v10,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      0LL);
    ServantOperationListViewManager__StatusRequest(v10, v11, 0LL);
    servantOperationListViewManager = v5->fields.servantOperationListViewManager;
    v5->fields.kind = kind;
    if ( !servantOperationListViewManager )
      goto LABEL_16;
  }
  else
  {
    v5->fields.kind = kind;
  }
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)&servantOperationListViewManager->max_length;
    if ( (int)v12 >= (int)v13 )
      break;
    if ( (unsigned int)v12 >= (unsigned int)v13 )
      goto LABEL_23;
    this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v12];
    if ( this )
    {
      this = (ServantOperationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (_DWORD)v12 == v5->fields.kind, 0LL);
        servantOperationListViewManager = v5->fields.servantOperationListViewManager;
        ++v12;
        if ( servantOperationListViewManager )
          continue;
      }
    }
    goto LABEL_16;
  }
  v14 = v5->fields.kind;
  if ( (unsigned int)v14 >= (unsigned int)v13 )
LABEL_23:
    sub_1BCAA44(this, *(_QWORD *)&kind);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v14];
  if ( !this
    || (ServantOperationListViewManager__ChangeSortKindDisp((ServantOperationListViewManager_o *)this, 0LL),
        (v15 = v5->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&kind);
  }
  v16 = v5->fields.kind;
  if ( (unsigned int)v16 >= v15->max_length )
    goto LABEL_23;
  this = (ServantOperationManager_o *)v15->m_Items[v16];
  if ( !this )
    goto LABEL_16;
  ServantOperationListViewManager__ChangeFilterKindDisp((ServantOperationListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__ConfirmServantCheckEquipDialog(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationManager_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  ServantCheckEquipDialog_ClickDelegate_o *v9; // x21

  v5 = this;
  if ( (byte_4B125F1 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, isDecide, method);
    this = (ServantOperationManager_o *)sub_1BCA7E0(&Method_ServantOperationManager_EndServantCheckEquip__, v6, v7);
    byte_4B125F1 = 1;
  }
  servantCheckEquipDialog = v5->fields.servantCheckEquipDialog;
  if ( isDecide )
  {
    v9 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                      ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                      isDecide,
                                                      method,
                                                      v3);
    ServantCheckEquipDialog_ClickDelegate___ctor(
      v9,
      (Il2CppObject *)v5,
      Method_ServantOperationManager_EndServantCheckEquip__,
      0LL);
    if ( servantCheckEquipDialog )
    {
      ServantCheckEquipDialog__OpenShopLastCheck(servantCheckEquipDialog, v9, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(this, isDecide);
  }
  if ( !servantCheckEquipDialog )
    goto LABEL_8;
  ServantCheckEquipDialog__Close(v5->fields.servantCheckEquipDialog, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__CreateList(
        ServantOperationManager_o *this,
        int32_t kind,
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
  UILabel_o *qpDataLabel; // x21
  int32_t totalQP; // w22
  System_String_o *NumberFormat; // x0
  __int64 v21; // x1
  UILabel_o *mpDataLabel; // x21
  UILabel_o *rpDataLabel; // x21
  int32_t Count; // w21
  __int64 v25; // x1
  BalanceConfig_c *v26; // x0
  int ServantSellSelectMax; // w21
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v29; // x22
  Il2CppObject *v30; // x23
  Il2CppObject *v31; // x0
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  struct ServantOperationListViewManager_array *v33; // x8
  struct ServantOperationListViewManager_array *v34; // x8
  struct ServantOperationListViewManager_array *v35; // x8
  struct ServantOperationListViewManager_array *v36; // x8
  struct ServantOperationListViewManager_array *v37; // x8
  const MethodInfo *v38; // x2
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B125EB & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v15, v16);
    byte_4B125EB = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  ServantOperationManager__Init(this, *(const MethodInfo **)&kind);
  qpDataLabel = this->fields.qpDataLabel;
  totalQP = this->fields.totalQP;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  NumberFormat = LocalizationManager__GetNumberFormat(totalQP, 0LL);
  if ( !qpDataLabel )
    goto LABEL_42;
  UILabel__set_text(qpDataLabel, NumberFormat, 0LL);
  mpDataLabel = this->fields.mpDataLabel;
  NumberFormat = LocalizationManager__GetNumberFormat(this->fields.totalMana, 0LL);
  if ( !mpDataLabel )
    goto LABEL_42;
  UILabel__set_text(mpDataLabel, NumberFormat, 0LL);
  rpDataLabel = this->fields.rpDataLabel;
  NumberFormat = LocalizationManager__GetNumberFormat(this->fields.totalRarePri, 0LL);
  if ( !rpDataLabel )
    goto LABEL_42;
  UILabel__set_text(rpDataLabel, NumberFormat, 0LL);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)NumberFormat, 0LL);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  UserServantMaster__getCount((UserServantMaster_o *)NumberFormat, &servantEquipSum[1], servantEquipSum, 0, 0LL);
  v26 = BalanceConfig_TypeInfo;
  ServantSellSelectMax = servantEquipSum[1] + Count + servantEquipSum[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v25);
    v26 = BalanceConfig_TypeInfo;
  }
  if ( ServantSellSelectMax >= v26->static_fields->ServantSellSelectMax )
  {
    ServantSellSelectMax = v26->static_fields->ServantSellSelectMax;
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v25);
      ServantSellSelectMax = BalanceConfig_TypeInfo->static_fields->ServantSellSelectMax;
    }
  }
  this->fields._SelectMax_k__BackingField = ServantSellSelectMax;
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = this->fields._SelectMax_k__BackingField;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  NumberFormat = System_String__Format_62415592(v29, v30, v31, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_42;
  UILabel__set_text(selectDoneLabel, NumberFormat, 0LL);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_42;
  if ( !servantOperationListViewManager->max_length )
    goto LABEL_43;
  NumberFormat = (System_String_o *)servantOperationListViewManager->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0LL);
  if ( !NumberFormat )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
  v33 = this->fields.servantOperationListViewManager;
  if ( !v33 )
    goto LABEL_42;
  if ( !v33->max_length )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v33->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 0, 0, 0LL);
  v34 = this->fields.servantOperationListViewManager;
  if ( !v34 )
    goto LABEL_42;
  if ( v34->max_length <= 1 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v34->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0LL);
  if ( !NumberFormat )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
  v35 = this->fields.servantOperationListViewManager;
  if ( !v35 )
    goto LABEL_42;
  if ( v35->max_length <= 1 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v35->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 1, 0, 0LL);
  v36 = this->fields.servantOperationListViewManager;
  if ( !v36 )
    goto LABEL_42;
  if ( v36->max_length <= 2 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v36->m_Items[2];
  if ( !NumberFormat
    || (NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)NumberFormat,
                                            0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL),
        (v37 = this->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_42:
    sub_1BCAA3C(NumberFormat, v21);
  }
  if ( v37->max_length <= 2 )
LABEL_43:
    sub_1BCAA44(NumberFormat, v21);
  NumberFormat = (System_String_o *)v37->m_Items[2];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 2, 0, 0LL);
  ServantOperationManager__ChangeList(this, kind, v38);
}


void __fastcall ServantOperationManager__DestroyList(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x19
  int max_length; // w8
  unsigned int v4; // w20

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_9;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1BCAA44(this, method);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v4];
      if ( !this )
        break;
      ServantOperationListViewManager__DestroyList((ServantOperationListViewManager_o *)this, 0LL);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall ServantOperationManager__EndCloseSelectFilterKind(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__EndSelectFilterKind(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCAA44(this, isDecide);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, isDecide);
  ServantOperationListViewManager__EndSelectFilterKind((ServantOperationListViewManager_o *)this, isDecide, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__EndServantCheckEquip(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x0
  const MethodInfo *v6; // x1

  servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
  if ( !servantCheckEquipDialog )
    sub_1BCAA3C(0LL, isDecide);
  ServantCheckEquipDialog__Close(servantCheckEquipDialog, 0LL);
  if ( isDecide )
    ServantOperationManager__SellCombineWarning(this, v6);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantOperationManager__GetAmountSortValue(
        ServantOperationManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCAA44(this, svtId);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, *(_QWORD *)&svtId);
  return ServantOperationListViewManager__GetAmountSortValue((ServantOperationListViewManager_o *)this, svtId, 0LL);
}


System_Collections_Generic_List_int__o *__fastcall ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *selectEquipedCommandCodeServantList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_object__o *v4; // x19
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t size; // w23
  System_Collections_Generic_List_int__o *v38; // x20
  UserServantEntity_array *AllList; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_int__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_Dictionary_int__int__o *v47; // x22
  int32_t i; // w24
  ServantOperationManager_o *v49; // x25
  int32_t servantCheckWarningDialog; // w26
  int32_t v51; // w27
  int32_t v52; // w28
  bool v53; // zf
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x24
  unsigned int v56; // w28
  UserServantEntity_o *v57; // x25
  __int64 v58; // x26
  __int64 v59; // x27
  __int64 v60; // x25
  __int64 v61; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  int32_t v65; // w23
  int32_t v66; // w24
  int32_t v67; // w25
  int v68; // w29
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v4 = (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList;
  if ( (byte_4B125F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v31, v32);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34);
    this = (ServantOperationManager_o *)sub_1BCA7E0(
                                          &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                          v35,
                                          v36);
    byte_4B125F0 = 1;
  }
  if ( !v4 )
    goto LABEL_62;
  size = v4->fields._size;
  v38 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    selectEquipedCommandCodeServantList,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v43 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v40,
                                                      v41,
                                                      v42);
    System_Collections_Generic_List_int____ctor(
      v43,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    v47 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v44,
                                                                 v45,
                                                                 v46);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v47,
      (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( v4->fields._size >= 1 )
    {
      for ( i = 0; i < v4->fields._size; ++i )
      {
        this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                              v4,
                                              i,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
        if ( !this || !v47 )
          goto LABEL_62;
        v49 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v47,
                (int32_t)this->fields.servantCheckWarningDialog,
                (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          servantCheckWarningDialog = (int32_t)v49->fields.servantCheckWarningDialog;
          if ( v4->fields._size >= 1 )
          {
            v51 = 0;
            v52 = 0;
            while ( 1 )
            {
              this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    v4,
                                                    v52,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
              if ( !this )
                break;
              ++v52;
              v53 = servantCheckWarningDialog == LODWORD(this->fields.servantCheckWarningDialog);
              servantCheckWarningDialog = (int32_t)v49->fields.servantCheckWarningDialog;
              if ( v53 )
                ++v51;
              if ( v52 >= v4->fields._size )
                goto LABEL_20;
            }
LABEL_62:
            sub_1BCAA3C(this, selectEquipedCommandCodeServantList);
          }
          v51 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v47,
            servantCheckWarningDialog,
            v51,
            (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_62;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
      v56 = 0;
      do
      {
        if ( v56 >= max_length )
          sub_1BCAA44(this, selectEquipedCommandCodeServantList);
        v57 = AllList->m_Items[v56];
        if ( !v57 )
          goto LABEL_62;
        v59 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
        v58 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            selectEquipedCommandCodeServantList);
        *(_QWORD *)&v73.fields.currentCryptoKey = v59;
        *(_QWORD *)&v73.fields.fakeValue = v58;
        this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v73,
                                              0LL);
        if ( !v55 )
          goto LABEL_62;
        this = (ServantOperationManager_o *)DataMasterBase_object__object__int___GetEntity(
                                              v55,
                                              (int32_t)this,
                                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_62;
        this = (ServantOperationManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ServantOperationManager_o *)UserServantEntity__IsEventJoin(v57, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v61 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
            v60 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                selectEquipedCommandCodeServantList);
            *(_QWORD *)&v74.fields.currentCryptoKey = v61;
            *(_QWORD *)&v74.fields.fakeValue = v60;
            this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                  v74,
                                                  0LL);
            if ( !v43 )
              goto LABEL_62;
            items = v43->fields._items;
            v63 = Method_System_Collections_Generic_List_int__Add__;
            ++v43->fields._version;
            if ( !items )
              goto LABEL_62;
            v64 = v43->fields._size;
            selectEquipedCommandCodeServantList = (System_Collections_Generic_List_ServantOperationListViewItem__o *)(unsigned int)this;
            if ( (unsigned int)v64 >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v43,
                (int32_t)this,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              v43->fields._size = v64 + 1;
              items->m_Items[v64 + 1] = (int)this;
            }
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v56 < max_length );
    }
    if ( v4->fields._size >= 1 )
    {
      v65 = 0;
      while ( 1 )
      {
        this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                              v4,
                                              v65,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
        if ( !this || !v43 )
          goto LABEL_62;
        v66 = (int32_t)this->fields.servantCheckWarningDialog;
        if ( v43->fields._size < 1 )
        {
          v68 = 0;
          if ( !v47 )
            goto LABEL_62;
        }
        else
        {
          v67 = 0;
          v68 = 0;
          do
          {
            this = (ServantOperationManager_o *)System_Collections_Generic_List_int___get_Item(
                                                  v43,
                                                  v67++,
                                                  (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v66 == (_DWORD)this )
              ++v68;
          }
          while ( v67 < v43->fields._size );
          if ( !v47 )
            goto LABEL_62;
        }
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v47,
                                              v66,
                                              (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v68 )
        {
          if ( !v38 )
            goto LABEL_62;
          v69 = v38->fields._items;
          v70 = Method_System_Collections_Generic_List_int__Add__;
          ++v38->fields._version;
          if ( !v69 )
            goto LABEL_62;
          v71 = v38->fields._size;
          if ( (unsigned int)v71 >= v69->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v38,
              v66,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
          }
          else
          {
            v38->fields._size = v71 + 1;
            v69->m_Items[v71 + 1] = v66;
          }
        }
        if ( ++v65 >= v4->fields._size )
          return v38;
      }
    }
  }
  return v38;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationManager__GetSelectedEquipeCmdCardServantList(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( !servantOperationListViewManager->max_length )
    sub_1BCAA44(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[0];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  return ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
           (ServantOperationListViewManager_o *)this,
           0LL);
}


int32_t __fastcall ServantOperationManager__GetSelectedOrderByCommandCodeId(
        ServantOperationManager_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( servantOperationListViewManager->max_length <= 2 )
    sub_1BCAA44(this, id);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[2];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, id);
  return ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
           (ServantOperationListViewManager_o *)this,
           id,
           0LL);
}


int32_t __fastcall ServantOperationManager__GetSelectedOrderByServantId(
        ServantOperationManager_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v6; // w21

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_12;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1BCAA44(this, id);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      if ( HIDWORD(this[2].fields.filter2Button) != 2 )
      {
        this = (ServantOperationManager_o *)ServantOperationListViewManager__GetSelectedOrderByUserServantId(
                                              (ServantOperationListViewManager_o *)this,
                                              id,
                                              0LL);
        if ( (int)this > 0 )
          return (int)this;
      }
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_9;
    }
LABEL_12:
    sub_1BCAA3C(this, id);
  }
LABEL_9:
  LODWORD(this) = -1;
  return (int)this;
}


void __fastcall ServantOperationManager__Init(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0

  allReleaseButton = this->fields.allReleaseButton;
  this->fields._TotalSum_k__BackingField = 0;
  *(_QWORD *)&this->fields.totalQP = 0LL;
  this->fields.totalRarePri = 0;
  if ( !allReleaseButton
    || (((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
          allReleaseButton,
          3LL,
          0LL,
          allReleaseButton->klass->vtable._15_OnPress.methodPtr),
        (allReleaseButton = this->fields.decideButton) == 0LL) )
  {
    sub_1BCAA3C(allReleaseButton, method);
  }
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    3LL,
    0LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall ServantOperationManager__InitBackListView(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCAA44(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  ServantOperationListViewManager__InitBack((ServantOperationListViewManager_o *)this, 0LL);
}


void __fastcall ServantOperationManager__ModifyItem(
        ServantOperationManager_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCAA44(this, selectedId);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, selectedId);
  ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, selectedId, 0LL);
}


void __fastcall ServantOperationManager__ModifyListItem(
        ServantOperationManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v6; // w21

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_9;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1BCAA44(this, userSvtId);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, userSvtId, 0LL);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, userSvtId);
  }
}


void __fastcall ServantOperationManager__OnClickDecide(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x20
  ServantOperationListViewManager_o *SelectedServantIdList; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Collections_Generic_List_long__o *v75; // x22
  struct System_Collections_Generic_List_long__o **p_selectUserServantIdList; // x21
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  System_Collections_Generic_List_long__o *v86; // x23
  struct System_Collections_Generic_List_long__o **p_selectUserCommandCodeIdList; // x22
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  System_Collections_Generic_List_long__o *v95; // x23
  struct ServantOperationListViewManager_array *v96; // x8
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x23
  struct ServantOperationListViewManager_array *v98; // x8
  System_Collections_Generic_List_long__o *selectUserCommandCodeIdList; // x23
  struct ServantOperationListViewManager_array *v100; // x8
  struct ServantOperationListViewManager_array *v101; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *v102; // x24
  System_Collections_Generic_List_ServantOperationListViewItem__o *EquipMaterialList; // x0
  System_Collections_Generic_List_ServantOperationListViewItem__o **v104; // x23
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  ServantOperationManager_o *v111; // x0
  const MethodInfo *v112; // x2
  int m_CancellationTokenSource; // w8
  int v114; // w26
  Il2CppObject *current; // x24
  Il2CppObject *Instance; // x0
  __int64 v117; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v119; // x1
  Il2CppObject *Entity; // x0
  __int64 v121; // x1
  _QWORD *v122; // x0
  System_Reflection_MethodBase_o *v123; // x0
  __int64 v124; // x1
  Il2CppObject *v125; // x21
  __int64 v126; // x1
  System_String_o *v127; // x19
  System_Collections_Generic_List_object__o *ExchangeSvtCombineExpCampaign; // x0
  __int64 v129; // x1
  Il2CppObject *Item; // x0
  System_String_o *v131; // x0
  System_String_o *v132; // x21
  Il2CppObject *v133; // x22
  System_String_o *v134; // x23
  System_String_o *v135; // x24
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x3
  CommonConfirmDialog_ClickDelegate_o *v139; // x25
  _QWORD *v140; // x0
  System_Reflection_MethodBase_o *v141; // x0
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  System_Collections_Generic_List_ServantOperationListViewItem__o *v143; // x21
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x3
  ServantCheckEquipDialog_ClickDelegate_o *v147; // x22
  _QWORD *v148; // x0
  int32_t v149; // w20
  System_Reflection_MethodBase_o *v150; // x0
  const MethodInfo *v151; // x1
  System_Collections_Generic_List_Enumerator_T__o v152; // [xsp+40h] [xbp-A0h] BYREF
  int v153; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v154; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B125EF & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__AddRange__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v37, v38);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__, v41, v42);
    sub_1BCA7E0(&Method_ServantOperationManager_OnClickDecide__, v43, v44);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v45, v46);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48);
    sub_1BCA7E0(&Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__, v49, v50);
    sub_1BCA7E0(&ServantOperationManager___c__DisplayClass44_0_TypeInfo, v51, v52);
    sub_1BCA7E0(&StringLiteral_5833/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_5831/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v61, v62);
    byte_4B125EF = 1;
  }
  memset(&v154, 0, sizeof(v154));
  v153 = 0;
  v63 = sub_1BCAA2C(ServantOperationManager___c__DisplayClass44_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v63, 0LL);
  if ( !v63 )
    goto LABEL_68;
  *(_QWORD *)(v63 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 24), (int64_t)this, v66, v67, v68, v69, v70, v71);
  if ( this->fields._TotalSum_k__BackingField >= 1 )
  {
    v75 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v72,
                                                       v73,
                                                       v74);
    System_Collections_Generic_List_long____ctor(
      v75,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserServantIdList = v75;
    p_selectUserServantIdList = &this->fields.selectUserServantIdList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectUserServantIdList,
      (int64_t)v75,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
    v86 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v83,
                                                       v84,
                                                       v85);
    System_Collections_Generic_List_long____ctor(
      v86,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserCommandCodeIdList = v86;
    p_selectUserCommandCodeIdList = &this->fields.selectUserCommandCodeIdList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectUserCommandCodeIdList,
      (int64_t)v86,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
    servantOperationListViewManager = this->fields.servantOperationListViewManager;
    if ( !servantOperationListViewManager )
      goto LABEL_68;
    if ( !servantOperationListViewManager->max_length )
      goto LABEL_69;
    SelectedServantIdList = servantOperationListViewManager->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    v95 = *p_selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   0LL);
    if ( !v95 )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      v95,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
    v96 = this->fields.servantOperationListViewManager;
    if ( !v96 )
      goto LABEL_68;
    if ( v96->max_length <= 1 )
      goto LABEL_69;
    SelectedServantIdList = v96->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    selectUserServantIdList = this->fields.selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   0LL);
    if ( !selectUserServantIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      selectUserServantIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
    v98 = this->fields.servantOperationListViewManager;
    if ( !v98 )
      goto LABEL_68;
    if ( v98->max_length <= 2 )
      goto LABEL_69;
    SelectedServantIdList = v98->m_Items[2];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    selectUserCommandCodeIdList = this->fields.selectUserCommandCodeIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedCommandCodeIdList(
                                                                   SelectedServantIdList,
                                                                   0LL);
    if ( !selectUserCommandCodeIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      selectUserCommandCodeIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
    v100 = this->fields.servantOperationListViewManager;
    if ( !v100 )
      goto LABEL_68;
    if ( !v100->max_length )
      goto LABEL_69;
    SelectedServantIdList = v100->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
                                                                   SelectedServantIdList,
                                                                   0LL);
    v101 = this->fields.servantOperationListViewManager;
    if ( !v101 )
      goto LABEL_68;
    if ( v101->max_length <= 1 )
LABEL_69:
      sub_1BCAA44(SelectedServantIdList, v65);
    v102 = (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedServantIdList;
    SelectedServantIdList = v101->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    EquipMaterialList = ServantOperationListViewManager__GetEquipMaterialList(SelectedServantIdList, 0LL);
    *(_QWORD *)(v63 + 16) = EquipMaterialList;
    v104 = (System_Collections_Generic_List_ServantOperationListViewItem__o **)(v63 + 16);
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v63 + 16),
      (int64_t)EquipMaterialList,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                                                   v111,
                                                                   v102,
                                                                   v112);
    if ( !SelectedServantIdList )
      goto LABEL_68;
    m_CancellationTokenSource = (int)SelectedServantIdList->fields.m_CancellationTokenSource;
    SelectedServantIdList = (ServantOperationListViewManager_o *)this->fields.selectUserServantIdList;
    this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = m_CancellationTokenSource > 0;
    if ( !SelectedServantIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___GetEnumerator(
      &v152,
      (System_Collections_Generic_List_long__o *)SelectedServantIdList,
      (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v114 = 0;
    v154 = v152;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v154,
              (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v154.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v117);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1BCAA3C(0LL, v119);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_1BCAA3C(0LL, v121);
      v114 |= UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0LL);
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v154,
      (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    if ( (v114 & 1) != 0 )
    {
      v122 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v122 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationManager_OnClickDecide__);
      v123 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v122, v122[4]);
      OverwriteAssetSoundName__PlaySystemSe(v123, 0, 0LL);
      v125 = (Il2CppObject *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v124);
      v127 = LocalizationManager__Get((System_String_o *)StringLiteral_5831/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v126);
      SelectedServantIdList = (ServantOperationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( SelectedServantIdList )
      {
        ExchangeSvtCombineExpCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
                                                                                       (EventCampaignMaster_o *)SelectedServantIdList,
                                                                                       0LL);
        if ( ExchangeSvtCombineExpCampaign )
        {
          if ( ExchangeSvtCombineExpCampaign->fields._size >= 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     ExchangeSvtCombineExpCampaign,
                     0,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( Item )
            {
              v153 = SLODWORD(Item[3].klass) / 1000;
              v125 = (Il2CppObject *)System_Int32__ToString((int32_t)&v153, 0LL);
            }
          }
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v129);
        v131 = LocalizationManager__Get((System_String_o *)StringLiteral_5833/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, 0LL);
        v132 = System_String__Format_62415592(v131, v125, v125, 0LL);
        v133 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v134 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
        v135 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
        v139 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                        v136,
                                                        v137,
                                                        v138);
        CommonConfirmDialog_ClickDelegate___ctor(
          v139,
          (Il2CppObject *)v63,
          Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__,
          0LL);
        if ( v133 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v133,
            v127,
            v132,
            v134,
            v135,
            v139,
            24,
            0.0,
            15.0,
            0,
            0,
            0,
            240,
            0,
            1,
            0,
            0,
            0LL);
          return;
        }
      }
LABEL_68:
      sub_1BCAA3C(SelectedServantIdList, v65);
    }
    if ( !*v104 )
      goto LABEL_68;
    if ( (*v104)->fields._size < 1 )
    {
      if ( !*p_selectUserServantIdList )
        goto LABEL_68;
      if ( (*p_selectUserServantIdList)->fields._size > 0 )
        goto LABEL_57;
      if ( !*p_selectUserCommandCodeIdList )
        goto LABEL_68;
      if ( (*p_selectUserCommandCodeIdList)->fields._size < 1 )
      {
        v148 = Method_ServantOperationManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
          v148 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationManager_OnClickDecide__);
        v149 = 2;
      }
      else
      {
LABEL_57:
        v148 = Method_ServantOperationManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
          v148 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationManager_OnClickDecide__);
        v149 = 0;
      }
      v150 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v148, v148[4]);
      OverwriteAssetSoundName__PlaySystemSe(v150, v149, 0LL);
      ServantOperationManager__SellCombineWarning(this, v151);
    }
    else
    {
      v140 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v140 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationManager_OnClickDecide__);
      v141 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v140, v140[4]);
      OverwriteAssetSoundName__PlaySystemSe(v141, 0, 0LL);
      servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
      v143 = *v104;
      v147 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                          ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                          v144,
                                                          v145,
                                                          v146);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v147,
        (Il2CppObject *)this,
        Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0LL);
      if ( !servantCheckEquipDialog )
        goto LABEL_68;
      ServantCheckEquipDialog__Open_33225252(servantCheckEquipDialog, v143, v147, 0LL);
    }
  }
}


void __fastcall ServantOperationManager__OnClickFilter2Kind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCAA44(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  ServantOperationListViewManager__OnClickFilter2Kind((ServantOperationListViewManager_o *)this, 0LL);
}


void __fastcall ServantOperationManager__OnClickFilterKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCAA44(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  ServantOperationListViewManager__OnClickFilterKind((ServantOperationListViewManager_o *)this, 0LL);
}


void __fastcall ServantOperationManager__OnClickReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  int32_t TotalSum_k__BackingField; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B125F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantOperationManager_OnClickReleaseAll__, method, v2);
    byte_4B125F6 = 1;
  }
  v4 = Method_ServantOperationManager_OnClickReleaseAll__;
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  if ( (*((_BYTE *)Method_ServantOperationManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationManager_OnClickReleaseAll__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  if ( TotalSum_k__BackingField <= 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    ServantOperationManager__ReleaseAll(this, v7);
  }
}


void __fastcall ServantOperationManager__OnClickSortAscendingOrder(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCAA44(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  ServantOperationListViewManager__OnClickSortAscendingOrder((ServantOperationListViewManager_o *)this, 0LL);
}


void __fastcall ServantOperationManager__OnClickSortKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCAA44(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  ServantOperationListViewManager__OnClickSortKind((ServantOperationListViewManager_o *)this, 0LL);
}


void __fastcall ServantOperationManager__OnSelectServant(
        ServantOperationManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_long__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_List_long__o *v16; // x20
  int64_t UserCommandCodeId; // x0
  int64_t v18; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v21; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  struct System_Int64_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  System_Int64_array *v28; // x21
  System_Int64_array *v29; // x3
  const MethodInfo *v30; // x4

  if ( (byte_4B125F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, selectItem, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v10, v11);
    byte_4B125F8 = 1;
  }
  v12 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectItem,
                                                     method,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v13,
                                                     v14,
                                                     v15);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_22;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCAA44(UserCommandCodeId, v18);
  v21 = servantOperationListViewManager->m_Items[kind];
  if ( !v21 || !selectItem )
    goto LABEL_22;
  if ( v21->fields.kind == 2 )
  {
    UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(selectItem, 0LL);
    if ( v16 )
    {
      items = v16->fields._items;
      v23 = Method_System_Collections_Generic_List_long__Add__;
      ++v16->fields._version;
      if ( items )
      {
        size = v16->fields._size;
        v18 = UserCommandCodeId;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v16,
            UserCommandCodeId,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v16->fields._size = size + 1;
          items->m_Items[size] = UserCommandCodeId;
        }
        if ( v12 )
        {
          UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                         v12,
                                         (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(UserCommandCodeId, v18);
  }
  UserCommandCodeId = ServantOperationListViewItem__get_UserSvtId(selectItem, 0LL);
  if ( !v12 )
    goto LABEL_22;
  v25 = v12->fields._items;
  v26 = Method_System_Collections_Generic_List_long__Add__;
  ++v12->fields._version;
  if ( !v25 )
    goto LABEL_22;
  v27 = v12->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v12,
      UserCommandCodeId,
      *(const MethodInfo_3589C90 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v12->fields._size = v27 + 1;
    v25->m_Items[v27] = UserCommandCodeId;
  }
  UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                 v12,
                                 (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v16 )
    goto LABEL_22;
LABEL_21:
  v28 = (System_Int64_array *)UserCommandCodeId;
  v29 = System_Collections_Generic_List_long___ToArray(
          v16,
          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 2, v28, v29, v30);
}


void __fastcall ServantOperationManager__OpenSellConfirmDialog(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x0
  System_Int64_array *v5; // x20
  System_Int64_array *v6; // x3
  const MethodInfo *v7; // x4

  if ( (byte_4B125F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, method, v2);
    byte_4B125F5 = 1;
  }
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList
    || (selectUserServantIdList = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                               selectUserServantIdList,
                                                                               (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.selectUserCommandCodeIdList) )
  {
    sub_1BCAA3C(selectUserServantIdList, method);
  }
  v5 = (System_Int64_array *)selectUserServantIdList;
  v6 = System_Collections_Generic_List_long___ToArray(
         this->fields.selectUserCommandCodeIdList,
         (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 1, v5, v6, v7);
}


void __fastcall ServantOperationManager__RefrashListDisp(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantOperationManager_o *v3; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x21
  int max_length; // w8
  int v6; // w22
  int32_t v7; // w20
  int v8; // w8
  UILabel_o *qpDataLabel; // x21
  UILabel_o *mpDataLabel; // x20
  UILabel_o *rpDataLabel; // x20
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t rarePri; // [xsp+Ch] [xbp-34h] BYREF
  int32_t mana[2]; // [xsp+18h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4B125ED & 1) == 0 )
  {
    this = (ServantOperationManager_o *)sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B125ED = 1;
  }
  *(_QWORD *)mana = 0LL;
  rarePri = 0;
  servantOperationListViewManager = v3->fields.servantOperationListViewManager;
  *(_QWORD *)&v3->fields.totalQP = 0LL;
  v3->fields.totalRarePri = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_25;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1BCAA44(this, method);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        goto LABEL_25;
      ServantOperationListViewManager__SumItems(
        (ServantOperationListViewManager_o *)this,
        &mana[1],
        mana,
        &rarePri,
        0LL);
      ++v6;
      v7 = mana[1] + v3->fields.totalQP;
      v8 = mana[0] + v3->fields.totalMana;
      v3->fields.totalQP = v7;
      v3->fields.totalMana = v8;
      v3->fields.totalRarePri += rarePri;
      max_length = servantOperationListViewManager->max_length;
      if ( v6 >= max_length )
        goto LABEL_11;
    }
  }
  v7 = 0;
LABEL_11:
  qpDataLabel = v3->fields.qpDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v7, 0LL);
  if ( !qpDataLabel )
    goto LABEL_25;
  UILabel__set_text(qpDataLabel, (System_String_o *)this, 0LL);
  mpDataLabel = v3->fields.mpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v3->fields.totalMana, 0LL);
  if ( !mpDataLabel )
    goto LABEL_25;
  UILabel__set_text(mpDataLabel, (System_String_o *)this, 0LL);
  rpDataLabel = v3->fields.rpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v3->fields.totalRarePri, 0LL);
  if ( !rpDataLabel )
    goto LABEL_25;
  UILabel__set_text(rpDataLabel, (System_String_o *)this, 0LL);
  this = (ServantOperationManager_o *)v3->fields.allReleaseButton;
  if ( !this )
    goto LABEL_25;
  v12 = v3->fields._TotalSum_k__BackingField <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    v12,
    1LL,
    this->klass[1]._1.interfaceOffsets);
  this = (ServantOperationManager_o *)v3->fields.decideButton;
  if ( !this )
LABEL_25:
    sub_1BCAA3C(this, method);
  if ( v3->fields._TotalSum_k__BackingField <= 0 )
    v13 = 3LL;
  else
    v13 = 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    v13,
    1LL,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall ServantOperationManager__ReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantOperationManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v10; // w21
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4B125F7 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    this = (ServantOperationManager_o *)sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v6, v7);
    byte_4B125F7 = 1;
  }
  servantOperationListViewManager = v3->fields.servantOperationListViewManager;
  v3->fields._TotalSum_k__BackingField = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_14;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1BCAA44(this, method);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v10];
      if ( !this )
        break;
      ServantOperationListViewManager__ReleaseAll((ServantOperationListViewManager_o *)this, 0LL);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_9;
    }
LABEL_14:
    sub_1BCAA3C(this, method);
  }
LABEL_9:
  selectDoneLabel = v3->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = v3->fields._TotalSum_k__BackingField;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = v3->fields._SelectMax_k__BackingField;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  this = (ServantOperationManager_o *)System_String__Format_62415592(v12, v13, v14, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_14;
  UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
  ServantOperationManager__RefrashListDisp(v3, v15);
}


void __fastcall ServantOperationManager__SellCombineWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x20
  void *v40; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x2
  __int64 v49; // x3
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v52; // x22
  System_Collections_Generic_List_UserServantEntity__o **v53; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v62; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v64; // x1
  Il2CppObject *Entity; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  System_Collections_Generic_List_object__o *v72; // x0
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x8
  __int64 v77; // x2
  __int64 v78; // x3
  System_Collections_Generic_List_object__o *v79; // x22
  System_Predicate_object__o *v80; // x23
  Il2CppObject *v81; // x24
  struct ServantOperationManager___c_StaticFields *static_fields; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  __int64 v89; // x1
  const MethodInfo *v90; // x2
  __int64 v91; // x3
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x19
  System_Collections_Generic_List_UserServantEntity__o *v93; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v94; // x22
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B125F2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76803544, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Predicate_UserServantEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, v31, v32);
    sub_1BCA7E0(&Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__, v33, v34);
    sub_1BCA7E0(&ServantOperationManager___c__DisplayClass51_0_TypeInfo, v35, v36);
    sub_1BCA7E0(&ServantOperationManager___c_TypeInfo, v37, v38);
    byte_4B125F2 = 1;
  }
  memset(&v96, 0, sizeof(v96));
  v39 = sub_1BCAA2C(ServantOperationManager___c__DisplayClass51_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  if ( !v39 )
    goto LABEL_31;
  *(_QWORD *)(v39 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 16), (int64_t)this, v42, v43, v44, v45, v46, v47);
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_31;
  size = selectUserServantIdList->fields._size;
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v41,
                                                       v48,
                                                       v49);
  System_Collections_Generic_List_object____ctor_56235160(
    v52,
    size,
    (const MethodInfo_35A1498 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803544);
  *(_QWORD *)(v39 + 24) = v52;
  v53 = (System_Collections_Generic_List_UserServantEntity__o **)(v39 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 24), (int64_t)v52, v54, v55, v56, v57, v58, v59);
  v40 = this->fields.selectUserServantIdList;
  if ( !v40 )
    goto LABEL_31;
  System_Collections_Generic_List_long___GetEnumerator(
    &v95,
    (System_Collections_Generic_List_long__o *)v40,
    (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v96 = v95;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v96,
            (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v96.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v62);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1BCAA3C(0LL, v64);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v72 = (System_Collections_Generic_List_object__o *)*v53;
    if ( !*v53 )
      sub_1BCAA3C(0LL, Entity);
    items = v72->fields._items;
    v74 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v72->fields._version;
    if ( !items )
      sub_1BCAA3C(v72, Entity);
    v75 = v72->fields._size;
    if ( (unsigned int)v75 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v72,
        Entity,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
    }
    else
    {
      v76 = &items->obj.klass + v75;
      v72->fields._size = v75 + 1;
      v76[4] = (Il2CppClass *)Entity;
      sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 4), (int64_t)Entity, v66, v67, v68, v69, v70, v71);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v96,
    (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v40 = ServantOperationManager___c_TypeInfo;
  v79 = (System_Collections_Generic_List_object__o *)*v53;
  if ( !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo, v41);
    v40 = ServantOperationManager___c_TypeInfo;
  }
  v80 = *(System_Predicate_object__o **)(*((_QWORD *)v40 + 23) + 8LL);
  if ( !v80 )
  {
    if ( !*((_DWORD *)v40 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v40, v41);
      v40 = ServantOperationManager___c_TypeInfo;
    }
    v81 = (Il2CppObject *)**((_QWORD **)v40 + 23);
    v80 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_UserServantEntity__TypeInfo, v41, v77, v78);
    System_Predicate_object____ctor(v80, v81, Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, 0LL);
    static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Predicate_UserServantEntity__o *)v80;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__51_0, (int64_t)v80, v83, v84, v85, v86, v87, v88);
  }
  if ( !v79 )
    goto LABEL_31;
  if ( System_Collections_Generic_List_object___Find(
         v79,
         (System_Predicate_T__o *)v80,
         (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v93 = *(System_Collections_Generic_List_UserServantEntity__o **)(v39 + 24);
    v94 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         v89,
                                                         v90,
                                                         v91);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v94,
      (Il2CppObject *)v39,
      Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellCombineWarning(servantCheckWarningDialog, v93, v94, 0LL);
      return;
    }
LABEL_31:
    sub_1BCAA3C(v40, v41);
  }
  ServantOperationManager__SellSSRareWarning(this, *v53, v90);
}


void __fastcall ServantOperationManager__SellMaterialTdWarning(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantOperationManager_o *v4; // x22
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v47; // x20
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  __int64 v50; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v52; // x1
  Il2CppObject *Entity; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x21
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x1
  Il2CppObject *v59; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v62; // x0
  Il2CppObject *v63; // x22
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x1
  Il2CppObject *v67; // x23
  int64_t UserId; // x0
  __int64 v69; // x1
  int64_t v70; // x24
  __int64 v71; // x0
  __int64 v72; // x1
  UserServantCollectionEntity_o *v73; // x0
  UserServantCollectionEntity_o *v74; // x22
  Il2CppObject *v75; // x0
  __int64 v76; // x1
  Il2CppObject *v77; // x0
  __int64 v78; // x1
  Il2CppObject *v79; // x0
  __int64 v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  __int64 v91; // x2
  __int64 v92; // x3
  ServantCheckWarningDialog_o *v93; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v94; // x22
  Il2CppObject *v95; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+10h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  v4 = this;
  if ( (byte_4B125F4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76803544, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v35, v36);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__, v41, v42);
    this = (ServantOperationManager_o *)sub_1BCA7E0(
                                          &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                          v43,
                                          v44);
    byte_4B125F4 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  tdInfo = 0LL;
  selectUserServantIdList = v4->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_50;
  size = selectUserServantIdList->fields._size;
  v47 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor_56235160(
    v47,
    size,
    (const MethodInfo_35A1498 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803544);
  this = (ServantOperationManager_o *)v4->fields.selectUserServantIdList;
  v95 = (Il2CppObject *)v4;
  if ( !this )
    goto LABEL_50;
  System_Collections_Generic_List_long___GetEnumerator(
    &v96,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v98 = v96;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v98,
            (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v98.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v50);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1BCAA3C(0LL, v52);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v55 = Entity;
    if ( !Entity )
      sub_1BCAA3C(0LL, v54);
    if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)Entity, 0LL) )
    {
      v56 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v56 )
        sub_1BCAA3C(0LL, v57);
      v59 = DataManager__GetMasterData_object_(
              (DataManager_o *)v56,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      klass = v55[5].klass;
      monitor = v55[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58);
      *(_QWORD *)&v99.fields.currentCryptoKey = klass;
      *(_QWORD *)&v99.fields.fakeValue = monitor;
      v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v99, 0LL);
      if ( !v59 )
        sub_1BCAA3C(v62, (unsigned int)v62);
      v63 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v59,
              v62,
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v64 )
        sub_1BCAA3C(0LL, v65);
      v67 = DataManager__GetMasterData_object_(
              (DataManager_o *)v64,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v66);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v63 )
        sub_1BCAA3C(UserId, v69);
      v70 = UserId;
      v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v63[2],
              0LL);
      if ( !v67 )
        sub_1BCAA3C(v71, v72);
      v73 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v67, v70, v71, 0LL);
      v74 = v73;
      if ( v73 && UserServantCollectionEntity__IsGet(v73, 0LL) )
      {
        UserServantCollectionEntity__getTreasureDeviceInfo(v74, &tdInfo, -1, -1, 0LL);
        v75 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v75 )
          sub_1BCAA3C(0LL, v76);
        v77 = DataManager__GetMasterData_object_(
                (DataManager_o *)v75,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !tdInfo )
          sub_1BCAA3C(v77, v78);
        if ( !v77 )
          sub_1BCAA3C(0LL, v78);
        v79 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v77,
                tdInfo->fields.id,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !v79 )
          sub_1BCAA3C(0LL, v80);
        if ( v74->fields.treasureDeviceLv1 != LODWORD(v79[3].klass) )
        {
          if ( !v47 )
            sub_1BCAA3C(v79, v80);
          items = v47->fields._items;
          v88 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v47->fields._version;
          if ( !items )
            sub_1BCAA3C(v79, v80);
          v89 = v47->fields._size;
          if ( (unsigned int)v89 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v47,
              v55,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v90 = &items->obj.klass + v89;
            v47->fields._size = v89 + 1;
            v90[4] = (Il2CppClass *)v55;
            sub_1BCA784((PartyOrganizationUtility_o *)(v90 + 4), (int64_t)v55, v81, v82, v83, v84, v85, v86);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v98,
    (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( !v47 )
    goto LABEL_50;
  if ( v47->fields._size >= 1 )
  {
    v93 = (ServantCheckWarningDialog_o *)v95[8].klass;
    v94 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         method,
                                                         v91,
                                                         v92);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v94,
      v95,
      Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__,
      0LL);
    if ( v93 )
    {
      ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        v93,
        (System_Collections_Generic_List_UserServantEntity__o *)v47,
        v94,
        0LL);
      return;
    }
LABEL_50:
    sub_1BCAA3C(this, method);
  }
  ServantOperationManager__OpenSellConfirmDialog((ServantOperationManager_o *)v95, method);
}


void __fastcall ServantOperationManager__SellSSRareWarning(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  ServantOperationManager___c_c *v16; // x0
  System_Predicate_object__o *_9__52_0; // x21
  Il2CppObject *v18; // x22
  struct ServantOperationManager___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v30; // x22

  if ( (byte_4B125F3 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, userSvtEntityList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v6, v7);
    sub_1BCA7E0(&System_Predicate_UserServantEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ServantOperationManager__SellSSRareWarning_b__52_1__, v10, v11);
    sub_1BCA7E0(&Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, v12, v13);
    sub_1BCA7E0(&ServantOperationManager___c_TypeInfo, v14, v15);
    byte_4B125F3 = 1;
  }
  v16 = ServantOperationManager___c_TypeInfo;
  if ( !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo, userSvtEntityList);
    v16 = ServantOperationManager___c_TypeInfo;
  }
  _9__52_0 = (System_Predicate_object__o *)v16->static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, userSvtEntityList);
      v16 = ServantOperationManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__52_0 = (System_Predicate_object__o *)sub_1BCAA2C(
                                               System_Predicate_UserServantEntity__TypeInfo,
                                               userSvtEntityList,
                                               method,
                                               v3);
    System_Predicate_object____ctor(_9__52_0, v18, Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, 0LL);
    static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    static_fields->__9__52_0 = (struct System_Predicate_UserServantEntity__o *)_9__52_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__52_0,
      (int64_t)_9__52_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !userSvtEntityList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)userSvtEntityList,
         (System_Predicate_T__o *)_9__52_0,
         (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v30 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         v26,
                                                         v27,
                                                         v28);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v30,
      (Il2CppObject *)this,
      Method_ServantOperationManager__SellSSRareWarning_b__52_1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellSSRareWarning(servantCheckWarningDialog, userSvtEntityList, v30, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v16, userSvtEntityList);
  }
  ServantOperationManager__SellMaterialTdWarning(this, v26);
}


void __fastcall ServantOperationManager__SetFilter2Text(
        ServantOperationManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UILabel_o *filter2Label; // x0

  filter2Label = this->fields.filter2Label;
  if ( !filter2Label )
    sub_1BCAA3C(0LL, text);
  UILabel__set_text(filter2Label, text, 0LL);
}


void __fastcall ServantOperationManager__SetMode(
        ServantOperationManager_o *this,
        int32_t mode,
        System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onSelect = onSelect;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onSelect,
    (int64_t)onSelect,
    (int64_t)onSelect,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationManager__SetMode_33355204(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__SetMode_33355204(
        ServantOperationManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationManager_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v10; // x21
  System_Action_object__o *v11; // x22

  v5 = this;
  if ( (byte_4B125EE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ServantOperationListViewItem__TypeInfo, *(_QWORD *)&mode, method);
    this = (ServantOperationManager_o *)sub_1BCA7E0(&Method_ServantOperationManager_OnSelectServant__, v6, v7);
    byte_4B125EE = 1;
  }
  servantOperationListViewManager = v5->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_7;
  kind = v5->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCAA44(this, *(_QWORD *)&mode);
  v10 = servantOperationListViewManager->m_Items[kind];
  v11 = (System_Action_object__o *)sub_1BCAA2C(
                                     System_Action_ServantOperationListViewItem__TypeInfo,
                                     *(_QWORD *)&mode,
                                     method,
                                     v3);
  System_Action_object____ctor(v11, (Il2CppObject *)v5, Method_ServantOperationManager_OnSelectServant__, 0LL);
  if ( !v10 )
LABEL_7:
    sub_1BCAA3C(this, *(_QWORD *)&mode);
  ServantOperationListViewManager__SetMode(v10, mode, (System_Action_ServantOperationListViewItem__o *)v11, 0LL);
}


void __fastcall ServantOperationManager__SortItem(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCAA44(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager___SellMaterialTdWarning_b__53_0(
        ServantOperationManager_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
    ServantOperationManager__OpenSellConfirmDialog(this, (const MethodInfo *)decide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager___SellSSRareWarning_b__52_1(
        ServantOperationManager_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
    ServantOperationManager__SellMaterialTdWarning(this, (const MethodInfo *)decide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__filterButtonState(
        ServantOperationManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  ((void (__fastcall *)(struct UICommonButton_o *, int32_t, bool, Il2CppMethodPointer))filterButton->klass->vtable._14_SetState.method)(
    filterButton,
    state,
    animation,
    filterButton->klass->vtable._15_OnPress.methodPtr);
}


bool __fastcall ServantOperationManager__get_IsSellEquipedCmdCodeLastServant(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}


int32_t __fastcall ServantOperationManager__get_SelectMax(ServantOperationManager_o *this, const MethodInfo *method)
{
  return this->fields._SelectMax_k__BackingField;
}


int32_t __fastcall ServantOperationManager__get_TotalSum(ServantOperationManager_o *this, const MethodInfo *method)
{
  return this->fields._TotalSum_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__numberAdjustment(
        ServantOperationManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v6; // w21

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_9;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1BCAA44(this, *(_QWORD *)&selectNum);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__decrementNumber((ServantOperationListViewManager_o *)this, selectNum, 0LL);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, *(_QWORD *)&selectNum);
  }
}


void __fastcall ServantOperationManager__setServant(
        ServantOperationManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  int v3; // w9

  if ( flag )
    v3 = 1;
  else
    v3 = -1;
  this->fields._TotalSum_k__BackingField += v3;
}


void __fastcall ServantOperationManager__set_IsSellEquipedCmdCodeLastServant(
        ServantOperationManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = value;
}


void __fastcall ServantOperationManager__set_SelectMax(
        ServantOperationManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectMax_k__BackingField = value;
}


void __fastcall ServantOperationManager__set_TotalSum(
        ServantOperationManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TotalSum_k__BackingField = value;
}


void __fastcall ServantOperationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B125F9 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantOperationManager___c_TypeInfo, v1, v2);
    byte_4B125F9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantOperationManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantOperationManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantOperationManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ServantOperationManager___c___ctor(ServantOperationManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantOperationManager___c___SellCombineWarning_b__51_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  return NpCombineControl__CheckConfirm_45739916(x, 0LL);
}


bool __fastcall ServantOperationManager___c___SellSSRareWarning_b__52_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B125FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, x, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B125FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !x )
    goto LABEL_12;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v16.fields.currentCryptoKey = v14;
  *(_QWORD *)&v16.fields.fakeValue = v13;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  if ( !v12
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v12,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  }
  return ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) && UserServantEntity__getRarity(x, 0LL) == 5;
}


void __fastcall ServantOperationManager___c__DisplayClass44_0___ctor(
        ServantOperationManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager___c__DisplayClass44_0___OnClickDecide_b__0(
        ServantOperationManager___c__DisplayClass44_0_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4B125FB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flag, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__, v8, v9);
    sub_1BCA7E0(&ServantOperationManager___c__DisplayClass44_1_TypeInfo, v10, v11);
    byte_4B125FB = 1;
  }
  v12 = sub_1BCAA2C(ServantOperationManager___c__DisplayClass44_1_TypeInfo, flag, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_BYTE *)(v12 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v12,
          Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v25, 0LL);
}


void __fastcall ServantOperationManager___c__DisplayClass44_1___ctor(
        ServantOperationManager___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantOperationManager___c__DisplayClass44_1___OnClickDecide_b__1(
        ServantOperationManager___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantOperationManager___c__DisplayClass44_1_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct ServantOperationManager___c__DisplayClass44_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *equipedMaterialList; // x19
  Il2CppObject *_4__this; // x20
  ServantCheckEquipDialog_o *monitor; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v13; // x22

  v4 = this;
  if ( (byte_4B125FC & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v5, v6);
    this = (ServantOperationManager___c__DisplayClass44_1_o *)sub_1BCA7E0(
                                                                &Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
                                                                v7,
                                                                v8);
    byte_4B125FC = 1;
  }
  if ( v4->fields.flag )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_12;
    equipedMaterialList = CS___8__locals1->fields.equipedMaterialList;
    if ( !equipedMaterialList )
      goto LABEL_12;
    _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
    if ( !_4__this )
      goto LABEL_12;
    if ( equipedMaterialList->fields._size >= 1 )
    {
      monitor = (ServantCheckEquipDialog_o *)_4__this[7].monitor;
      v13 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                         ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v13,
        _4__this,
        Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0LL);
      if ( monitor )
      {
        ServantCheckEquipDialog__Open_33225252(monitor, equipedMaterialList, v13, 0LL);
        return;
      }
LABEL_12:
      sub_1BCAA3C(this, method);
    }
    ServantOperationManager__SellCombineWarning(CS___8__locals1->fields.__4__this, method);
  }
}


void __fastcall ServantOperationManager___c__DisplayClass51_0___ctor(
        ServantOperationManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager___c__DisplayClass51_0___SellCombineWarning_b__1(
        ServantOperationManager___c__DisplayClass51_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
  {
    if ( !this->fields.__4__this )
      sub_1BCAA3C(this, decide);
    ServantOperationManager__SellSSRareWarning(this->fields.__4__this, this->fields.userSvtEntityList, method);
  }
}