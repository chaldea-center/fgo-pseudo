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
  sub_1B4CF34((CGThumbnailListItem_o *)v11, (int32_t)gachaInfo, v13, v14);
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
  __int64 v8; // x1
  struct GachaInfos_o *info; // x8
  int32_t type; // w20
  struct GachaInfos_o *v11; // x8
  ServantExceedMaster_o *v12; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int v15; // w22
  int v16; // w21
  struct GachaInfos_o *v17; // x8
  __int64 v18; // x23
  __int64 v19; // x8
  struct GachaInfos_o *v20; // x9
  int64_t userSvtId; // x9
  int64_t index; // x10
  bool result; // w0
  bool v24; // zf
  _BOOL4 v25; // w9
  __int64 v26; // x11
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v3 = this;
  if ( (byte_49B7445 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantExceedMaster___, sort);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (MultiExSummonListViewItem_o *)sub_1B4CF90(&Rarity_TYPE_TypeInfo, v8);
    byte_49B7445 = 1;
  }
  entity = 0LL;
  info = v3->fields.info;
  if ( !info )
    goto LABEL_46;
  type = info->fields.type;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MultiExSummonListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
  v11 = v3->fields.info;
  if ( !v11 || !this )
    goto LABEL_46;
  this = (MultiExSummonListViewItem_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v11->fields.objectId,
                                          (const MethodInfo_319D9E8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v16 = 0;
    v15 = 0;
    goto LABEL_21;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MultiExSummonListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !entity )
    goto LABEL_46;
  v12 = (ServantExceedMaster_o *)this;
  klass = entity[1].klass;
  monitor = entity[1].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = klass;
  *(_QWORD *)&v28.fields.fakeValue = monitor;
  this = (MultiExSummonListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v28, 0LL);
  if ( !v12 || (this = (MultiExSummonListViewItem_o *)ServantExceedMaster__GetRarity(v12, (int32_t)this, 0LL), !entity) )
LABEL_46:
    sub_1B4D1EC(this, sort);
  type = HIDWORD(entity[5].klass);
  v15 = (int)this;
  this = (MultiExSummonListViewItem_o *)ServantEntity__IsPeriodLimitedServantByGachaId(
                                          (ServantEntity_o *)entity,
                                          v3->fields.gachaId,
                                          0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = 1;
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
    v16 = (int)this;
  }
LABEL_21:
  v17 = v3->fields.info;
  if ( !v17 )
    goto LABEL_46;
  v18 = v17->fields.isNew && !v3->fields.isOverlap;
  this = (MultiExSummonListViewItem_o *)SvtType__IsServant(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = 90LL;
    switch ( v15 )
    {
      case 0:
        v19 = 100LL;
        break;
      case 3:
        v19 = 70LL;
        break;
      case 4:
        v19 = 80LL;
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
    if ( (v15 & 0xFFFFFFFE) == 4 && ((unsigned __int8)this & 1) != 0 )
    {
      v19 = 60LL;
    }
    else
    {
      this = (MultiExSummonListViewItem_o *)SvtType__IsKeepServantEquip(type, 0LL);
      if ( (v16 & (unsigned int)this & 1) != 0 )
      {
        v16 = 0;
        v19 = 50LL;
      }
      else
      {
        this = (MultiExSummonListViewItem_o *)SvtType__IsCommandCode(type, 0LL);
        v19 = 40LL;
        v16 = 0;
        if ( ((unsigned __int8)this & 1) == 0 )
          v18 = 0LL;
        if ( ((unsigned __int8)this & 1) == 0 )
          v19 = 0LL;
      }
    }
  }
  v20 = v3->fields.info;
  if ( !v20 )
    goto LABEL_46;
  userSvtId = v20->fields.userSvtId;
  index = v3->fields.index;
  result = 1;
  v24 = userSvtId == 0;
  v25 = userSvtId != 0;
  if ( v24 )
    v26 = 0LL;
  else
    v26 = v18;
  if ( v24 )
    v19 = 0LL;
  v3->fields.sortValue0 = v19;
  v3->fields.sortValue1 = v16 & (unsigned int)v25;
  v3->fields.sortValue2 = v26;
  v3->fields.sortValue2B = index;
  return result;
}