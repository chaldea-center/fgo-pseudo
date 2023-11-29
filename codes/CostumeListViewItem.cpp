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
  ServantCostumeEntity_o **p_costumeEntity; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantCostumeReleaseMaster_o *v37; // x24
  __int64 v38; // x26
  __int64 v39; // x27
  int32_t v40; // w0
  bool v41; // w0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  bool v48; // w8
  struct System_String_o *itemGetInfo; // x1
  __int64 v50; // x25
  __int64 v51; // x26
  int32_t v52; // w0
  __int128 v53; // q1
  int32_t v54; // w25
  UserServantEntity_Fields *p_fields; // x26
  int64_t v56; // x0
  int32_t v57; // w0
  __int128 v58; // q0
  int32_t v59; // w25
  int64_t v60; // x0
  int32_t v61; // w0
  __int128 v62; // q0
  int32_t v63; // w25
  int64_t v64; // x0
  WebViewManager_o *v65; // x0
  WarQuestSelectionMaster_o *v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x8
  CombineCostumeMaster_o *v68; // x23
  int32_t v69; // w0
  WebViewManager_o *v70; // x0
  WarQuestSelectionMaster_o *v71; // x0
  __int64 v72; // x24
  __int64 v73; // x25
  UserServantCollectionMaster_o *v74; // x23
  int32_t v75; // w0
  int32_t v76; // w8
  WebViewManager_o *v77; // x0
  WarQuestSelectionMaster_o *v78; // x0
  __int64 v79; // x22
  __int64 v80; // x23
  EventCombineCostumeMaster_o *v81; // x21
  int32_t v82; // w0
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_40FBDC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineCostumeMaster___, data);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    byte_40FBDC2 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isNotClearCond = 0;
  *(_WORD *)&this->fields.isNotHaveReleaseItem = 0;
  this->fields.isHide = 0;
  v14 = (System_Int32_array **)StringLiteral_1;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closedMessage, v14, v15, v16, v17, v18, v19, v20);
  this->fields.baseSvt = baseSvt;
  p_baseSvt = &this->fields.baseSvt;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.costumeEntity,
    (System_Int32_array **)data,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !baseSvt )
    goto LABEL_55;
  v37 = (ServantCostumeReleaseMaster_o *)MasterData_WarQuestSelectionMaster;
  v39 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v88.fields.currentCryptoKey = v39;
  *(_QWORD *)&v88.fields.fakeValue = v38;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v88, 0LL);
  if ( !data || !v37 )
    goto LABEL_55;
  v41 = ServantCostumeReleaseMaster__checkItemHaving(v37, v40, data->fields.id, 0LL);
  this->fields.isNotHaveReleaseItem = !v41;
  if ( !v41 )
  {
    v48 = ServantCostumeEntity__checkFlag(data, 4, 0LL) || ServantCostumeEntity__checkFlag(data, 64, 0LL);
    this->fields.isHide = v48;
    itemGetInfo = data->fields.itemGetInfo;
    this->fields.closedMessage = itemGetInfo;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.closedMessage,
      (System_Int32_array **)itemGetInfo,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v51 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v89.fields.currentCryptoKey = v51;
  *(_QWORD *)&v89.fields.fakeValue = v50;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v89, 0LL);
  v53 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v54 = v52;
  p_fields = &baseSvt->fields;
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v53;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v86 = v87;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v86, 0LL);
  this->fields.isNotClearCond = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v37, data, v54, v56, 0LL);
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(baseSvt->fields.svtId, 0LL);
  v58 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v59 = v57;
  *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v85.fields.fakeValue = v58;
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v85, 0LL);
  this->fields.isNotClearCostumeRelease = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                             v37,
                                             data,
                                             v59,
                                             v60,
                                             0LL);
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(baseSvt->fields.svtId, 0LL);
  v62 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v63 = v61;
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v62;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v84, 0LL);
  this->fields.isNotOpenEventCostume = !ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                          v37,
                                          data,
                                          v63,
                                          v64,
                                          0LL);
  v65 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v65 )
    goto LABEL_55;
  v66 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v65,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v67 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_baseSvt;
  if ( !*p_baseSvt )
    goto LABEL_55;
  v68 = (CombineCostumeMaster_o *)v66;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v67[5], 0LL);
  if ( !*p_costumeEntity || !v68 )
    goto LABEL_55;
  if ( !CombineCostumeMaster__IsClearCombineCondition(v68, v69, (*p_costumeEntity)->fields.id, 0LL) )
    this->fields.isNotClearCond = 1;
  v70 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v70 )
    goto LABEL_55;
  v71 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v70,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v73 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v72 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v74 = (UserServantCollectionMaster_o *)v71;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v90.fields.currentCryptoKey = v73;
  *(_QWORD *)&v90.fields.fakeValue = v72;
  v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v90, 0LL);
  if ( !v74 )
    goto LABEL_55;
  this->fields.isAlreadyGet = UserServantCollectionMaster__IsCostumeAlreadyGet(v74, v75, data->fields.id, 0LL);
  if ( !ServantCostumeEntity__CheckEnableReleaseTime(data, 0LL) )
    this->fields.isHide = ServantCostumeEntity__checkFlag(data, 2, 0LL);
  if ( !this->fields.isAlreadyGet )
  {
    if ( this->fields.isNotHaveReleaseItem )
    {
      v76 = 2;
      goto LABEL_38;
    }
    if ( *p_costumeEntity )
    {
      if ( !ServantCostumeEntity__IsEventCombineCostume(*p_costumeEntity, 0LL) )
      {
        if ( this->fields.isNotClearCond )
        {
          v76 = 1;
          goto LABEL_38;
        }
LABEL_53:
        this->fields.releaseType = 0;
        return;
      }
      if ( this->fields.isNotOpenEventCostume )
      {
        v76 = 5;
        goto LABEL_38;
      }
      v77 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v77 )
      {
        v78 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v77,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
        v80 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v79 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        v81 = (EventCombineCostumeMaster_o *)v78;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v91.fields.currentCryptoKey = v80;
        *(_QWORD *)&v91.fields.fakeValue = v79;
        v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v91, 0LL);
        if ( v81 )
        {
          ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                      v81,
                                      v82,
                                      data->fields.id,
                                      0LL);
          if ( !ListBySvtIdAndCostumeId || !EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL) )
          {
            v76 = 4;
            goto LABEL_38;
          }
          goto LABEL_53;
        }
      }
    }
LABEL_55:
    sub_B170D4();
  }
  v76 = 3;
LABEL_38:
  this->fields.releaseType = v76;
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
    sub_B170D4();
  releaseType = this->fields.releaseType;
  this->fields.sortValue1 = costumeEntity->fields.priority;
  if ( (unsigned int)releaseType <= 5 )
    this->fields.sortValue0 = qword_3137980[releaseType];
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
    sub_B170D4();
  return costumeEntity->fields.detail;
}


System_String_o *__fastcall CostumeListViewItem__get_getCostumeName(
        CostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_B170D4();
  return costumeEntity->fields.name;
}