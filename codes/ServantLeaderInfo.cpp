void __fastcall ServantLeaderInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FFCE9 & 1) == 0 )
  {
    sub_1B64A00(&ServantLeaderInfo_TypeInfo, v1);
    byte_49FFCE9 = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo___ctor_40155660(
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
  int32_t v21; // w22
  __int64 v22; // x8
  __int64 v23; // x0
  Il2CppObject *MasterData_object; // x23
  unsigned int v25; // w8
  __int64 v26; // x9
  __int64 v27; // x9
  __int64 v28; // x8
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x0
  __int64 v32; // x0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x2

  if ( (byte_49FFCAD & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v11);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FFCAD = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, 0LL);
  if ( !Instance )
    goto LABEL_39;
  this->fields.hp = *((_DWORD *)Instance + 9);
  v19 = *((_DWORD *)Instance + 11);
  this->fields.adjustAtk = 0;
  this->fields.adjustHp = 0;
  this->fields.atk = v19;
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(this, v17);
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v21 = MaxDispLimitCount;
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1BB68DC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1BB68DC(v23);
  Instance = **(void ***)(v23 + 184);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(this->fields.svtId, 0LL);
  if ( !MasterData_object )
    goto LABEL_39;
  Instance = ServantSkillMaster__getUseEntityList(
               (ServantSkillMaster_o *)MasterData_object,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               v21,
               -1,
               -1LL,
               0LL);
  if ( !Instance )
    goto LABEL_39;
  v25 = *((_DWORD *)Instance + 6);
  if ( !v25 )
    goto LABEL_40;
  v26 = *((_QWORD *)Instance + 4);
  if ( v26 )
    LODWORD(v26) = *(_DWORD *)(v26 + 28);
  this->fields.skillId1 = v26;
  if ( v25 <= 1 )
    goto LABEL_40;
  v27 = *((_QWORD *)Instance + 5);
  if ( v27 )
    LODWORD(v27) = *(_DWORD *)(v27 + 28);
  this->fields.skillId2 = v27;
  if ( v25 <= 2 )
LABEL_40:
    sub_1B64C64(Instance, v17);
  v28 = *((_QWORD *)Instance + 6);
  if ( v28 )
    LODWORD(v28) = *(_DWORD *)(v28 + 28);
  this->fields.skillId3 = v28;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_39;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    goto LABEL_36;
  v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1BB68DC(v31);
  v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1BB68DC(v32);
  Instance = **(void ***)(v32 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL )
  {
LABEL_39:
    sub_1B64C5C(Instance, v17);
  }
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)Instance,
                svtId,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v21,
                0,
                -1,
                0LL);
  if ( UseEntity )
    this->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
LABEL_36:
  this->fields.equipTarget1 = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.equipTarget1, 0, v29, v30);
  this->fields.randomLimitCountTargets = 0LL;
  *(_QWORD *)&this->fields.imageLimitCount = 0LL;
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.updatedAt = 0LL;
  this->fields.portraitLimitCount = 0;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.randomLimitCountTargets, 0, v34, v35);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    ServantLeaderInfo__SetTransformData(this, 0, v36);
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
  int32_t v10; // w3
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
  int32_t v35; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_49FFCDF & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1B64A00(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64A00(&OptionManager_TypeInfo, v5);
    byte_49FFCDF = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v36, 0LL) >= 1 )
    {
      v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v8,
        (const MethodInfo_311CDE4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v8;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.limitChangeDic, (int32_t)v8, v9, v10);
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
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.limitChangeDic, 0, v34, v35);
    }
  }
}


// positive sp value has been detected, the output may be wrong!
void __fastcall ServantLeaderInfo__Finalize(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.equipTarget1 = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.equipTarget1, 0, v2, v3);
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
  if ( (byte_49FFCE2 & 1) == 0 )
  {
    sub_1B64A00(&ServantLeaderInfo_TypeInfo, *(_QWORD *)&orgLimitCount);
    byte_49FFCE2 = 1;
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

  if ( (byte_49FFCB1 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B64A00(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v13);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FFCB1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v20;
  *(_QWORD *)&v27.fields.fakeValue = v19;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v27, 0LL);
  if ( !v21 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v21,
               (int32_t)Instance,
               (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v23),
        !v22) )
  {
LABEL_15:
    sub_1B64C5C(Instance, v17);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                        (int32_t)Instance,
                        (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
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
  int32_t v29; // w3
  struct System_String_o *MasterName_k__BackingField; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x25
  System_Int32_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Boolean_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Int32_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x27
  il2cpp_array_size_t v48; // w19
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x11
  int max_length; // w8
  __int64 v51; // x9
  __int64 v52; // x10
  AppendPassiveSkillInfo_o **m_Items; // x11
  AppendPassiveSkillInfo_o *v54; // x29
  __int64 v55; // x20
  __int64 v56; // x8
  System_Int32_array *v57; // x9
  SkillEntity_o *v58; // x28
  System_Int32_array *v59; // x8
  System_String_array *v60; // x22
  int32_t v61; // w2
  int32_t v62; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x1
  Il2CppClass **v64; // x0
  System_String_array *v65; // x22
  int32_t v66; // w2
  int32_t v67; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // x1
  Il2CppClass **v69; // x0
  System_Boolean_array *v70; // x8
  char v71; // w9
  System_String_array *v72; // x22
  int32_t v73; // w2
  int32_t v74; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v75; // x1
  Il2CppClass **v76; // x0
  System_String_array *v77; // x28
  int32_t v78; // w2
  int32_t v79; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v80; // x1
  Il2CppClass **v81; // x0
  System_String_array *v82; // x8
  System_String_array *v83; // x8
  ServantStatusBattleListViewItem_o *v84; // x28
  System_String_o *sortValue0; // t1
  System_String_o *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_array *v89; // x8
  Il2CppClass **v90; // x28
  ServantStatusBattleListViewItem_o *v91; // x28
  System_String_o *v92; // x29
  System_String_o *v93; // t1
  System_String_o *v94; // x0
  System_String_o *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  struct AppendPassiveSkillInfo_array *v98; // x8
  int32_t v99; // w2
  int32_t v100; // w3
  int32_t v101; // w2
  int32_t v102; // w3
  int32_t v103; // w2
  int32_t v104; // w3
  int32_t v105; // w2
  int32_t v106; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  if ( (byte_49FFCE3 & 1) == 0 )
  {
    sub_1B64A00(&bool___TypeInfo, idList);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, v10);
    sub_1B64A00(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1B64A00(&DataManager_TypeInfo, v12);
    sub_1B64A00(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1B64A00(&int___TypeInfo, v14);
    sub_1B64A00(&LocalizationManager_TypeInfo, v15);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B64A00(&string___TypeInfo, v17);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v18);
    sub_1B64A00(&StringLiteral_3779/*"COND_TYPE_TITLE"*/, v19);
    sub_1B64A00(&StringLiteral_3767/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_1B64A00(&StringLiteral_1/*""*/, v21);
    byte_49FFCE3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v110.fields.currentCryptoKey = v24;
  *(_QWORD *)&v110.fields.fakeValue = v23;
  EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                                        v110,
                                                                        0LL);
  if ( !v25
    || (EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                                                              v25,
                                                                              (int32_t)EntityListFromSvtId,
                                                                              0LL)) == 0LL )
  {
LABEL_67:
    sub_1B64C5C(EntityListFromSvtId, v27);
  }
  MasterName_k__BackingField = EntityListFromSvtId->fields._MasterName_k__BackingField;
  v31 = EntityListFromSvtId;
  if ( MasterName_k__BackingField || (v98 = this->fields.appendPassiveSkill) != 0LL && *(_QWORD *)&v98->max_length )
  {
    v32 = (System_Int32_array *)sub_1B64AA8(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *idList = v32;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)idList, (int32_t)v32, v33, v34);
    v35 = (System_String_array *)sub_1B64AA8(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *titleList = v35;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v35, v36, v37);
    v38 = (System_String_array *)sub_1B64AA8(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *explanationList = v38;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v38, v39, v40);
    v41 = (System_Boolean_array *)sub_1B64AA8(bool___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *releaseStateList = v41;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v41, v42, v43);
    v44 = (System_Int32_array *)sub_1B64AA8(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *lvList = v44;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v44, v45, v46);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v47 = EntityListFromSvtId;
      v48 = 0;
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
        v54 = 0LL;
LABEL_24:
        if ( v48 >= LODWORD(v31->fields._MasterName_k__BackingField) )
          goto LABEL_68;
        v55 = (int)v48;
        v56 = *((_QWORD *)&v31->fields.list + (int)v48);
        if ( !v56 )
          goto LABEL_67;
        v57 = *idList;
        if ( !*idList )
          goto LABEL_67;
        if ( v48 >= v57->max_length )
          goto LABEL_68;
        v27 = *(unsigned int *)(v56 + 28);
        v57->m_Items[v48 + 1] = v27;
        if ( !v47 )
          goto LABEL_67;
        EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                              v47,
                                                                              v27,
                                                                              (const MethodInfo_30D6798 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v58 = (SkillEntity_o *)EntityListFromSvtId;
        v59 = *lvList;
        if ( v54 )
        {
          if ( !v59 )
            goto LABEL_67;
          if ( v48 >= v59->max_length )
            goto LABEL_68;
          v59->m_Items[v48 + 1] = v54->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v60 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                v54->fields.skillLv,
                                                                                0LL);
          if ( !v60 )
            goto LABEL_67;
          if ( v48 >= v60->max_length )
            goto LABEL_68;
          v63 = EntityListFromSvtId;
          v64 = &v60->obj.klass + (int)v48;
          v64[4] = (Il2CppClass *)v63;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v63, v61, v62);
          v65 = *explanationList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                                v58,
                                                                                v54->fields.skillLv,
                                                                                0LL);
          if ( !v65 )
            goto LABEL_67;
          if ( v48 >= v65->max_length )
            goto LABEL_68;
          v68 = EntityListFromSvtId;
          v69 = &v65->obj.klass + (int)v48;
          v69[4] = (Il2CppClass *)v68;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v69 + 4), (int32_t)v68, v66, v67);
          v70 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v48 >= v70->max_length )
            goto LABEL_68;
          v71 = 1;
        }
        else
        {
          if ( !v59 )
            goto LABEL_67;
          if ( v48 >= v59->max_length )
            goto LABEL_68;
          v59->m_Items[v48 + 1] = -1;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v72 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                -1,
                                                                                0LL);
          if ( !v72 )
            goto LABEL_67;
          if ( v48 >= v72->max_length )
            goto LABEL_68;
          v75 = EntityListFromSvtId;
          v76 = &v72->obj.klass + (int)v48;
          v76[4] = (Il2CppClass *)v75;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v76 + 4), (int32_t)v75, v73, v74);
          v77 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3779/*"COND_TYPE_TITLE"*/,
                                                                                0LL);
          if ( !v77 )
            goto LABEL_67;
          if ( v48 >= v77->max_length )
            goto LABEL_68;
          v80 = EntityListFromSvtId;
          v81 = &v77->obj.klass + (int)v48;
          v81[4] = (Il2CppClass *)v80;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v80, v78, v79);
          v82 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v48 >= v82->max_length )
            goto LABEL_68;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                                v82->m_Items[v48],
                                                                                (System_String_o *)StringLiteral_1/*""*/,
                                                                                0LL);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v83 = *explanationList;
            if ( !*explanationList )
              goto LABEL_67;
            if ( v48 >= v83->max_length )
              goto LABEL_68;
            v84 = (ServantStatusBattleListViewItem_o *)(&v83->obj.klass + (int)v48);
            sortValue0 = (System_String_o *)v84->fields.sortValue0;
            v84 = (ServantStatusBattleListViewItem_o *)((char *)v84 + 32);
            v86 = System_String__Concat_61385136(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            v84->klass = (ServantStatusBattleListViewItem_c *)v86;
            sub_1B649A4(v84, (int32_t)v86, v87, v88);
          }
          v89 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v48 >= v89->max_length )
            goto LABEL_68;
          v90 = &v89->obj.klass + (int)v48;
          v93 = (System_String_o *)v90[4];
          v91 = (ServantStatusBattleListViewItem_o *)(v90 + 4);
          v92 = v93;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v94 = LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v95 = System_String__Concat_61385136(v92, v94, 0LL);
          v91->klass = (ServantStatusBattleListViewItem_c *)v95;
          sub_1B649A4(v91, (int32_t)v95, v96, v97);
          v70 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v48 >= v70->max_length )
            goto LABEL_68;
          v71 = 0;
        }
        ++v48;
        v70->m_Items[v55 + 4] = v71;
        if ( v48 == (_DWORD)MasterName_k__BackingField )
          return;
      }
      v51 = 0LL;
      v52 = (__int64)(&v31->fields.list + (int)v48);
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v51 < max_length )
      {
        v54 = m_Items[v51];
        if ( !v54 )
          goto LABEL_67;
        if ( v48 >= LODWORD(v31->fields._MasterName_k__BackingField) )
          break;
        if ( !*(_QWORD *)v52 )
          goto LABEL_67;
        if ( v54->fields.skillId == *(_DWORD *)(*(_QWORD *)v52 + 28LL) )
          goto LABEL_24;
        if ( (int)++v51 >= max_length )
          goto LABEL_23;
      }
