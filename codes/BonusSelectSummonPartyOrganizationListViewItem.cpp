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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *Master_object; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  Il2CppObject *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  UserServantMaster_o *userServantMaster; // x21
  __int64 v60; // x20
  __int64 v61; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // kr00_16
  __int64 v63; // x0
  __int64 v64; // x1
  System_Collections_Generic_List_UserServantEntity__o *v65; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v66; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v68; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  Il2CppObject *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_4C1E500 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&index);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLimitMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1C3B764(&DataManager_TypeInfo, v12);
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v13);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v14);
    sub_1C3B764(&System_Func_UserServantEntity__int__TypeInfo, v15);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C3B764(&Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__, v17);
    sub_1C3B764(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v18);
    byte_4C1E500 = 1;
  }
  userServantList = 0LL;
  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  this->fields.servantEntity = servantEntity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)servantEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.gachaBonusSelectEntity = gachaBonusSelectEntity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.gachaBonusSelectEntity,
    (int64_t)gachaBonusSelectEntity,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  this->fields.servantExceedMaster = (struct ServantExceedMaster_o *)Master_object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.servantExceedMaster,
    (int64_t)Master_object,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  this->fields.svtLimitMaster = (struct ServantLimitMaster_o *)v38;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.svtLimitMaster, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = (struct ServantTreasureDvcMaster_o *)v45;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.svtTdMaster, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v52;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.userServantMaster, (int64_t)v52, v53, v54, v55, v56, v57, v58);
  userServantMaster = this->fields.userServantMaster;
  if ( servantEntity )
  {
    v61 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v60 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v60 = *(_QWORD *)&v62.fields.fakeValue;
    v61 = *(_QWORD *)&v62.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = v61;
  *(_QWORD *)&v85.fields.fakeValue = v60;
  v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v85, 0LL);
  if ( !userServantMaster )
    sub_1C3B9C0(v63, v64);
  if ( UserServantMaster__TryGetEntityListBySvtId(userServantMaster, &userServantList, v63, 1, 0LL) )
  {
    v65 = userServantList;
    v66 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v66 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v66->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        v66 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
      }
      v68 = (Il2CppObject *)v66->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__8_0,
        v68,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__,
        0LL);
      static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_UserServantEntity__int__o *)_9__8_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v65,
                                                                 (System_Func_TSource__TKey__o *)_9__8_0,
                                                                 (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v77 = System_Linq_Enumerable__FirstOrDefault_object_(
            v76,
            (const MethodInfo_3013368 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v77;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
      (int64_t)v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.userServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.servantEntity = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.servantEntity, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.lineupEntity = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.lineupEntity, 0LL, v15, v16, v17, v18, v19, v20);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !item )
    sub_1C3B9C0(this, 0LL);
  BonusSelectSummonPartyOrganizationListViewItem__Modify_34229504(
    this,
    item->fields.lineupEntity,
    item->fields.servantEntity,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_34221716(
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
  Il2CppObject *Master_object; // x22
  Il2CppObject *v15; // x21
  void *EntityList; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  signed int max_length; // w9
  unsigned int v20; // w10
  __int64 v21; // x23
  GachaBonusSelectLineupEntity_o *v22; // x10
  ServantEntity_o *v23; // x2
  GachaBonusSelectLineupEntity_o *v24; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-58h] BYREF
  GachaBonusSelectEntity_o *selectEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C1E502 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, *(_QWORD *)&gachaId);
    sub_1C3B764(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_GiftMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_1C3B764(&DataManager_TypeInfo, v12);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    byte_4C1E502 = 1;
  }
  selectEntity = 0LL;
  gachaBonusSelectLineupEntities = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GiftMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
  EntityList = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EntityList = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
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
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= max_length )
          goto LABEL_31;
        v21 = (int)v20;
        v22 = gachaBonusSelectLineupEntities->m_Items[v20];
        if ( !v22 )
          goto LABEL_30;
        if ( v22->fields.giftId == giftId )
          break;
        v20 = v21 + 1;
        if ( (int)v21 + 1 >= max_length )
          goto LABEL_19;
      }
      if ( Master_object )
      {
        EntityList = GiftMaster__getDataById((GiftMaster_o *)Master_object, giftId, 0LL);
        if ( EntityList )
        {
          if ( !v15 )
            goto LABEL_30;
          EntityList = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                         *((_DWORD *)EntityList + 6),
                         (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v23 = (ServantEntity_o *)EntityList;
        }
        else
        {
          v23 = 0LL;
        }
        if ( gachaBonusSelectLineupEntities )
        {
          if ( (unsigned int)v21 >= gachaBonusSelectLineupEntities->max_length )
LABEL_31:
            sub_1C3B9C8(EntityList, v17);
          v24 = gachaBonusSelectLineupEntities->m_Items[v21];
          goto LABEL_20;
        }
      }
LABEL_30:
      sub_1C3B9C0(EntityList, v17);
    }
  }
