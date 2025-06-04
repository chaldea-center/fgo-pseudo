void __fastcall ServantLeaderInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B033C1 & 1) == 0 )
  {
    sub_1BC3008(&ServantLeaderInfo_TypeInfo, v1);
    byte_4B033C1 = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo___ctor_42446472(
        ServantLeaderInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  void *Instance; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *Entity; // x21
  int32_t v19; // w8
  int32_t MaxDispLimitCount; // w0
  long double v21; // q0
  int32_t v22; // w22
  __int64 v23; // x8
  __int64 v24; // x0
  Il2CppObject *MasterData_object; // x23
  __int64 v26; // x2
  unsigned int v27; // w8
  __int64 v28; // x9
  __int64 v29; // x9
  __int64 v30; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  long double v33; // q0
  __int64 v34; // x0
  __int64 v35; // x0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3

  if ( (byte_4B03381 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v11);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B03381 = 1;
  }
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userId = 1LL;
  this->fields.classId = 0;
  this->fields.userSvtId = 1LL;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.exceedCount = 0;
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  this->fields.npcFlag = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, 0LL);
  if ( !Instance )
    goto LABEL_39;
  this->fields.hp = *((_DWORD *)Instance + 9);
  v19 = *((_DWORD *)Instance + 11);
  this->fields.adjustHp = 0;
  this->fields.adjustAtk = 0;
  this->fields.atk = v19;
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(this, v17);
  *(_QWORD *)&v21 = 0x100000001LL;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v22 = MaxDispLimitCount;
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C1346C(v21);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1346C(v21);
  Instance = **(void ***)(v24 + 184);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(this->fields.svtId, 0LL);
  if ( !MasterData_object )
    goto LABEL_39;
  Instance = ServantSkillMaster__getUseEntityList(
               (ServantSkillMaster_o *)MasterData_object,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               v22,
               -1,
               -1LL,
               0LL);
  if ( !Instance )
    goto LABEL_39;
  v27 = *((_DWORD *)Instance + 6);
  if ( !v27 )
    goto LABEL_40;
  v28 = *((_QWORD *)Instance + 4);
  if ( v28 )
    LODWORD(v28) = *(_DWORD *)(v28 + 28);
  this->fields.skillId1 = v28;
  if ( v27 <= 1 )
    goto LABEL_40;
  v29 = *((_QWORD *)Instance + 5);
  if ( v29 )
    LODWORD(v29) = *(_DWORD *)(v29 + 28);
  this->fields.skillId2 = v29;
  if ( v27 <= 2 )
LABEL_40:
    sub_1BC326C(Instance, v17, v26);
  v30 = *((_QWORD *)Instance + 6);
  if ( v30 )
    LODWORD(v30) = *(_DWORD *)(v30 + 28);
  this->fields.skillId3 = v30;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_39;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    goto LABEL_36;
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1C1346C(v33);
  v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1C1346C(v33);
  Instance = **(void ***)(v35 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL )
  {
LABEL_39:
    sub_1BC3264(Instance, v17);
  }
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)Instance,
                svtId,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v22,
                0,
                -1,
                0LL);
  if ( UseEntity )
    this->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
LABEL_36:
  this->fields.equipTarget1 = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipTarget1, 0, v31, v32);
  this->fields.randomLimitCountTargets = 0LL;
  *(_QWORD *)&this->fields.imageLimitCount = 0LL;
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.updatedAt = 0LL;
  this->fields.portraitLimitCount = 0;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.randomLimitCountTargets, 0, v37, v38);
  this->fields.imagePartsGroupInfo = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.imagePartsGroupInfo, 0, v39, v40);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    ServantLeaderInfo__SetTransformData(this, 0, v22, v41);
}


void __fastcall ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x21
  System_Collections_Generic_Dictionary_int__int__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  int32_t v12; // w0
  int32_t iconLimitCount; // w1
  const MethodInfo *v14; // x2
  int32_t v15; // w0
  int32_t dispLimitCount; // w1
  const MethodInfo *v17; // x2
  int32_t v18; // w0
  int32_t commandCardLimitCount; // w1
  const MethodInfo *v20; // x2
  int32_t v21; // w0
  int32_t portraitLimitCount; // w1
  const MethodInfo *v23; // x2
  ServantLeaderInfo_o *v24; // x0
  int32_t v25; // w1
  const MethodInfo *v26; // x2
  ServantLeaderInfo_o *AdjustLimitCount; // x0
  int32_t v28; // w1
  const MethodInfo *v29; // x2
  ServantLeaderInfo_o *v30; // x0
  int32_t v31; // w1
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B033B4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BC3008(&OptionManager_TypeInfo, v5);
    byte_4B033B4 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSpoilerSetting(0LL) )
  {
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v36.fields.currentCryptoKey = v7;
    *(_QWORD *)&v36.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v36, 0LL) >= 1 )
    {
      v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v8,
        (const MethodInfo_32FF0D8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v8;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.limitChangeDic, (int32_t)v8, v9, v10);
      v12 = ServantLeaderInfo__GetLimitChangeDic(this, this->fields.imageLimitCount, v11);
      iconLimitCount = this->fields.iconLimitCount;
      this->fields.imageLimitCount = v12;
      v15 = ServantLeaderInfo__GetLimitChangeDic(this, iconLimitCount, v14);
      dispLimitCount = this->fields.dispLimitCount;
      this->fields.iconLimitCount = v15;
      v18 = ServantLeaderInfo__GetLimitChangeDic(this, dispLimitCount, v17);
      commandCardLimitCount = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = v18;
      v21 = ServantLeaderInfo__GetLimitChangeDic(this, commandCardLimitCount, v20);
      portraitLimitCount = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = v21;
      v24 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetLimitChangeDic(this, portraitLimitCount, v23);
      v25 = this->fields.dispLimitCount;
      this->fields.portraitLimitCount = (int)v24;
      AdjustLimitCount = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(v24, v25, v26);
      v28 = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = (int)AdjustLimitCount;
      v30 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(AdjustLimitCount, v28, v29);
      v31 = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = (int)v30;
      this->fields.portraitLimitCount = ServantLeaderInfo__GetAdjustLimitCount(v30, v31, v32);
      ServantLeaderInfo__SetServantNameBySpoilerProtection(this, v33);
      this->fields.limitChangeDic = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.limitChangeDic, 0, v34, v35);
    }
  }
}


// positive sp value has been detected, the output may be wrong!
void __fastcall ServantLeaderInfo__Finalize(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.equipTarget1 = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipTarget1, 0, v2, v3);
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__GetAdjustLimitCount(
        ServantLeaderInfo_o *this,
        int32_t orgLimitCount,
        const MethodInfo *method)
{
  int LIMIT_COUNT_THIRD_STAGE; // w19
  ServantLeaderInfo_c *v4; // x0

  LIMIT_COUNT_THIRD_STAGE = orgLimitCount;
  if ( (byte_4B033B7 & 1) == 0 )
  {
    sub_1BC3008(&ServantLeaderInfo_TypeInfo, *(_QWORD *)&orgLimitCount);
    byte_4B033B7 = 1;
  }
  v4 = ServantLeaderInfo_TypeInfo;
  if ( !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo);
    v4 = ServantLeaderInfo_TypeInfo;
  }
  if ( LIMIT_COUNT_THIRD_STAGE <= 10 && v4->static_fields->LIMIT_COUNT_THIRD_STAGE < LIMIT_COUNT_THIRD_STAGE )
  {
    LIMIT_COUNT_THIRD_STAGE = v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      return ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE;
    }
  }
  return LIMIT_COUNT_THIRD_STAGE;
}


bool __fastcall ServantLeaderInfo__GetAdjustMax(
        ServantLeaderInfo_o *this,
        int32_t *maxAjustHp,
        int32_t *maxAjustAtk,
        int32_t *secondMaxAdjustHp,
        int32_t *secondMaxAdjustAtk,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v19; // x25
  __int64 v20; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x24
  Il2CppObject *v22; // x24
  const MethodInfo *v23; // x1
  int32_t *Entity; // x0
  int32_t v25; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B03386 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BC3008(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B03386 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v20;
  *(_QWORD *)&v27.fields.fakeValue = v19;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v27, 0LL);
  if ( !v21 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v21,
               (int32_t)Instance,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
LABEL_13:
    v25 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v23),
        !v22) )
  {
LABEL_15:
    sub_1BC3264(Instance, v17);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                        (int32_t)Instance,
                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_13;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v25 = Entity[8];
  result = 1;
LABEL_14:
  *secondMaxAdjustAtk = v25;
  return result;
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *Master_object; // x0
  __int64 v23; // x26
  __int64 v24; // x27
  ServantAppendPassiveSkillMaster_o *v25; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *EntityListFromSvtId; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_String_o *MasterName_k__BackingField; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x25
  System_Int32_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_String_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Boolean_array *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Int32_array *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x27
  il2cpp_array_size_t v49; // w19
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x11
  int max_length; // w8
  __int64 v52; // x9
  __int64 v53; // x10
  AppendPassiveSkillInfo_o **m_Items; // x11
  AppendPassiveSkillInfo_o *v55; // x29
  __int64 v56; // x20
  __int64 v57; // x8
  System_Int32_array *v58; // x9
  SkillEntity_o *v59; // x28
  System_Int32_array *v60; // x8
  System_String_array *v61; // x22
  const MethodInfo *v62; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x1
  Il2CppClass **v64; // x0
  System_String_array *v65; // x22
  const MethodInfo *v66; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // x1
  Il2CppClass **v68; // x0
  System_Boolean_array *v69; // x8
  char v70; // w9
  System_String_array *v71; // x22
  const MethodInfo *v72; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v73; // x1
  Il2CppClass **v74; // x0
  System_String_array *v75; // x28
  const MethodInfo *v76; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v77; // x1
  Il2CppClass **v78; // x0
  System_String_array *v79; // x8
  System_String_array *v80; // x8
  CGThumbnailListItem_o *v81; // x28
  System_String_o *sortValue0; // t1
  System_String_o *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  System_String_array *v86; // x8
  Il2CppClass **v87; // x28
  CGThumbnailListItem_o *v88; // x28
  System_String_o *v89; // x29
  System_String_o *v90; // t1
  System_String_o *v91; // x0
  System_String_o *v92; // x0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct AppendPassiveSkillInfo_array *v95; // x8
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  if ( (byte_4B033B8 & 1) == 0 )
  {
    sub_1BC3008(&bool___TypeInfo, idList);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1BC3008(&int___TypeInfo, v14);
    sub_1BC3008(&LocalizationManager_TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BC3008(&string___TypeInfo, v17);
    sub_1BC3008(&StringLiteral_43/*"\n"*/, v18);
    sub_1BC3008(&StringLiteral_3698/*"COND_TYPE_TITLE"*/, v19);
    sub_1BC3008(&StringLiteral_3686/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_1BC3008(&StringLiteral_1/*""*/, v21);
    byte_4B033B8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v107.fields.currentCryptoKey = v24;
  *(_QWORD *)&v107.fields.fakeValue = v23;
  EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                                        v107,
                                                                        0LL);
  if ( !v25
    || (EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                                                              v25,
                                                                              (int32_t)EntityListFromSvtId,
                                                                              0LL)) == 0LL )
  {
LABEL_67:
    sub_1BC3264(EntityListFromSvtId, v27);
  }
  MasterName_k__BackingField = EntityListFromSvtId->fields._MasterName_k__BackingField;
  v31 = EntityListFromSvtId;
  if ( MasterName_k__BackingField || (v95 = this->fields.appendPassiveSkill) != 0LL && *(_QWORD *)&v95->max_length )
  {
    v32 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *idList = v32;
    sub_1BC2FAC((CGThumbnailListItem_o *)idList, (int32_t)v32, v33, v34);
    v35 = (System_String_array *)sub_1BC30B0(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *titleList = v35;
    sub_1BC2FAC((CGThumbnailListItem_o *)titleList, (int32_t)v35, v36, v37);
    v38 = (System_String_array *)sub_1BC30B0(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *explanationList = v38;
    sub_1BC2FAC((CGThumbnailListItem_o *)explanationList, (int32_t)v38, v39, v40);
    v41 = (System_Boolean_array *)sub_1BC30B0(bool___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *releaseStateList = v41;
    sub_1BC2FAC((CGThumbnailListItem_o *)releaseStateList, (int32_t)v41, v42, v43);
    v44 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *lvList = v44;
    sub_1BC2FAC((CGThumbnailListItem_o *)lvList, (int32_t)v44, v45, v46);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v48 = EntityListFromSvtId;
      v49 = 0;
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
        v55 = 0LL;
LABEL_24:
        if ( v49 >= LODWORD(v31->fields._MasterName_k__BackingField) )
          goto LABEL_68;
        v56 = (int)v49;
        v57 = *((_QWORD *)&v31->fields.revision + (int)v49);
        if ( !v57 )
          goto LABEL_67;
        v58 = *idList;
        if ( !*idList )
          goto LABEL_67;
        if ( v49 >= v58->max_length )
          goto LABEL_68;
        v27 = *(unsigned int *)(v57 + 28);
        v58->m_Items[v49 + 1] = v27;
        if ( !v48 )
          goto LABEL_67;
        EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                              v48,
                                                                              v27,
                                                                              (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v59 = (SkillEntity_o *)EntityListFromSvtId;
        v60 = *lvList;
        if ( v55 )
        {
          if ( !v60 )
            goto LABEL_67;
          if ( v49 >= v60->max_length )
            goto LABEL_68;
          v60->m_Items[v49 + 1] = v55->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v61 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                v55->fields.skillLv,
                                                                                0LL);
          if ( !v61 )
            goto LABEL_67;
          if ( v49 >= v61->max_length )
            goto LABEL_68;
          v63 = EntityListFromSvtId;
          v64 = &v61->obj.klass + (int)v49;
          v64[4] = (Il2CppClass *)v63;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v64 + 4), (int32_t)v63, v47, v62);
          v65 = *explanationList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                                v59,
                                                                                v55->fields.skillLv,
                                                                                0LL);
          if ( !v65 )
            goto LABEL_67;
          if ( v49 >= v65->max_length )
            goto LABEL_68;
          v67 = EntityListFromSvtId;
          v68 = &v65->obj.klass + (int)v49;
          v68[4] = (Il2CppClass *)v67;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v67, v47, v66);
          v69 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v49 >= v69->max_length )
            goto LABEL_68;
          v70 = 1;
        }
        else
        {
          if ( !v60 )
            goto LABEL_67;
          if ( v49 >= v60->max_length )
            goto LABEL_68;
          v60->m_Items[v49 + 1] = -1;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v71 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                -1,
                                                                                0LL);
          if ( !v71 )
            goto LABEL_67;
          if ( v49 >= v71->max_length )
            goto LABEL_68;
          v73 = EntityListFromSvtId;
          v74 = &v71->obj.klass + (int)v49;
          v74[4] = (Il2CppClass *)v73;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v74 + 4), (int32_t)v73, v47, v72);
          v75 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3698/*"COND_TYPE_TITLE"*/,
                                                                                0LL);
          if ( !v75 )
            goto LABEL_67;
          if ( v49 >= v75->max_length )
            goto LABEL_68;
          v77 = EntityListFromSvtId;
          v78 = &v75->obj.klass + (int)v49;
          v78[4] = (Il2CppClass *)v77;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v78 + 4), (int32_t)v77, v47, v76);
          v79 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v49 >= v79->max_length )
            goto LABEL_68;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                                v79->m_Items[v49],
                                                                                (System_String_o *)StringLiteral_1/*""*/,
                                                                                0LL);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v80 = *explanationList;
            if ( !*explanationList )
              goto LABEL_67;
            if ( v49 >= v80->max_length )
              goto LABEL_68;
            v81 = (CGThumbnailListItem_o *)(&v80->obj.klass + (int)v49);
            sortValue0 = (System_String_o *)v81->fields.sortValue0;
            v81 = (CGThumbnailListItem_o *)((char *)v81 + 32);
            v83 = System_String__Concat_62348648(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            v81->klass = (CGThumbnailListItem_c *)v83;
            sub_1BC2FAC(v81, (int32_t)v83, v84, v85);
          }
          v86 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v49 >= v86->max_length )
            goto LABEL_68;
          v87 = &v86->obj.klass + (int)v49;
          v90 = (System_String_o *)v87[4];
          v88 = (CGThumbnailListItem_o *)(v87 + 4);
          v89 = v90;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v91 = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v92 = System_String__Concat_62348648(v89, v91, 0LL);
          v88->klass = (CGThumbnailListItem_c *)v92;
          sub_1BC2FAC(v88, (int32_t)v92, v93, v94);
          v69 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v49 >= v69->max_length )
            goto LABEL_68;
          v70 = 0;
        }
        ++v49;
        v69->m_Items[v56 + 4] = v70;
        if ( v49 == (_DWORD)MasterName_k__BackingField )
          return;
      }
      v52 = 0LL;
      v53 = (__int64)(&v31->fields.revision + 2 * (int)v49);
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v52 < max_length )
      {
        v55 = m_Items[v52];
        if ( !v55 )
          goto LABEL_67;
        if ( v49 >= LODWORD(v31->fields._MasterName_k__BackingField) )
          break;
        if ( !*(_QWORD *)v53 )
          goto LABEL_67;
        if ( v55->fields.skillId == *(_DWORD *)(*(_QWORD *)v53 + 28LL) )
          goto LABEL_24;
        if ( (int)++v52 >= max_length )
          goto LABEL_23;
      }
