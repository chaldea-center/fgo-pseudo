void __fastcall BonusSelectSummonPartyOrganizationListViewItem___ctor(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t index,
        ServantEntity_o *servantEntity,
        GachaBonusSelectEntity_o *gachaBonusSelectEntity,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Master_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  UserServantMaster_o *userServantMaster; // x21
  __int64 v26; // x20
  __int64 v27; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // kr00_16
  __int64 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_UserServantEntity__o *v31; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v32; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v34; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4A578CA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1B885B0(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__);
    sub_1B885B0(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_4A578CA = 1;
  }
  userServantList = 0LL;
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.servantEntity = servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v9, v10);
  this->fields.gachaBonusSelectEntity = gachaBonusSelectEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.gachaBonusSelectEntity,
    (int32_t)gachaBonusSelectEntity,
    v11,
    v12);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  this->fields.servantExceedMaster = (struct ServantExceedMaster_o *)Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantExceedMaster, (int32_t)Master_object, v14, v15);
  v16 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  this->fields.svtLimitMaster = (struct ServantLimitMaster_o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitMaster, (int32_t)v16, v17, v18);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = (struct ServantTreasureDvcMaster_o *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtTdMaster, (int32_t)v19, v20, v21);
  v22 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantMaster, (int32_t)v22, v23, v24);
  userServantMaster = this->fields.userServantMaster;
  if ( servantEntity )
  {
    v27 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v26 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v26 = *(_QWORD *)&v28.fields.fakeValue;
    v27 = *(_QWORD *)&v28.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v27;
  *(_QWORD *)&v43.fields.fakeValue = v26;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43, 0LL);
  if ( !userServantMaster )
    sub_1B8880C(v29, v30);
  if ( UserServantMaster__TryGetEntityListBySvtId(userServantMaster, &userServantList, v29, 1, 0LL) )
  {
    v31 = userServantList;
    v32 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v32 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v32->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__8_0,
        v34,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__,
        0LL);
      static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_UserServantEntity__int__o *)_9__8_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v36, v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                                 (System_Func_TSource__TKey__o *)_9__8_0,
                                                                 (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v39 = System_Linq_Enumerable__FirstOrDefault_object_(
            v38,
            (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v39;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, (int32_t)v39, v40, v41);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Empty(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3

  this->fields.userServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v2, v3);
  this->fields.servantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, v5, v6);
  this->fields.lineupEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lineupEntity, 0, v7, v8);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !item )
    sub_1B8880C(this, 0LL);
  BonusSelectSummonPartyOrganizationListViewItem__Modify_33009572(
    this,
    item->fields.lineupEntity,
    item->fields.servantEntity,
    v3);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_33001796(
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
  signed int max_length; // w9
  unsigned int v15; // w10
  __int64 v16; // x23
  GachaBonusSelectLineupEntity_o *v17; // x10
  ServantEntity_o *v18; // x2
  GachaBonusSelectLineupEntity_o *v19; // x1
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-58h] BYREF
  GachaBonusSelectEntity_o *selectEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A578CC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GachaBonusSelectMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4A578CC = 1;
  }
  selectEntity = 0LL;
  gachaBonusSelectLineupEntities = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  EntityList = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
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
  EntityList = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
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
        EntityList = GiftMaster__getDataById((GiftMaster_o *)Master_object, giftId, 0LL);
        if ( EntityList )
        {
          if ( !v10 )
            goto LABEL_30;
          EntityList = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)v10,
                         *((_DWORD *)EntityList + 6),
                         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v18 = (ServantEntity_o *)EntityList;
        }
        else
        {
          v18 = 0LL;
        }
        if ( gachaBonusSelectLineupEntities )
        {
          if ( (unsigned int)v16 >= gachaBonusSelectLineupEntities->max_length )
LABEL_31:
            sub_1B88814(EntityList, v12);
          v19 = gachaBonusSelectLineupEntities->m_Items[v16];
          goto LABEL_20;
        }
      }
LABEL_30:
      sub_1B8880C(EntityList, v12);
    }
  }
LABEL_19:
  v18 = 0LL;
  v19 = 0LL;
LABEL_20:
  BonusSelectSummonPartyOrganizationListViewItem__Modify_33009572(this, v19, v18, v13);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem__Modify_33009572(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusBattleListViewItem_o *p_userServantEntity; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  struct ServantEntity_o *v13; // x8
  UserServantMaster_o *sortStr1; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // kr00_16
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_UserServantEntity__o *v20; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v21; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v23; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4A578CB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1B885B0(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__);
    sub_1B885B0(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_4A578CB = 1;
  }
  userServantList = 0LL;
  this->fields.lineupEntity = lineupEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.lineupEntity,
    (int32_t)lineupEntity,
    (int32_t)svtEntity,
    (int32_t)method);
  this->fields.servantEntity = svtEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)svtEntity, v8, v9);
  this->fields.userServantEntity = 0LL;
  p_userServantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity;
  sub_1B88554(p_userServantEntity, 0, v11, v12);
  v13 = *p_servantEntity;
  sortStr1 = (UserServantMaster_o *)p_userServantEntity->fields.sortStr1;
  if ( *p_servantEntity )
  {
    v15 = *(_QWORD *)&v13->fields.id.fields.currentCryptoKey;
    v16 = *(_QWORD *)&v13->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v16 = *(_QWORD *)&v17.fields.fakeValue;
    v15 = *(_QWORD *)&v17.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v15;
  *(_QWORD *)&v32.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v32, 0LL);
  if ( !sortStr1 )
    sub_1B8880C(v18, v19);
  if ( UserServantMaster__TryGetEntityListBySvtId(sortStr1, &userServantList, v18, 1, 0LL) )
  {
    v20 = userServantList;
    v21 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
      v21 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__int__o *)v21->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v23,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__,
        0LL);
      static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v28 = System_Linq_Enumerable__FirstOrDefault_object_(
            v27,
            (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    p_userServantEntity->klass = (ServantStatusBattleListViewItem_c *)v28;
    sub_1B88554(p_userServantEntity, (int32_t)v28, v29, v30);
  }
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem__get_ClassId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1B8880C(this, method);
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
  if ( (byte_4A578CD & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A578CD = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                               v8,
                                                               0LL);
  if ( !servantExceedMaster )
LABEL_8:
    sub_1B8880C(this, method);
  return ServantExceedMaster__GetFrameType_39669416(servantExceedMaster, (int32_t)this, 0, 0, 0LL);
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
  if ( (byte_4A578CE & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A578CE = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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
    sub_1B8880C(this, method);
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
  if ( (byte_4A578CF & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A578CF = 1;
  }
  servantEntity = v2->fields.servantEntity;
  if ( !servantEntity )
    sub_1B8880C(this, method);
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7, 0LL);
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
    UserServantEntity__getTreasureDeviceInfo_40212352(userServantEntity, &tdLv, &tdMaxLv, 0LL);
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
  if ( (byte_4A578D0 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A578D0 = 1;
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
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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
    sub_1B8880C(this, method);
  }
  return ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A578D1 & 1) == 0 )
  {
    sub_1B885B0(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_4A578D1 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonPartyOrganizationListViewItem___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}


int32_t __fastcall BonusSelectSummonPartyOrganizationListViewItem___c___Modify_b__10_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.treasureDeviceLv1;
}