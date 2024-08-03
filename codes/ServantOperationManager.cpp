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
  ServantStatusBattleListViewItem_o *p_onSelect; // x0
  struct System_Action_ServantOperationManager_ActionKind__long____long____o *v6; // x22
  struct System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect; // t1

  onSelect = this->fields.onSelect;
  p_onSelect = (ServantStatusBattleListViewItem_o *)&this->fields.onSelect;
  v6 = onSelect;
  if ( onSelect )
  {
    p_onSelect->klass = 0LL;
    sub_1B6406C(p_onSelect, 0, (int32_t)servants, (int32_t)commandCodes);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_Int64_array *, System_Int64_array *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      (unsigned int)actionKind,
      servants,
      commandCodes,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__ChangeList(
        ServantOperationManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x19
  __int64 v5; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 v7; // x9
  ServantOperationListViewManager_o *v8; // x21
  System_Action_bool__o *v9; // x22
  __int64 v10; // x20
  __int64 v11; // x9
  __int64 v12; // x10
  struct ServantOperationListViewManager_array *v13; // x8
  __int64 v14; // x9

  v4 = this;
  if ( (byte_49F89B4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, *(_QWORD *)&kind);
    this = (ServantOperationManager_o *)sub_1B640C8(&Method_ServantOperationListViewManager_EndClickTabStatus__, v5);
    byte_49F89B4 = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_16;
  v7 = v4->fields.kind;
  if ( (unsigned int)v7 >= servantOperationListViewManager->max_length )
    goto LABEL_23;
  v8 = servantOperationListViewManager->m_Items[v7];
  if ( !v8 )
    goto LABEL_16;
  if ( v8->fields.modeKind )
  {
    v9 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, *(_QWORD *)&kind, method);
    System_Action_bool____ctor(v9, (Il2CppObject *)v8, Method_ServantOperationListViewManager_EndClickTabStatus__, 0LL);
    ServantOperationListViewManager__StatusRequest(v8, v9, 0LL);
    servantOperationListViewManager = v4->fields.servantOperationListViewManager;
    v4->fields.kind = kind;
    if ( !servantOperationListViewManager )
      goto LABEL_16;
  }
  else
  {
    v4->fields.kind = kind;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *(_QWORD *)&servantOperationListViewManager->max_length;
    if ( (int)v10 >= (int)v11 )
      break;
    if ( (unsigned int)v10 >= (unsigned int)v11 )
      goto LABEL_23;
    this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v10];
    if ( this )
    {
      this = (ServantOperationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (_DWORD)v10 == v4->fields.kind, 0LL);
        servantOperationListViewManager = v4->fields.servantOperationListViewManager;
        ++v10;
        if ( servantOperationListViewManager )
          continue;
      }
    }
    goto LABEL_16;
  }
  v12 = v4->fields.kind;
  if ( (unsigned int)v12 >= (unsigned int)v11 )
LABEL_23:
    sub_1B6432C(this, *(_QWORD *)&kind);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v12];
  if ( !this
    || (ServantOperationListViewManager__ChangeSortKindDisp((ServantOperationListViewManager_o *)this, 0LL),
        (v13 = v4->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_16:
    sub_1B64324(this);
  }
  v14 = v4->fields.kind;
  if ( (unsigned int)v14 >= v13->max_length )
    goto LABEL_23;
  this = (ServantOperationManager_o *)v13->m_Items[v14];
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
  ServantOperationManager_o *v4; // x19
  __int64 v5; // x1
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  ServantCheckEquipDialog_ClickDelegate_o *v7; // x21

  v4 = this;
  if ( (byte_49F89B9 & 1) == 0 )
  {
    sub_1B640C8(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, isDecide);
    this = (ServantOperationManager_o *)sub_1B640C8(&Method_ServantOperationManager_EndServantCheckEquip__, v5);
    byte_49F89B9 = 1;
  }
  servantCheckEquipDialog = v4->fields.servantCheckEquipDialog;
  if ( isDecide )
  {
    v7 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1B64314(
                                                      ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                      isDecide,
                                                      method);
    ServantCheckEquipDialog_ClickDelegate___ctor(
      v7,
      (Il2CppObject *)v4,
      Method_ServantOperationManager_EndServantCheckEquip__,
      0LL);
    if ( servantCheckEquipDialog )
    {
      ServantCheckEquipDialog__OpenShopLastCheck(servantCheckEquipDialog, v7, 0LL);
      return;
    }
LABEL_8:
    sub_1B64324(this);
  }
  if ( !servantCheckEquipDialog )
    goto LABEL_8;
  ServantCheckEquipDialog__Close(v4->fields.servantCheckEquipDialog, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__CreateList(
        ServantOperationManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *qpDataLabel; // x21
  int32_t totalQP; // w22
  System_String_o *NumberFormat; // x0
  UILabel_o *mpDataLabel; // x21
  UILabel_o *rpDataLabel; // x21
  int32_t Count; // w21
  BalanceConfig_c *v17; // x0
  int ServantSellSelectMax; // w21
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  struct ServantOperationListViewManager_array *v25; // x8
  struct ServantOperationListViewManager_array *v26; // x8
  struct ServantOperationListViewManager_array *v27; // x8
  struct ServantOperationListViewManager_array *v28; // x8
  struct ServantOperationListViewManager_array *v29; // x8
  const MethodInfo *v30; // x2
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49F89B3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v10);
    byte_49F89B3 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  ServantOperationManager__Init(this, *(const MethodInfo **)&kind);
  qpDataLabel = this->fields.qpDataLabel;
  totalQP = this->fields.totalQP;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
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
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)NumberFormat, 0LL);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  UserServantMaster__getCount((UserServantMaster_o *)NumberFormat, &servantEquipSum[1], servantEquipSum, 0, 0LL);
  v17 = BalanceConfig_TypeInfo;
  ServantSellSelectMax = servantEquipSum[1] + Count + servantEquipSum[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  if ( ServantSellSelectMax >= v17->static_fields->ServantSellSelectMax )
  {
    ServantSellSelectMax = v17->static_fields->ServantSellSelectMax;
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      ServantSellSelectMax = BalanceConfig_TypeInfo->static_fields->ServantSellSelectMax;
    }
  }
  this->fields._SelectMax_k__BackingField = ServantSellSelectMax;
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = this->fields._SelectMax_k__BackingField;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  NumberFormat = System_String__Format_61389768(v20, v21, v22, 0LL);
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
  v25 = this->fields.servantOperationListViewManager;
  if ( !v25 )
    goto LABEL_42;
  if ( !v25->max_length )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v25->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 0, 0, 0LL);
  v26 = this->fields.servantOperationListViewManager;
  if ( !v26 )
    goto LABEL_42;
  if ( v26->max_length <= 1 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v26->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0LL);
  if ( !NumberFormat )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
  v27 = this->fields.servantOperationListViewManager;
  if ( !v27 )
    goto LABEL_42;
  if ( v27->max_length <= 1 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v27->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 1, 0, 0LL);
  v28 = this->fields.servantOperationListViewManager;
  if ( !v28 )
    goto LABEL_42;
  if ( v28->max_length <= 2 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v28->m_Items[2];
  if ( !NumberFormat
    || (NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)NumberFormat,
                                            0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL),
        (v29 = this->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_42:
    sub_1B64324(NumberFormat);
  }
  if ( v29->max_length <= 2 )
LABEL_43:
    sub_1B6432C(NumberFormat, v23);
  NumberFormat = (System_String_o *)v29->m_Items[2];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 2, 0, 0LL);
  ServantOperationManager__ChangeList(this, kind, v30);
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
        sub_1B6432C(this, method);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v4];
      if ( !this )
        break;
      ServantOperationListViewManager__DestroyList((ServantOperationListViewManager_o *)this, 0LL);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B64324(this);
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
    sub_1B6432C(this, isDecide);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1B64324(this);
  ServantOperationListViewManager__EndSelectFilterKind((ServantOperationListViewManager_o *)this, isDecide, 0LL);
}


