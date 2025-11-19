void ServantLeaderInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4CB770D & 1) == 0 )
  {
    sub_1C6BA08(&ServantLeaderInfo_TypeInfo);
    byte_4CB770D = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  this->fields.isUserServant = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantLeaderInfo___ctor_43722540(
        ServantLeaderInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *Entity; // x21
  int32_t v12; // w8
  int32_t MaxDispLimitCount; // w0
  long double v14; // q0
  int32_t v15; // w22
  __int64 v16; // x8
  __int64 v17; // x0
  Il2CppObject *MasterData_object; // x23
  unsigned int v19; // w8
  __int64 v20; // x9
  __int64 v21; // x9
  __int64 v22; // x8
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  long double v25; // q0
  __int64 v26; // x0
  __int64 v27; // x0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3

  if ( (byte_4CB76C6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76C6 = 1;
  }
  this->fields.supportDeckId = 1;
  this->fields.isUserServant = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userId = 1;
  this->fields.classId = 0;
  this->fields.userSvtId = 1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  this->fields.exceedCount = 0;
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  this->fields.npcFlag = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, 0);
  if ( !Instance )
    goto LABEL_39;
  this->fields.hp = *((_DWORD *)Instance + 9);
  v12 = *((_DWORD *)Instance + 11);
  this->fields.adjustHp = 0;
  this->fields.adjustAtk = 0;
  this->fields.atk = v12;
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(this, v10);
  *(_QWORD *)&v14 = 0x100000001LL;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v15 = MaxDispLimitCount;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C41A9C(v14);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C41A9C(v14);
  Instance = **(void ***)(v17 + 184);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(this->fields.svtId, 0);
  if ( !MasterData_object )
    goto LABEL_39;
  Instance = ServantSkillMaster__getUseEntityList(
               (ServantSkillMaster_o *)MasterData_object,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               v15,
               -1,
               -1,
               0);
  if ( !Instance )
    goto LABEL_39;
  v19 = *((_DWORD *)Instance + 6);
  if ( !v19 )
    goto LABEL_40;
  v20 = *((_QWORD *)Instance + 4);
  if ( v20 )
    LODWORD(v20) = *(_DWORD *)(v20 + 28);
  this->fields.skillId1 = v20;
  if ( v19 <= 1 )
    goto LABEL_40;
  v21 = *((_QWORD *)Instance + 5);
  if ( v21 )
    LODWORD(v21) = *(_DWORD *)(v21 + 28);
  this->fields.skillId2 = v21;
  if ( v19 <= 2 )
LABEL_40:
    sub_1C6BC68(Instance);
  v22 = *((_QWORD *)Instance + 6);
  if ( v22 )
    LODWORD(v22) = *(_DWORD *)(v22 + 28);
  this->fields.skillId3 = v22;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_39;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0) )
    goto LABEL_36;
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C41A9C(v25);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C41A9C(v25);
  Instance = **(void ***)(v27 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0 )
  {
LABEL_39:
    sub_1C6BC60(Instance, v10);
  }
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)Instance,
                svtId,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v15,
                0,
                -1,
                0);
  if ( UseEntity )
    this->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
LABEL_36:
  this->fields.equipTarget1 = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipTarget1, 0, v23, v24);
  this->fields.randomLimitCountTargets = 0;
  *(_QWORD *)&this->fields.imageLimitCount = 0;
  *(_QWORD *)&this->fields.commandCardLimitCount = 0;
  this->fields.updatedAt = 0;
  this->fields.portraitLimitCount = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.randomLimitCountTargets, 0, v29, v30);
  this->fields.imagePartsGroupInfo = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.imagePartsGroupInfo, 0, v31, v32);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0) )
    ServantLeaderInfo__SetTransformData(this, 0, v15, v33);
}


void ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  int32_t v9; // w0
  int32_t iconLimitCount; // w1
  const MethodInfo *v11; // x2
  int32_t v12; // w0
  int32_t dispLimitCount; // w1
  const MethodInfo *v14; // x2
  int32_t v15; // w0
  int32_t commandCardLimitCount; // w1
  const MethodInfo *v17; // x2
  int32_t v18; // w0
  int32_t portraitLimitCount; // w1
  const MethodInfo *v20; // x2
  ServantLeaderInfo_o *v21; // x0
  int32_t v22; // w1
  const MethodInfo *v23; // x2
  ServantLeaderInfo_o *AdjustLimitCount; // x0
  int32_t v25; // w1
  const MethodInfo *v26; // x2
  ServantLeaderInfo_o *v27; // x0
  int32_t v28; // w1
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4CB76FE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    byte_4CB76FE = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSpoilerSetting(0) )
  {
    v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v4;
    *(_QWORD *)&v33.fields.fakeValue = v3;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v33, 0) >= 1 )
    {
      v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v5,
        (const MethodInfo_3449074 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v5;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.limitChangeDic, (int32_t)v5, v6, v7);
      v9 = ServantLeaderInfo__GetLimitChangeDic(this, this->fields.imageLimitCount, v8);
      iconLimitCount = this->fields.iconLimitCount;
      this->fields.imageLimitCount = v9;
      v12 = ServantLeaderInfo__GetLimitChangeDic(this, iconLimitCount, v11);
      dispLimitCount = this->fields.dispLimitCount;
      this->fields.iconLimitCount = v12;
      v15 = ServantLeaderInfo__GetLimitChangeDic(this, dispLimitCount, v14);
      commandCardLimitCount = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = v15;
      v18 = ServantLeaderInfo__GetLimitChangeDic(this, commandCardLimitCount, v17);
      portraitLimitCount = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = v18;
      v21 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetLimitChangeDic(this, portraitLimitCount, v20);
      v22 = this->fields.dispLimitCount;
      this->fields.portraitLimitCount = (int)v21;
      AdjustLimitCount = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(v21, v22, v23);
      v25 = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = (int)AdjustLimitCount;
      v27 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(AdjustLimitCount, v25, v26);
      v28 = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = (int)v27;
      this->fields.portraitLimitCount = ServantLeaderInfo__GetAdjustLimitCount(v27, v28, v29);
      ServantLeaderInfo__SetServantNameBySpoilerProtection(this, v30);
      this->fields.limitChangeDic = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.limitChangeDic, 0, v31, v32);
    }
  }
}


// positive sp value has been detected, the output may be wrong!
void ServantLeaderInfo__Finalize(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.equipTarget1 = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipTarget1, 0, v2, v3);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


int32_t ServantLeaderInfo__GetAdjustLimitCount(
        ServantLeaderInfo_o *this,
        int32_t orgLimitCount,
        const MethodInfo *method)
{
  ServantLeaderInfo_c *v4; // x0

  if ( (byte_4CB7701 & 1) == 0 )
  {
    sub_1C6BA08(&ServantLeaderInfo_TypeInfo);
    byte_4CB7701 = 1;
  }
  v4 = ServantLeaderInfo_TypeInfo;
  if ( !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo);
    v4 = ServantLeaderInfo_TypeInfo;
  }
  if ( orgLimitCount <= 10 && v4->static_fields->LIMIT_COUNT_THIRD_STAGE < orgLimitCount )
  {
    orgLimitCount = v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      return ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE;
    }
  }
  return orgLimitCount;
}


bool ServantLeaderInfo__GetAdjustMax(
        ServantLeaderInfo_o *this,
        int32_t *maxAjustHp,
        int32_t *maxAjustAtk,
        int32_t *secondMaxAdjustHp,
        int32_t *secondMaxAdjustAtk,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x25
  __int64 v15; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x24
  Il2CppObject *v17; // x24
  const MethodInfo *v18; // x1
  int32_t *Entity; // x0
  int32_t v20; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4CB76CB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v22, 0);
  if ( !v16 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v16,
               (int32_t)Instance,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0) )
  {
LABEL_13:
    v20 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v17 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v18),
        !v17) )
  {
LABEL_15:
    sub_1C6BC60(Instance, v12);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                        (int32_t)Instance,
                        (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_13;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v20 = Entity[8];
  result = 1;
LABEL_14:
  *secondMaxAdjustAtk = v20;
  return result;
}


void ServantLeaderInfo__GetAppendPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v11; // x26
  __int64 v12; // x27
  ServantAppendPassiveSkillMaster_o *v13; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *EntityListFromSvtId; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_String_o *MasterName_k__BackingField; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x25
  System_Int32_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Boolean_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int32_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x27
  unsigned int v36; // w19
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x11
  int max_length; // w8
  __int64 v39; // x9
  __int64 v40; // x10
  AppendPassiveSkillInfo_o **m_Items; // x11
  AppendPassiveSkillInfo_o *v42; // x29
  __int64 v43; // x20
  __int64 v44; // x8
  System_Int32_array *v45; // x9
  SkillEntity_o *v46; // x28
  System_Int32_array *v47; // x8
  System_String_array *v48; // x22
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x1
  Il2CppClass **v52; // x0
  System_String_array *v53; // x22
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x1
  Il2CppClass **v57; // x0
  System_Boolean_array *v58; // x8
  char v59; // w9
  System_String_array *v60; // x22
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x1
  Il2CppClass **v64; // x0
  System_String_array *v65; // x28
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // x1
  Il2CppClass **v69; // x0
  System_String_array *v70; // x8
  System_String_array *v71; // x8
  CGThumbnailListItem_o *v72; // x28
  System_String_o *sortValue0; // t1
  System_String_o *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  System_String_array *v77; // x8
  Il2CppClass **v78; // x28
  CGThumbnailListItem_o *v79; // x28
  System_String_o *v80; // x29
  System_String_o *v81; // t1
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct AppendPassiveSkillInfo_array *v86; // x8
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  if ( (byte_4CB7702 & 1) == 0 )
  {
    sub_1C6BA08(&bool___TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_3727/*"COND_TYPE_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3715/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7702 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v98.fields.currentCryptoKey = v12;
  *(_QWORD *)&v98.fields.fakeValue = v11;
  EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                                        v98,
                                                                        0);
  if ( !v13
    || (EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                                                              v13,
                                                                              (int32_t)EntityListFromSvtId,
                                                                              0)) == 0 )
  {
LABEL_67:
    sub_1C6BC60(EntityListFromSvtId, v15);
  }
  MasterName_k__BackingField = EntityListFromSvtId->fields._MasterName_k__BackingField;
  v19 = EntityListFromSvtId;
  if ( MasterName_k__BackingField || (v86 = this->fields.appendPassiveSkill) != 0 && v86->max_length )
  {
    v20 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *idList = v20;
    sub_1C6B9AC((CGThumbnailListItem_o *)idList, (int32_t)v20, v21, v22);
    v23 = (System_String_array *)sub_1C6BAB0(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *titleList = v23;
    sub_1C6B9AC((CGThumbnailListItem_o *)titleList, (int32_t)v23, v24, v25);
    v26 = (System_String_array *)sub_1C6BAB0(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *explanationList = v26;
    sub_1C6B9AC((CGThumbnailListItem_o *)explanationList, (int32_t)v26, v27, v28);
    v29 = (System_Boolean_array *)sub_1C6BAB0(bool___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *releaseStateList = v29;
    sub_1C6B9AC((CGThumbnailListItem_o *)releaseStateList, (int32_t)v29, v30, v31);
    v32 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *lvList = v32;
    sub_1C6B9AC((CGThumbnailListItem_o *)lvList, (int32_t)v32, v33, v34);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v35 = EntityListFromSvtId;
      v36 = 0;
      while ( 1 )
      {
        appendPassiveSkill = this->fields.appendPassiveSkill;
        if ( appendPassiveSkill )
        {
          max_length = appendPassiveSkill->max_length;
          if ( max_length >= 1 )
            break;
        }
LABEL_23:
        v42 = 0;
LABEL_24:
        if ( v36 >= LODWORD(v19->fields._MasterName_k__BackingField) )
          goto LABEL_68;
        v43 = (int)v36;
        v44 = *((_QWORD *)&v19->fields.revision + (int)v36);
        if ( !v44 )
          goto LABEL_67;
        v45 = *idList;
        if ( !*idList )
          goto LABEL_67;
        if ( v36 >= LODWORD(v45->max_length) )
          goto LABEL_68;
        v15 = *(unsigned int *)(v44 + 28);
        v45->m_Items[v36] = v15;
        if ( !v35 )
          goto LABEL_67;
        EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                              v35,
                                                                              v15,
                                                                              (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v46 = (SkillEntity_o *)EntityListFromSvtId;
        v47 = *lvList;
        if ( v42 )
        {
          if ( !v47 )
            goto LABEL_67;
          if ( v36 >= LODWORD(v47->max_length) )
            goto LABEL_68;
          v47->m_Items[v36] = v42->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v48 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                v42->fields.skillLv,
                                                                                0);
          if ( !v48 )
            goto LABEL_67;
          if ( v36 >= LODWORD(v48->max_length) )
            goto LABEL_68;
          v51 = EntityListFromSvtId;
          v52 = &v48->obj.klass + (int)v36;
          v52[4] = (Il2CppClass *)v51;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v51, v49, v50);
          v53 = *explanationList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                                v46,
                                                                                v42->fields.skillLv,
                                                                                0);
          if ( !v53 )
            goto LABEL_67;
          if ( v36 >= LODWORD(v53->max_length) )
            goto LABEL_68;
          v56 = EntityListFromSvtId;
          v57 = &v53->obj.klass + (int)v36;
          v57[4] = (Il2CppClass *)v56;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v56, v54, v55);
          v58 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v36 >= LODWORD(v58->max_length) )
            goto LABEL_68;
          v59 = 1;
        }
        else
        {
          if ( !v47 )
            goto LABEL_67;
          if ( v36 >= LODWORD(v47->max_length) )
            goto LABEL_68;
          v47->m_Items[v36] = -1;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v60 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                -1,
                                                                                0);
          if ( !v60 )
            goto LABEL_67;
          if ( v36 >= LODWORD(v60->max_length) )
            goto LABEL_68;
          v63 = EntityListFromSvtId;
          v64 = &v60->obj.klass + (int)v36;
          v64[4] = (Il2CppClass *)v63;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 4), (int32_t)v63, v61, v62);
          v65 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3727/*"COND_TYPE_TITLE"*/,
                                                                                0);
          if ( !v65 )
            goto LABEL_67;
          if ( v36 >= LODWORD(v65->max_length) )
            goto LABEL_68;
          v68 = EntityListFromSvtId;
          v69 = &v65->obj.klass + (int)v36;
          v69[4] = (Il2CppClass *)v68;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v68, v66, v67);
          v70 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v36 >= LODWORD(v70->max_length) )
            goto LABEL_68;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                                v70->m_Items[v36],
                                                                                (System_String_o *)StringLiteral_1/*""*/,
                                                                                0);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v71 = *explanationList;
            if ( !*explanationList )
              goto LABEL_67;
            if ( v36 >= LODWORD(v71->max_length) )
              goto LABEL_68;
            v72 = (CGThumbnailListItem_o *)(&v71->obj.klass + (int)v36);
            sortValue0 = (System_String_o *)v72->fields.sortValue0;
            v72 = (CGThumbnailListItem_o *)((char *)v72 + 32);
            v74 = System_String__Concat_63966792(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            v72->klass = (CGThumbnailListItem_c *)v74;
            sub_1C6B9AC(v72, (int32_t)v74, v75, v76);
          }
          v77 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v36 >= LODWORD(v77->max_length) )
            goto LABEL_68;
          v78 = &v77->obj.klass + (int)v36;
          v81 = (System_String_o *)v78[4];
          v79 = (CGThumbnailListItem_o *)(v78 + 4);
          v80 = v81;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v83 = System_String__Concat_63966792(v80, v82, 0);
          v79->klass = (CGThumbnailListItem_c *)v83;
          sub_1C6B9AC(v79, (int32_t)v83, v84, v85);
          v58 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v36 >= LODWORD(v58->max_length) )
            goto LABEL_68;
          v59 = 0;
        }
        ++v36;
        v58->m_Items[v43] = v59;
        if ( v36 == (_DWORD)MasterName_k__BackingField )
          return;
      }
      v39 = 0;
      v40 = (__int64)(&v19->fields.revision + 2 * (int)v36);
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v39 < max_length )
      {
        v42 = m_Items[v39];
        if ( !v42 )
          goto LABEL_67;
        if ( v36 >= LODWORD(v19->fields._MasterName_k__BackingField) )
          break;
        if ( !*(_QWORD *)v40 )
          goto LABEL_67;
        if ( v42->fields.skillId == *(_DWORD *)(*(_QWORD *)v40 + 28LL) )
          goto LABEL_24;
        if ( (int)++v39 >= max_length )
          goto LABEL_23;
      }