LABEL_68:
      sub_1B64C64(EntityListFromSvtId, v27);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)idList, 0, v28, v29);
    *titleList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)titleList, 0, v99, v100);
    *explanationList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)explanationList, 0, v101, v102);
    *releaseStateList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)releaseStateList, 0, v103, v104);
    *lvList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)lvList, 0, v105, v106);
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
  int32_t v26; // w3
  System_String_array *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_array *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Boolean_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Int32_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 skillId; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x26
  il2cpp_array_size_t v42; // w29
  struct AppendPassiveSkillInfo_array *v43; // x8
  __int64 v44; // x19
  AppendPassiveSkillInfo_o *v45; // x8
  System_Int32_array *v46; // x9
  struct AppendPassiveSkillInfo_array *v47; // x8
  AppendPassiveSkillInfo_o *v48; // x8
  int skillLv; // w10
  SkillEntity_o *v50; // x27
  System_Int32_array *v51; // x9
  System_String_array *v52; // x28
  int32_t v53; // w2
  int32_t v54; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x1
  Il2CppClass **v56; // x0
  struct AppendPassiveSkillInfo_array *v57; // x8
  AppendPassiveSkillInfo_o *v58; // x8
  System_String_array *v59; // x28
  int32_t v60; // w2
  int32_t v61; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // x1
  Il2CppClass **v63; // x0
  System_Boolean_array *v64; // x8
  char v65; // w9
  System_String_array *v66; // x28
  int32_t v67; // w2
  int32_t v68; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v69; // x1
  Il2CppClass **v70; // x0
  System_String_array *v71; // x27
  int32_t v72; // w2
  int32_t v73; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x1
  Il2CppClass **v75; // x0
  System_String_array *v76; // x8
  System_String_array *v77; // x8
  ServantStatusBattleListViewItem_o *v78; // x27
  System_String_o *sortValue0; // t1
  System_String_o *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_array *v83; // x8
  Il2CppClass **v84; // x27
  ServantStatusBattleListViewItem_o *v85; // x27
  System_String_o *v86; // x28
  System_String_o *v87; // t1
  System_String_o *v88; // x0
  System_String_o *v89; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  int32_t v92; // w2
  int32_t v93; // w3
  int32_t v94; // w2
  int32_t v95; // w3
  int32_t v96; // w2
  int32_t v97; // w3
  int32_t v98; // w2
  int32_t v99; // w3

  if ( (byte_49FFCE4 & 1) == 0 )
  {
    sub_1B64A00(&bool___TypeInfo, idList);
    sub_1B64A00(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_1B64A00(&DataManager_TypeInfo, v13);
    sub_1B64A00(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1B64A00(&int___TypeInfo, v15);
    sub_1B64A00(&LocalizationManager_TypeInfo, v16);
    sub_1B64A00(&string___TypeInfo, v17);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v18);
    sub_1B64A00(&StringLiteral_3779/*"COND_TYPE_TITLE"*/, v19);
    sub_1B64A00(&StringLiteral_3767/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_1B64A00(&StringLiteral_1/*""*/, v21);
    byte_49FFCE4 = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (v23 = *(_QWORD *)&appendPassiveSkill->max_length) != 0 )
  {
    v24 = (System_Int32_array *)sub_1B64AA8(int___TypeInfo, (unsigned int)v23);
    *idList = v24;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)idList, (int32_t)v24, v25, v26);
    v27 = (System_String_array *)sub_1B64AA8(string___TypeInfo, (unsigned int)v23);
    *titleList = v27;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v27, v28, v29);
    v30 = (System_String_array *)sub_1B64AA8(string___TypeInfo, (unsigned int)v23);
    *explanationList = v30;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v30, v31, v32);
    v33 = (System_Boolean_array *)sub_1B64AA8(bool___TypeInfo, (unsigned int)v23);
    *releaseStateList = v33;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v33, v34, v35);
    v36 = (System_Int32_array *)sub_1B64AA8(int___TypeInfo, (unsigned int)v23);
    *lvList = v36;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v36, v37, v38);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v23 >= 1 )
    {
      v41 = Master_object;
      v42 = 0;
      while ( 1 )
      {
        v43 = this->fields.appendPassiveSkill;
        if ( !v43 )
          break;
        if ( v42 >= v43->max_length )
          goto LABEL_58;
        v44 = (int)v42;
        v45 = v43->m_Items[v42];
        if ( !v45 )
          break;
        v46 = *idList;
        if ( !*idList )
          break;
        if ( v42 >= v46->max_length )
          goto LABEL_58;
        skillId = (unsigned int)v45->fields.skillId;
        v46->m_Items[v42 + 1] = skillId;
        if ( !v41 )
          break;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v41,
                                                                        skillId,
                                                                        (const MethodInfo_30D6798 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v47 = this->fields.appendPassiveSkill;
        if ( !v47 )
          break;
        if ( v42 >= v47->max_length )
          goto LABEL_58;
        v48 = v47->m_Items[v42];
        if ( !v48 )
          break;
        skillLv = v48->fields.skillLv;
        v50 = (SkillEntity_o *)Master_object;
        v51 = *lvList;
        if ( skillLv < 1 )
        {
          if ( !v51 )
            break;
          if ( v42 >= v51->max_length )
            goto LABEL_58;
          v51->m_Items[v42 + 1] = -1;
          if ( !Master_object )
            break;
          v66 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          -1,
                                                                          0LL);
          if ( !v66 )
            break;
          if ( v42 >= v66->max_length )
            goto LABEL_58;
          v69 = Master_object;
          v70 = &v66->obj.klass + (int)v42;
          v70[4] = (Il2CppClass *)v69;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)v69, v67, v68);
          v71 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_3779/*"COND_TYPE_TITLE"*/,
                                                                          0LL);
          if ( !v71 )
            break;
          if ( v42 >= v71->max_length )
            goto LABEL_58;
          v74 = Master_object;
          v75 = &v71->obj.klass + (int)v42;
          v75[4] = (Il2CppClass *)v74;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v74, v72, v73);
          v76 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v42 >= v76->max_length )
            goto LABEL_58;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                          v76->m_Items[v42],
                                                                          (System_String_o *)StringLiteral_1/*""*/,
                                                                          0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v77 = *explanationList;
            if ( !*explanationList )
              break;
            if ( v42 >= v77->max_length )
              goto LABEL_58;
            v78 = (ServantStatusBattleListViewItem_o *)(&v77->obj.klass + (int)v42);
            sortValue0 = (System_String_o *)v78->fields.sortValue0;
            v78 = (ServantStatusBattleListViewItem_o *)((char *)v78 + 32);
            v80 = System_String__Concat_61385136(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            v78->klass = (ServantStatusBattleListViewItem_c *)v80;
            sub_1B649A4(v78, (int32_t)v80, v81, v82);
          }
          v83 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v42 >= v83->max_length )
