void __fastcall CostumeListViewItem___ctor(
        CostumeListViewItem_o *this,
        ServantCostumeEntity_o *data,
        UserServantEntity_o *baseSvt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UserServantEntity_o **p_baseSvt; // x23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct ServantCostumeEntity_o **p_costumeEntity; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  ServantCostumeReleaseMaster_o *v25; // x24
  __int64 v26; // x26
  __int64 v27; // x27
  bool v28; // w0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  bool v31; // w8
  struct System_String_o *itemGetInfo; // x1
  __int64 v33; // x25
  __int64 v34; // x26
  int32_t v35; // w0
  __int128 v36; // q0
  int32_t v37; // w25
  UserServantEntity_Fields *p_fields; // x26
  int64_t v39; // x0
  int32_t v40; // w0
  __int128 v41; // q1
  int32_t v42; // w25
  int64_t v43; // x0
  int32_t v44; // w0
  __int128 v45; // q1
  int32_t v46; // w25
  int64_t v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  CombineCostumeMaster_o *v49; // x23
  Il2CppObject *MasterData_object; // x0
  __int64 v51; // x24
  __int64 v52; // x25
  UserServantCollectionMaster_o *v53; // x23
  int32_t v54; // w8
  Il2CppObject *v55; // x0
  __int64 v56; // x22
  __int64 v57; // x23
  EventCombineCostumeMaster_o *v58; // x21
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B05FA3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_CombineCostumeMaster___, data);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BC3008(&StringLiteral_1/*""*/, v13);
    byte_4B05FA3 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isNotClearCond = 0;
  *(_WORD *)&this->fields.isNotHaveReleaseItem = 0;
  this->fields.isHide = 0;
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closedMessage, v14, v15, v16);
  this->fields.baseSvt = baseSvt;
  p_baseSvt = &this->fields.baseSvt;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseSvt, (int32_t)baseSvt, v18, v19);
  this->fields.costumeEntity = data;
  p_costumeEntity = &this->fields.costumeEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.costumeEntity, (int32_t)data, v21, v22);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !baseSvt )
    goto LABEL_50;
  v25 = (ServantCostumeReleaseMaster_o *)Instance;
  v27 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v27;
  *(_QWORD *)&v64.fields.fakeValue = v26;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v64, 0LL);
  if ( !data || !v25 )
    goto LABEL_50;
  v28 = ServantCostumeReleaseMaster__checkItemHaving(v25, (int32_t)Instance, data->fields.id, 0LL);
  this->fields.isNotHaveReleaseItem = !v28;
  if ( !v28 )
  {
    v31 = ServantCostumeEntity__checkFlag(data, 4, 0LL) || ServantCostumeEntity__checkFlag(data, 64, 0LL);
    this->fields.isHide = v31;
    itemGetInfo = data->fields.itemGetInfo;
    this->fields.closedMessage = itemGetInfo;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closedMessage, (int32_t)itemGetInfo, v29, v30);
  }
  v34 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v65.fields.currentCryptoKey = v34;
  *(_QWORD *)&v65.fields.fakeValue = v33;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v65, 0LL);
  v36 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v37 = v35;
  p_fields = &baseSvt->fields;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v36;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v62 = v63;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v62, 0LL);
  this->fields.isNotClearCond = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v25, data, v37, v39, 0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(baseSvt->fields.svtId, 0LL);
  v41 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v42 = v40;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v41;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v61, 0LL);
  this->fields.isNotClearCostumeRelease = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                             v25,
                                             data,
                                             v42,
                                             v43,
                                             0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(baseSvt->fields.svtId, 0LL);
  v45 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v46 = v44;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v45;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v60, 0LL);
  this->fields.isNotOpenEventCostume = !ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                          v25,
                                          data,
                                          v46,
                                          v47,
                                          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v48 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_baseSvt;
  if ( !*p_baseSvt )
    goto LABEL_50;
  v49 = (CombineCostumeMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v48[5], 0LL);
  if ( !*p_costumeEntity || !v49 )
    goto LABEL_50;
  if ( !CombineCostumeMaster__IsClearCombineCondition(v49, (int32_t)Instance, (*p_costumeEntity)->fields.id, 0LL) )
    this->fields.isNotClearCond = 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v52 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v51 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v53 = (UserServantCollectionMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v66.fields.currentCryptoKey = v52;
  *(_QWORD *)&v66.fields.fakeValue = v51;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v66, 0LL);
  if ( !v53 )
    goto LABEL_50;
  this->fields.isAlreadyGet = UserServantCollectionMaster__IsCostumeAlreadyGet(
                                v53,
                                (int32_t)Instance,
                                data->fields.id,
                                0LL);
  if ( !ServantCostumeEntity__CheckEnableReleaseTime(data, 0LL) )
    this->fields.isHide = ServantCostumeEntity__checkFlag(data, 2, 0LL);
  if ( !this->fields.isAlreadyGet )
  {
    if ( this->fields.isNotHaveReleaseItem )
    {
      v54 = 2;
      goto LABEL_34;
    }
    Instance = (DataManager_o *)*p_costumeEntity;
    if ( *p_costumeEntity )
    {
      if ( !ServantCostumeEntity__IsEventCombineCostume((ServantCostumeEntity_o *)Instance, 0LL) )
      {
        if ( this->fields.isNotClearCond )
        {
          v54 = 1;
          goto LABEL_34;
        }
LABEL_48:
        this->fields.releaseType = 0;
        return;
      }
      if ( this->fields.isNotOpenEventCostume )
      {
        v54 = 5;
        goto LABEL_34;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v55 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
        v57 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v56 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        v58 = (EventCombineCostumeMaster_o *)v55;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v67.fields.currentCryptoKey = v57;
        *(_QWORD *)&v67.fields.fakeValue = v56;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v67, 0LL);
        if ( v58 )
        {
          ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                      v58,
                                      (int32_t)Instance,
                                      data->fields.id,
                                      0LL);
          if ( !ListBySvtIdAndCostumeId || !EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL) )
          {
            v54 = 4;
            goto LABEL_34;
          }
          goto LABEL_48;
        }
      }
    }
