void BonusSelectSummonPartyOrganizationListViewItem___ctor(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t index,
        ServantEntity_o *servantEntity,
        GachaBonusSelectEntity_o *gachaBonusSelectEntity,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Master_object; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x1
  __int64 v52; // x2
  UserServantMaster_o *userServantMaster; // x21
  __int64 v54; // x20
  __int64 v55; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // kr00_16
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x2
  System_Collections_Generic_List_UserServantEntity__o *v61; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v62; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v65; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  Il2CppObject *v74; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_596C980 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_2213A60(&System_Func_UserServantEntity__int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__);
    sub_2213A60(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_596C980 = 1;
  }
  userServantList = 0;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.servantEntity = servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)servantEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.gachaBonusSelectEntity = gachaBonusSelectEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gachaBonusSelectEntity,
    (int32_t)gachaBonusSelectEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21, v22);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  this->fields.servantExceedMaster = (struct ServantExceedMaster_o *)Master_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantExceedMaster,
    (int32_t)Master_object,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  this->fields.svtLimitMaster = (struct ServantLimitMaster_o *)v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtLimitMaster,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  this->fields.svtTdMaster = (struct ServantTreasureDvcMaster_o *)v37;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.svtTdMaster, (int32_t)v37, v38, v39, v40, v41, v42, v43);
  v44 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v44;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantMaster,
    (int32_t)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  userServantMaster = this->fields.userServantMaster;
  if ( servantEntity )
  {
    v55 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v54 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51, v52);
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
    v51 = *(_QWORD *)&v56.fields.fakeValue;
    v55 = *(_QWORD *)&v56.fields.currentCryptoKey;
    v54 = *(_QWORD *)&v56.fields.fakeValue;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51, v52);
  *(_QWORD *)&v82.fields.currentCryptoKey = v55;
  *(_QWORD *)&v82.fields.fakeValue = v54;
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v82, 0);
  if ( !userServantMaster )
    sub_2213CDC(v57, v58);
  if ( UserServantMaster__TryGetEntityListBySvtId(userServantMaster, &userServantList, v57, 1, 0) )
  {
    v61 = userServantList;
    v62 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !*(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v59, v60);
      v62 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    static_fields = v62->static_fields;
    _9__8_0 = (System_Func_object__int__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !*(&v62->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v62, v59, v60);
        static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      }
      v65 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__8_0,
        v65,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c___ctor_b__8_0__,
        0);
      v66 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      v66->__9__8_0 = (struct System_Func_UserServantEntity__int__o *)_9__8_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v66->__9__8_0, (int32_t)_9__8_0, v67, v68, v69, v70, v71, v72);
    }
    v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v61,
                                                                 (System_Func_TSource__TKey__o *)_9__8_0,
                                                                 (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v74 = System_Linq_Enumerable__FirstOrDefault_object_(
            v73,
            (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v74;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
      (int32_t)v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
  }
}


void BonusSelectSummonPartyOrganizationListViewItem__Empty(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  this->fields.userServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity, 0, v2, v3, v4, v5, v6, v7);
  this->fields.servantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity, 0, v9, v10, v11, v12, v13, v14);
  this->fields.lineupEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.lineupEntity, 0, v15, v16, v17, v18, v19, v20);
}


