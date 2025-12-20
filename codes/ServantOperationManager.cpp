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
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_onSelect; // x0
  struct System_Action_ServantOperationManager_ActionKind__long____long____o *v9; // x22
  struct System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect; // t1

  onSelect = this->fields.onSelect;
  p_onSelect = (GrandQuestFolderBoardItem_o *)&this->fields.onSelect;
  v9 = onSelect;
  if ( onSelect )
  {
    p_onSelect->klass = 0;
    sub_1C9403C(p_onSelect, 0, (int32_t)servants, (int32_t)commandCodes, (System_String_o *)method, v5, v6, v7);
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
  il2cpp_array_size_t max_length; // x9
  __int64 v11; // x10
  struct ServantOperationListViewManager_array *v12; // x8
  __int64 v13; // x9

  v4 = this;
  if ( (byte_4D287DE & 1) == 0 )
  {
    sub_1C94098(&System_Action_bool__TypeInfo);
    this = (ServantOperationManager_o *)sub_1C94098(&Method_ServantOperationListViewManager_EndClickTabStatus__);
    byte_4D287DE = 1;
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
    v8 = (System_Action_bool__o *)sub_1C942E4(System_Action_bool__TypeInfo);
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
    if ( (unsigned int)v9 >= (unsigned int)max_length )
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
  if ( (unsigned int)v11 >= (unsigned int)max_length )
LABEL_23:
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v11];
  if ( !this
    || (ServantOperationListViewManager__ChangeSortKindDisp((ServantOperationListViewManager_o *)this, 0),
        (v12 = v4->fields.servantOperationListViewManager) == 0) )
  {
LABEL_16:
    sub_1C942F0(this, *(_QWORD *)&kind);
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
  if ( (byte_4D287E3 & 1) == 0 )
  {
    sub_1C94098(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    this = (ServantOperationManager_o *)sub_1C94098(&Method_ServantOperationManager_EndServantCheckEquip__);
    byte_4D287E3 = 1;
  }
  servantCheckEquipDialog = v4->fields.servantCheckEquipDialog;
  if ( isDecide )
  {
    v6 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1C942E4(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
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
    sub_1C942F0(this, isDecide);
  }
  if ( !servantCheckEquipDialog )
    goto LABEL_8;
  ServantCheckEquipDialog__Close(v4->fields.servantCheckEquipDialog, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__CreateList(ServantOperationManager_o *this, int32_t kind, const MethodInfo *method)
{
  UILabel_o *qpDataLabel; // x21
  int32_t totalQP; // w22
  System_String_o *NumberFormat; // x0
  __int64 v8; // x1
  UILabel_o *mpDataLabel; // x21
  UILabel_o *rpDataLabel; // x21
  int32_t Count; // w21
  BalanceConfig_c *v12; // x0
  int ServantSellSelectMax; // w21
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v15; // x22
  Il2CppObject *v16; // x23
  Il2CppObject *v17; // x0
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  struct ServantOperationListViewManager_array *v19; // x8
  struct ServantOperationListViewManager_array *v20; // x8
  struct ServantOperationListViewManager_array *v21; // x8
  struct ServantOperationListViewManager_array *v22; // x8
  struct ServantOperationListViewManager_array *v23; // x8
  const MethodInfo *v24; // x2
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D287DD & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_12533/*"SUM_INFO"*/);
    byte_4D287DD = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  ServantOperationManager__Init(this, *(const MethodInfo **)&kind);
  qpDataLabel = this->fields.qpDataLabel;
  totalQP = this->fields.totalQP;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
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
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)NumberFormat, 0);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  UserServantMaster__getCount((UserServantMaster_o *)NumberFormat, &servantEquipSum[1], servantEquipSum, 0, 0);
  v12 = BalanceConfig_TypeInfo;
  ServantSellSelectMax = servantEquipSum[1] + Count + servantEquipSum[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( ServantSellSelectMax >= v12->static_fields->ServantSellSelectMax )
  {
    ServantSellSelectMax = v12->static_fields->ServantSellSelectMax;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      ServantSellSelectMax = BalanceConfig_TypeInfo->static_fields->ServantSellSelectMax;
    }
  }
  this->fields._SelectMax_k__BackingField = ServantSellSelectMax;
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12533/*"SUM_INFO"*/, 0);
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = this->fields._SelectMax_k__BackingField;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  NumberFormat = System_String__Format_64459052(v15, v16, v17, 0);
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
  v19 = this->fields.servantOperationListViewManager;
  if ( !v19 )
    goto LABEL_42;
  if ( !LODWORD(v19->max_length) )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v19->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 0, 0, 0);
  v20 = this->fields.servantOperationListViewManager;
  if ( !v20 )
    goto LABEL_42;
  if ( LODWORD(v20->max_length) <= 1 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v20->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0);
  if ( !NumberFormat )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0);
  v21 = this->fields.servantOperationListViewManager;
  if ( !v21 )
    goto LABEL_42;
  if ( LODWORD(v21->max_length) <= 1 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v21->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 1, 0, 0);
  v22 = this->fields.servantOperationListViewManager;
  if ( !v22 )
    goto LABEL_42;
  if ( LODWORD(v22->max_length) <= 2 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v22->m_Items[2];
  if ( !NumberFormat
    || (NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)NumberFormat,
                                            0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0),
        (v23 = this->fields.servantOperationListViewManager) == 0) )
  {
LABEL_42:
    sub_1C942F0(NumberFormat, v8);
  }
  if ( LODWORD(v23->max_length) <= 2 )