LABEL_58:
            sub_1B64C64(Master_object, skillId);
          v84 = &v83->obj.klass + (int)v42;
          v87 = (System_String_o *)v84[4];
          v85 = (ServantStatusBattleListViewItem_o *)(v84 + 4);
          v86 = v87;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v89 = System_String__Concat_61385136(v86, v88, 0LL);
          v85->klass = (ServantStatusBattleListViewItem_c *)v89;
          sub_1B649A4(v85, (int32_t)v89, v90, v91);
          v64 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v42 >= v64->max_length )
            goto LABEL_58;
          v65 = 0;
        }
        else
        {
          if ( !v51 )
            break;
          if ( v42 >= v51->max_length )
            goto LABEL_58;
          v51->m_Items[v42 + 1] = skillLv;
          if ( !Master_object )
            break;
          v52 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          v48->fields.skillLv,
                                                                          0LL);
          if ( !v52 )
            break;
          if ( v42 >= v52->max_length )
            goto LABEL_58;
          v55 = Master_object;
          v56 = &v52->obj.klass + (int)v42;
          v56[4] = (Il2CppClass *)v55;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v55, v53, v54);
          v57 = this->fields.appendPassiveSkill;
          if ( !v57 )
            break;
          if ( v42 >= v57->max_length )
            goto LABEL_58;
          v58 = v57->m_Items[v42];
          if ( !v58 )
            break;
          v59 = *explanationList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                          v50,
                                                                          v58->fields.skillLv,
                                                                          0LL);
          if ( !v59 )
            break;
          if ( v42 >= v59->max_length )
            goto LABEL_58;
          v62 = Master_object;
          v63 = &v59->obj.klass + (int)v42;
          v63[4] = (Il2CppClass *)v62;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v62, v60, v61);
          v64 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v42 >= v64->max_length )
            goto LABEL_58;
          v65 = 1;
        }
        ++v42;
        v64->m_Items[v44 + 4] = v65;
        if ( (_DWORD)v23 == v42 )
          return;
      }
      sub_1B64C5C(Master_object, skillId);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)idList, 0, (int32_t)titleList, (int32_t)explanationList);
    *titleList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)titleList, 0, v92, v93);
    *explanationList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)explanationList, 0, v94, v95);
    *releaseStateList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)releaseStateList, 0, v96, v97);
    *lvList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)lvList, 0, v98, v99);
  }
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo_40176896(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x20
  SkillInfo_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  __int64 v18; // x20
  const MethodInfo *v19; // x1
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  unsigned __int64 v24; // x25
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  SkillInfo_array *v29; // x26
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x0
  System_Int32_array *v33; // [xsp+0h] [xbp-70h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_49FFCE5 & 1) == 0 )
  {
    sub_1B64A00(&SkillInfo___TypeInfo, skillInfoList);
    sub_1B64A00(&SkillInfo_TypeInfo, v8);
    byte_49FFCE5 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v33 = 0LL;
  releaseStateList = 0LL;
  if ( isNpc )
    ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v33,
      v4);
  else
    ServantLeaderInfo__GetAppendPassiveSkillInfo(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v33,
      v4);
  if ( idList && (v11 = *(_QWORD *)&idList->max_length) != 0 )
  {
    v12 = (SkillInfo_array *)sub_1B64AA8(SkillInfo___TypeInfo, (unsigned int)v11);
    *skillInfoList = v12;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v12, v13, v14);
    if ( (int)v11 >= 1 )
    {
      v15 = -(__int64)(unsigned int)v11;
      v16 = 8LL;
      v17 = 32LL;
      do
      {
        v18 = sub_1B64C4C(SkillInfo_TypeInfo);
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
        if ( !v33 )
          goto LABEL_26;
        if ( v24 >= v33->max_length )
          goto LABEL_27;
        *(_DWORD *)(v18 + 20) = *((_DWORD *)&v33->obj.klass + v16);
        if ( !titleList )
          goto LABEL_26;
        if ( v24 >= titleList->max_length )
          goto LABEL_27;
        v25 = *(__int64 *)((char *)&titleList->obj.klass + v17);
        *(_QWORD *)(v18 + 32) = v25;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 32), v25, v22, v23);
        if ( !explanationList )
          goto LABEL_26;
        if ( v24 >= explanationList->max_length )
          goto LABEL_27;
        v28 = *(__int64 *)((char *)&explanationList->obj.klass + v17);
        *(_QWORD *)(v18 + 40) = v28;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 40), v28, v26, v27);
        v29 = *skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_1B64C5C(v20, v21);
        v20 = sub_1B64B3C(v18, v29->obj.klass->_1.element_class);
        if ( !v20 )
        {
          v32 = sub_1B64C80(0LL);
          sub_1B64B28(v32, 0LL);
        }
        if ( v24 >= v29->max_length )
LABEL_27:
          sub_1B64C64(v20, v21);
        *(Il2CppClass **)((char *)&v29->obj.klass + v17) = (Il2CppClass *)v18;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)v29 + v17), v18, v30, v31);
        ++v16;
        v17 += 8LL;
      }
      while ( v15 + v16 != 8 );
    }
  }
  else
  {
    *skillInfoList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)skillInfoList, 0, v9, v10);
  }
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

  if ( (byte_49FFCD4 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v4);
    sub_1B64A00(&OptionManager_TypeInfo, v5);
    sub_1B64A00(&ServantLeaderInfo_TypeInfo, v6);
    byte_49FFCD4 = 1;
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

  if ( (byte_49FFCE0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, *(_QWORD *)&limit);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFCE0 = 1;
  }
  value = 0;
  limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
          limit,
          &value,
          (const MethodInfo_311EE40 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    limitChangeDic = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( limitChangeDic )
    {
      limitChangeDic = (DataManager_o *)DataManager__GetMasterData_object_(
                                          limitChangeDic,
                                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
            (const MethodInfo_311D7A8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_1B64C5C(limitChangeDic, *(_QWORD *)&limit);
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
  int32_t ChoiceLimitCount_31464588; // w0
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v8; // x0

  if ( (byte_49FFCAC & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B64A00(&RandomLimitCountManager_TypeInfo, v5);
    byte_49FFCAC = 1;
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
  ChoiceLimitCount_31464588 = RandomLimitCountManager__GetChoiceLimitCount_31464588(this, 0LL);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_31464588;
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

  if ( (byte_49FFCB5 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&dispSvtId);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFCB5 = 1;
  }
  if ( !classPassive )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
    {
      sub_1B64C5C(Instance, v9);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               dispSvtId,
               (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  int32_t v14; // w3
  System_String_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x0
  DataManager_o *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x22
  unsigned __int64 v23; // x25
  unsigned int v24; // w24
  __int64 v25; // x26
  int32_t *v26; // x27
  System_String_array *v27; // x28
  SkillEntity_o *v28; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  DataManager_o *v31; // x1
  Il2CppClass **v32; // x0
  System_String_array *v33; // x28
  int32_t v34; // w2
  int32_t v35; // w3
  DataManager_o *v36; // x1
  Il2CppClass **v37; // x0
  unsigned __int64 max_length; // x8
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_49FFCBA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_SkillMaster___, titleList);
    sub_1B64A00(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1B64A00(&string___TypeInfo, v10);
    byte_49FFCBA = 1;
  }
  if ( !idList )
    goto LABEL_29;
  v11 = *(_QWORD *)&idList->max_length;
  if ( !v11 )
    goto LABEL_29;
  v12 = (System_String_array *)sub_1B64AA8(string___TypeInfo, (unsigned int)v11);
  *titleList = v12;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v12, v13, v14);
  v15 = (System_String_array *)sub_1B64AA8(string___TypeInfo, (unsigned int)v11);
  *explanationList = v15;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v15, v16, v17);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BB68DC(v19);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BB68DC(v20);
  MasterData_object = **(DataManager_o ***)(v20 + 184);
  if ( !MasterData_object )
LABEL_31:
    sub_1B64C5C(MasterData_object, v18);
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)v11 < 1 )
    goto LABEL_29;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v23 = 0LL;
  v24 = 0;
  v25 = (unsigned int)v11;
  v26 = &idList->m_Items[1];
  do
  {
    if ( v23 >= idList->max_length )
LABEL_30:
      sub_1B64C64(MasterData_object, v18);
    v18 = (unsigned int)v26[v23];
    if ( (int)v18 >= 1 )
    {
      if ( !v22 )
        goto LABEL_31;
      MasterData_object = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                             v22,
                                             v18,
                                             (const MethodInfo_30D6798 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( MasterData_object )
      {
        v27 = *titleList;
        v28 = (SkillEntity_o *)MasterData_object;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectTitle((SkillEntity_o *)MasterData_object, 0, 0LL);
        if ( !v27 )
          goto LABEL_31;
        if ( v24 >= v27->max_length )
          goto LABEL_30;
        v31 = MasterData_object;
        v32 = &v27->obj.klass + (int)v24;
        v32[4] = (Il2CppClass *)v31;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v31, v29, v30);
        v33 = *explanationList;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectExplanation(v28, 0, 0LL);
        if ( !v33 )
          goto LABEL_31;
        if ( v24 >= v33->max_length )
          goto LABEL_30;
        v36 = MasterData_object;
        v37 = &v33->obj.klass + (int)v24;
        v37[4] = (Il2CppClass *)v36;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v36, v34, v35);
        if ( v23 != v24 )
        {
          max_length = idList->max_length;
          if ( v23 >= max_length || v24 >= (unsigned int)max_length )
            goto LABEL_30;
          idList->m_Items[v24 + 1] = v26[v23];
          v26[v23] = 0;
        }
        ++v24;
      }
      else
      {
        if ( v23 >= idList->max_length )
          goto LABEL_30;
        v26[v23] = 0;
      }
    }
    ++v23;
  }
  while ( v25 != v23 );
  if ( !v24 )
  {
LABEL_29:
    *titleList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)titleList, 0, (int32_t)explanationList, (int32_t)idList);
    *explanationList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)explanationList, 0, v39, v40);
  }
}


