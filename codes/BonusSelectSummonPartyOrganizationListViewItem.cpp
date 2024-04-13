void __fastcall BonusSelectSummonPartyOrganizationListViewItem___ctor(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t index,
        ServantEntity_o *servantEntity,
        GachaBonusSelectEntity_o *gachaBonusSelectEntity,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct ServantLimitMaster_o *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct ServantTreasureDvcMaster_o *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct UserServantMaster_o *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UserServantMaster_o *userServantMaster; // x21
  __int64 v83; // x20
  __int64 v84; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // kr00_16
  __int64 v86; // x0
  __int64 v87; // x1
  System_Collections_Generic_List_UserServantEntity__o *v88; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v89; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__8_0; // x21
  Il2CppObject *v92; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  struct UserServantEntity_o *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_42E8669 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ServantExceedMaster___,
      index,
      (_DWORD)servantEntity,
      gachaBonusSelectEntity);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__int___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_UserServantEntity__int__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__, v36, v37, v38);
    sub_B5D5C4(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v39, v40, v41);
    byte_42E8669 = 1;
  }
  userServantList = 0LL;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.servantEntity = servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.gachaBonusSelectEntity = gachaBonusSelectEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gachaBonusSelectEntity,
    (System_Int32_array **)gachaBonusSelectEntity,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
  this->fields.servantExceedMaster = Master_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantExceedMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = (struct ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  this->fields.svtLimitMaster = v61;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtLimitMaster,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = (struct ServantTreasureDvcMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtTdMaster,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = (struct UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.userServantMaster = v75;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  userServantMaster = this->fields.userServantMaster;
  if ( servantEntity )
  {
    v84 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v83 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v83 = *(_QWORD *)&v85.fields.fakeValue;
    v84 = *(_QWORD *)&v85.fields.currentCryptoKey;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v109.fields.currentCryptoKey = v84;
  *(_QWORD *)&v109.fields.fakeValue = v83;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v109, 0LL);
  if ( !userServantMaster )
    sub_B5D69C(v86, v87);
  if ( UserServantMaster__TryGetEntityListBySvtId(userServantMaster, &userServantList, v86, 1, 0LL) )
  {
    v88 = userServantList;
    v89 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v89 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    static_fields = v89->static_fields;
    _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v89);
        static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      }
      v92 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__8_0,
        v92,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_UserServantEntity__int___ctor__);
      v93 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      v93->__9__8_0 = (struct System_Func_UserServantEntity__int__o *)_9__8_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v93->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v94,
        v95,
        v96,
        v97,
        v98,
        v99);
    }
    v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v88,
                                                                  (System_Func_TSource__TKey__o *)_9__8_0,
                                                                  (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v101 = (struct UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                           v100,
                                           (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = v101;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userServantEntity,
      (System_Int32_array **)v101,
      v102,
      v103,
      v104,
      v105,
      v106,
      v107);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.servantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.lineupEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.lineupEntity, 0LL, v15, v16, v17, v18, v19, v20);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !item )
    sub_B5D69C(this, 0LL);
  BonusSelectSummonPartyOrganizationListViewItem__Modify_24924244(
    this,
    item->fields.lineupEntity,
    item->fields.servantEntity,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_24919172(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t gachaId,
        int32_t slot,
        int32_t giftId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  void *EntityList; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x3
  signed int max_length; // w9
  unsigned int v30; // w10
  __int64 v31; // x23
  GachaBonusSelectLineupEntity_o *v32; // x10
  ServantEntity_o *v33; // x2
  GachaBonusSelectLineupEntity_o *v34; // x1
  __int64 v35; // x0
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-48h] BYREF
  GachaBonusSelectEntity_o *selectEntity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E866B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, gachaId, slot, *(_QWORD *)&giftId);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22, v23);
    byte_42E866B = 1;
  }
  selectEntity = 0LL;
  gachaBonusSelectLineupEntities = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  EntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
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
  EntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
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
      v30 = 0;
      while ( 1 )
      {
        if ( v30 >= max_length )
          goto LABEL_33;
        v31 = (int)v30;
        v32 = gachaBonusSelectLineupEntities->m_Items[v30];
        if ( !v32 )
          goto LABEL_32;
        if ( v32->fields.giftId == giftId )
          break;
        v30 = v31 + 1;
        if ( (int)v31 + 1 >= max_length )
          goto LABEL_21;
      }
      if ( Master_WarQuestSelectionMaster )
      {
        EntityList = GiftMaster__getDataById(Master_WarQuestSelectionMaster, giftId, 0LL);
        if ( EntityList )
        {
          if ( !v25 )
            goto LABEL_32;
          EntityList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v25,
                         *((_DWORD *)EntityList + 6),
                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v33 = (ServantEntity_o *)EntityList;
        }
        else
        {
          v33 = 0LL;
        }
        if ( gachaBonusSelectLineupEntities )
        {
          if ( (unsigned int)v31 >= gachaBonusSelectLineupEntities->max_length )
          {
LABEL_33:
            v35 = sub_B5D6C8(EntityList);
            sub_B5D668(v35, 0LL);
          }
          v34 = gachaBonusSelectLineupEntities->m_Items[v31];
          goto LABEL_22;
        }
      }