LABEL_68:
      sub_1BC326C(EntityListFromSvtId, v27, v47);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)idList, 0, v28, v29);
    *titleList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)titleList, 0, v96, v97);
    *explanationList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)explanationList, 0, v98, v99);
    *releaseStateList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)releaseStateList, 0, v100, v101);
    *lvList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)lvList, 0, v102, v103);
  }
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
        ServantLeaderInfo_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x8
  __int64 v23; // x25
  System_Int32_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Boolean_array *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Int32_array *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 skillId; // x1
  __int64 v41; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x26
  il2cpp_array_size_t v43; // w29
  struct AppendPassiveSkillInfo_array *v44; // x8
  __int64 v45; // x19
  AppendPassiveSkillInfo_o *v46; // x8
  System_Int32_array *v47; // x9
  struct AppendPassiveSkillInfo_array *v48; // x8
  AppendPassiveSkillInfo_o *v49; // x8
  int skillLv; // w10
  SkillEntity_o *v51; // x27
  System_Int32_array *v52; // x9
  System_String_array *v53; // x28
  const MethodInfo *v54; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x1
  Il2CppClass **v56; // x0
  struct AppendPassiveSkillInfo_array *v57; // x8
  AppendPassiveSkillInfo_o *v58; // x8
  System_String_array *v59; // x28
  const MethodInfo *v60; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x1
  Il2CppClass **v62; // x0
  System_Boolean_array *v63; // x8
  char v64; // w9
  System_String_array *v65; // x28
  const MethodInfo *v66; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // x1
  Il2CppClass **v68; // x0
  System_String_array *v69; // x27
  const MethodInfo *v70; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // x1
  Il2CppClass **v72; // x0
  System_String_array *v73; // x8
  System_String_array *v74; // x8
  CGThumbnailListItem_o *v75; // x27
  System_String_o *sortValue0; // t1
  System_String_o *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_String_array *v80; // x8
  Il2CppClass **v81; // x27
  CGThumbnailListItem_o *v82; // x27
  System_String_o *v83; // x28
  System_String_o *v84; // t1
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t v95; // w2
  const MethodInfo *v96; // x3

  if ( (byte_4B033B9 & 1) == 0 )
  {
    sub_1BC3008(&bool___TypeInfo, idList);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_1BC3008(&DataManager_TypeInfo, v13);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1BC3008(&int___TypeInfo, v15);
    sub_1BC3008(&LocalizationManager_TypeInfo, v16);
    sub_1BC3008(&string___TypeInfo, v17);
    sub_1BC3008(&StringLiteral_43/*"\n"*/, v18);
    sub_1BC3008(&StringLiteral_3698/*"COND_TYPE_TITLE"*/, v19);
    sub_1BC3008(&StringLiteral_3686/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_1BC3008(&StringLiteral_1/*""*/, v21);
    byte_4B033B9 = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (v23 = *(_QWORD *)&appendPassiveSkill->max_length) != 0 )
  {
    v24 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)v23);
    *idList = v24;
    sub_1BC2FAC((CGThumbnailListItem_o *)idList, (int32_t)v24, v25, v26);
    v27 = (System_String_array *)sub_1BC30B0(string___TypeInfo, (unsigned int)v23);
    *titleList = v27;
    sub_1BC2FAC((CGThumbnailListItem_o *)titleList, (int32_t)v27, v28, v29);
    v30 = (System_String_array *)sub_1BC30B0(string___TypeInfo, (unsigned int)v23);
    *explanationList = v30;
    sub_1BC2FAC((CGThumbnailListItem_o *)explanationList, (int32_t)v30, v31, v32);
    v33 = (System_Boolean_array *)sub_1BC30B0(bool___TypeInfo, (unsigned int)v23);
    *releaseStateList = v33;
    sub_1BC2FAC((CGThumbnailListItem_o *)releaseStateList, (int32_t)v33, v34, v35);
    v36 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)v23);
    *lvList = v36;
    sub_1BC2FAC((CGThumbnailListItem_o *)lvList, (int32_t)v36, v37, v38);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v23 >= 1 )
    {
      v42 = Master_object;
      v43 = 0;
      while ( 1 )
      {
        v44 = this->fields.appendPassiveSkill;
        if ( !v44 )
          break;
        if ( v43 >= v44->max_length )
          goto LABEL_58;
        v45 = (int)v43;
        v46 = v44->m_Items[v43];
        if ( !v46 )
          break;
        v47 = *idList;
        if ( !*idList )
          break;
        if ( v43 >= v47->max_length )
          goto LABEL_58;
        skillId = (unsigned int)v46->fields.skillId;
        v47->m_Items[v43 + 1] = skillId;
        if ( !v42 )
          break;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v42,
                                                                        skillId,
                                                                        (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v48 = this->fields.appendPassiveSkill;
        if ( !v48 )
          break;
        if ( v43 >= v48->max_length )
          goto LABEL_58;
        v49 = v48->m_Items[v43];
        if ( !v49 )
          break;
        skillLv = v49->fields.skillLv;
        v51 = (SkillEntity_o *)Master_object;
        v52 = *lvList;
        if ( skillLv < 1 )
        {
          if ( !v52 )
            break;
          if ( v43 >= v52->max_length )
            goto LABEL_58;
          v52->m_Items[v43 + 1] = -1;
          if ( !Master_object )
            break;
          v65 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          -1,
                                                                          0LL);
          if ( !v65 )
            break;
          if ( v43 >= v65->max_length )
            goto LABEL_58;
          v67 = Master_object;
          v68 = &v65->obj.klass + (int)v43;
          v68[4] = (Il2CppClass *)v67;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v67, v41, v66);
          v69 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_3698/*"COND_TYPE_TITLE"*/,
                                                                          0LL);
          if ( !v69 )
            break;
          if ( v43 >= v69->max_length )
            goto LABEL_58;
          v71 = Master_object;
          v72 = &v69->obj.klass + (int)v43;
          v72[4] = (Il2CppClass *)v71;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v72 + 4), (int32_t)v71, v41, v70);
          v73 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v43 >= v73->max_length )
            goto LABEL_58;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                          v73->m_Items[v43],
                                                                          (System_String_o *)StringLiteral_1/*""*/,
                                                                          0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v74 = *explanationList;
            if ( !*explanationList )
              break;
            if ( v43 >= v74->max_length )
              goto LABEL_58;
            v75 = (CGThumbnailListItem_o *)(&v74->obj.klass + (int)v43);
            sortValue0 = (System_String_o *)v75->fields.sortValue0;
            v75 = (CGThumbnailListItem_o *)((char *)v75 + 32);
            v77 = System_String__Concat_62348648(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            v75->klass = (CGThumbnailListItem_c *)v77;
            sub_1BC2FAC(v75, (int32_t)v77, v78, v79);
          }
          v80 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v43 >= v80->max_length )