void __fastcall ServantOperationManager__EndServantCheckEquip(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x0
  const MethodInfo *v6; // x1

  servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
  if ( !servantCheckEquipDialog )
    sub_1B64324(0LL);
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
    sub_1B6432C(this, *(_QWORD *)&svtId);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1B64324(this);
  return ServantOperationListViewManager__GetAmountSortValue((ServantOperationListViewManager_o *)this, svtId, 0LL);
}


System_Collections_Generic_List_int__o *__fastcall ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *selectEquipedCommandCodeServantList,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int32_t size; // w23
  System_Collections_Generic_List_int__o *v21; // x20
  UserServantEntity_array *AllList; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_Dictionary_int__int__o *v28; // x22
  int32_t i; // w24
  ServantOperationManager_o *v30; // x25
  int32_t servantCheckWarningDialog; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  bool v34; // zf
  __int64 v35; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x24
  unsigned int v38; // w28
  UserServantEntity_o *v39; // x25
  __int64 v40; // x26
  __int64 v41; // x27
  __int64 v42; // x25
  __int64 v43; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  int32_t v47; // w23
  int32_t v48; // w24
  int32_t v49; // w25
  int v50; // w29
  struct System_Int32_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_49F89B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    this = (ServantOperationManager_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_49F89B8 = 1;
  }
  if ( !selectEquipedCommandCodeServantList )
    goto LABEL_62;
  size = selectEquipedCommandCodeServantList->fields._size;
  v21 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    selectEquipedCommandCodeServantList,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v25 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v23, v24);
    System_Collections_Generic_List_int____ctor(
      v25,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    v28 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v26,
                                                                 v27);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v28,
      (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( selectEquipedCommandCodeServantList->fields._size >= 1 )
    {
      for ( i = 0; i < selectEquipedCommandCodeServantList->fields._size; ++i )
      {
        this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList,
                                              i,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
        if ( !this || !v28 )
          goto LABEL_62;
        v30 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v28,
                (int32_t)this->fields.servantCheckWarningDialog,
                (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          servantCheckWarningDialog = (int32_t)v30->fields.servantCheckWarningDialog;
          if ( selectEquipedCommandCodeServantList->fields._size >= 1 )
          {
            v32 = 0;
            v33 = 0;
            while ( 1 )
            {
              this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList,
                                                    v33,
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
              if ( !this )
                break;
              ++v33;
              v34 = servantCheckWarningDialog == LODWORD(this->fields.servantCheckWarningDialog);
              servantCheckWarningDialog = (int32_t)v30->fields.servantCheckWarningDialog;
              if ( v34 )
                ++v32;
              if ( v33 >= selectEquipedCommandCodeServantList->fields._size )
                goto LABEL_20;
            }
LABEL_62:
            sub_1B64324(this);
          }
          v32 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v28,
            servantCheckWarningDialog,
            v32,
            (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_62;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
      v38 = 0;
      do
      {
        if ( v38 >= max_length )
          sub_1B6432C(this, v35);
        v39 = AllList->m_Items[v38];
        if ( !v39 )
          goto LABEL_62;
        v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
        v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v55.fields.currentCryptoKey = v41;
        *(_QWORD *)&v55.fields.fakeValue = v40;
        this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                              v55,
                                              0LL);
        if ( !v37 )
          goto LABEL_62;
        this = (ServantOperationManager_o *)DataMasterBase_object__object__int___GetEntity(
                                              v37,
                                              (int32_t)this,
                                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_62;
        this = (ServantOperationManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ServantOperationManager_o *)UserServantEntity__IsEventJoin(v39, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v43 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
            v42 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v56.fields.currentCryptoKey = v43;
            *(_QWORD *)&v56.fields.fakeValue = v42;
            this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                  v56,
                                                  0LL);
            if ( !v25 )
              goto LABEL_62;
            items = v25->fields._items;
            v45 = Method_System_Collections_Generic_List_int__Add__;
            ++v25->fields._version;
            if ( !items )
              goto LABEL_62;
            v46 = v25->fields._size;
            v35 = (unsigned int)this;
            if ( (unsigned int)v46 >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v25,
                (int32_t)this,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v25->fields._size = v46 + 1;
              items->m_Items[v46 + 1] = (int)this;
            }
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v38 < max_length );
    }
    if ( selectEquipedCommandCodeServantList->fields._size >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList,
                                              v47,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
        if ( !this || !v25 )
          goto LABEL_62;
        v48 = (int32_t)this->fields.servantCheckWarningDialog;
        if ( v25->fields._size < 1 )
        {
          v50 = 0;
          if ( !v28 )
            goto LABEL_62;
        }
        else
        {
          v49 = 0;
          v50 = 0;
          do
          {
            this = (ServantOperationManager_o *)System_Collections_Generic_List_int___get_Item(
                                                  v25,
                                                  v49++,
                                                  (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v48 == (_DWORD)this )
              ++v50;
          }
          while ( v49 < v25->fields._size );
          if ( !v28 )
            goto LABEL_62;
        }
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v28,
                                              v48,
                                              (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v50 )
        {
          if ( !v21 )
            goto LABEL_62;
          v51 = v21->fields._items;
          v52 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !v51 )
            goto LABEL_62;
          v53 = v21->fields._size;
          if ( (unsigned int)v53 >= v51->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              v48,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = v53 + 1;
            v51->m_Items[v53 + 1] = v48;
          }
        }
        if ( ++v47 >= selectEquipedCommandCodeServantList->fields._size )
          return v21;
      }
    }
  }
  return v21;
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
    sub_1B6432C(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[0];
  if ( !this )
LABEL_5:
    sub_1B64324(this);
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
    sub_1B6432C(this, id);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[2];
  if ( !this )
LABEL_5:
    sub_1B64324(this);
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
        sub_1B6432C(this, id);
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
    sub_1B64324(this);
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
    sub_1B64324(allReleaseButton);
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
    sub_1B6432C(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1B64324(this);
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
    sub_1B6432C(this, selectedId);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1B64324(this);
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
        sub_1B6432C(this, userSvtId);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, userSvtId, 0LL);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1B64324(this);
  }
}


void __fastcall ServantOperationManager__OnClickDecide(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x20
  ServantOperationListViewManager_o *SelectedServantIdList; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_long__o *v39; // x22
  struct System_Collections_Generic_List_long__o **p_selectUserServantIdList; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_long__o *v45; // x23
  struct System_Collections_Generic_List_long__o **p_selectUserCommandCodeIdList; // x22
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  System_Collections_Generic_List_long__o *v51; // x23
  struct ServantOperationListViewManager_array *v52; // x8
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x23
  struct ServantOperationListViewManager_array *v54; // x8
  System_Collections_Generic_List_long__o *selectUserCommandCodeIdList; // x23
  struct ServantOperationListViewManager_array *v56; // x8
  struct ServantOperationListViewManager_array *v57; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *v58; // x24
  System_Collections_Generic_List_ServantOperationListViewItem__o *EquipMaterialList; // x0
  System_Collections_Generic_List_ServantOperationListViewItem__o **v60; // x23
  int32_t v61; // w2
  int32_t v62; // w3
  ServantOperationManager_o *v63; // x0
  const MethodInfo *v64; // x2
  int m_CancellationTokenSource; // w8
  int v66; // w26
  Il2CppObject *current; // x24
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  _QWORD *v71; // x0
  System_Reflection_MethodBase_o *v72; // x0
  Il2CppObject *v73; // x21
  System_String_o *v74; // x19
  System_Collections_Generic_List_object__o *ExchangeSvtCombineExpCampaign; // x0
  Il2CppObject *Item; // x0
  System_String_o *v77; // x0
  System_String_o *v78; // x21
  Il2CppObject *v79; // x22
  System_String_o *v80; // x23
  System_String_o *v81; // x24
  __int64 v82; // x1
  __int64 v83; // x2
  CommonConfirmDialog_ClickDelegate_o *v84; // x25
  _QWORD *v85; // x0
  System_Reflection_MethodBase_o *v86; // x0
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  System_Collections_Generic_List_ServantOperationListViewItem__o *v88; // x21
  __int64 v89; // x1
  __int64 v90; // x2
  ServantCheckEquipDialog_ClickDelegate_o *v91; // x22
  _QWORD *v92; // x0
  int32_t v93; // w20
  System_Reflection_MethodBase_o *v94; // x0
  const MethodInfo *v95; // x1
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+40h] [xbp-A0h] BYREF
  int v97; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_49F89B7 & 1) == 0 )
  {
    sub_1B640C8(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__AddRange__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v20);
    sub_1B640C8(&LocalizationManager_TypeInfo, v21);
    sub_1B640C8(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__, v22);
    sub_1B640C8(&Method_ServantOperationManager_OnClickDecide__, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B640C8(&Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__, v26);
    sub_1B640C8(&ServantOperationManager___c__DisplayClass44_0_TypeInfo, v27);
    sub_1B640C8(&StringLiteral_5723/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, v28);
    sub_1B640C8(&StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, v29);
    sub_1B640C8(&StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, v30);
    sub_1B640C8(&StringLiteral_5721/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, v31);
    sub_1B640C8(&StringLiteral_1/*""*/, v32);
    byte_49F89B7 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  v97 = 0;
  v33 = sub_1B64314(ServantOperationManager___c__DisplayClass44_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_68;
  *(_QWORD *)(v33 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 24), (int32_t)this, v35, v36);
  if ( this->fields._TotalSum_k__BackingField >= 1 )
  {
    v39 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v37,
                                                       v38);
    System_Collections_Generic_List_long____ctor(
      v39,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserServantIdList = v39;
    p_selectUserServantIdList = &this->fields.selectUserServantIdList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectUserServantIdList, (int32_t)v39, v41, v42);
    v45 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v43,
                                                       v44);
    System_Collections_Generic_List_long____ctor(
      v45,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserCommandCodeIdList = v45;
    p_selectUserCommandCodeIdList = &this->fields.selectUserCommandCodeIdList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectUserCommandCodeIdList, (int32_t)v45, v47, v48);
    servantOperationListViewManager = this->fields.servantOperationListViewManager;
    if ( !servantOperationListViewManager )
      goto LABEL_68;
    if ( !servantOperationListViewManager->max_length )
      goto LABEL_69;
    SelectedServantIdList = servantOperationListViewManager->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    v51 = *p_selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   0LL);
    if ( !v51 )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      v51,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_3495280 *)Method_System_Collections_Generic_List_long__AddRange__);
    v52 = this->fields.servantOperationListViewManager;
    if ( !v52 )
      goto LABEL_68;
    if ( v52->max_length <= 1 )
      goto LABEL_69;
    SelectedServantIdList = v52->m_Items[1];
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
      (const MethodInfo_3495280 *)Method_System_Collections_Generic_List_long__AddRange__);
    v54 = this->fields.servantOperationListViewManager;
    if ( !v54 )
      goto LABEL_68;
    if ( v54->max_length <= 2 )
      goto LABEL_69;
    SelectedServantIdList = v54->m_Items[2];
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
      (const MethodInfo_3495280 *)Method_System_Collections_Generic_List_long__AddRange__);
    v56 = this->fields.servantOperationListViewManager;
    if ( !v56 )
      goto LABEL_68;
    if ( !v56->max_length )
      goto LABEL_69;
    SelectedServantIdList = v56->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
                                                                   SelectedServantIdList,
                                                                   0LL);
    v57 = this->fields.servantOperationListViewManager;
    if ( !v57 )
      goto LABEL_68;
    if ( v57->max_length <= 1 )