LABEL_68:
      sub_1C6BC68(EntityListFromSvtId);
    }
  }
  else
  {
    *idList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)idList, 0, v16, v17);
    *titleList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)titleList, 0, v87, v88);
    *explanationList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)explanationList, 0, v89, v90);
    *releaseStateList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)releaseStateList, 0, v91, v92);
    *lvList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)lvList, 0, v93, v94);
  }
}


void ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
        ServantLeaderInfo_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x8
  il2cpp_array_size_t max_length; // x25
  System_Int32_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Boolean_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 skillId; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x26
  unsigned int v32; // w29
  struct AppendPassiveSkillInfo_array *v33; // x8
  __int64 v34; // x19
  AppendPassiveSkillInfo_o *v35; // x8
  System_Int32_array *v36; // x9
  struct AppendPassiveSkillInfo_array *v37; // x8
  AppendPassiveSkillInfo_o *v38; // x8
  int skillLv; // w10
  SkillEntity_o *v40; // x27
  System_Int32_array *v41; // x9
  System_String_array *v42; // x28
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x1
  Il2CppClass **v46; // x0
  struct AppendPassiveSkillInfo_array *v47; // x8
  AppendPassiveSkillInfo_o *v48; // x8
  System_String_array *v49; // x28
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x1
  Il2CppClass **v53; // x0
  System_Boolean_array *v54; // x8
  char v55; // w9
  System_String_array *v56; // x28
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x1
  Il2CppClass **v60; // x0
  System_String_array *v61; // x27
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x1
  Il2CppClass **v65; // x0
  System_String_array *v66; // x8
  System_String_array *v67; // x8
  CGThumbnailListItem_o *v68; // x27
  System_String_o *sortValue0; // t1
  System_String_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_String_array *v73; // x8
  Il2CppClass **v74; // x27
  CGThumbnailListItem_o *v75; // x27
  System_String_o *v76; // x28
  System_String_o *v77; // t1
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  int32_t v88; // w2
  const MethodInfo *v89; // x3

  if ( (byte_4CB7703 & 1) == 0 )
  {
    sub_1C6BA08(&bool___TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_3727/*"COND_TYPE_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3715/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7703 = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (max_length = appendPassiveSkill->max_length) != 0 )
  {
    v14 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, (unsigned int)max_length);
    *idList = v14;
    sub_1C6B9AC((CGThumbnailListItem_o *)idList, (int32_t)v14, v15, v16);
    v17 = (System_String_array *)sub_1C6BAB0(string___TypeInfo, (unsigned int)max_length);
    *titleList = v17;
    sub_1C6B9AC((CGThumbnailListItem_o *)titleList, (int32_t)v17, v18, v19);
    v20 = (System_String_array *)sub_1C6BAB0(string___TypeInfo, (unsigned int)max_length);
    *explanationList = v20;
    sub_1C6B9AC((CGThumbnailListItem_o *)explanationList, (int32_t)v20, v21, v22);
    v23 = (System_Boolean_array *)sub_1C6BAB0(bool___TypeInfo, (unsigned int)max_length);
    *releaseStateList = v23;
    sub_1C6B9AC((CGThumbnailListItem_o *)releaseStateList, (int32_t)v23, v24, v25);
    v26 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, (unsigned int)max_length);
    *lvList = v26;
    sub_1C6B9AC((CGThumbnailListItem_o *)lvList, (int32_t)v26, v27, v28);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)max_length >= 1 )
    {
      v31 = Master_object;
      v32 = 0;
      while ( 1 )
      {
        v33 = this->fields.appendPassiveSkill;
        if ( !v33 )
          break;
        if ( v32 >= LODWORD(v33->max_length) )
          goto LABEL_58;
        v34 = (int)v32;
        v35 = v33->m_Items[v32];
        if ( !v35 )
          break;
        v36 = *idList;
        if ( !*idList )
          break;
        if ( v32 >= LODWORD(v36->max_length) )
          goto LABEL_58;
        skillId = (unsigned int)v35->fields.skillId;
        v36->m_Items[v32] = skillId;
        if ( !v31 )
          break;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v31,
                                                                        skillId,
                                                                        (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v37 = this->fields.appendPassiveSkill;
        if ( !v37 )
          break;
        if ( v32 >= LODWORD(v37->max_length) )
          goto LABEL_58;
        v38 = v37->m_Items[v32];
        if ( !v38 )
          break;
        skillLv = v38->fields.skillLv;
        v40 = (SkillEntity_o *)Master_object;
        v41 = *lvList;
        if ( skillLv < 1 )
        {
          if ( !v41 )
            break;
          if ( v32 >= LODWORD(v41->max_length) )
            goto LABEL_58;
          v41->m_Items[v32] = -1;
          if ( !Master_object )
            break;
          v56 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          -1,
                                                                          0);
          if ( !v56 )
            break;
          if ( v32 >= LODWORD(v56->max_length) )
            goto LABEL_58;
          v59 = Master_object;
          v60 = &v56->obj.klass + (int)v32;
          v60[4] = (Il2CppClass *)v59;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v59, v57, v58);
          v61 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_3727/*"COND_TYPE_TITLE"*/,
                                                                          0);
          if ( !v61 )
            break;
          if ( v32 >= LODWORD(v61->max_length) )
            goto LABEL_58;
          v64 = Master_object;
          v65 = &v61->obj.klass + (int)v32;
          v65[4] = (Il2CppClass *)v64;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v64, v62, v63);
          v66 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v32 >= LODWORD(v66->max_length) )
            goto LABEL_58;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                          v66->m_Items[v32],
                                                                          (System_String_o *)StringLiteral_1/*""*/,
                                                                          0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v67 = *explanationList;
            if ( !*explanationList )
              break;
            if ( v32 >= LODWORD(v67->max_length) )
              goto LABEL_58;
            v68 = (CGThumbnailListItem_o *)(&v67->obj.klass + (int)v32);
            sortValue0 = (System_String_o *)v68->fields.sortValue0;
            v68 = (CGThumbnailListItem_o *)((char *)v68 + 32);
            v70 = System_String__Concat_63966792(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            v68->klass = (CGThumbnailListItem_c *)v70;
            sub_1C6B9AC(v68, (int32_t)v70, v71, v72);
          }
          v73 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v32 >= LODWORD(v73->max_length) )
LABEL_58:
            sub_1C6BC68(Master_object);
          v74 = &v73->obj.klass + (int)v32;
          v77 = (System_String_o *)v74[4];
          v75 = (CGThumbnailListItem_o *)(v74 + 4);
          v76 = v77;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v78 = LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v79 = System_String__Concat_63966792(v76, v78, 0);
          v75->klass = (CGThumbnailListItem_c *)v79;
          sub_1C6B9AC(v75, (int32_t)v79, v80, v81);
          v54 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v32 >= LODWORD(v54->max_length) )
            goto LABEL_58;
          v55 = 0;
        }
        else
        {
          if ( !v41 )
            break;
          if ( v32 >= LODWORD(v41->max_length) )
            goto LABEL_58;
          v41->m_Items[v32] = skillLv;
          if ( !Master_object )
            break;
          v42 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          v38->fields.skillLv,
                                                                          0);
          if ( !v42 )
            break;
          if ( v32 >= LODWORD(v42->max_length) )
            goto LABEL_58;
          v45 = Master_object;
          v46 = &v42->obj.klass + (int)v32;
          v46[4] = (Il2CppClass *)v45;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v45, v43, v44);
          v47 = this->fields.appendPassiveSkill;
          if ( !v47 )
            break;
          if ( v32 >= LODWORD(v47->max_length) )
            goto LABEL_58;
          v48 = v47->m_Items[v32];
          if ( !v48 )
            break;
          v49 = *explanationList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                          v40,
                                                                          v48->fields.skillLv,
                                                                          0);
          if ( !v49 )
            break;
          if ( v32 >= LODWORD(v49->max_length) )
            goto LABEL_58;
          v52 = Master_object;
          v53 = &v49->obj.klass + (int)v32;
          v53[4] = (Il2CppClass *)v52;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v52, v50, v51);
          v54 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v32 >= LODWORD(v54->max_length) )
            goto LABEL_58;
          v55 = 1;
        }
        ++v32;
        v54->m_Items[v34] = v55;
        if ( (_DWORD)max_length == v32 )
          return;
      }
      sub_1C6BC60(Master_object, skillId);
    }
  }
  else
  {
    *idList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)idList, 0, (int32_t)titleList, (const MethodInfo *)explanationList);
    *titleList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)titleList, 0, v82, v83);
    *explanationList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)explanationList, 0, v84, v85);
    *releaseStateList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)releaseStateList, 0, v86, v87);
    *lvList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)lvList, 0, v88, v89);
  }
}


void ServantLeaderInfo__GetAppendPassiveSkillInfo_43746408(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x20
  SkillInfo_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  __int64 v17; // x20
  const MethodInfo *v18; // x1
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  unsigned __int64 v23; // x25
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  unsigned int *v28; // x26
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x0
  System_Int32_array *v32; // [xsp+0h] [xbp-70h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4CB7704 & 1) == 0 )
  {
    sub_1C6BA08(&SkillInfo___TypeInfo);
    sub_1C6BA08(&SkillInfo_TypeInfo);
    byte_4CB7704 = 1;
  }
  idList = 0;
  explanationList = 0;
  titleList = 0;
  v32 = 0;
  releaseStateList = 0;
  if ( isNpc )
    ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v32,
      v4);
  else
    ServantLeaderInfo__GetAppendPassiveSkillInfo(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v32,
      v4);
  if ( idList && (v10 = *(__int64 *)((char *)&off_18 + (_QWORD)idList)) != 0 )
  {
    v11 = (SkillInfo_array *)sub_1C6BAB0(SkillInfo___TypeInfo, (unsigned int)v10);
    *skillInfoList = v11;
    sub_1C6B9AC((CGThumbnailListItem_o *)skillInfoList, (int32_t)v11, v12, v13);
    if ( (int)v10 >= 1 )
    {
      v14 = -(__int64)(unsigned int)v10;
      v15 = 8;
      v16 = 8;
      do
      {
        v17 = sub_1C6BC54(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v17, v18);
        if ( !v17 )
          goto LABEL_26;
        *(_DWORD *)(v17 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v23 = v15 - 8;
        if ( v15 - 8 >= (unsigned __int64)*(unsigned int *)((char *)&off_18 + (_QWORD)idList) )
          goto LABEL_27;
        *(_DWORD *)(v17 + 16) = *((_DWORD *)&idList->obj.klass + v15);
        if ( !v32 )
          goto LABEL_26;
        if ( v23 >= LODWORD(v32->max_length) )
          goto LABEL_27;
        *(_DWORD *)(v17 + 20) = *((_DWORD *)&v32->obj.klass + v15);
        if ( !titleList )
          goto LABEL_26;
        if ( v23 >= LODWORD(titleList->max_length) )
          goto LABEL_27;
        v24 = *(__int64 *)((char *)&titleList->obj.klass + v16 * 4);
        *(_QWORD *)(v17 + 32) = v24;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 32), v24, v21, v22);
        if ( !explanationList )
          goto LABEL_26;
        if ( v23 >= LODWORD(explanationList->max_length) )
          goto LABEL_27;
        v27 = *(__int64 *)((char *)&explanationList->obj.klass + v16 * 4);
        *(_QWORD *)(v17 + 40) = v27;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 40), v27, v25, v26);
        v28 = (unsigned int *)*skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_1C6BC60(v19, v20);
        v19 = sub_1C6BB44(v17, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
        if ( !v19 )
        {
          v31 = sub_1C6BC84(0);
          sub_1C6BB30(v31, 0);
        }
        if ( v23 >= v28[6] )
LABEL_27:
          sub_1C6BC68(v19);
        *(_QWORD *)&v28[v16] = v17;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v28[v16], v17, v29, v30);
        ++v15;
        v16 += 2;
      }
      while ( v14 + v15 != 8 );
    }
  }
  else
  {
    *skillInfoList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)skillInfoList, 0, v8, v9);
  }
}


