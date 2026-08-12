void ServantOperationManager___ctor(ServantOperationManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantOperationManager__CallOnSelect(
        ServantOperationManager_o *this,
        int32_t actionKind,
        System_Int64_array *servants,
        System_Int64_array *commandCodes,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onSelect; // x0
  struct System_Action_ServantOperationManager_ActionKind__long____long____o *v9; // x22
  struct System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect; // t1

  onSelect = this->fields.onSelect;
  p_onSelect = (MissionNaviTransitionBoardItem_o *)&this->fields.onSelect;
  v9 = onSelect;
  if ( onSelect )
  {
    p_onSelect->klass = 0;
    sub_2213A04(
      p_onSelect,
      0,
      (System_String_o *)servants,
      (System_String_o *)commandCodes,
      (int32_t)method,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, _QWORD, System_Int64_array *, System_Int64_array *, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)actionKind,
      servants,
      commandCodes,
      v9->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__ChangeList(ServantOperationManager_o *this, int32_t kind, const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 v6; // x9
  ServantOperationListViewManager_o *v7; // x21
  System_Action_bool__o *v8; // x22
  __int64 v9; // x20
  unsigned int max_length; // w9
  __int64 v11; // x10
  struct ServantOperationListViewManager_array *v12; // x8
  __int64 v13; // x9

  v4 = this;
  if ( (byte_596C6FE & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    this = (ServantOperationManager_o *)sub_2213A60(&Method_ServantOperationListViewManager_EndClickTabStatus__);
    byte_596C6FE = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_16;
  v6 = v4->fields.kind;
  if ( (unsigned int)v6 >= LODWORD(servantOperationListViewManager->max_length) )
    goto LABEL_23;
  v7 = servantOperationListViewManager->m_Items[v6];
  if ( !v7 )
    goto LABEL_16;
  if ( v7->fields.modeKind )
  {
    v8 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v8, (Il2CppObject *)v7, Method_ServantOperationListViewManager_EndClickTabStatus__, 0);
    ServantOperationListViewManager__StatusRequest(v7, v8, 0);
    servantOperationListViewManager = v4->fields.servantOperationListViewManager;
    v4->fields.kind = kind;
    if ( !servantOperationListViewManager )
      goto LABEL_16;
  }
  else
  {
    v4->fields.kind = kind;
  }
  v9 = 0;
  while ( 1 )
  {
    max_length = servantOperationListViewManager->max_length;
    if ( (int)v9 >= (int)max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
      goto LABEL_23;
    this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v9];
    if ( this )
    {
      this = (ServantOperationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (_DWORD)v9 == v4->fields.kind, 0);
        servantOperationListViewManager = v4->fields.servantOperationListViewManager;
        ++v9;
        if ( servantOperationListViewManager )
          continue;
      }
    }
    goto LABEL_16;
  }
  v11 = v4->fields.kind;
  if ( (unsigned int)v11 >= max_length )
LABEL_23:
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v11];
  if ( !this
    || (ServantOperationListViewManager__ChangeSortKindDisp((ServantOperationListViewManager_o *)this, 0),
        (v12 = v4->fields.servantOperationListViewManager) == 0) )
  {
LABEL_16:
    sub_2213CDC(this, *(_QWORD *)&kind);
  }
  v13 = v4->fields.kind;
  if ( (unsigned int)v13 >= LODWORD(v12->max_length) )
    goto LABEL_23;
  this = (ServantOperationManager_o *)v12->m_Items[v13];
  if ( !this )
    goto LABEL_16;
  ServantOperationListViewManager__ChangeFilterKindDisp((ServantOperationListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__ConfirmServantCheckEquipDialog(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x19
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  ServantCheckEquipDialog_ClickDelegate_o *v6; // x21

  v4 = this;
  if ( (byte_596C703 & 1) == 0 )
  {
    sub_2213A60(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    this = (ServantOperationManager_o *)sub_2213A60(&Method_ServantOperationManager_EndServantCheckEquip__);
    byte_596C703 = 1;
  }
  servantCheckEquipDialog = v4->fields.servantCheckEquipDialog;
  if ( isDecide )
  {
    v6 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_2213CCC(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    ServantCheckEquipDialog_ClickDelegate___ctor(
      v6,
      (Il2CppObject *)v4,
      Method_ServantOperationManager_EndServantCheckEquip__,
      0);
    if ( servantCheckEquipDialog )
    {
      ServantCheckEquipDialog__OpenShopLastCheck(servantCheckEquipDialog, v6, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(this, isDecide);
  }
  if ( !servantCheckEquipDialog )
    goto LABEL_8;
  ServantCheckEquipDialog__Close(v4->fields.servantCheckEquipDialog, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__CreateList(ServantOperationManager_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *qpDataLabel; // x21
  int32_t totalQP; // w22
  System_String_o *NumberFormat; // x0
  __int64 v10; // x1
  UILabel_o *mpDataLabel; // x21
  UILabel_o *rpDataLabel; // x21
  int32_t Count; // w21
  __int64 v14; // x1
  __int64 v15; // x2
  BalanceConfig_c *v16; // x0
  int32_t ServantSellSelectMax; // w24
  LocalizationManager_c *v18; // x0
  int v19; // w8
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v21; // x22
  Il2CppObject *v22; // x23
  Il2CppObject *v23; // x0
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

  if ( (byte_596C6FD & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596C6FD = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  ServantOperationManager__Init(this, *(const MethodInfo **)&kind);
  qpDataLabel = this->fields.qpDataLabel;
  totalQP = this->fields.totalQP;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  NumberFormat = LocalizationManager__GetNumberFormat(totalQP, 0);
  if ( !qpDataLabel )
    goto LABEL_42;
  UILabel__set_text(qpDataLabel, NumberFormat, 0);
  mpDataLabel = this->fields.mpDataLabel;
  NumberFormat = LocalizationManager__GetNumberFormat(this->fields.totalMana, 0);
  if ( !mpDataLabel )
    goto LABEL_42;
  UILabel__set_text(mpDataLabel, NumberFormat, 0);
  rpDataLabel = this->fields.rpDataLabel;
  NumberFormat = LocalizationManager__GetNumberFormat(this->fields.totalRarePri, 0);
  if ( !rpDataLabel )
    goto LABEL_42;
  UILabel__set_text(rpDataLabel, NumberFormat, 0);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)NumberFormat, 0);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  UserServantMaster__getCount((UserServantMaster_o *)NumberFormat, &servantEquipSum[1], servantEquipSum, 0, 0);
  v16 = BalanceConfig_TypeInfo;
  ServantSellSelectMax = servantEquipSum[1] + servantEquipSum[0] + Count;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14, v15);
    v16 = BalanceConfig_TypeInfo;
  }
  if ( ServantSellSelectMax >= v16->static_fields->ServantSellSelectMax )
  {
    ServantSellSelectMax = v16->static_fields->ServantSellSelectMax;
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v14, v15);
      ServantSellSelectMax = BalanceConfig_TypeInfo->static_fields->ServantSellSelectMax;
    }
  }
  v18 = LocalizationManager_TypeInfo;
  v19 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  selectDoneLabel = this->fields.selectDoneLabel;
  this->fields._SelectMax_k__BackingField = ServantSellSelectMax;
  if ( !v19 )
    j_il2cpp_runtime_class_init_0(v18, v14, v15);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = this->fields._SelectMax_k__BackingField;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &SelectMax_k__BackingField);
  NumberFormat = System_String__Format_75697880(v21, v22, v23, 0);
  if ( !selectDoneLabel )
    goto LABEL_42;
  UILabel__set_text(selectDoneLabel, NumberFormat, 0);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_42;
  if ( !LODWORD(servantOperationListViewManager->max_length) )
    goto LABEL_43;
  NumberFormat = (System_String_o *)servantOperationListViewManager->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0);
  if ( !NumberFormat )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0);
  v25 = this->fields.servantOperationListViewManager;
  if ( !v25 )
    goto LABEL_42;
  if ( !LODWORD(v25->max_length) )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v25->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 0, 0, 0);
  v26 = this->fields.servantOperationListViewManager;
  if ( !v26 )
    goto LABEL_42;
  if ( (v26->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v26->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0);
  if ( !NumberFormat )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0);
  v27 = this->fields.servantOperationListViewManager;
  if ( !v27 )
    goto LABEL_42;
  if ( (v27->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v27->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 1, 0, 0);
  v28 = this->fields.servantOperationListViewManager;
  if ( !v28 )
    goto LABEL_42;
  if ( LODWORD(v28->max_length) <= 2 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v28->m_Items[2];
  if ( !NumberFormat
    || (NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)NumberFormat,
                                            0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0),
        (v29 = this->fields.servantOperationListViewManager) == 0) )
  {
LABEL_42:
    sub_2213CDC(NumberFormat, v10);
  }
  if ( LODWORD(v29->max_length) <= 2 )
LABEL_43:
    sub_2213CE4(NumberFormat);
  NumberFormat = (System_String_o *)v29->m_Items[2];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 2, 0, 0);
  ServantOperationManager__ChangeList(this, kind, v30);
}


void ServantOperationManager__DestroyList(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x19
  int max_length; // w8
  __int64 v4; // x20

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_8;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v4 >= max_length )
        sub_2213CE4(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v4];
      if ( !this )
        break;
      ServantOperationListViewManager__DestroyList((ServantOperationListViewManager_o *)this, 0);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_8:
    sub_2213CDC(this, method);
  }
}