int32_t __fastcall ServantLeaderInfo__GetRestrictionTargetType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
    return 99;
  else
    return 2;
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
  il2cpp_array_size_t max_length; // w8

  if ( (byte_49FFCB2 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, *(_QWORD *)&id1);
    sub_1B64A00(&int___TypeInfo, v8);
    byte_49FFCB2 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1B64AA8(int___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1B64C5C(0LL, v11);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = id1, max_length == 1) || (result->m_Items[2] = id2, max_length <= 2) )
    sub_1B64C64(result, v11);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x0
  DataManager_o *Entity; // x0
  Il2CppObject *MasterData_object; // x26
  __int64 v17; // x8
  __int64 v18; // x0
  BalanceConfig_c **v19; // x25
  const MethodInfo *v20; // x1
  System_Int32_array *SkillLevelList; // x0
  BalanceConfig_c *v22; // x8
  System_Int32_array *v23; // x22
  __int64 v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  unsigned __int64 v27; // x21
  __int64 v28; // x23
  il2cpp_array_size_t v29; // w29
  int32_t *v30; // x24
  SkillEntity_o *v31; // x27
  BalanceConfig_c **v32; // x20
  ServantSkillEntity_o *EntityFromSkillId; // x26
  __int64 v34; // x25
  const MethodInfo *v35; // x1
  System_String_o *EffectTitle; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *EffectExplanation; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x8
  int32_t skillNum; // w8
  ServantStatusBattleListViewItem_c *klass; // x26
  int32_t v45; // w2
  int32_t v46; // w3
  void **v47; // x0
  int32_t *v48; // x20
  int32_t *i; // x21
  __int64 v50; // x0
  Il2CppObject *v51; // [xsp+0h] [xbp-90h]
  int32_t *v52; // [xsp+8h] [xbp-88h]
  ServantSkillMaster_o *v54; // [xsp+18h] [xbp-78h]
  ServantStatusBattleListViewItem_o *v55; // [xsp+20h] [xbp-70h]
  __int64 v56; // [xsp+28h] [xbp-68h]

  v55 = (ServantStatusBattleListViewItem_o *)skillInfoList;
  if ( (byte_49FFCB8 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7);
    sub_1B64A00(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_1B64A00(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1B64A00(&SkillInfo___TypeInfo, v11);
    sub_1B64A00(&SkillInfo_TypeInfo, v12);
    byte_49FFCB8 = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB68DC(v13);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB68DC(v14);
  Entity = **(DataManager_o ***)(v14 + 184);
  if ( !Entity )
    goto LABEL_56;
  MasterData_object = DataManager__GetMasterData_object_(
                        Entity,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SkillMaster___);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BB68DC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BB68DC(v18);
  Entity = **(DataManager_o ***)(v18 + 184);
  if ( !Entity )
LABEL_56:
    sub_1B64C5C(Entity, skillInfoList);
  v19 = &BalanceConfig_TypeInfo;
  v54 = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                  Entity,
                                  (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v20);
  v22 = BalanceConfig_TypeInfo;
  v23 = SkillLevelList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  v24 = sub_1B64AA8(SkillInfo___TypeInfo, (unsigned int)v22->static_fields->SvtSkillListMax);
  v55->klass = (ServantStatusBattleListViewItem_c *)v24;
  sub_1B649A4(v55, v24, v25, v26);
  v27 = 0LL;
  v56 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = &idList->m_Items[1];
  v51 = MasterData_object;
  v52 = &v23->m_Items[1];
  while ( 1 )
  {
    Entity = (DataManager_o *)*v19;
    if ( !(*v19)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v19;
    }
    if ( (__int64)v27 >= *(int *)(*(_QWORD *)&Entity[1].fields._DispLog + 32LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v27 >= idList->max_length )
LABEL_57:
      sub_1B64C64(Entity, skillInfoList);
    skillInfoList = (SkillInfo_array **)(unsigned int)v30[v27];
    if ( (int)skillInfoList >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_56;
      Entity = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)skillInfoList,
                                  (const MethodInfo_30D6798 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( v27 >= idList->max_length )
          goto LABEL_57;
        v31 = (SkillEntity_o *)Entity;
        Entity = (DataManager_o *)v54;
        if ( !v54 )
          goto LABEL_56;
        v32 = v19;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v54, dispSvtId, (int)v27 + 1, v30[v27], 0LL);
        v34 = sub_1B64C4C(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v34, v35);
        if ( v27 >= idList->max_length )
          goto LABEL_57;
        if ( !v34 )
          goto LABEL_56;
        *(_DWORD *)(v34 + 16) = v30[v27];
        if ( !v23 )
          goto LABEL_56;
        if ( v27 >= v23->max_length )
          goto LABEL_57;
        *(_DWORD *)(v34 + 20) = v52[v27];
        Entity = (DataManager_o *)SkillEntity__getEffectChargeTurn(v31, v52[v27], 0LL);
        *(_DWORD *)(v34 + 24) = (_DWORD)Entity;
        if ( v27 >= v23->max_length )
          goto LABEL_57;
        EffectTitle = SkillEntity__getEffectTitle(v31, v52[v27], 0LL);
        *(_QWORD *)(v34 + 32) = EffectTitle;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v34 + 32), (int32_t)EffectTitle, v37, v38);
        if ( v27 >= v23->max_length )
          goto LABEL_57;
        EffectExplanation = SkillEntity__getEffectExplanation(v31, v52[v27], 0LL);
        *(_QWORD *)(v34 + 40) = EffectExplanation;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v34 + 40), (int32_t)EffectExplanation, v40, v41);
        v42 = v56;
        if ( EntityFromSkillId )
          v28 = v34;
        if ( !EntityFromSkillId )
          v42 = v34;
        v56 = v42;
        if ( EntityFromSkillId )
        {
          Entity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          if ( !v28 )
            goto LABEL_56;
          *(_DWORD *)(v28 + 48) = (_DWORD)Entity;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          if ( !v42 )
            goto LABEL_56;
          skillNum = 0;
          *(_DWORD *)(v56 + 48) = 0;
        }
        *(_DWORD *)(v34 + 52) = skillNum;
        *(_BYTE *)(v34 + 56) = 1;
        klass = v55->klass;
        if ( !v55->klass )
          goto LABEL_56;
        Entity = (DataManager_o *)sub_1B64B3C(v34, *((_QWORD *)klass->_1.image + 8));
        if ( !Entity )
        {
          v50 = sub_1B64C80(0LL);
          sub_1B64B28(v50, 0LL);
        }
        if ( v29 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_57;
        v47 = &klass->_1.image + (int)v29;
        v47[4] = (void *)v34;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v47 + 4), v34, v45, v46);
        MasterData_object = v51;
        ++v29;
        v19 = v32;
      }
    }
    ++v27;
  }
  v48 = &v23->m_Items[v29 + 1];
  for ( i = &idList->m_Items[v29 + 1]; ; ++i )
  {
    if ( !LODWORD(Entity[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v19;
    }
    if ( (signed int)v29 >= *(_DWORD *)(*(_QWORD *)&Entity[1].fields._DispLog + 32LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v29 >= idList->max_length )
      goto LABEL_57;
    *i = 0;
    if ( !v23 )
      goto LABEL_56;
    if ( v29 >= v23->max_length )
      goto LABEL_57;
    *v48++ = -1;
    ++v29;
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
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v10; // x1
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  UserEventDataLostEntity_o *v14; // x20
  __int64 v15; // x19
  __int64 v16; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_49FFCE7 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&NetworkManager_TypeInfo, v6);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FFCE7 = 1;
  }
  entity = 0LL;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_21;
    if ( UserEventDataLostMaster__TryGetEntity(
           (UserEventDataLostMaster_o *)Master_object,
           &entity,
           UserId,
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
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v19, 0LL);
      if ( !v11 )
        goto LABEL_21;
      if ( UserEventDataLostEntity__IsRestart(v11, UserId, 0LL) )
      {
        v14 = entity;
        v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v20.fields.currentCryptoKey = v16;
        *(_QWORD *)&v20.fields.fakeValue = v15;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v20, 0LL);
        if ( v14 )
          return UserEventDataLostEntity__GetTimesToRestart(v14, UserId, 0LL);
LABEL_21:
        sub_1B64C5C(UserId, v10);
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
  ServantStatusBattleListViewItem_o *p_classPassive; // x20
  System_Int32_array *classPassive; // t1
  System_Int32_array *PassiveSkillIdList; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  struct AfterTransformSvtInfo_o *v13; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( !afterTransformSvtInfo )
    return ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, 0LL, v3);
  classPassive = afterTransformSvtInfo->fields.classPassive;
  p_classPassive = (ServantStatusBattleListViewItem_o *)&afterTransformSvtInfo->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, classPassive, v3);
  p_classPassive->klass = (ServantStatusBattleListViewItem_c *)PassiveSkillIdList;
  sub_1B649A4(p_classPassive, (int32_t)PassiveSkillIdList, v9, v10);
  v13 = this->fields.afterTransformSvtInfo;
  if ( !v13 )
    sub_1B64C5C(v11, v12);
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
  int32_t v11; // w3
  ServantLeaderInfo_o *v12; // x0
  const MethodInfo *v13; // x4

  TransformedPassiveSkillIdList = ServantLeaderInfo__GetTransformedPassiveSkillIdList(
                                    this,
                                    svtId,
                                    (const MethodInfo *)titleList);
  *idList = TransformedPassiveSkillIdList;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)idList, (int32_t)TransformedPassiveSkillIdList, v10, v11);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDvcEntity_o *EntityFromSvtIdDvcId; // x22
  TreasureDvcInfo_o *v15; // x23
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  TreasureDvcInfo_o *v19; // x8
  int32_t tdLv; // w9

  if ( (byte_49FFCCB & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, tdInfo);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1B64A00(&TreasureDvcInfo_TypeInfo, v10);
    byte_49FFCCB = 1;
  }
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BB68DC(v11);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB68DC(v12);
  MasterData_object = **(Il2CppObject ***)(v12 + 184);
  if ( !MasterData_object )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !MasterData_object )
    goto LABEL_13;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           (ServantTreasureDvcMaster_o *)MasterData_object,
                           dispSvtId,
                           treasureDeviceId,
                           0LL);
  v15 = (TreasureDvcInfo_o *)sub_1B64C4C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v15, v16);
  *tdInfo = v15;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v15, v17, v18);
  if ( EntityFromSvtIdDvcId )
  {
    v19 = *tdInfo;
    if ( *tdInfo )
    {
      v19->fields.id = treasureDeviceId;
      tdLv = this->fields.treasureDeviceLv;
      v19->fields.lv = tdLv;
      ServantTreasureDvcEntity__getEffectExplanation(
        EntityFromSvtIdDvcId,
        &v19->fields.name,
        &v19->fields.explanation,
        &v19->fields.maxLv,
        &v19->fields.guageCount,
        &v19->fields.cardId,
        &v19->fields.strengthStatus,
        &v19->fields.treasureDeviceNum,
        tdLv,
        0LL);
      return EntityFromSvtIdDvcId != 0LL;
    }
LABEL_13:
    sub_1B64C5C(MasterData_object, tdInfo);
  }
  return EntityFromSvtIdDvcId != 0LL;
}


