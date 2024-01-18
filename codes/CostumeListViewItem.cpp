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
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UserServantEntity_o **p_baseSvt; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct ServantCostumeEntity_o **p_costumeEntity; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  ServantCostumeReleaseMaster_o *v37; // x24
  __int64 v38; // x26
  __int64 v39; // x27
  bool v40; // w0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  bool v47; // w8
  struct System_String_o *itemGetInfo; // x1
  __int64 v49; // x25
  __int64 v50; // x26
  int32_t v51; // w0
  __int128 v52; // q1
  int32_t v53; // w25
  UserServantEntity_Fields *p_fields; // x26
  int64_t v55; // x0
  int32_t v56; // w0
  __int128 v57; // q0
  int32_t v58; // w25
  int64_t v59; // x0
  int32_t v60; // w0
  __int128 v61; // q0
  int32_t v62; // w25
  int64_t v63; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x8
  CombineCostumeMaster_o *v65; // x23
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v67; // x24
  __int64 v68; // x25
  UserServantCollectionMaster_o *v69; // x23
  int32_t v70; // w8
  WarQuestSelectionMaster_o *v71; // x0
  __int64 v72; // x22
  __int64 v73; // x23
  EventCombineCostumeMaster_o *v74; // x21
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4189665 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineCostumeMaster___, data);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_4189665 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isNotClearCond = 0;
  *(_WORD *)&this->fields.isNotHaveReleaseItem = 0;
  this->fields.isHide = 0;
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closedMessage, v14, v15, v16, v17, v18, v19, v20);
  this->fields.baseSvt = baseSvt;
  p_baseSvt = &this->fields.baseSvt;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseSvt,
    (System_Int32_array **)baseSvt,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.costumeEntity = data;
  p_costumeEntity = &this->fields.costumeEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.costumeEntity,
    (System_Int32_array **)data,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !baseSvt )
    goto LABEL_55;
  v37 = (ServantCostumeReleaseMaster_o *)Instance;
  v39 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v80.fields.currentCryptoKey = v39;
  *(_QWORD *)&v80.fields.fakeValue = v38;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v80, 0LL);
  if ( !data || !v37 )
    goto LABEL_55;
  v40 = ServantCostumeReleaseMaster__checkItemHaving(v37, (int32_t)Instance, data->fields.id, 0LL);
  this->fields.isNotHaveReleaseItem = !v40;
  if ( !v40 )
  {
    v47 = ServantCostumeEntity__checkFlag(data, 4, 0LL) || ServantCostumeEntity__checkFlag(data, 64, 0LL);
    this->fields.isHide = v47;
    itemGetInfo = data->fields.itemGetInfo;
    this->fields.closedMessage = itemGetInfo;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.closedMessage,
      (System_Int32_array **)itemGetInfo,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v50 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v81.fields.currentCryptoKey = v50;
  *(_QWORD *)&v81.fields.fakeValue = v49;
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v81, 0LL);
  v52 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v53 = v51;
  p_fields = &baseSvt->fields;
  *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v79.fields.fakeValue = v52;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v78 = v79;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v78, 0LL);
  this->fields.isNotClearCond = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v37, data, v53, v55, 0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(baseSvt->fields.svtId, 0LL);
  v57 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v58 = v56;
  *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v77.fields.fakeValue = v57;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v77, 0LL);
  this->fields.isNotClearCostumeRelease = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                             v37,
                                             data,
                                             v58,
                                             v59,
                                             0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(baseSvt->fields.svtId, 0LL);
  v61 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v62 = v60;
  *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v76.fields.fakeValue = v61;
  v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v76, 0LL);
  this->fields.isNotOpenEventCostume = !ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                          v37,
                                          data,
                                          v62,
                                          v63,
                                          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v64 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_baseSvt;
  if ( !*p_baseSvt )
    goto LABEL_55;
  v65 = (CombineCostumeMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v64[5], 0LL);
  if ( !*p_costumeEntity || !v65 )
    goto LABEL_55;
  if ( !CombineCostumeMaster__IsClearCombineCondition(v65, (int32_t)Instance, (*p_costumeEntity)->fields.id, 0LL) )
    this->fields.isNotClearCond = 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v68 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v67 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v69 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v82.fields.currentCryptoKey = v68;
  *(_QWORD *)&v82.fields.fakeValue = v67;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v82, 0LL);
  if ( !v69 )
    goto LABEL_55;
  this->fields.isAlreadyGet = UserServantCollectionMaster__IsCostumeAlreadyGet(
                                v69,
                                (int32_t)Instance,
                                data->fields.id,
                                0LL);
  if ( !ServantCostumeEntity__CheckEnableReleaseTime(data, 0LL) )
    this->fields.isHide = ServantCostumeEntity__checkFlag(data, 2, 0LL);
  if ( !this->fields.isAlreadyGet )
  {
    if ( this->fields.isNotHaveReleaseItem )
    {
      v70 = 2;
      goto LABEL_38;
    }
    Instance = (DataManager_o *)*p_costumeEntity;
    if ( *p_costumeEntity )
    {
      if ( !ServantCostumeEntity__IsEventCombineCostume((ServantCostumeEntity_o *)Instance, 0LL) )
      {
        if ( this->fields.isNotClearCond )
        {
          v70 = 1;
          goto LABEL_38;
        }
LABEL_53:
        this->fields.releaseType = 0;
        return;
      }
      if ( this->fields.isNotOpenEventCostume )
      {
        v70 = 5;
        goto LABEL_38;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v71 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                Instance,
                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
        v73 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v72 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        v74 = (EventCombineCostumeMaster_o *)v71;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v83.fields.currentCryptoKey = v73;
        *(_QWORD *)&v83.fields.fakeValue = v72;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v83, 0LL);
        if ( v74 )
        {
          ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                      v74,
                                      (int32_t)Instance,
                                      data->fields.id,
                                      0LL);
          if ( !ListBySvtIdAndCostumeId || !EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL) )
          {
            v70 = 4;
            goto LABEL_38;
          }
          goto LABEL_53;
        }
      }
    }
LABEL_55:
    sub_B2C434(Instance, v36);
  }
  v70 = 3;
LABEL_38:
  this->fields.releaseType = v70;
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
    sub_B2C434(this, sort);
  releaseType = this->fields.releaseType;
  this->fields.sortValue1 = costumeEntity->fields.priority;
  if ( (unsigned int)releaseType <= 5 )
    this->fields.sortValue0 = qword_31A3C70[releaseType];
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
    sub_B2C434(this, method);
  return costumeEntity->fields.detail;
}


System_String_o *__fastcall CostumeListViewItem__get_getCostumeName(
        CostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_B2C434(this, method);
  return costumeEntity->fields.name;
}