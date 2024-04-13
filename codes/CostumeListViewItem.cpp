void __fastcall CostumeListViewItem___ctor(
        CostumeListViewItem_o *this,
        ServantCostumeEntity_o *data,
        UserServantEntity_o *baseSvt,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UserServantEntity_o **p_baseSvt; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ServantCostumeEntity_o **p_costumeEntity; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  DataManager_o *Instance; // x0
  __int64 v50; // x1
  ServantCostumeReleaseMaster_o *v51; // x24
  __int64 v52; // x26
  __int64 v53; // x27
  bool v54; // w0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  bool v61; // w8
  struct System_String_o *itemGetInfo; // x1
  __int64 v63; // x25
  __int64 v64; // x26
  int32_t v65; // w0
  __int128 v66; // q1
  int32_t v67; // w25
  UserServantEntity_Fields *p_fields; // x26
  int64_t v69; // x0
  int32_t v70; // w0
  __int128 v71; // q0
  int32_t v72; // w25
  int64_t v73; // x0
  int32_t v74; // w0
  __int128 v75; // q0
  int32_t v76; // w25
  int64_t v77; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v78; // x8
  CombineCostumeMaster_o *v79; // x23
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v81; // x24
  __int64 v82; // x25
  UserServantCollectionMaster_o *v83; // x23
  int32_t v84; // w8
  WarQuestSelectionMaster_o *v85; // x0
  __int64 v86; // x22
  __int64 v87; // x23
  EventCombineCostumeMaster_o *v88; // x21
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_42EA7B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineCostumeMaster___, (_DWORD)data, (_DWORD)baseSvt, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1/*""*/, v25, v26, v27);
    byte_42EA7B5 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isNotClearCond = 0;
  *(_WORD *)&this->fields.isNotHaveReleaseItem = 0;
  this->fields.isHide = 0;
  v28 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.closedMessage, v28, v29, v30, v31, v32, v33, v34);
  this->fields.baseSvt = baseSvt;
  p_baseSvt = &this->fields.baseSvt;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseSvt,
    (System_Int32_array **)baseSvt,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.costumeEntity = data;
  p_costumeEntity = &this->fields.costumeEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.costumeEntity,
    (System_Int32_array **)data,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !baseSvt )
    goto LABEL_55;
  v51 = (ServantCostumeReleaseMaster_o *)Instance;
  v53 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v52 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v94.fields.currentCryptoKey = v53;
  *(_QWORD *)&v94.fields.fakeValue = v52;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v94, 0LL);
  if ( !data || !v51 )
    goto LABEL_55;
  v54 = ServantCostumeReleaseMaster__checkItemHaving(v51, (int32_t)Instance, data->fields.id, 0LL);
  this->fields.isNotHaveReleaseItem = !v54;
  if ( !v54 )
  {
    v61 = ServantCostumeEntity__checkFlag(data, 4, 0LL) || ServantCostumeEntity__checkFlag(data, 64, 0LL);
    this->fields.isHide = v61;
    itemGetInfo = data->fields.itemGetInfo;
    this->fields.closedMessage = itemGetInfo;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.closedMessage,
      (System_Int32_array **)itemGetInfo,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  v64 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v63 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v95.fields.currentCryptoKey = v64;
  *(_QWORD *)&v95.fields.fakeValue = v63;
  v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v95, 0LL);
  v66 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v67 = v65;
  p_fields = &baseSvt->fields;
  *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v93.fields.fakeValue = v66;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v92 = v93;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v92, 0LL);
  this->fields.isNotClearCond = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v51, data, v67, v69, 0LL);
  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(baseSvt->fields.svtId, 0LL);
  v71 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v72 = v70;
  *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v91.fields.fakeValue = v71;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v91, 0LL);
  this->fields.isNotClearCostumeRelease = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                             v51,
                                             data,
                                             v72,
                                             v73,
                                             0LL);
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(baseSvt->fields.svtId, 0LL);
  v75 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v76 = v74;
  *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v90.fields.fakeValue = v75;
  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v90, 0LL);
  this->fields.isNotOpenEventCostume = !ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                          v51,
                                          data,
                                          v76,
                                          v77,
                                          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v78 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_baseSvt;
  if ( !*p_baseSvt )
    goto LABEL_55;
  v79 = (CombineCostumeMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v78[5], 0LL);
  if ( !*p_costumeEntity || !v79 )
    goto LABEL_55;
  if ( !CombineCostumeMaster__IsClearCombineCondition(v79, (int32_t)Instance, (*p_costumeEntity)->fields.id, 0LL) )
    this->fields.isNotClearCond = 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v82 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v81 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v83 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v96.fields.currentCryptoKey = v82;
  *(_QWORD *)&v96.fields.fakeValue = v81;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v96, 0LL);
  if ( !v83 )
    goto LABEL_55;
  this->fields.isAlreadyGet = UserServantCollectionMaster__IsCostumeAlreadyGet(
                                v83,
                                (int32_t)Instance,
                                data->fields.id,
                                0LL);
  if ( !ServantCostumeEntity__CheckEnableReleaseTime(data, 0LL) )
    this->fields.isHide = ServantCostumeEntity__checkFlag(data, 2, 0LL);
  if ( !this->fields.isAlreadyGet )
  {
    if ( this->fields.isNotHaveReleaseItem )
    {
      v84 = 2;
      goto LABEL_38;
    }
    Instance = (DataManager_o *)*p_costumeEntity;
    if ( *p_costumeEntity )
    {
      if ( !ServantCostumeEntity__IsEventCombineCostume((ServantCostumeEntity_o *)Instance, 0LL) )
      {
        if ( this->fields.isNotClearCond )
        {
          v84 = 1;
          goto LABEL_38;
        }
LABEL_53:
        this->fields.releaseType = 0;
        return;
      }
      if ( this->fields.isNotOpenEventCostume )
      {
        v84 = 5;
        goto LABEL_38;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v85 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                Instance,
                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
        v87 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v86 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        v88 = (EventCombineCostumeMaster_o *)v85;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v97.fields.currentCryptoKey = v87;
        *(_QWORD *)&v97.fields.fakeValue = v86;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v97, 0LL);
        if ( v88 )
        {
          ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                      v88,
                                      (int32_t)Instance,
                                      data->fields.id,
                                      0LL);
          if ( !ListBySvtIdAndCostumeId || !EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL) )
          {
            v84 = 4;
            goto LABEL_38;
          }
          goto LABEL_53;
        }
      }
    }
LABEL_55:
    sub_B5D69C(Instance, v50);
  }
  v84 = 3;
LABEL_38:
  this->fields.releaseType = v84;
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
    sub_B5D69C(this, sort);
  releaseType = this->fields.releaseType;
  this->fields.sortValue1 = costumeEntity->fields.priority;
  if ( (unsigned int)releaseType <= 5 )
    this->fields.sortValue0 = qword_32A4FF0[releaseType];
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
    sub_B5D69C(this, method);
  return costumeEntity->fields.detail;
}


System_String_o *__fastcall CostumeListViewItem__get_getCostumeName(
        CostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_B5D69C(this, method);
  return costumeEntity->fields.name;
}