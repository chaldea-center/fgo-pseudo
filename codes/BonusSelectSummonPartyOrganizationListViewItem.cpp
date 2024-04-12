void __fastcall BonusSelectSummonPartyOrganizationListViewItem___ctor(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t index,
        ServantEntity_o *servantEntity,
        GachaBonusSelectEntity_o *gachaBonusSelectEntity,
        const MethodInfo *method)
{
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
  struct ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct ServantLimitMaster_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct ServantTreasureDvcMaster_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UserServantMaster_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UserServantMaster_o *userServantMaster; // x21
  __int64 v50; // x20
  __int64 v51; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // kr00_16
  __int64 v53; // x0
  __int64 v54; // x1
  System_Collections_Generic_List_UserServantEntity__o *v55; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v56; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__8_0; // x21
  Il2CppObject *v59; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  struct UserServantEntity_o *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_42AFEE4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_B52984(&Method_System_Func_UserServantEntity__int___ctor__);
    sub_B52984(&System_Func_UserServantEntity__int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__);
    sub_B52984(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_42AFEE4 = 1;
  }
  userServantList = 0LL;
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.servantEntity = servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.gachaBonusSelectEntity = gachaBonusSelectEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.gachaBonusSelectEntity,
    (System_Int32_array **)gachaBonusSelectEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  this->fields.servantExceedMaster = Master_WarQuestSelectionMaster;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantExceedMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (struct ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  this->fields.svtLimitMaster = v28;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.svtLimitMaster,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (struct ServantTreasureDvcMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = v35;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.svtTdMaster,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (struct UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.userServantMaster = v42;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  userServantMaster = this->fields.userServantMaster;
  if ( servantEntity )
  {
    v51 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v50 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v50 = *(_QWORD *)&v52.fields.fakeValue;
    v51 = *(_QWORD *)&v52.fields.currentCryptoKey;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v76.fields.currentCryptoKey = v51;
  *(_QWORD *)&v76.fields.fakeValue = v50;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v76, 0LL);
  if ( !userServantMaster )
    sub_B52A5C(v53, v54);
  if ( UserServantMaster__TryGetEntityListBySvtId(userServantMaster, &userServantList, v53, 1, 0LL) )
  {
    v55 = userServantList;
    v56 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v56 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    static_fields = v56->static_fields;
    _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      }
      v59 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__8_0,
        v59,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__,
        (const MethodInfo_2BC9C68 *)Method_System_Func_UserServantEntity__int___ctor__);
      v60 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      v60->__9__8_0 = (struct System_Func_UserServantEntity__int__o *)_9__8_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v60->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v55,
                                                                 (System_Func_TSource__TKey__o *)_9__8_0,
                                                                 (const MethodInfo_1B666DC *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v68 = (struct UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                          v67,
                                          (const MethodInfo_1B62EA8 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = v68;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.userServantEntity,
      (System_Int32_array **)v68,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.servantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.lineupEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.lineupEntity, 0LL, v15, v16, v17, v18, v19, v20);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !item )
    sub_B52A5C(this, 0LL);
  BonusSelectSummonPartyOrganizationListViewItem__Modify_25011104(
    this,
    item->fields.lineupEntity,
    item->fields.servantEntity,
    v3);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_25006032(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t gachaId,
        int32_t slot,
        int32_t giftId,
        const MethodInfo *method)
{
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  void *EntityList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  signed int max_length; // w9
  unsigned int v15; // w10
  __int64 v16; // x23
  GachaBonusSelectLineupEntity_o *v17; // x10
  ServantEntity_o *v18; // x2
  GachaBonusSelectLineupEntity_o *v19; // x1
  __int64 v20; // x0
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-48h] BYREF
  GachaBonusSelectEntity_o *selectEntity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42AFEE6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_B52984(&Method_DataManager_GetMaster_GachaBonusSelectMaster___);
    sub_B52984(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_42AFEE6 = 1;
  }
  selectEntity = 0LL;
  gachaBonusSelectLineupEntities = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GiftMaster___);
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  EntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
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
  EntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
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
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= max_length )
          goto LABEL_33;
        v16 = (int)v15;
        v17 = gachaBonusSelectLineupEntities->m_Items[v15];
        if ( !v17 )
          goto LABEL_32;
        if ( v17->fields.giftId == giftId )
          break;
        v15 = v16 + 1;
        if ( (int)v16 + 1 >= max_length )
          goto LABEL_21;
      }
      if ( Master_WarQuestSelectionMaster )
      {
        EntityList = GiftMaster__getDataById(Master_WarQuestSelectionMaster, giftId, 0LL);
        if ( EntityList )
        {
          if ( !v10 )
            goto LABEL_32;
          EntityList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v10,
                         *((_DWORD *)EntityList + 6),
                         (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v18 = (ServantEntity_o *)EntityList;
        }
        else
        {
          v18 = 0LL;
        }
        if ( gachaBonusSelectLineupEntities )
        {
          if ( (unsigned int)v16 >= gachaBonusSelectLineupEntities->max_length )
          {
LABEL_33:
            v20 = sub_B52A88(EntityList);
            sub_B52A28(v20, 0LL);
          }
          v19 = gachaBonusSelectLineupEntities->m_Items[v16];
          goto LABEL_22;
        }
      }
LABEL_32:
      sub_B52A5C(EntityList, v12);
    }
  }
