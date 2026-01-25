void BonusSelectSummonPartyOrganizationListViewItem___ctor(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t index,
        ServantEntity_o *servantEntity,
        GachaBonusSelectEntity_o *gachaBonusSelectEntity,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *Master_object; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  UserServantMaster_o *userServantMaster; // x21
  __int64 v50; // x20
  __int64 v51; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // kr00_16
  __int64 v53; // x0
  __int64 v54; // x1
  System_Collections_Generic_List_UserServantEntity__o *v55; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v56; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v58; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  Il2CppObject *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_4CEA984 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1C7BAE8(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__);
    sub_1C7BAE8(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_4CEA984 = 1;
  }
  userServantList = 0;
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  this->fields.servantEntity = servantEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)servantEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.gachaBonusSelectEntity = gachaBonusSelectEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.gachaBonusSelectEntity,
    (int32_t)gachaBonusSelectEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  this->fields.servantExceedMaster = (struct ServantExceedMaster_o *)Master_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantExceedMaster,
    (int32_t)Master_object,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  this->fields.svtLimitMaster = (struct ServantLimitMaster_o *)v28;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtLimitMaster, (int32_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = (struct ServantTreasureDvcMaster_o *)v35;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtTdMaster, (int32_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v42;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantMaster,
    (int32_t)v42,
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
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
    v51 = *(_QWORD *)&v52.fields.currentCryptoKey;
    v50 = *(_QWORD *)&v52.fields.fakeValue;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v75.fields.currentCryptoKey = v51;
  *(_QWORD *)&v75.fields.fakeValue = v50;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v75, 0);
  if ( !userServantMaster )
    sub_1C7BD40(v53, v54);
  if ( UserServantMaster__TryGetEntityListBySvtId(userServantMaster, &userServantList, v53, 1, 0) )
  {
    v55 = userServantList;
    v56 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v56 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v56->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
      }
      v58 = (Il2CppObject *)v56->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__8_0,
        v58,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__,
        0);
      static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_UserServantEntity__int__o *)_9__8_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0,
        (int32_t)_9__8_0,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v55,
                                                                 (System_Func_TSource__TKey__o *)_9__8_0,
                                                                 (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v67 = System_Linq_Enumerable__FirstOrDefault_object_(
            v66,
            (const MethodInfo_3197A00 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v67;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
      (int32_t)v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
}


void BonusSelectSummonPartyOrganizationListViewItem__Empty(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  this->fields.userServantEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity, 0, v2, v3, v4, v5, v6, v7);
  this->fields.servantEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, 0, v9, v10, v11, v12, v13, v14);
  this->fields.lineupEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.lineupEntity, 0, v15, v16, v17, v18, v19, v20);
}


void BonusSelectSummonPartyOrganizationListViewItem__Modify(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !item )
    sub_1C7BD40(this, 0);
  BonusSelectSummonPartyOrganizationListViewItem__Modify_35832008(
    this,
    item->fields.lineupEntity,
    item->fields.servantEntity,
    v3);
}


void BonusSelectSummonPartyOrganizationListViewItem__Modify_35824396(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t gachaId,
        int32_t slot,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  Il2CppObject *v10; // x21
  void *EntityList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int max_length; // w9
  unsigned int v15; // w10
  __int64 v16; // x23
  GachaBonusSelectLineupEntity_o *v17; // x10
  ServantEntity_o *v18; // x2
  GachaBonusSelectLineupEntity_o *v19; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-58h] BYREF
  GachaBonusSelectEntity_o *selectEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CEA986 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GachaBonusSelectMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4CEA986 = 1;
  }
  selectEntity = 0;
  gachaBonusSelectLineupEntities = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GiftMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  EntityList = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !EntityList )
    goto LABEL_30;
  if ( !GachaBonusSelectMaster__TryGetEntitySlot(
          (GachaBonusSelectMaster_o *)EntityList,
          &selectEntity,
          gachaId,
          slot,
          0) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EntityList = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !selectEntity || !EntityList )
    goto LABEL_30;
  EntityList = (void *)GachaBonusSelectLineupMaster__TryGetEntityList(
                         (GachaBonusSelectLineupMaster_o *)EntityList,
                         &gachaBonusSelectLineupEntities,
                         selectEntity->fields.gachaBonusSelectLineupId,
                         0);
  if ( ((unsigned __int8)EntityList & 1) != 0 )
  {
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_30;
    max_length = gachaBonusSelectLineupEntities->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= max_length )
          goto LABEL_31;
        v16 = (int)v15;
        v17 = gachaBonusSelectLineupEntities->m_Items[v15];
        if ( !v17 )
          goto LABEL_30;
        if ( v17->fields.giftId == giftId )
          break;
        v15 = v16 + 1;
        if ( (int)v16 + 1 >= max_length )
          goto LABEL_19;
      }
      if ( Master_object )
      {
        EntityList = GiftMaster__getDataById((GiftMaster_o *)Master_object, giftId, 0);
        if ( EntityList )
        {
          if ( !v10 )
            goto LABEL_30;
          EntityList = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)v10,
                         *((_DWORD *)EntityList + 6),
                         (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v18 = (ServantEntity_o *)EntityList;
        }
        else
        {
          v18 = 0;
        }
        if ( gachaBonusSelectLineupEntities )
        {
          if ( (unsigned int)v16 >= LODWORD(gachaBonusSelectLineupEntities->max_length) )
LABEL_31:
            sub_1C7BD48(EntityList);
          v19 = gachaBonusSelectLineupEntities->m_Items[v16];
          goto LABEL_20;
        }
      }