void ServantOperationManager__EndCloseSelectFilterKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__EndSelectFilterKind(
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
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, isDecide);
  ServantOperationListViewManager__EndSelectFilterKind((ServantOperationListViewManager_o *)this, isDecide, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__EndServantCheckEquip(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x0
  const MethodInfo *v6; // x1

  servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
  if ( !servantCheckEquipDialog )
    sub_2213CDC(0, isDecide);
  ServantCheckEquipDialog__Close(servantCheckEquipDialog, 0);
  if ( isDecide )
    ServantOperationManager__SellCombineWarning(this, v6);
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantOperationManager__GetAmountSortValue(
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
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, *(_QWORD *)&svtId);
  return ServantOperationListViewManager__GetAmountSortValue((ServantOperationListViewManager_o *)this, svtId, 0);
}


System_Collections_Generic_List_int__o *ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *selectEquipedCommandCodeServantList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  int32_t size; // w23
  System_Collections_Generic_List_int__o *v5; // x20
  UserServantEntity_array *AllList; // x23
  System_Collections_Generic_List_int__o *v7; // x21
  System_Collections_Generic_Dictionary_int__int__o *v8; // x22
  int32_t i; // w24
  ServantOperationManager_o *v10; // x25
  int32_t v11; // w26
  int32_t v12; // w27
  int onSelect; // w28
  __int64 v14; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x24
  unsigned int v17; // w29
  UserServantEntity_o *v18; // x25
  __int64 v19; // x26
  __int64 v20; // x27
  __int64 v21; // x25
  __int64 v22; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  int32_t v26; // w23
  int32_t v27; // w24
  int32_t v28; // w25
  int v29; // w29
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v3 = (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList;
  if ( (byte_596C702 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantOperationManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C702 = 1;
  }
  if ( !v3 )
    goto LABEL_62;
  size = v3->fields._size;
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0);
    v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( v3->fields._size >= 1 )
    {
      for ( i = 0; i < v3->fields._size; ++i )
      {
        this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                              v3,
                                              i,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
        if ( !this || !v8 )
          goto LABEL_62;
        v10 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v8,
                (int32_t)this->fields.onSelect,
                (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          if ( v3->fields._size >= 1 )
          {
            v11 = 0;
            v12 = 0;
            while ( 1 )
            {
              onSelect = (int)v10->fields.onSelect;
              this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    v3,
                                                    v12,
                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
              if ( !this )
                break;
              ++v12;
              if ( onSelect == LODWORD(this->fields.onSelect) )
                ++v11;
              if ( v12 >= v3->fields._size )
                goto LABEL_20;
            }
LABEL_62:
            sub_2213CDC(this, selectEquipedCommandCodeServantList);
          }
          v11 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v8,
            (int32_t)v10->fields.onSelect,
            v11,
            (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_62;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
      v17 = 0;
      do
      {
        if ( v17 >= max_length )
          sub_2213CE4(this);
        v18 = AllList->m_Items[v17];
        if ( !v18 )
          goto LABEL_62;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            selectEquipedCommandCodeServantList,
            v14);
        *(_QWORD *)&v34.fields.currentCryptoKey = v19;
        *(_QWORD *)&v34.fields.fakeValue = v20;
        this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v34, 0);
        if ( !v16 )
          goto LABEL_62;
        this = (ServantOperationManager_o *)DataMasterBase_object__object__int___GetEntity(
                                              v16,
                                              (int32_t)this,
                                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_62;
        this = (ServantOperationManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ServantOperationManager_o *)UserServantEntity__IsEventJoin(v18, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v22 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
            v21 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                selectEquipedCommandCodeServantList,
                v14);
            *(_QWORD *)&v35.fields.currentCryptoKey = v22;
            *(_QWORD *)&v35.fields.fakeValue = v21;
            this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                  v35,
                                                  0);
            if ( !v7 )
              goto LABEL_62;
            items = v7->fields._items;
            v24 = Method_System_Collections_Generic_List_int__Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_62;
            v25 = v7->fields._size;
            selectEquipedCommandCodeServantList = (System_Collections_Generic_List_ServantOperationListViewItem__o *)(unsigned int)this;
            if ( (unsigned int)v25 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v7,
                (int32_t)this,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v7->fields._size = v25 + 1;
              items->m_Items[v25] = (int)this;
            }
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v17 < max_length );
    }
    if ( v3->fields._size >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                              v3,
                                              v26,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
        if ( !this || !v7 )
          goto LABEL_62;
        v27 = (int32_t)this->fields.onSelect;
        if ( v7->fields._size < 1 )
        {
          v29 = 0;
          if ( !v8 )
            goto LABEL_62;
        }
        else
        {
          v28 = 0;
          v29 = 0;
          do
          {
            this = (ServantOperationManager_o *)System_Collections_Generic_List_int___get_Item(
                                                  v7,
                                                  v28++,
                                                  (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v27 == (_DWORD)this )
              ++v29;
          }
          while ( v28 < v7->fields._size );
          if ( !v8 )
            goto LABEL_62;
        }
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v8,
                                              v27,
                                              (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v29 )
        {
          if ( !v5 )
            goto LABEL_62;
          v30 = v5->fields._items;
          v31 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !v30 )
            goto LABEL_62;
          v32 = v5->fields._size;
          if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v27,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = v32 + 1;
            v30->m_Items[v32] = v27;
          }
        }
        if ( ++v26 >= v3->fields._size )
          return v5;
      }
    }
  }
  return v5;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *ServantOperationManager__GetSelectedEquipeCmdCardServantList(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( !LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[0];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  return ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
           (ServantOperationListViewManager_o *)this,
           0);
}


