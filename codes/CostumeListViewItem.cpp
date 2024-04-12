void __fastcall CostumeListViewItem___ctor(
        CostumeListViewItem_o *this,
        ServantCostumeEntity_o *data,
        UserServantEntity_o *baseSvt,
        const MethodInfo *method)
{
  System_Int32_array **v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UserServantEntity_o **p_baseSvt; // x23
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct ServantCostumeEntity_o **p_costumeEntity; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  ServantCostumeReleaseMaster_o *v30; // x24
  __int64 v31; // x26
  __int64 v32; // x27
  bool v33; // w0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  bool v40; // w8
  struct System_String_o *itemGetInfo; // x1
  __int64 v42; // x25
  __int64 v43; // x26
  int32_t v44; // w0
  __int128 v45; // q1
  int32_t v46; // w25
  UserServantEntity_Fields *p_fields; // x26
  int64_t v48; // x0
  int32_t v49; // w0
  __int128 v50; // q0
  int32_t v51; // w25
  int64_t v52; // x0
  int32_t v53; // w0
  __int128 v54; // q0
  int32_t v55; // w25
  int64_t v56; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x8
  CombineCostumeMaster_o *v58; // x23
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v60; // x24
  __int64 v61; // x25
  UserServantCollectionMaster_o *v62; // x23
  int32_t v63; // w8
  WarQuestSelectionMaster_o *v64; // x0
  __int64 v65; // x22
  __int64 v66; // x23
  EventCombineCostumeMaster_o *v67; // x21
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_42B1F10 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1F10 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isNotClearCond = 0;
  *(_WORD *)&this->fields.isNotHaveReleaseItem = 0;
  this->fields.isHide = 0;
  v7 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.closedMessage, v7, v8, v9, v10, v11, v12, v13);
  this->fields.baseSvt = baseSvt;
  p_baseSvt = &this->fields.baseSvt;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseSvt,
    (System_Int32_array **)baseSvt,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.costumeEntity = data;
  p_costumeEntity = &this->fields.costumeEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.costumeEntity,
    (System_Int32_array **)data,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !baseSvt )
    goto LABEL_55;
  v30 = (ServantCostumeReleaseMaster_o *)Instance;
  v32 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v32;
  *(_QWORD *)&v73.fields.fakeValue = v31;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v73, 0LL);
  if ( !data || !v30 )
    goto LABEL_55;
  v33 = ServantCostumeReleaseMaster__checkItemHaving(v30, (int32_t)Instance, data->fields.id, 0LL);
  this->fields.isNotHaveReleaseItem = !v33;
  if ( !v33 )
  {
    v40 = ServantCostumeEntity__checkFlag(data, 4, 0LL) || ServantCostumeEntity__checkFlag(data, 64, 0LL);
    this->fields.isHide = v40;
    itemGetInfo = data->fields.itemGetInfo;
    this->fields.closedMessage = itemGetInfo;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.closedMessage,
      (System_Int32_array **)itemGetInfo,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v43 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v74.fields.currentCryptoKey = v43;
  *(_QWORD *)&v74.fields.fakeValue = v42;
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v74, 0LL);
  v45 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v46 = v44;
  p_fields = &baseSvt->fields;
  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v72.fields.fakeValue = v45;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v71 = v72;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v71, 0LL);
  this->fields.isNotClearCond = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v30, data, v46, v48, 0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(baseSvt->fields.svtId, 0LL);
  v50 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v51 = v49;
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v50;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v70, 0LL);
  this->fields.isNotClearCostumeRelease = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                             v30,
                                             data,
                                             v51,
                                             v52,
                                             0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(baseSvt->fields.svtId, 0LL);
  v54 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v55 = v53;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v54;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v69, 0LL);
  this->fields.isNotOpenEventCostume = !ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                          v30,
                                          data,
                                          v55,
                                          v56,
                                          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v57 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_baseSvt;
  if ( !*p_baseSvt )
    goto LABEL_55;
  v58 = (CombineCostumeMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v57[5], 0LL);
  if ( !*p_costumeEntity || !v58 )
    goto LABEL_55;
  if ( !CombineCostumeMaster__IsClearCombineCondition(v58, (int32_t)Instance, (*p_costumeEntity)->fields.id, 0LL) )
    this->fields.isNotClearCond = 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v61 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v62 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v75.fields.currentCryptoKey = v61;
  *(_QWORD *)&v75.fields.fakeValue = v60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v75, 0LL);
  if ( !v62 )
    goto LABEL_55;
  this->fields.isAlreadyGet = UserServantCollectionMaster__IsCostumeAlreadyGet(
                                v62,
                                (int32_t)Instance,
                                data->fields.id,
                                0LL);
  if ( !ServantCostumeEntity__CheckEnableReleaseTime(data, 0LL) )
    this->fields.isHide = ServantCostumeEntity__checkFlag(data, 2, 0LL);
  if ( !this->fields.isAlreadyGet )
  {
    if ( this->fields.isNotHaveReleaseItem )
    {
      v63 = 2;
      goto LABEL_38;
    }
    Instance = (DataManager_o *)*p_costumeEntity;
    if ( *p_costumeEntity )
    {
      if ( !ServantCostumeEntity__IsEventCombineCostume((ServantCostumeEntity_o *)Instance, 0LL) )
      {
        if ( this->fields.isNotClearCond )
        {
          v63 = 1;
          goto LABEL_38;
        }
LABEL_53:
        this->fields.releaseType = 0;
        return;
      }
      if ( this->fields.isNotOpenEventCostume )
      {
        v63 = 5;
        goto LABEL_38;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v64 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                Instance,
                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
        v66 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v65 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        v67 = (EventCombineCostumeMaster_o *)v64;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v76.fields.currentCryptoKey = v66;
        *(_QWORD *)&v76.fields.fakeValue = v65;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v76, 0LL);
        if ( v67 )
        {
          ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                      v67,
                                      (int32_t)Instance,
                                      data->fields.id,
                                      0LL);
          if ( !ListBySvtIdAndCostumeId || !EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL) )
          {
            v63 = 4;
            goto LABEL_38;
          }
          goto LABEL_53;
        }
      }
    }
LABEL_55:
    sub_B52A5C(Instance, v29);
  }
  v63 = 3;
LABEL_38:
  this->fields.releaseType = v63;
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
    sub_B52A5C(this, sort);
  releaseType = this->fields.releaseType;
  this->fields.sortValue1 = costumeEntity->fields.priority;
  if ( (unsigned int)releaseType <= 5 )
    this->fields.sortValue0 = qword_327DEA0[releaseType];
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
    sub_B52A5C(this, method);
  return costumeEntity->fields.detail;
}


System_String_o *__fastcall CostumeListViewItem__get_getCostumeName(
        CostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_B52A5C(this, method);
  return costumeEntity->fields.name;
}