LABEL_69:
      sub_1B6432C(SelectedServantIdList, v49);
    v58 = (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedServantIdList;
    SelectedServantIdList = v57->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    EquipMaterialList = ServantOperationListViewManager__GetEquipMaterialList(SelectedServantIdList, 0LL);
    *(_QWORD *)(v33 + 16) = EquipMaterialList;
    v60 = (System_Collections_Generic_List_ServantOperationListViewItem__o **)(v33 + 16);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)EquipMaterialList, v61, v62);
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                                                   v63,
                                                                   v58,
                                                                   v64);
    if ( !SelectedServantIdList )
      goto LABEL_68;
    m_CancellationTokenSource = (int)SelectedServantIdList->fields.m_CancellationTokenSource;
    SelectedServantIdList = (ServantOperationListViewManager_o *)this->fields.selectUserServantIdList;
    this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = m_CancellationTokenSource > 0;
    if ( !SelectedServantIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___GetEnumerator(
      &v96,
      (System_Collections_Generic_List_long__o *)SelectedServantIdList,
      (const MethodInfo_3495BE8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v66 = 0;
    v98 = v96;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v98,
              (const MethodInfo_32272BC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v98.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1B64324(0LL);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_1B64324(0LL);
      v66 |= UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0LL);
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v98,
      (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    if ( (v66 & 1) != 0 )
    {
      v71 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v71 = (_QWORD *)sub_1B640E0(Method_ServantOperationManager_OnClickDecide__);
      v72 = (System_Reflection_MethodBase_o *)sub_1B640AC(v71, v71[4]);
      OverwriteAssetSoundName__PlaySystemSe(v72, 0, 0LL);
      v73 = (Il2CppObject *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_5721/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SelectedServantIdList = (ServantOperationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( Item )
            {
              v97 = SLODWORD(Item[3].klass) / 1000;
              v73 = (Il2CppObject *)System_Int32__ToString((int32_t)&v97, 0LL);
            }
          }
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v77 = LocalizationManager__Get((System_String_o *)StringLiteral_5723/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, 0LL);
        v78 = System_String__Format_61389768(v77, v73, v73, 0LL);
        v79 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v80 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, 0LL);
        v84 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v82, v83);
        CommonConfirmDialog_ClickDelegate___ctor(
          v84,
          (Il2CppObject *)v33,
          Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__,
          0LL);
        if ( v79 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v79,
            v74,
            v78,
            v80,
            v81,
            v84,
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
            0LL);
          return;
        }
      }
LABEL_68:
      sub_1B64324(SelectedServantIdList);
    }
    if ( !*v60 )
      goto LABEL_68;
    if ( (*v60)->fields._size < 1 )
    {
      if ( !*p_selectUserServantIdList )
        goto LABEL_68;
      if ( (*p_selectUserServantIdList)->fields._size > 0 )
        goto LABEL_57;
      if ( !*p_selectUserCommandCodeIdList )
        goto LABEL_68;
      if ( (*p_selectUserCommandCodeIdList)->fields._size < 1 )
      {
        v92 = Method_ServantOperationManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
          v92 = (_QWORD *)sub_1B640E0(Method_ServantOperationManager_OnClickDecide__);
        v93 = 2;
      }
      else
      {
LABEL_57:
        v92 = Method_ServantOperationManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
          v92 = (_QWORD *)sub_1B640E0(Method_ServantOperationManager_OnClickDecide__);
        v93 = 0;
      }
      v94 = (System_Reflection_MethodBase_o *)sub_1B640AC(v92, v92[4]);
      OverwriteAssetSoundName__PlaySystemSe(v94, v93, 0LL);
      ServantOperationManager__SellCombineWarning(this, v95);
    }
    else
    {
      v85 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v85 = (_QWORD *)sub_1B640E0(Method_ServantOperationManager_OnClickDecide__);
      v86 = (System_Reflection_MethodBase_o *)sub_1B640AC(v85, v85[4]);
      OverwriteAssetSoundName__PlaySystemSe(v86, 0, 0LL);
      servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
      v88 = *v60;
      v91 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1B64314(
                                                         ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                         v89,
                                                         v90);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v91,
        (Il2CppObject *)this,
        Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0LL);
      if ( !servantCheckEquipDialog )
        goto LABEL_68;
      ServantCheckEquipDialog__Open_32301964(servantCheckEquipDialog, v88, v91, 0LL);
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
    sub_1B6432C(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1B64324(this);
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
    sub_1B6432C(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1B64324(this);
  ServantOperationListViewManager__OnClickFilterKind((ServantOperationListViewManager_o *)this, 0LL);
}


void __fastcall ServantOperationManager__OnClickReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t TotalSum_k__BackingField; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49F89BE & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantOperationManager_OnClickReleaseAll__, method);
    byte_49F89BE = 1;
  }
  v3 = Method_ServantOperationManager_OnClickReleaseAll__;
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  if ( (*((_BYTE *)Method_ServantOperationManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_ServantOperationManager_OnClickReleaseAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  if ( TotalSum_k__BackingField <= 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    ServantOperationManager__ReleaseAll(this, v6);
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
    sub_1B6432C(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1B64324(this);
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
    sub_1B6432C(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1B64324(this);
  ServantOperationListViewManager__OnClickSortKind((ServantOperationListViewManager_o *)this, 0LL);
}


void __fastcall ServantOperationManager__OnSelectServant(
        ServantOperationManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_long__o *v11; // x20
  int64_t UserCommandCodeId; // x0
  __int64 v13; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v16; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  struct System_Int64_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  System_Int64_array *v23; // x21
  System_Int64_array *v24; // x3
  const MethodInfo *v25; // x4

  if ( (byte_49F89C0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, selectItem);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_49F89C0 = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    selectItem,
                                                    method);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v11 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v9, v10);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_22;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1B6432C(UserCommandCodeId, v13);
  v16 = servantOperationListViewManager->m_Items[kind];
  if ( !v16 || !selectItem )
    goto LABEL_22;
  if ( v16->fields.kind == 2 )
  {
    UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(selectItem, 0LL);
    if ( v11 )
    {
      items = v11->fields._items;
      v18 = Method_System_Collections_Generic_List_long__Add__;
      ++v11->fields._version;
      if ( items )
      {
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v11,
            UserCommandCodeId,
            *(const MethodInfo_3495074 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size] = UserCommandCodeId;
        }
        if ( v8 )
        {
          UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                         v8,
                                         (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_1B64324(UserCommandCodeId);
  }
  UserCommandCodeId = ServantOperationListViewItem__get_UserSvtId(selectItem, 0LL);
  if ( !v8 )
    goto LABEL_22;
  v20 = v8->fields._items;
  v21 = Method_System_Collections_Generic_List_long__Add__;
  ++v8->fields._version;
  if ( !v20 )
    goto LABEL_22;
  v22 = v8->fields._size;
  if ( (unsigned int)v22 >= v20->max_length )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v8,
      UserCommandCodeId,
      *(const MethodInfo_3495074 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v8->fields._size = v22 + 1;
    v20->m_Items[v22] = UserCommandCodeId;
  }
  UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                 v8,
                                 (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v11 )
    goto LABEL_22;
LABEL_21:
  v23 = (System_Int64_array *)UserCommandCodeId;
  v24 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 2, v23, v24, v25);
}


void __fastcall ServantOperationManager__OpenSellConfirmDialog(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x0
  System_Int64_array *v4; // x20
  System_Int64_array *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_49F89BD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, method);
    byte_49F89BD = 1;
  }
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList
    || (selectUserServantIdList = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                               selectUserServantIdList,
                                                                               (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.selectUserCommandCodeIdList) )
  {
    sub_1B64324(selectUserServantIdList);
  }
  v4 = (System_Int64_array *)selectUserServantIdList;
  v5 = System_Collections_Generic_List_long___ToArray(
         this->fields.selectUserCommandCodeIdList,
         (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 1, v4, v5, v6);
}


void __fastcall ServantOperationManager__RefrashListDisp(ServantOperationManager_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x21
  int max_length; // w8
  int v5; // w22
  int32_t v6; // w20
  int v7; // w8
  UILabel_o *qpDataLabel; // x21
  UILabel_o *mpDataLabel; // x20
  UILabel_o *rpDataLabel; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t rarePri; // [xsp+Ch] [xbp-34h] BYREF
  int32_t mana[2]; // [xsp+18h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_49F89B5 & 1) == 0 )
  {
    this = (ServantOperationManager_o *)sub_1B640C8(&LocalizationManager_TypeInfo, method);
    byte_49F89B5 = 1;
  }
  *(_QWORD *)mana = 0LL;
  rarePri = 0;
  servantOperationListViewManager = v2->fields.servantOperationListViewManager;
  *(_QWORD *)&v2->fields.totalQP = 0LL;
  v2->fields.totalRarePri = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_25;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1B6432C(this, method);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v5];
      if ( !this )
        goto LABEL_25;
      ServantOperationListViewManager__SumItems(
        (ServantOperationListViewManager_o *)this,
        &mana[1],
        mana,
        &rarePri,
        0LL);
      ++v5;
      v6 = mana[1] + v2->fields.totalQP;
      v7 = mana[0] + v2->fields.totalMana;
      v2->fields.totalQP = v6;
      v2->fields.totalMana = v7;
      v2->fields.totalRarePri += rarePri;
      max_length = servantOperationListViewManager->max_length;
      if ( v5 >= max_length )
        goto LABEL_11;
    }
  }
  v6 = 0;
LABEL_11:
  qpDataLabel = v2->fields.qpDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v6, 0LL);
  if ( !qpDataLabel )
    goto LABEL_25;
  UILabel__set_text(qpDataLabel, (System_String_o *)this, 0LL);
  mpDataLabel = v2->fields.mpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v2->fields.totalMana, 0LL);
  if ( !mpDataLabel )
    goto LABEL_25;
  UILabel__set_text(mpDataLabel, (System_String_o *)this, 0LL);
  rpDataLabel = v2->fields.rpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v2->fields.totalRarePri, 0LL);
  if ( !rpDataLabel )
    goto LABEL_25;
  UILabel__set_text(rpDataLabel, (System_String_o *)this, 0LL);
  this = (ServantOperationManager_o *)v2->fields.allReleaseButton;
  if ( !this )
    goto LABEL_25;
  v11 = v2->fields._TotalSum_k__BackingField <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    v11,
    1LL,
    this->klass[1]._1.interfaceOffsets);
  this = (ServantOperationManager_o *)v2->fields.decideButton;
  if ( !this )