bool __fastcall ServantLeaderInfo__IsDataLost(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v10; // x1
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  UserEventDataLostEntity_o *v14; // x20
  __int64 v15; // x19
  __int64 v16; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_49FFCE6 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&NetworkManager_TypeInfo, v6);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FFCE6 = 1;
  }
  entity = 0LL;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_22;
  if ( !UserEventDataLostMaster__TryGetEntity(
          (UserEventDataLostMaster_o *)Master_object,
          &entity,
          UserId,
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
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v19, 0LL);
  if ( !v11 )
    goto LABEL_22;
  if ( UserEventDataLostEntity__IsRestart(v11, UserId, 0LL) )
    return 0;
  v14 = entity;
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  *(_QWORD *)&v20.fields.fakeValue = v15;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v20, 0LL);
  if ( !v14 )
LABEL_22:
    sub_1B64C5C(UserId, v10);
  return UserEventDataLostEntity__IsDataLost(v14, UserId, 0LL);
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

  if ( (byte_49FFCE8 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FFCE8 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v13, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsSlotRestrictionForSupport(questRestrictionInfo, v9, limitCount, DispLimitCount, 0LL);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction(
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

  if ( (byte_49FFCC8 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FFCC8 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v13, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsUniqueIndividuality_40109836(questRestrictionInfo, v9, limitCount, DispLimitCount, 0LL);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction_40166924(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  int32_t limitCount; // w23
  int32_t v13; // w24
  const MethodInfo *v14; // x1
  int32_t DispLimitCount; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_49FFCC9 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FFCC9 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v17, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return QuestRestrictionInfo__IsUniqueIndividuality_40110456(
           questRestrictionInfo,
           v13,
           limitCount,
           DispLimitCount,
           partyItem,
           num,
           -1,
           0LL);
}


void __fastcall ServantLeaderInfo__SetServantNameBySpoilerProtection(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_String_o **p_overwriteServantName; // x21
  struct System_String_o **p_overwriteServantDetailName; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  ServantEntity_o *v21; // x22
  const MethodInfo *v22; // x1
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w23
  int32_t v25; // w24
  int32_t LimitCountByDispLimit; // w0
  System_String_o *Name; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *Master_object; // x0
  __int64 v31; // x24
  __int64 v32; // x25
  ServantLimitAddMaster_o *v33; // x23
  const MethodInfo *v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t CardImageLimitCount; // w19
  int32_t LimitCountByImageLimitCostumeIn; // w0
  System_String_o *v39; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_49FFCE1 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v5);
    sub_1B64A00(&DataManager_TypeInfo, v6);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v8);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FFCE1 = 1;
  }
  this->fields.overwriteServantName = 0LL;
  p_overwriteServantName = &this->fields.overwriteServantName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.overwriteServantName, 0, v2, v3);
  p_overwriteServantDetailName = &this->fields.overwriteServantDetailName;
  this->fields.overwriteServantDetailName = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.overwriteServantDetailName, 0, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v19;
  *(_QWORD *)&v40.fields.fakeValue = v18;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v40, 0LL);
  if ( !v20 )
    goto LABEL_23;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_23;
  v21 = (ServantEntity_o *)Instance;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v22);
  limitCount = this->fields.limitCount;
  v25 = DispLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v25, limitCount, 0LL);
  Name = ServantEntity__getName(v21, LimitCountByDispLimit, -1, 0LL);
  *p_overwriteServantName = Name;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.overwriteServantName, (int32_t)Name, v28, v29);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v32 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v33 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v32;
  *(_QWORD *)&v41.fields.fakeValue = v31;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v41, 0LL);
  if ( !v33 )
