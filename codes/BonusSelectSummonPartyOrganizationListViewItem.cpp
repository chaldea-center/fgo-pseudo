// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyOrganizationListViewItem___ctor(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t index,
        ServantEntity_o *servantEntity,
        GachaBonusSelectEntity_o *gachaBonusSelectEntity,
        const MethodInfo *method)
{
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  Il2CppObject *Master_object; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  Il2CppObject *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  Il2CppObject *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  UserServantMaster_o *userServantMaster; // x21
  __int64 v72; // x20
  __int64 v73; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // kr00_16
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  System_Collections_Generic_List_UserServantEntity__o *v80; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v81; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v83; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  Il2CppObject *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16

  if ( (byte_4B12857 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&index, servantEntity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v19, v20);
    sub_1BCA7E0(&System_Func_UserServantEntity__int__TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__, v25, v26);
    sub_1BCA7E0(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v27, v28);
    byte_4B12857 = 1;
  }
  userServantList = 0LL;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.servantEntity = servantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)servantEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.gachaBonusSelectEntity = gachaBonusSelectEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.gachaBonusSelectEntity,
    (int64_t)gachaBonusSelectEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  this->fields.servantExceedMaster = (struct ServantExceedMaster_o *)Master_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantExceedMaster,
    (int64_t)Master_object,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  this->fields.svtLimitMaster = (struct ServantLimitMaster_o *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtLimitMaster, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  v56 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = (struct ServantTreasureDvcMaster_o *)v56;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtTdMaster, (int64_t)v56, v57, v58, v59, v60, v61, v62);
  v63 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v63;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userServantMaster, (int64_t)v63, v64, v65, v66, v67, v68, v69);
  userServantMaster = this->fields.userServantMaster;
  if ( servantEntity )
  {
    v73 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v72 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v70);
    v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v70 = *(_QWORD *)&v74.fields.fakeValue;
    v72 = *(_QWORD *)&v74.fields.fakeValue;
    v73 = *(_QWORD *)&v74.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v70);
  *(_QWORD *)&v100.fields.currentCryptoKey = v73;
  *(_QWORD *)&v100.fields.fakeValue = v72;
  v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v100, 0LL);
  if ( !userServantMaster )
    sub_1BCAA3C(v75, v76);
  if ( UserServantMaster__TryGetEntityListBySvtId(userServantMaster, &userServantList, v75, 1, 0LL) )
  {
    v80 = userServantList;
    v81 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v77);
      v81 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v81->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v81->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v81, v77);
        v81 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
      }
      v83 = (Il2CppObject *)v81->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserServantEntity__int__TypeInfo, v77, v78, v79);
      System_Func_object__int____ctor(
        _9__8_0,
        v83,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__,
        0LL);
      static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_UserServantEntity__int__o *)_9__8_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
    }
    v91 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v80,
                                                                 (System_Func_TSource__TKey__o *)_9__8_0,
                                                                 (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v92 = System_Linq_Enumerable__FirstOrDefault_object_(
            v91,
            (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v92;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
      (int64_t)v92,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Empty(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  this->fields.userServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.servantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantEntity, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.lineupEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lineupEntity, 0LL, v15, v16, v17, v18, v19, v20);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !item )
    sub_1BCAA3C(this, 0LL);
  BonusSelectSummonPartyOrganizationListViewItem__Modify_33616988(
    this,
    item->fields.lineupEntity,
    item->fields.servantEntity,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_33609212(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t gachaId,
        int32_t slot,
        int32_t giftId,
        const MethodInfo *method)
{
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
  Il2CppObject *Master_object; // x22
  Il2CppObject *v20; // x21
  void *EntityList; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  signed int max_length; // w9
  unsigned int v26; // w10
  __int64 v27; // x23
  GachaBonusSelectLineupEntity_o *v28; // x10
  ServantEntity_o *v29; // x2
  GachaBonusSelectLineupEntity_o *v30; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-58h] BYREF
  GachaBonusSelectEntity_o *selectEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B12859 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, *(_QWORD *)&gachaId, *(_QWORD *)&slot);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    byte_4B12859 = 1;
  }
  selectEntity = 0LL;
  gachaBonusSelectLineupEntities = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&gachaId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  v20 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  EntityList = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !EntityList )
    goto LABEL_30;
  if ( !GachaBonusSelectMaster__TryGetEntitySlot(
          (GachaBonusSelectMaster_o *)EntityList,
          &selectEntity,
          gachaId,
          slot,
          0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
  EntityList = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !selectEntity || !EntityList )
    goto LABEL_30;
  EntityList = (void *)GachaBonusSelectLineupMaster__TryGetEntityList(
                         (GachaBonusSelectLineupMaster_o *)EntityList,
                         &gachaBonusSelectLineupEntities,
                         selectEntity->fields.gachaBonusSelectLineupId,
                         0LL);
  if ( ((unsigned __int8)EntityList & 1) != 0 )
  {
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_30;
    max_length = gachaBonusSelectLineupEntities->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= max_length )
          goto LABEL_31;
        v27 = (int)v26;
        v28 = gachaBonusSelectLineupEntities->m_Items[v26];
        if ( !v28 )
          goto LABEL_30;
        if ( v28->fields.giftId == giftId )
          break;
        v26 = v27 + 1;
        if ( (int)v27 + 1 >= max_length )
          goto LABEL_19;
      }
      if ( Master_object )
      {
        EntityList = GiftMaster__getDataById((GiftMaster_o *)Master_object, giftId, 0LL);
        if ( EntityList )
        {
          if ( !v20 )
            goto LABEL_30;
          EntityList = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                         *((_DWORD *)EntityList + 6),
                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v29 = (ServantEntity_o *)EntityList;
        }
        else
        {
          v29 = 0LL;
        }
        if ( gachaBonusSelectLineupEntities )
        {
          if ( (unsigned int)v27 >= gachaBonusSelectLineupEntities->max_length )
LABEL_31:
            sub_1BCAA44(EntityList, v22);
          v30 = gachaBonusSelectLineupEntities->m_Items[v27];
          goto LABEL_20;
        }
      }