LABEL_43:
    sub_1C942F8(NumberFormat);
  NumberFormat = (System_String_o *)v23->m_Items[2];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 2, 0, 0);
  ServantOperationManager__ChangeList(this, kind, v24);
}


void ServantOperationManager__DestroyList(ServantOperationManager_o *this, const MethodInfo *method)
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
        sub_1C942F8(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v4];
      if ( !this )
        break;
      ServantOperationListViewManager__DestroyList((ServantOperationListViewManager_o *)this, 0);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C942F0(this, method);
  }
}


void ServantOperationManager__EndCloseSelectFilterKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  ;
}


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
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C942F0(this, isDecide);
  ServantOperationListViewManager__EndSelectFilterKind((ServantOperationListViewManager_o *)this, isDecide, 0);
}


void ServantOperationManager__EndServantCheckEquip(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x0
  const MethodInfo *v6; // x1

  servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
  if ( !servantCheckEquipDialog )
    sub_1C942F0(0, isDecide);
  ServantCheckEquipDialog__Close(servantCheckEquipDialog, 0);
  if ( isDecide )
    ServantOperationManager__SellCombineWarning(this, v6);
}


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
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C942F0(this, svtId);
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
  int32_t onSelect; // w26
  int32_t v12; // w27
  int32_t v13; // w28
  bool v14; // zf
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x24
  unsigned int v17; // w28
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
  if ( (byte_4D287E2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantOperationManager_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D287E2 = 1;
  }
  if ( !v3 )
    goto LABEL_62;
  size = v3->fields._size;
  v5 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0);
    v7 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( v3->fields._size >= 1 )
    {
      for ( i = 0; i < v3->fields._size; ++i )
      {
        this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                              v3,
                                              i,
                                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
        if ( !this || !v8 )
          goto LABEL_62;
        v10 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v8,
                (int32_t)this->fields.onSelect,
                (const MethodInfo_34AC008 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          onSelect = (int32_t)v10->fields.onSelect;
          if ( v3->fields._size >= 1 )
          {
            v12 = 0;
            v13 = 0;
            while ( 1 )
            {
              this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    v3,
                                                    v13,
                                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
              if ( !this )
                break;
              ++v13;
              v14 = onSelect == LODWORD(this->fields.onSelect);
              onSelect = (int32_t)v10->fields.onSelect;
              if ( v14 )
                ++v12;
              if ( v13 >= v3->fields._size )
                goto LABEL_20;
            }
LABEL_62:
            sub_1C942F0(this, selectEquipedCommandCodeServantList);
          }
          v12 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v8,
            onSelect,
            v12,
            (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
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
          sub_1C942F8(this);
        v18 = AllList->m_Items[v17];
        if ( !v18 )
          goto LABEL_62;
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v20;
        *(_QWORD *)&v34.fields.fakeValue = v19;
        this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v34, 0);
        if ( !v16 )
          goto LABEL_62;
        this = (ServantOperationManager_o *)DataMasterBase_object__object__int___GetEntity(
                                              v16,
                                              (int32_t)this,
                                              (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v35.fields.currentCryptoKey = v22;
            *(_QWORD *)&v35.fields.fakeValue = v21;
            this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
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
                *(const MethodInfo_384DE10 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
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
                                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
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
                                                  (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
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
                                              (const MethodInfo_34ABD80 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[0];
  if ( !this )
LABEL_5:
    sub_1C942F0(this, method);
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
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[2];
  if ( !this )
LABEL_5:
    sub_1C942F0(this, id);
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
    goto LABEL_12;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C942F8(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      if ( HIDWORD(this[2].fields.filter2Button) != 2 )
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
LABEL_12:
    sub_1C942F0(this, id);
  }
LABEL_9:
  LODWORD(this) = -1;
  return (int)this;
}


void ServantOperationManager__Init(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0

  allReleaseButton = this->fields.allReleaseButton;
  this->fields._TotalSum_k__BackingField = 0;
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
    sub_1C942F0(allReleaseButton, method);
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
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C942F0(this, method);
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
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C942F0(this, selectedId);
  ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, selectedId, 0);
}


void ServantOperationManager__ModifyListItem(
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
        sub_1C942F8(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, userSvtId, 0);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C942F0(this, userSvtId);
  }
}


void ServantOperationManager__OnClickDecide(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ServantOperationListViewManager_o *SelectedServantIdList; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_long__o *v12; // x22
  struct System_Collections_Generic_List_long__o **p_selectUserServantIdList; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_long__o *v20; // x23
  struct System_Collections_Generic_List_long__o **p_selectUserCommandCodeIdList; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
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
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  ServantOperationManager_o *v45; // x0
  const MethodInfo *v46; // x2
  int m_CancellationTokenSource; // w8
  int v48; // w26
  Il2CppObject *current; // x24
  Il2CppObject *Instance; // x0
  __int64 v51; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v53; // x1
  Il2CppObject *Entity; // x0
  __int64 v55; // x1
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  Il2CppObject *v58; // x21
  System_String_o *v59; // x19
  System_Collections_Generic_List_object__o *ExchangeSvtCombineExpCampaign; // x0
  Il2CppObject *Item; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x21
  Il2CppObject *v64; // x22
  System_String_o *v65; // x23
  System_String_o *v66; // x24
  CommonConfirmDialog_ClickDelegate_o *v67; // x25
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  System_Collections_Generic_List_ServantOperationListViewItem__o *v71; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v72; // x22
  _QWORD *v73; // x0
  int32_t v74; // w20
  System_Reflection_MethodBase_o *v75; // x0
  const MethodInfo *v76; // x1
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+40h] [xbp-A0h] BYREF
  int v78; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4D287E1 & 1) == 0 )
  {
    sub_1C94098(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__);
    sub_1C94098(&Method_ServantOperationManager_OnClickDecide__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__);
    sub_1C94098(&ServantOperationManager___c__DisplayClass44_0_TypeInfo);
    sub_1C94098(&StringLiteral_5758/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/);
    sub_1C94098(&StringLiteral_3693/*"COMMON_CONFIRM_NO"*/);
    sub_1C94098(&StringLiteral_3698/*"COMMON_CONFIRM_YES"*/);
    sub_1C94098(&StringLiteral_5756/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D287E1 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  v78 = 0;
  v3 = sub_1C942E4(ServantOperationManager___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_68;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields._TotalSum_k__BackingField >= 1 )
  {
    v12 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v12,
      (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserServantIdList = v12;
    p_selectUserServantIdList = &this->fields.selectUserServantIdList;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectUserServantIdList,
      (int32_t)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserCommandCodeIdList = v20;
    p_selectUserCommandCodeIdList = &this->fields.selectUserCommandCodeIdList;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectUserCommandCodeIdList,
      (int32_t)v20,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    servantOperationListViewManager = this->fields.servantOperationListViewManager;
    if ( !servantOperationListViewManager )
      goto LABEL_68;
    if ( !LODWORD(servantOperationListViewManager->max_length) )
      goto LABEL_69;
    SelectedServantIdList = servantOperationListViewManager->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    v29 = *p_selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   0);
    if ( !v29 )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      v29,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_3853074 *)Method_System_Collections_Generic_List_long__AddRange__);
    v30 = this->fields.servantOperationListViewManager;
    if ( !v30 )
      goto LABEL_68;
    if ( LODWORD(v30->max_length) <= 1 )
      goto LABEL_69;
    SelectedServantIdList = v30->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    selectUserServantIdList = this->fields.selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   0);
    if ( !selectUserServantIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      selectUserServantIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_3853074 *)Method_System_Collections_Generic_List_long__AddRange__);
    v32 = this->fields.servantOperationListViewManager;
    if ( !v32 )
      goto LABEL_68;
    if ( LODWORD(v32->max_length) <= 2 )
      goto LABEL_69;
    SelectedServantIdList = v32->m_Items[2];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    selectUserCommandCodeIdList = this->fields.selectUserCommandCodeIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedCommandCodeIdList(
                                                                   SelectedServantIdList,
                                                                   0);
    if ( !selectUserCommandCodeIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      selectUserCommandCodeIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_3853074 *)Method_System_Collections_Generic_List_long__AddRange__);
    v34 = this->fields.servantOperationListViewManager;
    if ( !v34 )
      goto LABEL_68;
    if ( !LODWORD(v34->max_length) )
      goto LABEL_69;
    SelectedServantIdList = v34->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
                                                                   SelectedServantIdList,
                                                                   0);
    v35 = this->fields.servantOperationListViewManager;
    if ( !v35 )
      goto LABEL_68;
    if ( LODWORD(v35->max_length) <= 1 )