LABEL_58:
            sub_1BC326C(Master_object, skillId, v41);
          v81 = &v80->obj.klass + (int)v43;
          v84 = (System_String_o *)v81[4];
          v82 = (CGThumbnailListItem_o *)(v81 + 4);
          v83 = v84;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v85 = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v86 = System_String__Concat_62348648(v83, v85, 0LL);
          v82->klass = (CGThumbnailListItem_c *)v86;
          sub_1BC2FAC(v82, (int32_t)v86, v87, v88);
          v63 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v43 >= v63->max_length )
            goto LABEL_58;
          v64 = 0;
        }
        else
        {
          if ( !v52 )
            break;
          if ( v43 >= v52->max_length )
            goto LABEL_58;
          v52->m_Items[v43 + 1] = skillLv;
          if ( !Master_object )
            break;
          v53 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          v49->fields.skillLv,
                                                                          0LL);
          if ( !v53 )
            break;
          if ( v43 >= v53->max_length )
            goto LABEL_58;
          v55 = Master_object;
          v56 = &v53->obj.klass + (int)v43;
          v56[4] = (Il2CppClass *)v55;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v55, v41, v54);
          v57 = this->fields.appendPassiveSkill;
          if ( !v57 )
            break;
          if ( v43 >= v57->max_length )
            goto LABEL_58;
          v58 = v57->m_Items[v43];
          if ( !v58 )
            break;
          v59 = *explanationList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                          v51,
                                                                          v58->fields.skillLv,
                                                                          0LL);
          if ( !v59 )
            break;
          if ( v43 >= v59->max_length )
            goto LABEL_58;
          v61 = Master_object;
          v62 = &v59->obj.klass + (int)v43;
          v62[4] = (Il2CppClass *)v61;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v61, v41, v60);
          v63 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v43 >= v63->max_length )
            goto LABEL_58;
          v64 = 1;
        }
        ++v43;
        v63->m_Items[v45 + 4] = v64;
        if ( (_DWORD)v23 == v43 )
          return;
      }
      sub_1BC3264(Master_object, skillId);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)idList, 0, (int32_t)titleList, (const MethodInfo *)explanationList);
    *titleList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)titleList, 0, v89, v90);
    *explanationList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)explanationList, 0, v91, v92);
    *releaseStateList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)releaseStateList, 0, v93, v94);
    *lvList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)lvList, 0, v95, v96);
  }
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo_42469628(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x20
  SkillInfo_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  __int64 v18; // x20
  const MethodInfo *v19; // x1
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  unsigned __int64 v24; // x25
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  SkillInfo_array *v28; // x26
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  System_Int32_array *v31; // [xsp+0h] [xbp-70h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B033BA & 1) == 0 )
  {
    sub_1BC3008(&SkillInfo___TypeInfo, skillInfoList);
    sub_1BC3008(&SkillInfo_TypeInfo, v8);
    byte_4B033BA = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v31 = 0LL;
  releaseStateList = 0LL;
  if ( isNpc )
    ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v31,
      v4);
  else
    ServantLeaderInfo__GetAppendPassiveSkillInfo(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v31,
      v4);
  if ( idList && (v11 = *(_QWORD *)&idList->max_length) != 0 )
  {
    v12 = (SkillInfo_array *)sub_1BC30B0(SkillInfo___TypeInfo, (unsigned int)v11);
    *skillInfoList = v12;
    sub_1BC2FAC((CGThumbnailListItem_o *)skillInfoList, (int32_t)v12, v13, v14);
    if ( (int)v11 >= 1 )
    {
      v15 = -(__int64)(unsigned int)v11;
      v16 = 8LL;
      v17 = 32LL;
      do
      {
        v18 = sub_1BC3254(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v18, v19);
        if ( !v18 )
          goto LABEL_26;
        *(_DWORD *)(v18 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v24 = v16 - 8;
        if ( v16 - 8 >= (unsigned __int64)idList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v18 + 16) = *((_DWORD *)&idList->obj.klass + v16);
        if ( !v31 )
          goto LABEL_26;
        if ( v24 >= v31->max_length )
          goto LABEL_27;
        *(_DWORD *)(v18 + 20) = *((_DWORD *)&v31->obj.klass + v16);
        if ( !titleList )
          goto LABEL_26;
        if ( v24 >= titleList->max_length )
          goto LABEL_27;
        v25 = *(__int64 *)((char *)&titleList->obj.klass + v17);
        *(_QWORD *)(v18 + 32) = v25;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 32), v25, v22, v23);
        if ( !explanationList )
          goto LABEL_26;
        if ( v24 >= explanationList->max_length )
          goto LABEL_27;
        v27 = *(__int64 *)((char *)&explanationList->obj.klass + v17);
        *(_QWORD *)(v18 + 40) = v27;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 40), v27, v22, v26);
        v28 = *skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_1BC3264(v20, v21);
        v20 = sub_1BC3144(v18, v28->obj.klass->_1.element_class);
        if ( !v20 )
        {
          v30 = sub_1BC3288(0LL);
          sub_1BC3130(v30, 0LL);
        }
        if ( v24 >= v28->max_length )
LABEL_27:
          sub_1BC326C(v20, v21, v22);
        *(Il2CppClass **)((char *)&v28->obj.klass + v17) = (Il2CppClass *)v18;
        sub_1BC2FAC((CGThumbnailListItem_o *)((char *)v28 + v17), v18, v22, v29);
        ++v16;
        v17 += 8LL;
      }
      while ( v15 + v16 != 8 );
    }
  }
  else
  {
    *skillInfoList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)skillInfoList, 0, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_ValueTuple_FuncList_TYPE__int___o __fastcall ServantLeaderInfo__GetBaseFriendPointUpTypeVal(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  __int64 v8; // x20
  Il2CppObject *Master_object; // x19
  const MethodInfo *v10; // x4
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v12; // x1
  __int128 v13; // x0 OVERLAPPED
  __int64 v14; // x2
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B03391 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B03391 = 1;
  }
  entity = 0LL;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v8;
  *(_QWORD *)&v19.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL) >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__GetSkillIdList(
                    (ServantLeaderInfo_o *)Master_object,
                    this->fields.skillId1,
                    this->fields.skillId2,
                    this->fields.skillId3,
                    v10);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v12);
    for ( i = 0LL; ; ++i )
    {
      *(_QWORD *)&v13 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        *(_QWORD *)&v13 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*(_QWORD *)(v13 + 184) + 40LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_25;
      if ( i >= SkillIdList->max_length )
        goto LABEL_26;
      v14 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v14 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_25;
        if ( i >= SkillLevelList->max_length )
LABEL_26:
          sub_1BC326C(v13, *((_QWORD *)&v13 + 1), v14);
        if ( !Master_object )
          goto LABEL_25;
        if ( SkillLvMaster__TryGetEntity(
               (SkillLvMaster_o *)Master_object,
               &entity,
               v14,
               SkillLevelList->m_Items[i + 1],
               0LL) )
        {
          *(_QWORD *)&v13 = entity;
          if ( !entity )
LABEL_25:
            sub_1BC3264(v13, *((_QWORD *)&v13 + 1));
          *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v13 = SkillLvEntity__GetFriendPointUpTypeVal(
                                                                         entity,
                                                                         0LL);
          if ( (_BYTE)v13 )
            return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v13;
        }
      }
    }
  }
  *(_QWORD *)&v13 = 0LL;
  DWORD2(v13) = 0;
  return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v13;
}


int32_t __fastcall ServantLeaderInfo__GetEquipLimitCount(
        ServantLeaderInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
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


EquipTargetInfo_o *__fastcall ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
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


System_Collections_Generic_List_EquipTargetInfo__o *__fastcall ServantLeaderInfo__GetEquipTargetInfoList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *equipTarget1; // x1
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  struct System_Object_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x0
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4B033BF & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo, v4);
    byte_4B033BF = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget1;
  if ( equipTarget1 )
  {
    if ( !v5 )
      goto LABEL_22;
    items = v5->fields._items;
    v11 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_22;
    size = v5->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        equipTarget1,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v13 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v13[4] = (Il2CppClass *)equipTarget1;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 4), (int32_t)equipTarget1, v7, v8);
    }
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget2;
  if ( equipTarget1 )
  {
    if ( !v5 )
      goto LABEL_22;
    v14 = v5->fields._items;
    v15 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
    ++v5->fields._version;
    if ( !v14 )
      goto LABEL_22;
    v16 = v5->fields._size;
    if ( (unsigned int)v16 >= v14->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        equipTarget1,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &v14->obj.klass + v16;
      v5->fields._size = v16 + 1;
      v17[4] = (Il2CppClass *)equipTarget1;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)equipTarget1, v7, v8);
    }
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget3;
  if ( !equipTarget1 )
    return (System_Collections_Generic_List_EquipTargetInfo__o *)v5;
  if ( !v5
    || (v18 = v5->fields._items,
        v19 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__,
        ++v5->fields._version,
        !v18) )
  {
LABEL_22:
    sub_1BC3264(v6, equipTarget1);
  }
  v20 = v5->fields._size;
  if ( (unsigned int)v20 >= v18->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      equipTarget1,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &v18->obj.klass + v20;
    v5->fields._size = v20 + 1;
    v21[4] = (Il2CppClass *)equipTarget1;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)equipTarget1, v7, v8);
  }
  return (System_Collections_Generic_List_EquipTargetInfo__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__GetFrameType(
        ServantLeaderInfo_o *this,
        int32_t actualRarity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  ServantExceedMaster_o *v11; // x21
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int32_t FrameTypeFixRarity; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B033A5 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&actualRarity);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B033A5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantExceedMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  v12 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL);
  if ( !v11
    || (FrameTypeFixRarity = ServantExceedMaster__GetFrameTypeFixRarity(
                               v11,
                               (int32_t)v12,
                               this->fields.exceedCount,
                               actualRarity,
                               this->fields.grandSvt != 0,
                               0LL),
        (v12 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0LL) )
  {
    sub_1BC3264(v12, v13);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v12,
           actualRarity,
           this->fields.lv,
           FrameTypeFixRarity,
           this->fields.grandSvt != 0,
           0LL);
}


int32_t __fastcall ServantLeaderInfo__GetFriendIconDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t result; // w0
  const MethodInfo *v5; // x1

  result = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( result <= 10 )
    return ServantLeaderInfo__getDispSelectLimitCount(this, v5);
  return result;
}


int32_t __fastcall ServantLeaderInfo__GetFriendNpNameDispLimitCount(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int LimitCountWithRandom; // w20
  int32_t limitCount; // w21
  BalanceConfig_c *v9; // x0
  ServantLeaderInfo_c *v10; // x0
  int32_t v11; // w19

  if ( (byte_4B033A9 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v4);
    sub_1BC3008(&OptionManager_TypeInfo, v5);
    sub_1BC3008(&ServantLeaderInfo_TypeInfo, v6);
    byte_4B033A9 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( LimitCountWithRandom > 10 || !LimitCountWithRandom || NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
    return LimitCountWithRandom;
  limitCount = this->fields.limitCount;
  if ( !limitCount )
    return 0;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( limitCount == v9->static_fields->ServantLimitMax )
  {
    v10 = ServantLeaderInfo_TypeInfo;
    if ( !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo);
      v10 = ServantLeaderInfo_TypeInfo;
    }
    if ( LimitCountWithRandom == v10->static_fields->LIMIT_COUNT_THIRD_STAGE )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetFriendImageLimitCount(0LL) )
        return this->fields.limitCount;
    }
  }
  v11 = this->fields.limitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetLimitCountByDispLimit(LimitCountWithRandom - 1, v11, 0LL);
}


System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *__fastcall ServantLeaderInfo__GetFriendPointUpTypeVals(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_T__o *v12; // x19
  __int64 v13; // x21
  __int64 v14; // x22
  const MethodInfo *v15; // x1
  __int128 v16; // x0
  const MethodInfo_37BBB00 *v17; // x2
  System_Collections_Generic_List_EquipTargetInfo__o *Value; // x0
  System_ValueTuple_Int32Enum__int__o v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  __int64 v23; // x1
  const MethodInfo_37BBB00 *v24; // x2
  Il2CppObject *v25; // x0
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_ValueTuple_FuncList_TYPE__int___o v32; // [xsp+40h] [xbp-40h] BYREF
  System_ValueTuple_Int32Enum__int__o v33; // 0:x1.8
  System_Nullable_ValueTuple_FuncList_TYPE__int___o FriendPointUpTypeVal; // 0:x0.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  System_Nullable_T__o v36; // 0:x0.16
  System_Nullable_T__o v37; // 0:x0.16

  if ( (byte_4B03390 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo, v8);
    sub_1BC3008(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__, v9);
    sub_1BC3008(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4B03390 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v12 = (System_Collections_Generic_List_T__o *)sub_1BC3254(System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int_____ctor(
    v12,
    (const MethodInfo_364D4EC *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v14;
  *(_QWORD *)&v35.fields.fakeValue = v13;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v35, 0LL) >= 1 )
  {
    *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v16 = ServantLeaderInfo__GetBaseFriendPointUpTypeVal(
                                                                   this,
                                                                   v15);
    *(_QWORD *)&v32.fields.hasValue = v16;
    v32.fields.value.fields.Item2 = DWORD2(v16);
    if ( (_BYTE)v16 )
    {
      v36.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
      *(_QWORD *)&v36.fields.hasValue = &v32;
      Value = (System_Collections_Generic_List_EquipTargetInfo__o *)System_Nullable_ValueTuple_Int32Enum__int____get_Value(
                                                                      v36,
                                                                      v17);
      if ( !v12 )
        goto LABEL_27;
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_27;
      size = v12->fields._size;
      *((_QWORD *)&v16 + 1) = Value;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
          v12,
          *(System_ValueTuple_Int32Enum__int__o *)((char *)&v16 + 8),
          *(const MethodInfo_364DD40 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size] = (Il2CppObject *)Value;
      }
    }
    Value = ServantLeaderInfo__GetEquipTargetInfoList(this, *((const MethodInfo **)&v16 + 1));
    if ( Value )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        (System_Collections_Generic_List_object__o *)Value,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
      v31 = v30;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__) )
      {
        if ( !v31.fields._current )
          sub_1BC3264(0LL, v23);
        FriendPointUpTypeVal = EquipTargetInfo__GetFriendPointUpTypeVal((EquipTargetInfo_o *)v31.fields._current, 0LL);
        v32 = FriendPointUpTypeVal;
        if ( FriendPointUpTypeVal.fields.hasValue )
        {
          v37.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
          *(_QWORD *)&v37.fields.hasValue = &v32;
          v25 = (Il2CppObject *)System_Nullable_ValueTuple_Int32Enum__int____get_Value(v37, v24);
          v33 = (System_ValueTuple_Int32Enum__int__o)v25;
          if ( !v12 )
            sub_1BC3264(v25, v25);
          v26 = v12->fields._items;
          v27 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__;
          ++v12->fields._version;
          if ( !v26 )
            sub_1BC3264(v25, v25);
          v28 = v12->fields._size;
          if ( (unsigned int)v28 >= v26->max_length )
          {
            System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
              v12,
              v33,
              *(const MethodInfo_364DD40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = v28 + 1;
            v26->m_Items[v28] = v25;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
      return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v12;
    }
LABEL_27:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BC3264)(Value, v19);
  }
  return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v12;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__GetLimitChangeDic(
        ServantLeaderInfo_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *limitChangeDic; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B033B5 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, *(_QWORD *)&limit);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B033B5 = 1;
  }
  value = 0;
  limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
          limit,
          &value,
          (const MethodInfo_3301134 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    limitChangeDic = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( limitChangeDic )
    {
      limitChangeDic = (DataManager_o *)DataManager__GetMasterData_object_(
                                          limitChangeDic,
                                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( limitChangeDic )
      {
        value = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                  (ServantLimitSpoilerProtectionMaster_o *)limitChangeDic,
                  this->fields.svtId,
                  limit,
                  0LL);
        limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
        if ( limitChangeDic )
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
            limit,
            value,
            (const MethodInfo_32FFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_1BC3264(limitChangeDic, *(_QWORD *)&limit);
  }
  return value;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__GetLimitCountWithRandom(
        ServantLeaderInfo_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t ChoiceLimitCount_32951452; // w0
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v8; // x0

  if ( (byte_4B03380 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&RandomLimitCountManager_TypeInfo, v5);
    byte_4B03380 = 1;
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
  ChoiceLimitCount_32951452 = RandomLimitCountManager__GetChoiceLimitCount_32951452(this, 0LL);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_32951452;
  if ( ((1 << kind) & 0x16) == 0 )
    return imageLimitCount;
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return imageLimitCount - (imageLimitCount == v8->static_fields->ServantLimitMax);
}


System_String_o *__fastcall ServantLeaderInfo__GetOverWriteServantDetailName(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.overwriteServantDetailName;
}


System_String_o *__fastcall ServantLeaderInfo__GetOverWriteServantName(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.overwriteServantName;
}


ServantOverwriteStatus_o *__fastcall ServantLeaderInfo__GetOverwriteStatus(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  CGThumbnailListItem_o *p_overwriteStatus; // x20
  int32_t v6; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  int32_t LimitCountByDispLimit; // w21
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w20
  int32_t v12; // w21
  ServantOverwriteStatus_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B03384 & 1) == 0 )
  {
    sub_1BC3008(&ImageLimitCount_TypeInfo, method);
    sub_1BC3008(&ServantOverwriteStatus_TypeInfo, v3);
    byte_4B03384 = 1;
  }
  if ( !NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v4);
    limitCount = this->fields.limitCount;
    v12 = DispLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v12, limitCount, 0LL);
    p_overwriteStatus = (CGThumbnailListItem_o *)&this->fields.overwriteStatus;
    if ( this->fields.overwriteStatus && this->fields.overwriteStatusLimitCount == LimitCountByDispLimit )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( !this->fields.overwriteStatus )
  {
    p_overwriteStatus = (CGThumbnailListItem_o *)&this->fields.overwriteStatus;
    v6 = ServantLeaderInfo__getDispLimitCount(this, v4);
    v7 = this->fields.limitCount;
    v8 = v6;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v8, v7, 0LL);
LABEL_12:
    v13 = (ServantOverwriteStatus_o *)sub_1BC3254(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_32953748(v13, this, LimitCountByDispLimit, 0LL);
    p_overwriteStatus->klass = (CGThumbnailListItem_c *)v13;
    sub_1BC2FAC(p_overwriteStatus, (int32_t)v13, v14, v15);
LABEL_13:
    this->fields.overwriteStatusLimitCount = LimitCountByDispLimit;
  }
  return this->fields.overwriteStatus;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantLeaderInfo__GetPassiveSkillIdList(
        ServantLeaderInfo_o *this,
        int32_t dispSvtId,
        System_Int32_array *classPassive,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B0338A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&dispSvtId);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B0338A = 1;
  }
  if ( !classPassive )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
    {
      sub_1BC3264(Instance, v9);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               dispSvtId,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
      return (System_Int32_array *)Entity[10].monitor;
    else
      return 0LL;
  }
  return classPassive;
}


void __fastcall ServantLeaderInfo__GetPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x23
  System_String_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  long double v19; // q0
  __int64 v20; // x0
  __int64 v21; // x0
  DataManager_o *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x22
  unsigned __int64 v24; // x25
  unsigned int v25; // w24
  __int64 v26; // x26
  int32_t *v27; // x27
  System_String_array *v28; // x28
  SkillEntity_o *v29; // x23
  const MethodInfo *v30; // x3
  DataManager_o *v31; // x1
  Il2CppClass **v32; // x0
  System_String_array *v33; // x28
  const MethodInfo *v34; // x3
  DataManager_o *v35; // x1
  Il2CppClass **v36; // x0
  unsigned __int64 max_length; // x8
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_4B0338F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillMaster___, titleList);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1BC3008(&string___TypeInfo, v10);
    byte_4B0338F = 1;
  }
  if ( !idList )
    goto LABEL_29;
  v11 = *(_QWORD *)&idList->max_length;
  if ( !v11 )
    goto LABEL_29;
  v12 = (System_String_array *)sub_1BC30B0(string___TypeInfo, (unsigned int)v11);
  *titleList = v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)titleList, (int32_t)v12, v13, v14);
  v15 = (System_String_array *)sub_1BC30B0(string___TypeInfo, (unsigned int)v11);
  *explanationList = v15;
  sub_1BC2FAC((CGThumbnailListItem_o *)explanationList, (int32_t)v15, v16, v17);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1346C(v19);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1346C(v19);
  MasterData_object = **(DataManager_o ***)(v21 + 184);
  if ( !MasterData_object )