LABEL_30:
      sub_1C7BD40(EntityList, v12);
    }
  }
LABEL_19:
  v18 = 0;
  v19 = 0;
LABEL_20:
  BonusSelectSummonPartyOrganizationListViewItem__Modify_35832008(this, v19, v18, v13);
}


void BonusSelectSummonPartyOrganizationListViewItem__Modify_35832008(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  GrandQuestFolderBoardItem_o *p_userServantEntity; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct ServantEntity_o *v25; // x8
  UserServantMaster_o *sortStr1; // x20
  __int64 v27; // x21
  __int64 v28; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr00_16
  __int64 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_UserServantEntity__o *v32; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v33; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v35; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4CEA985 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1C7BAE8(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__);
    sub_1C7BAE8(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_4CEA985 = 1;
  }
  userServantList = 0;
  this->fields.lineupEntity = lineupEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.lineupEntity,
    (int32_t)lineupEntity,
    (int32_t)svtEntity,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.servantEntity = svtEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)svtEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.userServantEntity = 0;
  p_userServantEntity = (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity;
  sub_1C7BA8C(p_userServantEntity, 0, v19, v20, v21, v22, v23, v24);
  v25 = *p_servantEntity;
  sortStr1 = (UserServantMaster_o *)p_userServantEntity->fields.sortStr1;
  if ( *p_servantEntity )
  {
    v27 = *(_QWORD *)&v25->fields.id.fields.currentCryptoKey;
    v28 = *(_QWORD *)&v25->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
    v27 = *(_QWORD *)&v29.fields.currentCryptoKey;
    v28 = *(_QWORD *)&v29.fields.fakeValue;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v27;
  *(_QWORD *)&v52.fields.fakeValue = v28;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v52, 0);
  if ( !sortStr1 )
    sub_1C7BD40(v30, v31);
  if ( UserServantMaster__TryGetEntityListBySvtId(sortStr1, &userServantList, v30, 1, 0) )
  {
    v32 = userServantList;
    v33 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v33 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v33->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v35,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__,
        0);
      static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
        (int32_t)_9__10_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v44 = System_Linq_Enumerable__FirstOrDefault_object_(
            v43,
            (const MethodInfo_3197A00 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    p_userServantEntity->klass = (GrandQuestFolderBoardItem_c *)v44;
    sub_1C7BA8C(p_userServantEntity, (int32_t)v44, v45, v46, v47, v48, v49, v50);
  }
}


int32_t BonusSelectSummonPartyOrganizationListViewItem__get_ClassId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1C7BD40(this, method);
  return servantEntity->fields.classId;
}


int32_t BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(
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
  if ( (byte_4CEA987 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA987 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_8;
  servantExceedMaster = v2->fields.servantExceedMaster;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                               v8,
                                                               0);
  if ( !servantExceedMaster )
LABEL_8:
    sub_1C7BD40(this, method);
  return ServantExceedMaster__GetFrameType_43240060(servantExceedMaster, (int32_t)this, 0, 0, 0, 0);
}


GachaBonusSelectEntity_o *BonusSelectSummonPartyOrganizationListViewItem__get_GachaBonusSelectEntity(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.gachaBonusSelectEntity;
}


GachaBonusSelectLineupEntity_o *BonusSelectSummonPartyOrganizationListViewItem__get_GachaBonusSelectLineupEntity(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.lineupEntity;
}


int32_t BonusSelectSummonPartyOrganizationListViewItem__get_RarityId(
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
  if ( (byte_4CEA988 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA988 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_9;
  svtLimitMaster = v2->fields.svtLimitMaster;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                               v8,
                                                               0);
  if ( !svtLimitMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantLimitMaster__GetEntity(
                                                                     svtLimitMaster,
                                                                     (int32_t)this,
                                                                     0,
                                                                     0)) == 0 )
  {
LABEL_9:
    sub_1C7BD40(this, method);
  }
  return this->fields.sortIndex;
}


ServantEntity_o *BonusSelectSummonPartyOrganizationListViewItem__get_ServantEntity(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t BonusSelectSummonPartyOrganizationListViewItem__get_SvtId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonPartyOrganizationListViewItem_o *v2; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_4CEA989 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA989 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    sub_1C7BD40(this, method);
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v7, 0);
}


UserServantEntity_o *BonusSelectSummonPartyOrganizationListViewItem__get_UserServant(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int32_t BonusSelectSummonPartyOrganizationListViewItem__get_tdLevel(
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
    UserServantEntity__getTreasureDeviceInfo_43714172(userServantEntity, &tdLv, &tdMaxLv, 0);
    return tdLv;
  }
  return result;
}


int32_t BonusSelectSummonPartyOrganizationListViewItem__get_tdMaxLevel(
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
  if ( (byte_4CEA98A & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA98A = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_9;
  svtTdMaster = v2->fields.svtTdMaster;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                               v8,
                                                               0);
  if ( !svtTdMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                                     svtTdMaster,
                                                                     (int32_t)this,
                                                                     1,
                                                                     0)) == 0 )
  {
LABEL_9:
    sub_1C7BD40(this, method);
  }
  return ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0);
}


void BonusSelectSummonPartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEA98B & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_4CEA98B = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonPartyOrganizationListViewItem___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BonusSelectSummonPartyOrganizationListViewItem___c___ctor(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BonusSelectSummonPartyOrganizationListViewItem___c____ctor_b__8_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return entity->fields.treasureDeviceLv1;
}


int32_t BonusSelectSummonPartyOrganizationListViewItem___c___Modify_b__10_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return entity->fields.treasureDeviceLv1;
}