System_Nullable_ValueTuple_FuncList_TYPE__int___o ServantLeaderInfo__GetBaseFriendPointUpTypeVal(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  Il2CppObject *Master_object; // x19
  const MethodInfo *v6; // x4
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v8; // x1
  __int128 v9; // x0
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  int32_t v12; // w2
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4CB76D6 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76D6 = 1;
  }
  entity = 0;
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v4;
  *(_QWORD *)&v15.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15, 0) >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__GetSkillIdList(
                    (ServantLeaderInfo_o *)Master_object,
                    this->fields.skillId1,
                    this->fields.skillId2,
                    this->fields.skillId3,
                    v6);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v8);
    for ( i = 0; ; ++i )
    {
      *(_QWORD *)&v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        *(_QWORD *)&v9 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*(_QWORD *)(v9 + 184) + 40LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_25;
      if ( i >= LODWORD(SkillIdList->max_length) )
        goto LABEL_26;
      v12 = SkillIdList->m_Items[i];
      if ( v12 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_25;
        if ( i >= LODWORD(SkillLevelList->max_length) )
LABEL_26:
          sub_1C6BC68(v9);
        if ( !Master_object )
          goto LABEL_25;
        if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, v12, SkillLevelList->m_Items[i], 0) )
        {
          *(_QWORD *)&v9 = entity;
          if ( !entity )
LABEL_25:
            sub_1C6BC60(v9, *((_QWORD *)&v9 + 1));
          *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v9 = SkillLvEntity__GetFriendPointUpTypeVal(entity, 0);
          if ( (_BYTE)v9 )
            return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v9;
        }
      }
    }
  }
  *(_QWORD *)&v9 = 0;
  DWORD2(v9) = 0;
  return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v9;
}


int32_t ServantLeaderInfo__GetCardImageLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w20
  BalanceConfig_c *v6; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4CB76F2 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4CB76F2 = 1;
  }
  if ( !ConstantMaster__IsOtherImage(0) )
    goto LABEL_21;
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v4;
  *(_QWORD *)&v11.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v11, 0);
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( v5 < static_fields->ExclusiveNpcServantIdStart )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    return static_fields->OtherImageLimitCount;
  }
  else
  {
LABEL_21:
    if ( this->fields.isUserServant )
    {
      if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
      LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
      if ( !LimitCountStageData )
        sub_1C6BC60(0, v10);
      return LimitCountStageData->fields._ImageStage_k__BackingField;
    }
    else
    {
      return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.imageLimitCount, 1, 0);
    }
  }
}


int32_t ServantLeaderInfo__GetCommandCardLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v4; // x1

  if ( (byte_4CB76EF & 1) == 0 )
  {
    sub_1C6BA08(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4CB76EF = 1;
  }
  if ( !this->fields.isUserServant )
    return LimitCountUtility__GetLimitCountStageCheckZero(
             this->fields.limitCount,
             this->fields.commandCardLimitCount,
             0,
             0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( !LimitCountStageData )
    sub_1C6BC60(0, v4);
  return LimitCountStageData->fields._CommandCardStage_k__BackingField;
}


int32_t ServantLeaderInfo__GetDispLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v4; // x1

  if ( (byte_4CB76EB & 1) == 0 )
  {
    sub_1C6BA08(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4CB76EB = 1;
  }
  if ( !this->fields.isUserServant )
    return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.dispLimitCount, 0, 0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( !LimitCountStageData )
    sub_1C6BC60(0, v4);
  return LimitCountStageData->fields._DispStage_k__BackingField;
}


int32_t ServantLeaderInfo__GetEquipLimitCount(ServantLeaderInfo_o *this, int32_t idx, const MethodInfo *method)
{
  struct EquipTargetInfo_o **p_equipTarget3; // x8
  struct EquipTargetInfo_o *v4; // x8

  if ( idx == 2 )
  {
    p_equipTarget3 = &this->fields.equipTarget3;
  }
  else if ( idx == 1 )
  {
    p_equipTarget3 = &this->fields.equipTarget2;
  }
  else
  {
    p_equipTarget3 = &this->fields.equipTarget1;
  }
  v4 = *p_equipTarget3;
  if ( v4 )
    return v4->fields.limitCount;
  else
    return 0;
}


EquipTargetInfo_o *ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
        ServantLeaderInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  EquipTargetInfo_o **p_equipTarget3; // x8

  if ( idx == 2 )
  {
    p_equipTarget3 = &this->fields.equipTarget3;
  }
  else if ( idx == 1 )
  {
    p_equipTarget3 = &this->fields.equipTarget2;
  }
  else
  {
    p_equipTarget3 = &this->fields.equipTarget1;
  }
  return *p_equipTarget3;
}


System_Collections_Generic_List_EquipTargetInfo__o *ServantLeaderInfo__GetEquipTargetInfoList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *equipTarget1; // x1
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x0
  struct System_Object_array *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x0
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4CB7709 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
    byte_4CB7709 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget1;
  if ( equipTarget1 )
  {
    if ( !v3 )
      goto LABEL_22;
    items = v3->fields._items;
    v9 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_22;
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        equipTarget1,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    }
    else
    {
      v11 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v11[4] = (Il2CppClass *)equipTarget1;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 4), (int32_t)equipTarget1, v5, v6);
    }
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget2;
  if ( equipTarget1 )
  {
    if ( !v3 )
      goto LABEL_22;
    v12 = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
    ++v3->fields._version;
    if ( !v12 )
      goto LABEL_22;
    v14 = v3->fields._size;
    if ( (unsigned int)v14 >= LODWORD(v12->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        equipTarget1,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &v12->obj.klass + v14;
      v3->fields._size = v14 + 1;
      v15[4] = (Il2CppClass *)equipTarget1;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)equipTarget1, v5, v6);
    }
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget3;
  if ( !equipTarget1 )
    return (System_Collections_Generic_List_EquipTargetInfo__o *)v3;
  if ( !v3
    || (v16 = v3->fields._items,
        v17 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__,
        ++v3->fields._version,
        !v16) )
  {
LABEL_22:
    sub_1C6BC60(v4, equipTarget1);
  }
  v18 = v3->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      equipTarget1,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v3->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)equipTarget1;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)equipTarget1, v5, v6);
  }
  return (System_Collections_Generic_List_EquipTargetInfo__o *)v3;
}


int32_t ServantLeaderInfo__GetFrameType(ServantLeaderInfo_o *this, int32_t actualRarity, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  ServantExceedMaster_o *v8; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t FrameTypeFixRarity; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4CB76EA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76EA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantExceedMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  v9 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v13, 0);
  if ( !v8
    || (FrameTypeFixRarity = ServantExceedMaster__GetFrameTypeFixRarity(
                               v8,
                               (int32_t)v9,
                               this->fields.exceedCount,
                               actualRarity,
                               this->fields.grandSvt != 0,
                               0),
        (v9 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0) )
  {
    sub_1C6BC60(v9, v10);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v9,
           actualRarity,
           this->fields.lv,
           FrameTypeFixRarity,
           this->fields.grandSvt != 0,
           0);
}


int32_t ServantLeaderInfo__GetFriendNpNameDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  int32_t limitCount; // w21
  BalanceConfig_c *v6; // x0
  ServantLeaderInfo_c *v7; // x0
  int32_t v8; // w19

  if ( (byte_4CB76EE & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    sub_1C6BA08(&ServantLeaderInfo_TypeInfo);
    byte_4CB76EE = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( LimitCountWithRandom > 10 || !LimitCountWithRandom || NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0) )
    return LimitCountWithRandom;
  limitCount = this->fields.limitCount;
  if ( !limitCount )
    return 0;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( limitCount == v6->static_fields->ServantLimitMax )
  {
    v7 = ServantLeaderInfo_TypeInfo;
    if ( !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo);
      v7 = ServantLeaderInfo_TypeInfo;
    }
    if ( LimitCountWithRandom == v7->static_fields->LIMIT_COUNT_THIRD_STAGE )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetFriendImageLimitCount(0) )
        return this->fields.limitCount;
    }
  }
  v8 = this->fields.limitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetLimitCountByDispLimit(LimitCountWithRandom - 1, v8, 0);
}


System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *ServantLeaderInfo__GetFriendPointUpTypeVals(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x19
  __int64 v4; // x21
  __int64 v5; // x22
  const MethodInfo *v6; // x1
  __int128 v7; // x0
  const MethodInfo_3924524 *v8; // x2
  System_Collections_Generic_List_EquipTargetInfo__o *Value; // x0
  System_ValueTuple_Int32Enum__int__o v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  __int64 v14; // x1
  const MethodInfo_3924524 *v15; // x2
  Il2CppObject *v16; // x0
  System_ValueTuple_Int32Enum__int__o v17; // x1
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_ValueTuple_FuncList_TYPE__int___o v24; // [xsp+40h] [xbp-40h] BYREF
  System_Nullable_ValueTuple_FuncList_TYPE__int___o FriendPointUpTypeVal; // 0:x0.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  System_Nullable_T__o v27; // 0:x0.16
  System_Nullable_T__o v28; // 0:x0.16

  if ( (byte_4CB76D5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_1C6BA08(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76D5 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int_____ctor(
    v3,
    (const MethodInfo_37AA2BC *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v5;
  *(_QWORD *)&v26.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v26, 0) >= 1 )
  {
    *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v7 = ServantLeaderInfo__GetBaseFriendPointUpTypeVal(this, v6);
    *(_QWORD *)&v24.fields.hasValue = v7;
    v24.fields.value.fields.Item2 = DWORD2(v7);
    if ( (_BYTE)v7 )
    {
      v27.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
      *(_QWORD *)&v27.fields.hasValue = &v24;
      Value = (System_Collections_Generic_List_EquipTargetInfo__o *)System_Nullable_ValueTuple_Int32Enum__int____get_Value(
                                                                      v27,
                                                                      v8);
      if ( !v3 )
        goto LABEL_27;
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_27;
      size = v3->fields._size;
      *((_QWORD *)&v7 + 1) = Value;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
          v3,
          *(System_ValueTuple_Int32Enum__int__o *)((char *)&v7 + 8),
          *(const MethodInfo_37AAB10 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = (Il2CppObject *)Value;
      }
    }
    Value = ServantLeaderInfo__GetEquipTargetInfoList(this, *((const MethodInfo **)&v7 + 1));
    if ( Value )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)Value,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
      v23 = v22;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v23,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__) )
      {
        if ( !v23.fields._current )
          sub_1C6BC60(0, v14);
        FriendPointUpTypeVal = EquipTargetInfo__GetFriendPointUpTypeVal((EquipTargetInfo_o *)v23.fields._current, 0);
        v24 = FriendPointUpTypeVal;
        if ( FriendPointUpTypeVal.fields.hasValue )
        {
          v28.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
          *(_QWORD *)&v28.fields.hasValue = &v24;
          v16 = (Il2CppObject *)System_Nullable_ValueTuple_Int32Enum__int____get_Value(v28, v15);
          v17 = (System_ValueTuple_Int32Enum__int__o)v16;
          if ( !v3 )
            sub_1C6BC60(v16, v16);
          v18 = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__;
          ++v3->fields._version;
          if ( !v18 )
            sub_1C6BC60(v16, v16);
          v20 = v3->fields._size;
          if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
          {
            System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
              v3,
              v17,
              *(const MethodInfo_37AAB10 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = v20 + 1;
            v18->m_Items[v20] = v16;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
      return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v3;
    }
LABEL_27:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C6BC60)(Value, v10);
  }
  return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v3;
}


int32_t ServantLeaderInfo__GetIconLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v4; // x1

  if ( (byte_4CB76F6 & 1) == 0 )
  {
    sub_1C6BA08(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4CB76F6 = 1;
  }
  if ( !this->fields.isUserServant )
    return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.iconLimitCount, 1, 0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( !LimitCountStageData )
    sub_1C6BC60(0, v4);
  return LimitCountStageData->fields._IconStage_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLeaderInfo__GetLimitChangeDic(ServantLeaderInfo_o *this, int32_t limit, const MethodInfo *method)
{
  DataManager_o *limitChangeDic; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB76FF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76FF = 1;
  }
  value = 0;
  limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
          limit,
          &value,
          (const MethodInfo_344B0D0 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    limitChangeDic = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( limitChangeDic )
    {
      limitChangeDic = (DataManager_o *)DataManager__GetMasterData_object_(
                                          limitChangeDic,
                                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( limitChangeDic )
      {
        value = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                  (ServantLimitSpoilerProtectionMaster_o *)limitChangeDic,
                  this->fields.svtId,
                  limit,
                  0);
        limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
        if ( limitChangeDic )
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
            limit,
            value,
            (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_1C6BC60(limitChangeDic, *(_QWORD *)&limit);
  }
  return value;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLeaderInfo__GetLimitCountWithRandom(ServantLeaderInfo_o *this, int32_t kind, const MethodInfo *method)
{
  int32_t ChoiceLimitCount_33620184; // w0
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v7; // x0

  if ( (byte_4CB76C5 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&RandomLimitCountManager_TypeInfo);
    byte_4CB76C5 = 1;
  }
  if ( !ServantLeaderInfo__get_IsRandomChoice(this, *(const MethodInfo **)&kind) )
  {
    switch ( kind )
    {
      case 0:
        imageLimitCount = this->fields.imageLimitCount;
        break;
      case 1:
        imageLimitCount = this->fields.dispLimitCount;
        break;
      case 2:
        imageLimitCount = this->fields.commandCardLimitCount;
        break;
      case 3:
        imageLimitCount = this->fields.iconLimitCount;
        break;
      case 4:
        imageLimitCount = this->fields.portraitLimitCount;
        break;
      default:
        return -1;
    }
    return imageLimitCount;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  ChoiceLimitCount_33620184 = RandomLimitCountManager__GetChoiceLimitCount_33620184(this, 0);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_33620184;
  if ( ((1 << kind) & 0x16) == 0 )
    return imageLimitCount;
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return imageLimitCount - (imageLimitCount == v7->static_fields->ServantLimitMax);
}


int32_t ServantLeaderInfo__GetMaxLimitCountStage(
        ServantLeaderInfo_o *this,
        bool hasRewardStage,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1

  if ( (byte_4CB770C & 1) == 0 )
  {
    sub_1C6BA08(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4CB770C = 1;
  }
  if ( !this->fields.isUserServant )
    return LimitCountUtility__ConvertLimitCountToStage(this->fields.limitCount, 0, 0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( !LimitCountStageData )
    sub_1C6BC60(0, v6);
  return OtherUserServantLimitCountManager_LimitCountStageData__GetMax(LimitCountStageData, hasRewardStage, 0);
}


int32_t ServantLeaderInfo__GetNarrowImage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int32_t CardImageLimitCountStage; // w20
  __int64 v4; // x21
  __int64 v5; // x22
  int32_t v6; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4CB76F3 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76F3 = 1;
  }
  CardImageLimitCountStage = ServantLeaderInfo__GetCardImageLimitCountStage(this, method);
  if ( !NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0) )
  {
    v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v8.fields.currentCryptoKey = v5;
    *(_QWORD *)&v8.fields.fakeValue = v4;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v8, 0);
    CardImageLimitCountStage = LimitCountUtility__GetSealAfter(
                                 v6,
                                 this->fields.limitCount,
                                 CardImageLimitCountStage,
                                 1,
                                 0);
  }
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(CardImageLimitCountStage, 0);
}


System_String_o *ServantLeaderInfo__GetOverWriteServantDetailName(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return this->fields.overwriteServantDetailName;
}


System_String_o *ServantLeaderInfo__GetOverWriteServantName(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return this->fields.overwriteServantName;
}


ServantOverwriteStatus_o *ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CGThumbnailListItem_o *p_overwriteStatus; // x20
  int32_t v5; // w0
  int32_t v6; // w21
  int32_t v7; // w22
  int32_t LimitCountByDispLimit; // w21
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w20
  int32_t v11; // w21
  ServantOverwriteStatus_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB76C9 & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&ServantOverwriteStatus_TypeInfo);
    byte_4CB76C9 = 1;
  }
  if ( !NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0) )
  {
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v3);
    limitCount = this->fields.limitCount;
    v11 = DispLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v11, limitCount, 0);
    p_overwriteStatus = (CGThumbnailListItem_o *)&this->fields.overwriteStatus;
    if ( this->fields.overwriteStatus && this->fields.overwriteStatusLimitCount == LimitCountByDispLimit )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( !this->fields.overwriteStatus )
  {
    p_overwriteStatus = (CGThumbnailListItem_o *)&this->fields.overwriteStatus;
    v5 = ServantLeaderInfo__getDispLimitCount(this, v3);
    v6 = this->fields.limitCount;
    v7 = v5;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v7, v6, 0);
LABEL_12:
    v12 = (ServantOverwriteStatus_o *)sub_1C6BC54(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_33624700(v12, this, LimitCountByDispLimit, 0);
    p_overwriteStatus->klass = (CGThumbnailListItem_c *)v12;
    sub_1C6B9AC(p_overwriteStatus, (int32_t)v12, v13, v14);
LABEL_13:
    this->fields.overwriteStatusLimitCount = LimitCountByDispLimit;
  }
  return this->fields.overwriteStatus;
}