LABEL_21:
  v18 = 0LL;
  v19 = 0LL;
LABEL_22:
  BonusSelectSummonPartyOrganizationListViewItem__Modify_25011104(this, v19, v18, v13);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_25011104(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UserServantEntity_o **p_userServantEntity; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct ServantEntity_o *v25; // x8
  UserServantMaster_o *v26; // x20
  __int64 v27; // x21
  __int64 v28; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr00_16
  __int64 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_UserServantEntity__o *v32; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v33; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v36; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_42AFEE5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_B52984(&Method_System_Func_UserServantEntity__int___ctor__);
    sub_B52984(&System_Func_UserServantEntity__int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__);
    sub_B52984(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_42AFEE5 = 1;
  }
  userServantList = 0LL;
  this->fields.lineupEntity = lineupEntity;
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)svtEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.userServantEntity = 0LL;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B52920((BattleServantConfConponent_o *)p_userServantEntity, 0LL, v19, v20, v21, v22, v23, v24);
  v25 = *p_servantEntity;
  v26 = (UserServantMaster_o *)p_userServantEntity[7];
  if ( *p_servantEntity )
  {
    v27 = *(_QWORD *)&v25->fields.id.fields.currentCryptoKey;
    v28 = *(_QWORD *)&v25->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v28 = *(_QWORD *)&v29.fields.fakeValue;
    v27 = *(_QWORD *)&v29.fields.currentCryptoKey;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v27;
  *(_QWORD *)&v53.fields.fakeValue = v28;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v53, 0LL);
  if ( !v26 )
    sub_B52A5C(v30, v31);
  if ( UserServantMaster__TryGetEntityListBySvtId(v26, &userServantList, v30, 1, 0LL) )
  {
    v32 = userServantList;
    v33 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v33 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    static_fields = v33->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v36,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__,
        (const MethodInfo_2BC9C68 *)Method_System_Func_UserServantEntity__int___ctor__);
      v37 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      v37->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v37->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_1B666DC *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v45 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                   v44,
                                   (const MethodInfo_1B62EA8 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    *p_userServantEntity = (struct UserServantEntity_o *)v45;
    sub_B52920((BattleServantConfConponent_o *)p_userServantEntity, v45, v46, v47, v48, v49, v50, v51);
  }
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_ClassId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B52A5C(this, method);
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
  if ( (byte_42AFEE7 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AFEE7 = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                               v8,
                                                               0LL);
  if ( !servantExceedMaster )
LABEL_9:
    sub_B52A5C(this, method);
  return ServantExceedMaster__GetFrameType_30463188(servantExceedMaster, (int32_t)this, 0, 0, 0LL);
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
  if ( (byte_42AFEE8 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AFEE8 = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
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
    sub_B52A5C(this, method);
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
  if ( (byte_42AFEE9 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AFEE9 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    sub_B52A5C(this, method);
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v7, 0LL);
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
    UserServantEntity__getTreasureDeviceInfo_21516452(userServantEntity, &tdLv, &tdMaxLv, 0LL);
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
  if ( (byte_42AFEEA & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AFEEA = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
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
    sub_B52A5C(this, method);
  }
  return ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42AD672 & 1) == 0 )
  {
    sub_B52984(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_42AD672 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonPartyOrganizationListViewItem___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___Modify_b__10_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B52A5C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}