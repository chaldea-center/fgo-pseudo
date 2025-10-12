void MultiExSummonListViewItem___ctor(
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
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v11->fields.info = gachaInfo;
  v11 = (MultiExSummonListViewItem_o *)((char *)v11 + 120);
  sub_1C32BC4((CGThumbnailListItem_o *)v11, (int32_t)gachaInfo, v13, v14);
  LOBYTE(v11->monitor) = v12;
  HIDWORD(v11->monitor) = gachaId;
  *(_QWORD *)&v11->fields.selectNum = summonSceneInTime;
  *(_QWORD *)&v11->fields.sortIndex = index;
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
  ServantExceedMaster_o *v7; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int v10; // w22
  int v11; // w21
  struct GachaInfos_o *v12; // x8
  __int64 v13; // x23
  __int64 v14; // x8
  struct GachaInfos_o *v15; // x9
  int64_t userSvtId; // x9
  int64_t index; // x10
  bool result; // w0
  bool v19; // zf
  _BOOL4 v20; // w9
  int64_t v21; // x11
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v3 = this;
  if ( (byte_4C33DCA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    this = (MultiExSummonListViewItem_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33DCA = 1;
  }
  entity = 0;
  info = v3->fields.info;
  if ( !info )
    goto LABEL_44;
  type = info->fields.type;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MultiExSummonListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  v6 = v3->fields.info;
  if ( !v6 || !this )
    goto LABEL_44;
  this = (MultiExSummonListViewItem_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v6->fields.objectId,
                                          (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v11 = 0;
    v10 = 0;
    goto LABEL_21;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MultiExSummonListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !entity )
    goto LABEL_44;
  v7 = (ServantExceedMaster_o *)this;
  klass = entity[1].klass;
  monitor = entity[1].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = klass;
  *(_QWORD *)&v23.fields.fakeValue = monitor;
  this = (MultiExSummonListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v23, 0);
  if ( !v7 || (this = (MultiExSummonListViewItem_o *)ServantExceedMaster__GetRarity(v7, (int32_t)this, 0), !entity) )
LABEL_44:
    sub_1C32E7C(this);
  type = HIDWORD(entity[5].klass);
  v10 = (int)this;
  this = (MultiExSummonListViewItem_o *)ServantEntity__IsPeriodLimitedServantByGachaId(
                                          (ServantEntity_o *)entity,
                                          v3->fields.gachaId,
                                          0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = 1;
  }
  else
  {
    this = (MultiExSummonListViewItem_o *)entity;
    if ( !entity )
      goto LABEL_44;
    this = (MultiExSummonListViewItem_o *)ServantEntity__IsPeriodLimitedServantEquipByGachaId(
                                            (ServantEntity_o *)entity,
                                            v3->fields.gachaId,
                                            v3->fields.summonSceneInTime,
                                            0);
    v11 = (int)this;
  }
LABEL_21:
  v12 = v3->fields.info;
  if ( !v12 )
    goto LABEL_44;
  v13 = v12->fields.isNew && !v3->fields.isOverlap;
  this = (MultiExSummonListViewItem_o *)SvtType__IsServant(type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = 90;
    switch ( v10 )
    {
      case 0:
        v14 = 100;
        break;
      case 3:
        v14 = 70;
        break;
      case 4:
        v14 = 80;
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
    this = (MultiExSummonListViewItem_o *)SvtType__IsKeepServantEquip(type, 0);
    if ( (v10 & 0xFFFFFFFE) == 4 && ((unsigned __int8)this & 1) != 0 )
    {
      v14 = 60;
    }
    else
    {
      this = (MultiExSummonListViewItem_o *)SvtType__IsKeepServantEquip(type, 0);
      if ( (v11 & (unsigned int)this & 1) != 0 )
      {
        v11 = 0;
        v14 = 50;
      }
      else
      {
        this = (MultiExSummonListViewItem_o *)SvtType__IsCommandCode(type, 0);
        v14 = 40;
        v11 = 0;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v13 = 0;
          v14 = 0;
        }
      }
    }
  }
  v15 = v3->fields.info;
  if ( !v15 )
    goto LABEL_44;
  userSvtId = v15->fields.userSvtId;
  index = v3->fields.index;
  result = 1;
  v19 = userSvtId == 0;
  v20 = userSvtId != 0;
  if ( v19 )
    v21 = 0;
  else
    v21 = v13;
  if ( v19 )
    v14 = 0;
  v3->fields.sortValue0 = v14;
  v3->fields.sortValue1 = v11 & (unsigned int)v20;
  v3->fields.sortValue2 = v21;
  v3->fields.sortValue2B = index;
  return result;
}