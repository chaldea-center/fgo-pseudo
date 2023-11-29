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
  int32_t v64; // w0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Collections_Generic_List_UserServantEntity__o *v69; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v70; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__8_0; // x21
  Il2CppObject *v73; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  struct UserServantEntity_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16

  if ( (byte_40FB0FE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v14);
    sub_B16FFC(&Method_System_Func_UserServantEntity__int___ctor__, v15);
    sub_B16FFC(&System_Func_UserServantEntity__int__TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__, v18);
    sub_B16FFC(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v19);
    byte_40FB0FE = 1;
  }
  userServantList = 0LL;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.servantEntity = servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.gachaBonusSelectEntity = gachaBonusSelectEntity;
  sub_B16F98(
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
  Master_WarQuestSelectionMaster = (struct ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  this->fields.servantExceedMaster = Master_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantExceedMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  this->fields.svtLimitMaster = v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtLimitMaster,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (struct ServantTreasureDvcMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = v46;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtTdMaster,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (struct UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.userServantMaster = v53;
  sub_B16F98(
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
  *(_QWORD *)&v90.fields.currentCryptoKey = v62;
  *(_QWORD *)&v90.fields.fakeValue = v61;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v90, 0LL);
  if ( !userServantMaster )
    sub_B170D4();
  if ( UserServantMaster__TryGetEntityListBySvtId(userServantMaster, &userServantList, v64, 1, 0LL) )
  {
    v69 = userServantList;
    v70 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v70 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    static_fields = v70->static_fields;
    _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      }
      v73 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                  System_Func_UserServantEntity__int__TypeInfo,
                                                                                  v65,
                                                                                  v66,
                                                                                  v67,
                                                                                  v68);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__8_0,
        v73,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantEntity__int___ctor__);
      v74 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      v74->__9__8_0 = (struct System_Func_UserServantEntity__int__o *)_9__8_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v74->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    v81 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v69,
                                                                 (System_Func_TSource__TKey__o *)_9__8_0,
                                                                 (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v82 = (struct UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                          v81,
                                          (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = v82;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userServantEntity,
      (System_Int32_array **)v82,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.servantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.lineupEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.lineupEntity, 0LL, v15, v16, v17, v18, v19, v20);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !item )
    sub_B170D4();
  BonusSelectSummonPartyOrganizationListViewItem__Modify_27185028(
    this,
    item->fields.lineupEntity,
    item->fields.servantEntity,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_27179956(
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
  GachaBonusSelectMaster_o *v16; // x0
  GachaBonusSelectLineupMaster_o *v17; // x0
  ServantEntity_o *EntityList; // x0
  __int64 v19; // x1
  ServantEntity_o *v20; // x2
  const MethodInfo *v21; // x3
  signed int max_length; // w9
  unsigned int v23; // w10
  __int64 v24; // x23
  GachaBonusSelectLineupEntity_o *v25; // x10
  GachaBonusSelectLineupEntity_o *v26; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-48h] BYREF
  GachaBonusSelectEntity_o *selectEntity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40FB100 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, *(_QWORD *)&gachaId);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    byte_40FB100 = 1;
  }
  selectEntity = 0LL;
  gachaBonusSelectLineupEntities = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v16 = (GachaBonusSelectMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !v16 )
    goto LABEL_32;
  if ( !GachaBonusSelectMaster__TryGetEntitySlot(v16, &selectEntity, gachaId, slot, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v17 = (GachaBonusSelectLineupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !selectEntity || !v17 )
    goto LABEL_32;
  EntityList = (ServantEntity_o *)GachaBonusSelectLineupMaster__TryGetEntityList(
                                    v17,
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
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= max_length )
          goto LABEL_33;
        v24 = (int)v23;
        v25 = gachaBonusSelectLineupEntities->m_Items[v23];
        if ( !v25 )
          goto LABEL_32;
        if ( v25->fields.giftId == giftId )
          break;
        v23 = v24 + 1;
        if ( (int)v24 + 1 >= max_length )
          goto LABEL_21;
      }
      if ( Master_WarQuestSelectionMaster )
      {
        EntityList = (ServantEntity_o *)GiftMaster__getDataById(Master_WarQuestSelectionMaster, giftId, 0LL);
        if ( EntityList )
        {
          if ( !v15 )
            goto LABEL_32;
          EntityList = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v15,
                                            EntityList->fields.id.fields.fakeValue,
                                            (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v20 = EntityList;
        }
        else
        {
          v20 = 0LL;
        }
        if ( gachaBonusSelectLineupEntities )
        {
          if ( (unsigned int)v24 >= gachaBonusSelectLineupEntities->max_length )
          {
LABEL_33:
            sub_B17100(EntityList, v19, v20);
            sub_B170A0();
          }
          v26 = gachaBonusSelectLineupEntities->m_Items[v24];
          goto LABEL_22;
        }
      }
LABEL_32:
      sub_B170D4();
    }
  }
LABEL_21:
  v20 = 0LL;
  v26 = 0LL;
LABEL_22:
  BonusSelectSummonPartyOrganizationListViewItem__Modify_27185028(this, v26, v20, v21);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_27185028(
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
  int32_t v36; // w0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_UserServantEntity__o *v41; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v42; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v45; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_40FB0FF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, lineupEntity);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v11);
    sub_B16FFC(&Method_System_Func_UserServantEntity__int___ctor__, v12);
    sub_B16FFC(&System_Func_UserServantEntity__int__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__, v15);
    sub_B16FFC(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v16);
    byte_40FB0FF = 1;
  }
  userServantList = 0LL;
  this->fields.lineupEntity = lineupEntity;
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)p_userServantEntity, 0LL, v25, v26, v27, v28, v29, v30);
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
  *(_QWORD *)&v62.fields.currentCryptoKey = v33;
  *(_QWORD *)&v62.fields.fakeValue = v34;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
  if ( !v32 )
    sub_B170D4();
  if ( UserServantMaster__TryGetEntityListBySvtId(v32, &userServantList, v36, 1, 0LL) )
  {
    v41 = userServantList;
    v42 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v42 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    static_fields = v42->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_UserServantEntity__int__TypeInfo,
                                                                                   v37,
                                                                                   v38,
                                                                                   v39,
                                                                                   v40);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v45,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantEntity__int___ctor__);
      v46 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      v46->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v46->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v41,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v54 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                   v53,
                                   (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    *p_userServantEntity = (struct UserServantEntity_o *)v54;
    sub_B16F98((BattleServantConfConponent_o *)p_userServantEntity, v54, v55, v56, v57, v58, v59, v60);
  }
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_ClassId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B170D4();
  return servantEntity->fields.classId;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  ServantExceedMaster_o *servantExceedMaster; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_40FB101 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FB101 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_9;
  servantExceedMaster = this->fields.servantExceedMaster;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9, 0LL);
  if ( !servantExceedMaster )
