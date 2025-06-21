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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *Master_object; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UserServantMaster_o *userServantMaster; // x21
  __int64 v36; // x20
  __int64 v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // kr00_16
  __int64 v39; // x0
  __int64 v40; // x1
  System_Collections_Generic_List_UserServantEntity__o *v41; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v42; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v44; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4B1894E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&index);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1BCAFF8(&DataManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v13);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v14);
    sub_1BCAFF8(&System_Func_UserServantEntity__int__TypeInfo, v15);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BCAFF8(&Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__, v17);
    sub_1BCAFF8(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v18);
    byte_4B1894E = 1;
  }
  userServantList = 0LL;
  ListViewItem___ctor_42932312((ListViewItem_o *)this, index, 0LL);
  this->fields.servantEntity = servantEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v19, v20);
  this->fields.gachaBonusSelectEntity = gachaBonusSelectEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.gachaBonusSelectEntity, (int32_t)gachaBonusSelectEntity, v21, v22);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  this->fields.servantExceedMaster = (struct ServantExceedMaster_o *)Master_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.servantExceedMaster, (int32_t)Master_object, v24, v25);
  v26 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  this->fields.svtLimitMaster = (struct ServantLimitMaster_o *)v26;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.svtLimitMaster, (int32_t)v26, v27, v28);
  v29 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = (struct ServantTreasureDvcMaster_o *)v29;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.svtTdMaster, (int32_t)v29, v30, v31);
  v32 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v32;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userServantMaster, (int32_t)v32, v33, v34);
  userServantMaster = this->fields.userServantMaster;
  if ( servantEntity )
  {
    v37 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v36 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v36 = *(_QWORD *)&v38.fields.fakeValue;
    v37 = *(_QWORD *)&v38.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v37;
  *(_QWORD *)&v53.fields.fakeValue = v36;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v53, 0LL);
  if ( !userServantMaster )
    sub_1BCB254(v39, v40);
  if ( UserServantMaster__TryGetEntityListBySvtId(userServantMaster, &userServantList, v39, 1, 0LL) )
  {
    v41 = userServantList;
    v42 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v42 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v42->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__8_0,
        v44,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__,
        0LL);
      static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_UserServantEntity__int__o *)_9__8_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v46, v47);
    }
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v41,
                                                                 (System_Func_TSource__TKey__o *)_9__8_0,
                                                                 (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v49 = System_Linq_Enumerable__FirstOrDefault_object_(
            v48,
            (const MethodInfo_303F1D0 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)v49, v50, v51);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Empty(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.userServantEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v2, v3);
  this->fields.servantEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v5, v6);
  this->fields.lineupEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.lineupEntity, 0, v7, v8);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !item )
    sub_1BCB254(this, 0LL);
  BonusSelectSummonPartyOrganizationListViewItem__Modify_34595516(
    this,
    item->fields.lineupEntity,
    item->fields.servantEntity,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_34587768(
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
  ServantEntity_o *v18; // x2
  const MethodInfo *v19; // x3
  signed int max_length; // w9
  unsigned int v21; // w10
  __int64 v22; // x23
  GachaBonusSelectLineupEntity_o *v23; // x10
  GachaBonusSelectLineupEntity_o *v24; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-58h] BYREF
  GachaBonusSelectEntity_o *selectEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B18950 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, *(_QWORD *)&gachaId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GiftMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_1BCAFF8(&DataManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    byte_4B18950 = 1;
  }
  selectEntity = 0LL;
  gachaBonusSelectLineupEntities = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GiftMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  EntityList = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
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
  EntityList = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
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
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= max_length )
          goto LABEL_31;
        v22 = (int)v21;
        v23 = gachaBonusSelectLineupEntities->m_Items[v21];
        if ( !v23 )
          goto LABEL_30;
        if ( v23->fields.giftId == giftId )
          break;
        v21 = v22 + 1;
        if ( (int)v22 + 1 >= max_length )
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
                         (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v18 = (ServantEntity_o *)EntityList;
        }
        else
        {
          v18 = 0LL;
        }
        if ( gachaBonusSelectLineupEntities )
        {
          if ( (unsigned int)v22 >= gachaBonusSelectLineupEntities->max_length )
LABEL_31:
            sub_1BCB25C(EntityList, v17, v18);
          v24 = gachaBonusSelectLineupEntities->m_Items[v22];
          goto LABEL_20;
        }
      }
