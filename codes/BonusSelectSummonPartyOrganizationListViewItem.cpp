// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyOrganizationListViewItem___ctor(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t index,
        ServantEntity_o *servantEntity,
        GachaBonusSelectEntity_o *gachaBonusSelectEntity,
        const MethodInfo *method)
{
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct ServantLimitMaster_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct ServantTreasureDvcMaster_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct UserServantMaster_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UserServantMaster_o *userServantMaster; // x21
  __int64 v61; // x20
  __int64 v62; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // kr00_16
  __int64 v64; // x0
  __int64 v65; // x1
  System_Collections_Generic_List_UserServantEntity__o *v66; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v67; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__8_0; // x21
  Il2CppObject *v70; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  struct UserServantEntity_o *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  if ( (byte_4187DCF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v14);
    sub_B2C35C(&Method_System_Func_UserServantEntity__int___ctor__, v15);
    sub_B2C35C(&System_Func_UserServantEntity__int__TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__, v18);
    sub_B2C35C(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v19);
    byte_4187DCF = 1;
  }
  userServantList = 0LL;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.servantEntity = servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.gachaBonusSelectEntity = gachaBonusSelectEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.gachaBonusSelectEntity,
    (System_Int32_array **)gachaBonusSelectEntity,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  this->fields.servantExceedMaster = Master_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantExceedMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  this->fields.svtLimitMaster = v39;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtLimitMaster,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (struct ServantTreasureDvcMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = v46;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtTdMaster,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (struct UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.userServantMaster = v53;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  userServantMaster = this->fields.userServantMaster;
  if ( servantEntity )
  {
    v62 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v61 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v61 = *(_QWORD *)&v63.fields.fakeValue;
    v62 = *(_QWORD *)&v63.fields.currentCryptoKey;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v87.fields.currentCryptoKey = v62;
  *(_QWORD *)&v87.fields.fakeValue = v61;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v87, 0LL);
  if ( !userServantMaster )
    sub_B2C434(v64, v65);
  if ( UserServantMaster__TryGetEntityListBySvtId(userServantMaster, &userServantList, v64, 1, 0LL) )
  {
    v66 = userServantList;
    v67 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v67 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    static_fields = v67->static_fields;
    _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v67);
        static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      }
      v70 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__8_0,
        v70,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__,
        (const MethodInfo_27127B0 *)Method_System_Func_UserServantEntity__int___ctor__);
      v71 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      v71->__9__8_0 = (struct System_Func_UserServantEntity__int__o *)_9__8_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v71->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
    }
    v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v66,
                                                                 (System_Func_TSource__TKey__o *)_9__8_0,
                                                                 (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v79 = (struct UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                          v78,
                                          (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = v79;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.userServantEntity,
      (System_Int32_array **)v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Empty(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  this->fields.userServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.servantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.lineupEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.lineupEntity, 0LL, v15, v16, v17, v18, v19, v20);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !item )
    sub_B2C434(this, 0LL);
  BonusSelectSummonPartyOrganizationListViewItem__Modify_25555292(
    this,
    item->fields.lineupEntity,
    item->fields.servantEntity,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_25550220(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t gachaId,
        int32_t slot,
        int32_t giftId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  void *EntityList; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  signed int max_length; // w9
  unsigned int v20; // w10
  __int64 v21; // x23
  GachaBonusSelectLineupEntity_o *v22; // x10
  ServantEntity_o *v23; // x2
  GachaBonusSelectLineupEntity_o *v24; // x1
  __int64 v25; // x0
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-48h] BYREF
  GachaBonusSelectEntity_o *selectEntity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4187DD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, *(_QWORD *)&gachaId);
    sub_B2C35C(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    byte_4187DD1 = 1;
  }
  selectEntity = 0LL;
  gachaBonusSelectLineupEntities = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  EntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !EntityList )
    goto LABEL_32;
  if ( !GachaBonusSelectMaster__TryGetEntitySlot(
          (GachaBonusSelectMaster_o *)EntityList,
          &selectEntity,
          gachaId,
          slot,
          0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !selectEntity || !EntityList )
    goto LABEL_32;
  EntityList = (void *)GachaBonusSelectLineupMaster__TryGetEntityList(
                         (GachaBonusSelectLineupMaster_o *)EntityList,
                         &gachaBonusSelectLineupEntities,
                         selectEntity->fields.gachaBonusSelectLineupId,
                         0LL);
  if ( ((unsigned __int8)EntityList & 1) != 0 )
  {
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_32;
    max_length = gachaBonusSelectLineupEntities->max_length;
    if ( max_length >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= max_length )
          goto LABEL_33;
        v21 = (int)v20;
        v22 = gachaBonusSelectLineupEntities->m_Items[v20];
        if ( !v22 )
          goto LABEL_32;
        if ( v22->fields.giftId == giftId )
          break;
        v20 = v21 + 1;
        if ( (int)v21 + 1 >= max_length )
          goto LABEL_21;
      }
      if ( Master_WarQuestSelectionMaster )
      {
        EntityList = GiftMaster__getDataById(Master_WarQuestSelectionMaster, giftId, 0LL);
        if ( EntityList )
        {
          if ( !v15 )
            goto LABEL_32;
          EntityList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v15,
                         *((_DWORD *)EntityList + 6),
                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v23 = (ServantEntity_o *)EntityList;
        }
        else
        {
          v23 = 0LL;
        }
        if ( gachaBonusSelectLineupEntities )
        {
          if ( (unsigned int)v21 >= gachaBonusSelectLineupEntities->max_length )
          {
LABEL_33:
            v25 = sub_B2C460(EntityList);
            sub_B2C400(v25, 0LL);
          }
          v24 = gachaBonusSelectLineupEntities->m_Items[v21];
          goto LABEL_22;
        }
      }
LABEL_32:
      sub_B2C434(EntityList, v17);
    }
  }