LABEL_19:
  v23 = 0LL;
  v24 = 0LL;
LABEL_20:
  BonusSelectSummonPartyOrganizationListViewItem__Modify_34229504(this, v24, v23, v18);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_34229504(
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct ServantEntity_o **p_servantEntity; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UserServantEntity_o **p_userServantEntity; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct ServantEntity_o *v30; // x8
  UserServantMaster_o *v31; // x20
  __int64 v32; // x21
  __int64 v33; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // kr00_16
  __int64 v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_UserServantEntity__o *v37; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v38; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v40; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  Il2CppObject *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4C1E501 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, lineupEntity);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v11);
    sub_1C3B764(&System_Func_UserServantEntity__int__TypeInfo, v12);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C3B764(&Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__, v14);
    sub_1C3B764(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v15);
    byte_4C1E501 = 1;
  }
  userServantList = 0LL;
  this->fields.lineupEntity = lineupEntity;
  sub_1C3B708(
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)svtEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.userServantEntity = 0LL;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C3B708((PartyOrganizationUtility_o *)p_userServantEntity, 0LL, v24, v25, v26, v27, v28, v29);
  v30 = *p_servantEntity;
  v31 = (UserServantMaster_o *)p_userServantEntity[7];
  if ( *p_servantEntity )
  {
    v32 = *(_QWORD *)&v30->fields.id.fields.currentCryptoKey;
    v33 = *(_QWORD *)&v30->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v33 = *(_QWORD *)&v34.fields.fakeValue;
    v32 = *(_QWORD *)&v34.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v32;
  *(_QWORD *)&v57.fields.fakeValue = v33;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v57, 0LL);
  if ( !v31 )
    sub_1C3B9C0(v35, v36);
  if ( UserServantMaster__TryGetEntityListBySvtId(v31, &userServantList, v35, 1, 0LL) )
  {
    v37 = userServantList;
    v38 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v38 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v38->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v40,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__,
        0LL);
      static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
        (int64_t)_9__10_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v49 = System_Linq_Enumerable__FirstOrDefault_object_(
            v48,
            (const MethodInfo_3013368 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    *p_userServantEntity = (struct UserServantEntity_o *)v49;
    sub_1C3B708((PartyOrganizationUtility_o *)p_userServantEntity, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  }
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_ClassId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1C3B9C0(this, method);
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
  if ( (byte_4C1E503 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1C3B764(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4C1E503 = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                               v8,
                                                               0LL);
  if ( !servantExceedMaster )
LABEL_8:
    sub_1C3B9C0(this, method);
  return ServantExceedMaster__GetFrameType_41215540(servantExceedMaster, (int32_t)this, 0, 0, 0LL);
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
  if ( (byte_4C1E504 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1C3B764(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4C1E504 = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                               v8,
                                                               0LL);
  if ( !svtLimitMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantLimitMaster__GetEntity(
                                                                     svtLimitMaster,
                                                                     (int32_t)this,
                                                                     0,
                                                                     0LL)) == 0LL )
  {
LABEL_9:
    sub_1C3B9C0(this, method);
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
  if ( (byte_4C1E505 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1C3B764(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4C1E505 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    sub_1C3B9C0(this, method);
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v7, 0LL);
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
    UserServantEntity__getTreasureDeviceInfo_41687172(userServantEntity, &tdLv, &tdMaxLv, 0LL);
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
  if ( (byte_4C1E506 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1C3B764(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4C1E506 = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                               v8,
                                                               0LL);
  if ( !svtTdMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                                     svtTdMaster,
                                                                     (int32_t)this,
                                                                     1,
                                                                     0LL)) == 0LL )
  {
LABEL_9:
    sub_1C3B9C0(this, method);
  }
  return ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1E507 & 1) == 0 )
  {
    sub_1C3B764(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v1);
    byte_4C1E507 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonPartyOrganizationListViewItem___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___Modify_b__10_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}