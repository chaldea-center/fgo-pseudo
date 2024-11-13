void __fastcall CostumeListViewItem___ctor(
        CostumeListViewItem_o *this,
        ServantCostumeEntity_o *data,
        UserServantEntity_o *baseSvt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  void *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UserServantEntity_o **p_baseSvt; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct ServantCostumeEntity_o **p_costumeEntity; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  DataManager_o *Instance; // x0
  __int64 v43; // x1
  ServantCostumeReleaseMaster_o *v44; // x24
  __int64 v45; // x26
  __int64 v46; // x27
  bool v47; // w0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  bool v55; // w8
  struct System_String_o *itemGetInfo; // x1
  __int64 v57; // x25
  __int64 v58; // x26
  int32_t v59; // w0
  __int64 v60; // x1
  __int128 v61; // q0
  int32_t v62; // w25
  UserServantEntity_Fields *p_fields; // x26
  int64_t v64; // x0
  int32_t v65; // w0
  __int128 v66; // q1
  int32_t v67; // w25
  int64_t v68; // x0
  int32_t v69; // w0
  __int128 v70; // q1
  int32_t v71; // w25
  int64_t v72; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v73; // x8
  CombineCostumeMaster_o *v74; // x23
  Il2CppObject *MasterData_object; // x0
  __int64 v76; // x1
  __int64 v77; // x24
  __int64 v78; // x25
  UserServantCollectionMaster_o *v79; // x23
  int32_t v80; // w8
  Il2CppObject *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x22
  __int64 v84; // x23
  EventCombineCostumeMaster_o *v85; // x21
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_4B19D50 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineCostumeMaster___, data, baseSvt);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B19D50 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isNotClearCond = 0;
  *(_WORD *)&this->fields.isNotHaveReleaseItem = 0;
  this->fields.isHide = 0;
  v21 = StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closedMessage, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  this->fields.baseSvt = baseSvt;
  p_baseSvt = &this->fields.baseSvt;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseSvt, (int64_t)baseSvt, v29, v30, v31, v32, v33, v34);
  this->fields.costumeEntity = data;
  p_costumeEntity = &this->fields.costumeEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.costumeEntity, (int64_t)data, v36, v37, v38, v39, v40, v41);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  if ( !baseSvt )
    goto LABEL_50;
  v44 = (ServantCostumeReleaseMaster_o *)Instance;
  v46 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
  *(_QWORD *)&v91.fields.currentCryptoKey = v46;
  *(_QWORD *)&v91.fields.fakeValue = v45;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v91, 0LL);
  if ( !data || !v44 )
    goto LABEL_50;
  v47 = ServantCostumeReleaseMaster__checkItemHaving(v44, (int32_t)Instance, data->fields.id, 0LL);
  this->fields.isNotHaveReleaseItem = !v47;
  if ( !v47 )
  {
    v55 = ServantCostumeEntity__checkFlag(data, 4, 0LL) || ServantCostumeEntity__checkFlag(data, 64, 0LL);
    this->fields.isHide = v55;
    itemGetInfo = data->fields.itemGetInfo;
    this->fields.closedMessage = itemGetInfo;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.closedMessage,
      (int64_t)itemGetInfo,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  v58 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v57 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
  *(_QWORD *)&v92.fields.currentCryptoKey = v58;
  *(_QWORD *)&v92.fields.fakeValue = v57;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v92, 0LL);
  v61 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v62 = v59;
  p_fields = &baseSvt->fields;
  *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v90.fields.fakeValue = v61;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v60);
  v89 = v90;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v89, 0LL);
  this->fields.isNotClearCond = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v44, data, v62, v64, 0LL);
  v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(baseSvt->fields.svtId, 0LL);
  v66 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v67 = v65;
  *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v88.fields.fakeValue = v66;
  v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v88, 0LL);
  this->fields.isNotClearCostumeRelease = !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                             v44,
                                             data,
                                             v67,
                                             v68,
                                             0LL);
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(baseSvt->fields.svtId, 0LL);
  v70 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v71 = v69;
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v70;
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v87, 0LL);
  this->fields.isNotOpenEventCostume = !ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                          v44,
                                          data,
                                          v71,
                                          v72,
                                          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v73 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_baseSvt;
  if ( !*p_baseSvt )
    goto LABEL_50;
  v74 = (CombineCostumeMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v73[5], 0LL);
  if ( !*p_costumeEntity || !v74 )
    goto LABEL_50;
  if ( !CombineCostumeMaster__IsClearCombineCondition(v74, (int32_t)Instance, (*p_costumeEntity)->fields.id, 0LL) )
    this->fields.isNotClearCond = 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v78 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v77 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  v79 = (UserServantCollectionMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v76);
  *(_QWORD *)&v93.fields.currentCryptoKey = v78;
  *(_QWORD *)&v93.fields.fakeValue = v77;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v93, 0LL);
  if ( !v79 )
    goto LABEL_50;
  this->fields.isAlreadyGet = UserServantCollectionMaster__IsCostumeAlreadyGet(
                                v79,
                                (int32_t)Instance,
                                data->fields.id,
                                0LL);
  if ( !ServantCostumeEntity__CheckEnableReleaseTime(data, 0LL) )
    this->fields.isHide = ServantCostumeEntity__checkFlag(data, 2, 0LL);
  if ( !this->fields.isAlreadyGet )
  {
    if ( this->fields.isNotHaveReleaseItem )
    {
      v80 = 2;
      goto LABEL_34;
    }
    Instance = (DataManager_o *)*p_costumeEntity;
    if ( *p_costumeEntity )
    {
      if ( !ServantCostumeEntity__IsEventCombineCostume((ServantCostumeEntity_o *)Instance, 0LL) )
      {
        if ( this->fields.isNotClearCond )
        {
          v80 = 1;
          goto LABEL_34;
        }
LABEL_48:
        this->fields.releaseType = 0;
        return;
      }
      if ( this->fields.isNotOpenEventCostume )
      {
        v80 = 5;
        goto LABEL_34;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v81 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
        v84 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
        v83 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
        v85 = (EventCombineCostumeMaster_o *)v81;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v82);
        *(_QWORD *)&v94.fields.currentCryptoKey = v84;
        *(_QWORD *)&v94.fields.fakeValue = v83;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v94, 0LL);
        if ( v85 )
        {
          ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                      v85,
                                      (int32_t)Instance,
                                      data->fields.id,
                                      0LL);
          if ( !ListBySvtIdAndCostumeId || !EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL) )
          {
            v80 = 4;
            goto LABEL_34;
          }
          goto LABEL_48;
        }
      }
    }
LABEL_50:
    sub_1BCAA3C(Instance, v43);
  }
  v80 = 3;
LABEL_34:
  this->fields.releaseType = v80;
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
    sub_1BCAA3C(this, sort);
  releaseType = this->fields.releaseType;
  this->fields.sortValue1 = costumeEntity->fields.priority;
  if ( (unsigned int)releaseType <= 5 )
    this->fields.sortValue0 = qword_C0E1B0[releaseType];
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
    sub_1BCAA3C(this, method);
  return costumeEntity->fields.detail;
}


System_String_o *__fastcall CostumeListViewItem__get_getCostumeName(
        CostumeListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantCostumeEntity_o *costumeEntity; // x8

  costumeEntity = this->fields.costumeEntity;
  if ( !costumeEntity )
    sub_1BCAA3C(this, method);
  return costumeEntity->fields.name;
}