LABEL_31:
    sub_1BC3264(MasterData_object, v18);
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)v11 < 1 )
    goto LABEL_29;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v24 = 0LL;
  v25 = 0;
  v26 = (unsigned int)v11;
  v27 = &idList->m_Items[1];
  do
  {
    if ( v24 >= idList->max_length )
LABEL_30:
      sub_1BC326C(MasterData_object, v18, explanationList);
    v18 = (unsigned int)v27[v24];
    if ( (int)v18 >= 1 )
    {
      if ( !v23 )
        goto LABEL_31;
      MasterData_object = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                             v23,
                                             v18,
                                             (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( MasterData_object )
      {
        v28 = *titleList;
        v29 = (SkillEntity_o *)MasterData_object;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectTitle((SkillEntity_o *)MasterData_object, 0, 0LL);
        if ( !v28 )
          goto LABEL_31;
        if ( v25 >= v28->max_length )
          goto LABEL_30;
        v31 = MasterData_object;
        v32 = &v28->obj.klass + (int)v25;
        v32[4] = (Il2CppClass *)v31;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v31, (int32_t)explanationList, v30);
        v33 = *explanationList;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectExplanation(v29, 0, 0LL);
        if ( !v33 )
          goto LABEL_31;
        if ( v25 >= v33->max_length )
          goto LABEL_30;
        v35 = MasterData_object;
        v36 = &v33->obj.klass + (int)v25;
        v36[4] = (Il2CppClass *)v35;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v35, (int32_t)explanationList, v34);
        if ( v24 != v25 )
        {
          max_length = idList->max_length;
          if ( v24 >= max_length || v25 >= (unsigned int)max_length )
            goto LABEL_30;
          idList->m_Items[v25 + 1] = v27[v24];
          v27[v24] = 0;
        }
        ++v25;
      }
      else
      {
        if ( v24 >= idList->max_length )
          goto LABEL_30;
        v27[v24] = 0;
      }
    }
    ++v24;
  }
  while ( v26 != v24 );
  if ( !v25 )
  {
LABEL_29:
    *titleList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)titleList, 0, (int32_t)explanationList, (const MethodInfo *)idList);
    *explanationList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)explanationList, 0, v38, v39);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantLeaderInfo__GetSkillIdList(
        ServantLeaderInfo_o *this,
        int32_t id1,
        int32_t id2,
        int32_t id3,
        const MethodInfo *method)
{
  __int64 v8; // x1
  BalanceConfig_c *v9; // x0
  System_Int32_array *result; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B03387 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&id1);
    sub_1BC3008(&int___TypeInfo, v8);
    byte_4B03387 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1BC3264(0LL, v11);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = id1, max_length == 1) || (result->m_Items[2] = id2, max_length <= 2) )
    sub_1BC326C(result, v11, v12);
  result->m_Items[3] = id3;
  return result;
}


void __fastcall ServantLeaderInfo__GetSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispSvtId,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  long double v5; // q0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x0
  DataManager_o *Entity; // x0
  Il2CppObject *MasterData_object; // x26
  long double v18; // q0
  __int64 v19; // x8
  __int64 v20; // x0
  BalanceConfig_c **v21; // x25
  const MethodInfo *v22; // x1
  System_Int32_array *SkillLevelList; // x0
  BalanceConfig_c *v24; // x8
  System_Int32_array *v25; // x22
  __int64 v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x2
  unsigned __int64 v30; // x21
  __int64 v31; // x23
  il2cpp_array_size_t v32; // w29
  int32_t *v33; // x24
  SkillEntity_o *v34; // x27
  BalanceConfig_c **v35; // x20
  ServantSkillEntity_o *EntityFromSkillId; // x26
  __int64 v37; // x25
  const MethodInfo *v38; // x1
  System_String_o *EffectTitle; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_String_o *EffectExplanation; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x8
  int32_t skillNum; // w8
  CGThumbnailListItem_c *klass; // x26
  const MethodInfo *v48; // x3
  void **v49; // x0
  int32_t *v50; // x20
  int32_t *i; // x21
  __int64 v52; // x0
  Il2CppObject *v53; // [xsp+0h] [xbp-90h]
  int32_t *v54; // [xsp+8h] [xbp-88h]
  ServantSkillMaster_o *v56; // [xsp+18h] [xbp-78h]
  CGThumbnailListItem_o *v57; // [xsp+20h] [xbp-70h]
  __int64 v58; // [xsp+28h] [xbp-68h]

  v57 = (CGThumbnailListItem_o *)skillInfoList;
  if ( (byte_4B0338D & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    sub_1BC3008(&SkillInfo___TypeInfo, v12);
    sub_1BC3008(&SkillInfo_TypeInfo, v13);
    byte_4B0338D = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1346C(v5);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1346C(v5);
  Entity = **(DataManager_o ***)(v15 + 184);
  if ( !Entity )
    goto LABEL_56;
  MasterData_object = DataManager__GetMasterData_object_(
                        Entity,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillMaster___);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C1346C(v18);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1346C(v18);
  Entity = **(DataManager_o ***)(v20 + 184);
  if ( !Entity )
LABEL_56:
    sub_1BC3264(Entity, skillInfoList);
  v21 = &BalanceConfig_TypeInfo;
  v56 = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                  Entity,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v22);
  v24 = BalanceConfig_TypeInfo;
  v25 = SkillLevelList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  v26 = sub_1BC30B0(SkillInfo___TypeInfo, (unsigned int)v24->static_fields->SvtSkillListMax);
  v57->klass = (CGThumbnailListItem_c *)v26;
  sub_1BC2FAC(v57, v26, v27, v28);
  v30 = 0LL;
  v58 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v33 = &idList->m_Items[1];
  v53 = MasterData_object;
  v54 = &v25->m_Items[1];
  while ( 1 )
  {
    Entity = (DataManager_o *)*v21;
    if ( !(*v21)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v21;
    }
    if ( (__int64)v30 >= *(int *)(*(_QWORD *)&Entity[1].fields._DispLog + 40LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v30 >= idList->max_length )
LABEL_57:
      sub_1BC326C(Entity, skillInfoList, v29);
    skillInfoList = (SkillInfo_array **)(unsigned int)v33[v30];
    if ( (int)skillInfoList >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_56;
      Entity = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)skillInfoList,
                                  (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( v30 >= idList->max_length )
          goto LABEL_57;
        v34 = (SkillEntity_o *)Entity;
        Entity = (DataManager_o *)v56;
        if ( !v56 )
          goto LABEL_56;
        v35 = v21;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v56, dispSvtId, (int)v30 + 1, v33[v30], 0LL);
        v37 = sub_1BC3254(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v37, v38);
        if ( v30 >= idList->max_length )
          goto LABEL_57;
        if ( !v37 )
          goto LABEL_56;
        *(_DWORD *)(v37 + 16) = v33[v30];
        if ( !v25 )
          goto LABEL_56;
        if ( v30 >= v25->max_length )
          goto LABEL_57;
        *(_DWORD *)(v37 + 20) = v54[v30];
        Entity = (DataManager_o *)SkillEntity__getEffectChargeTurn(v34, v54[v30], 0LL);
        *(_DWORD *)(v37 + 24) = (_DWORD)Entity;
        if ( v30 >= v25->max_length )
          goto LABEL_57;
        EffectTitle = SkillEntity__getEffectTitle(v34, v54[v30], 0LL);
        *(_QWORD *)(v37 + 32) = EffectTitle;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v37 + 32), (int32_t)EffectTitle, v40, v41);
        if ( v30 >= v25->max_length )
          goto LABEL_57;
        EffectExplanation = SkillEntity__getEffectExplanation(v34, v54[v30], 0LL);
        *(_QWORD *)(v37 + 40) = EffectExplanation;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v37 + 40), (int32_t)EffectExplanation, v43, v44);
        v45 = v58;
        if ( EntityFromSkillId )
          v31 = v37;
        if ( !EntityFromSkillId )
          v45 = v37;
        v58 = v45;
        if ( EntityFromSkillId )
        {
          Entity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          if ( !v31 )
            goto LABEL_56;
          *(_DWORD *)(v31 + 48) = (_DWORD)Entity;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          if ( !v45 )
            goto LABEL_56;
          skillNum = 0;
          *(_DWORD *)(v58 + 48) = 0;
        }
        *(_DWORD *)(v37 + 52) = skillNum;
        *(_BYTE *)(v37 + 56) = 1;
        klass = v57->klass;
        if ( !v57->klass )
          goto LABEL_56;
        Entity = (DataManager_o *)sub_1BC3144(v37, *((_QWORD *)klass->_1.image + 8));
        if ( !Entity )
        {
          v52 = sub_1BC3288(0LL);
          sub_1BC3130(v52, 0LL);
        }
        if ( v32 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_57;
        v49 = &klass->_1.image + (int)v32;
        v49[4] = (void *)v37;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v49 + 4), v37, v29, v48);
        MasterData_object = v53;
        ++v32;
        v21 = v35;
      }
    }
    ++v30;
  }
  v50 = &v25->m_Items[v32 + 1];
  for ( i = &idList->m_Items[v32 + 1]; ; ++i )
  {
    if ( !LODWORD(Entity[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v21;
    }
    if ( (signed int)v32 >= *(_DWORD *)(*(_QWORD *)&Entity[1].fields._DispLog + 40LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v32 >= idList->max_length )
      goto LABEL_57;
    *i = 0;
    if ( !v25 )
      goto LABEL_56;
    if ( v32 >= v25->max_length )
      goto LABEL_57;
    *v50++ = -1;
    ++v32;
  }
}


int32_t __fastcall ServantLeaderInfo__GetTimesToRestart(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v10; // x0
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  UserEventDataLostEntity_o *v14; // x20
  __int64 v15; // x19
  __int64 v16; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B033BC & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B033BC = 1;
  }
  entity = 0LL;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, v8);
      byte_4AFC1F1 = 1;
    }
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_25;
    if ( UserEventDataLostMaster__TryGetEntity(
           (UserEventDataLostMaster_o *)Master_object,
           &entity,
           v10->static_fields->userIdNumber,
           questRestrictionInfo->fields.dataLostBattleId,
           0LL) )
    {
      v11 = entity;
      v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v19.fields.currentCryptoKey = v13;
      *(_QWORD *)&v19.fields.fakeValue = v12;
      v10 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
      if ( !v11 )
        goto LABEL_25;
      if ( UserEventDataLostEntity__IsRestart(v11, (int32_t)v10, 0LL) )
      {
        v14 = entity;
        v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v20.fields.currentCryptoKey = v16;
        *(_QWORD *)&v20.fields.fakeValue = v15;
        v10 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v20, 0LL);
        if ( v14 )
          return UserEventDataLostEntity__GetTimesToRestart(v14, (int32_t)v10, 0LL);
LABEL_25:
        sub_1BC3264(v10, v8);
      }
    }
  }
  return 0;
}