LABEL_23:
    sub_1B64C5C(Instance, v16);
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName(v33, (int32_t)Instance, 0LL) )
  {
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v34);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
    v39 = ServantEntity__getName(v21, -1, LimitCountByImageLimitCostumeIn, 0LL);
  }
  else
  {
    v39 = *p_overwriteServantName;
  }
  *p_overwriteServantDetailName = v39;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(p_overwriteServantName + 1), (int32_t)v39, v35, v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo__SetTransformData(
        ServantLeaderInfo_o *this,
        int32_t friendshipRank,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Master_object; // x0
  __int64 v17; // x22
  __int64 v18; // x23
  ServantTransformMaster_o *v19; // x21
  void *UseEntityList; // x0
  __int64 v21; // x1
  AfterTransformSvtInfo_o *v22; // x22
  struct AfterTransformSvtInfo_o **p_afterTransformSvtInfo; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t aftDispLimitCount; // w28
  Il2CppObject *v27; // x22
  ServantLimitMaster_o *v28; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  ServantLimitEntity_o *v31; // x23
  _DWORD *v32; // x24
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x19
  int32_t atkMax; // w26
  int32_t atkBase; // w29
  int v36; // w27
  struct AfterTransformSvtInfo_o *v37; // x29
  int32_t atk; // w19
  int32_t adjustAtk; // w26
  struct AfterTransformSvtInfo_o *v40; // x8
  __int64 v41; // x9
  Il2CppObject *v42; // x24
  unsigned int v43; // w9
  __int64 v44; // x10
  struct AfterTransformSvtInfo_o *v45; // x8
  __int64 v46; // x10
  __int64 v47; // x9
  Il2CppObject *v48; // x0
  void *v49; // x24
  Il2CppClass *v50; // x25
  ServantTreasureDvcMaster_o *v51; // x22
  int32_t friendshipRanka; // [xsp+14h] [xbp-6Ch]
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_49FFCAE & 1) == 0 )
  {
    sub_1B64A00(&AfterTransformSvtInfo_TypeInfo, *(_QWORD *)&friendshipRank);
    sub_1B64A00(&BalanceConfig_TypeInfo, v5);
    sub_1B64A00(&CheckCombineResStatus_TypeInfo, v6);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantExpMaster___, v7);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantSkillMaster___, v10);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantTransformMaster___, v11);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v12);
    sub_1B64A00(&DataManager_TypeInfo, v13);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    byte_49FFCAE = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v18;
  *(_QWORD *)&v54.fields.fakeValue = v17;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v54, 0LL);
  if ( !v19 )
    goto LABEL_49;
  if ( !ServantTransformMaster__TryGetEntity(v19, &entity, (int32_t)UseEntityList, this->fields.dispLimitCount + 1, 0LL) )
    return;
  v22 = (AfterTransformSvtInfo_o *)sub_1B64C4C(AfterTransformSvtInfo_TypeInfo);
  AfterTransformSvtInfo___ctor(v22, 0LL);
  this->fields.afterTransformSvtInfo = v22;
  p_afterTransformSvtInfo = &this->fields.afterTransformSvtInfo;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.afterTransformSvtInfo, (int32_t)v22, v24, v25);
  if ( !entity )
    goto LABEL_49;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_49;
  if ( !UseEntityList )
    goto LABEL_49;
  friendshipRanka = friendshipRank;
  v27 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)UseEntityList,
          entity->fields.aftSvtId,
          (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v27 )
    goto LABEL_49;
  v28 = (ServantLimitMaster_o *)UseEntityList;
  klass = v27[1].klass;
  monitor = v27[1].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = klass;
  *(_QWORD *)&v55.fields.fakeValue = monitor;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v55, 0LL);
  if ( !v28 )
    goto LABEL_49;
  v31 = ServantLimitMaster__GetEntity(v28, (int32_t)UseEntityList, this->fields.limitCount, 0LL);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantExpMaster___);
  if ( !UseEntityList )
    goto LABEL_49;
  UseEntityList = ServantExpMaster__GetEntity(
                    (ServantExpMaster_o *)UseEntityList,
                    HIDWORD(v27[8].klass),
                    this->fields.lv,
                    0LL);
  if ( !v31 )
    goto LABEL_49;
  v32 = UseEntityList;
  if ( !UseEntityList )
    goto LABEL_49;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  atkBase = v31->fields.atkBase;
  atkMax = v31->fields.atkMax;
  v36 = *((_DWORD *)UseEntityList + 7);
  UseEntityList = CheckCombineResStatus_TypeInfo;
  if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
  if ( !afterTransformSvtInfo )
    goto LABEL_49;
  afterTransformSvtInfo->fields.atk = v36 * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                                    + v31->fields.atkBase;
  v37 = *p_afterTransformSvtInfo;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_49;
  atk = v37->fields.atk;
  adjustAtk = this->fields.adjustAtk;
  UseEntityList = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UseEntityList = BalanceConfig_TypeInfo;
  }
  v40 = *p_afterTransformSvtInfo;
  v41 = *((_QWORD *)UseEntityList + 23);
  v37->fields.atk = atk + *(_DWORD *)(v41 + 308) * adjustAtk;
  if ( !v40 )
    goto LABEL_49;
  v40->fields.hp = (v31->fields.hpMax - v31->fields.hpBase)
                 * v32[7]
                 / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                 + v31->fields.hpBase
                 + *(_DWORD *)(v41 + 312) * this->fields.adjustHp;
  v42 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v27[1],
                            0LL);
  if ( !v42 )
    goto LABEL_49;
  UseEntityList = ServantSkillMaster__getUseEntityList(
                    (ServantSkillMaster_o *)v42,
                    (int32_t)UseEntityList,
                    this->fields.userId,
                    this->fields.lv,
                    this->fields.limitCount,
                    aftDispLimitCount - 1,
                    -1,
                    -1LL,
                    0LL);
  if ( !UseEntityList )
    goto LABEL_49;
  v43 = *((_DWORD *)UseEntityList + 6);
  if ( !v43 )
    goto LABEL_50;
  v44 = *((_QWORD *)UseEntityList + 4);
  v45 = this->fields.afterTransformSvtInfo;
  if ( v44 )
    LODWORD(v44) = *(_DWORD *)(v44 + 28);
  if ( !v45 )
    goto LABEL_49;
  v45->fields.skillId1 = v44;
  if ( v43 <= 1 )
    goto LABEL_50;
  v46 = *((_QWORD *)UseEntityList + 5);
  if ( v46 )
    LODWORD(v46) = *(_DWORD *)(v46 + 28);
  v45->fields.skillId2 = v46;
  if ( v43 <= 2 )
LABEL_50:
    sub_1B64C64(UseEntityList, v21);
  v47 = *((_QWORD *)UseEntityList + 6);
  if ( v47 )
    LODWORD(v47) = *(_DWORD *)(v47 + 28);
  v45->fields.skillId3 = v47;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v48 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v50 = v27[1].klass;
  v49 = v27[1].monitor;
  v51 = (ServantTreasureDvcMaster_o *)v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v56.fields.currentCryptoKey = v50;
  *(_QWORD *)&v56.fields.fakeValue = v49;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v56, 0LL);
  if ( !v51 )
    goto LABEL_49;
  UseEntityList = ServantTreasureDvcMaster__getUseEntity(
                    v51,
                    (int32_t)UseEntityList,
                    this->fields.userId,
                    this->fields.lv,
                    this->fields.limitCount,
                    aftDispLimitCount - 1,
                    friendshipRanka,
                    -1,
                    0LL);
  if ( !UseEntityList )
    return;
  if ( !*p_afterTransformSvtInfo )
LABEL_49:
    sub_1B64C5C(UseEntityList, v21);
  (*p_afterTransformSvtInfo)->fields.treasureDeviceId = *((_DWORD *)UseEntityList + 8);
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
  const MethodInfo *v13; // x4
  DataManager_o *v14; // x23
  __int64 v15; // x22
  __int64 v16; // x28
  SkillLvEntity_o *v17; // x24
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w26
  int32_t limitCount; // w27
  int32_t EventId; // w0
  char v23; // w25
  BalanceConfig_c **v24; // x27
  System_Int32_array *SkillIdList; // x23
  const MethodInfo *v26; // x1
  System_Int32_array *SkillLevelList; // x24
  unsigned __int64 i; // x22
  __int64 v29; // x8
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v31; // x26
  BalanceConfig_c **v32; // x19
  __int64 v33; // x27
  __int64 v34; // x28
  int32_t v35; // w27
  int32_t v36; // w28
  int32_t v37; // w0
  bool EventUpVal; // w0
  int32_t wearesDispLimitCount; // [xsp+14h] [xbp-7Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_49FFCC1 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, setupInfo);
    sub_1B64A00(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFCC1 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v7;
  *(_QWORD *)&v43.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v43, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_38:
    sub_1B64C5C(Instance, v9);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  wearesDispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v11);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v12);
  if ( Instance )
  {
    v14 = Instance;
    if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
    {
      v15 = 0LL;
      v16 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
      while ( 1 )
      {
        v9 = *((unsigned int *)&v14->fields._DispLog + v15);
        if ( (int)v9 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_38;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v9, 1, 0LL);
          if ( Instance )
          {
            v17 = (SkillLvEntity_o *)Instance;
            v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v19;
            *(_QWORD *)&v44.fields.fakeValue = v18;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v44, 0LL);
            if ( !setupInfo )
              goto LABEL_38;
            v20 = (int)Instance;
            limitCount = this->fields.limitCount;
            EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            v23 = 1;
            Instance = (DataManager_o *)SkillLvEntity__getEventUpVal(
                                          v17,
                                          v20,
                                          limitCount,
                                          wearesDispLimitCount,
                                          setupInfo,
                                          EventId,
                                          1,
                                          0,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              return v23;
          }
        }
        if ( v16 == v15 )
          break;
        if ( ++v15 >= (unsigned __int64)LODWORD(v14->fields.m_CancellationTokenSource) )
LABEL_19:
          sub_1B64C64(Instance, v9);
      }
    }
  }
  v24 = &BalanceConfig_TypeInfo;
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  (ServantLeaderInfo_o *)Instance,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v13);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v26);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)*v24;
    if ( !(*v24)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)*v24;
    }
    v29 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL);
    v23 = (__int64)i < v29;
    if ( (__int64)i >= v29 )
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
        v31 = Entity;
        v32 = v24;
        v34 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v45.fields.currentCryptoKey = v34;
        *(_QWORD *)&v45.fields.fakeValue = v33;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v45, 0LL);
        if ( !setupInfo )
          goto LABEL_38;
        v35 = (int)Instance;
        v36 = this->fields.limitCount;
        v37 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
        EventUpVal = SkillLvEntity__getEventUpVal(v31, v35, v36, wearesDispLimitCount, setupInfo, v37, 1, 0, 0LL);
        v24 = v32;
        if ( EventUpVal )
          return v23;
      }
    }
  }
  return v23;
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal_40165160(
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
  const MethodInfo *v15; // x4
  DataManager_o *v16; // x22
  bool v17; // w23
  __int64 v18; // x24
  __int64 v19; // x25
  System_Int32_array *SkillIdList; // x22
  const MethodInfo *v21; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_49FFCC4 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_1B64A00(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFCC4 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v9;
  *(_QWORD *)&v25.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v25, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_37;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1B64C5C(Instance, v11);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v14);
  if ( Instance && (v16 = Instance, (int)Instance->fields.m_CancellationTokenSource >= 1) )
  {
    v17 = 0;
    v18 = 0LL;
    v19 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
    while ( 1 )
    {
      v11 = *((unsigned int *)&v16->fields._DispLog + v18);
      if ( (int)v11 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_37;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v11, 1, 0LL);
        if ( Instance )
        {
          Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_39542832(
                                        (SkillLvEntity_o *)Instance,
                                        eventUpVallInfo,
                                        1,
                                        0,
                                        1,
                                        0,
                                        0LL,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v17 = 1;
        }
      }
      if ( v19 == v18 )
        break;
      if ( ++v18 >= (unsigned __int64)LODWORD(v16->fields.m_CancellationTokenSource) )
LABEL_20:
        sub_1B64C64(Instance, v11);
    }
  }
  else
  {
    v17 = 0;
  }
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  (ServantLeaderInfo_o *)Instance,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v15);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v21);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL) )
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
        if ( SkillLvEntity__getEventUpVal_39542832(Entity, eventUpVallInfo, 1, 0, 1, 0, 0LL, 0LL) )
          v17 = 1;
      }
    }
  }
  return v17;
}


