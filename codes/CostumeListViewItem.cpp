void CostumeListViewItem___ctor(
        CostumeListViewItem_o *this,
        ServantCostumeEntity_o *data,
        UserServantEntity_o *baseSvt,
        const MethodInfo *method)
{
  struct System_String_o *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct ServantCostumeEntity_o **p_costumeEntity; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  ServantCostumeReleaseMaster_o *v29; // x23
  __int64 v30; // x2
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  bool v37; // w0
  struct System_String_o *itemGetInfo; // x1
  __int128 v39; // q1
  int32_t svtId; // w24
  int64_t v41; // x0
  bool IsCostumeReleaseCondClear; // w0
  int32_t v43; // w24
  bool v44; // w8
  __int128 v45; // q1
  int64_t v46; // x0
  bool IsClearEventItemCostumeReleaseAllCond; // w0
  const MethodInfo_476E8C0 *v48; // x8
  Il2CppObject *MasterData_object; // x23
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x21
  __int64 v53; // x24
  int32_t v54; // w8
  __int64 v55; // x1
  __int64 v56; // x2
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+40h] [xbp-70h]
  int32_t baseSvtId; // [xsp+6Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_5932151 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCombineCostumeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932151 = 1;
  }
  baseSvtId = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v7 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.isNotClearCond = 0;
  *(_WORD *)&this->fields.isNotHaveReleaseItem = 0;
  this->fields.closedMessage = v7;
  this->fields.isHide = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closedMessage, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  this->fields.baseSvt = baseSvt;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseSvt, (int32_t)baseSvt, v14, v15, v16, v17, v18, v19);
  this->fields.costumeEntity = data;
  p_costumeEntity = &this->fields.costumeEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.costumeEntity,
    (int32_t)data,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !data )
    goto LABEL_47;
  v29 = (ServantCostumeReleaseMaster_o *)Instance;
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
    v37 = ServantCostumeEntity__checkFlag(data, 4, 0) || ServantCostumeEntity__checkFlag(data, 64, 0);
    itemGetInfo = data->fields.itemGetInfo;
    this->fields.isHide = v37;
    this->fields.closedMessage = itemGetInfo;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closedMessage,
      (int32_t)itemGetInfo,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !baseSvt )
    goto LABEL_47;
  v39 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  svtId = data->fields.svtId;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v39;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28, v30);
  v59 = v60;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v59, 0);
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v29, data, svtId, v41, 0);
  v43 = data->fields.svtId;
  v44 = !IsCostumeReleaseCondClear;
  this->fields.isNotClearCond = v44;
  this->fields.isNotClearCostumeRelease = v44;
  v45 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v45;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v58, 0);
  IsClearEventItemCostumeReleaseAllCond = ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                            v29,
                                            data,
                                            v43,
                                            v46,
                                            0);
  v48 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isNotOpenEventCostume = !IsClearEventItemCostumeReleaseAllCond;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v48);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  if ( !*p_costumeEntity || !Instance )
    goto LABEL_47;
  if ( !CombineCostumeMaster__IsClearCombineCondition(
          (CombineCostumeMaster_o *)Instance,
          data->fields.svtId,
          (*p_costumeEntity)->fields.id,
          0) )
    this->fields.isNotClearCond = 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)ServantCostumeEntity__TryGetBaseSvtId(data, &baseSvtId, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v28 = (unsigned int)baseSvtId;
  }
  else
  {
    v53 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
    v52 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50, v51);
    *(_QWORD *)&v62.fields.currentCryptoKey = v53;
    *(_QWORD *)&v62.fields.fakeValue = v52;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v62, 0);
    v28 = (unsigned int)Instance;
  }
  if ( !MasterData_object )
    goto LABEL_47;
  this->fields.isAlreadyGet = UserServantCollectionMaster__IsCostumeAlreadyGet(
                                (UserServantCollectionMaster_o *)MasterData_object,
                                v28,
                                data->fields.id,
                                0);
  if ( !ServantCostumeEntity__CheckEnableReleaseTime(data, 0) )
    this->fields.isHide = ServantCostumeEntity__checkFlag(data, 2, 0);
  if ( !this->fields.isAlreadyGet )
  {
    if ( this->fields.isNotHaveReleaseItem )
    {
      v54 = 2;
      goto LABEL_32;
    }
    Instance = (DataManager_o *)*p_costumeEntity;
    if ( *p_costumeEntity )
    {
      if ( !ServantCostumeEntity__IsEventCombineCostume((ServantCostumeEntity_o *)Instance, 0) )
      {
        if ( this->fields.isNotClearCond )
        {
          v54 = 1;
          goto LABEL_32;
        }
LABEL_45:
        this->fields.releaseType = 0;
        return;
      }
      if ( this->fields.isNotOpenEventCostume )
      {
        v54 = 5;
        goto LABEL_32;
      }
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v55, v56);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCombineCostumeMaster___);
      if ( Instance )
      {
        ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                    (EventCombineCostumeMaster_o *)Instance,
                                    data->fields.svtId,
                                    data->fields.id,
                                    0);
        if ( !ListBySvtIdAndCostumeId || !EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0) )
        {
          v54 = 4;
          goto LABEL_32;
        }
        goto LABEL_45;
      }
    }
LABEL_47:
    sub_21FFECC(Instance, v28);
  }
  v54 = 3;
LABEL_32:
  this->fields.releaseType = v54;
}


bool CostumeListViewItem__SetSortValue(CostumeListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x9
  __int64 releaseType; // x8

  costumeEntity = this->fields.costumeEntity;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !costumeEntity )
    sub_21FFECC(this, sort);
  releaseType = (unsigned int)this->fields.releaseType;
  this->fields.sortValue1 = costumeEntity->fields.priority;
  if ( (unsigned int)releaseType <= 5 )
    this->fields.sortValue0 = qword_ECFA18[releaseType];
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
    sub_21FFECC(this, method);
  return costumeEntity->fields.detail;
}


System_String_o *CostumeListViewItem__get_getCostumeName(CostumeListViewItem_o *this, const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_21FFECC(this, method);
  return costumeEntity->fields.name;
}