LABEL_25:
    sub_1B64324(this);
  if ( v2->fields._TotalSum_k__BackingField <= 0 )
    v12 = 3LL;
  else
    v12 = 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    v12,
    1LL,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall ServantOperationManager__ReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v7; // w21
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v9; // x21
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x0
  const MethodInfo *v12; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_49F89BF & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    this = (ServantOperationManager_o *)sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v4);
    byte_49F89BF = 1;
  }
  servantOperationListViewManager = v2->fields.servantOperationListViewManager;
  v2->fields._TotalSum_k__BackingField = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_14;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B6432C(this, method);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v7];
      if ( !this )
        break;
      ServantOperationListViewManager__ReleaseAll((ServantOperationListViewManager_o *)this, 0LL);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_9;
    }
LABEL_14:
    sub_1B64324(this);
  }
LABEL_9:
  selectDoneLabel = v2->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = v2->fields._TotalSum_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = v2->fields._SelectMax_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  this = (ServantOperationManager_o *)System_String__Format_61389768(v9, v10, v11, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_14;
  UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
  ServantOperationManager__RefrashListDisp(v2, v12);
}


void __fastcall ServantOperationManager__SellCombineWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x20
  void *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v29; // x22
  System_Collections_Generic_List_UserServantEntity__o **v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_List_object__o *v39; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_List_object__o *v46; // x22
  System_Predicate_object__o *v47; // x23
  Il2CppObject *v48; // x24
  struct ServantOperationManager___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x19
  System_Collections_Generic_List_UserServantEntity__o *v55; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v56; // x22
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49F89BA & 1) == 0 )
  {
    sub_1B640C8(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75673200, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v13);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_1B640C8(&System_Predicate_UserServantEntity__TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, v17);
    sub_1B640C8(&Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__, v18);
    sub_1B640C8(&ServantOperationManager___c__DisplayClass51_0_TypeInfo, v19);
    sub_1B640C8(&ServantOperationManager___c_TypeInfo, v20);
    byte_49F89BA = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v21 = sub_1B64314(ServantOperationManager___c__DisplayClass51_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_31;
  *(_QWORD *)(v21 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)this, v23, v24);
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_31;
  size = selectUserServantIdList->fields._size;
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor_55234320(
    v29,
    size,
    (const MethodInfo_34ACF10 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673200);
  *(_QWORD *)(v21 + 24) = v29;
  v30 = (System_Collections_Generic_List_UserServantEntity__o **)(v21 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)v29, v31, v32);
  v22 = this->fields.selectUserServantIdList;
  if ( !v22 )
    goto LABEL_31;
  System_Collections_Generic_List_long___GetEnumerator(
    &v57,
    (System_Collections_Generic_List_long__o *)v22,
    (const MethodInfo_3495BE8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v58 = v57;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v58,
            (const MethodInfo_32272BC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v58.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1B64324(0LL);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v39 = (System_Collections_Generic_List_object__o *)*v30;
    if ( !*v30 )
      sub_1B64324(0LL);
    items = v39->fields._items;
    v41 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v39->fields._version;
    if ( !items )
      sub_1B64324(v39);
    v42 = v39->fields._size;
    if ( (unsigned int)v42 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v39,
        Entity,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &items->obj.klass + v42;
      v39->fields._size = v42 + 1;
      v43[4] = (Il2CppClass *)Entity;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)Entity, v37, v38);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v58,
    (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v22 = ServantOperationManager___c_TypeInfo;
  v46 = (System_Collections_Generic_List_object__o *)*v30;
  if ( !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v22 = ServantOperationManager___c_TypeInfo;
  }
  v47 = *(System_Predicate_object__o **)(*((_QWORD *)v22 + 23) + 8LL);
  if ( !v47 )
  {
    if ( !*((_DWORD *)v22 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = ServantOperationManager___c_TypeInfo;
    }
    v48 = (Il2CppObject *)**((_QWORD **)v22 + 23);
    v47 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_UserServantEntity__TypeInfo, v44, v45);
    System_Predicate_object____ctor(v47, v48, Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, 0LL);
    static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Predicate_UserServantEntity__o *)v47;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0, (int32_t)v47, v50, v51);
  }
  if ( !v46 )
    goto LABEL_31;
  if ( System_Collections_Generic_List_object___Find(
         v46,
         (System_Predicate_T__o *)v47,
         (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v55 = *(System_Collections_Generic_List_UserServantEntity__o **)(v21 + 24);
    v56 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1B64314(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         v52,
                                                         v53);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v56,
      (Il2CppObject *)v21,
      Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellCombineWarning(servantCheckWarningDialog, v55, v56, 0LL);
      return;
    }
LABEL_31:
    sub_1B64324(v22);
  }
  ServantOperationManager__SellSSRareWarning(this, *v30, v53);
}


void __fastcall ServantOperationManager__SellMaterialTdWarning(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantOperationManager_o *v3; // x22
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v26; // x20
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *v31; // x21
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v36; // x0
  Il2CppObject *v37; // x22
  Il2CppObject *v38; // x0
  Il2CppObject *v39; // x23
  int64_t UserId; // x0
  int64_t v41; // x24
  __int64 v42; // x0
  UserServantCollectionEntity_o *v43; // x0
  UserServantCollectionEntity_o *v44; // x22
  Il2CppObject *v45; // x0
  Il2CppObject *v46; // x0
  Il2CppObject *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  const MethodInfo *v54; // x1
  __int64 v55; // x2
  ServantCheckWarningDialog_o *v56; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v57; // x22
  Il2CppObject *v58; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+10h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v3 = this;
  if ( (byte_49F89BC & 1) == 0 )
  {
    sub_1B640C8(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75673200, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v18);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19);
    sub_1B640C8(&NetworkManager_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B640C8(&Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__, v22);
    this = (ServantOperationManager_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_49F89BC = 1;
  }
  memset(&v61, 0, sizeof(v61));
  tdInfo = 0LL;
  selectUserServantIdList = v3->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_50;
  size = selectUserServantIdList->fields._size;
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor_55234320(
    v26,
    size,
    (const MethodInfo_34ACF10 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673200);
  this = (ServantOperationManager_o *)v3->fields.selectUserServantIdList;
  v58 = (Il2CppObject *)v3;
  if ( !this )
    goto LABEL_50;
  System_Collections_Generic_List_long___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_3495BE8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v61 = v59;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v61,
            (const MethodInfo_32272BC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v61.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1B64324(0LL);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v31 = Entity;
    if ( !Entity )
      sub_1B64324(0LL);
    if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)Entity, 0LL) )
    {
      v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v32 )
        sub_1B64324(0LL);
      v33 = DataManager__GetMasterData_object_(
              (DataManager_o *)v32,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      klass = v31[5].klass;
      monitor = v31[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v62.fields.currentCryptoKey = klass;
      *(_QWORD *)&v62.fields.fakeValue = monitor;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v62, 0LL);
      if ( !v33 )
        sub_1B64324(v36);
      v37 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
              v36,
              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v38 )
        sub_1B64324(0LL);
      v39 = DataManager__GetMasterData_object_(
              (DataManager_o *)v38,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v37 )
        sub_1B64324(UserId);
      v41 = UserId;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v37[2],
              0LL);
      if ( !v39 )
        sub_1B64324(v42);
      v43 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v39, v41, v42, 0LL);
      v44 = v43;
      if ( v43 && UserServantCollectionEntity__IsGet(v43, 0LL) )
      {
        UserServantCollectionEntity__getTreasureDeviceInfo(v44, &tdInfo, -1, -1, 0LL);
        v45 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v45 )
          sub_1B64324(0LL);
        v46 = DataManager__GetMasterData_object_(
                (DataManager_o *)v45,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !tdInfo )
          sub_1B64324(v46);
        if ( !v46 )
          sub_1B64324(0LL);
        v47 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v46,
                tdInfo->fields.id,
                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !v47 )
          sub_1B64324(0LL);
        if ( v44->fields.treasureDeviceLv1 != LODWORD(v47[3].klass) )
        {
          if ( !v26 )
            sub_1B64324(v47);
          items = v26->fields._items;
          v51 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            sub_1B64324(v47);
          v52 = v26->fields._size;
          if ( (unsigned int)v52 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              v31,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &items->obj.klass + v52;
            v26->fields._size = v52 + 1;
            v53[4] = (Il2CppClass *)v31;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v31, v48, v49);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v61,
    (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( !v26 )
    goto LABEL_50;
  if ( v26->fields._size >= 1 )
  {
    v56 = (ServantCheckWarningDialog_o *)v58[8].klass;
    v57 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1B64314(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         v54,
                                                         v55);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v57,
      v58,
      Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__,
      0LL);
    if ( v56 )
    {
      ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        v56,
        (System_Collections_Generic_List_UserServantEntity__o *)v26,
        v57,
        0LL);
      return;
    }
LABEL_50:
    sub_1B64324(this);
  }
  ServantOperationManager__OpenSellConfirmDialog((ServantOperationManager_o *)v58, v54);
}