int32_t __fastcall ServantLeaderInfo__getBaseFriendPointUpVal(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v11; // x4
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v13; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FFCBD & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFCBD = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v18, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1B64C5C(Instance, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__GetSkillIdList(
                    (ServantLeaderInfo_o *)MasterData_object,
                    this->fields.skillId1,
                    this->fields.skillId2,
                    this->fields.skillId3,
                    v11);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v13);
    for ( i = 0LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_22;
      if ( i >= SkillIdList->max_length )
        goto LABEL_23;
      v9 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v9 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_22;
        if ( i >= SkillLevelList->max_length )
LABEL_23:
          sub_1B64C64(Instance, v9);
        if ( !MasterData_object )
          goto LABEL_22;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v9, SkillLevelList->m_Items[i + 1], 0LL);
        if ( Entity )
        {
          result = SkillLvEntity__getFriendPointUpVal(Entity, 0LL);
          if ( result > 0 )
            return result;
        }
      }
    }
  }
  return 0;
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

  if ( (byte_49FFCD7 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v3);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64A00(&OptionManager_TypeInfo, v5);
    byte_49FFCD7 = 1;
  }
  if ( ConstantMaster__IsOtherImage(0LL) )
  {
    v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v8;
    *(_QWORD *)&v23.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v23, 0LL);
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
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v24, 0LL);
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

  if ( (byte_49FFCD5 & 1) == 0 )
  {
    sub_1B64A00(&OptionManager_TypeInfo, method);
    byte_49FFCD5 = 1;
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
  if ( (byte_49FFCDE & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_1B64A00(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantLeaderInfo_o *)sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFCDE = 1;
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
      sub_1B64C64(this, *(_QWORD *)&index);
    v12 = m_Items[v10];
    if ( !v12 )
      goto LABEL_16;
    if ( v12->fields.idx == index )
      break;
    if ( (int)++v10 >= max_length )
      return 0LL;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v16 = *(_QWORD *)&v12->fields.commandCodeId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v12->fields.commandCodeId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v16;
  *(_QWORD *)&v18.fields.fakeValue = v15;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v18, 0LL);
  if ( !v17 )
LABEL_16:
    sub_1B64C5C(this, *(_QWORD *)&index);
  return (CommandCodeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  v17,
                                  (int32_t)this,
                                  (const MethodInfo_30D6798 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
  struct CommandCodeStatus_array *commandCode; // x23
  int max_length; // w8
  System_Int32_array *v10; // x19
  int i; // w24
  CommandCodeStatus_o *v12; // x20
  int32_t idx; // w21
  __int64 v14; // x26
  __int64 v15; // x20
  __int64 v16; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FFCDD & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&int___TypeInfo, v3);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_49FFCDD = 1;
  }
  if ( !this->fields.commandCode )
    return 0LL;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (BalanceConfig_c *)sub_1B64AA8(int___TypeInfo, (unsigned int)v5->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_23:
    sub_1B64C5C(v6, v7);
  max_length = commandCode->max_length;
  v10 = (System_Int32_array *)v6;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_24:
        sub_1B64C64(v6, v7);
      v12 = commandCode->m_Items[i];
      if ( !v12 )
        goto LABEL_23;
      v6 = BalanceConfig_TypeInfo;
      idx = v12->fields.idx;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v6 = BalanceConfig_TypeInfo;
      }
      if ( idx < v6->static_fields->SvtCommandCardMax )
      {
        v14 = v12->fields.idx;
        v16 = *(_QWORD *)&v12->fields.commandCodeId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v12->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v18.fields.currentCryptoKey = v16;
        *(_QWORD *)&v18.fields.fakeValue = v15;
        v6 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v18, 0LL);
        if ( !v10 )
          goto LABEL_23;
        if ( (unsigned int)v14 >= v10->max_length )
          goto LABEL_24;
        v10->m_Items[v14 + 1] = (int)v6;
      }
      max_length = commandCode->max_length;
    }
  }
  return v10;
}


int32_t __fastcall ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_49FFCD1 & 1) == 0 )
  {
    sub_1B64A00(&OptionManager_TypeInfo, method);
    byte_49FFCD1 = 1;
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

  if ( (byte_49FFCD3 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, method);
    sub_1B64A00(&OptionManager_TypeInfo, v4);
    byte_49FFCD3 = 1;
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

  if ( (byte_49FFCC0 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_49FFCC0 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v16, 0LL) < 1 )
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v17, 0LL);
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

  if ( (byte_49FFCCF & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp);
    byte_49FFCCF = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v15, 0LL) >= 1 )
  {
    v13 = this->fields.equipTarget1;
    if ( !v13 )
      sub_1B64C5C(0LL, v12);
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
  int32_t v15; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49FFCB9 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B64A00(&SkillInfo___TypeInfo, v6);
    byte_49FFCB9 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v16, 0LL) >= 1 )
  {
    v11 = this->fields.equipTarget1;
    if ( !v11 )
      sub_1B64C5C(0LL, v10);
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
    v13 = (SkillInfo_array *)sub_1B64AA8(SkillInfo___TypeInfo, (unsigned int)v12->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v13;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v13, v14, v15);
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

  if ( (byte_49FFCBE & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_49FFCBE = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v17, 0LL) < 1 )
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v18, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v13, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEventUpVal_40164784(
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
  int32_t v19; // w3
  const MethodInfo *v20; // x2
  bool BaseEventUpVal_40165160; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v23; // w21
  EventUpValInfo_o *v24; // x24
  __int64 v25; // x22
  __int64 v26; // x23
  EquipTargetInfo_o *v27; // x0
  __int64 v28; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_49FFCC2 & 1) == 0 )
  {
    sub_1B64A00(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FFCC2 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v9;
  *(_QWORD *)&v30.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v30, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v10;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v13);
  npcFlag = this->fields.npcFlag;
  v16 = DispLimitCount;
  v17 = (EventUpValInfo_o *)sub_1B64C4C(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v17, setupInfo, v12, limitCount, v16, npcFlag, 0LL);
  *eventUpVallInfo = v17;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)eventUpVallInfo, (int32_t)v17, v18, v19);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(this->fields.svtId, 0LL) < 1 )
    return 0;
  BaseEventUpVal_40165160 = ServantLeaderInfo__getBaseEventUpVal_40165160(this, eventUpVallInfo, v20);
  equipTarget1 = this->fields.equipTarget1;
  v23 = BaseEventUpVal_40165160;
  if ( !equipTarget1 )
    return v23;
  v24 = *eventUpVallInfo;
  v26 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v26;
  *(_QWORD *)&v31.fields.fakeValue = v25;
  v27 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v31, 0LL);
  if ( !v24 || (v24->fields.equipSvtId = (int)v27, (v27 = this->fields.equipTarget1) == 0LL) )
    sub_1B64C5C(v27, v28);
  return (v23 | EquipTargetInfo__getEventUpVal_38574756(v27, eventUpVallInfo, 1, 0LL)) & 1;
}