LABEL_9:
    sub_B170D4();
  return ServantExceedMaster__GetFrameType_30698720(servantExceedMaster, v7, 0, 0, 0LL);
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
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *svtLimitMaster; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  ServantLimitEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40FB102 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FB102 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_10;
  svtLimitMaster = this->fields.svtLimitMaster;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
  if ( !svtLimitMaster || (Entity = ServantLimitMaster__GetEntity(svtLimitMaster, v7, 0, 0LL)) == 0LL )
LABEL_10:
    sub_B170D4();
  return Entity->fields.rarity;
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
  struct ServantEntity_o *servantEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_40FB103 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FB103 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B170D4();
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL);
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
    UserServantEntity__getTreasureDeviceInfo_21453148(userServantEntity, &tdLv, &tdMaxLv, 0LL);
    return tdLv;
  }
  return result;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_tdMaxLevel(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  ServantTreasureDvcMaster_o *svtTdMaster; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40FB104 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FB104 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_10;
  svtTdMaster = this->fields.svtTdMaster;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
  if ( !svtTdMaster
    || (EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(svtTdMaster, v7, 1, 0LL)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return ServantTreasureDvcEntity__getLevelMax(EntityFromSvtIdOnly, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7099 & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v1);
    byte_40F7099 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return entity->fields.treasureDeviceLv1;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___Modify_b__10_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B170D4();
  return entity->fields.treasureDeviceLv1;
}