void __fastcall ServantOperationManager__SellSSRareWarning(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantOperationManager___c_c *v10; // x0
  System_Predicate_object__o *_9__52_0; // x21
  Il2CppObject *v12; // x22
  struct ServantOperationManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v19; // x22

  if ( (byte_49F89BB & 1) == 0 )
  {
    sub_1B640C8(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, userSvtEntityList);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v5);
    sub_1B640C8(&System_Predicate_UserServantEntity__TypeInfo, v6);
    sub_1B640C8(&Method_ServantOperationManager__SellSSRareWarning_b__52_1__, v7);
    sub_1B640C8(&Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, v8);
    sub_1B640C8(&ServantOperationManager___c_TypeInfo, v9);
    byte_49F89BB = 1;
  }
  v10 = ServantOperationManager___c_TypeInfo;
  if ( !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v10 = ServantOperationManager___c_TypeInfo;
  }
  _9__52_0 = (System_Predicate_object__o *)v10->static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ServantOperationManager___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__52_0 = (System_Predicate_object__o *)sub_1B64314(
                                               System_Predicate_UserServantEntity__TypeInfo,
                                               userSvtEntityList,
                                               method);
    System_Predicate_object____ctor(_9__52_0, v12, Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, 0LL);
    static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    static_fields->__9__52_0 = (struct System_Predicate_UserServantEntity__o *)_9__52_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__52_0, (int32_t)_9__52_0, v14, v15);
  }
  if ( !userSvtEntityList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)userSvtEntityList,
         (System_Predicate_T__o *)_9__52_0,
         (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v19 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1B64314(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         v16,
                                                         v17);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v19,
      (Il2CppObject *)this,
      Method_ServantOperationManager__SellSSRareWarning_b__52_1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellSSRareWarning(servantCheckWarningDialog, userSvtEntityList, v19, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(v10);
  }
  ServantOperationManager__SellMaterialTdWarning(this, v16);
}