System_Int32_array *__fastcall ServantLeaderInfo__GetTransformedPassiveSkillIdList(
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
    return ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, 0LL, v3);
  classPassive = afterTransformSvtInfo->fields.classPassive;
  p_classPassive = (CGThumbnailListItem_o *)&afterTransformSvtInfo->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, classPassive, v3);
  p_classPassive->klass = (CGThumbnailListItem_c *)PassiveSkillIdList;
  sub_1BC2FAC(p_classPassive, (int32_t)PassiveSkillIdList, v9, v10);
  v13 = this->fields.afterTransformSvtInfo;
  if ( !v13 )
    sub_1BC3264(v11, v12);
  return v13->fields.classPassive;
}


void __fastcall ServantLeaderInfo__GetTransformedPassiveSkillInfo(
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
  sub_1BC2FAC((CGThumbnailListItem_o *)idList, (int32_t)TransformedPassiveSkillIdList, v10, v11);
  ServantLeaderInfo__GetPassiveSkillInfo(v12, titleList, explanationList, *idList, v13);
}


System_Int32_array *__fastcall ServantLeaderInfo__GetTransformedSkillIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
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


void __fastcall ServantLeaderInfo__GetTransformedSkillInfo(
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


bool __fastcall ServantLeaderInfo__GetTransformedTreasureDeviceInfo(
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


bool __fastcall ServantLeaderInfo__GetTreasureDeviceInfo(
        ServantLeaderInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispSvtId,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  long double v5; // q0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDvcEntity_o *EntityFromSvtIdDvcId; // x22
  TreasureDvcInfo_o *v16; // x23
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  TreasureDvcInfo_o *v20; // x8
  int32_t tdLv; // w9

  if ( (byte_4B0339F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, tdInfo);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1BC3008(&TreasureDvcInfo_TypeInfo, v11);
    byte_4B0339F = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1346C(v5);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1346C(v5);
  MasterData_object = **(Il2CppObject ***)(v13 + 184);
  if ( !MasterData_object )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !MasterData_object )
    goto LABEL_13;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           (ServantTreasureDvcMaster_o *)MasterData_object,
                           dispSvtId,
                           treasureDeviceId,
                           0LL);
  v16 = (TreasureDvcInfo_o *)sub_1BC3254(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v16, v17);
  *tdInfo = v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)tdInfo, (int32_t)v16, v18, v19);
  if ( EntityFromSvtIdDvcId )
  {
    v20 = *tdInfo;
    if ( *tdInfo )
    {
      v20->fields.id = treasureDeviceId;
      tdLv = this->fields.treasureDeviceLv;
      v20->fields.lv = tdLv;
      ServantTreasureDvcEntity__getEffectExplanation(
        EntityFromSvtIdDvcId,
        &v20->fields.name,
        &v20->fields.explanation,
        &v20->fields.maxLv,
        &v20->fields.guageCount,
        &v20->fields.cardId,
        &v20->fields.strengthStatus,
        &v20->fields.treasureDeviceNum,
        tdLv,
        0LL);
      return EntityFromSvtIdDvcId != 0LL;
    }
LABEL_13:
    sub_1BC3264(MasterData_object, tdInfo);
  }
  return EntityFromSvtIdDvcId != 0LL;
}


int32_t __fastcall ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B033C0 & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1BC3008(&StringLiteral_18882/*"equipTarget2SkillChange"*/, v4);
    byte_4B033C0 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18882/*"equipTarget2SkillChange"*/,
           &value,
           (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LODWORD(script) = System_Convert__ToInt32(v6, 0LL);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


bool __fastcall ServantLeaderInfo__IsDataLost(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v10; // x0
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  UserEventDataLostEntity_o *v14; // x20
  __int64 v15; // x19
  __int64 v16; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B033BB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B033BB = 1;
  }
  entity = 0LL;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    byte_4AFC1F1 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_26;
  if ( !UserEventDataLostMaster__TryGetEntity(
          (UserEventDataLostMaster_o *)Master_object,
          &entity,
          v10->static_fields->userIdNumber,
          questRestrictionInfo->fields.dataLostBattleId,
          0LL) )
    return 0;
  v11 = entity;
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  v10 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
  if ( !v11 )
    goto LABEL_26;
  if ( UserEventDataLostEntity__IsRestart(v11, (int32_t)v10, 0LL) )
    return 0;
  v14 = entity;
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  *(_QWORD *)&v20.fields.fakeValue = v15;
  v10 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v20, 0LL);
  if ( !v14 )
LABEL_26:
    sub_1BC3264(v10, v8);
  return UserEventDataLostEntity__IsDataLost(v14, (int32_t)v10, 0LL);
}


bool __fastcall ServantLeaderInfo__IsHideEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsHideEquip(this->fields.npcFlag, 0LL);
}


bool __fastcall ServantLeaderInfo__IsHideSupport(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsHideSupport(this->fields.npcFlag, 0LL);
}


bool __fastcall ServantLeaderInfo__IsNotClassBoardNpc(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsNotClassBoard(this->fields.npcFlag, 0LL);
}


bool __fastcall ServantLeaderInfo__IsNotUsedTreasureDeice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsNotUsedTreasureDevice(this->fields.npcFlag, 0LL);
}


bool __fastcall ServantLeaderInfo__IsNpc(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL);
}


bool __fastcall ServantLeaderInfo__IsSlotRestriction(
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

  if ( (byte_4B033BD & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B033BD = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v13, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsSlotRestrictionForSupport(questRestrictionInfo, v9, limitCount, DispLimitCount, 0LL);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction(
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

  if ( (byte_4B0339C & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B0339C = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v15, 0LL);
  limitCount = this->fields.limitCount;
  v11 = v9;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v12);
  return QuestRestrictionInfo__IsUniqueIndividuality_42397004(
           questRestrictionInfo,
           v11,
           limitCount,
           DispLimitCount,
           npcFollowerInfo,
           0LL);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction_42459132(
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

  if ( (byte_4B0339D & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B0339D = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
  limitCount = this->fields.limitCount;
  v15 = v13;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v16);
  return QuestRestrictionInfo__IsUniqueIndividuality_42398488(
           questRestrictionInfo,
           v15,
           limitCount,
           DispLimitCount,
           partyItem,
           num,
           -1,
           npcFollowerInfo,
           0LL);
}


void __fastcall ServantLeaderInfo__SetEquipImagePartsGroupIdxs(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.imagePartsGroupInfo, 0LL) )
  {
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_42471272(this, this->fields.equipTarget1, v3);
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_42471272(this, this->fields.equipTarget2, v4);
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_42471272(this, this->fields.equipTarget3, v5);
  }
}


void __fastcall ServantLeaderInfo__SetEquipImagePartsGroupIdxs_42471272(
        ServantLeaderInfo_o *this,
        EquipTargetInfo_o *equipTarget,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  Il2CppObject *Master_object; // x0
  __int64 v15; // x23
  __int64 v16; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  Il2CppObject *IntValue; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_TSource__o *imagePartsGroupInfo; // x20
  System_Func_object__bool__o *v21; // x22
  Il2CppObject *v22; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B033BE & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, equipTarget);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_Single_UserImagePartsGroupEntity___, v7);
    sub_1BC3008(&System_Func_UserImagePartsGroupEntity__bool__TypeInfo, v8);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BC3008(&Method_ServantLeaderInfo___c__DisplayClass146_0__SetEquipImagePartsGroupIdxs_b__0__, v10);
    sub_1BC3008(&ServantLeaderInfo___c__DisplayClass146_0_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_20093/*"imagePartsGroupId"*/, v12);
    byte_4B033BE = 1;
  }
  entity = 0LL;
  v13 = sub_1BC3254(ServantLeaderInfo___c__DisplayClass146_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( equipTarget )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
    v16 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
    v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v24.fields.currentCryptoKey = v16;
    *(_QWORD *)&v24.fields.fakeValue = v15;
    IntValue = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v24, 0LL);
    if ( !v17 )
      goto LABEL_17;
    IntValue = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 v17,
                                 &entity,
                                 (int32_t)IntValue,
                                 (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)IntValue & 1) == 0 )
      return;
    if ( !entity )
      goto LABEL_17;
    IntValue = (Il2CppObject *)EntityScriptUtil__GetIntValue(
                                 (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                                 (System_String_o *)StringLiteral_20093/*"imagePartsGroupId"*/,
                                 0,
                                 0LL);
    if ( !v13 )
      goto LABEL_17;
    *(_DWORD *)(v13 + 16) = (_DWORD)IntValue;
    if ( !(_DWORD)IntValue )
      return;
    imagePartsGroupInfo = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.imagePartsGroupInfo;
    v21 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v21,
      (Il2CppObject *)v13,
      Method_ServantLeaderInfo___c__DisplayClass146_0__SetEquipImagePartsGroupIdxs_b__0__,
      0LL);
    IntValue = System_Linq_Enumerable__Single_object__50573364(
                 imagePartsGroupInfo,
                 (System_Func_TSource__bool__o *)v21,
                 (const MethodInfo_303B034 *)Method_System_Linq_Enumerable_Single_UserImagePartsGroupEntity___);
    if ( !IntValue )
LABEL_17:
      sub_1BC3264(IntValue, v19);
    v22 = IntValue;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntValue[1].monitor, 0LL) )
      EquipTargetInfo__SetImagePartsGroupIdxs(equipTarget, (System_Int32_array *)v22[1].monitor, 0LL);
  }
}


void __fastcall ServantLeaderInfo__SetServantNameBySpoilerProtection(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  CGThumbnailListItem_o *p_overwriteServantDetailName; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v19; // x23
  __int64 v20; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  ServantEntity_o *v22; // x21
  const MethodInfo *v23; // x1
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w23
  int32_t v26; // w24
  int32_t LimitCountByDispLimit; // w23
  Il2CppObject *Master_object; // x0
  __int64 v29; // x25
  __int64 v30; // x26
  ServantLimitImageMaster_o *v31; // x24
  struct System_String_o *LimitCountSealedServantName; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x23
  const MethodInfo *v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t CardImageLimitCount; // w22
  int32_t LimitCountByImageLimitCostumeIn; // w22
  Il2CppObject *v41; // x0
  __int64 v42; // x23
  __int64 v43; // x24
  ServantLimitImageMaster_o *v44; // x19
  int32_t ServantLimitCountSealAfter; // w0
  struct System_String_o *overwriteServantName; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4B033B6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B033B6 = 1;
  }
  this->fields.overwriteServantName = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.overwriteServantName, 0, v2, v3);
  p_overwriteServantDetailName = (CGThumbnailListItem_o *)&this->fields.overwriteServantDetailName;
  this->fields.overwriteServantDetailName = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.overwriteServantDetailName, 0, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v20;
  *(_QWORD *)&v47.fields.fakeValue = v19;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v47, 0LL);
  if ( !v21 )
    goto LABEL_28;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v21,
               (int32_t)Instance,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_28;
  v22 = (ServantEntity_o *)Instance;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v23);
    limitCount = this->fields.limitCount;
    v26 = DispLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v26, limitCount, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v31 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v48.fields.currentCryptoKey = v30;
    *(_QWORD *)&v48.fields.fakeValue = v29;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v48, 0LL);
    if ( v31 )
    {
      LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                      v31,
                                      (int32_t)Instance,
                                      LimitCountByDispLimit,
                                      0,
                                      0LL);
      this->fields.overwriteServantName = LimitCountSealedServantName;
      sub_1BC2FAC(
        (CGThumbnailListItem_o *)&this->fields.overwriteServantName,
        (int32_t)LimitCountSealedServantName,
        v33,
        v34);
      v35 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                   this->fields.svtId,
                                   0LL);
      if ( v35 )
      {
        if ( !ServantLimitAddMaster__IsOverwriteSvtDetailName((ServantLimitAddMaster_o *)v35, (int32_t)Instance, 0LL) )
        {
          overwriteServantName = this->fields.overwriteServantName;
          goto LABEL_27;
        }
        CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v36);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v41 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          v43 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v42 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          v44 = (ServantLimitImageMaster_o *)v41;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v49.fields.currentCryptoKey = v43;
          *(_QWORD *)&v49.fields.fakeValue = v42;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v49, 0LL);
          if ( v44 )
          {
            ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v44,
                                           (int32_t)Instance,
                                           LimitCountByImageLimitCostumeIn,
                                           0LL);
            overwriteServantName = ServantEntity__getName(v22, -1, ServantLimitCountSealAfter, 0, 0LL);