System_Int32_array *ServantLeaderInfo__GetPassiveSkillIdList(
        ServantLeaderInfo_o *this,
        int32_t dispSvtId,
        System_Int32_array *classPassive,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4CB76CF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76CF = 1;
  }
  if ( !classPassive )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0 )
    {
      sub_1C6BC60(Instance, v7);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               dispSvtId,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
      return (System_Int32_array *)Entity[10].monitor;
    else
      return 0;
  }
  return classPassive;
}


void ServantLeaderInfo__GetPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x23
  System_String_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  long double v16; // q0
  __int64 v17; // x0
  __int64 v18; // x0
  DataManager_o *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  unsigned __int64 v21; // x25
  unsigned int v22; // w24
  __int64 v23; // x26
  int32_t *m_Items; // x27
  System_String_array *v25; // x28
  SkillEntity_o *v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  DataManager_o *v29; // x1
  Il2CppClass **v30; // x0
  System_String_array *v31; // x28
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  DataManager_o *v34; // x1
  Il2CppClass **v35; // x0
  unsigned __int64 max_length_low; // x8
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4CB76D4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&string___TypeInfo);
    byte_4CB76D4 = 1;
  }
  if ( !idList )
    goto LABEL_29;
  max_length = idList->max_length;
  if ( !max_length )
    goto LABEL_29;
  v9 = (System_String_array *)sub_1C6BAB0(string___TypeInfo, (unsigned int)max_length);
  *titleList = v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)titleList, (int32_t)v9, v10, v11);
  v12 = (System_String_array *)sub_1C6BAB0(string___TypeInfo, (unsigned int)max_length);
  *explanationList = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)explanationList, (int32_t)v12, v13, v14);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C41A9C(v16);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C41A9C(v16);
  MasterData_object = **(DataManager_o ***)(v18 + 184);
  if ( !MasterData_object )
LABEL_31:
    sub_1C6BC60(MasterData_object, v15);
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)max_length < 1 )
    goto LABEL_29;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v21 = 0;
  v22 = 0;
  v23 = (unsigned int)max_length;
  m_Items = idList->m_Items;
  do
  {
    if ( v21 >= LODWORD(idList->max_length) )
LABEL_30:
      sub_1C6BC68(MasterData_object);
    v15 = (unsigned int)m_Items[v21];
    if ( (int)v15 >= 1 )
    {
      if ( !v20 )
        goto LABEL_31;
      MasterData_object = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                             v20,
                                             v15,
                                             (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( MasterData_object )
      {
        v25 = *titleList;
        v26 = (SkillEntity_o *)MasterData_object;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectTitle((SkillEntity_o *)MasterData_object, 0, 0);
        if ( !v25 )
          goto LABEL_31;
        if ( v22 >= LODWORD(v25->max_length) )
          goto LABEL_30;
        v29 = MasterData_object;
        v30 = &v25->obj.klass + (int)v22;
        v30[4] = (Il2CppClass *)v29;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v29, v27, v28);
        v31 = *explanationList;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectExplanation(v26, 0, 0);
        if ( !v31 )
          goto LABEL_31;
        if ( v22 >= LODWORD(v31->max_length) )
          goto LABEL_30;
        v34 = MasterData_object;
        v35 = &v31->obj.klass + (int)v22;
        v35[4] = (Il2CppClass *)v34;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v34, v32, v33);
        if ( v21 != v22 )
        {
          max_length_low = LODWORD(idList->max_length);
          if ( v21 >= max_length_low || v22 >= (unsigned int)max_length_low )
            goto LABEL_30;
          idList->m_Items[v22] = m_Items[v21];
          m_Items[v21] = 0;
        }
        ++v22;
      }
      else
      {
        if ( v21 >= LODWORD(idList->max_length) )
          goto LABEL_30;
        m_Items[v21] = 0;
      }
    }
    ++v21;
  }
  while ( v23 != v21 );
  if ( !v22 )
  {
LABEL_29:
    *titleList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)titleList, 0, (int32_t)explanationList, (const MethodInfo *)idList);
    *explanationList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)explanationList, 0, v37, v38);
  }
}


int32_t ServantLeaderInfo__GetPortraitLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v4; // x1

  if ( (byte_4CB76F9 & 1) == 0 )
  {
    sub_1C6BA08(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4CB76F9 = 1;
  }
  if ( !this->fields.isUserServant )
    return LimitCountUtility__GetLimitCountStageCheckZero(
             this->fields.limitCount,
             this->fields.portraitLimitCount,
             0,
             0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( !LimitCountStageData )
    sub_1C6BC60(0, v4);
  return LimitCountStageData->fields._PortraitStage_k__BackingField;
}


System_Int32_array *ServantLeaderInfo__GetSkillIdList(
        ServantLeaderInfo_o *this,
        int32_t id1,
        int32_t id2,
        int32_t id3,
        const MethodInfo *method)
{
  BalanceConfig_c *v8; // x0
  System_Int32_array *result; // x0
  __int64 v10; // x1
  unsigned int max_length; // w8

  if ( (byte_4CB76CC & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB76CC = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1C6BC60(0, v10);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[0] = id1, max_length == 1) || (result->m_Items[1] = id2, max_length <= 2) )
    sub_1C6BC68(result);
  result->m_Items[2] = id3;
  return result;
}


void ServantLeaderInfo__GetSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispSvtId,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  long double v5; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  DataManager_o *Entity; // x0
  Il2CppObject *MasterData_object; // x26
  long double v12; // q0
  __int64 v13; // x8
  __int64 v14; // x0
  BalanceConfig_c **v15; // x25
  const MethodInfo *v16; // x1
  System_Int32_array *SkillLevelList; // x0
  BalanceConfig_c *v18; // x8
  System_Int32_array *v19; // x22
  __int64 v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  unsigned __int64 v23; // x21
  __int64 v24; // x23
  unsigned int v25; // w29
  int32_t *m_Items; // x24
  SkillEntity_o *v27; // x27
  BalanceConfig_c **v28; // x20
  ServantSkillEntity_o *EntityFromSkillId; // x26
  __int64 v30; // x25
  const MethodInfo *v31; // x1
  System_String_o *EffectTitle; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_o *EffectExplanation; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x8
  int32_t skillNum; // w8
  CGThumbnailListItem_c *klass; // x26
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  void **v43; // x0
  int32_t *v44; // x20
  int32_t *i; // x21
  __int64 v46; // x0
  Il2CppObject *v47; // [xsp+0h] [xbp-90h]
  int32_t *v48; // [xsp+8h] [xbp-88h]
  ServantSkillMaster_o *v50; // [xsp+18h] [xbp-78h]
  CGThumbnailListItem_o *v51; // [xsp+20h] [xbp-70h]
  __int64 v52; // [xsp+28h] [xbp-68h]

  v51 = (CGThumbnailListItem_o *)skillInfoList;
  if ( (byte_4CB76D2 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&SkillInfo___TypeInfo);
    sub_1C6BA08(&SkillInfo_TypeInfo);
    byte_4CB76D2 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C41A9C(v5);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(v5);
  Entity = **(DataManager_o ***)(v9 + 184);
  if ( !Entity )
    goto LABEL_55;
  MasterData_object = DataManager__GetMasterData_object_(
                        Entity,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillMaster___);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C41A9C(v12);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C41A9C(v12);
  Entity = **(DataManager_o ***)(v14 + 184);
  if ( !Entity )
LABEL_55:
    sub_1C6BC60(Entity, skillInfoList);
  v15 = &BalanceConfig_TypeInfo;
  v50 = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                  Entity,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v16);
  v18 = BalanceConfig_TypeInfo;
  v19 = SkillLevelList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v20 = sub_1C6BAB0(SkillInfo___TypeInfo, (unsigned int)v18->static_fields->SvtSkillListMax);
  v51->klass = (CGThumbnailListItem_c *)v20;
  sub_1C6B9AC(v51, v20, v21, v22);
  v23 = 0;
  v52 = 0;
  v24 = 0;
  v25 = 0;
  m_Items = idList->m_Items;
  v47 = MasterData_object;
  v48 = v19->m_Items;
  while ( 1 )
  {
    Entity = (DataManager_o *)*v15;
    if ( !(*v15)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v15;
    }
    if ( (__int64)v23 >= *(int *)(*(_QWORD *)&Entity[1].fields._DispLog + 40LL) )
      break;
    if ( !idList )
      goto LABEL_55;
    if ( v23 >= LODWORD(idList->max_length) )
LABEL_56:
      sub_1C6BC68(Entity);
    skillInfoList = (SkillInfo_array **)(unsigned int)m_Items[v23];
    if ( (int)skillInfoList >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_55;
      Entity = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)skillInfoList,
                                  (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( v23 >= LODWORD(idList->max_length) )
          goto LABEL_56;
        v27 = (SkillEntity_o *)Entity;
        Entity = (DataManager_o *)v50;
        if ( !v50 )
          goto LABEL_55;
        v28 = v15;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v50, dispSvtId, (int)v23 + 1, m_Items[v23], 0);
        v30 = sub_1C6BC54(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v30, v31);
        if ( v23 >= LODWORD(idList->max_length) )
          goto LABEL_56;
        if ( !v30 )
          goto LABEL_55;
        *(_DWORD *)(v30 + 16) = m_Items[v23];
        if ( !v19 )
          goto LABEL_55;
        if ( v23 >= LODWORD(v19->max_length) )
          goto LABEL_56;
        *(_DWORD *)(v30 + 20) = v48[v23];
        Entity = (DataManager_o *)SkillEntity__getEffectChargeTurn(v27, v48[v23], 0);
        *(_DWORD *)(v30 + 24) = (_DWORD)Entity;
        if ( v23 >= LODWORD(v19->max_length) )
          goto LABEL_56;
        EffectTitle = SkillEntity__getEffectTitle(v27, v48[v23], 0);
        *(_QWORD *)(v30 + 32) = EffectTitle;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 32), (int32_t)EffectTitle, v33, v34);
        if ( v23 >= LODWORD(v19->max_length) )
          goto LABEL_56;
        EffectExplanation = SkillEntity__getEffectExplanation(v27, v48[v23], 0);
        *(_QWORD *)(v30 + 40) = EffectExplanation;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 40), (int32_t)EffectExplanation, v36, v37);
        v38 = v52;
        if ( EntityFromSkillId )
          v24 = v30;
        else
          v38 = v30;
        v52 = v38;
        if ( EntityFromSkillId )
        {
          Entity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0);
          if ( !v24 )
            goto LABEL_55;
          *(_DWORD *)(v24 + 48) = (_DWORD)Entity;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          if ( !v38 )
            goto LABEL_55;
          skillNum = 0;
          *(_DWORD *)(v52 + 48) = 0;
        }
        *(_DWORD *)(v30 + 52) = skillNum;
        *(_BYTE *)(v30 + 56) = 1;
        klass = v51->klass;
        if ( !v51->klass )
          goto LABEL_55;
        Entity = (DataManager_o *)sub_1C6BB44(v30, *((_QWORD *)klass->_1.image + 8));
        if ( !Entity )
        {
          v46 = sub_1C6BC84(0);
          sub_1C6BB30(v46, 0);
        }
        if ( v25 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_56;
        v43 = &klass->_1.image + (int)v25;
        v43[4] = (void *)v30;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v43 + 4), v30, v41, v42);
        MasterData_object = v47;
        ++v25;
        v15 = v28;
      }
    }
    ++v23;
  }
  v44 = &v19->m_Items[v25];
  for ( i = &idList->m_Items[v25]; ; ++i )
  {
    if ( !LODWORD(Entity[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v15;
    }
    if ( (signed int)v25 >= *(_DWORD *)(*(_QWORD *)&Entity[1].fields._DispLog + 40LL) )
      break;
    if ( !idList )
      goto LABEL_55;
    if ( v25 >= LODWORD(idList->max_length) )
      goto LABEL_56;
    *i = 0;
    if ( !v19 )
      goto LABEL_55;
    if ( v25 >= LODWORD(v19->max_length) )
      goto LABEL_56;
    *v44++ = -1;
    ++v25;
  }
}


int32_t ServantLeaderInfo__GetSvtClassId(
        ServantLeaderInfo_o *this,
        bool isPlayableBeastToBase,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  Il2CppObject *Master_object; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  Il2CppObject *Entity; // x0
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CB770B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB770B = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v16, 0) < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v17, 0);
  if ( !v12
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v12,
                   (int32_t)Entity,
                   (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C6BC60(Entity, v14);
  }
  return ServantEntity__GetClassId((ServantEntity_o *)Entity, isPlayableBeastToBase, isGrandServant, 0);
}