LABEL_50:
    sub_1BC3264(Instance, v24);
  }
  v54 = 3;
LABEL_34:
  this->fields.releaseType = v54;
}


bool __fastcall CostumeListViewItem__SetSortValue(
        CostumeListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8
  __int64 releaseType; // x9

  costumeEntity = this->fields.costumeEntity;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !costumeEntity )
    sub_1BC3264(this, sort);
  releaseType = this->fields.releaseType;
  this->fields.sortValue1 = costumeEntity->fields.priority;
  if ( (unsigned int)releaseType <= 5 )
    this->fields.sortValue0 = qword_C19408[releaseType];
  return 1;
}


UserServantEntity_o *__fastcall CostumeListViewItem__get_BaseSvt(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.baseSvt;
}


ServantCostumeEntity_o *__fastcall CostumeListViewItem__get_CostumeEntity(
        CostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.costumeEntity;
}


bool __fastcall CostumeListViewItem__get_IsAlreadyGet(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isAlreadyGet;
}


bool __fastcall CostumeListViewItem__get_IsCanNotRelease(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotClearCond;
}


bool __fastcall CostumeListViewItem__get_IsHide(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isHide;
}


bool __fastcall CostumeListViewItem__get_IsNotClearCostumeRelease(
        CostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotClearCostumeRelease;
}


bool __fastcall CostumeListViewItem__get_IsNotHaveReleaseItem(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotHaveReleaseItem;
}


bool __fastcall CostumeListViewItem__get_IsNotOpenEventCostume(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotOpenEventCostume;
}


int32_t __fastcall CostumeListViewItem__get_ReleaseType(CostumeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.releaseType;
}


System_String_o *__fastcall CostumeListViewItem__get_getClosedMessage(
        CostumeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.closedMessage;
}


System_String_o *__fastcall CostumeListViewItem__get_getCostumeDetail(
        CostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_1BC3264(this, method);
  return costumeEntity->fields.detail;
}


System_String_o *__fastcall CostumeListViewItem__get_getCostumeName(
        CostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_1BC3264(this, method);
  return costumeEntity->fields.name;
}