bool __fastcall ServantLeaderInfo__getEventUpVal_40165772(
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
  int32_t v23; // w3
  const MethodInfo *v24; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v26; // x25
  __int64 v27; // x23
  __int64 v28; // x24
  EquipTargetInfo_o *v29; // x0
  __int64 v30; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_49FFCC3 & 1) == 0 )
  {
    sub_1B64A00(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_49FFCC3 = 1;
  }
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v13;
  *(_QWORD *)&v32.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v32, 0LL);
  limitCount = this->fields.limitCount;
  v16 = v14;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v17);
  npcFlag = this->fields.npcFlag;
  v20 = DispLimitCount;
  v21 = (EventUpValInfo_o *)sub_1B64C4C(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v21, setupInfo, v16, limitCount, v20, npcFlag, 0LL);
  *eventUpVallInfo = v21;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)eventUpVallInfo, (int32_t)v21, v22, v23);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(this->fields.svtId, 0LL) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_40165160(this, eventUpVallInfo, v24) )
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
      v29 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v33, 0LL);
      if ( !v26 || (v26->fields.equipSvtId = (int)v29, (v29 = this->fields.equipTarget1) == 0LL) )
        sub_1B64C5C(v29, v30);
      if ( EquipTargetInfo__getEventUpVal_38574756(v29, eventUpVallInfo, 1, 0LL) )
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

  if ( (byte_49FFCCE & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FFCCE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v17;
  *(_QWORD *)&v26.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v26, 0LL);
  if ( !v18 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v18,
             (int32_t)Instance,
             (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v20) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    sub_1B64C5C(Instance, v14);
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
  int32_t FrameType_39344940; // w20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49FFCD0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFCD0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantExceedMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v16, 0LL);
  if ( !v11
    || (FrameType_39344940 = ServantExceedMaster__GetFrameType_39344940(
                               v11,
                               (int32_t)Instance,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v14),
        !v13) )
  {
LABEL_10:
    sub_1B64C5C(Instance, v7);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v13,
           (int32_t)Instance,
           this->fields.lv,
           FrameType_39344940,
           0LL);
}


int32_t __fastcall ServantLeaderInfo__getFriendPointUpType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  const MethodInfo *v5; // x1
  int32_t BaseFriendPointUpVal; // w0
  __int64 v7; // x1
  EquipTargetInfo_o *equipTarget1; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_49FFCBC & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FFCBC = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v10, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v5);
  if ( !this->fields.equipTarget1
    || EquipTargetInfo__getFriendPointUpVal(this->fields.equipTarget1, 0LL) <= BaseFriendPointUpVal )
  {
    return 0;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    sub_1B64C5C(0LL, v7);
  return EquipTargetInfo__getFriendPointUpType(equipTarget1, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getFriendPointUpVal(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  const MethodInfo *v5; // x1
  int32_t BaseFriendPointUpVal; // w0
  EquipTargetInfo_o *equipTarget1; // x8
  int32_t v8; // w19
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_49FFCBB & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FFCBB = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v10, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v5);
  equipTarget1 = this->fields.equipTarget1;
  v8 = BaseFriendPointUpVal;
  if ( !equipTarget1 )
    return v8;
  result = EquipTargetInfo__getFriendPointUpVal(equipTarget1, 0LL);
  if ( result <= v8 )
    return v8;
  return result;
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

  if ( (byte_49FFCD9 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, method);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64A00(&OptionManager_TypeInfo, v5);
    byte_49FFCD9 = 1;
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
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v16, 0LL);
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

  if ( (byte_49FFCAF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFCAF = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v18, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v19, 0LL);
  if ( !v13
    || (Entity = ServantLimitMaster__GetEntity(v13, (int32_t)Instance, this->fields.limitCount, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_17:
    sub_1B64C5C(Instance, v9);
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

  if ( (byte_49FFCD8 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, isNpc);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_49FFCD8 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v12, 0LL);
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

  if ( (byte_49FFCD6 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, method);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FFCD6 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v10, 0LL);
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

  if ( (byte_49FFCD2 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, method);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FFCD2 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v10, 0LL);
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

  if ( (byte_49FFCDA & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, isNpc);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_49FFCDA = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v12, 0LL);
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

  if ( (byte_49FFCDC & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, method);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FFCDC = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v10, 0LL);
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
  ServantStatusBattleListViewItem_o *p_classPassive; // x19
  System_Int32_array *classPassive; // t1
  const MethodInfo *v8; // x3
  System_Int32_array *PassiveSkillIdList; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_49FFCB4 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FFCB4 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v4;
  *(_QWORD *)&v13.fields.fakeValue = v3;
  v5 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v13, 0LL);
  classPassive = this->fields.classPassive;
  p_classPassive = (ServantStatusBattleListViewItem_o *)&this->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(v5, (int32_t)v5, classPassive, v8);
  p_classPassive->klass = (ServantStatusBattleListViewItem_c *)PassiveSkillIdList;
  sub_1B649A4(p_classPassive, (int32_t)PassiveSkillIdList, v10, v11);
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
  int32_t v10; // w3
  ServantLeaderInfo_o *v11; // x0
  const MethodInfo *v12; // x4

  PassiveSkillIdList = ServantLeaderInfo__getPassiveSkillIdList(this, (const MethodInfo *)idList);
  *idList = PassiveSkillIdList;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)idList, (int32_t)PassiveSkillIdList, v9, v10);
  ServantLeaderInfo__GetPassiveSkillInfo(v11, titleList, explanationList, *idList, v12);
}


int32_t __fastcall ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_49FFCDB & 1) == 0 )
  {
    sub_1B64A00(&OptionManager_TypeInfo, method);
    byte_49FFCDB = 1;
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
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  int32_t limitCount; // w21
  int32_t v9; // w22
  const MethodInfo *v10; // x1
  int32_t DispLimitCount; // w0
  int32_t npcFlag; // w8
  int32_t lv; // w23
  int32_t v14; // w20
  int32_t v15; // w5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_49FFCC5 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FFCC5 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v17, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  npcFlag = this->fields.npcFlag;
  lv = this->fields.lv;
  v14 = DispLimitCount;
  if ( NpcServantFollowerEntity__IsNpc(npcFlag, 0LL) )
    v15 = 99;
  else
    v15 = 2;
  return QuestRestrictionInfo__IsRestriction_40105540(questRestrictionInfo, v9, limitCount, v14, lv, v15, 0LL);
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

  if ( (byte_49FFCB0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FFCB0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v12, 0LL);
  if ( !v10 || (Instance = ServantLimitMaster__GetEntity(v10, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_9:
    sub_1B64C5C(Instance, v6);
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

  if ( (byte_49FFCBF & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_49FFCBF = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v9, 0LL) >= 1
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

  if ( (byte_49FFCB7 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
    byte_49FFCB7 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v12, 0LL);
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
  il2cpp_array_size_t max_length; // w8

  if ( (byte_49FFCB3 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&int___TypeInfo, v3);
    byte_49FFCB3 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1B64AA8(int___TypeInfo, (unsigned int)v4->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1B64C5C(0LL, v6);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillLv2, max_length <= 2) )
  {
    sub_1B64C64(result, v6);
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

  if ( (byte_49FFCCA & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
    byte_49FFCCA = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v10, 0LL);
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, v7, this->fields.treasureDeviceId, v8);
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo_40167744(
        ServantLeaderInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t klass; // w8

  if ( (byte_49FFCCC & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_TreasureDvcMaster___, tdLv);
    sub_1B64A00(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    byte_49FFCCC = 1;
  }
  *tdLv = this->fields.treasureDeviceLv;
  if ( this->fields.treasureDeviceId < 1 )
  {
    klass = 0;
    LOBYTE(Entity) = 0;
  }
  else
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BB68DC(v9);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BB68DC(v10);
    MasterData_object = **(Il2CppObject ***)(v10 + 184);
    if ( !MasterData_object
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)MasterData_object,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
    {
      sub_1B64C5C(MasterData_object, tdLv);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               this->fields.treasureDeviceId,
               (const MethodInfo_30D6798 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t treasureDeviceLv; // w8

  if ( (byte_49FFCCD & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_49FFCCD = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB68DC(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB68DC(v6);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_1B64C5C(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.treasureDeviceId,
             (const MethodInfo_30D6798 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_49FFCC6 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FFCC6 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v9, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_40109308(questRestrictionInfo, v7, 0LL);
}


bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction_40166584(
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

  if ( (byte_49FFCC7 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FFCC7 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v13, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_40109508(questRestrictionInfo, v11, partyItem, num, -1, 0LL);
}


bool __fastcall ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_49FFCB6 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FFCB6 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v7, 0LL) > 0;
}


bool __fastcall ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_49FFCAB & 1) == 0 )
  {
    sub_1B64A00(&RandomLimitCountManager_TypeInfo, method);
    byte_49FFCAB = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_49FA8E6 )
  {
    sub_1B64A00(&RandomLimitCountManager_TypeInfo, method);
    byte_49FA8E6 = 1;
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