int32_t ServantLeaderInfo__GetTimesToRestart(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v7; // x0
  UserEventDataLostEntity_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x19
  __int64 v13; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CB7706 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB7706 = 1;
  }
  entity = 0;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    v7 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v7 = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_25;
    if ( UserEventDataLostMaster__TryGetEntity(
           (UserEventDataLostMaster_o *)Master_object,
           &entity,
           v7->static_fields->userIdNumber,
           questRestrictionInfo->fields.dataLostBattleId,
           0) )
    {
      v8 = entity;
      v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = v10;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v16, 0);
      if ( !v8 )
        goto LABEL_25;
      if ( UserEventDataLostEntity__IsRestart(v8, (int32_t)v7, 0) )
      {
        v11 = entity;
        v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v17.fields.currentCryptoKey = v13;
        *(_QWORD *)&v17.fields.fakeValue = v12;
        v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v17, 0);
        if ( v11 )
          return UserEventDataLostEntity__GetTimesToRestart(v11, (int32_t)v7, 0);
LABEL_25:
        sub_1C6BC60(v7, v5);
      }
    }
  }
  return 0;
}


System_Int32_array *ServantLeaderInfo__GetTransformedPassiveSkillIdList(
        ServantLeaderInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x20
  CGThumbnailListItem_o *p_classPassive; // x20
  System_Int32_array *classPassive; // t1
  System_Int32_array *PassiveSkillIdList; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  struct AfterTransformSvtInfo_o *v13; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( !afterTransformSvtInfo )
    return ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, 0, v3);
  classPassive = afterTransformSvtInfo->fields.classPassive;
  p_classPassive = (CGThumbnailListItem_o *)&afterTransformSvtInfo->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, classPassive, v3);
  p_classPassive->klass = (CGThumbnailListItem_c *)PassiveSkillIdList;
  sub_1C6B9AC(p_classPassive, (int32_t)PassiveSkillIdList, v9, v10);
  v13 = this->fields.afterTransformSvtInfo;
  if ( !v13 )
    sub_1C6BC60(v11, v12);
  return v13->fields.classPassive;
}


void ServantLeaderInfo__GetTransformedPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Int32_array *TransformedPassiveSkillIdList; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  ServantLeaderInfo_o *v12; // x0
  const MethodInfo *v13; // x4

  TransformedPassiveSkillIdList = ServantLeaderInfo__GetTransformedPassiveSkillIdList(
                                    this,
                                    svtId,
                                    (const MethodInfo *)titleList);
  *idList = TransformedPassiveSkillIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)idList, (int32_t)TransformedPassiveSkillIdList, v10, v11);
  ServantLeaderInfo__GetPassiveSkillInfo(v12, titleList, explanationList, *idList, v13);
}


System_Int32_array *ServantLeaderInfo__GetTransformedSkillIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  int32_t skillId1; // w1
  int32_t skillId2; // w2
  int32_t skillId3; // w3

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
  {
    skillId1 = afterTransformSvtInfo->fields.skillId1;
    skillId2 = afterTransformSvtInfo->fields.skillId2;
    skillId3 = afterTransformSvtInfo->fields.skillId3;
  }
  else
  {
    skillId1 = 0;
    skillId2 = 0;
    skillId3 = 0;
  }
  return ServantLeaderInfo__GetSkillIdList(this, skillId1, skillId2, skillId3, v2);
}


void ServantLeaderInfo__GetTransformedSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Int32_array *TransformedSkillIdList; // x0
  const MethodInfo *v8; // x4

  TransformedSkillIdList = ServantLeaderInfo__GetTransformedSkillIdList(this, (const MethodInfo *)skillInfoList);
  ServantLeaderInfo__GetSkillInfo(this, skillInfoList, svtId, TransformedSkillIdList, v8);
}


bool ServantLeaderInfo__GetTransformedTreasureDeviceInfo(
        ServantLeaderInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  int32_t treasureDeviceId; // w3

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
    treasureDeviceId = afterTransformSvtInfo->fields.treasureDeviceId;
  else
    treasureDeviceId = 0;
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, svtId, treasureDeviceId, v4);
}


bool ServantLeaderInfo__GetTreasureDeviceInfo(
        ServantLeaderInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispSvtId,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  long double v5; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDvcEntity_o *EntityFromSvtIdDvcId; // x22
  TreasureDvcInfo_o *v14; // x23
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  TreasureDvcInfo_o *v18; // x8
  int32_t tdLv; // w9

  if ( (byte_4CB76E4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&TreasureDvcInfo_TypeInfo);
    byte_4CB76E4 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C41A9C(v5);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C41A9C(v5);
  MasterData_object = **(Il2CppObject ***)(v11 + 184);
  if ( !MasterData_object )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !MasterData_object )
    goto LABEL_13;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           (ServantTreasureDvcMaster_o *)MasterData_object,
                           dispSvtId,
                           treasureDeviceId,
                           0);
  v14 = (TreasureDvcInfo_o *)sub_1C6BC54(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v14, v15);
  *tdInfo = v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)tdInfo, (int32_t)v14, v16, v17);
  if ( EntityFromSvtIdDvcId )
  {
    v18 = *tdInfo;
    if ( *tdInfo )
    {
      v18->fields.id = treasureDeviceId;
      tdLv = this->fields.treasureDeviceLv;
      v18->fields.lv = tdLv;
      ServantTreasureDvcEntity__getEffectExplanation(
        EntityFromSvtIdDvcId,
        &v18->fields.name,
        &v18->fields.explanation,
        &v18->fields.maxLv,
        &v18->fields.guageCount,
        &v18->fields.cardId,
        &v18->fields.strengthStatus,
        &v18->fields.treasureDeviceNum,
        tdLv,
        0);
      return EntityFromSvtIdDvcId != 0;
    }
LABEL_13:
    sub_1C6BC60(MasterData_object, tdInfo);
  }
  return EntityFromSvtIdDvcId != 0;
}


int32_t ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CB770A & 1) == 0 )
  {
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&StringLiteral_19114/*"equipTarget2SkillChange"*/);
    byte_4CB770A = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19114/*"equipTarget2SkillChange"*/,
           &value,
           (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v4 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LODWORD(script) = System_Convert__ToInt32(v4, 0);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


bool ServantLeaderInfo__IsDataLost(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v7; // x0
  UserEventDataLostEntity_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x19
  __int64 v13; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CB7705 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB7705 = 1;
  }
  entity = 0;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_26;
  if ( !UserEventDataLostMaster__TryGetEntity(
          (UserEventDataLostMaster_o *)Master_object,
          &entity,
          v7->static_fields->userIdNumber,
          questRestrictionInfo->fields.dataLostBattleId,
          0) )
    return 0;
  v8 = entity;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v16, 0);
  if ( !v8 )
    goto LABEL_26;
  if ( UserEventDataLostEntity__IsRestart(v8, (int32_t)v7, 0) )
    return 0;
  v11 = entity;
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v17, 0);
  if ( !v11 )
LABEL_26:
    sub_1C6BC60(v7, v5);
  return UserEventDataLostEntity__IsDataLost(v11, (int32_t)v7, 0);
}


bool ServantLeaderInfo__IsHideEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsHideEquip(this->fields.npcFlag, 0);
}


bool ServantLeaderInfo__IsHideSupport(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsHideSupport(this->fields.npcFlag, 0);
}


bool ServantLeaderInfo__IsNotClassBoardNpc(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsNotClassBoard(this->fields.npcFlag, 0);
}


bool ServantLeaderInfo__IsNotUsedTreasureDeice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsNotUsedTreasureDevice(this->fields.npcFlag, 0);
}


bool ServantLeaderInfo__IsNpc(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0);
}


bool ServantLeaderInfo__IsSlotRestriction(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  int32_t limitCount; // w21
  int32_t v9; // w22
  const MethodInfo *v10; // x1
  int32_t DispLimitCount; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4CB7707 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB7707 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v13, 0);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsSlotRestrictionForSupport(questRestrictionInfo, v9, limitCount, DispLimitCount, 0);
}


bool ServantLeaderInfo__IsUniqueIndividualityRestriction(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        FollowerInfo_o *npcFollowerInfo,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  int32_t limitCount; // w22
  int32_t v11; // w23
  const MethodInfo *v12; // x1
  int32_t DispLimitCount; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4CB76E1 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76E1 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15, 0);
  limitCount = this->fields.limitCount;
  v11 = v9;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v12);
  return QuestRestrictionInfo__IsUniqueIndividuality_43671700(
           questRestrictionInfo,
           v11,
           limitCount,
           DispLimitCount,
           npcFollowerInfo,
           0);
}


bool ServantLeaderInfo__IsUniqueIndividualityRestriction_43735204(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListViewItem_o *partyItem,
        int32_t num,
        FollowerInfo_o *npcFollowerInfo,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w0
  int32_t limitCount; // w24
  int32_t v15; // w25
  const MethodInfo *v16; // x1
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4CB76E2 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76E2 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v19, 0);
  limitCount = this->fields.limitCount;
  v15 = v13;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v16);
  return QuestRestrictionInfo__IsUniqueIndividuality_43673184(
           questRestrictionInfo,
           v15,
           limitCount,
           DispLimitCount,
           partyItem,
           num,
           -1,
           npcFollowerInfo,
           0);
}


void ServantLeaderInfo__SetEquipImagePartsGroupIdxs(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.imagePartsGroupInfo, 0) )
  {
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_43748052(this, this->fields.equipTarget1, v3);
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_43748052(this, this->fields.equipTarget2, v4);
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_43748052(this, this->fields.equipTarget3, v5);
  }
}


void ServantLeaderInfo__SetEquipImagePartsGroupIdxs_43748052(
        ServantLeaderInfo_o *this,
        EquipTargetInfo_o *equipTarget,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Master_object; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  Il2CppObject *IntValue; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *imagePartsGroupInfo; // x20
  System_Func_object__bool__o *v13; // x22
  Il2CppObject *v14; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4CB7708 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Single_UserImagePartsGroupEntity___);
    sub_1C6BA08(&System_Func_UserImagePartsGroupEntity__bool__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_ServantLeaderInfo___c__DisplayClass161_0__SetEquipImagePartsGroupIdxs_b__0__);
    sub_1C6BA08(&ServantLeaderInfo___c__DisplayClass161_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_20354/*"imagePartsGroupId"*/);
    byte_4CB7708 = 1;
  }
  entity = 0;
  v5 = sub_1C6BC54(ServantLeaderInfo___c__DisplayClass161_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( equipTarget )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
    v8 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v8;
    *(_QWORD *)&v16.fields.fakeValue = v7;
    IntValue = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v16, 0);
    if ( !v9 )
      goto LABEL_17;
    IntValue = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 v9,
                                 &entity,
                                 (int32_t)IntValue,
                                 (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)IntValue & 1) == 0 )
      return;
    if ( !entity )
      goto LABEL_17;
    IntValue = (Il2CppObject *)EntityScriptUtil__GetIntValue(
                                 (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                                 (System_String_o *)StringLiteral_20354/*"imagePartsGroupId"*/,
                                 0,
                                 0);
    if ( !v5 )
      goto LABEL_17;
    *(_DWORD *)(v5 + 16) = (_DWORD)IntValue;
    if ( !(_DWORD)IntValue )
      return;
    imagePartsGroupInfo = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.imagePartsGroupInfo;
    v13 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_UserImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v5,
      Method_ServantLeaderInfo___c__DisplayClass161_0__SetEquipImagePartsGroupIdxs_b__0__,
      0);
    IntValue = System_Linq_Enumerable__Single_object__51869728(
                 imagePartsGroupInfo,
                 (System_Func_TSource__bool__o *)v13,
                 (const MethodInfo_3177820 *)Method_System_Linq_Enumerable_Single_UserImagePartsGroupEntity___);
    if ( !IntValue )
LABEL_17:
      sub_1C6BC60(IntValue, v11);
    v14 = IntValue;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntValue[1].monitor, 0) )
      EquipTargetInfo__SetImagePartsGroupIdxs(equipTarget, (System_Int32_array *)v14[1].monitor, 0);
  }
}


void ServantLeaderInfo__SetServantNameBySpoilerProtection(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_overwriteServantDetailName; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  ServantEntity_o *v14; // x21
  const MethodInfo *v15; // x1
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w23
  int32_t v18; // w24
  int32_t LimitCountByDispLimit; // w23
  Il2CppObject *Master_object; // x0
  __int64 v21; // x25
  __int64 v22; // x26
  ServantLimitImageMaster_o *v23; // x24
  struct System_String_o *LimitCountSealedServantName; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x23
  const MethodInfo *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t CardImageLimitCount; // w22
  int32_t LimitCountByImageLimitCostumeIn; // w22
  Il2CppObject *v33; // x0
  __int64 v34; // x23
  __int64 v35; // x24
  ServantLimitImageMaster_o *v36; // x19
  int32_t ServantLimitCountSealAfter; // w0
  struct System_String_o *overwriteServantName; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4CB7700 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB7700 = 1;
  }
  this->fields.overwriteServantName = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.overwriteServantName, 0, v2, v3);
  p_overwriteServantDetailName = (CGThumbnailListItem_o *)&this->fields.overwriteServantDetailName;
  this->fields.overwriteServantDetailName = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.overwriteServantDetailName, 0, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v12;
  *(_QWORD *)&v39.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v39, 0);
  if ( !v13 )
    goto LABEL_28;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)Instance,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_28;
  v14 = (ServantEntity_o *)Instance;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0) )
  {
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v15);
    limitCount = this->fields.limitCount;
    v18 = DispLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v18, limitCount, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v23 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v22;
    *(_QWORD *)&v40.fields.fakeValue = v21;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v40, 0);
    if ( v23 )
    {
      LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                      v23,
                                      (int32_t)Instance,
                                      LimitCountByDispLimit,
                                      0,
                                      0);
      this->fields.overwriteServantName = LimitCountSealedServantName;
      sub_1C6B9AC(
        (CGThumbnailListItem_o *)&this->fields.overwriteServantName,
        (int32_t)LimitCountSealedServantName,
        v25,
        v26);
      v27 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                   this->fields.svtId,
                                   0);
      if ( v27 )
      {
        if ( !ServantLimitAddMaster__IsOverwriteSvtDetailName((ServantLimitAddMaster_o *)v27, (int32_t)Instance, 0) )
        {
          overwriteServantName = this->fields.overwriteServantName;
          goto LABEL_27;
        }
        CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v28);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v33 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          v35 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          v36 = (ServantLimitImageMaster_o *)v33;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v41.fields.currentCryptoKey = v35;
          *(_QWORD *)&v41.fields.fakeValue = v34;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v41, 0);
          if ( v36 )
          {
            ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v36,
                                           (int32_t)Instance,
                                           LimitCountByImageLimitCostumeIn,
                                           0);
            overwriteServantName = ServantEntity__getName(v14, -1, ServantLimitCountSealAfter, 0, 0);
