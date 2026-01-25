void CostumeListViewItem___ctor(
        CostumeListViewItem_o *this,
        ServantCostumeEntity_o *data,
        UserServantEntity_o *baseSvt,
        const MethodInfo *method)
{
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UserServantEntity_o **p_baseSvt; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct ServantCostumeEntity_o **p_costumeEntity; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  ServantCostumeReleaseMaster_o *v30; // x24
  __int64 v31; // x26
  __int64 v32; // x27
  bool v33; // w0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  bool v40; // w8
  struct System_String_o *itemGetInfo; // x1
  __int64 v42; // x25
  __int64 v43; // x26
  int32_t v44; // w0
  __int128 v45; // q0
  int32_t v46; // w25
  UserServantEntity_Fields *p_fields; // x26
  int64_t v48; // x0
  int32_t v49; // w0
  __int128 v50; // q1
  int32_t v51; // w25
  int64_t v52; // x0
  int32_t v53; // w0
  __int128 v54; // q1
  int32_t v55; // w25
  int64_t v56; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x8
  CombineCostumeMaster_o *v58; // x23
  Il2CppObject *MasterData_object; // x0
  __int64 v60; // x24
  __int64 v61; // x25
  UserServantCollectionMaster_o *v62; // x23
  int32_t v63; // w8
  Il2CppObject *v64; // x0
  __int64 v65; // x22
  __int64 v66; // x23
  EventCombineCostumeMaster_o *v67; // x21
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4CF28C6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF28C6 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.isNotClearCond = 0;
  *(_WORD *)&this->fields.isNotHaveReleaseItem = 0;
  this->fields.isHide = 0;
  v7 = StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.closedMessage, v7, v8, v9, v10, v11, v12, v13);
  this->fields.baseSvt = baseSvt;
  p_baseSvt = &this->fields.baseSvt;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.baseSvt, (int32_t)baseSvt, v15, v16, v17, v18, v19, v20);
  this->fields.costumeEntity = data;
  p_costumeEntity = &this->fields.costumeEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.costumeEntity, (int32_t)data, v22, v23, v24, v25, v26, v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !baseSvt )
    goto LABEL_50;
  v30 = (ServantCostumeReleaseMaster_o *)Instance;
  v32 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v73.fields.currentCryptoKey = v32;
  *(_QWORD *)&v73.fields.fakeValue = v31;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v73, 0);
  if ( !data || !v30 )
    goto LABEL_50;
  v33 = ServantCostumeReleaseMaster__checkItemHaving(v30, (int32_t)Instance, data->fields.id, 0);
  this->fields.isNotHaveReleaseItem = !v33;
  if ( !v33 )
  {
    v40 = ServantCostumeEntity__checkFlag(data, 4, 0) || ServantCostumeEntity__checkFlag(data, 64, 0);
    this->fields.isHide = v40;
    itemGetInfo = data->fields.itemGetInfo;
    this->fields.closedMessage = itemGetInfo;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.closedMessage,
      (int32_t)itemGetInfo,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v43 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v74.fields.currentCryptoKey = v43;
  *(_QWORD *)&v74.fields.fakeValue = v42;
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v74, 0);
  v45 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v46 = v44;
  p_fields = &baseSvt->fields;
  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v72.fields.fakeValue = v45;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v71 = v72;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v71, 0);
  this->fields.isNotClearCond = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v30, data, v46, v48, 0);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(baseSvt->fields.svtId, 0);
  v50 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v51 = v49;
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v50;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v70, 0);
  this->fields.isNotClearCostumeRelease = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                             v30,
                                             data,
                                             v51,
                                             v52,
                                             0);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(baseSvt->fields.svtId, 0);
  v54 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v55 = v53;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v54;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v69, 0);
  this->fields.isNotOpenEventCostume = !ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                          v30,
                                          data,
                                          v55,
                                          v56,
                                          0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v57 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_baseSvt;
  if ( !*p_baseSvt )
    goto LABEL_50;
  v58 = (CombineCostumeMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v57[5], 0);
  if ( !*p_costumeEntity || !v58 )
    goto LABEL_50;
  if ( !CombineCostumeMaster__IsClearCombineCondition(v58, (int32_t)Instance, (*p_costumeEntity)->fields.id, 0) )
    this->fields.isNotClearCond = 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v61 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v62 = (UserServantCollectionMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v75.fields.currentCryptoKey = v61;
  *(_QWORD *)&v75.fields.fakeValue = v60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v75, 0);
  if ( !v62 )
    goto LABEL_50;
  this->fields.isAlreadyGet = UserServantCollectionMaster__IsCostumeAlreadyGet(
                                v62,
                                (int32_t)Instance,
                                data->fields.id,
                                0);
  if ( !ServantCostumeEntity__CheckEnableReleaseTime(data, 0) )
    this->fields.isHide = ServantCostumeEntity__checkFlag(data, 2, 0);
  if ( !this->fields.isAlreadyGet )
  {
    if ( this->fields.isNotHaveReleaseItem )
    {
      v63 = 2;
      goto LABEL_34;
    }
    Instance = (DataManager_o *)*p_costumeEntity;
    if ( *p_costumeEntity )
    {
      if ( !ServantCostumeEntity__IsEventCombineCostume((ServantCostumeEntity_o *)Instance, 0) )
      {
        if ( this->fields.isNotClearCond )
        {
          v63 = 1;
          goto LABEL_34;
        }
LABEL_48:
        this->fields.releaseType = 0;
        return;
      }
      if ( this->fields.isNotOpenEventCostume )
      {
        v63 = 5;
        goto LABEL_34;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v64 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
        v66 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v65 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        v67 = (EventCombineCostumeMaster_o *)v64;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v76.fields.currentCryptoKey = v66;
        *(_QWORD *)&v76.fields.fakeValue = v65;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v76, 0);
        if ( v67 )
        {
          ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                      v67,
                                      (int32_t)Instance,
                                      data->fields.id,
                                      0);
          if ( !ListBySvtIdAndCostumeId || !EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0) )
          {
            v63 = 4;
            goto LABEL_34;
          }
          goto LABEL_48;
        }
      }
    }
LABEL_50:
    sub_1C7BD40(Instance, v29);
  }
  v63 = 3;
LABEL_34:
  this->fields.releaseType = v63;
}


bool CostumeListViewItem__SetSortValue(CostumeListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8
  __int64 releaseType; // x9

  costumeEntity = this->fields.costumeEntity;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !costumeEntity )
    sub_1C7BD40(this, sort);
  releaseType = this->fields.releaseType;
  this->fields.sortValue1 = costumeEntity->fields.priority;
  if ( (unsigned int)releaseType <= 5 )
    this->fields.sortValue0 = qword_D2B210[releaseType];
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
    sub_1C7BD40(this, method);
  return costumeEntity->fields.detail;
}


System_String_o *CostumeListViewItem__get_getCostumeName(CostumeListViewItem_o *this, const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_1C7BD40(this, method);
  return costumeEntity->fields.name;
}