LABEL_69:
      sub_1C942F8(SelectedServantIdList);
    v36 = (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedServantIdList;
    SelectedServantIdList = v35->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    EquipMaterialList = ServantOperationListViewManager__GetEquipMaterialList(SelectedServantIdList, 0);
    *(_QWORD *)(v3 + 16) = EquipMaterialList;
    v38 = (System_Collections_Generic_List_ServantOperationListViewItem__o **)(v3 + 16);
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)EquipMaterialList, v39, v40, v41, v42, v43, v44);
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                                                   v45,
                                                                   v36,
                                                                   v46);
    if ( !SelectedServantIdList )
      goto LABEL_68;
    m_CancellationTokenSource = (int)SelectedServantIdList->fields.m_CancellationTokenSource;
    SelectedServantIdList = (ServantOperationListViewManager_o *)this->fields.selectUserServantIdList;
    this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = m_CancellationTokenSource > 0;
    if ( !SelectedServantIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___GetEnumerator(
      &v77,
      (System_Collections_Generic_List_long__o *)SelectedServantIdList,
      (const MethodInfo_385393C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v48 = 0;
    v79 = v77;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v79,
              (const MethodInfo_35E9680 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v79.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C942F0(0, v51);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1C942F0(0, v53);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_1C942F0(0, v55);
      v48 |= UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0);
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v79,
      (const MethodInfo_35E967C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    if ( (v48 & 1) != 0 )
    {
      v56 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v56 = (_QWORD *)sub_1C940B0(Method_ServantOperationManager_OnClickDecide__);
      v57 = (System_Reflection_MethodBase_o *)sub_1C9407C(v56, v56[4]);
      OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0, 0);
      v58 = (Il2CppObject *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v59 = LocalizationManager__Get((System_String_o *)StringLiteral_5756/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SelectedServantIdList = (ServantOperationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
                     (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( Item )
            {
              v78 = SLODWORD(Item[3].klass) / 1000;
              v58 = (Il2CppObject *)System_Int32__ToString((int32_t)&v78, 0);
            }
          }
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_5758/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, 0);
        v63 = System_String__Format_64459052(v62, v58, v58, 0);
        v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_3698/*"COMMON_CONFIRM_YES"*/, 0);
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_NO"*/, 0);
        v67 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v67,
          (Il2CppObject *)v3,
          Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__,
          0);
        if ( v64 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v64,
            v59,
            v63,
            v65,
            v66,
            v67,
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
LABEL_68:
      sub_1C942F0(SelectedServantIdList, v5);
    }
    if ( !*v38 )
      goto LABEL_68;
    if ( (*v38)->fields._size < 1 )
    {
      if ( !*p_selectUserServantIdList )
        goto LABEL_68;
      if ( (*p_selectUserServantIdList)->fields._size > 0 )
        goto LABEL_57;
      if ( !*p_selectUserCommandCodeIdList )
        goto LABEL_68;
      if ( (*p_selectUserCommandCodeIdList)->fields._size < 1 )
      {
        v73 = Method_ServantOperationManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
          v73 = (_QWORD *)sub_1C940B0(Method_ServantOperationManager_OnClickDecide__);
        v74 = 2;
      }
      else
      {
LABEL_57:
        v73 = Method_ServantOperationManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
          v73 = (_QWORD *)sub_1C940B0(Method_ServantOperationManager_OnClickDecide__);
        v74 = 0;
      }
      v75 = (System_Reflection_MethodBase_o *)sub_1C9407C(v73, v73[4]);
      OverwriteAssetSoundName__PlaySystemSe(v75, v74, 0, 0);
      ServantOperationManager__SellCombineWarning(this, v76);
    }
    else
    {
      v68 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v68 = (_QWORD *)sub_1C940B0(Method_ServantOperationManager_OnClickDecide__);
      v69 = (System_Reflection_MethodBase_o *)sub_1C9407C(v68, v68[4]);
      OverwriteAssetSoundName__PlaySystemSe(v69, 0, 0, 0);
      servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
      v71 = *v38;
      v72 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1C942E4(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v72,
        (Il2CppObject *)this,
        Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0);
      if ( !servantCheckEquipDialog )
        goto LABEL_68;
      ServantCheckEquipDialog__Open_35519980(servantCheckEquipDialog, v71, v72, 0);
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
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C942F0(this, method);
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
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C942F0(this, method);
  ServantOperationListViewManager__OnClickFilterKind((ServantOperationListViewManager_o *)this, 0);
}


void ServantOperationManager__OnClickReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t TotalSum_k__BackingField; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D287E8 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantOperationManager_OnClickReleaseAll__);
    byte_4D287E8 = 1;
  }
  v3 = Method_ServantOperationManager_OnClickReleaseAll__;
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  if ( (*((_BYTE *)Method_ServantOperationManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_ServantOperationManager_OnClickReleaseAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  if ( TotalSum_k__BackingField <= 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    ServantOperationManager__ReleaseAll(this, v6);
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
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C942F0(this, method);
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
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C942F0(this, method);
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

  if ( (byte_4D287EA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    byte_4D287EA = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_22;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C942F8(UserCommandCodeId);
  v11 = servantOperationListViewManager->m_Items[kind];
  if ( !v11 || !selectItem )
    goto LABEL_22;
  if ( v11->fields.kind == 2 )
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
            *(const MethodInfo_3852E68 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
                                         (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_1C942F0(UserCommandCodeId, v8);
  }
  UserCommandCodeId = ServantOperationListViewItem__get_UserSvtId(selectItem, 0);
  if ( !v5 )
    goto LABEL_22;
  v15 = v5->fields._items;
  v16 = Method_System_Collections_Generic_List_long__Add__;
  ++v5->fields._version;
  if ( !v15 )
    goto LABEL_22;
  v17 = v5->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v5,
      UserCommandCodeId,
      *(const MethodInfo_3852E68 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v17 + 1;
    v15->m_Items[v17] = UserCommandCodeId;
  }
  UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                 v5,
                                 (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v6 )
    goto LABEL_22;
LABEL_21:
  v18 = (System_Int64_array *)UserCommandCodeId;
  v19 = System_Collections_Generic_List_long___ToArray(
          v6,
          (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 2, v18, v19, v20);
}


void ServantOperationManager__OpenSellConfirmDialog(ServantOperationManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x0
  System_Int64_array *v4; // x20
  System_Int64_array *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4D287E7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    byte_4D287E7 = 1;
  }
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList
    || (selectUserServantIdList = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                               selectUserServantIdList,
                                                                               (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.selectUserCommandCodeIdList) )
  {
    sub_1C942F0(selectUserServantIdList, method);
  }
  v4 = (System_Int64_array *)selectUserServantIdList;
  v5 = System_Collections_Generic_List_long___ToArray(
         this->fields.selectUserCommandCodeIdList,
         (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 1, v4, v5, v6);
}


void ServantOperationManager__RefrashListDisp(ServantOperationManager_o *this, const MethodInfo *method)
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
  if ( (byte_4D287DF & 1) == 0 )
  {
    this = (ServantOperationManager_o *)sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D287DF = 1;
  }
  *(_QWORD *)mana = 0;
  rarePri = 0;
  servantOperationListViewManager = v2->fields.servantOperationListViewManager;
  *(_QWORD *)&v2->fields.totalQP = 0;
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
        sub_1C942F8(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v5];
      if ( !this )
        goto LABEL_25;
      ServantOperationListViewManager__SumItems((ServantOperationListViewManager_o *)this, &mana[1], mana, &rarePri, 0);
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
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v6, 0);
  if ( !qpDataLabel )
    goto LABEL_25;
  UILabel__set_text(qpDataLabel, (System_String_o *)this, 0);
  mpDataLabel = v2->fields.mpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v2->fields.totalMana, 0);
  if ( !mpDataLabel )
    goto LABEL_25;
  UILabel__set_text(mpDataLabel, (System_String_o *)this, 0);
  rpDataLabel = v2->fields.rpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v2->fields.totalRarePri, 0);
  if ( !rpDataLabel )
    goto LABEL_25;
  UILabel__set_text(rpDataLabel, (System_String_o *)this, 0);
  this = (ServantOperationManager_o *)v2->fields.allReleaseButton;
  if ( !this )
    goto LABEL_25;
  v11 = v2->fields._TotalSum_k__BackingField <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    v11,
    1,
    this->klass[1]._1.implementedInterfaces);
  this = (ServantOperationManager_o *)v2->fields.decideButton;
  if ( !this )
LABEL_25:
    sub_1C942F0(this, method);
  if ( v2->fields._TotalSum_k__BackingField <= 0 )
    v12 = 3;
  else
    v12 = 0;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    v12,
    1,
    this->klass[1]._1.implementedInterfaces);
}


void ServantOperationManager__ReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v5; // w21
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v7; // x21
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x0
  const MethodInfo *v10; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4D287E9 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    this = (ServantOperationManager_o *)sub_1C94098(&StringLiteral_12533/*"SUM_INFO"*/);
    byte_4D287E9 = 1;
  }
  servantOperationListViewManager = v2->fields.servantOperationListViewManager;
  v2->fields._TotalSum_k__BackingField = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_14;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C942F8(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v5];
      if ( !this )
        break;
      ServantOperationListViewManager__ReleaseAll((ServantOperationListViewManager_o *)this, 0);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_9;
    }
LABEL_14:
    sub_1C942F0(this, method);
  }
