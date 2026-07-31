void MultiExSummonListViewItem___ctor(
        MultiExSummonListViewItem_o *this,
        GachaInfos_o *gachaInfo,
        bool isOverlap,
        int32_t gachaId,
        int64_t summonSceneInTime,
        int64_t index,
        const MethodInfo *method)
{
  MultiExSummonListViewItem_o *v12; // x24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  v12 = this;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v12->fields.info = gachaInfo;
  v12 = (MultiExSummonListViewItem_o *)((char *)v12 + 120);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v12, (int32_t)gachaInfo, v13, v14, v15, v16, v17, v18);
  LOBYTE(v12->monitor) = isOverlap;
  HIDWORD(v12->monitor) = gachaId;
  *(_QWORD *)&v12->fields.selectNum = summonSceneInTime;
  *(_QWORD *)&v12->fields.sortIndex = index;
}


GachaInfos_o *MultiExSummonListViewItem__GetInfo(MultiExSummonListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.info;
}


bool MultiExSummonListViewItem__IsOverlap(MultiExSummonListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isOverlap;
}


bool MultiExSummonListViewItem__SetSortValue(
        MultiExSummonListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MultiExSummonListViewItem_o *v3; // x19
  struct GachaInfos_o *info; // x8
  int32_t type; // w20
  struct GachaInfos_o *v6; // x8
  __int64 v7; // x2
  __int64 v8; // x2
  ServantExceedMaster_o *v9; // x20
  Il2CppClass *klass; // x21
  void *monitor; // x22
  int v12; // w22
  int v13; // w21
  struct GachaInfos_o *v14; // x8
  __int64 v15; // x23
  __int64 v16; // x8
  struct GachaInfos_o *v17; // x9
  int64_t userSvtId; // x9
  bool result; // w0
  bool v20; // zf
  int v21; // w9
  int64_t v22; // x10
  int64_t index; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v3 = this;
  if ( (byte_59348A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    this = (MultiExSummonListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59348A4 = 1;
  }
  info = v3->fields.info;
  entity = 0;
  if ( !info )
    goto LABEL_50;
  type = info->fields.type;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, method);
  this = (MultiExSummonListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  v6 = v3->fields.info;
  if ( !v6 || !this )
    goto LABEL_50;
  this = (MultiExSummonListViewItem_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v6->fields.objectId,
                                          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v13 = 0;
    v12 = 0;
    goto LABEL_21;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, v7);
  this = (MultiExSummonListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !entity )
    goto LABEL_50;
  v9 = (ServantExceedMaster_o *)this;
  klass = entity[1].klass;
  monitor = entity[1].monitor;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v8);
  *(_QWORD *)&v25.fields.currentCryptoKey = klass;
  *(_QWORD *)&v25.fields.fakeValue = monitor;
  this = (MultiExSummonListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v25, 0);
  if ( !v9 || (this = (MultiExSummonListViewItem_o *)ServantExceedMaster__GetRarity(v9, (int32_t)this, 0), !entity) )
LABEL_50:
    sub_21FFECC(this, sort);
  v12 = (int)this;
  type = HIDWORD(entity[5].klass);
  this = (MultiExSummonListViewItem_o *)ServantEntity__IsPeriodLimitedServantByGachaId(
                                          (ServantEntity_o *)entity,
                                          v3->fields.gachaId,
                                          0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = 1;
  }
  else
  {
    this = (MultiExSummonListViewItem_o *)entity;
    if ( !entity )
      goto LABEL_50;
    this = (MultiExSummonListViewItem_o *)ServantEntity__IsPeriodLimitedServantEquipByGachaId(
                                            (ServantEntity_o *)entity,
                                            v3->fields.gachaId,
                                            v3->fields.summonSceneInTime,
                                            0);
    v13 = (int)this;
  }
LABEL_21:
  v14 = v3->fields.info;
  if ( !v14 )
    goto LABEL_50;
  v15 = v14->fields.isNew && !v3->fields.isOverlap;
  this = (MultiExSummonListViewItem_o *)SvtType__IsServant(type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v12 > 3 )
    {
      if ( v12 == 4 )
      {
        v16 = 80;
        goto LABEL_42;
      }
      if ( v12 == 5 )
      {
        v16 = 90;
        goto LABEL_42;
      }
    }
    else
    {
      if ( !v12 )
      {
        v16 = 100;
        goto LABEL_42;
      }
      if ( v12 == 3 )
      {
        v16 = 70;
        goto LABEL_42;
      }
    }
  }
  this = (MultiExSummonListViewItem_o *)SvtType__IsKeepServantEquip(type, 0);
  if ( ((unsigned __int8)this & 1) != 0 && (v12 & 0xFFFFFFFE) == 4 )
  {
    v16 = 60;
  }
  else
  {
    this = (MultiExSummonListViewItem_o *)SvtType__IsKeepServantEquip(type, 0);
    if ( (v13 & (unsigned int)this & 1) != 0 )
    {
      v13 = 0;
      v16 = 50;
    }
    else
    {
      this = (MultiExSummonListViewItem_o *)SvtType__IsCommandCode(type, 0);
      v16 = 40;
      v13 = 0;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v15 = 0;
        v16 = 0;
      }
    }
  }
LABEL_42:
  v17 = v3->fields.info;
  if ( !v17 )
    goto LABEL_50;
  userSvtId = v17->fields.userSvtId;
  result = 1;
  v20 = userSvtId == 0;
  if ( userSvtId )
  {
    v21 = 1;
  }
  else
  {
    v16 = 0;
    v21 = 0;
  }
  if ( v20 )
    v22 = 0;
  else
    v22 = v15;
  v3->fields.sortValue0 = v16;
  index = v3->fields.index;
  v3->fields.sortValue1 = v21 & (unsigned int)v13;
  v3->fields.sortValue2 = v22;
  v3->fields.sortValue2B = index;
  return result;
}