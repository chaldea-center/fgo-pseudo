void __fastcall MultiExSummonListViewItem___ctor(
        MultiExSummonListViewItem_o *this,
        GachaInfos_o *gachaInfo,
        bool isOverlap,
        int32_t gachaId,
        int64_t summonSceneInTime,
        int64_t index,
        const MethodInfo *method)
{
  MultiExSummonListViewItem_o *v11; // x23
  bool v12; // w24
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  v11 = this;
  v12 = isOverlap;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v11->fields.info = gachaInfo;
  v11 = (MultiExSummonListViewItem_o *)((char *)v11 + 112);
  sub_1BCAF9C((CGThumbnailListItem_o *)v11, (int32_t)gachaInfo, v13, v14);
  LOBYTE(v11->monitor) = v12;
  HIDWORD(v11->monitor) = gachaId;
  *(_QWORD *)&v11->fields.selectNum = summonSceneInTime;
  *(_QWORD *)&v11->fields.sortIndex = index;
}


GachaInfos_o *__fastcall MultiExSummonListViewItem__GetInfo(
        MultiExSummonListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


bool __fastcall MultiExSummonListViewItem__IsOverlap(MultiExSummonListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isOverlap;
}


bool __fastcall MultiExSummonListViewItem__SetSortValue(
        MultiExSummonListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MultiExSummonListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct GachaInfos_o *info; // x8
  int32_t type; // w20
  struct GachaInfos_o *v10; // x8
  ServantExceedMaster_o *v11; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int v14; // w22
  int v15; // w21
  struct GachaInfos_o *v16; // x8
  __int64 v17; // x23
  __int64 v18; // x8
  struct GachaInfos_o *v19; // x9
  int64_t userSvtId; // x9
  int64_t index; // x10
  bool result; // w0
  bool v23; // zf
  _BOOL4 v24; // w9
  __int64 v25; // x11
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  v3 = this;
  if ( (byte_4B189A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantExceedMaster___, sort);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    this = (MultiExSummonListViewItem_o *)sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B189A1 = 1;
  }
  entity = 0LL;
  info = v3->fields.info;
  if ( !info )
    goto LABEL_46;
  type = info->fields.type;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MultiExSummonListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  v10 = v3->fields.info;
  if ( !v10 || !this )
    goto LABEL_46;
  this = (MultiExSummonListViewItem_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v10->fields.objectId,
                                          (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v15 = 0;
    v14 = 0;
    goto LABEL_21;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MultiExSummonListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !entity )
    goto LABEL_46;
  v11 = (ServantExceedMaster_o *)this;
  klass = entity[1].klass;
  monitor = entity[1].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = klass;
  *(_QWORD *)&v27.fields.fakeValue = monitor;
  this = (MultiExSummonListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v27, 0LL);
  if ( !v11 || (this = (MultiExSummonListViewItem_o *)ServantExceedMaster__GetRarity(v11, (int32_t)this, 0LL), !entity) )
LABEL_46:
    sub_1BCB254(this, sort);
  type = HIDWORD(entity[5].klass);
  v14 = (int)this;
  this = (MultiExSummonListViewItem_o *)ServantEntity__IsPeriodLimitedServantByGachaId(
                                          (ServantEntity_o *)entity,
                                          v3->fields.gachaId,
                                          0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = 1;
  }
  else
  {
    this = (MultiExSummonListViewItem_o *)entity;
    if ( !entity )
      goto LABEL_46;
    this = (MultiExSummonListViewItem_o *)ServantEntity__IsPeriodLimitedServantEquipByGachaId(
                                            (ServantEntity_o *)entity,
                                            v3->fields.gachaId,
                                            v3->fields.summonSceneInTime,
                                            0LL);
    v15 = (int)this;
  }
LABEL_21:
  v16 = v3->fields.info;
  if ( !v16 )
    goto LABEL_46;
  v17 = v16->fields.isNew && !v3->fields.isOverlap;
  this = (MultiExSummonListViewItem_o *)SvtType__IsServant(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = 90LL;
    switch ( v14 )
    {
      case 0:
        v18 = 100LL;
        break;
      case 3:
        v18 = 70LL;
        break;
      case 4:
        v18 = 80LL;
        break;
      case 5:
        break;
      default:
        goto LABEL_28;
    }
  }
  else
  {
LABEL_28:
    this = (MultiExSummonListViewItem_o *)SvtType__IsKeepServantEquip(type, 0LL);
    if ( (v14 & 0xFFFFFFFE) == 4 && ((unsigned __int8)this & 1) != 0 )
    {
      v18 = 60LL;
    }
    else
    {
      this = (MultiExSummonListViewItem_o *)SvtType__IsKeepServantEquip(type, 0LL);
      if ( (v15 & (unsigned int)this & 1) != 0 )
      {
        v15 = 0;
        v18 = 50LL;
      }
      else
      {
        this = (MultiExSummonListViewItem_o *)SvtType__IsCommandCode(type, 0LL);
        v18 = 40LL;
        v15 = 0;
        if ( ((unsigned __int8)this & 1) == 0 )
          v17 = 0LL;
        if ( ((unsigned __int8)this & 1) == 0 )
          v18 = 0LL;
      }
    }
  }
  v19 = v3->fields.info;
  if ( !v19 )
    goto LABEL_46;
  userSvtId = v19->fields.userSvtId;
  index = v3->fields.index;
  result = 1;
  v23 = userSvtId == 0;
  v24 = userSvtId != 0;
  if ( v23 )
    v25 = 0LL;
  else
    v25 = v17;
  if ( v23 )
    v18 = 0LL;
  v3->fields.sortValue0 = v18;
  v3->fields.sortValue1 = v15 & (unsigned int)v24;
  v3->fields.sortValue2 = v25;
  v3->fields.sortValue2B = index;
  return result;
}