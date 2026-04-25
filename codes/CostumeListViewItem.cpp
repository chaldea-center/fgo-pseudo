void CostumeListViewItem___ctor(
        CostumeListViewItem_o *this,
        ServantCostumeEntity_o *data,
        UserServantEntity_o *baseSvt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct ServantCostumeEntity_o **p_costumeEntity; // x22
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  ServantCostumeReleaseMaster_o *v11; // x23
  bool v12; // w8
  struct System_String_o *itemGetInfo; // x1
  __int128 v14; // q1
  int32_t svtId; // w24
  int64_t v16; // x0
  bool v17; // w8
  __int128 v18; // q1
  int32_t v19; // w24
  int64_t v20; // x0
  Il2CppObject *MasterData_object; // x23
  __int64 v22; // x21
  __int64 v23; // x24
  int32_t v24; // w8
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-70h]
  int32_t baseSvtId; // [xsp+6Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4DFE7A5 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventCombineCostumeMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4DFE7A5 = 1;
  }
  baseSvtId = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.isNotClearCond = 0;
  *(_WORD *)&this->fields.isNotHaveReleaseItem = 0;
  this->fields.isHide = 0;
  v7 = StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1CE66A4(&this->fields.closedMessage, v7);
  this->fields.baseSvt = baseSvt;
  sub_1CE66A4(&this->fields.baseSvt, baseSvt);
  this->fields.costumeEntity = data;
  p_costumeEntity = &this->fields.costumeEntity;
  sub_1CE66A4(&this->fields.costumeEntity, data);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !data )
    goto LABEL_47;
  v11 = (ServantCostumeReleaseMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                (ServantCostumeReleaseMaster_o *)Instance,
                                data->fields.svtId,
                                data->fields.id,
                                0);
  this->fields.isNotHaveReleaseItem = ((unsigned __int8)Instance & 1) == 0;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v12 = ServantCostumeEntity__checkFlag(data, 4, 0) || ServantCostumeEntity__checkFlag(data, 64, 0);
    this->fields.isHide = v12;
    itemGetInfo = data->fields.itemGetInfo;
    this->fields.closedMessage = itemGetInfo;
    Instance = (DataManager_o *)sub_1CE66A4(&this->fields.closedMessage, itemGetInfo);
  }
  if ( !baseSvt )
    goto LABEL_47;
  v14 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  svtId = data->fields.svtId;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v27 = v28;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v27, 0);
  v17 = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v11, data, svtId, v16, 0);
  this->fields.isNotClearCond = v17;
  this->fields.isNotClearCostumeRelease = v17;
  v18 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v19 = data->fields.svtId;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v26, 0);
  this->fields.isNotOpenEventCostume = !ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                          v11,
                                          data,
                                          v19,
                                          v20,
                                          0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  if ( !*p_costumeEntity || !Instance )
    goto LABEL_47;
  if ( !CombineCostumeMaster__IsClearCombineCondition(
          (CombineCostumeMaster_o *)Instance,
          data->fields.svtId,
          (*p_costumeEntity)->fields.id,
          0) )
    this->fields.isNotClearCond = 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)ServantCostumeEntity__TryGetBaseSvtId(data, &baseSvtId, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v10 = (unsigned int)baseSvtId;
  }
  else
  {
    v23 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v23;
    *(_QWORD *)&v30.fields.fakeValue = v22;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v30, 0);
    v10 = (unsigned int)Instance;
  }
  if ( !MasterData_object )
    goto LABEL_47;
  this->fields.isAlreadyGet = UserServantCollectionMaster__IsCostumeAlreadyGet(
                                (UserServantCollectionMaster_o *)MasterData_object,
                                v10,
                                data->fields.id,
                                0);
  if ( !ServantCostumeEntity__CheckEnableReleaseTime(data, 0) )
    this->fields.isHide = ServantCostumeEntity__checkFlag(data, 2, 0);
  if ( !this->fields.isAlreadyGet )
  {
    if ( this->fields.isNotHaveReleaseItem )
    {
      v24 = 2;
      goto LABEL_32;
    }
    Instance = (DataManager_o *)*p_costumeEntity;
    if ( *p_costumeEntity )
    {
      if ( !ServantCostumeEntity__IsEventCombineCostume((ServantCostumeEntity_o *)Instance, 0) )
      {
        if ( this->fields.isNotClearCond )
        {
          v24 = 1;
          goto LABEL_32;
        }
LABEL_45:
        this->fields.releaseType = 0;
        return;
      }
      if ( this->fields.isNotOpenEventCostume )
      {
        v24 = 5;
        goto LABEL_32;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCombineCostumeMaster___);
      if ( Instance )
      {
        ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                    (EventCombineCostumeMaster_o *)Instance,
                                    data->fields.svtId,
                                    data->fields.id,
                                    0);
        if ( !ListBySvtIdAndCostumeId || !EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0) )
        {
          v24 = 4;
          goto LABEL_32;
        }
        goto LABEL_45;
      }
    }
LABEL_47:
    sub_1CE6958(Instance, v10);
  }
  v24 = 3;
LABEL_32:
  this->fields.releaseType = v24;
}


bool CostumeListViewItem__SetSortValue(CostumeListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8
  __int64 releaseType; // x9

  costumeEntity = this->fields.costumeEntity;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !costumeEntity )
    sub_1CE6958(this, sort);
  releaseType = this->fields.releaseType;
  this->fields.sortValue1 = costumeEntity->fields.priority;
  if ( (unsigned int)releaseType <= 5 )
    this->fields.sortValue0 = qword_D57460[releaseType];
  return 1;
}


UserServantEntity_o *CostumeListViewItem__get_BaseSvt(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.baseSvt;
}


ServantCostumeEntity_o *CostumeListViewItem__get_CostumeEntity(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.costumeEntity;
}


bool CostumeListViewItem__get_IsAlreadyGet(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isAlreadyGet;
}


bool CostumeListViewItem__get_IsCanNotRelease(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotClearCond;
}


bool CostumeListViewItem__get_IsHide(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isHide;
}


bool CostumeListViewItem__get_IsNotClearCostumeRelease(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotClearCostumeRelease;
}


bool CostumeListViewItem__get_IsNotHaveReleaseItem(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotHaveReleaseItem;
}


bool CostumeListViewItem__get_IsNotOpenEventCostume(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotOpenEventCostume;
}


int32_t CostumeListViewItem__get_ReleaseType(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.releaseType;
}


System_String_o *CostumeListViewItem__get_getClosedMessage(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.closedMessage;
}


System_String_o *CostumeListViewItem__get_getCostumeDetail(CostumeListViewItem_o *this, const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_1CE6958(this, method);
  return costumeEntity->fields.detail;
}


System_String_o *CostumeListViewItem__get_getCostumeName(CostumeListViewItem_o *this, const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_1CE6958(this, method);
  return costumeEntity->fields.name;
}