void BonusSelectSummonPartyOrganizationListViewItem__Modify(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !item )
    sub_2213CDC(this, 0);
  BonusSelectSummonPartyOrganizationListViewItem__Modify_42116516(
    this,
    item->fields.lineupEntity,
    item->fields.servantEntity,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void BonusSelectSummonPartyOrganizationListViewItem__Modify_42109276(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        int32_t gachaId,
        int32_t slot,
        int32_t giftId,
        const MethodInfo *method)
{
  int v9; // w8
  Il2CppObject *Master_object; // x22
  Il2CppObject *v11; // x21
  void *EntityList; // x0
  GachaBonusSelectLineupEntity_o *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  ServantEntity_o *v17; // x2
  int max_length; // w9
  int v19; // w11
  __int64 v20; // x23
  GachaBonusSelectLineupEntity_o *v21; // x11
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+8h] [xbp-58h] BYREF
  GachaBonusSelectEntity_o *selectEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C982 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaBonusSelectMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_596C982 = 1;
  }
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  selectEntity = 0;
  gachaBonusSelectLineupEntities = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&gachaId, *(_QWORD *)&slot);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  EntityList = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !EntityList )
    goto LABEL_30;
  if ( !GachaBonusSelectMaster__TryGetEntitySlot(
          (GachaBonusSelectMaster_o *)EntityList,
          &selectEntity,
          gachaId,
          slot,
          0) )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
  EntityList = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
  if ( !selectEntity || !EntityList )
    goto LABEL_30;
  EntityList = (void *)GachaBonusSelectLineupMaster__TryGetEntityList(
                         (GachaBonusSelectLineupMaster_o *)EntityList,
                         &gachaBonusSelectLineupEntities,
                         selectEntity->fields.gachaBonusSelectLineupId,
                         0);
  v17 = 0;
  v13 = 0;
  if ( ((unsigned __int8)EntityList & 1) != 0 )
  {
    if ( !gachaBonusSelectLineupEntities )
      goto LABEL_30;
    max_length = gachaBonusSelectLineupEntities->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( max_length == v19 )
          goto LABEL_31;
        v20 = v19;
        v21 = gachaBonusSelectLineupEntities->m_Items[v19];
        if ( !v21 )
          goto LABEL_30;
        if ( v21->fields.giftId == giftId )
          break;
        v19 = v20 + 1;
        if ( (max_length & ~(max_length >> 31)) == (_DWORD)v20 + 1 )
          goto LABEL_19;
      }
      if ( Master_object )
      {
        EntityList = GiftMaster__getDataById((GiftMaster_o *)Master_object, giftId, 0);
        if ( EntityList )
        {
          if ( !v11 )
            goto LABEL_30;
          EntityList = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
                         *((_DWORD *)EntityList + 6),
                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v17 = (ServantEntity_o *)EntityList;
        }
        else
        {
          v17 = 0;
        }
        if ( gachaBonusSelectLineupEntities )
        {
          if ( (unsigned int)v20 >= LODWORD(gachaBonusSelectLineupEntities->max_length) )
LABEL_31:
            sub_2213CE4(EntityList);
          v13 = gachaBonusSelectLineupEntities->m_Items[v20];
          goto LABEL_28;
        }
      }
LABEL_30:
      sub_2213CDC(EntityList, v13);
    }
LABEL_19:
    v17 = 0;
    v13 = 0;
  }
LABEL_28:
  BonusSelectSummonPartyOrganizationListViewItem__Modify_42116516(this, v13, v17, v16);
}