LABEL_30:
      sub_1BCB254(EntityList, v17);
    }
  }
LABEL_19:
  v18 = 0LL;
  v24 = 0LL;
LABEL_20:
  BonusSelectSummonPartyOrganizationListViewItem__Modify_34595516(this, v24, v18, v19);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_34595516(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CGThumbnailListItem_o *p_userServantEntity; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct ServantEntity_o *v18; // x8
  UserServantMaster_o *sortStr1; // x20
  __int64 v20; // x21
  __int64 v21; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr00_16
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_UserServantEntity__o *v25; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v26; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v28; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B1894F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, lineupEntity);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v7);
    sub_1BCAFF8(&System_Func_UserServantEntity__int__TypeInfo, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BCAFF8(&Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__, v10);
    sub_1BCAFF8(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v11);
    byte_4B1894F = 1;
  }
  userServantList = 0LL;
  this->fields.lineupEntity = lineupEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.lineupEntity, (int32_t)lineupEntity, (int32_t)svtEntity, method);
  this->fields.servantEntity = svtEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)svtEntity, v13, v14);
  this->fields.userServantEntity = 0LL;
  p_userServantEntity = (CGThumbnailListItem_o *)&this->fields.userServantEntity;
  sub_1BCAF9C(p_userServantEntity, 0, v16, v17);
  v18 = *p_servantEntity;
  sortStr1 = (UserServantMaster_o *)p_userServantEntity->fields.sortStr1;
  if ( *p_servantEntity )
  {
    v20 = *(_QWORD *)&v18->fields.id.fields.currentCryptoKey;
    v21 = *(_QWORD *)&v18->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v21 = *(_QWORD *)&v22.fields.fakeValue;
    v20 = *(_QWORD *)&v22.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v20;
  *(_QWORD *)&v37.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v37, 0LL);
  if ( !sortStr1 )
    sub_1BCB254(v23, v24);
  if ( UserServantMaster__TryGetEntityListBySvtId(sortStr1, &userServantList, v23, 1, 0LL) )
  {
    v25 = userServantList;
    v26 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v26 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v26->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v28,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__,
        0LL);
      static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v30, v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v33 = System_Linq_Enumerable__FirstOrDefault_object_(
            v32,
            (const MethodInfo_303F1D0 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    p_userServantEntity->klass = (CGThumbnailListItem_c *)v33;
    sub_1BCAF9C(p_userServantEntity, (int32_t)v33, v34, v35);
  }
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_ClassId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1BCB254(this, method);
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
  if ( (byte_4B18951 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1BCAFF8(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4B18951 = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                               v8,
                                                               0LL);
  if ( !servantExceedMaster )
LABEL_8:
    sub_1BCB254(this, method);
  return ServantExceedMaster__GetFrameType_41831384(servantExceedMaster, (int32_t)this, 0, 0, 0, 0LL);
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
  if ( (byte_4B18952 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1BCAFF8(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4B18952 = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
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
    sub_1BCB254(this, method);
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
  if ( (byte_4B18953 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1BCAFF8(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4B18953 = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    sub_1BCB254(this, method);
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v7, 0LL);
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
    UserServantEntity__getTreasureDeviceInfo_42314120(userServantEntity, &tdLv, &tdMaxLv, 0LL);
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
  if ( (byte_4B18954 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1BCAFF8(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 method);
    byte_4B18954 = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
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
    sub_1BCB254(this, method);
  }
  return ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B18955 & 1) == 0 )
  {
    sub_1BCAFF8(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v1);
    byte_4B18955 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonPartyOrganizationListViewItem___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1BCB254(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___Modify_b__10_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCB254(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}