LABEL_27:
            p_overwriteServantDetailName->klass = (CGThumbnailListItem_c *)overwriteServantName;
            sub_1C6B9AC(p_overwriteServantDetailName, (int32_t)overwriteServantName, v29, v30);
            return;
          }
        }
      }
    }
LABEL_28:
    sub_1C6BC60(Instance, v9);
  }
}


void ServantLeaderInfo__SetSkillChangeInfo(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  EquipTargetInfo_o *equipTarget2; // x19
  bool v3; // w1

  equipTarget2 = this->fields.equipTarget2;
  if ( equipTarget2 )
  {
    v3 = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(this, method) > 0;
    EquipTargetInfo__SetSkillChangeFlag(equipTarget2, v3, 0);
  }
}


void ServantLeaderInfo__SetTransformData(
        ServantLeaderInfo_o *this,
        int32_t friendshipRank,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x23
  __int64 v9; // x24
  ServantTransformMaster_o *v10; // x22
  void *GrandInfo; // x0
  const MethodInfo *v12; // x1
  AfterTransformSvtInfo_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t aftDispLimitCount; // w22
  int32_t v17; // w21
  Il2CppObject *v18; // x23
  ServantLimitMaster_o *v19; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  ServantLimitEntity_o *v22; // x24
  _DWORD *v23; // x25
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x19
  int32_t atkMax; // w22
  int32_t atkBase; // w27
  int v27; // w28
  struct AfterTransformSvtInfo_o *v28; // x19
  int32_t atk; // w28
  int32_t adjustAtk; // w22
  struct AfterTransformSvtInfo_o *v31; // x27
  int32_t v32; // w19
  __int64 v33; // x8
  struct AfterTransformSvtInfo_o *v34; // x19
  int v35; // w24
  __int64 v36; // x8
  Il2CppObject *v37; // x24
  unsigned int v38; // w9
  __int64 v39; // x10
  struct AfterTransformSvtInfo_o *v40; // x8
  __int64 v41; // x10
  __int64 v42; // x9
  Il2CppObject *v43; // x0
  void *v44; // x24
  Il2CppClass *v45; // x25
  ServantTreasureDvcMaster_o *v46; // x23
  int32_t friendshipRanka; // [xsp+Ch] [xbp-74h]
  struct AfterTransformSvtInfo_o **p_afterTransformSvtInfo; // [xsp+10h] [xbp-70h]
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4CB76C7 & 1) == 0 )
  {
    sub_1C6BA08(&AfterTransformSvtInfo_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&CheckCombineResStatus_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76C7 = 1;
  }
  entity = 0;
  if ( dispLimitCount <= 1 )
    dispLimitCount = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v9;
  *(_QWORD *)&v50.fields.fakeValue = v8;
  GrandInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v50, 0);
  if ( !v10 )
    goto LABEL_60;
  if ( !ServantTransformMaster__TryGetEntity(v10, &entity, (int32_t)GrandInfo, dispLimitCount, 0) )
    return;
  v13 = (AfterTransformSvtInfo_o *)sub_1C6BC54(AfterTransformSvtInfo_TypeInfo);
  AfterTransformSvtInfo___ctor(v13, 0);
  this->fields.afterTransformSvtInfo = v13;
  p_afterTransformSvtInfo = &this->fields.afterTransformSvtInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.afterTransformSvtInfo, (int32_t)v13, v14, v15);
  if ( !entity )
    goto LABEL_60;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  v17 = ImageLimitCount__ConvertDispLimitCountForClient(aftDispLimitCount, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  GrandInfo = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_60;
  if ( !GrandInfo )
    goto LABEL_60;
  friendshipRanka = friendshipRank;
  v18 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)GrandInfo,
          entity->fields.aftSvtId,
          (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  GrandInfo = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v18 )
    goto LABEL_60;
  v19 = (ServantLimitMaster_o *)GrandInfo;
  klass = v18[1].klass;
  monitor = v18[1].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = klass;
  *(_QWORD *)&v51.fields.fakeValue = monitor;
  GrandInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v51, 0);
  if ( !v19 )
    goto LABEL_60;
  v22 = ServantLimitMaster__GetEntity(v19, (int32_t)GrandInfo, this->fields.limitCount, 0);
  GrandInfo = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantExpMaster___);
  if ( !GrandInfo )
    goto LABEL_60;
  GrandInfo = ServantExpMaster__GetEntity((ServantExpMaster_o *)GrandInfo, HIDWORD(v18[8].klass), this->fields.lv, 0);
  if ( !v22 )
    goto LABEL_60;
  v23 = GrandInfo;
  if ( !GrandInfo )
    goto LABEL_60;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  atkBase = v22->fields.atkBase;
  atkMax = v22->fields.atkMax;
  v27 = *((_DWORD *)GrandInfo + 7);
  GrandInfo = CheckCombineResStatus_TypeInfo;
  if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
  if ( !afterTransformSvtInfo )
    goto LABEL_60;
  afterTransformSvtInfo->fields.atk = v27 * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                                    + v22->fields.atkBase;
  v28 = *p_afterTransformSvtInfo;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_60;
  atk = v28->fields.atk;
  adjustAtk = this->fields.adjustAtk;
  GrandInfo = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    GrandInfo = BalanceConfig_TypeInfo;
  }
  v31 = *p_afterTransformSvtInfo;
  v28->fields.atk = atk + *(_DWORD *)(*((_QWORD *)GrandInfo + 23) + 332LL) * adjustAtk;
  if ( !v31 )
    goto LABEL_60;
  v32 = v31->fields.atk;
  GrandInfo = ServantLeaderInfo__get_GrandInfo(this, v12);
  if ( !GrandInfo )
    goto LABEL_60;
  v33 = *((_QWORD *)GrandInfo + 2);
  if ( v33 )
    LODWORD(v33) = *(_DWORD *)(v33 + 32);
  v31->fields.atk = v33 + v32;
  v34 = *p_afterTransformSvtInfo;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_60;
  v35 = (v22->fields.hpMax - v22->fields.hpBase) * v23[7] / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
      + v22->fields.hpBase
      + BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * this->fields.adjustHp;
  v34->fields.hp = v35;
  GrandInfo = ServantLeaderInfo__get_GrandInfo(this, v12);
  if ( !GrandInfo )
    goto LABEL_60;
  v36 = *((_QWORD *)GrandInfo + 2);
  if ( v36 )
    LODWORD(v36) = *(_DWORD *)(v36 + 28);
  v34->fields.hp = v36 + v35;
  v37 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  GrandInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                        (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v18[1],
                        0);
  if ( !v37 )
    goto LABEL_60;
  GrandInfo = ServantSkillMaster__getUseEntityList(
                (ServantSkillMaster_o *)v37,
                (int32_t)GrandInfo,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v17,
                -1,
                -1,
                0);
  if ( !GrandInfo )
    goto LABEL_60;
  v38 = *((_DWORD *)GrandInfo + 6);
  if ( !v38 )
    goto LABEL_61;
  v39 = *((_QWORD *)GrandInfo + 4);
  v40 = this->fields.afterTransformSvtInfo;
  if ( v39 )
    LODWORD(v39) = *(_DWORD *)(v39 + 28);
  if ( !v40 )
    goto LABEL_60;
  v40->fields.skillId1 = v39;
  if ( v38 <= 1 )
    goto LABEL_61;
  v41 = *((_QWORD *)GrandInfo + 5);
  if ( v41 )
    LODWORD(v41) = *(_DWORD *)(v41 + 28);
  v40->fields.skillId2 = v41;
  if ( v38 <= 2 )
LABEL_61:
    sub_1C6BC68(GrandInfo);
  v42 = *((_QWORD *)GrandInfo + 6);
  if ( v42 )
    LODWORD(v42) = *(_DWORD *)(v42 + 28);
  v40->fields.skillId3 = v42;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v43 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v45 = v18[1].klass;
  v44 = v18[1].monitor;
  v46 = (ServantTreasureDvcMaster_o *)v43;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v45;
  *(_QWORD *)&v52.fields.fakeValue = v44;
  GrandInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v52, 0);
  if ( !v46 )
    goto LABEL_60;
  GrandInfo = ServantTreasureDvcMaster__getUseEntity(
                v46,
                (int32_t)GrandInfo,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v17,
                friendshipRanka,
                -1,
                0);
  if ( !GrandInfo )
    return;
  if ( !*p_afterTransformSvtInfo )
LABEL_60:
    sub_1C6BC60(GrandInfo, v12);
  (*p_afterTransformSvtInfo)->fields.treasureDeviceId = *((_DWORD *)GrandInfo + 8);
}


void ServantLeaderInfo__SetupLimitCountStageByMax(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t MaxLimitCountStage; // w0

  this->fields.isUserServant = 0;
  MaxLimitCountStage = ServantLeaderInfo__GetMaxLimitCountStage(this, 0, v2);
  this->fields.portraitLimitCount = MaxLimitCountStage;
  *(int32x4_t *)&this->fields.imageLimitCount = vdupq_n_s32(MaxLimitCountStage);
}


void ServantLeaderInfo__SetupLimitCountStageForNpc(
        ServantLeaderInfo_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t MaxLimitCountStage; // w0
  int32_t v6; // w21
  int32_t v7; // w8

  this->fields.isUserServant = 0;
  MaxLimitCountStage = ServantLeaderInfo__GetMaxLimitCountStage(this, 0, method);
  if ( dispLimitCount <= 0 )
    dispLimitCount = MaxLimitCountStage;
  v6 = MaxLimitCountStage;
  if ( LimitCountUtility__IsCostume(dispLimitCount, 0) )
    v7 = dispLimitCount;
  else
    v7 = v6;
  this->fields.iconLimitCount = v7;
  this->fields.portraitLimitCount = v7;
  this->fields.commandCardLimitCount = v7;
  this->fields.imageLimitCount = v7;
}


bool ServantLeaderInfo__getBaseEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v3; // x21
  __int64 v4; // x22
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x4
  DataManager_o *v11; // x23
  __int64 v12; // x22
  __int64 v13; // x28
  SkillLvEntity_o *v14; // x24
  __int64 v15; // x25
  __int64 v16; // x26
  int32_t v17; // w26
  int32_t limitCount; // w27
  int32_t EventId; // w0
  char v20; // w25
  BalanceConfig_c **v21; // x27
  System_Int32_array *SkillIdList; // x23
  const MethodInfo *v23; // x1
  System_Int32_array *SkillLevelList; // x24
  unsigned __int64 i; // x22
  __int64 v26; // x8
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v28; // x26
  BalanceConfig_c **v29; // x19
  __int64 v30; // x27
  __int64 v31; // x28
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w0
  bool EventUpVal; // w0
  int32_t wearesDispLimitCount; // [xsp+14h] [xbp-7Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4CB76DA & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76DA = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v4;
  *(_QWORD *)&v40.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v40, 0) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_38:
    sub_1C6BC60(Instance, v6);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  wearesDispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v8);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v9);
  if ( Instance )
  {
    v11 = Instance;
    if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
    {
      v12 = 0;
      v13 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
      while ( 1 )
      {
        v6 = *((unsigned int *)&v11->fields._DispLog + v12);
        if ( (int)v6 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_38;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v6, 1, 0);
          if ( Instance )
          {
            v14 = (SkillLvEntity_o *)Instance;
            v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v16;
            *(_QWORD *)&v41.fields.fakeValue = v15;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v41, 0);
            if ( !setupInfo )
              goto LABEL_38;
            v17 = (int)Instance;
            limitCount = this->fields.limitCount;
            EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0);
            v20 = 1;
            Instance = (DataManager_o *)SkillLvEntity__getEventUpVal(
                                          v14,
                                          v17,
                                          limitCount,
                                          wearesDispLimitCount,
                                          setupInfo,
                                          EventId,
                                          1,
                                          0,
                                          0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              return v20;
          }
        }
        if ( v13 == v12 )
          break;
        if ( ++v12 >= (unsigned __int64)LODWORD(v11->fields.m_CancellationTokenSource) )
LABEL_19:
          sub_1C6BC68(Instance);
      }
    }
  }
  v21 = &BalanceConfig_TypeInfo;
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  (ServantLeaderInfo_o *)Instance,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v10);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v23);
  for ( i = 0; ; ++i )
  {
    Instance = (DataManager_o *)*v21;
    if ( !(*v21)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)*v21;
    }
    v26 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 40LL);
    v20 = (__int64)i < v26;
    if ( (__int64)i >= v26 )
      break;
    if ( !SkillIdList )
      goto LABEL_38;
    if ( i >= LODWORD(SkillIdList->max_length) )
      goto LABEL_19;
    v6 = (unsigned int)SkillIdList->m_Items[i];
    if ( (int)v6 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_38;
      if ( i >= LODWORD(SkillLevelList->max_length) )
        goto LABEL_19;
      if ( !MasterData_object )
        goto LABEL_38;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v6, SkillLevelList->m_Items[i], 0);
      if ( Entity )
      {
        v28 = Entity;
        v29 = v21;
        v31 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v42.fields.currentCryptoKey = v31;
        *(_QWORD *)&v42.fields.fakeValue = v30;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v42, 0);
        if ( !setupInfo )
          goto LABEL_38;
        v32 = (int)Instance;
        v33 = this->fields.limitCount;
        v34 = EventUpValSetupInfo__get_EventId(setupInfo, 0);
        EventUpVal = SkillLvEntity__getEventUpVal(v28, v32, v33, wearesDispLimitCount, setupInfo, v34, 1, 0, 0);
        v21 = v29;
        if ( EventUpVal )
          return v20;
      }
    }
  }
  return v20;
}


bool ServantLeaderInfo__getBaseEventUpVal_43733468(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x22
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x4
  DataManager_o *v13; // x22
  bool v14; // w23
  __int64 v15; // x24
  __int64 v16; // x25
  System_Int32_array *SkillIdList; // x22
  const MethodInfo *v18; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4CB76DD & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76DD = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v6;
  *(_QWORD *)&v22.fields.fakeValue = v5;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v22, 0);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_37;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1C6BC60(Instance, v8);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v11);
  if ( Instance && (v13 = Instance, (int)Instance->fields.m_CancellationTokenSource >= 1) )
  {
    v14 = 0;
    v15 = 0;
    v16 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
    while ( 1 )
    {
      v8 = *((unsigned int *)&v13->fields._DispLog + v15);
      if ( (int)v8 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_37;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v8, 1, 0);
        if ( Instance )
        {
          Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_43142388(
                                        (SkillLvEntity_o *)Instance,
                                        eventUpVallInfo,
                                        1,
                                        0,
                                        1,
                                        0,
                                        0,
                                        0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v14 = 1;
        }
      }
      if ( v16 == v15 )
        break;
      if ( ++v15 >= (unsigned __int64)LODWORD(v13->fields.m_CancellationTokenSource) )
LABEL_20:
        sub_1C6BC68(Instance);
    }
  }
  else
  {
    v14 = 0;
  }
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  (ServantLeaderInfo_o *)Instance,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v12);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v18);
  for ( i = 0; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 40LL) )
      break;
    if ( !SkillIdList )
      goto LABEL_37;
    if ( i >= LODWORD(SkillIdList->max_length) )
      goto LABEL_20;
    v8 = (unsigned int)SkillIdList->m_Items[i];
    if ( (int)v8 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_37;
      if ( i >= LODWORD(SkillLevelList->max_length) )
        goto LABEL_20;
      if ( !MasterData_object )
        goto LABEL_37;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v8, SkillLevelList->m_Items[i], 0);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_43142388(Entity, eventUpVallInfo, 1, 0, 1, 0, 0, 0) )
          v14 = 1;
      }
    }
  }
  return v14;
}