void __fastcall ServantOperationManager__SetFilter2Text(
        ServantOperationManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UILabel_o *filter2Label; // x0

  filter2Label = this->fields.filter2Label;
  if ( !filter2Label )
    sub_1B64324(0LL);
  UILabel__set_text(filter2Label, text, 0LL);
}


void __fastcall ServantOperationManager__SetMode(
        ServantOperationManager_o *this,
        int32_t mode,
        System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onSelect = onSelect;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.onSelect,
    (int32_t)onSelect,
    (int32_t)onSelect,
    (int32_t)method);
  ServantOperationManager__SetMode_32497636(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__SetMode_32497636(
        ServantOperationManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x20
  __int64 v5; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v8; // x21
  System_Action_object__o *v9; // x22

  v4 = this;
  if ( (byte_49F89B6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ServantOperationListViewItem__TypeInfo, *(_QWORD *)&mode);
    this = (ServantOperationManager_o *)sub_1B640C8(&Method_ServantOperationManager_OnSelectServant__, v5);
    byte_49F89B6 = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_7;
  kind = v4->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1B6432C(this, *(_QWORD *)&mode);
  v8 = servantOperationListViewManager->m_Items[kind];
  v9 = (System_Action_object__o *)sub_1B64314(
                                    System_Action_ServantOperationListViewItem__TypeInfo,
                                    *(_QWORD *)&mode,
                                    method);
  System_Action_object____ctor(v9, (Il2CppObject *)v4, Method_ServantOperationManager_OnSelectServant__, 0LL);
  if ( !v8 )
LABEL_7:
    sub_1B64324(this);
  ServantOperationListViewManager__SetMode(v8, mode, (System_Action_ServantOperationListViewItem__o *)v9, 0LL);
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
    sub_1B6432C(this, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1B64324(this);
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


void __fastcall ServantOperationManager__filterButtonState(
        ServantOperationManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_1B64324(0LL);
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
        sub_1B6432C(this, *(_QWORD *)&selectNum);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__decrementNumber((ServantOperationListViewManager_o *)this, selectNum, 0LL);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1B64324(this);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F89C1 & 1) == 0 )
  {
    sub_1B640C8(&ServantOperationManager___c_TypeInfo, v1);
    byte_49F89C1 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantOperationManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantOperationManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantOperationManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  return NpCombineControl__CheckConfirm_44556320(x, 0LL);
}


bool __fastcall ServantOperationManager___c___SellSSRareWarning_b__52_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49F89C2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, x);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49F89C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !x )
    goto LABEL_12;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_12:
    sub_1B64324(Instance);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_49F89C3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flag);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__, v6);
    sub_1B640C8(&ServantOperationManager___c__DisplayClass44_1_TypeInfo, v7);
    byte_49F89C3 = 1;
  }
  v8 = sub_1B64314(ServantOperationManager___c__DisplayClass44_1_TypeInfo, flag, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v10, v11),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v8,
          Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v9);
  }
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v15, 0LL);
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
  ServantOperationManager___c__DisplayClass44_1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct ServantOperationManager___c__DisplayClass44_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *equipedMaterialList; // x19
  Il2CppObject *_4__this; // x20
  ServantCheckEquipDialog_o *monitor; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v10; // x22

  v3 = this;
  if ( (byte_49F89C4 & 1) == 0 )
  {
    sub_1B640C8(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v4);
    this = (ServantOperationManager___c__DisplayClass44_1_o *)sub_1B640C8(
                                                                &Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
                                                                v5);
    byte_49F89C4 = 1;
  }
  if ( v3->fields.flag )
  {
    CS___8__locals1 = v3->fields.CS___8__locals1;
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
      v10 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1B64314(
                                                         ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                         method,
                                                         v2);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v10,
        _4__this,
        Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0LL);
      if ( monitor )
      {
        ServantCheckEquipDialog__Open_32301964(monitor, equipedMaterialList, v10, 0LL);
        return;
      }
LABEL_12:
      sub_1B64324(this);
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


void __fastcall ServantOperationManager___c__DisplayClass51_0___SellCombineWarning_b__1(
        ServantOperationManager___c__DisplayClass51_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
  {
    if ( !this->fields.__4__this )
      sub_1B64324(this);
    ServantOperationManager__SellSSRareWarning(this->fields.__4__this, this->fields.userSvtEntityList, method);
  }
}