int32_t ServantOperationManager__GetSelectedOrderByCommandCodeId(
        ServantOperationManager_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( LODWORD(servantOperationListViewManager->max_length) <= 2 )
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[2];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, id);
  return ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
           (ServantOperationListViewManager_o *)this,
           id,
           0);
}


int32_t ServantOperationManager__GetSelectedOrderByServantId(
        ServantOperationManager_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v6; // w21

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_11;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_2213CE4(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      if ( *((_DWORD *)this + 123) != 2 )
      {
        this = (ServantOperationManager_o *)ServantOperationListViewManager__GetSelectedOrderByUserServantId(
                                              (ServantOperationListViewManager_o *)this,
                                              id,
                                              0);
        if ( (int)this > 0 )
          return (int)this;
      }
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_9;
    }
LABEL_11:
    sub_2213CDC(this, id);
  }
LABEL_9:
  LODWORD(this) = -1;
  return (int)this;
}


void ServantOperationManager__Init(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0

  this->fields._TotalSum_k__BackingField = 0;
  allReleaseButton = this->fields.allReleaseButton;
  *(_QWORD *)&this->fields.totalQP = 0;
  this->fields.totalRarePri = 0;
  if ( !allReleaseButton
    || (((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, const MethodInfo *))allReleaseButton->klass->vtable._14_SetState.methodPtr)(
          allReleaseButton,
          3,
          0,
          allReleaseButton->klass->vtable._14_SetState.method),
        (allReleaseButton = this->fields.decideButton) == 0) )
  {
    sub_2213CDC(allReleaseButton, method);
  }
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, const MethodInfo *))allReleaseButton->klass->vtable._14_SetState.methodPtr)(
    allReleaseButton,
    3,
    0,
    allReleaseButton->klass->vtable._14_SetState.method);
}


void ServantOperationManager__InitBackListView(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  ServantOperationListViewManager__InitBack((ServantOperationListViewManager_o *)this, 0);
}


void ServantOperationManager__ModifyItem(ServantOperationManager_o *this, int64_t selectedId, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, selectedId);
  ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, selectedId, 0);
}


void ServantOperationManager__ModifyListItem(
        ServantOperationManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  __int64 v6; // x21

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_8;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_2213CE4(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, userSvtId, 0);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_8:
    sub_2213CDC(this, userSvtId);
  }
}


void ServantOperationManager__OnClickDecide(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ServantOperationListViewManager_o *SelectedServantIdList; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_long__o *v12; // x22
  struct System_Collections_Generic_List_long__o **p_selectUserServantIdList; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_long__o *v20; // x23
  struct System_Collections_Generic_List_long__o **p_selectUserCommandCodeIdList; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  System_Collections_Generic_List_long__o *v29; // x23
  struct ServantOperationListViewManager_array *v30; // x8
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x23
  struct ServantOperationListViewManager_array *v32; // x8
  System_Collections_Generic_List_long__o *selectUserCommandCodeIdList; // x23
  struct ServantOperationListViewManager_array *v34; // x8
  struct ServantOperationListViewManager_array *v35; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *v36; // x24
  System_Collections_Generic_List_ServantOperationListViewItem__o *EquipMaterialList; // x0
  System_Collections_Generic_List_ServantOperationListViewItem__o **v38; // x23
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  ServantOperationManager_o *v45; // x0
  const MethodInfo *v46; // x2
  int m_CancellationTokenSource; // w8
  int v48; // w25
  Il2CppObject *current; // x24
  Il2CppObject *Instance; // x0
  __int64 v51; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v53; // x1
  Il2CppObject *Entity; // x0
  __int64 v55; // x1
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  Il2CppObject *v60; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  System_String_o *v63; // x19
  System_Collections_Generic_List_object__o *ExchangeSvtCombineExpCampaign; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  Il2CppObject *Item; // x0
  System_String_o *v68; // x0
  System_String_o *v69; // x21
  Il2CppObject *v70; // x22
  System_String_o *v71; // x23
  System_String_o *v72; // x24
  CommonConfirmDialog_ClickDelegate_o *v73; // x25
  _QWORD *v74; // x0
  System_Reflection_MethodBase_o *v75; // x0
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  System_Collections_Generic_List_ServantOperationListViewItem__o *v77; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v78; // x22
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  int32_t v81; // w1
  const MethodInfo *v82; // x1
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+40h] [xbp-A0h] BYREF
  int v84; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_596C701 & 1) == 0 )
  {
    sub_2213A60(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__);
    sub_2213A60(&Method_ServantOperationManager_OnClickDecide__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__);
    sub_2213A60(&ServantOperationManager___c__DisplayClass44_0_TypeInfo);
    sub_2213A60(&StringLiteral_5985/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_5983/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C701 = 1;
  }
  memset(&v85, 0, sizeof(v85));
  v84 = 0;
  v3 = sub_2213CCC(ServantOperationManager___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_66;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields._TotalSum_k__BackingField >= 1 )
  {
    v12 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v12,
      (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserServantIdList = v12;
    p_selectUserServantIdList = &this->fields.selectUserServantIdList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectUserServantIdList,
      (int32_t)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserCommandCodeIdList = v20;
    p_selectUserCommandCodeIdList = &this->fields.selectUserCommandCodeIdList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectUserCommandCodeIdList,
      (int32_t)v20,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    servantOperationListViewManager = this->fields.servantOperationListViewManager;
    if ( !servantOperationListViewManager )
      goto LABEL_66;
    if ( !LODWORD(servantOperationListViewManager->max_length) )
      goto LABEL_67;
    SelectedServantIdList = servantOperationListViewManager->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_66;
    v29 = *p_selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   0);
    if ( !v29 )
      goto LABEL_66;
    System_Collections_Generic_List_long___AddRange(
      v29,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_446C4A8 *)Method_System_Collections_Generic_List_long__AddRange__);
    v30 = this->fields.servantOperationListViewManager;
    if ( !v30 )
      goto LABEL_66;
    if ( (v30->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_67;
    SelectedServantIdList = v30->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_66;
    selectUserServantIdList = this->fields.selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   0);
    if ( !selectUserServantIdList )
      goto LABEL_66;
    System_Collections_Generic_List_long___AddRange(
      selectUserServantIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_446C4A8 *)Method_System_Collections_Generic_List_long__AddRange__);
    v32 = this->fields.servantOperationListViewManager;
    if ( !v32 )
      goto LABEL_66;
    if ( LODWORD(v32->max_length) <= 2 )
      goto LABEL_67;
    SelectedServantIdList = v32->m_Items[2];
    if ( !SelectedServantIdList )
      goto LABEL_66;
    selectUserCommandCodeIdList = this->fields.selectUserCommandCodeIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedCommandCodeIdList(
                                                                   SelectedServantIdList,
                                                                   0);
    if ( !selectUserCommandCodeIdList )
      goto LABEL_66;
    System_Collections_Generic_List_long___AddRange(
      selectUserCommandCodeIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_446C4A8 *)Method_System_Collections_Generic_List_long__AddRange__);
    v34 = this->fields.servantOperationListViewManager;
    if ( !v34 )
      goto LABEL_66;
    if ( !LODWORD(v34->max_length) )
      goto LABEL_67;
    SelectedServantIdList = v34->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_66;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
                                                                   SelectedServantIdList,
                                                                   0);
    v35 = this->fields.servantOperationListViewManager;
    if ( !v35 )
      goto LABEL_66;
    if ( (v35->max_length & 0xFFFFFFFE) == 0 )