LABEL_9:
  selectDoneLabel = v2->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12533/*"SUM_INFO"*/, 0);
  TotalSum_k__BackingField = v2->fields._TotalSum_k__BackingField;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = v2->fields._SelectMax_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  this = (ServantOperationManager_o *)System_String__Format_64459052(v7, v8, v9, 0);
  if ( !selectDoneLabel )
    goto LABEL_14;
  UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0);
  ServantOperationManager__RefrashListDisp(v2, v10);
}


void ServantOperationManager__SellCombineWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  void *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v14; // x22
  System_Collections_Generic_List_UserServantEntity__o **v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v26; // x1
  Il2CppObject *Entity; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_List_object__o *v34; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x8
  System_Collections_Generic_List_object__o *v39; // x22
  System_Predicate_object__o *v40; // x23
  Il2CppObject *v41; // x24
  struct ServantOperationManager___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  const MethodInfo *v49; // x2
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x19
  System_Collections_Generic_List_UserServantEntity__o *v51; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v52; // x22
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D287E4 & 1) == 0 )
  {
    sub_1C94098(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity___ctor___79012248);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C94098(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_ServantOperationManager___c__SellCombineWarning_b__51_0__);
    sub_1C94098(&Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__);
    sub_1C94098(&ServantOperationManager___c__DisplayClass51_0_TypeInfo);
    sub_1C94098(&ServantOperationManager___c_TypeInfo);
    byte_4D287E4 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v3 = sub_1C942E4(ServantOperationManager___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_31;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_31;
  size = selectUserServantIdList->fields._size;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_59156080(
    v14,
    size,
    (const MethodInfo_386A670 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___79012248);
  *(_QWORD *)(v3 + 24) = v14;
  v15 = (System_Collections_Generic_List_UserServantEntity__o **)(v3 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v14, v16, v17, v18, v19, v20, v21);
  v4 = this->fields.selectUserServantIdList;
  if ( !v4 )
    goto LABEL_31;
  System_Collections_Generic_List_long___GetEnumerator(
    &v53,
    (System_Collections_Generic_List_long__o *)v4,
    (const MethodInfo_385393C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v54 = v53;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v54,
            (const MethodInfo_35E9680 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v54.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C942F0(0, v24);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1C942F0(0, v26);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v34 = (System_Collections_Generic_List_object__o *)*v15;
    if ( !*v15 )
      sub_1C942F0(0, Entity);
    items = v34->fields._items;
    v36 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v34->fields._version;
    if ( !items )
      sub_1C942F0(v34, Entity);
    v37 = v34->fields._size;
    if ( (unsigned int)v37 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        Entity,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &items->obj.klass + v37;
      v34->fields._size = v37 + 1;
      v38[4] = (Il2CppClass *)Entity;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)Entity, v28, v29, v30, v31, v32, v33);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v54,
    (const MethodInfo_35E967C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v4 = ServantOperationManager___c_TypeInfo;
  v39 = (System_Collections_Generic_List_object__o *)*v15;
  if ( !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v4 = ServantOperationManager___c_TypeInfo;
  }
  v40 = *(System_Predicate_object__o **)(*((_QWORD *)v4 + 23) + 8LL);
  if ( !v40 )
  {
    if ( !*((_DWORD *)v4 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ServantOperationManager___c_TypeInfo;
    }
    v41 = (Il2CppObject *)**((_QWORD **)v4 + 23);
    v40 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(v40, v41, Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, 0);
    static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Predicate_UserServantEntity__o *)v40;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__51_0, (int32_t)v40, v43, v44, v45, v46, v47, v48);
  }
  if ( !v39 )
    goto LABEL_31;
  if ( System_Collections_Generic_List_object___Find(
         v39,
         (System_Predicate_T__o *)v40,
         (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v51 = *(System_Collections_Generic_List_UserServantEntity__o **)(v3 + 24);
    v52 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1C942E4(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v52,
      (Il2CppObject *)v3,
      Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__,
      0);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellCombineWarning(servantCheckWarningDialog, v51, v52, 0);
      return;
    }
LABEL_31:
    sub_1C942F0(v4, v5);
  }
  ServantOperationManager__SellSSRareWarning(this, *v15, v49);
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
  Il2CppObject *v16; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  __int64 v19; // x0
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  Il2CppObject *v24; // x24
  NetworkManager_c *v25; // x0
  int64_t userIdNumber; // x25
  __int64 v27; // x0
  __int64 v28; // x1
  UserServantCollectionEntity_o *v29; // x0
  UserServantCollectionEntity_o *v30; // x23
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  ServantCheckWarningDialog_o *v47; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v48; // x22
  Il2CppObject *v49; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+10h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v2 = this;
  if ( (byte_4D287E6 & 1) == 0 )
  {
    sub_1C94098(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity___ctor___79012248);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__);
    this = (ServantOperationManager_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D287E6 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  tdInfo = 0;
  selectUserServantIdList = v2->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_54;
  size = selectUserServantIdList->fields._size;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_59156080(
    v5,
    size,
    (const MethodInfo_386A670 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___79012248);
  this = (ServantOperationManager_o *)v2->fields.selectUserServantIdList;
  v49 = (Il2CppObject *)v2;
  if ( !this )
    goto LABEL_54;
  System_Collections_Generic_List_long___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_385393C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v52 = v50;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v52,
            (const MethodInfo_35E9680 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v52.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C942F0(0, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1C942F0(0, v10);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v13 = Entity;
    if ( !Entity )
      sub_1C942F0(0, v12);
    if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)Entity, 0) )
    {
      v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v14 )
        sub_1C942F0(0, v15);
      v16 = DataManager__GetMasterData_object_(
              (DataManager_o *)v14,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
      klass = v13[5].klass;
      monitor = v13[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v53.fields.currentCryptoKey = klass;
      *(_QWORD *)&v53.fields.fakeValue = monitor;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v53, 0);
      if ( !v16 )
        sub_1C942F0(v19, (unsigned int)v19);
      v20 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
              v19,
              (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v21 )
        sub_1C942F0(0, v22);
      v24 = DataManager__GetMasterData_object_(
              (DataManager_o *)v21,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      v25 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v25 = NetworkManager_TypeInfo;
      }
      if ( !v20 )
        sub_1C942F0(v25, v23);
      userIdNumber = v25->static_fields->userIdNumber;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v20[2],
              0);
      if ( !v24 )
        sub_1C942F0(v27, v28);
      v29 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v24, userIdNumber, v27, 0);
      v30 = v29;
      if ( v29 && UserServantCollectionEntity__IsGet(v29, 0) )
      {
        UserServantCollectionEntity__getTreasureDeviceInfo(v30, &tdInfo, -1, -1, 0);
        v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v31 )
          sub_1C942F0(0, v32);
        v33 = DataManager__GetMasterData_object_(
                (DataManager_o *)v31,
                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !tdInfo )
          sub_1C942F0(v33, v34);
        if ( !v33 )
          sub_1C942F0(0, v34);
        v35 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                tdInfo->fields.id,
                (const MethodInfo_345B4C0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !v35 )
          sub_1C942F0(0, v36);
        if ( v30->fields.treasureDeviceLv1 != LODWORD(v35[3].klass) )
        {
          if ( !v5 )
            sub_1C942F0(v35, v36);
          items = v5->fields._items;
          v44 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C942F0(v35, v36);
          v45 = v5->fields._size;
          if ( (unsigned int)v45 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v13,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + v45;
            v5->fields._size = v45 + 1;
            v46[4] = (Il2CppClass *)v13;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v46 + 4), (int32_t)v13, v37, v38, v39, v40, v41, v42);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v52,
    (const MethodInfo_35E967C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( !v5 )
    goto LABEL_54;
  if ( v5->fields._size >= 1 )
  {
    v47 = (ServantCheckWarningDialog_o *)v49[8].klass;
    v48 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1C942E4(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v48,
      v49,
      Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__,
      0);
    if ( v47 )
    {
      ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        v47,
        (System_Collections_Generic_List_UserServantEntity__o *)v5,
        v48,
        0);
      return;
    }
LABEL_54:
    sub_1C942F0(this, method);
  }
  ServantOperationManager__OpenSellConfirmDialog((ServantOperationManager_o *)v49, method);
}


void ServantOperationManager__SellSSRareWarning(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  ServantOperationManager___c_c *v5; // x0
  System_Predicate_object__o *_9__52_0; // x21
  Il2CppObject *v7; // x22
  struct ServantOperationManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x1
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v17; // x22

  if ( (byte_4D287E5 & 1) == 0 )
  {
    sub_1C94098(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_1C94098(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C94098(&Method_ServantOperationManager__SellSSRareWarning_b__52_1__);
    sub_1C94098(&Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__);
    sub_1C94098(&ServantOperationManager___c_TypeInfo);
    byte_4D287E5 = 1;
  }
  v5 = ServantOperationManager___c_TypeInfo;
  if ( !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v5 = ServantOperationManager___c_TypeInfo;
  }
  _9__52_0 = (System_Predicate_object__o *)v5->static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ServantOperationManager___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__52_0 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(_9__52_0, v7, Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, 0);
    static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    static_fields->__9__52_0 = (struct System_Predicate_UserServantEntity__o *)_9__52_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__52_0,
      (int32_t)_9__52_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !userSvtEntityList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)userSvtEntityList,
         (System_Predicate_T__o *)_9__52_0,
         (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v17 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1C942E4(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ServantOperationManager__SellSSRareWarning_b__52_1__,
      0);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellSSRareWarning(servantCheckWarningDialog, userSvtEntityList, v17, 0);
      return;
    }
LABEL_14:
    sub_1C942F0(v5, userSvtEntityList);
  }
  ServantOperationManager__SellMaterialTdWarning(this, v15);
}


void ServantOperationManager__SetFilter2Text(
        ServantOperationManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UILabel_o *filter2Label; // x0

  filter2Label = this->fields.filter2Label;
  if ( !filter2Label )
    sub_1C942F0(0, text);
  UILabel__set_text(filter2Label, text, 0);
}


void ServantOperationManager__SetMode(
        ServantOperationManager_o *this,
        int32_t mode,
        System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onSelect = onSelect;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onSelect,
    (int32_t)onSelect,
    (int32_t)onSelect,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationManager__SetMode_35659176(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__SetMode_35659176(ServantOperationManager_o *this, int32_t mode, const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x20
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v7; // x21
  System_Action_object__o *v8; // x22

  v4 = this;
  if ( (byte_4D287E0 & 1) == 0 )
  {
    sub_1C94098(&System_Action_ServantOperationListViewItem__TypeInfo);
    this = (ServantOperationManager_o *)sub_1C94098(&Method_ServantOperationManager_OnSelectServant__);
    byte_4D287E0 = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_7;
  kind = v4->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C942F8(this);
  v7 = servantOperationListViewManager->m_Items[kind];
  v8 = (System_Action_object__o *)sub_1C942E4(System_Action_ServantOperationListViewItem__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)v4, Method_ServantOperationManager_OnSelectServant__, 0);
  if ( !v7 )
LABEL_7:
    sub_1C942F0(this, *(_QWORD *)&mode);
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
    sub_1C942F8(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C942F0(this, method);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
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


void ServantOperationManager__filterButtonState(
        ServantOperationManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_1C942F0(0, state);
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
        sub_1C942F8(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__decrementNumber((ServantOperationListViewManager_o *)this, selectNum, 0);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C942F0(this, *(_QWORD *)&selectNum);
  }
}


void ServantOperationManager__setServant(ServantOperationManager_o *this, bool flag, const MethodInfo *method)
{
  int v3; // w9

  if ( flag )
    v3 = 1;
  else
    v3 = -1;
  this->fields._TotalSum_k__BackingField += v3;
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D287EB & 1) == 0 )
  {
    sub_1C94098(&ServantOperationManager___c_TypeInfo);
    byte_4D287EB = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ServantOperationManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantOperationManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantOperationManager___c_TypeInfo->static_fields,
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
  return NpCombineControl__CheckConfirm_49454492(x, 0);
}


bool ServantOperationManager___c___SellSSRareWarning_b__52_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4D287EC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D287EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !x )
    goto LABEL_12;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v10, 0);
  if ( !v6
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v6,
                     (int32_t)Instance,
                     (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_12:
    sub_1C942F0(Instance, v5);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4D287ED & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__);
    sub_1C94098(&ServantOperationManager___c__DisplayClass44_1_TypeInfo);
    byte_4D287ED = 1;
  }
  v5 = sub_1C942E4(ServantOperationManager___c__DisplayClass44_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__,
          0),
        !Instance) )
  {
    sub_1C942F0(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31583752((CommonUI_o *)Instance, v15, 0);
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
  if ( (byte_4D287EE & 1) == 0 )
  {
    sub_1C94098(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    this = (ServantOperationManager___c__DisplayClass44_1_o *)sub_1C94098(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__);
    byte_4D287EE = 1;
  }
  if ( v2->fields.flag )
  {
    CS___8__locals1 = v2->fields.CS___8__locals1;
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
      v7 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1C942E4(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v7,
        _4__this,
        Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0);
      if ( monitor )
      {
        ServantCheckEquipDialog__Open_35519980(monitor, equipedMaterialList, v7, 0);
        return;
      }
LABEL_12:
      sub_1C942F0(this, method);
    }
    ServantOperationManager__SellCombineWarning(CS___8__locals1->fields.__4__this, method);
  }
}


void ServantOperationManager___c__DisplayClass51_0___ctor(
        ServantOperationManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantOperationManager___c__DisplayClass51_0___SellCombineWarning_b__1(
        ServantOperationManager___c__DisplayClass51_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
  {
    if ( !this->fields.__4__this )
      sub_1C942F0(this, decide);
    ServantOperationManager__SellSSRareWarning(this->fields.__4__this, this->fields.userSvtEntityList, method);
  }
}