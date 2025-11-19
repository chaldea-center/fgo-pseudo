void CostumeListViewItem___ctor(
        CostumeListViewItem_o *this,
        ServantCostumeEntity_o *data,
        UserServantEntity_o *baseSvt,
        const MethodInfo *method)
{
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UserServantEntity_o **p_baseSvt; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct ServantCostumeEntity_o **p_costumeEntity; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  ServantCostumeReleaseMaster_o *v18; // x24
  __int64 v19; // x26
  __int64 v20; // x27
  bool v21; // w0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  bool v24; // w8
  struct System_String_o *itemGetInfo; // x1
  __int64 v26; // x25
  __int64 v27; // x26
  int32_t v28; // w0
  __int128 v29; // q0
  int32_t v30; // w25
  UserServantEntity_Fields *p_fields; // x26
  int64_t v32; // x0
  int32_t v33; // w0
  __int128 v34; // q1
  int32_t v35; // w25
  int64_t v36; // x0
  int32_t v37; // w0
  __int128 v38; // q1
  int32_t v39; // w25
  int64_t v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v41; // x8
  CombineCostumeMaster_o *v42; // x23
  Il2CppObject *MasterData_object; // x0
  __int64 v44; // x24
  __int64 v45; // x25
  UserServantCollectionMaster_o *v46; // x23
  int32_t v47; // w8
  Il2CppObject *v48; // x0
  __int64 v49; // x22
  __int64 v50; // x23
  EventCombineCostumeMaster_o *v51; // x21
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4CBA508 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA508 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.isNotClearCond = 0;
  *(_WORD *)&this->fields.isNotHaveReleaseItem = 0;
  this->fields.isHide = 0;
  v7 = StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closedMessage, v7, v8, v9);
  this->fields.baseSvt = baseSvt;
  p_baseSvt = &this->fields.baseSvt;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSvt, (int32_t)baseSvt, v11, v12);
  this->fields.costumeEntity = data;
  p_costumeEntity = &this->fields.costumeEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.costumeEntity, (int32_t)data, v14, v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !baseSvt )
    goto LABEL_50;
  v18 = (ServantCostumeReleaseMaster_o *)Instance;
  v20 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v20;
  *(_QWORD *)&v57.fields.fakeValue = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v57, 0);
  if ( !data || !v18 )
    goto LABEL_50;
  v21 = ServantCostumeReleaseMaster__checkItemHaving(v18, (int32_t)Instance, data->fields.id, 0);
  this->fields.isNotHaveReleaseItem = !v21;
  if ( !v21 )
  {
    v24 = ServantCostumeEntity__checkFlag(data, 4, 0) || ServantCostumeEntity__checkFlag(data, 64, 0);
    this->fields.isHide = v24;
    itemGetInfo = data->fields.itemGetInfo;
    this->fields.closedMessage = itemGetInfo;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closedMessage, (int32_t)itemGetInfo, v22, v23);
  }
  v27 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v58.fields.currentCryptoKey = v27;
  *(_QWORD *)&v58.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v58, 0);
  v29 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v30 = v28;
  p_fields = &baseSvt->fields;
  *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v56.fields.fakeValue = v29;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v55 = v56;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v55, 0);
  this->fields.isNotClearCond = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v18, data, v30, v32, 0);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(baseSvt->fields.svtId, 0);
  v34 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v35 = v33;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v34;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v54, 0);
  this->fields.isNotClearCostumeRelease = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                             v18,
                                             data,
                                             v35,
                                             v36,
                                             0);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(baseSvt->fields.svtId, 0);
  v38 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v39 = v37;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v38;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v53, 0);
  this->fields.isNotOpenEventCostume = !ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                          v18,
                                          data,
                                          v39,
                                          v40,
                                          0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v41 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_baseSvt;
  if ( !*p_baseSvt )
    goto LABEL_50;
  v42 = (CombineCostumeMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v41[5], 0);
  if ( !*p_costumeEntity || !v42 )
    goto LABEL_50;
  if ( !CombineCostumeMaster__IsClearCombineCondition(v42, (int32_t)Instance, (*p_costumeEntity)->fields.id, 0) )
    this->fields.isNotClearCond = 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v45 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v46 = (UserServantCollectionMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v59.fields.currentCryptoKey = v45;
  *(_QWORD *)&v59.fields.fakeValue = v44;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v59, 0);
  if ( !v46 )
    goto LABEL_50;
  this->fields.isAlreadyGet = UserServantCollectionMaster__IsCostumeAlreadyGet(
                                v46,
                                (int32_t)Instance,
                                data->fields.id,
                                0);
  if ( !ServantCostumeEntity__CheckEnableReleaseTime(data, 0) )
    this->fields.isHide = ServantCostumeEntity__checkFlag(data, 2, 0);
  if ( !this->fields.isAlreadyGet )
  {
    if ( this->fields.isNotHaveReleaseItem )
    {
      v47 = 2;
      goto LABEL_34;
    }
    Instance = (DataManager_o *)*p_costumeEntity;
    if ( *p_costumeEntity )
    {
      if ( !ServantCostumeEntity__IsEventCombineCostume((ServantCostumeEntity_o *)Instance, 0) )
      {
        if ( this->fields.isNotClearCond )
        {
          v47 = 1;
          goto LABEL_34;
        }
LABEL_48:
        this->fields.releaseType = 0;
        return;
      }
      if ( this->fields.isNotOpenEventCostume )
      {
        v47 = 5;
        goto LABEL_34;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v48 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
        v50 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v49 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        v51 = (EventCombineCostumeMaster_o *)v48;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v60.fields.currentCryptoKey = v50;
        *(_QWORD *)&v60.fields.fakeValue = v49;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v60, 0);
        if ( v51 )
        {
          ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                      v51,
                                      (int32_t)Instance,
                                      data->fields.id,
                                      0);
          if ( !ListBySvtIdAndCostumeId || !EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0) )
          {
            v47 = 4;
            goto LABEL_34;
          }
          goto LABEL_48;
        }
      }
    }
LABEL_50:
    sub_1C6BC60(Instance, v17);
  }
  v47 = 3;
LABEL_34:
  this->fields.releaseType = v47;
}


bool CostumeListViewItem__SetSortValue(CostumeListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8
  __int64 releaseType; // x9

  costumeEntity = this->fields.costumeEntity;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !costumeEntity )
    sub_1C6BC60(this, sort);
  releaseType = this->fields.releaseType;
  this->fields.sortValue1 = costumeEntity->fields.priority;
  if ( (unsigned int)releaseType <= 5 )
    this->fields.sortValue0 = qword_D21BA0[releaseType];
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
    sub_1C6BC60(this, method);
  return costumeEntity->fields.detail;
}


System_String_o *CostumeListViewItem__get_getCostumeName(CostumeListViewItem_o *this, const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_1C6BC60(this, method);
  return costumeEntity->fields.name;
}