LABEL_21:
  v23 = 0LL;
  v24 = 0LL;
LABEL_22:
  BonusSelectSummonPartyOrganizationListViewItem__Modify_25555292(this, v24, v23, v18);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_25555292(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UserServantEntity_o **p_userServantEntity; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ServantEntity_o *v31; // x8
  UserServantMaster_o *v32; // x20
  __int64 v33; // x21
  __int64 v34; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // kr00_16
  __int64 v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_UserServantEntity__o *v38; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v39; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v42; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4187DD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, lineupEntity);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v11);
    sub_B2C35C(&Method_System_Func_UserServantEntity__int___ctor__, v12);
    sub_B2C35C(&System_Func_UserServantEntity__int__TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__, v15);
    sub_B2C35C(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v16);
    byte_4187DD0 = 1;
  }
  userServantList = 0LL;
  this->fields.lineupEntity = lineupEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.lineupEntity,
    (System_Int32_array **)lineupEntity,
    (System_String_array **)svtEntity,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.servantEntity = svtEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)svtEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.userServantEntity = 0LL;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B2C2F8((BattleServantConfConponent_o *)p_userServantEntity, 0LL, v25, v26, v27, v28, v29, v30);
  v31 = *p_servantEntity;
  v32 = (UserServantMaster_o *)p_userServantEntity[7];
  if ( *p_servantEntity )
  {
    v33 = *(_QWORD *)&v31->fields.id.fields.currentCryptoKey;
    v34 = *(_QWORD *)&v31->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v34 = *(_QWORD *)&v35.fields.fakeValue;
    v33 = *(_QWORD *)&v35.fields.currentCryptoKey;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v33;
  *(_QWORD *)&v59.fields.fakeValue = v34;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v59, 0LL);
  if ( !v32 )
    sub_B2C434(v36, v37);
  if ( UserServantMaster__TryGetEntityListBySvtId(v32, &userServantList, v36, 1, 0LL) )
  {
    v38 = userServantList;
    v39 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v39 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    static_fields = v39->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v42,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__,
        (const MethodInfo_27127B0 *)Method_System_Func_UserServantEntity__int___ctor__);
      v43 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      v43->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v43->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v51 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                   v50,
                                   (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    *p_userServantEntity = (struct UserServantEntity_o *)v51;
    sub_B2C2F8((BattleServantConfConponent_o *)p_userServantEntity, v51, v52, v53, v54, v55, v56, v57);
  }
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_ClassId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B2C434(this, method);
  return servantEntity->fields.classId;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonPartyOrganizationListViewItem_o *v2; // x19
  struct ServantEntity_o *servantEntity; // x8
  ServantExceedMaster_o *servantExceedMaster; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v2 = this;
  if ( (byte_4187DD2 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B2C35C(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4187DD2 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_9;
  servantExceedMaster = v2->fields.servantExceedMaster;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               v8,
                                                               0LL);
  if ( !servantExceedMaster )
LABEL_9:
    sub_B2C434(this, method);
  return ServantExceedMaster__GetFrameType_30786392(servantExceedMaster, (int32_t)this, 0, 0, 0LL);
}


GachaBonusSelectEntity_o *__fastcall BonusSelectSummonPartyOrganizationListViewItem__get_GachaBonusSelectEntity(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.gachaBonusSelectEntity;
}


GachaBonusSelectLineupEntity_o *__fastcall BonusSelectSummonPartyOrganizationListViewItem__get_GachaBonusSelectLineupEntity(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.lineupEntity;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_RarityId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonPartyOrganizationListViewItem_o *v2; // x19
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *svtLimitMaster; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v2 = this;
  if ( (byte_4187DD3 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B2C35C(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4187DD3 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_10;
  svtLimitMaster = v2->fields.svtLimitMaster;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               v8,
                                                               0LL);
  if ( !svtLimitMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantLimitMaster__GetEntity(
                                                                     svtLimitMaster,
                                                                     (int32_t)this,
                                                                     0,
                                                                     0LL)) == 0LL )
  {
LABEL_10:
    sub_B2C434(this, method);
  }
  return this->fields.sortIndex;
}


ServantEntity_o *__fastcall BonusSelectSummonPartyOrganizationListViewItem__get_ServantEntity(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_SvtId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonPartyOrganizationListViewItem_o *v2; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_4187DD4 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B2C35C(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4187DD4 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    sub_B2C434(this, method);
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v7, 0LL);
}


UserServantEntity_o *__fastcall BonusSelectSummonPartyOrganizationListViewItem__get_UserServant(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_tdLevel(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t result; // w0
  UserServantEntity_o *userServantEntity; // x8
  int32_t tdMaxLv; // [xsp+8h] [xbp-8h] BYREF
  int32_t tdLv; // [xsp+Ch] [xbp-4h] BYREF

  result = 1;
  tdMaxLv = 0;
  tdLv = 1;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    UserServantEntity__getTreasureDeviceInfo_21659764(userServantEntity, &tdLv, &tdMaxLv, 0LL);
    return tdLv;
  }
  return result;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_tdMaxLevel(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonPartyOrganizationListViewItem_o *v2; // x19
  struct ServantEntity_o *servantEntity; // x8
  ServantTreasureDvcMaster_o *svtTdMaster; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v2 = this;
  if ( (byte_4187DD5 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B2C35C(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4187DD5 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_10;
  svtTdMaster = v2->fields.svtTdMaster;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               v8,
                                                               0LL);
  if ( !svtTdMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                                     svtTdMaster,
                                                                     (int32_t)this,
                                                                     1,
                                                                     0LL)) == 0LL )
  {
LABEL_10:
    sub_B2C434(this, method);
  }
  return ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_4184EA1 & 1) == 0 )
  {
    sub_B2C35C(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v1);
    byte_4184EA1 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonPartyOrganizationListViewItem___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___ctor(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem___c____ctor_b__8_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B2C434(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___Modify_b__10_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B2C434(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}