LABEL_30:
      sub_1BCAA3C(EntityList, v22);
    }
  }
LABEL_19:
  v29 = 0LL;
  v30 = 0LL;
LABEL_20:
  BonusSelectSummonPartyOrganizationListViewItem__Modify_33616988(this, v30, v29, v24);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_33616988(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  struct ServantEntity_o **p_servantEntity; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UserServantEntity_o **p_userServantEntity; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  struct ServantEntity_o *v36; // x8
  UserServantMaster_o *v37; // x20
  __int64 v38; // x21
  __int64 v39; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // kr00_16
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Generic_List_UserServantEntity__o *v46; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v47; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v49; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  Il2CppObject *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4B12858 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, lineupEntity, svtEntity);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v11, v12);
    sub_1BCA7E0(&System_Func_UserServantEntity__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__, v17, v18);
    sub_1BCA7E0(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v19, v20);
    byte_4B12858 = 1;
  }
  userServantList = 0LL;
  this->fields.lineupEntity = lineupEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.lineupEntity,
    (int64_t)lineupEntity,
    (int64_t)svtEntity,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.servantEntity = svtEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)svtEntity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.userServantEntity = 0LL;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)p_userServantEntity, 0LL, v29, v30, v31, v32, v33, v34);
  v36 = *p_servantEntity;
  v37 = (UserServantMaster_o *)p_userServantEntity[7];
  if ( *p_servantEntity )
  {
    v38 = *(_QWORD *)&v36->fields.id.fields.currentCryptoKey;
    v39 = *(_QWORD *)&v36->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v35 = *(_QWORD *)&v40.fields.fakeValue;
    v39 = *(_QWORD *)&v40.fields.fakeValue;
    v38 = *(_QWORD *)&v40.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
  *(_QWORD *)&v66.fields.currentCryptoKey = v38;
  *(_QWORD *)&v66.fields.fakeValue = v39;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v37 )
    sub_1BCAA3C(v41, v42);
  if ( UserServantMaster__TryGetEntityListBySvtId(v37, &userServantList, v41, 1, 0LL) )
  {
    v46 = userServantList;
    v47 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v43);
      v47 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v47->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47, v43);
        v47 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
      }
      v49 = (Il2CppObject *)v47->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserServantEntity__int__TypeInfo, v43, v44, v45);
      System_Func_object__int____ctor(
        _9__10_0,
        v49,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__,
        0LL);
      static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
        (int64_t)_9__10_0,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v58 = System_Linq_Enumerable__FirstOrDefault_object_(
            v57,
            (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    *p_userServantEntity = (struct UserServantEntity_o *)v58;
    sub_1BCA784((PartyOrganizationUtility_o *)p_userServantEntity, (int64_t)v58, v59, v60, v61, v62, v63, v64);
  }
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_ClassId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1BCAA3C(this, method);
  return servantEntity->fields.classId;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BonusSelectSummonPartyOrganizationListViewItem_o *v3; // x19
  struct ServantEntity_o *servantEntity; // x8
  ServantExceedMaster_o *servantExceedMaster; // x19
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v3 = this;
  if ( (byte_4B1285A & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1BCA7E0(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method,
                                                                 v2);
    byte_4B1285A = 1;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_8;
  servantExceedMaster = v3->fields.servantExceedMaster;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v9,
                                                               0LL);
  if ( !servantExceedMaster )
LABEL_8:
    sub_1BCAA3C(this, method);
  return ServantExceedMaster__GetFrameType_40396124(servantExceedMaster, (int32_t)this, 0, 0, 0LL);
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
  __int64 v2; // x2
  BonusSelectSummonPartyOrganizationListViewItem_o *v3; // x19
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *svtLimitMaster; // x19
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v3 = this;
  if ( (byte_4B1285B & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1BCA7E0(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method,
                                                                 v2);
    byte_4B1285B = 1;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_9;
  svtLimitMaster = v3->fields.svtLimitMaster;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v9,
                                                               0LL);
  if ( !svtLimitMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantLimitMaster__GetEntity(
                                                                     svtLimitMaster,
                                                                     (int32_t)this,
                                                                     0,
                                                                     0LL)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  BonusSelectSummonPartyOrganizationListViewItem_o *v3; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v3 = this;
  if ( (byte_4B1285C & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1BCA7E0(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method,
                                                                 v2);
    byte_4B1285C = 1;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity )
    sub_1BCAA3C(this, method);
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL);
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
    UserServantEntity__getTreasureDeviceInfo_40943792(userServantEntity, &tdLv, &tdMaxLv, 0LL);
    return tdLv;
  }
  return result;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_tdMaxLevel(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BonusSelectSummonPartyOrganizationListViewItem_o *v3; // x19
  struct ServantEntity_o *servantEntity; // x8
  ServantTreasureDvcMaster_o *svtTdMaster; // x19
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v3 = this;
  if ( (byte_4B1285D & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1BCA7E0(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method,
                                                                 v2);
    byte_4B1285D = 1;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_9;
  svtTdMaster = v3->fields.svtTdMaster;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v9,
                                                               0LL);
  if ( !svtTdMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                                     svtTdMaster,
                                                                     (int32_t)this,
                                                                     1,
                                                                     0LL)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(this, method);
  }
  return ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1285E & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v1, v2);
    byte_4B1285E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonPartyOrganizationListViewItem___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___Modify_b__10_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}