LABEL_67:
      sub_2213CE4(SelectedServantIdList);
    v36 = (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedServantIdList;
    SelectedServantIdList = v35->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_66;
    EquipMaterialList = ServantOperationListViewManager__GetEquipMaterialList(SelectedServantIdList, 0);
    *(_QWORD *)(v3 + 16) = EquipMaterialList;
    v38 = (System_Collections_Generic_List_ServantOperationListViewItem__o **)(v3 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)EquipMaterialList, v39, v40, v41, v42, v43, v44);
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                                                   v45,
                                                                   v36,
                                                                   v46);
    if ( !SelectedServantIdList )
      goto LABEL_66;
    m_CancellationTokenSource = (int)SelectedServantIdList->fields.m_CancellationTokenSource;
    SelectedServantIdList = (ServantOperationListViewManager_o *)this->fields.selectUserServantIdList;
    this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = m_CancellationTokenSource > 0;
    if ( !SelectedServantIdList )
      goto LABEL_66;
    System_Collections_Generic_List_long___GetEnumerator(
      &v83,
      (System_Collections_Generic_List_long__o *)SelectedServantIdList,
      (const MethodInfo_446CD4C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v48 = 0;
    v85 = v83;
    v83.fields._list = 0;
    *(_QWORD *)&v83.fields._index = &v85;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v85,
              (const MethodInfo_40F7FA8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v85.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_2213CDC(0, v51);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_2213CDC(0, v53);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_2213CDC(0, v55);
      v48 |= UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0);
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v85,
      (const MethodInfo_40F7FA4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    if ( (v48 & 1) != 0 )
    {
      v56 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v56 = (_QWORD *)sub_2213A78(Method_ServantOperationManager_OnClickDecide__);
      v57 = (System_Reflection_MethodBase_o *)sub_2213A44(v56, v56[4]);
      OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0, 0);
      v60 = (Il2CppObject *)StringLiteral_1/*""*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58, v59);
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_5983/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v61, v62);
      SelectedServantIdList = (ServantOperationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( SelectedServantIdList )
      {
        ExchangeSvtCombineExpCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
                                                                                       (EventCampaignMaster_o *)SelectedServantIdList,
                                                                                       0);
        if ( ExchangeSvtCombineExpCampaign )
        {
          if ( ExchangeSvtCombineExpCampaign->fields._size >= 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     ExchangeSvtCombineExpCampaign,
                     0,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( Item )
            {
              v84 = SLODWORD(Item[3].klass) / 1000;
              v60 = (Il2CppObject *)System_Int32__ToString((int32_t)&v84, 0);
            }
          }
        }
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65, v66);
        v68 = LocalizationManager__Get((System_String_o *)StringLiteral_5985/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, 0);
        v69 = System_String__Format_75697880(v68, v60, v60, 0);
        v70 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
        v72 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
        v73 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v73,
          (Il2CppObject *)v3,
          Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__,
          0);
        if ( v70 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v70,
            v63,
            v69,
            v71,
            v72,
            v73,
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
            0);
          return;
        }
      }
LABEL_66:
      sub_2213CDC(SelectedServantIdList, v5);
    }
    if ( !*v38 )
      goto LABEL_66;
    if ( (*v38)->fields._size < 1 )
    {
      if ( !*p_selectUserServantIdList )
        goto LABEL_66;
      if ( (*p_selectUserServantIdList)->fields._size > 0 )
        goto LABEL_57;
      if ( !*p_selectUserCommandCodeIdList )
        goto LABEL_66;
      if ( (*p_selectUserCommandCodeIdList)->fields._size < 1 )
      {
        v80 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_ServantOperationManager_OnClickDecide__);
        v81 = 2;
      }
      else
      {
LABEL_57:
        v79 = Method_ServantOperationManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
          v79 = (_QWORD *)sub_2213A78(Method_ServantOperationManager_OnClickDecide__);
        v80 = (System_Reflection_MethodBase_o *)sub_2213A44(v79, v79[4]);
        v81 = 0;
      }
      OverwriteAssetSoundName__PlaySystemSe(v80, v81, 0, 0);
      ServantOperationManager__SellCombineWarning(this, v82);
    }
    else
    {
      v74 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v74 = (_QWORD *)sub_2213A78(Method_ServantOperationManager_OnClickDecide__);
      v75 = (System_Reflection_MethodBase_o *)sub_2213A44(v74, v74[4]);
      OverwriteAssetSoundName__PlaySystemSe(v75, 0, 0, 0);
      servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
      v77 = *v38;
      v78 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_2213CCC(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v78,
        (Il2CppObject *)this,
        Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0);
      if ( !servantCheckEquipDialog )
        goto LABEL_66;
      ServantCheckEquipDialog__Open_41691180(servantCheckEquipDialog, v77, v78, 0);
    }
  }
}


void ServantOperationManager__OnClickFilter2Kind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  ServantOperationListViewManager__OnClickFilter2Kind((ServantOperationListViewManager_o *)this, 0);
}


void ServantOperationManager__OnClickFilterKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  ServantOperationListViewManager__OnClickFilterKind((ServantOperationListViewManager_o *)this, 0);
}


void ServantOperationManager__OnClickReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_596C708 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantOperationManager_OnClickReleaseAll__);
    byte_596C708 = 1;
  }
  v3 = Method_ServantOperationManager_OnClickReleaseAll__;
  if ( this->fields._TotalSum_k__BackingField <= 0 )
  {
    if ( (*((_BYTE *)Method_ServantOperationManager_OnClickReleaseAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantOperationManager_OnClickReleaseAll__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_ServantOperationManager_OnClickReleaseAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantOperationManager_OnClickReleaseAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ServantOperationManager__ReleaseAll(this, v5);
  }
}


void ServantOperationManager__OnClickSortAscendingOrder(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  ServantOperationListViewManager__OnClickSortAscendingOrder((ServantOperationListViewManager_o *)this, 0);
}


void ServantOperationManager__OnClickSortKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  ServantOperationListViewManager__OnClickSortKind((ServantOperationListViewManager_o *)this, 0);
}


void ServantOperationManager__OnSelectServant(
        ServantOperationManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x21
  System_Collections_Generic_List_long__o *v6; // x20
  int64_t UserCommandCodeId; // x0
  int64_t v8; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v11; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  struct System_Int64_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  System_Int64_array *v18; // x21
  System_Int64_array *v19; // x3
  const MethodInfo *v20; // x4

  if ( (byte_596C70A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    byte_596C70A = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_23;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(UserCommandCodeId);
  v11 = servantOperationListViewManager->m_Items[kind];
  if ( !v11 )
    goto LABEL_23;
  if ( v11->fields.kind == 2 )
  {
    if ( selectItem )
    {
      UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(selectItem, 0);
      if ( v6 )
      {
        items = v6->fields._items;
        v13 = Method_System_Collections_Generic_List_long__Add__;
        ++v6->fields._version;
        if ( items )
        {
          size = v6->fields._size;
          v8 = UserCommandCodeId;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v6,
              UserCommandCodeId,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v6->fields._size = size + 1;
            items->m_Items[size] = UserCommandCodeId;
          }
          if ( v5 )
          {
            UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                           v5,
                                           (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
            goto LABEL_22;
          }
        }
      }
    }
LABEL_23:
    sub_2213CDC(UserCommandCodeId, v8);
  }
  if ( !selectItem )
    goto LABEL_23;
  UserCommandCodeId = ServantOperationListViewItem__get_UserSvtId(selectItem, 0);
  if ( !v5 )
    goto LABEL_23;
  v15 = v5->fields._items;
  v16 = Method_System_Collections_Generic_List_long__Add__;
  ++v5->fields._version;
  if ( !v15 )
    goto LABEL_23;
  v17 = v5->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v5,
      UserCommandCodeId,
      *(const MethodInfo_446C29C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v17 + 1;
    v15->m_Items[v17] = UserCommandCodeId;
  }
  UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                 v5,
                                 (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v6 )
    goto LABEL_23;
LABEL_22:
  v18 = (System_Int64_array *)UserCommandCodeId;
  v19 = System_Collections_Generic_List_long___ToArray(
          v6,
          (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 2, v18, v19, v20);
}


void ServantOperationManager__OpenSellConfirmDialog(ServantOperationManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x0
  System_Int64_array *v4; // x20
  System_Int64_array *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_596C707 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    byte_596C707 = 1;
  }
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList
    || (selectUserServantIdList = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                               selectUserServantIdList,
                                                                               (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.selectUserCommandCodeIdList) )
  {
    sub_2213CDC(selectUserServantIdList, method);
  }
  v4 = (System_Int64_array *)selectUserServantIdList;
  v5 = System_Collections_Generic_List_long___ToArray(
         this->fields.selectUserCommandCodeIdList,
         (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 1, v4, v5, v6);
}


void ServantOperationManager__RefrashListDisp(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantOperationManager_o *v3; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x21
  int max_length; // w8
  __int64 v6; // x22
  int32_t v7; // w20
  int v8; // w9
  int v9; // w10
  UILabel_o *qpDataLabel; // x21
  UILabel_o *mpDataLabel; // x20
  UILabel_o *rpDataLabel; // x20
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t rarePri; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t mana[2]; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_596C6FF & 1) == 0 )
  {
    this = (ServantOperationManager_o *)sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596C6FF = 1;
  }
  servantOperationListViewManager = v3->fields.servantOperationListViewManager;
  *(_QWORD *)mana = 0;
  rarePri = 0;
  *(_QWORD *)&v3->fields.totalQP = 0;
  v3->fields.totalRarePri = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_25;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_2213CE4(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        goto LABEL_25;
      ServantOperationListViewManager__SumItems((ServantOperationListViewManager_o *)this, &mana[1], mana, &rarePri, 0);
      ++v6;
      v7 = mana[1] + v3->fields.totalQP;
      max_length = servantOperationListViewManager->max_length;
      v8 = mana[0] + v3->fields.totalMana;
      v9 = rarePri + v3->fields.totalRarePri;
      v3->fields.totalQP = v7;
      v3->fields.totalMana = v8;
      v3->fields.totalRarePri = v9;
      if ( (int)v6 >= max_length )
        goto LABEL_11;
    }
  }
  v7 = 0;
LABEL_11:
  qpDataLabel = v3->fields.qpDataLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v7, 0);
  if ( !qpDataLabel )
    goto LABEL_25;
  UILabel__set_text(qpDataLabel, (System_String_o *)this, 0);
  mpDataLabel = v3->fields.mpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v3->fields.totalMana, 0);
  if ( !mpDataLabel )
    goto LABEL_25;
  UILabel__set_text(mpDataLabel, (System_String_o *)this, 0);
  rpDataLabel = v3->fields.rpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v3->fields.totalRarePri, 0);
  if ( !rpDataLabel )
    goto LABEL_25;
  UILabel__set_text(rpDataLabel, (System_String_o *)this, 0);
  this = (ServantOperationManager_o *)v3->fields.allReleaseButton;
  if ( !this )
    goto LABEL_25;
  v13 = v3->fields._TotalSum_k__BackingField <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    v13,
    1,
    this->klass[1]._1.implementedInterfaces);
  this = (ServantOperationManager_o *)v3->fields.decideButton;
  if ( !this )
LABEL_25:
    sub_2213CDC(this, method);
  if ( v3->fields._TotalSum_k__BackingField <= 0 )
    v14 = 3;
  else
    v14 = 0;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    v14,
    1,
    this->klass[1]._1.implementedInterfaces);
}


void ServantOperationManager__ReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantOperationManager_o *v3; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  __int64 v6; // x21
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v8; // x21
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  const MethodInfo *v11; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_596C709 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (ServantOperationManager_o *)sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596C709 = 1;
  }
  servantOperationListViewManager = v3->fields.servantOperationListViewManager;
  v3->fields._TotalSum_k__BackingField = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_13;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_2213CE4(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__ReleaseAll((ServantOperationListViewManager_o *)this, 0);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_9;
    }
LABEL_13:
    sub_2213CDC(this, method);
  }
LABEL_9:
  selectDoneLabel = v3->fields.selectDoneLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
  TotalSum_k__BackingField = v3->fields._TotalSum_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = v3->fields._SelectMax_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &SelectMax_k__BackingField);
  this = (ServantOperationManager_o *)System_String__Format_75697880(v8, v9, v10, 0);
  if ( !selectDoneLabel )
    goto LABEL_13;
  UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0);
  ServantOperationManager__RefrashListDisp(v3, v11);
}


void ServantOperationManager__SellCombineWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x19
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v5; // x20
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  __int64 v23; // x2
  struct ServantOperationManager___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__51_0; // x21
  Il2CppObject *v26; // x22
  struct ServantOperationManager___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo *v34; // x1
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v36; // x22
  System_Action_long__o *v37; // x23
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-80h] BYREF

  v2 = this;
  if ( (byte_596C704 & 1) == 0 )
  {
    sub_2213A60(&System_Action_long__TypeInfo);
    sub_2213A60(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor___91670824);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&System_Predicate_UserServantEntity__TypeInfo);
    sub_2213A60(&Method_ServantOperationManager__SellCombineWarning_b__51_1__);
    sub_2213A60(&Method_ServantOperationManager__SellCombineWarning_b__51_2__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantOperationManager___c__SellCombineWarning_b__51_0__);
    this = (ServantOperationManager_o *)sub_2213A60(&ServantOperationManager___c_TypeInfo);
    byte_596C704 = 1;
  }
  selectUserServantIdList = v2->fields.selectUserServantIdList;
  memset(&v39, 0, sizeof(v39));
  if ( !selectUserServantIdList )
    goto LABEL_29;
  size = selectUserServantIdList->fields._size;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71840884(
    v5,
    size,
    (const MethodInfo_4483474 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91670824);
  this = (ServantOperationManager_o *)v2->fields.selectUserServantIdList;
  if ( !this )
    goto LABEL_29;
  System_Collections_Generic_List_long___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_446CD4C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v39 = v38;
  v38.fields._list = 0;
  *(_QWORD *)&v38.fields._index = &v39;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v39,
            (const MethodInfo_40F7FA8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v39.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_2213CDC(0, v10);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v18 = Entity;
    if ( !v5
      || (items = v5->fields._items,
          v20 = Method_System_Collections_Generic_List_UserServantEntity__Add__,
          ++v5->fields._version,
          !items) )
    {
      sub_2213CDC(Entity, Entity);
    }
    v21 = v5->fields._size;
    if ( (unsigned int)v21 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        Entity,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + v21;
      v5->fields._size = v21 + 1;
      v22[4] = (Il2CppClass *)v18;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v39,
    (const MethodInfo_40F7FA4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  this = (ServantOperationManager_o *)ServantOperationManager___c_TypeInfo;
  if ( !*(&ServantOperationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo, method, v23);
    this = (ServantOperationManager_o *)ServantOperationManager___c_TypeInfo;
  }
  static_fields = *(struct ServantOperationManager___c_StaticFields **)&this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
  _9__51_0 = (System_Predicate_object__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !*((_DWORD *)this + 57) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v23);
      static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(_9__51_0, v26, Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, 0);
    v27 = ServantOperationManager___c_TypeInfo->static_fields;
    v27->__9__51_0 = (struct System_Predicate_UserServantEntity__o *)_9__51_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->__9__51_0, (int32_t)_9__51_0, v28, v29, v30, v31, v32, v33);
  }
  if ( !v5 )
    goto LABEL_29;
  if ( System_Collections_Generic_List_object___Find(
         v5,
         (System_Predicate_T__o *)_9__51_0,
         (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = v2->fields.servantCheckWarningDialog;
    v36 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_2213CCC(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v36,
      (Il2CppObject *)v2,
      Method_ServantOperationManager__SellCombineWarning_b__51_1__,
      0);
    v37 = (System_Action_long__o *)sub_2213CCC(System_Action_long__TypeInfo);
    System_Action_long____ctor(v37, (Il2CppObject *)v2, Method_ServantOperationManager__SellCombineWarning_b__51_2__, 0);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellCombineWarning(
        servantCheckWarningDialog,
        (System_Collections_Generic_List_UserServantEntity__o *)v5,
        v36,
        v37,
        0);
      return;
    }
LABEL_29:
    sub_2213CDC(this, method);
  }
  ServantOperationManager__SellSSRareWarning(v2, v34);
}


void ServantOperationManager__SellMaterialTdWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x22
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v5; // x20
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x23
  Il2CppClass *klass; // x24
  void *monitor; // x25
  __int64 v21; // x0
  Il2CppObject *v22; // x23
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *v27; // x24
  NetworkManager_c *v28; // x0
  int64_t userIdNumber; // x25
  __int64 v30; // x0
  __int64 v31; // x1
  UserServantCollectionEntity_o *v32; // x0
  UserServantCollectionEntity_o *v33; // x23
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  ServantCheckWarningDialog_o *v50; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v51; // x22
  Il2CppObject *v52; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+10h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v2 = this;
  if ( (byte_596C706 & 1) == 0 )
  {
    sub_2213A60(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor___91670824);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__);
    this = (ServantOperationManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C706 = 1;
  }
  selectUserServantIdList = v2->fields.selectUserServantIdList;
  memset(&v55, 0, sizeof(v55));
  tdInfo = 0;
  if ( !selectUserServantIdList )
    goto LABEL_55;
  size = selectUserServantIdList->fields._size;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71840884(
    v5,
    size,
    (const MethodInfo_4483474 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91670824);
  this = (ServantOperationManager_o *)v2->fields.selectUserServantIdList;
  v52 = (Il2CppObject *)v2;
  if ( !this )
    goto LABEL_55;
  System_Collections_Generic_List_long___GetEnumerator(
    &v53,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_446CD4C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v55 = v53;
  v53.fields._list = 0;
  *(_QWORD *)&v53.fields._index = &v55;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v55,
            (const MethodInfo_40F7FA8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v55.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_2213CDC(0, v10);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v13 = Entity;
    if ( !Entity )
      sub_2213CDC(0, v12);
    if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)Entity, 0) )
    {
      v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v14 )
        sub_2213CDC(0, v15);
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)v14,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      klass = v13[5].klass;
      monitor = v13[5].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17);
      *(_QWORD *)&v56.fields.currentCryptoKey = klass;
      *(_QWORD *)&v56.fields.fakeValue = monitor;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v56, 0);
      if ( !v18 )
        sub_2213CDC(v21, (unsigned int)v21);
      v22 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
              v21,
              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v23 )
        sub_2213CDC(0, v24);
      v27 = DataManager__GetMasterData_object_(
              (DataManager_o *)v23,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25, v26);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v28 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25, v26);
        v28 = NetworkManager_TypeInfo;
      }
      if ( !v22 )
        sub_2213CDC(v28, v25);
      userIdNumber = v28->static_fields->userIdNumber;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v22[2],
              0);
      if ( !v27 )
        sub_2213CDC(v30, v31);
      v32 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v27, userIdNumber, v30, 0);
      v33 = v32;
      if ( v32 && UserServantCollectionEntity__IsGet(v32, 0) )
      {
        UserServantCollectionEntity__getTreasureDeviceInfo(v33, &tdInfo, -1, -1, 0);
        v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v34 )
          sub_2213CDC(0, v35);
        v36 = DataManager__GetMasterData_object_(
                (DataManager_o *)v34,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !tdInfo )
          sub_2213CDC(v36, v37);
        if ( !v36 )
          sub_2213CDC(0, v37);
        v38 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v36,
                tdInfo->fields.id,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !v38 )
          sub_2213CDC(0, v39);
        if ( v33->fields.treasureDeviceLv1 != LODWORD(v38[3].klass) )
        {
          if ( !v5
            || (items = v5->fields._items,
                v47 = Method_System_Collections_Generic_List_UserServantEntity__Add__,
                ++v5->fields._version,
                !items) )
          {
            sub_2213CDC(v38, v39);
          }
          v48 = v5->fields._size;
          if ( (unsigned int)v48 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v13,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &items->obj.klass + v48;
            v5->fields._size = v48 + 1;
            v49[4] = (Il2CppClass *)v13;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v13, v40, v41, v42, v43, v44, v45);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v55,
    (const MethodInfo_40F7FA4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( !v5 )
    goto LABEL_55;
  if ( v5->fields._size >= 1 )
  {
    v50 = (ServantCheckWarningDialog_o *)v52[8].klass;
    v51 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_2213CCC(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v51,
      v52,
      Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__,
      0);
    if ( v50 )
    {
      ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        v50,
        (System_Collections_Generic_List_UserServantEntity__o *)v5,
        v51,
        0);
      return;
    }
LABEL_55:
    sub_2213CDC(this, method);
  }
  ServantOperationManager__OpenSellConfirmDialog((ServantOperationManager_o *)v52, method);
}


void ServantOperationManager__SellSSRareWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x19
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v5; // x20
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  __int64 v23; // x2
  struct ServantOperationManager___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__52_0; // x21
  Il2CppObject *v26; // x22
  struct ServantOperationManager___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo *v34; // x1
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v36; // x22
  System_Action_long__o *v37; // x23
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-80h] BYREF

  v2 = this;
  if ( (byte_596C705 & 1) == 0 )
  {
    sub_2213A60(&System_Action_long__TypeInfo);
    sub_2213A60(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor___91670824);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&System_Predicate_UserServantEntity__TypeInfo);
    sub_2213A60(&Method_ServantOperationManager__SellSSRareWarning_b__52_1__);
    sub_2213A60(&Method_ServantOperationManager__SellSSRareWarning_b__52_2__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__);
    this = (ServantOperationManager_o *)sub_2213A60(&ServantOperationManager___c_TypeInfo);
    byte_596C705 = 1;
  }
  selectUserServantIdList = v2->fields.selectUserServantIdList;
  memset(&v39, 0, sizeof(v39));
  if ( !selectUserServantIdList )
    goto LABEL_29;
  size = selectUserServantIdList->fields._size;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71840884(
    v5,
    size,
    (const MethodInfo_4483474 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91670824);
  this = (ServantOperationManager_o *)v2->fields.selectUserServantIdList;
  if ( !this )
    goto LABEL_29;
  System_Collections_Generic_List_long___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_446CD4C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v39 = v38;
  v38.fields._list = 0;
  *(_QWORD *)&v38.fields._index = &v39;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v39,
            (const MethodInfo_40F7FA8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v39.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_2213CDC(0, v10);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v18 = Entity;
    if ( !v5
      || (items = v5->fields._items,
          v20 = Method_System_Collections_Generic_List_UserServantEntity__Add__,
          ++v5->fields._version,
          !items) )
    {
      sub_2213CDC(Entity, Entity);
    }
    v21 = v5->fields._size;
    if ( (unsigned int)v21 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        Entity,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + v21;
      v5->fields._size = v21 + 1;
      v22[4] = (Il2CppClass *)v18;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v39,
    (const MethodInfo_40F7FA4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  this = (ServantOperationManager_o *)ServantOperationManager___c_TypeInfo;
  if ( !*(&ServantOperationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo, method, v23);
    this = (ServantOperationManager_o *)ServantOperationManager___c_TypeInfo;
  }
  static_fields = *(struct ServantOperationManager___c_StaticFields **)&this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
  _9__52_0 = (System_Predicate_object__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( !*((_DWORD *)this + 57) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v23);
      static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(_9__52_0, v26, Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, 0);
    v27 = ServantOperationManager___c_TypeInfo->static_fields;
    v27->__9__52_0 = (struct System_Predicate_UserServantEntity__o *)_9__52_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->__9__52_0, (int32_t)_9__52_0, v28, v29, v30, v31, v32, v33);
  }
  if ( !v5 )
    goto LABEL_29;
  if ( System_Collections_Generic_List_object___Find(
         v5,
         (System_Predicate_T__o *)_9__52_0,
         (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = v2->fields.servantCheckWarningDialog;
    v36 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_2213CCC(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v36,
      (Il2CppObject *)v2,
      Method_ServantOperationManager__SellSSRareWarning_b__52_1__,
      0);
    v37 = (System_Action_long__o *)sub_2213CCC(System_Action_long__TypeInfo);
    System_Action_long____ctor(v37, (Il2CppObject *)v2, Method_ServantOperationManager__SellSSRareWarning_b__52_2__, 0);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellSSRareWarning(
        servantCheckWarningDialog,
        (System_Collections_Generic_List_UserServantEntity__o *)v5,
        v36,
        v37,
        0);
      return;
    }
LABEL_29:
    sub_2213CDC(this, method);
  }
  ServantOperationManager__SellMaterialTdWarning(v2, v34);
}


void ServantOperationManager__SetFilter2Text(
        ServantOperationManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UILabel_o *filter2Label; // x0

  filter2Label = this->fields.filter2Label;
  if ( !filter2Label )
    sub_2213CDC(0, text);
  UILabel__set_text(filter2Label, text, 0);
}


void ServantOperationManager__SetMode(
        ServantOperationManager_o *this,
        int32_t mode,
        System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.onSelect = onSelect;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelect,
    (int32_t)onSelect,
    (System_String_o *)onSelect,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationManager__SetMode_41829800(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__SetMode_41829800(ServantOperationManager_o *this, int32_t mode, const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x20
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v7; // x21
  System_Action_object__o *v8; // x22

  v4 = this;
  if ( (byte_596C700 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ServantOperationListViewItem__TypeInfo);
    this = (ServantOperationManager_o *)sub_2213A60(&Method_ServantOperationManager_OnSelectServant__);
    byte_596C700 = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_7;
  kind = v4->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(this);
  v7 = servantOperationListViewManager->m_Items[kind];
  v8 = (System_Action_object__o *)sub_2213CCC(System_Action_ServantOperationListViewItem__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)v4, Method_ServantOperationManager_OnSelectServant__, 0);
  if ( !v7 )
LABEL_7:
    sub_2213CDC(this, *(_QWORD *)&mode);
  ServantOperationListViewManager__SetMode(v7, mode, (System_Action_ServantOperationListViewItem__o *)v8, 0);
}


void ServantOperationManager__SortItem(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_2213CE4(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager___SellCombineWarning_b__51_1(
        ServantOperationManager_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
    ServantOperationManager__SellSSRareWarning(this, (const MethodInfo *)decide);
}


void ServantOperationManager___SellCombineWarning_b__51_2(
        ServantOperationManager_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  ServantOperationManager__ModifyItem(this, selectedId, method);
  ServantOperationManager__SetMode_41829800(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager___SellMaterialTdWarning_b__53_0(
        ServantOperationManager_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
    ServantOperationManager__OpenSellConfirmDialog(this, (const MethodInfo *)decide);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager___SellSSRareWarning_b__52_1(
        ServantOperationManager_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
    ServantOperationManager__SellMaterialTdWarning(this, (const MethodInfo *)decide);
}


void ServantOperationManager___SellSSRareWarning_b__52_2(
        ServantOperationManager_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  ServantOperationManager__ModifyItem(this, selectedId, method);
  ServantOperationManager__SetMode_41829800(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__filterButtonState(
        ServantOperationManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_2213CDC(0, *(_QWORD *)&state);
  ((void (__fastcall *)(struct UICommonButton_o *, int32_t, bool, const MethodInfo *))filterButton->klass->vtable._14_SetState.methodPtr)(
    filterButton,
    state,
    animation,
    filterButton->klass->vtable._14_SetState.method);
}


bool ServantOperationManager__get_IsSellEquipedCmdCodeLastServant(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}


int32_t ServantOperationManager__get_SelectMax(ServantOperationManager_o *this, const MethodInfo *method)
{
  return this->fields._SelectMax_k__BackingField;
}


int32_t ServantOperationManager__get_TotalSum(ServantOperationManager_o *this, const MethodInfo *method)
{
  return this->fields._TotalSum_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__numberAdjustment(
        ServantOperationManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  __int64 v6; // x21

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_8;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_2213CE4(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__decrementNumber((ServantOperationListViewManager_o *)this, selectNum, 0);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&selectNum);
  }
}


void ServantOperationManager__setServant(ServantOperationManager_o *this, bool flag, const MethodInfo *method)
{
  int32_t TotalSum_k__BackingField; // w8
  int32_t v4; // w8

  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  if ( flag )
    v4 = TotalSum_k__BackingField + 1;
  else
    v4 = TotalSum_k__BackingField - 1;
  this->fields._TotalSum_k__BackingField = v4;
}


void ServantOperationManager__set_IsSellEquipedCmdCodeLastServant(
        ServantOperationManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = value;
}


void ServantOperationManager__set_SelectMax(ServantOperationManager_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SelectMax_k__BackingField = value;
}


void ServantOperationManager__set_TotalSum(ServantOperationManager_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._TotalSum_k__BackingField = value;
}


void ServantOperationManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C70B & 1) == 0 )
  {
    sub_2213A60(&ServantOperationManager___c_TypeInfo);
    byte_596C70B = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantOperationManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantOperationManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantOperationManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantOperationManager___c___ctor(ServantOperationManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantOperationManager___c___SellCombineWarning_b__51_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  return NpCombineControl__CheckConfirm_55889436(x, 0);
}


bool ServantOperationManager___c___SellSSRareWarning_b__52_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_596C70C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C70C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !x )
    goto LABEL_12;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v7
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v7,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_12:
    sub_2213CDC(Instance, v5);
  }
  return ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0) && UserServantEntity__getRarity(x, 0) == 5;
}


void ServantOperationManager___c__DisplayClass44_0___ctor(
        ServantOperationManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantOperationManager___c__DisplayClass44_0___OnClickDecide_b__0(
        ServantOperationManager___c__DisplayClass44_0_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_47A29F8 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_596C70D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__);
    sub_2213A60(&ServantOperationManager___c__DisplayClass44_1_TypeInfo);
    byte_596C70D = 1;
  }
  v5 = sub_2213CCC(ServantOperationManager___c__DisplayClass44_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
        *(_BYTE *)(v5 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance(v14),
        v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__,
          0),
        !Instance) )
  {
    sub_2213CDC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v16, 0);
}


void ServantOperationManager___c__DisplayClass44_1___ctor(
        ServantOperationManager___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantOperationManager___c__DisplayClass44_1___OnClickDecide_b__1(
        ServantOperationManager___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  ServantOperationManager___c__DisplayClass44_1_o *v2; // x19
  struct ServantOperationManager___c__DisplayClass44_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *equipedMaterialList; // x19
  Il2CppObject *_4__this; // x20
  ServantCheckEquipDialog_o *monitor; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v7; // x22

  v2 = this;
  if ( (byte_596C70E & 1) == 0 )
  {
    sub_2213A60(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    this = (ServantOperationManager___c__DisplayClass44_1_o *)sub_2213A60(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__);
    byte_596C70E = 1;
  }
  if ( v2->fields.flag )
  {
    CS___8__locals1 = v2->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_13;
    equipedMaterialList = CS___8__locals1->fields.equipedMaterialList;
    if ( !equipedMaterialList )
      goto LABEL_13;
    _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
    if ( equipedMaterialList->fields._size >= 1 )
    {
      if ( _4__this )
      {
        monitor = (ServantCheckEquipDialog_o *)_4__this[7].monitor;
        v7 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_2213CCC(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
        ServantCheckEquipDialog_ClickDelegate___ctor(
          v7,
          _4__this,
          Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
          0);
        if ( monitor )
        {
          ServantCheckEquipDialog__Open_41691180(monitor, equipedMaterialList, v7, 0);
          return;
        }
      }
LABEL_13:
      sub_2213CDC(this, method);
    }
    if ( !_4__this )
      goto LABEL_13;
    ServantOperationManager__SellCombineWarning(CS___8__locals1->fields.__4__this, method);
  }
}