LABEL_32:
      sub_B5D69C(EntityList, v27);
    }
  }
LABEL_21:
  v33 = 0LL;
  v34 = 0LL;
LABEL_22:
  BonusSelectSummonPartyOrganizationListViewItem__Modify_24924244(this, v34, v33, v28);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_24924244(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UserServantEntity_o **p_userServantEntity; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct ServantEntity_o *v43; // x8
  UserServantMaster_o *v44; // x20
  __int64 v45; // x21
  __int64 v46; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // kr00_16
  __int64 v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_UserServantEntity__o *v50; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v51; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v54; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Int32_array **v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42E866A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___,
      (_DWORD)lineupEntity,
      (_DWORD)svtEntity,
      method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__int___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_UserServantEntity__int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__, v23, v24, v25);
    sub_B5D5C4(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v26, v27, v28);
    byte_42E866A = 1;
  }
  userServantList = 0LL;
  this->fields.lineupEntity = lineupEntity;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)svtEntity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.userServantEntity = 0LL;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B5D560((BattleServantConfConponent_o *)p_userServantEntity, 0LL, v37, v38, v39, v40, v41, v42);
  v43 = *p_servantEntity;
  v44 = (UserServantMaster_o *)p_userServantEntity[7];
  if ( *p_servantEntity )
  {
    v45 = *(_QWORD *)&v43->fields.id.fields.currentCryptoKey;
    v46 = *(_QWORD *)&v43->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v46 = *(_QWORD *)&v47.fields.fakeValue;
    v45 = *(_QWORD *)&v47.fields.currentCryptoKey;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v71.fields.currentCryptoKey = v45;
  *(_QWORD *)&v71.fields.fakeValue = v46;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  if ( !v44 )
    sub_B5D69C(v48, v49);
  if ( UserServantMaster__TryGetEntityListBySvtId(v44, &userServantList, v48, 1, 0LL) )
  {
    v50 = userServantList;
    v51 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( (BYTE3(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v51 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    static_fields = v51->static_fields;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__10_0,
        v54,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_UserServantEntity__int___ctor__);
      v55 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      v55->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v55->__9__10_0,
        (System_Int32_array **)_9__10_0,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v50,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v63 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                   v62,
                                   (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    *p_userServantEntity = (struct UserServantEntity_o *)v63;
    sub_B5D560((BattleServantConfConponent_o *)p_userServantEntity, v63, v64, v65, v66, v67, v68, v69);
  }
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_ClassId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B5D69C(this, method);
  return servantEntity->fields.classId;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BonusSelectSummonPartyOrganizationListViewItem_o *v4; // x19
  struct ServantEntity_o *servantEntity; // x8
  ServantExceedMaster_o *servantExceedMaster; // x19
  __int64 v7; // x20
  __int64 v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_42E866C & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B5D5C4(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 (_DWORD)method,
                                                                 v2,
                                                                 v3);
    byte_42E866C = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_9;
  servantExceedMaster = v4->fields.servantExceedMaster;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v10,
                                                               0LL);
  if ( !servantExceedMaster )
LABEL_9:
    sub_B5D69C(this, method);
  return ServantExceedMaster__GetFrameType_30842504(servantExceedMaster, (int32_t)this, 0, 0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BonusSelectSummonPartyOrganizationListViewItem_o *v4; // x19
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *svtLimitMaster; // x19
  __int64 v7; // x20
  __int64 v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_42E866D & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B5D5C4(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 (_DWORD)method,
                                                                 v2,
                                                                 v3);
    byte_42E866D = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_10;
  svtLimitMaster = v4->fields.svtLimitMaster;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v10,
                                                               0LL);
  if ( !svtLimitMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantLimitMaster__GetEntity(
                                                                     svtLimitMaster,
                                                                     (int32_t)this,
                                                                     0,
                                                                     0LL)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  BonusSelectSummonPartyOrganizationListViewItem_o *v4; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_42E866E & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B5D5C4(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 (_DWORD)method,
                                                                 v2,
                                                                 v3);
    byte_42E866E = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    sub_B5D69C(this, method);
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL);
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
    UserServantEntity__getTreasureDeviceInfo_21848072(userServantEntity, &tdLv, &tdMaxLv, 0LL);
    return tdLv;
  }
  return result;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_tdMaxLevel(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BonusSelectSummonPartyOrganizationListViewItem_o *v4; // x19
  struct ServantEntity_o *servantEntity; // x8
  ServantTreasureDvcMaster_o *svtTdMaster; // x19
  __int64 v7; // x20
  __int64 v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_42E866F & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B5D5C4(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 (_DWORD)method,
                                                                 v2,
                                                                 v3);
    byte_42E866F = 1;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_10;
  svtTdMaster = v4->fields.svtTdMaster;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v10,
                                                               0LL);
  if ( !svtTdMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                                     svtTdMaster,
                                                                     (int32_t)this,
                                                                     1,
                                                                     0LL)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(this, method);
  }
  return ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E29 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v1, v2, v3);
    byte_42E5E29 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonPartyOrganizationListViewItem___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___Modify_b__10_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B5D69C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}