int32_t ServantLeaderInfo__getCardImageLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  BalanceConfig_c *v7; // x8
  int32_t v8; // w20
  struct BalanceConfig_StaticFields *static_fields; // x9
  int LimitCountWithRandom; // w20
  const MethodInfo *v11; // x2
  bool v12; // vf
  bool v13; // w1
  ServantLeaderInfo_o *v14; // x0
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t v18; // w19
  int32_t v19; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4CB76F4 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    byte_4CB76F4 = 1;
  }
  if ( ConstantMaster__IsOtherImage(0) )
  {
    v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v5;
    *(_QWORD *)&v20.fields.fakeValue = v4;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v20, 0);
    v7 = BalanceConfig_TypeInfo;
    v8 = v6;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    static_fields = v7->static_fields;
    if ( v8 < static_fields->ExclusiveNpcServantIdStart )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->OtherImageLimitCount;
    }
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 0, v3);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
    v12 = __OFSUB__(LimitCountWithRandom--, 1);
    if ( LimitCountWithRandom < 0 == v12 )
      return LimitCountWithRandom;
    v13 = 1;
    v14 = this;
    return ServantLeaderInfo__getMaxCardImageLimitCount(v14, v13, v11);
  }
  if ( LimitCountWithRandom >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__GetFriendCostume(0) )
      return LimitCountWithRandom;
    goto LABEL_27;
  }
  if ( LimitCountWithRandom < 1 )
  {
LABEL_27:
    v14 = this;
    v13 = 0;
    return ServantLeaderInfo__getMaxCardImageLimitCount(v14, v13, v11);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetFriendImageLimitCount(0) )
    return --LimitCountWithRandom;
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v21, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v19, v18, 0);
}


int32_t ServantLeaderInfo__getCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4CB76F0 & 1) == 0 )
  {
    sub_1C6BA08(&OptionManager_TypeInfo);
    byte_4CB76F0 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 2, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
  }
  else if ( LimitCountWithRandom >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__GetFriendCostume(0) )
      return LimitCountWithRandom;
    return ServantLeaderInfo__getMaxCommandCardLimitCount(this, v5);
  }
  v6 = __OFSUB__(LimitCountWithRandom--, 1);
  if ( LimitCountWithRandom < 0 == v6 )
    return LimitCountWithRandom;
  return ServantLeaderInfo__getMaxCommandCardLimitCount(this, v5);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEntity_o *ServantLeaderInfo__getCommandCodeEntity(
        ServantLeaderInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *v4; // x20
  struct CommandCodeStatus_array *commandCode; // x10
  int max_length; // w8
  __int64 v7; // x9
  CommandCodeStatus_o **m_Items; // x10
  CommandCodeStatus_o *v9; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_4CB76FD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C6BA08(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantLeaderInfo_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76FD = 1;
  }
  commandCode = v4->fields.commandCode;
  if ( !commandCode )
    return 0;
  max_length = commandCode->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  m_Items = commandCode->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= max_length )
      sub_1C6BC68(this);
    v9 = m_Items[v7];
    if ( !v9 )
      goto LABEL_16;
    if ( v9->fields.idx == index )
      break;
    if ( (int)++v7 >= max_length )
      return 0;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v13 = *(_QWORD *)&v9->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v9->fields.commandCodeId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v13;
  *(_QWORD *)&v15.fields.fakeValue = v12;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15, 0);
  if ( !v14 )
LABEL_16:
    sub_1C6BC60(this, *(_QWORD *)&index);
  return (CommandCodeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  v14,
                                  (int32_t)this,
                                  (const MethodInfo_33F90DC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
}


System_Int32_array *ServantLeaderInfo__getCommandCodeIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  struct CommandCodeStatus_array *commandCode; // x23
  int max_length; // w8
  BalanceConfig_c *v8; // x19
  int i; // w24
  CommandCodeStatus_o *v10; // x20
  int32_t idx; // w21
  __int64 v12; // x26
  __int64 v13; // x20
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4CB76FC & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76FC = 1;
  }
  if ( !this->fields.commandCode )
    return 0;
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1C6BAB0(int___TypeInfo, (unsigned int)v3->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_23:
    sub_1C6BC60(v4, v5);
  max_length = commandCode->max_length;
  v8 = v4;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_24:
        sub_1C6BC68(v4);
      v10 = commandCode->m_Items[i];
      if ( !v10 )
        goto LABEL_23;
      v4 = BalanceConfig_TypeInfo;
      idx = v10->fields.idx;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v4 = BalanceConfig_TypeInfo;
      }
      if ( idx < v4->static_fields->SvtCommandCardMax )
      {
        v12 = v10->fields.idx;
        v14 = *(_QWORD *)&v10->fields.commandCodeId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&v10->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v16.fields.currentCryptoKey = v14;
        *(_QWORD *)&v16.fields.fakeValue = v13;
        v4 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v16, 0);
        if ( !v8 )
          goto LABEL_23;
        if ( (unsigned int)v12 >= LODWORD(v8->_1.namespaze) )
          goto LABEL_24;
        *((_DWORD *)&v8->_1.byval_arg.data + v12) = (_DWORD)v4;
      }
      max_length = commandCode->max_length;
    }
  }
  return (System_Int32_array *)v8;
}


int32_t ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4CB76EC & 1) == 0 )
  {
    sub_1C6BA08(&OptionManager_TypeInfo);
    byte_4CB76EC = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
    v6 = __OFSUB__(LimitCountWithRandom--, 1);
    if ( LimitCountWithRandom < 0 == v6 )
      return LimitCountWithRandom;
  }
  else if ( LimitCountWithRandom >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__GetFriendCostume(0) )
      return LimitCountWithRandom;
  }
  else if ( LimitCountWithRandom >= 1 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__GetFriendImageLimitCount(0) || LimitCountWithRandom != 3 )
      return --LimitCountWithRandom;
  }
  return ServantLeaderInfo__getMaxDispLimitCount(this, v5);
}


bool ServantLeaderInfo__getEquipEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  EquipTargetInfo_o *equipTarget1; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  int32_t v10; // w0
  int32_t limitCount; // w22
  int32_t v12; // w23
  const MethodInfo *v13; // x1
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CB76D9 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76D9 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v16, 0) < 1 )
    return 0;
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v9;
  *(_QWORD *)&v17.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v17, 0);
  limitCount = this->fields.limitCount;
  v12 = v10;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v13);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v12, limitCount, DispLimitCount, setupInfo, 0);
}


bool ServantLeaderInfo__getEquipExpInfo(
        ServantLeaderInfo_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v10; // x23
  __int64 v11; // x24
  __int64 v12; // x1
  EquipTargetInfo_o *v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4CB76E8 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76E8 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v11 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15, 0) >= 1 )
  {
    v13 = this->fields.equipTarget1;
    if ( !v13 )
      sub_1C6BC60(0, v12);
    return EquipTargetInfo__getExpInfo(v13, exp, lateExp, barExp, 0);
  }
  else
  {
LABEL_9:
    *exp = 0;
    *lateExp = 0;
    *barExp = 0.0;
    return 0;
  }
}


void ServantLeaderInfo__getEquipSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x1
  EquipTargetInfo_o *v9; // x0
  BalanceConfig_c *v10; // x0
  SkillInfo_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4CB76D3 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&SkillInfo___TypeInfo);
    byte_4CB76D3 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v7 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v14, 0) >= 1 )
  {
    v9 = this->fields.equipTarget1;
    if ( !v9 )
      sub_1C6BC60(0, v8);
    EquipTargetInfo__getSkillInfo(v9, skillInfoList, 0);
  }
  else
  {
LABEL_9:
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = (SkillInfo_array *)sub_1C6BAB0(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v11;
    sub_1C6B9AC((CGThumbnailListItem_o *)skillInfoList, (int32_t)v11, v12, v13);
  }
}


bool ServantLeaderInfo__getEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  const MethodInfo *v7; // x2
  EquipTargetInfo_o *equipTarget1; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w0
  int32_t limitCount; // w22
  int32_t v13; // w23
  const MethodInfo *v14; // x1
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4CB76D7 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76D7 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v17, 0) < 1 )
    return 0;
  if ( ServantLeaderInfo__getBaseEventUpVal(this, setupInfo, v7) )
    return 1;
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v18, 0);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v13, limitCount, DispLimitCount, setupInfo, 0);
}


bool ServantLeaderInfo__getEventUpVal_43733092(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  int32_t limitCount; // w22
  int32_t v11; // w23
  const MethodInfo *v12; // x1
  int32_t DispLimitCount; // w0
  int32_t npcFlag; // w24
  int32_t v15; // w25
  EventUpValInfo_o *v16; // x26
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  bool BaseEventUpVal_43733468; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v22; // w21
  EventUpValInfo_o *v23; // x24
  __int64 v24; // x22
  __int64 v25; // x23
  EquipTargetInfo_o *v26; // x0
  __int64 v27; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4CB76DB & 1) == 0 )
  {
    sub_1C6BA08(&EventUpValInfo_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76DB = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v8;
  *(_QWORD *)&v29.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v29, 0);
  limitCount = this->fields.limitCount;
  v11 = v9;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v12);
  npcFlag = this->fields.npcFlag;
  v15 = DispLimitCount;
  v16 = (EventUpValInfo_o *)sub_1C6BC54(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v16, setupInfo, v11, limitCount, v15, npcFlag, 0);
  *eventUpVallInfo = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)eventUpVallInfo, (int32_t)v16, v17, v18);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(this->fields.svtId, 0) < 1 )
    return 0;
  BaseEventUpVal_43733468 = ServantLeaderInfo__getBaseEventUpVal_43733468(this, eventUpVallInfo, v19);
  equipTarget1 = this->fields.equipTarget1;
  v22 = BaseEventUpVal_43733468;
  if ( !equipTarget1 )
    return v22;
  v23 = *eventUpVallInfo;
  v25 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v25;
  *(_QWORD *)&v30.fields.fakeValue = v24;
  v26 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v30, 0);
  if ( !v23 || (v23->fields.equipSvtId = (int)v26, (v26 = this->fields.equipTarget1) == 0) )
    sub_1C6BC60(v26, v27);
  return (v22 | EquipTargetInfo__getEventUpVal_41949508(v26, eventUpVallInfo, 1, 0)) & 1;
}


bool ServantLeaderInfo__getEventUpVal_43734080(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool *isServantEventUpVal,
        bool *isEquipEventUpVal,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w0
  int32_t limitCount; // w24
  int32_t v15; // w25
  const MethodInfo *v16; // x1
  int32_t DispLimitCount; // w0
  int32_t npcFlag; // w26
  int32_t v19; // w27
  EventUpValInfo_o *v20; // x28
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v25; // x25
  __int64 v26; // x23
  __int64 v27; // x24
  EquipTargetInfo_o *v28; // x0
  __int64 v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4CB76DC & 1) == 0 )
  {
    sub_1C6BA08(&EventUpValInfo_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76DC = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v12;
  *(_QWORD *)&v31.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v31, 0);
  limitCount = this->fields.limitCount;
  v15 = v13;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v16);
  npcFlag = this->fields.npcFlag;
  v19 = DispLimitCount;
  v20 = (EventUpValInfo_o *)sub_1C6BC54(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v20, setupInfo, v15, limitCount, v19, npcFlag, 0);
  *eventUpVallInfo = v20;
  sub_1C6B9AC((CGThumbnailListItem_o *)eventUpVallInfo, (int32_t)v20, v21, v22);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(this->fields.svtId, 0) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_43733468(this, eventUpVallInfo, v23) )
      *isServantEventUpVal = 1;
    equipTarget1 = this->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v25 = *eventUpVallInfo;
      v27 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v32.fields.currentCryptoKey = v27;
      *(_QWORD *)&v32.fields.fakeValue = v26;
      v28 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v32, 0);
      if ( !v25 || (v25->fields.equipSvtId = (int)v28, (v28 = this->fields.equipTarget1) == 0) )
        sub_1C6BC60(v28, v29);
      if ( EquipTargetInfo__getEventUpVal_41949508(v28, eventUpVallInfo, 1, 0) )
        *isEquipEventUpVal = 1;
    }
  }
  return *isEquipEventUpVal || *isServantEventUpVal;
}


bool ServantLeaderInfo__getExpInfo(
        ServantLeaderInfo_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v16; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v18; // x24
  int m_CancellationTokenSource; // w25
  float v20; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4CB76E7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76E7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v22, 0);
  if ( !v14 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             (int32_t)Instance,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v16) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v18 = (ServantExpMaster_o *)Instance;
    if ( lv >= 2 )
    {
      if ( !Entity )
        goto LABEL_21;
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(
                                    (ServantExpMaster_o *)Instance,
                                    HIDWORD(Entity[8].klass),
                                    lv - 1,
                                    0);
      if ( !Instance )
        goto LABEL_21;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
    }
    else
    {
      if ( !Entity || !Instance )
        goto LABEL_21;
      m_CancellationTokenSource = 0;
    }
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v18, HIDWORD(Entity[8].klass), this->fields.lv, 0);
    *exp = this->fields.exp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
      v20 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_20;
    }
LABEL_21:
    sub_1C6BC60(Instance, v10);
  }
  v20 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_20:
  *barExp = v20;
  return 1;
}


int32_t ServantLeaderInfo__getFrameType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantExceedMaster_o *v8; // x20
  int32_t FrameType_42923448; // w20
  Il2CppObject *v10; // x21
  const MethodInfo *v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4CB76E9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantExceedMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v13, 0);
  if ( !v8
    || (FrameType_42923448 = ServantExceedMaster__GetFrameType_42923448(
                               v8,
                               (int32_t)Instance,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               this->fields.grandSvt != 0,
                               0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (v10 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v11),
        !v10) )
  {
LABEL_10:
    sub_1C6BC60(Instance, v4);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v10,
           (int32_t)Instance,
           this->fields.lv,
           FrameType_42923448,
           this->fields.grandSvt != 0,
           0);
}