LABEL_27:
            p_overwriteServantDetailName->klass = (CGThumbnailListItem_c *)overwriteServantName;
            sub_1BC2FAC(p_overwriteServantDetailName, (int32_t)overwriteServantName, v37, v38);
            return;
          }
        }
      }
    }
LABEL_28:
    sub_1BC3264(Instance, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo__SetTransformData(
        ServantLeaderInfo_o *this,
        int32_t friendshipRank,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  Il2CppObject *Master_object; // x0
  __int64 v20; // x23
  __int64 v21; // x24
  ServantTransformMaster_o *v22; // x22
  void *GrandInfo; // x0
  const MethodInfo *v24; // x1
  AfterTransformSvtInfo_o *v25; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t aftDispLimitCount; // w22
  int32_t v29; // w21
  Il2CppObject *v30; // x23
  ServantLimitMaster_o *v31; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  ServantLimitEntity_o *v34; // x24
  _DWORD *v35; // x25
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x19
  int32_t atkMax; // w22
  int32_t atkBase; // w27
  int v39; // w28
  struct AfterTransformSvtInfo_o *v40; // x19
  int32_t atk; // w28
  int32_t adjustAtk; // w22
  struct AfterTransformSvtInfo_o *v43; // x27
  int32_t v44; // w19
  __int64 v45; // x8
  struct AfterTransformSvtInfo_o *v46; // x19
  int v47; // w24
  __int64 v48; // x8
  Il2CppObject *v49; // x24
  __int64 v50; // x2
  unsigned int v51; // w9
  __int64 v52; // x10
  struct AfterTransformSvtInfo_o *v53; // x8
  __int64 v54; // x10
  __int64 v55; // x9
  Il2CppObject *v56; // x0
  void *v57; // x24
  Il2CppClass *v58; // x25
  ServantTreasureDvcMaster_o *v59; // x23
  int32_t friendshipRanka; // [xsp+Ch] [xbp-74h]
  struct AfterTransformSvtInfo_o **p_afterTransformSvtInfo; // [xsp+10h] [xbp-70h]
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4B03382 & 1) == 0 )
  {
    sub_1BC3008(&AfterTransformSvtInfo_TypeInfo, *(_QWORD *)&friendshipRank);
    sub_1BC3008(&BalanceConfig_TypeInfo, v7);
    sub_1BC3008(&CheckCombineResStatus_TypeInfo, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantExpMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantSkillMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantTransformMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v14);
    sub_1BC3008(&DataManager_TypeInfo, v15);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v17);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    byte_4B03382 = 1;
  }
  entity = 0LL;
  if ( dispLimitCount <= 1 )
    dispLimitCount = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v21;
  *(_QWORD *)&v63.fields.fakeValue = v20;
  GrandInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v63, 0LL);
  if ( !v22 )
    goto LABEL_60;
  if ( !ServantTransformMaster__TryGetEntity(v22, &entity, (int32_t)GrandInfo, dispLimitCount, 0LL) )
    return;
  v25 = (AfterTransformSvtInfo_o *)sub_1BC3254(AfterTransformSvtInfo_TypeInfo);
  AfterTransformSvtInfo___ctor(v25, 0LL);
  this->fields.afterTransformSvtInfo = v25;
  p_afterTransformSvtInfo = &this->fields.afterTransformSvtInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.afterTransformSvtInfo, (int32_t)v25, v26, v27);
  if ( !entity )
    goto LABEL_60;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  v29 = ImageLimitCount__ConvertDispLimitCountForClient(aftDispLimitCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  GrandInfo = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_60;
  if ( !GrandInfo )
    goto LABEL_60;
  friendshipRanka = friendshipRank;
  v30 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)GrandInfo,
          entity->fields.aftSvtId,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  GrandInfo = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v30 )
    goto LABEL_60;
  v31 = (ServantLimitMaster_o *)GrandInfo;
  klass = v30[1].klass;
  monitor = v30[1].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = klass;
  *(_QWORD *)&v64.fields.fakeValue = monitor;
  GrandInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v64, 0LL);
  if ( !v31 )
    goto LABEL_60;
  v34 = ServantLimitMaster__GetEntity(v31, (int32_t)GrandInfo, this->fields.limitCount, 0LL);
  GrandInfo = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantExpMaster___);
  if ( !GrandInfo )
    goto LABEL_60;
  GrandInfo = ServantExpMaster__GetEntity((ServantExpMaster_o *)GrandInfo, HIDWORD(v30[8].klass), this->fields.lv, 0LL);
  if ( !v34 )
    goto LABEL_60;
  v35 = GrandInfo;
  if ( !GrandInfo )
    goto LABEL_60;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  atkBase = v34->fields.atkBase;
  atkMax = v34->fields.atkMax;
  v39 = *((_DWORD *)GrandInfo + 7);
  GrandInfo = CheckCombineResStatus_TypeInfo;
  if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
  if ( !afterTransformSvtInfo )
    goto LABEL_60;
  afterTransformSvtInfo->fields.atk = v39 * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                                    + v34->fields.atkBase;
  v40 = *p_afterTransformSvtInfo;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_60;
  atk = v40->fields.atk;
  adjustAtk = this->fields.adjustAtk;
  GrandInfo = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    GrandInfo = BalanceConfig_TypeInfo;
  }
  v43 = *p_afterTransformSvtInfo;
  v40->fields.atk = atk + *(_DWORD *)(*((_QWORD *)GrandInfo + 23) + 332LL) * adjustAtk;
  if ( !v43 )
    goto LABEL_60;
  v44 = v43->fields.atk;
  GrandInfo = ServantLeaderInfo__get_GrandInfo(this, v24);
  if ( !GrandInfo )
    goto LABEL_60;
  v45 = *((_QWORD *)GrandInfo + 2);
  if ( v45 )
    LODWORD(v45) = *(_DWORD *)(v45 + 32);
  v43->fields.atk = v45 + v44;
  v46 = *p_afterTransformSvtInfo;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_60;
  v47 = (v34->fields.hpMax - v34->fields.hpBase) * v35[7] / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
      + v34->fields.hpBase
      + BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * this->fields.adjustHp;
  v46->fields.hp = v47;
  GrandInfo = ServantLeaderInfo__get_GrandInfo(this, v24);
  if ( !GrandInfo )
    goto LABEL_60;
  v48 = *((_QWORD *)GrandInfo + 2);
  if ( v48 )
    LODWORD(v48) = *(_DWORD *)(v48 + 28);
  v46->fields.hp = v48 + v47;
  v49 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  GrandInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                        (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v30[1],
                        0LL);
  if ( !v49 )
    goto LABEL_60;
  GrandInfo = ServantSkillMaster__getUseEntityList(
                (ServantSkillMaster_o *)v49,
                (int32_t)GrandInfo,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v29,
                -1,
                -1LL,
                0LL);
  if ( !GrandInfo )
    goto LABEL_60;
  v51 = *((_DWORD *)GrandInfo + 6);
  if ( !v51 )
    goto LABEL_61;
  v52 = *((_QWORD *)GrandInfo + 4);
  v53 = this->fields.afterTransformSvtInfo;
  if ( v52 )
    LODWORD(v52) = *(_DWORD *)(v52 + 28);
  if ( !v53 )
    goto LABEL_60;
  v53->fields.skillId1 = v52;
  if ( v51 <= 1 )
    goto LABEL_61;
  v54 = *((_QWORD *)GrandInfo + 5);
  if ( v54 )
    LODWORD(v54) = *(_DWORD *)(v54 + 28);
  v53->fields.skillId2 = v54;
  if ( v51 <= 2 )
LABEL_61:
    sub_1BC326C(GrandInfo, v24, v50);
  v55 = *((_QWORD *)GrandInfo + 6);
  if ( v55 )
    LODWORD(v55) = *(_DWORD *)(v55 + 28);
  v53->fields.skillId3 = v55;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v56 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v58 = v30[1].klass;
  v57 = v30[1].monitor;
  v59 = (ServantTreasureDvcMaster_o *)v56;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v65.fields.currentCryptoKey = v58;
  *(_QWORD *)&v65.fields.fakeValue = v57;
  GrandInfo = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v65, 0LL);
  if ( !v59 )
    goto LABEL_60;
  GrandInfo = ServantTreasureDvcMaster__getUseEntity(
                v59,
                (int32_t)GrandInfo,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v29,
                friendshipRanka,
                -1,
                0LL);
  if ( !GrandInfo )
    return;
  if ( !*p_afterTransformSvtInfo )
LABEL_60:
    sub_1BC3264(GrandInfo, v24);
  (*p_afterTransformSvtInfo)->fields.treasureDeviceId = *((_DWORD *)GrandInfo + 8);
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x22
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x4
  DataManager_o *v15; // x23
  __int64 v16; // x22
  __int64 v17; // x28
  SkillLvEntity_o *v18; // x24
  __int64 v19; // x25
  __int64 v20; // x26
  int32_t v21; // w26
  int32_t limitCount; // w27
  int32_t EventId; // w0
  char v24; // w25
  BalanceConfig_c **v25; // x27
  System_Int32_array *SkillIdList; // x23
  const MethodInfo *v27; // x1
  System_Int32_array *SkillLevelList; // x24
  unsigned __int64 i; // x22
  __int64 v30; // x8
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v32; // x26
  BalanceConfig_c **v33; // x19
  __int64 v34; // x27
  __int64 v35; // x28
  int32_t v36; // w27
  int32_t v37; // w28
  int32_t v38; // w0
  bool EventUpVal; // w0
  int32_t wearesDispLimitCount; // [xsp+14h] [xbp-7Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4B03395 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, setupInfo);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B03395 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v7;
  *(_QWORD *)&v44.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v44, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_38:
    sub_1BC3264(Instance, v9);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  wearesDispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v11);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v12);
  if ( Instance )
  {
    v15 = Instance;
    if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
    {
      v16 = 0LL;
      v17 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
      while ( 1 )
      {
        v9 = *((unsigned int *)&v15->fields._DispLog + v16);
        if ( (int)v9 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_38;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v9, 1, 0LL);
          if ( Instance )
          {
            v18 = (SkillLvEntity_o *)Instance;
            v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v45.fields.currentCryptoKey = v20;
            *(_QWORD *)&v45.fields.fakeValue = v19;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v45, 0LL);
            if ( !setupInfo )
              goto LABEL_38;
            v21 = (int)Instance;
            limitCount = this->fields.limitCount;
            EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            v24 = 1;
            Instance = (DataManager_o *)SkillLvEntity__getEventUpVal(
                                          v18,
                                          v21,
                                          limitCount,
                                          wearesDispLimitCount,
                                          setupInfo,
                                          EventId,
                                          1,
                                          0,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              return v24;
          }
        }
        if ( v17 == v16 )
          break;
        if ( ++v16 >= (unsigned __int64)LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_19:
          sub_1BC326C(Instance, v9, v13);
      }
    }
  }
  v25 = &BalanceConfig_TypeInfo;
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  (ServantLeaderInfo_o *)Instance,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v14);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v27);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)*v25;
    if ( !(*v25)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)*v25;
    }
    v30 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 40LL);
    v24 = (__int64)i < v30;
    if ( (__int64)i >= v30 )
      break;
    if ( !SkillIdList )
      goto LABEL_38;
    if ( i >= SkillIdList->max_length )
      goto LABEL_19;
    v9 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v9 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_38;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_19;
      if ( !MasterData_object )
        goto LABEL_38;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v9, SkillLevelList->m_Items[i + 1], 0LL);
      if ( Entity )
      {
        v32 = Entity;
        v33 = v25;
        v35 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v34 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v35;
        *(_QWORD *)&v46.fields.fakeValue = v34;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v46, 0LL);
        if ( !setupInfo )
          goto LABEL_38;
        v36 = (int)Instance;
        v37 = this->fields.limitCount;
        v38 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
        EventUpVal = SkillLvEntity__getEventUpVal(v32, v36, v37, wearesDispLimitCount, setupInfo, v38, 1, 0, 0LL);
        v25 = v33;
        if ( EventUpVal )
          return v24;
      }
    }
  }
  return v24;
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal_42457396(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x22
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x4
  DataManager_o *v17; // x22
  bool v18; // w23
  __int64 v19; // x24
  __int64 v20; // x25
  System_Int32_array *SkillIdList; // x22
  const MethodInfo *v22; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B03398 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B03398 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v9;
  *(_QWORD *)&v26.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v26, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_37;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1BC3264(Instance, v11);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v14);
  if ( Instance && (v17 = Instance, (int)Instance->fields.m_CancellationTokenSource >= 1) )
  {
    v18 = 0;
    v19 = 0LL;
    v20 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
    while ( 1 )
    {
      v11 = *((unsigned int *)&v17->fields._DispLog + v19);
      if ( (int)v11 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_37;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v11, 1, 0LL);
        if ( Instance )
        {
          Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_41879020(
                                        (SkillLvEntity_o *)Instance,
                                        eventUpVallInfo,
                                        1,
                                        0,
                                        1,
                                        0,
                                        0LL,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v18 = 1;
        }
      }
      if ( v20 == v19 )
        break;
      if ( ++v19 >= (unsigned __int64)LODWORD(v17->fields.m_CancellationTokenSource) )
LABEL_20:
        sub_1BC326C(Instance, v11, v15);
    }
  }
  else
  {
    v18 = 0;
  }
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  (ServantLeaderInfo_o *)Instance,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v16);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v22);
  for ( i = 0LL; ; ++i )
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
    if ( i >= SkillIdList->max_length )
      goto LABEL_20;
    v11 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v11 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_37;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_20;
      if ( !MasterData_object )
        goto LABEL_37;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v11, SkillLevelList->m_Items[i + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_41879020(Entity, eventUpVallInfo, 1, 0, 1, 0, 0LL, 0LL) )
          v18 = 1;
      }
    }
  }
  return v18;
}


