void CostumeListViewItem___ctor(
        CostumeListViewItem_o *this,
        ServantCostumeEntity_o *data,
        UserServantEntity_o *baseSvt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct UserServantEntity_o **p_baseSvt; // x23
  struct ServantCostumeEntity_o **p_costumeEntity; // x22
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  ServantCostumeReleaseMaster_o *v12; // x24
  __int64 v13; // x26
  __int64 v14; // x27
  bool v15; // w0
  bool v16; // w8
  struct System_String_o *itemGetInfo; // x1
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w0
  __int128 v21; // q0
  int32_t v22; // w25
  UserServantEntity_Fields *p_fields; // x26
  int64_t v24; // x0
  int32_t v25; // w0
  __int128 v26; // q1
  int32_t v27; // w25
  int64_t v28; // x0
  int32_t v29; // w0
  __int128 v30; // q1
  int32_t v31; // w25
  int64_t v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v33; // x8
  CombineCostumeMaster_o *v34; // x23
  Il2CppObject *MasterData_object; // x0
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionMaster_o *v38; // x23
  int32_t v39; // w8
  Il2CppObject *v40; // x0
  __int64 v41; // x22
  __int64 v42; // x23
  EventCombineCostumeMaster_o *v43; // x21
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4D2662B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2662B = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.isNotClearCond = 0;
  *(_WORD *)&this->fields.isNotHaveReleaseItem = 0;
  this->fields.isHide = 0;
  v7 = StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C(&this->fields.closedMessage, v7);
  this->fields.baseSvt = baseSvt;
  p_baseSvt = &this->fields.baseSvt;
  sub_1C9403C(&this->fields.baseSvt, baseSvt);
  this->fields.costumeEntity = data;
  p_costumeEntity = &this->fields.costumeEntity;
  sub_1C9403C(&this->fields.costumeEntity, data);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !baseSvt )
    goto LABEL_50;
  v12 = (ServantCostumeReleaseMaster_o *)Instance;
  v14 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v14;
  *(_QWORD *)&v49.fields.fakeValue = v13;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v49, 0);
  if ( !data || !v12 )
    goto LABEL_50;
  v15 = ServantCostumeReleaseMaster__checkItemHaving(v12, (int32_t)Instance, data->fields.id, 0);
  this->fields.isNotHaveReleaseItem = !v15;
  if ( !v15 )
  {
    v16 = ServantCostumeEntity__checkFlag(data, 4, 0) || ServantCostumeEntity__checkFlag(data, 64, 0);
    this->fields.isHide = v16;
    itemGetInfo = data->fields.itemGetInfo;
    this->fields.closedMessage = itemGetInfo;
    sub_1C9403C(&this->fields.closedMessage, itemGetInfo);
  }
  v19 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v19;
  *(_QWORD *)&v50.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v50, 0);
  v21 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v22 = v20;
  p_fields = &baseSvt->fields;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v47 = v48;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v47, 0);
  this->fields.isNotClearCond = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v12, data, v22, v24, 0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(baseSvt->fields.svtId, 0);
  v26 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v27 = v25;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v46, 0);
  this->fields.isNotClearCostumeRelease = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                             v12,
                                             data,
                                             v27,
                                             v28,
                                             0);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(baseSvt->fields.svtId, 0);
  v30 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v31 = v29;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v30;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v45, 0);
  this->fields.isNotOpenEventCostume = !ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                          v12,
                                          data,
                                          v31,
                                          v32,
                                          0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v33 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_baseSvt;
  if ( !*p_baseSvt )
    goto LABEL_50;
  v34 = (CombineCostumeMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v33[5], 0);
  if ( !*p_costumeEntity || !v34 )
    goto LABEL_50;
  if ( !CombineCostumeMaster__IsClearCombineCondition(v34, (int32_t)Instance, (*p_costumeEntity)->fields.id, 0) )
    this->fields.isNotClearCond = 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v37 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v38 = (UserServantCollectionMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v37;
  *(_QWORD *)&v51.fields.fakeValue = v36;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v51, 0);
  if ( !v38 )
    goto LABEL_50;
  this->fields.isAlreadyGet = UserServantCollectionMaster__IsCostumeAlreadyGet(
                                v38,
                                (int32_t)Instance,
                                data->fields.id,
                                0);
  if ( !ServantCostumeEntity__CheckEnableReleaseTime(data, 0) )
    this->fields.isHide = ServantCostumeEntity__checkFlag(data, 2, 0);
  if ( !this->fields.isAlreadyGet )
  {
    if ( this->fields.isNotHaveReleaseItem )
    {
      v39 = 2;
      goto LABEL_34;
    }
    Instance = (DataManager_o *)*p_costumeEntity;
    if ( *p_costumeEntity )
    {
      if ( !ServantCostumeEntity__IsEventCombineCostume((ServantCostumeEntity_o *)Instance, 0) )
      {
        if ( this->fields.isNotClearCond )
        {
          v39 = 1;
          goto LABEL_34;
        }
LABEL_48:
        this->fields.releaseType = 0;
        return;
      }
      if ( this->fields.isNotOpenEventCostume )
      {
        v39 = 5;
        goto LABEL_34;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v40 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
        v42 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v41 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        v43 = (EventCombineCostumeMaster_o *)v40;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v52.fields.currentCryptoKey = v42;
        *(_QWORD *)&v52.fields.fakeValue = v41;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v52, 0);
        if ( v43 )
        {
          ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                      v43,
                                      (int32_t)Instance,
                                      data->fields.id,
                                      0);
          if ( !ListBySvtIdAndCostumeId || !EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0) )
          {
            v39 = 4;
            goto LABEL_34;
          }
          goto LABEL_48;
        }
      }
    }
LABEL_50:
    sub_1C942F0(Instance, v11);
  }
  v39 = 3;
LABEL_34:
  this->fields.releaseType = v39;
}


bool CostumeListViewItem__SetSortValue(CostumeListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8
  __int64 releaseType; // x9

  costumeEntity = this->fields.costumeEntity;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !costumeEntity )
    sub_1C942F0(this, sort);
  releaseType = this->fields.releaseType;
  this->fields.sortValue1 = costumeEntity->fields.priority;
  if ( (unsigned int)releaseType <= 5 )
    this->fields.sortValue0 = qword_D31258[releaseType];
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
    sub_1C942F0(this, method);
  return costumeEntity->fields.detail;
}


System_String_o *CostumeListViewItem__get_getCostumeName(CostumeListViewItem_o *this, const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_1C942F0(this, method);
  return costumeEntity->fields.name;
}