int32_t ServantLeaderInfo__getIconLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x2
  bool v6; // vf
  bool v7; // w1
  ServantLeaderInfo_o *v8; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w19
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4CB76F7 & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    byte_4CB76F7 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 3, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
    v6 = __OFSUB__(LimitCountWithRandom--, 1);
    if ( LimitCountWithRandom < 0 == v6 )
      return LimitCountWithRandom;
    v7 = 1;
    v8 = this;
    return ServantLeaderInfo__getMaxIconLimitCount(v8, v7, v5);
  }
  if ( LimitCountWithRandom >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__GetFriendCostume(0) )
      return LimitCountWithRandom;
    goto LABEL_18;
  }
  if ( LimitCountWithRandom < 1 )
  {
LABEL_18:
    v8 = this;
    v7 = 0;
    return ServantLeaderInfo__getMaxIconLimitCount(v8, v7, v5);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetFriendImageLimitCount(0) )
    return --LimitCountWithRandom;
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v14, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v13, v12, 0);
}


int32_t ServantLeaderInfo__getLevelMax(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v12; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4CB76C8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76C8 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v4;
  *(_QWORD *)&v15.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15, 0) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v16, 0);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, (int32_t)Instance, this->fields.limitCount, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_17:
    sub_1C6BC60(Instance, v6);
  }
  v12 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0);
  lvMax = Entity->fields.lvMax;
  if ( v12 )
    lvMax += v12->fields.addLvMax;
  return lvMax;
}


int32_t ServantLeaderInfo__getMaxCardImageLimitCount(ServantLeaderInfo_o *this, bool isNpc, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  int32_t limitCount; // w20
  int32_t v9; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4CB76F5 & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76F5 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v11, 0);
  limitCount = this->fields.limitCount;
  v9 = v7;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetCardImageLimitCount(v9, limitCount, 0, isNpc, 0);
}


int32_t ServantLeaderInfo__getMaxCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t limitCount; // w19
  int32_t v7; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4CB76F1 & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76F1 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v9, 0);
  limitCount = this->fields.limitCount;
  v7 = v5;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v7, limitCount, 0);
}


int32_t ServantLeaderInfo__getMaxDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t limitCount; // w19
  int32_t v7; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4CB76ED & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76ED = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v9, 0);
  limitCount = this->fields.limitCount;
  v7 = v5;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v7, limitCount, 0);
}


int32_t ServantLeaderInfo__getMaxIconLimitCount(ServantLeaderInfo_o *this, bool isNpc, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  int32_t limitCount; // w20
  int32_t v9; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4CB76F8 & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76F8 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v11, 0);
  limitCount = this->fields.limitCount;
  v9 = v7;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetCardImageLimitCount(v9, limitCount, 0, isNpc, 0);
}


int32_t ServantLeaderInfo__getMaxPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t limitCount; // w19
  int32_t v7; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4CB76FB & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76FB = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v9, 0);
  limitCount = this->fields.limitCount;
  v7 = v5;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v7, limitCount, 0);
}


System_Int32_array *ServantLeaderInfo__getPassiveSkillIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  ServantLeaderInfo_o *v5; // x0
  CGThumbnailListItem_o *p_classPassive; // x19
  System_Int32_array *classPassive; // t1
  const MethodInfo *v8; // x3
  System_Int32_array *PassiveSkillIdList; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4CB76CE & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76CE = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v4;
  *(_QWORD *)&v13.fields.fakeValue = v3;
  v5 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v13, 0);
  classPassive = this->fields.classPassive;
  p_classPassive = (CGThumbnailListItem_o *)&this->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(v5, (int32_t)v5, classPassive, v8);
  p_classPassive->klass = (CGThumbnailListItem_c *)PassiveSkillIdList;
  sub_1C6B9AC(p_classPassive, (int32_t)PassiveSkillIdList, v10, v11);
  return (System_Int32_array *)p_classPassive->klass;
}


void ServantLeaderInfo__getPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        const MethodInfo *method)
{
  System_Int32_array *PassiveSkillIdList; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ServantLeaderInfo_o *v11; // x0
  const MethodInfo *v12; // x4

  PassiveSkillIdList = ServantLeaderInfo__getPassiveSkillIdList(this, (const MethodInfo *)idList);
  *idList = PassiveSkillIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)idList, (int32_t)PassiveSkillIdList, v9, v10);
  ServantLeaderInfo__GetPassiveSkillInfo(v11, titleList, explanationList, *idList, v12);
}


int32_t ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4CB76FA & 1) == 0 )
  {
    sub_1C6BA08(&OptionManager_TypeInfo);
    byte_4CB76FA = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 4, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
  }
  else if ( LimitCountWithRandom >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__GetFriendCostume(0) )
      return LimitCountWithRandom;
    return ServantLeaderInfo__getMaxPortraitLimitCount(this, v5);
  }
  v6 = __OFSUB__(LimitCountWithRandom--, 1);
  if ( LimitCountWithRandom < 0 == v6 )
    return LimitCountWithRandom;
  return ServantLeaderInfo__getMaxPortraitLimitCount(this, v5);
}


bool ServantLeaderInfo__getQuestRestriction(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  int32_t limitCount; // w21
  int32_t v10; // w22
  const MethodInfo *v11; // x1
  int32_t DispLimitCount; // w23
  const MethodInfo *v13; // x1
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4CB76DE & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76DE = 1;
  }
  if ( !questRestrictionInfo || NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0) )
    return 0;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v7;
  *(_QWORD *)&v16.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v16, 0);
  limitCount = this->fields.limitCount;
  v10 = v8;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v11);
  OverwriteStatus = ServantLeaderInfo__GetOverwriteStatus(this, v13);
  if ( !OverwriteStatus )
    sub_1C6BC60(0, v15);
  return QuestRestrictionInfo__IsRestriction_43667396(
           questRestrictionInfo,
           v10,
           limitCount,
           DispLimitCount,
           OverwriteStatus->fields._Rarity_k__BackingField,
           this->fields.lv,
           2,
           0);
}


int32_t ServantLeaderInfo__getRarity(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4CB76CA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB76CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v10, 0);
  if ( !v8 || (Instance = ServantLimitMaster__GetEntity(v8, (int32_t)Instance, this->fields.limitCount, 0)) == 0 )
LABEL_9:
    sub_1C6BC60(Instance, v4);
  return *((_DWORD *)Instance + 6);
}


bool ServantLeaderInfo__getServantEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  const MethodInfo *v7; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4CB76D8 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76D8 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v9, 0) >= 1
      && ServantLeaderInfo__getBaseEventUpVal(this, setupInfo, v7);
}


int32_t ServantLeaderInfo__getServantLevel(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *ServantLeaderInfo__getSkillIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantLeaderInfo__GetSkillIdList(
           this,
           this->fields.skillId1,
           this->fields.skillId2,
           this->fields.skillId3,
           v2);
}


void ServantLeaderInfo__getSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  ServantLeaderInfo_o *v7; // x0
  int32_t v8; // w21
  const MethodInfo *v9; // x4
  System_Int32_array *SkillIdList; // x3
  const MethodInfo *v11; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4CB76D1 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76D1 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v12, 0);
  v8 = (int)v7;
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  v7,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v9);
  ServantLeaderInfo__GetSkillInfo(this, skillInfoList, v8, SkillIdList, v11);
}


System_Int32_array *ServantLeaderInfo__getSkillLevelList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  System_Int32_array *result; // x0
  __int64 v5; // x1
  unsigned int max_length; // w8

  if ( (byte_4CB76CD & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB76CD = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, (unsigned int)v3->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1C6BC60(0, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[0] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[1] = this->fields.skillLv2, max_length <= 2) )
  {
    sub_1C6BC68(result);
  }
  result->m_Items[2] = this->fields.skillLv3;
  return result;
}


bool ServantLeaderInfo__getTreasureDeviceInfo(
        ServantLeaderInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  const MethodInfo *v8; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4CB76E3 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76E3 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v10, 0);
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, v7, this->fields.treasureDeviceId, v8);
}


bool ServantLeaderInfo__getTreasureDeviceInfo_43736032(
        ServantLeaderInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t klass; // w8

  if ( (byte_4CB76E5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C6BA08(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CB76E5 = 1;
  }
  *tdLv = this->fields.treasureDeviceLv;
  if ( this->fields.treasureDeviceId < 1 )
  {
    klass = 0;
    LOBYTE(Entity) = 0;
  }
  else
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C41A9C(v4);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C41A9C(v4);
    MasterData_object = **(Il2CppObject ***)(v9 + 184);
    if ( !MasterData_object
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)MasterData_object,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0 )
    {
      sub_1C6BC60(MasterData_object, tdLv);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               this->fields.treasureDeviceId,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    if ( Entity )
    {
      klass = (int32_t)Entity[3].klass;
      LOBYTE(Entity) = 1;
    }
    else
    {
      klass = 0;
    }
  }
  *tdMaxLv = klass;
  return (char)Entity;
}


int32_t ServantLeaderInfo__getTreasureDeviceLevelIcon(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t treasureDeviceLv; // w8

  if ( (byte_4CB76E6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C6BA08(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CB76E6 = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C41A9C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C41A9C(v2);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0 )
  {
    sub_1C6BC60(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.treasureDeviceId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  if ( treasureDeviceLv >= SLODWORD(Entity[3].klass) )
    return 2;
  return treasureDeviceLv > 1;
}


bool ServantLeaderInfo__getUniqueSvtRestriction(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4CB76DF & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76DF = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v9, 0);
  return QuestRestrictionInfo__IsUniqueServant_43671172(questRestrictionInfo, v7, 0);
}


bool ServantLeaderInfo__getUniqueSvtRestriction_43734856(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4CB76E0 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76E0 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v13, 0);
  return QuestRestrictionInfo__IsUniqueServant_43671372(questRestrictionInfo, v11, partyItem, num, -1, 0);
}


int32_t ServantLeaderInfo__get_AtkBoostValue(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustAtk; // w20
  int32_t StatusUpAdjustAtk; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1
  struct GrandGraphDetailEntity_o *svtGrandDetailEntity; // x8

  if ( (byte_4CB76C4 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB76C4 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  adjustAtk = this->fields.adjustAtk;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  StatusUpAdjustAtk = v3->static_fields->StatusUpAdjustAtk;
  GrandInfo = ServantLeaderInfo__get_GrandInfo(this, method);
  if ( !GrandInfo )
    sub_1C6BC60(0, v7);
  svtGrandDetailEntity = GrandInfo->fields.svtGrandDetailEntity;
  if ( svtGrandDetailEntity )
    LODWORD(svtGrandDetailEntity) = svtGrandDetailEntity->fields.adjustAtk;
  return (_DWORD)svtGrandDetailEntity + StatusUpAdjustAtk * adjustAtk;
}


int32_t ServantLeaderInfo__get_CommandCardLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return LimitCountUtility__GetLimitCountStageCheckZero(
           this->fields.limitCount,
           this->fields.commandCardLimitCount,
           0,
           0);
}


int32_t ServantLeaderInfo__get_DispLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.dispLimitCount, 0, 0);
}


UserServantGrandInfo_o *ServantLeaderInfo__get_GrandInfo(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct UserServantGrandInfo_o *grandInfo; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB76C2 & 1) == 0 )
  {
    sub_1C6BA08(&UserServantGrandInfo_TypeInfo);
    byte_4CB76C2 = 1;
  }
  grandInfo = this->fields.grandInfo;
  if ( !grandInfo )
  {
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    grandInfo = UserServantGrandInfo__Make_43721644(this, method);
    this->fields.grandInfo = grandInfo;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.grandInfo, (int32_t)grandInfo, v4, v5);
  }
  return grandInfo;
}


int32_t ServantLeaderInfo__get_HpBoostValue(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustHp; // w20
  int32_t StatusUpAdjustHp; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1
  struct GrandGraphDetailEntity_o *svtGrandDetailEntity; // x8

  if ( (byte_4CB76C3 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB76C3 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  adjustHp = this->fields.adjustHp;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  StatusUpAdjustHp = v3->static_fields->StatusUpAdjustHp;
  GrandInfo = ServantLeaderInfo__get_GrandInfo(this, method);
  if ( !GrandInfo )
    sub_1C6BC60(0, v7);
  svtGrandDetailEntity = GrandInfo->fields.svtGrandDetailEntity;
  if ( svtGrandDetailEntity )
    LODWORD(svtGrandDetailEntity) = svtGrandDetailEntity->fields.adjustHp;
  return (_DWORD)svtGrandDetailEntity + StatusUpAdjustHp * adjustHp;
}


int32_t ServantLeaderInfo__get_IconLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.iconLimitCount, 1, 0);
}


int32_t ServantLeaderInfo__get_ImageLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.imageLimitCount, 1, 0);
}


bool ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4CB76D0 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB76D0 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v5 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v7, 0) > 0;
}


bool ServantLeaderInfo__get_IsGrandSvt(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return this->fields.grandSvt != 0;
}


bool ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_4CB76C1 & 1) == 0 )
  {
    sub_1C6BA08(&RandomLimitCountManager_TypeInfo);
    byte_4CB76C1 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CB1E7E )
  {
    sub_1C6BA08(&RandomLimitCountManager_TypeInfo);
    byte_4CB1E7E = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  LOBYTE(randomLimitCountTargets) = v3->static_fields->enableRandomLimitCount;
  if ( (_BYTE)randomLimitCountTargets )
  {
    randomLimitCountTargets = this->fields.randomLimitCountTargets;
    if ( randomLimitCountTargets )
    {
      randomLimitCountTargets = (struct System_Int32_array *)randomLimitCountTargets->max_length;
      if ( randomLimitCountTargets )
        LOBYTE(randomLimitCountTargets) = !NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0);
    }
  }
  return (unsigned __int8)randomLimitCountTargets & 1;
}


int32_t ServantLeaderInfo__get_PortraitLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.portraitLimitCount, 0, 0);
}


int32_t ServantLeaderInfo__get_TransformedAtk(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
    return afterTransformSvtInfo->fields.atk;
  else
    return 0;
}


int32_t ServantLeaderInfo__get_TransformedHp(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
    return afterTransformSvtInfo->fields.hp;
  else
    return 0;
}


void ServantLeaderInfo___c__DisplayClass161_0___ctor(
        ServantLeaderInfo___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantLeaderInfo___c__DisplayClass161_0___SetEquipImagePartsGroupIdxs_b__0(
        ServantLeaderInfo___c__DisplayClass161_0_o *this,
        UserImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C6BC60(this, 0);
  return entity->fields.id == this->fields.scriptImageValue;
}