int32_t __fastcall ServantLeaderInfo__getCardImageLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x20
  __int64 v8; // x21
  int32_t v9; // w0
  BalanceConfig_c *v10; // x8
  int32_t v11; // w20
  struct BalanceConfig_StaticFields *static_fields; // x9
  int LimitCountWithRandom; // w20
  const MethodInfo *v14; // x2
  bool v15; // vf
  bool v16; // w1
  ServantLeaderInfo_o *v17; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  int32_t v21; // w19
  int32_t v22; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B033AC & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BC3008(&OptionManager_TypeInfo, v5);
    byte_4B033AC = 1;
  }
  if ( ConstantMaster__IsOtherImage(0LL) )
  {
    v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v8;
    *(_QWORD *)&v23.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v23, 0LL);
    v10 = BalanceConfig_TypeInfo;
    v11 = v9;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    static_fields = v10->static_fields;
    if ( v11 < static_fields->ExclusiveNpcServantIdStart )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->OtherImageLimitCount;
    }
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 0, v6);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
    v15 = __OFSUB__(LimitCountWithRandom--, 1);
    if ( LimitCountWithRandom < 0 == v15 )
      return LimitCountWithRandom;
    v16 = 1;
    v17 = this;
    return ServantLeaderInfo__getMaxCardImageLimitCount(v17, v16, v14);
  }
  if ( LimitCountWithRandom >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__GetFriendCostume(0LL) )
      return LimitCountWithRandom;
    goto LABEL_27;
  }
  if ( LimitCountWithRandom < 1 )
  {
LABEL_27:
    v17 = this;
    v16 = 0;
    return ServantLeaderInfo__getMaxCardImageLimitCount(v17, v16, v14);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    --LimitCountWithRandom;
    return LimitCountWithRandom;
  }
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v20;
  *(_QWORD *)&v24.fields.fakeValue = v19;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v24, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v22, v21, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4B033AA & 1) == 0 )
  {
    sub_1BC3008(&OptionManager_TypeInfo, method);
    byte_4B033AA = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 2, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
  }
  else if ( LimitCountWithRandom >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__GetFriendCostume(0LL) )
      return LimitCountWithRandom;
    return ServantLeaderInfo__getMaxCommandCardLimitCount(this, v5);
  }
  v6 = __OFSUB__(LimitCountWithRandom--, 1);
  if ( LimitCountWithRandom < 0 == v6 )
    return LimitCountWithRandom;
  return ServantLeaderInfo__getMaxCommandCardLimitCount(this, v5);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEntity_o *__fastcall ServantLeaderInfo__getCommandCodeEntity(
        ServantLeaderInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CommandCodeStatus_array *commandCode; // x10
  int max_length; // w8
  __int64 v10; // x9
  CommandCodeStatus_o **m_Items; // x10
  CommandCodeStatus_o *v12; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x20
  __int64 v16; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_4B033B3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_1BC3008(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantLeaderInfo_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B033B3 = 1;
  }
  commandCode = v4->fields.commandCode;
  if ( !commandCode )
    return 0LL;
  max_length = commandCode->max_length;
  if ( max_length < 1 )
    return 0LL;
  v10 = 0LL;
  m_Items = commandCode->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
      sub_1BC326C(this, *(_QWORD *)&index, method);
    v12 = m_Items[v10];
    if ( !v12 )
      goto LABEL_16;
    if ( v12->fields.idx == index )
      break;
    if ( (int)++v10 >= max_length )
      return 0LL;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v16 = *(_QWORD *)&v12->fields.commandCodeId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v12->fields.commandCodeId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v16;
  *(_QWORD *)&v18.fields.fakeValue = v15;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v18, 0LL);
  if ( !v17 )
LABEL_16:
    sub_1BC3264(this, *(_QWORD *)&index);
  return (CommandCodeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  v17,
                                  (int32_t)this,
                                  (const MethodInfo_32AF070 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
}


System_Int32_array *__fastcall ServantLeaderInfo__getCommandCodeIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  BalanceConfig_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct CommandCodeStatus_array *commandCode; // x23
  int max_length; // w8
  System_Int32_array *v11; // x19
  int i; // w24
  CommandCodeStatus_o *v13; // x20
  int32_t idx; // w21
  __int64 v15; // x26
  __int64 v16; // x20
  __int64 v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B033B2 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&int___TypeInfo, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4B033B2 = 1;
  }
  if ( !this->fields.commandCode )
    return 0LL;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (BalanceConfig_c *)sub_1BC30B0(int___TypeInfo, (unsigned int)v5->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_23:
    sub_1BC3264(v6, v7);
  max_length = commandCode->max_length;
  v11 = (System_Int32_array *)v6;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_24:
        sub_1BC326C(v6, v7, v8);
      v13 = commandCode->m_Items[i];
      if ( !v13 )
        goto LABEL_23;
      v6 = BalanceConfig_TypeInfo;
      idx = v13->fields.idx;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v6 = BalanceConfig_TypeInfo;
      }
      if ( idx < v6->static_fields->SvtCommandCardMax )
      {
        v15 = v13->fields.idx;
        v17 = *(_QWORD *)&v13->fields.commandCodeId.fields.currentCryptoKey;
        v16 = *(_QWORD *)&v13->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v19.fields.currentCryptoKey = v17;
        *(_QWORD *)&v19.fields.fakeValue = v16;
        v6 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
        if ( !v11 )
          goto LABEL_23;
        if ( (unsigned int)v15 >= v11->max_length )
          goto LABEL_24;
        v11->m_Items[v15 + 1] = (int)v6;
      }
      max_length = commandCode->max_length;
    }
  }
  return v11;
}


int32_t __fastcall ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4B033A6 & 1) == 0 )
  {
    sub_1BC3008(&OptionManager_TypeInfo, method);
    byte_4B033A6 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
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
    if ( OptionManager__GetFriendCostume(0LL) )
      return LimitCountWithRandom;
  }
  else if ( LimitCountWithRandom >= 1 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__GetFriendImageLimitCount(0LL) || LimitCountWithRandom != 3 )
    {
      --LimitCountWithRandom;
      return LimitCountWithRandom;
    }
  }
  return ServantLeaderInfo__getMaxDispLimitCount(this, v5);
}


int32_t __fastcall ServantLeaderInfo__getDispSelectLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  int32_t LimitCountWithRandom; // w20
  int32_t limitCount; // w22
  int32_t v7; // w0
  int32_t v8; // w1
  int32_t v9; // w19

  if ( (byte_4B033A8 & 1) == 0 )
  {
    sub_1BC3008(&ImageLimitCount_TypeInfo, method);
    sub_1BC3008(&OptionManager_TypeInfo, v4);
    byte_4B033A8 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom < 11 )
    {
      limitCount = this->fields.limitCount;
      if ( LimitCountWithRandom >= 1 )
      {
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        v7 = LimitCountWithRandom - 1;
        v8 = limitCount;
        return ImageLimitCount__GetLimitCountByDispLimit(v7, v8, 0LL);
      }
      return limitCount;
    }
    return this->fields.limitCount;
  }
  if ( LimitCountWithRandom >= 11 || LimitCountWithRandom < 1 )
    return this->fields.limitCount;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  limitCount = LimitCountWithRandom;
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    v9 = this->fields.limitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v7 = LimitCountWithRandom - 1;
    v8 = v9;
    return ImageLimitCount__GetLimitCountByDispLimit(v7, v8, 0LL);
  }
  return limitCount;
}


bool __fastcall ServantLeaderInfo__getEquipEventUpVal(
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

  if ( (byte_4B03394 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4B03394 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL) < 1 )
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v17, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v10;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v13);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v12, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEquipExpInfo(
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

  if ( (byte_4B033A3 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp);
    byte_4B033A3 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v15, 0LL) >= 1 )
  {
    v13 = this->fields.equipTarget1;
    if ( !v13 )
      sub_1BC3264(0LL, v12);
    return EquipTargetInfo__getExpInfo(v13, exp, lateExp, barExp, 0LL);
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


void __fastcall ServantLeaderInfo__getEquipSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v8; // x21
  __int64 v9; // x22
  __int64 v10; // x1
  EquipTargetInfo_o *v11; // x0
  BalanceConfig_c *v12; // x0
  SkillInfo_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B0338E & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BC3008(&SkillInfo___TypeInfo, v6);
    byte_4B0338E = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v9 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL) >= 1 )
  {
    v11 = this->fields.equipTarget1;
    if ( !v11 )
      sub_1BC3264(0LL, v10);
    EquipTargetInfo__getSkillInfo(v11, skillInfoList, 0LL);
  }
  else
  {
LABEL_9:
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    v13 = (SkillInfo_array *)sub_1BC30B0(SkillInfo___TypeInfo, (unsigned int)v12->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v13;
    sub_1BC2FAC((CGThumbnailListItem_o *)skillInfoList, (int32_t)v13, v14, v15);
  }
}


bool __fastcall ServantLeaderInfo__getEventUpVal(
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

  if ( (byte_4B03392 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4B03392 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v17, 0LL) < 1 )
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v18, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v13, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEventUpVal_42457020(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x22
  __int64 v9; // x23
  int32_t v10; // w0
  int32_t limitCount; // w22
  int32_t v12; // w23
  const MethodInfo *v13; // x1
  int32_t DispLimitCount; // w0
  int32_t npcFlag; // w24
  int32_t v16; // w25
  EventUpValInfo_o *v17; // x26
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  bool BaseEventUpVal_42457396; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v23; // w21
  EventUpValInfo_o *v24; // x24
  __int64 v25; // x22
  __int64 v26; // x23
  EquipTargetInfo_o *v27; // x0
  __int64 v28; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B03396 & 1) == 0 )
  {
    sub_1BC3008(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B03396 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v9;
  *(_QWORD *)&v30.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v30, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v10;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v13);
  npcFlag = this->fields.npcFlag;
  v16 = DispLimitCount;
  v17 = (EventUpValInfo_o *)sub_1BC3254(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v17, setupInfo, v12, limitCount, v16, npcFlag, 0LL);
  *eventUpVallInfo = v17;
  sub_1BC2FAC((CGThumbnailListItem_o *)eventUpVallInfo, (int32_t)v17, v18, v19);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(this->fields.svtId, 0LL) < 1 )
    return 0;
  BaseEventUpVal_42457396 = ServantLeaderInfo__getBaseEventUpVal_42457396(this, eventUpVallInfo, v20);
  equipTarget1 = this->fields.equipTarget1;
  v23 = BaseEventUpVal_42457396;
  if ( !equipTarget1 )
    return v23;
  v24 = *eventUpVallInfo;
  v26 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v26;
  *(_QWORD *)&v31.fields.fakeValue = v25;
  v27 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v31, 0LL);
  if ( !v24 || (v24->fields.equipSvtId = (int)v27, (v27 = this->fields.equipTarget1) == 0LL) )
    sub_1BC3264(v27, v28);
  return (v23 | EquipTargetInfo__getEventUpVal_40733308(v27, eventUpVallInfo, 1, 0LL)) & 1;
}


bool __fastcall ServantLeaderInfo__getEventUpVal_42458008(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool *isServantEventUpVal,
        bool *isEquipEventUpVal,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x24
  __int64 v13; // x25
  int32_t v14; // w0
  int32_t limitCount; // w24
  int32_t v16; // w25
  const MethodInfo *v17; // x1
  int32_t DispLimitCount; // w0
  int32_t npcFlag; // w26
  int32_t v20; // w27
  EventUpValInfo_o *v21; // x28
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v26; // x25
  __int64 v27; // x23
  __int64 v28; // x24
  EquipTargetInfo_o *v29; // x0
  __int64 v30; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B03397 & 1) == 0 )
  {
    sub_1BC3008(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4B03397 = 1;
  }
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v13;
  *(_QWORD *)&v32.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v32, 0LL);
  limitCount = this->fields.limitCount;
  v16 = v14;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v17);
  npcFlag = this->fields.npcFlag;
  v20 = DispLimitCount;
  v21 = (EventUpValInfo_o *)sub_1BC3254(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v21, setupInfo, v16, limitCount, v20, npcFlag, 0LL);
  *eventUpVallInfo = v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)eventUpVallInfo, (int32_t)v21, v22, v23);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(this->fields.svtId, 0LL) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_42457396(this, eventUpVallInfo, v24) )
      *isServantEventUpVal = 1;
    equipTarget1 = this->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v26 = *eventUpVallInfo;
      v28 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v33.fields.currentCryptoKey = v28;
      *(_QWORD *)&v33.fields.fakeValue = v27;
      v29 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v33, 0LL);
      if ( !v26 || (v26->fields.equipSvtId = (int)v29, (v29 = this->fields.equipTarget1) == 0LL) )
        sub_1BC3264(v29, v30);
      if ( EquipTargetInfo__getEventUpVal_40733308(v29, eventUpVallInfo, 1, 0LL) )
        *isEquipEventUpVal = 1;
    }
  }
  return *isEquipEventUpVal || *isServantEventUpVal;
}