void BonusSelectSummonPartyOrganizationListViewItem__Modify_42116516(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  MissionNaviTransitionBoardItem_o *p_userServantEntity; // x19
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  __int64 v26; // x2
  struct ServantEntity_o *v27; // x8
  UserServantMaster_o *sortStr1; // x20
  __int64 v29; // x21
  __int64 v30; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // kr00_16
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_UserServantEntity__o *v36; // x20
  BonusSelectSummonPartyOrganizationListViewItem___c_c *v37; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v40; // x22
  struct BonusSelectSummonPartyOrganizationListViewItem___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  Il2CppObject *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_596C981 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_2213A60(&System_Func_UserServantEntity__int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__);
    sub_2213A60(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_596C981 = 1;
  }
  userServantList = 0;
  this->fields.lineupEntity = lineupEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.lineupEntity,
    (int32_t)lineupEntity,
    (System_String_o *)svtEntity,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.servantEntity = svtEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)svtEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.userServantEntity = 0;
  p_userServantEntity = (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity;
  sub_2213A04(p_userServantEntity, 0, v19, v20, v21, v22, v23, v24);
  v27 = *p_servantEntity;
  sortStr1 = (UserServantMaster_o *)p_userServantEntity->fields.sortStr1;
  if ( *p_servantEntity )
  {
    v29 = *(_QWORD *)&v27->fields.id.fields.currentCryptoKey;
    v30 = *(_QWORD *)&v27->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
    v25 = *(_QWORD *)&v31.fields.fakeValue;
    v29 = *(_QWORD *)&v31.fields.currentCryptoKey;
    v30 = *(_QWORD *)&v31.fields.fakeValue;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
  *(_QWORD *)&v57.fields.currentCryptoKey = v29;
  *(_QWORD *)&v57.fields.fakeValue = v30;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v57, 0);
  if ( !sortStr1 )
    sub_2213CDC(v32, v33);
  if ( UserServantMaster__TryGetEntityListBySvtId(sortStr1, &userServantList, v32, 1, 0) )
  {
    v36 = userServantList;
    v37 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    if ( !*(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo, v34, v35);
      v37 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo;
    }
    static_fields = v37->static_fields;
    _9__10_0 = (System_Func_object__int__o *)static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !*(&v37->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v37, v34, v35);
        static_fields = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)static_fields->__9;
      _9__10_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__10_0,
        v40,
        Method_BonusSelectSummonPartyOrganizationListViewItem___c__Modify_b__10_0__,
        0);
      v41 = BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields;
      v41->__9__10_0 = (struct System_Func_UserServantEntity__int__o *)_9__10_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->__9__10_0, (int32_t)_9__10_0, v42, v43, v44, v45, v46, v47);
    }
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                                                                 (System_Func_TSource__TKey__o *)_9__10_0,
                                                                 (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    v49 = System_Linq_Enumerable__FirstOrDefault_object_(
            v48,
            (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    p_userServantEntity->klass = (MissionNaviTransitionBoardItem_c *)v49;
    sub_2213A04(p_userServantEntity, (int32_t)v49, v50, v51, v52, v53, v54, v55);
  }
}


int32_t BonusSelectSummonPartyOrganizationListViewItem__get_ClassId(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_2213CDC(this, method);
  return servantEntity->fields.classId;
}


int32_t BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BonusSelectSummonPartyOrganizationListViewItem_o *v3; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  ServantExceedMaster_o *servantExceedMaster; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v3 = this;
  if ( (byte_596C983 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C983 = 1;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_8;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  servantExceedMaster = v3->fields.servantExceedMaster;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                               v9,
                                                               0);
  if ( !servantExceedMaster )
LABEL_8:
    sub_2213CDC(this, method);
  return ServantExceedMaster__GetFrameType_49706744(servantExceedMaster, (int32_t)this, 0, 0, 0, 0);
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
  __int64 v2; // x2
  BonusSelectSummonPartyOrganizationListViewItem_o *v3; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  ServantLimitMaster_o *svtLimitMaster; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v3 = this;
  if ( (byte_596C984 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C984 = 1;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_9;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  svtLimitMaster = v3->fields.svtLimitMaster;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                               v9,
                                                               0);
  if ( !svtLimitMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantLimitMaster__GetEntity(
                                                                     svtLimitMaster,
                                                                     (int32_t)this,
                                                                     0,
                                                                     0)) == 0 )
  {
LABEL_9:
    sub_2213CDC(this, method);
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
  __int64 v2; // x2
  BonusSelectSummonPartyOrganizationListViewItem_o *v3; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v3 = this;
  if ( (byte_596C985 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C985 = 1;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity )
    sub_2213CDC(this, method);
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v8, 0);
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
  UserServantEntity_o *userServantEntity; // x0
  int32_t v3; // w8
  int32_t tdMaxLv; // [xsp+8h] [xbp-8h] BYREF
  int32_t tdLv; // [xsp+Ch] [xbp-4h] BYREF

  userServantEntity = this->fields.userServantEntity;
  v3 = 1;
  tdLv = 1;
  if ( userServantEntity )
  {
    UserServantEntity__getTreasureDeviceInfo_50192116(userServantEntity, &tdLv, &tdMaxLv, 0);
    return tdLv;
  }
  return v3;
}


int32_t BonusSelectSummonPartyOrganizationListViewItem__get_tdMaxLevel(
        BonusSelectSummonPartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BonusSelectSummonPartyOrganizationListViewItem_o *v3; // x19
  struct ServantEntity_o *servantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  ServantTreasureDvcMaster_o *svtTdMaster; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v3 = this;
  if ( (byte_596C986 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C986 = 1;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_9;
  v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  svtTdMaster = v3->fields.svtTdMaster;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (BonusSelectSummonPartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                               v9,
                                                               0);
  if ( !svtTdMaster
    || (this = (BonusSelectSummonPartyOrganizationListViewItem_o *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                                     svtTdMaster,
                                                                     (int32_t)this,
                                                                     1,
                                                                     0)) == 0 )
  {
LABEL_9:
    sub_2213CDC(this, method);
  }
  return ServantTreasureDvcEntity__getLevelMax((ServantTreasureDvcEntity_o *)this, 0);
}


void BonusSelectSummonPartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C987 & 1) == 0 )
  {
    sub_2213A60(&BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
    byte_596C987 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonPartyOrganizationListViewItem___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BonusSelectSummonPartyOrganizationListViewItem___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return entity->fields.treasureDeviceLv1;
}


int32_t BonusSelectSummonPartyOrganizationListViewItem___c___Modify_b__10_0(
        BonusSelectSummonPartyOrganizationListViewItem___c_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.treasureDeviceLv1;
}