bool __fastcall ServantLeaderInfo__getExpInfo(
        ServantLeaderInfo_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x24
  __int64 v17; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v20; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v22; // x24
  int m_CancellationTokenSource; // w25
  float v24; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B033A2 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B033A2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v17;
  *(_QWORD *)&v26.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v26, 0LL);
  if ( !v18 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v18,
             (int32_t)Instance,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v20) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v22 = (ServantExpMaster_o *)Instance;
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
                                    0LL);
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v22, HIDWORD(Entity[8].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
      v24 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_20;
    }
LABEL_21:
    sub_1BC3264(Instance, v14);
  }
  v24 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_20:
  *barExp = v24;
  return 1;
}


int32_t __fastcall ServantLeaderInfo__getFrameType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantExceedMaster_o *v11; // x20
  int32_t FrameType_41669540; // w20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B033A4 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B033A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantExceedMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL);
  if ( !v11
    || (FrameType_41669540 = ServantExceedMaster__GetFrameType_41669540(
                               v11,
                               (int32_t)Instance,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               this->fields.grandSvt != 0,
                               0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v14),
        !v13) )
  {
LABEL_10:
    sub_1BC3264(Instance, v7);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v13,
           (int32_t)Instance,
           this->fields.lv,
           FrameType_41669540,
           this->fields.grandSvt != 0,
           0LL);
}


int32_t __fastcall ServantLeaderInfo__getIconLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  int LimitCountWithRandom; // w20
  const MethodInfo *v7; // x2
  bool v8; // vf
  bool v9; // w1
  ServantLeaderInfo_o *v10; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w19
  int32_t v15; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B033AE & 1) == 0 )
  {
    sub_1BC3008(&ImageLimitCount_TypeInfo, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BC3008(&OptionManager_TypeInfo, v5);
    byte_4B033AE = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 3, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
    v8 = __OFSUB__(LimitCountWithRandom--, 1);
    if ( LimitCountWithRandom < 0 == v8 )
      return LimitCountWithRandom;
    v9 = 1;
    v10 = this;
    return ServantLeaderInfo__getMaxIconLimitCount(v10, v9, v7);
  }
  if ( LimitCountWithRandom >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__GetFriendCostume(0LL) )
      return LimitCountWithRandom;
    goto LABEL_18;
  }
  if ( LimitCountWithRandom < 1 )
  {
LABEL_18:
    v10 = this;
    v9 = 0;
    return ServantLeaderInfo__getMaxIconLimitCount(v10, v9, v7);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    --LimitCountWithRandom;
    return LimitCountWithRandom;
  }
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v13;
  *(_QWORD *)&v16.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v15, v14, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getLevelMax(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  ServantLimitMaster_o *v13; // x20
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v15; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B03383 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B03383 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v18, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
  if ( !v13
    || (Entity = ServantLimitMaster__GetEntity(v13, (int32_t)Instance, this->fields.limitCount, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_17:
    sub_1BC3264(Instance, v9);
  }
  v15 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0LL);
  lvMax = Entity->fields.lvMax;
  if ( v15 )
    lvMax += v15->fields.addLvMax;
  return lvMax;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__getMaxCardImageLimitCount(
        ServantLeaderInfo_o *this,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  int32_t limitCount; // w20
  int32_t v10; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B033AD & 1) == 0 )
  {
    sub_1BC3008(&ImageLimitCount_TypeInfo, isNpc);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B033AD = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v12, 0LL);
  limitCount = this->fields.limitCount;
  v10 = v8;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetCardImageLimitCount(v10, limitCount, 0, isNpc, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  int32_t limitCount; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B033AB & 1) == 0 )
  {
    sub_1BC3008(&ImageLimitCount_TypeInfo, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4B033AB = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v10, 0LL);
  limitCount = this->fields.limitCount;
  v8 = v6;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v8, limitCount, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  int32_t limitCount; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B033A7 & 1) == 0 )
  {
    sub_1BC3008(&ImageLimitCount_TypeInfo, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4B033A7 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v10, 0LL);
  limitCount = this->fields.limitCount;
  v8 = v6;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v8, limitCount, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__getMaxIconLimitCount(
        ServantLeaderInfo_o *this,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  int32_t limitCount; // w20
  int32_t v10; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B033AF & 1) == 0 )
  {
    sub_1BC3008(&ImageLimitCount_TypeInfo, isNpc);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B033AF = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v12, 0LL);
  limitCount = this->fields.limitCount;
  v10 = v8;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetCardImageLimitCount(v10, limitCount, 0, isNpc, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  int32_t limitCount; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B033B1 & 1) == 0 )
  {
    sub_1BC3008(&ImageLimitCount_TypeInfo, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4B033B1 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v10, 0LL);
  limitCount = this->fields.limitCount;
  v8 = v6;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v8, limitCount, 0LL);
}


System_Int32_array *__fastcall ServantLeaderInfo__getPassiveSkillIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
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

  if ( (byte_4B03389 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B03389 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v4;
  *(_QWORD *)&v13.fields.fakeValue = v3;
  v5 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v13, 0LL);
  classPassive = this->fields.classPassive;
  p_classPassive = (CGThumbnailListItem_o *)&this->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(v5, (int32_t)v5, classPassive, v8);
  p_classPassive->klass = (CGThumbnailListItem_c *)PassiveSkillIdList;
  sub_1BC2FAC(p_classPassive, (int32_t)PassiveSkillIdList, v10, v11);
  return (System_Int32_array *)p_classPassive->klass;
}


void __fastcall ServantLeaderInfo__getPassiveSkillInfo(
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
  sub_1BC2FAC((CGThumbnailListItem_o *)idList, (int32_t)PassiveSkillIdList, v9, v10);
  ServantLeaderInfo__GetPassiveSkillInfo(v11, titleList, explanationList, *idList, v12);
}


int32_t __fastcall ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4B033B0 & 1) == 0 )
  {
    sub_1BC3008(&OptionManager_TypeInfo, method);
    byte_4B033B0 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 4, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
  }
  else if ( LimitCountWithRandom >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__GetFriendCostume(0LL) )
      return LimitCountWithRandom;
    return ServantLeaderInfo__getMaxPortraitLimitCount(this, v5);
  }
  v6 = __OFSUB__(LimitCountWithRandom--, 1);
  if ( LimitCountWithRandom < 0 == v6 )
    return LimitCountWithRandom;
  return ServantLeaderInfo__getMaxPortraitLimitCount(this, v5);
}


bool __fastcall ServantLeaderInfo__getQuestRestriction(
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

  if ( (byte_4B03399 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B03399 = 1;
  }
  if ( !questRestrictionInfo || NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
    return 0;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v7;
  *(_QWORD *)&v16.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL);
  limitCount = this->fields.limitCount;
  v10 = v8;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v11);
  OverwriteStatus = ServantLeaderInfo__GetOverwriteStatus(this, v13);
  if ( !OverwriteStatus )
    sub_1BC3264(0LL, v15);
  return QuestRestrictionInfo__IsRestriction_42392700(
           questRestrictionInfo,
           v10,
           limitCount,
           DispLimitCount,
           OverwriteStatus->fields._Rarity_k__BackingField,
           this->fields.lv,
           2,
           0LL);
}


int32_t __fastcall ServantLeaderInfo__getRarity(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B03385 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B03385 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v12, 0LL);
  if ( !v10 || (Instance = ServantLimitMaster__GetEntity(v10, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_9:
    sub_1BC3264(Instance, v6);
  return *((_DWORD *)Instance + 6);
}


bool __fastcall ServantLeaderInfo__getServantEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  const MethodInfo *v7; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4B03393 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4B03393 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v9, 0LL) >= 1
      && ServantLeaderInfo__getBaseEventUpVal(this, setupInfo, v7);
}


int32_t __fastcall ServantLeaderInfo__getServantLevel(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *__fastcall ServantLeaderInfo__getSkillIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantLeaderInfo__GetSkillIdList(
           this,
           this->fields.skillId1,
           this->fields.skillId2,
           this->fields.skillId3,
           v2);
}


void __fastcall ServantLeaderInfo__getSkillInfo(
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

  if ( (byte_4B0338C & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
    byte_4B0338C = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v12, 0LL);
  v8 = (int)v7;
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  v7,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v9);
  ServantLeaderInfo__GetSkillInfo(this, skillInfoList, v8, SkillIdList, v11);
}


System_Int32_array *__fastcall ServantLeaderInfo__getSkillLevelList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  System_Int32_array *result; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B03388 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&int___TypeInfo, v3);
    byte_4B03388 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)v4->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1BC3264(0LL, v6);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillLv2, max_length <= 2) )
  {
    sub_1BC326C(result, v6, v7);
  }
  result->m_Items[3] = this->fields.skillLv3;
  return result;
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo(
        ServantLeaderInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  const MethodInfo *v8; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B0339E & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
    byte_4B0339E = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v10, 0LL);
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, v7, this->fields.treasureDeviceId, v8);
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo_42459960(
        ServantLeaderInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t klass; // w8

  if ( (byte_4B033A0 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_TreasureDvcMaster___, tdLv);
    sub_1BC3008(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    byte_4B033A0 = 1;
  }
  *tdLv = this->fields.treasureDeviceLv;
  if ( this->fields.treasureDeviceId < 1 )
  {
    klass = 0;
    LOBYTE(Entity) = 0;
  }
  else
  {
    v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C1346C(v4);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C1346C(v4);
    MasterData_object = **(Il2CppObject ***)(v11 + 184);
    if ( !MasterData_object
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)MasterData_object,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
    {
      sub_1BC3264(MasterData_object, tdLv);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               this->fields.treasureDeviceId,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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


int32_t __fastcall ServantLeaderInfo__getTreasureDeviceLevelIcon(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t treasureDeviceLv; // w8

  if ( (byte_4B033A1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_4B033A1 = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1346C(v2);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1346C(v2);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_1BC3264(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.treasureDeviceId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  if ( treasureDeviceLv >= SLODWORD(Entity[3].klass) )
    return 2;
  return treasureDeviceLv > 1;
}


bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4B0339A & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B0339A = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v9, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_42396476(questRestrictionInfo, v7, 0LL);
}


bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction_42458784(
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

  if ( (byte_4B0339B & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4B0339B = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v13, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_42396676(questRestrictionInfo, v11, partyItem, num, -1, 0LL);
}


int32_t __fastcall ServantLeaderInfo__get_AtkBoostValue(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustAtk; // w20
  int32_t StatusUpAdjustAtk; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1
  struct GrandGraphDetailEntity_o *svtGrandDetailEntity; // x8

  if ( (byte_4B0337F & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4B0337F = 1;
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
    sub_1BC3264(0LL, v7);
  svtGrandDetailEntity = GrandInfo->fields.svtGrandDetailEntity;
  if ( svtGrandDetailEntity )
    LODWORD(svtGrandDetailEntity) = svtGrandDetailEntity->fields.adjustAtk;
  return (_DWORD)svtGrandDetailEntity + StatusUpAdjustAtk * adjustAtk;
}


UserServantGrandInfo_o *__fastcall ServantLeaderInfo__get_GrandInfo(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  struct UserServantGrandInfo_o *grandInfo; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B0337D & 1) == 0 )
  {
    sub_1BC3008(&UserServantGrandInfo_TypeInfo, method);
    byte_4B0337D = 1;
  }
  grandInfo = this->fields.grandInfo;
  if ( !grandInfo )
  {
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    grandInfo = UserServantGrandInfo__Make_42445700(this, method);
    this->fields.grandInfo = grandInfo;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.grandInfo, (int32_t)grandInfo, v4, v5);
  }
  return grandInfo;
}


int32_t __fastcall ServantLeaderInfo__get_HpBoostValue(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustHp; // w20
  int32_t StatusUpAdjustHp; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1
  struct GrandGraphDetailEntity_o *svtGrandDetailEntity; // x8

  if ( (byte_4B0337E & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4B0337E = 1;
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
    sub_1BC3264(0LL, v7);
  svtGrandDetailEntity = GrandInfo->fields.svtGrandDetailEntity;
  if ( svtGrandDetailEntity )
    LODWORD(svtGrandDetailEntity) = svtGrandDetailEntity->fields.adjustHp;
  return (_DWORD)svtGrandDetailEntity + StatusUpAdjustHp * adjustHp;
}


bool __fastcall ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B0338B & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B0338B = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v7, 0LL) > 0;
}


bool __fastcall ServantLeaderInfo__get_IsGrandSvt(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return this->fields.grandSvt != 0;
}


bool __fastcall ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_4B0337C & 1) == 0 )
  {
    sub_1BC3008(&RandomLimitCountManager_TypeInfo, method);
    byte_4B0337C = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4AFDD7C )
  {
    sub_1BC3008(&RandomLimitCountManager_TypeInfo, method);
    byte_4AFDD7C = 1;
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
      randomLimitCountTargets = *(struct System_Int32_array **)&randomLimitCountTargets->max_length;
      if ( randomLimitCountTargets )
        LOBYTE(randomLimitCountTargets) = !NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL);
    }
  }
  return (unsigned __int8)randomLimitCountTargets & 1;
}


int32_t __fastcall ServantLeaderInfo__get_TransformedAtk(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
    return afterTransformSvtInfo->fields.atk;
  else
    return 0;
}


int32_t __fastcall ServantLeaderInfo__get_TransformedHp(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
    return afterTransformSvtInfo->fields.hp;
  else
    return 0;
}


void __fastcall ServantLeaderInfo___c__DisplayClass146_0___ctor(
        ServantLeaderInfo___c__DisplayClass146_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantLeaderInfo___c__DisplayClass146_0___SetEquipImagePartsGroupIdxs_b__0(
        ServantLeaderInfo___c__DisplayClass146_0_o *this,
        UserImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BC3264(this, 0LL);
  return entity->fields.id == this->fields.scriptImageValue;
}