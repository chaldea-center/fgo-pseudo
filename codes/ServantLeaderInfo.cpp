void __fastcall ServantLeaderInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4A5C355 & 1) == 0 )
  {
    sub_1B885B0(&ServantLeaderInfo_TypeInfo);
    byte_4A5C355 = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantLeaderInfo___ctor_40485696(
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
  int32_t v14; // w22
  __int64 v15; // x8
  __int64 v16; // x0
  Il2CppObject *MasterData_object; // x23
  unsigned int v18; // w8
  __int64 v19; // x9
  __int64 v20; // x9
  __int64 v21; // x8
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x0
  __int64 v25; // x0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x2

  if ( (byte_4A5C319 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C319 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, 0LL);
  if ( !Instance )
    goto LABEL_39;
  this->fields.hp = *((_DWORD *)Instance + 9);
  v12 = *((_DWORD *)Instance + 11);
  this->fields.adjustAtk = 0;
  this->fields.adjustHp = 0;
  this->fields.atk = v12;
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(this, v10);
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v14 = MaxDispLimitCount;
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BDA48C(v16);
  Instance = **(void ***)(v16 + 184);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  if ( !MasterData_object )
    goto LABEL_39;
  Instance = ServantSkillMaster__getUseEntityList(
               (ServantSkillMaster_o *)MasterData_object,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               v14,
               -1,
               -1LL,
               0LL);
  if ( !Instance )
    goto LABEL_39;
  v18 = *((_DWORD *)Instance + 6);
  if ( !v18 )
    goto LABEL_40;
  v19 = *((_QWORD *)Instance + 4);
  if ( v19 )
    LODWORD(v19) = *(_DWORD *)(v19 + 28);
  this->fields.skillId1 = v19;
  if ( v18 <= 1 )
    goto LABEL_40;
  v20 = *((_QWORD *)Instance + 5);
  if ( v20 )
    LODWORD(v20) = *(_DWORD *)(v20 + 28);
  this->fields.skillId2 = v20;
  if ( v18 <= 2 )
LABEL_40:
    sub_1B88814(Instance, v10);
  v21 = *((_QWORD *)Instance + 6);
  if ( v21 )
    LODWORD(v21) = *(_DWORD *)(v21 + 28);
  this->fields.skillId3 = v21;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_39;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    goto LABEL_36;
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1BDA48C(v24);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BDA48C(v25);
  Instance = **(void ***)(v25 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL )
  {
LABEL_39:
    sub_1B8880C(Instance, v10);
  }
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)Instance,
                svtId,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v14,
                0,
                -1,
                0LL);
  if ( UseEntity )
    this->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
LABEL_36:
  this->fields.equipTarget1 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipTarget1, 0, v22, v23);
  this->fields.randomLimitCountTargets = 0LL;
  *(_QWORD *)&this->fields.imageLimitCount = 0LL;
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.updatedAt = 0LL;
  this->fields.portraitLimitCount = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomLimitCountTargets, 0, v27, v28);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    ServantLeaderInfo__SetTransformData(this, 0, v29);
}


void __fastcall ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
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
  int32_t v32; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4A5C34B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5C34B = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSpoilerSetting(0LL) )
  {
    v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v4;
    *(_QWORD *)&v33.fields.fakeValue = v3;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v33, 0LL) >= 1 )
    {
      v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v5,
        (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v5;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.limitChangeDic, (int32_t)v5, v6, v7);
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
      this->fields.limitChangeDic = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.limitChangeDic, 0, v31, v32);
    }
  }
}


// positive sp value has been detected, the output may be wrong!
void __fastcall ServantLeaderInfo__Finalize(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.equipTarget1 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipTarget1, 0, v2, v3);
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantLeaderInfo__GetAdjustLimitCount(
        ServantLeaderInfo_o *this,
        int32_t orgLimitCount,
        const MethodInfo *method)
{
  ServantLeaderInfo_c *v4; // x0

  if ( (byte_4A5C34E & 1) == 0 )
  {
    sub_1B885B0(&ServantLeaderInfo_TypeInfo);
    byte_4A5C34E = 1;
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


bool __fastcall ServantLeaderInfo__GetAdjustMax(
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

  if ( (byte_4A5C31D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C31D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  if ( !v16 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v16,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
LABEL_13:
    v20 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v17 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v18),
        !v17) )
  {
LABEL_15:
    sub_1B8880C(Instance, v12);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                        (int32_t)Instance,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
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


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo(
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
  int32_t v17; // w3
  struct System_String_o *MasterName_k__BackingField; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x25
  System_Int32_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Boolean_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int32_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x27
  il2cpp_array_size_t v36; // w19
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
  int32_t v50; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x1
  Il2CppClass **v52; // x0
  System_String_array *v53; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x1
  Il2CppClass **v57; // x0
  System_Boolean_array *v58; // x8
  char v59; // w9
  System_String_array *v60; // x22
  int32_t v61; // w2
  int32_t v62; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x1
  Il2CppClass **v64; // x0
  System_String_array *v65; // x28
  int32_t v66; // w2
  int32_t v67; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // x1
  Il2CppClass **v69; // x0
  System_String_array *v70; // x8
  System_String_array *v71; // x8
  ServantStatusBattleListViewItem_o *v72; // x28
  System_String_o *sortValue0; // t1
  System_String_o *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_array *v77; // x8
  Il2CppClass **v78; // x28
  ServantStatusBattleListViewItem_o *v79; // x28
  System_String_o *v80; // x29
  System_String_o *v81; // t1
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  struct AppendPassiveSkillInfo_array *v86; // x8
  int32_t v87; // w2
  int32_t v88; // w3
  int32_t v89; // w2
  int32_t v90; // w3
  int32_t v91; // w2
  int32_t v92; // w3
  int32_t v93; // w2
  int32_t v94; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  if ( (byte_4A5C34F & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_3801/*"COND_TYPE_TITLE"*/);
    sub_1B885B0(&StringLiteral_3789/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C34F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v98.fields.currentCryptoKey = v12;
  *(_QWORD *)&v98.fields.fakeValue = v11;
  EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                        v98,
                                                                        0LL);
  if ( !v13
    || (EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                                                              v13,
                                                                              (int32_t)EntityListFromSvtId,
                                                                              0LL)) == 0LL )
  {
LABEL_67:
    sub_1B8880C(EntityListFromSvtId, v15);
  }
  MasterName_k__BackingField = EntityListFromSvtId->fields._MasterName_k__BackingField;
  v19 = EntityListFromSvtId;
  if ( MasterName_k__BackingField || (v86 = this->fields.appendPassiveSkill) != 0LL && *(_QWORD *)&v86->max_length )
  {
    v20 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *idList = v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)idList, (int32_t)v20, v21, v22);
    v23 = (System_String_array *)sub_1B88658(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *titleList = v23;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v23, v24, v25);
    v26 = (System_String_array *)sub_1B88658(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *explanationList = v26;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v26, v27, v28);
    v29 = (System_Boolean_array *)sub_1B88658(bool___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *releaseStateList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v29, v30, v31);
    v32 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *lvList = v32;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v32, v33, v34);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
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
        v42 = 0LL;
LABEL_24:
        if ( v36 >= LODWORD(v19->fields._MasterName_k__BackingField) )
          goto LABEL_68;
        v43 = (int)v36;
        v44 = *((_QWORD *)&v19->fields.list + (int)v36);
        if ( !v44 )
          goto LABEL_67;
        v45 = *idList;
        if ( !*idList )
          goto LABEL_67;
        if ( v36 >= v45->max_length )
          goto LABEL_68;
        v15 = *(unsigned int *)(v44 + 28);
        v45->m_Items[v36 + 1] = v15;
        if ( !v35 )
          goto LABEL_67;
        EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                              v35,
                                                                              v15,
                                                                              (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v46 = (SkillEntity_o *)EntityListFromSvtId;
        v47 = *lvList;
        if ( v42 )
        {
          if ( !v47 )
            goto LABEL_67;
          if ( v36 >= v47->max_length )
            goto LABEL_68;
          v47->m_Items[v36 + 1] = v42->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v48 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                v42->fields.skillLv,
                                                                                0LL);
          if ( !v48 )
            goto LABEL_67;
          if ( v36 >= v48->max_length )
            goto LABEL_68;
          v51 = EntityListFromSvtId;
          v52 = &v48->obj.klass + (int)v36;
          v52[4] = (Il2CppClass *)v51;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v51, v49, v50);
          v53 = *explanationList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                                v46,
                                                                                v42->fields.skillLv,
                                                                                0LL);
          if ( !v53 )
            goto LABEL_67;
          if ( v36 >= v53->max_length )
            goto LABEL_68;
          v56 = EntityListFromSvtId;
          v57 = &v53->obj.klass + (int)v36;
          v57[4] = (Il2CppClass *)v56;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v56, v54, v55);
          v58 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v36 >= v58->max_length )
            goto LABEL_68;
          v59 = 1;
        }
        else
        {
          if ( !v47 )
            goto LABEL_67;
          if ( v36 >= v47->max_length )
            goto LABEL_68;
          v47->m_Items[v36 + 1] = -1;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v60 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                -1,
                                                                                0LL);
          if ( !v60 )
            goto LABEL_67;
          if ( v36 >= v60->max_length )
            goto LABEL_68;
          v63 = EntityListFromSvtId;
          v64 = &v60->obj.klass + (int)v36;
          v64[4] = (Il2CppClass *)v63;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v63, v61, v62);
          v65 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3801/*"COND_TYPE_TITLE"*/,
                                                                                0LL);
          if ( !v65 )
            goto LABEL_67;
          if ( v36 >= v65->max_length )
            goto LABEL_68;
          v68 = EntityListFromSvtId;
          v69 = &v65->obj.klass + (int)v36;
          v69[4] = (Il2CppClass *)v68;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v69 + 4), (int32_t)v68, v66, v67);
          v70 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v36 >= v70->max_length )
            goto LABEL_68;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                                v70->m_Items[v36],
                                                                                (System_String_o *)StringLiteral_1/*""*/,
                                                                                0LL);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v71 = *explanationList;
            if ( !*explanationList )
              goto LABEL_67;
            if ( v36 >= v71->max_length )
              goto LABEL_68;
            v72 = (ServantStatusBattleListViewItem_o *)(&v71->obj.klass + (int)v36);
            sortValue0 = (System_String_o *)v72->fields.sortValue0;
            v72 = (ServantStatusBattleListViewItem_o *)((char *)v72 + 32);
            v74 = System_String__Concat_61707032(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            v72->klass = (ServantStatusBattleListViewItem_c *)v74;
            sub_1B88554(v72, (int32_t)v74, v75, v76);
          }
          v77 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v36 >= v77->max_length )
            goto LABEL_68;
          v78 = &v77->obj.klass + (int)v36;
          v81 = (System_String_o *)v78[4];
          v79 = (ServantStatusBattleListViewItem_o *)(v78 + 4);
          v80 = v81;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_3789/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v83 = System_String__Concat_61707032(v80, v82, 0LL);
          v79->klass = (ServantStatusBattleListViewItem_c *)v83;
          sub_1B88554(v79, (int32_t)v83, v84, v85);
          v58 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v36 >= v58->max_length )
            goto LABEL_68;
          v59 = 0;
        }
        ++v36;
        v58->m_Items[v43 + 4] = v59;
        if ( v36 == (_DWORD)MasterName_k__BackingField )
          return;
      }
      v39 = 0LL;
      v40 = (__int64)(&v19->fields.list + (int)v36);
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
      sub_1B88814(EntityListFromSvtId, v15);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)idList, 0, v16, v17);
    *titleList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, 0, v87, v88);
    *explanationList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanationList, 0, v89, v90);
    *releaseStateList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)releaseStateList, 0, v91, v92);
    *lvList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lvList, 0, v93, v94);
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
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x8
  __int64 v13; // x25
  System_Int32_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Boolean_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Int32_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 skillId; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x26
  il2cpp_array_size_t v32; // w29
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
  int32_t v44; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x1
  Il2CppClass **v46; // x0
  struct AppendPassiveSkillInfo_array *v47; // x8
  AppendPassiveSkillInfo_o *v48; // x8
  System_String_array *v49; // x28
  int32_t v50; // w2
  int32_t v51; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x1
  Il2CppClass **v53; // x0
  System_Boolean_array *v54; // x8
  char v55; // w9
  System_String_array *v56; // x28
  int32_t v57; // w2
  int32_t v58; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x1
  Il2CppClass **v60; // x0
  System_String_array *v61; // x27
  int32_t v62; // w2
  int32_t v63; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x1
  Il2CppClass **v65; // x0
  System_String_array *v66; // x8
  System_String_array *v67; // x8
  ServantStatusBattleListViewItem_o *v68; // x27
  System_String_o *sortValue0; // t1
  System_String_o *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_array *v73; // x8
  Il2CppClass **v74; // x27
  ServantStatusBattleListViewItem_o *v75; // x27
  System_String_o *v76; // x28
  System_String_o *v77; // t1
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w2
  int32_t v83; // w3
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w2
  int32_t v87; // w3
  int32_t v88; // w2
  int32_t v89; // w3

  if ( (byte_4A5C350 & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_3801/*"COND_TYPE_TITLE"*/);
    sub_1B885B0(&StringLiteral_3789/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C350 = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (v13 = *(_QWORD *)&appendPassiveSkill->max_length) != 0 )
  {
    v14 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v13);
    *idList = v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)idList, (int32_t)v14, v15, v16);
    v17 = (System_String_array *)sub_1B88658(string___TypeInfo, (unsigned int)v13);
    *titleList = v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v17, v18, v19);
    v20 = (System_String_array *)sub_1B88658(string___TypeInfo, (unsigned int)v13);
    *explanationList = v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v20, v21, v22);
    v23 = (System_Boolean_array *)sub_1B88658(bool___TypeInfo, (unsigned int)v13);
    *releaseStateList = v23;
    sub_1B88554((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v23, v24, v25);
    v26 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v13);
    *lvList = v26;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v26, v27, v28);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v13 >= 1 )
    {
      v31 = Master_object;
      v32 = 0;
      while ( 1 )
      {
        v33 = this->fields.appendPassiveSkill;
        if ( !v33 )
          break;
        if ( v32 >= v33->max_length )
          goto LABEL_58;
        v34 = (int)v32;
        v35 = v33->m_Items[v32];
        if ( !v35 )
          break;
        v36 = *idList;
        if ( !*idList )
          break;
        if ( v32 >= v36->max_length )
          goto LABEL_58;
        skillId = (unsigned int)v35->fields.skillId;
        v36->m_Items[v32 + 1] = skillId;
        if ( !v31 )
          break;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v31,
                                                                        skillId,
                                                                        (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v37 = this->fields.appendPassiveSkill;
        if ( !v37 )
          break;
        if ( v32 >= v37->max_length )
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
          if ( v32 >= v41->max_length )
            goto LABEL_58;
          v41->m_Items[v32 + 1] = -1;
          if ( !Master_object )
            break;
          v56 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          -1,
                                                                          0LL);
          if ( !v56 )
            break;
          if ( v32 >= v56->max_length )
            goto LABEL_58;
          v59 = Master_object;
          v60 = &v56->obj.klass + (int)v32;
          v60[4] = (Il2CppClass *)v59;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v59, v57, v58);
          v61 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_3801/*"COND_TYPE_TITLE"*/,
                                                                          0LL);
          if ( !v61 )
            break;
          if ( v32 >= v61->max_length )
            goto LABEL_58;
          v64 = Master_object;
          v65 = &v61->obj.klass + (int)v32;
          v65[4] = (Il2CppClass *)v64;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v64, v62, v63);
          v66 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v32 >= v66->max_length )
            goto LABEL_58;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                          v66->m_Items[v32],
                                                                          (System_String_o *)StringLiteral_1/*""*/,
                                                                          0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v67 = *explanationList;
            if ( !*explanationList )
              break;
            if ( v32 >= v67->max_length )
              goto LABEL_58;
            v68 = (ServantStatusBattleListViewItem_o *)(&v67->obj.klass + (int)v32);
            sortValue0 = (System_String_o *)v68->fields.sortValue0;
            v68 = (ServantStatusBattleListViewItem_o *)((char *)v68 + 32);
            v70 = System_String__Concat_61707032(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            v68->klass = (ServantStatusBattleListViewItem_c *)v70;
            sub_1B88554(v68, (int32_t)v70, v71, v72);
          }
          v73 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v32 >= v73->max_length )
LABEL_58:
            sub_1B88814(Master_object, skillId);
          v74 = &v73->obj.klass + (int)v32;
          v77 = (System_String_o *)v74[4];
          v75 = (ServantStatusBattleListViewItem_o *)(v74 + 4);
          v76 = v77;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v78 = LocalizationManager__Get((System_String_o *)StringLiteral_3789/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v79 = System_String__Concat_61707032(v76, v78, 0LL);
          v75->klass = (ServantStatusBattleListViewItem_c *)v79;
          sub_1B88554(v75, (int32_t)v79, v80, v81);
          v54 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v32 >= v54->max_length )
            goto LABEL_58;
          v55 = 0;
        }
        else
        {
          if ( !v41 )
            break;
          if ( v32 >= v41->max_length )
            goto LABEL_58;
          v41->m_Items[v32 + 1] = skillLv;
          if ( !Master_object )
            break;
          v42 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          v38->fields.skillLv,
                                                                          0LL);
          if ( !v42 )
            break;
          if ( v32 >= v42->max_length )
            goto LABEL_58;
          v45 = Master_object;
          v46 = &v42->obj.klass + (int)v32;
          v46[4] = (Il2CppClass *)v45;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v45, v43, v44);
          v47 = this->fields.appendPassiveSkill;
          if ( !v47 )
            break;
          if ( v32 >= v47->max_length )
            goto LABEL_58;
          v48 = v47->m_Items[v32];
          if ( !v48 )
            break;
          v49 = *explanationList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                          v40,
                                                                          v48->fields.skillLv,
                                                                          0LL);
          if ( !v49 )
            break;
          if ( v32 >= v49->max_length )
            goto LABEL_58;
          v52 = Master_object;
          v53 = &v49->obj.klass + (int)v32;
          v53[4] = (Il2CppClass *)v52;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v52, v50, v51);
          v54 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v32 >= v54->max_length )
            goto LABEL_58;
          v55 = 1;
        }
        ++v32;
        v54->m_Items[v34 + 4] = v55;
        if ( (_DWORD)v13 == v32 )
          return;
      }
      sub_1B8880C(Master_object, skillId);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)idList, 0, (int32_t)titleList, (int32_t)explanationList);
    *titleList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, 0, v82, v83);
    *explanationList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanationList, 0, v84, v85);
    *releaseStateList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)releaseStateList, 0, v86, v87);
    *lvList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lvList, 0, v88, v89);
  }
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo_40506644(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x20
  SkillInfo_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  __int64 v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  unsigned __int64 v22; // x25
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  SkillInfo_array *v27; // x26
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x0
  System_Int32_array *v31; // [xsp+0h] [xbp-70h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4A5C351 & 1) == 0 )
  {
    sub_1B885B0(&SkillInfo___TypeInfo);
    sub_1B885B0(&SkillInfo_TypeInfo);
    byte_4A5C351 = 1;
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
  if ( idList && (v10 = *(_QWORD *)&idList->max_length) != 0 )
  {
    v11 = (SkillInfo_array *)sub_1B88658(SkillInfo___TypeInfo, (unsigned int)v10);
    *skillInfoList = v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v11, v12, v13);
    if ( (int)v10 >= 1 )
    {
      v14 = -(__int64)(unsigned int)v10;
      v15 = 8LL;
      v16 = 32LL;
      do
      {
        v17 = sub_1B887FC(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v17, 0LL);
        if ( !v17 )
          goto LABEL_26;
        *(_DWORD *)(v17 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v22 = v15 - 8;
        if ( v15 - 8 >= (unsigned __int64)idList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v17 + 16) = *((_DWORD *)&idList->obj.klass + v15);
        if ( !v31 )
          goto LABEL_26;
        if ( v22 >= v31->max_length )
          goto LABEL_27;
        *(_DWORD *)(v17 + 20) = *((_DWORD *)&v31->obj.klass + v15);
        if ( !titleList )
          goto LABEL_26;
        if ( v22 >= titleList->max_length )
          goto LABEL_27;
        v23 = *(__int64 *)((char *)&titleList->obj.klass + v16);
        *(_QWORD *)(v17 + 32) = v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), v23, v20, v21);
        if ( !explanationList )
          goto LABEL_26;
        if ( v22 >= explanationList->max_length )
          goto LABEL_27;
        v26 = *(__int64 *)((char *)&explanationList->obj.klass + v16);
        *(_QWORD *)(v17 + 40) = v26;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 40), v26, v24, v25);
        v27 = *skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_1B8880C(v18, v19);
        v18 = sub_1B886EC(v17, v27->obj.klass->_1.element_class);
        if ( !v18 )
        {
          v30 = sub_1B88830(0LL);
          sub_1B886D8(v30, 0LL);
        }
        if ( v22 >= v27->max_length )
LABEL_27:
          sub_1B88814(v18, v19);
        *(Il2CppClass **)((char *)&v27->obj.klass + v16) = (Il2CppClass *)v17;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v27 + v16), v17, v28, v29);
        ++v15;
        v16 += 8LL;
      }
      while ( v14 + v15 != 8 );
    }
  }
  else
  {
    *skillInfoList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, 0, v8, v9);
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
  int LimitCountWithRandom; // w20
  int32_t limitCount; // w21
  BalanceConfig_c *v6; // x0
  ServantLeaderInfo_c *v7; // x0
  int32_t v8; // w19

  if ( (byte_4A5C340 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&ServantLeaderInfo_TypeInfo);
    byte_4A5C340 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( LimitCountWithRandom > 10 || !LimitCountWithRandom || NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
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
      if ( OptionManager__GetFriendImageLimitCount(0LL) )
        return this->fields.limitCount;
    }
  }
  v8 = this->fields.limitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetLimitCountByDispLimit(LimitCountWithRandom - 1, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__GetLimitChangeDic(
        ServantLeaderInfo_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  DataManager_o *limitChangeDic; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5C34C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C34C = 1;
  }
  value = 0;
  limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
          limit,
          &value,
          (const MethodInfo_3166520 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    limitChangeDic = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( limitChangeDic )
    {
      limitChangeDic = (DataManager_o *)DataManager__GetMasterData_object_(
                                          limitChangeDic,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
            (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_1B8880C(limitChangeDic, *(_QWORD *)&limit);
  }
  return value;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__GetLimitCountWithRandom(
        ServantLeaderInfo_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t ChoiceLimitCount_31630160; // w0
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v7; // x0

  if ( (byte_4A5C318 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A5C318 = 1;
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
  ChoiceLimitCount_31630160 = RandomLimitCountManager__GetChoiceLimitCount_31630160(this, 0LL);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_31630160;
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


System_Int32_array *__fastcall ServantLeaderInfo__GetPassiveSkillIdList(
        ServantLeaderInfo_o *this,
        int32_t dispSvtId,
        System_Int32_array *classPassive,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5C321 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C321 = 1;
  }
  if ( !classPassive )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v7);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               dispSvtId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  __int64 v8; // x23
  System_String_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x0
  DataManager_o *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  unsigned __int64 v20; // x25
  unsigned int v21; // w24
  __int64 v22; // x26
  int32_t *v23; // x27
  System_String_array *v24; // x28
  SkillEntity_o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  DataManager_o *v28; // x1
  Il2CppClass **v29; // x0
  System_String_array *v30; // x28
  int32_t v31; // w2
  int32_t v32; // w3
  DataManager_o *v33; // x1
  Il2CppClass **v34; // x0
  unsigned __int64 max_length; // x8
  int32_t v36; // w2
  int32_t v37; // w3

  if ( (byte_4A5C326 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5C326 = 1;
  }
  if ( !idList )
    goto LABEL_29;
  v8 = *(_QWORD *)&idList->max_length;
  if ( !v8 )
    goto LABEL_29;
  v9 = (System_String_array *)sub_1B88658(string___TypeInfo, (unsigned int)v8);
  *titleList = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v9, v10, v11);
  v12 = (System_String_array *)sub_1B88658(string___TypeInfo, (unsigned int)v8);
  *explanationList = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v12, v13, v14);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BDA48C(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BDA48C(v17);
  MasterData_object = **(DataManager_o ***)(v17 + 184);
  if ( !MasterData_object )
LABEL_31:
    sub_1B8880C(MasterData_object, v15);
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)v8 < 1 )
    goto LABEL_29;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v20 = 0LL;
  v21 = 0;
  v22 = (unsigned int)v8;
  v23 = &idList->m_Items[1];
  do
  {
    if ( v20 >= idList->max_length )
LABEL_30:
      sub_1B88814(MasterData_object, v15);
    v15 = (unsigned int)v23[v20];
    if ( (int)v15 >= 1 )
    {
      if ( !v19 )
        goto LABEL_31;
      MasterData_object = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                             v19,
                                             v15,
                                             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( MasterData_object )
      {
        v24 = *titleList;
        v25 = (SkillEntity_o *)MasterData_object;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectTitle((SkillEntity_o *)MasterData_object, 0, 0LL);
        if ( !v24 )
          goto LABEL_31;
        if ( v21 >= v24->max_length )
          goto LABEL_30;
        v28 = MasterData_object;
        v29 = &v24->obj.klass + (int)v21;
        v29[4] = (Il2CppClass *)v28;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v28, v26, v27);
        v30 = *explanationList;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectExplanation(v25, 0, 0LL);
        if ( !v30 )
          goto LABEL_31;
        if ( v21 >= v30->max_length )
          goto LABEL_30;
        v33 = MasterData_object;
        v34 = &v30->obj.klass + (int)v21;
        v34[4] = (Il2CppClass *)v33;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v33, v31, v32);
        if ( v20 != v21 )
        {
          max_length = idList->max_length;
          if ( v20 >= max_length || v21 >= (unsigned int)max_length )
            goto LABEL_30;
          idList->m_Items[v21 + 1] = v23[v20];
          v23[v20] = 0;
        }
        ++v21;
      }
      else
      {
        if ( v20 >= idList->max_length )
          goto LABEL_30;
        v23[v20] = 0;
      }
    }
    ++v20;
  }
  while ( v22 != v20 );
  if ( !v21 )
  {
LABEL_29:
    *titleList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, 0, (int32_t)explanationList, (int32_t)idList);
    *explanationList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanationList, 0, v36, v37);
  }
}


int32_t __fastcall ServantLeaderInfo__GetRestrictionTargetType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
    return 99;
  else
    return 2;
}


System_Int32_array *__fastcall ServantLeaderInfo__GetSkillIdList(
        ServantLeaderInfo_o *this,
        int32_t id1,
        int32_t id2,
        int32_t id3,
        const MethodInfo *method)
{
  BalanceConfig_c *v8; // x0
  System_Int32_array *result; // x0
  __int64 v10; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A5C31E & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C31E = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1B8880C(0LL, v10);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = id1, max_length == 1) || (result->m_Items[2] = id2, max_length <= 2) )
    sub_1B88814(result, v10);
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
  __int64 v7; // x0
  __int64 v8; // x0
  DataManager_o *Entity; // x0
  Il2CppObject *MasterData_object; // x26
  __int64 v11; // x8
  __int64 v12; // x0
  BalanceConfig_c **v13; // x25
  const MethodInfo *v14; // x1
  System_Int32_array *SkillLevelList; // x0
  BalanceConfig_c *v16; // x8
  System_Int32_array *v17; // x22
  __int64 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  unsigned __int64 v21; // x21
  __int64 v22; // x23
  il2cpp_array_size_t v23; // w29
  int32_t *v24; // x24
  SkillEntity_o *v25; // x27
  BalanceConfig_c **v26; // x20
  ServantSkillEntity_o *EntityFromSkillId; // x26
  __int64 v28; // x25
  System_String_o *EffectTitle; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *EffectExplanation; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x8
  int32_t skillNum; // w8
  ServantStatusBattleListViewItem_c *klass; // x26
  int32_t v38; // w2
  int32_t v39; // w3
  void **v40; // x0
  int32_t *v41; // x20
  int32_t *i; // x21
  __int64 v43; // x0
  Il2CppObject *v44; // [xsp+0h] [xbp-90h]
  int32_t *v45; // [xsp+8h] [xbp-88h]
  ServantSkillMaster_o *v47; // [xsp+18h] [xbp-78h]
  ServantStatusBattleListViewItem_o *v48; // [xsp+20h] [xbp-70h]
  __int64 v49; // [xsp+28h] [xbp-68h]

  v48 = (ServantStatusBattleListViewItem_o *)skillInfoList;
  if ( (byte_4A5C324 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&SkillInfo___TypeInfo);
    sub_1B885B0(&SkillInfo_TypeInfo);
    byte_4A5C324 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  Entity = **(DataManager_o ***)(v8 + 184);
  if ( !Entity )
    goto LABEL_56;
  MasterData_object = DataManager__GetMasterData_object_(
                        Entity,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BDA48C(v12);
  Entity = **(DataManager_o ***)(v12 + 184);
  if ( !Entity )
LABEL_56:
    sub_1B8880C(Entity, skillInfoList);
  v13 = &BalanceConfig_TypeInfo;
  v47 = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                  Entity,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v14);
  v16 = BalanceConfig_TypeInfo;
  v17 = SkillLevelList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v18 = sub_1B88658(SkillInfo___TypeInfo, (unsigned int)v16->static_fields->SvtSkillListMax);
  v48->klass = (ServantStatusBattleListViewItem_c *)v18;
  sub_1B88554(v48, v18, v19, v20);
  v21 = 0LL;
  v49 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24 = &idList->m_Items[1];
  v44 = MasterData_object;
  v45 = &v17->m_Items[1];
  while ( 1 )
  {
    Entity = (DataManager_o *)*v13;
    if ( !(*v13)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v13;
    }
    if ( (__int64)v21 >= *(int *)(*(_QWORD *)&Entity[1].fields._DispLog + 32LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v21 >= idList->max_length )
LABEL_57:
      sub_1B88814(Entity, skillInfoList);
    skillInfoList = (SkillInfo_array **)(unsigned int)v24[v21];
    if ( (int)skillInfoList >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_56;
      Entity = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)skillInfoList,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( v21 >= idList->max_length )
          goto LABEL_57;
        v25 = (SkillEntity_o *)Entity;
        Entity = (DataManager_o *)v47;
        if ( !v47 )
          goto LABEL_56;
        v26 = v13;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v47, dispSvtId, (int)v21 + 1, v24[v21], 0LL);
        v28 = sub_1B887FC(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v28, 0LL);
        if ( v21 >= idList->max_length )
          goto LABEL_57;
        if ( !v28 )
          goto LABEL_56;
        *(_DWORD *)(v28 + 16) = v24[v21];
        if ( !v17 )
          goto LABEL_56;
        if ( v21 >= v17->max_length )
          goto LABEL_57;
        *(_DWORD *)(v28 + 20) = v45[v21];
        Entity = (DataManager_o *)SkillEntity__getEffectChargeTurn(v25, v45[v21], 0LL);
        *(_DWORD *)(v28 + 24) = (_DWORD)Entity;
        if ( v21 >= v17->max_length )
          goto LABEL_57;
        EffectTitle = SkillEntity__getEffectTitle(v25, v45[v21], 0LL);
        *(_QWORD *)(v28 + 32) = EffectTitle;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)EffectTitle, v30, v31);
        if ( v21 >= v17->max_length )
          goto LABEL_57;
        EffectExplanation = SkillEntity__getEffectExplanation(v25, v45[v21], 0LL);
        *(_QWORD *)(v28 + 40) = EffectExplanation;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 40), (int32_t)EffectExplanation, v33, v34);
        v35 = v49;
        if ( EntityFromSkillId )
          v22 = v28;
        if ( !EntityFromSkillId )
          v35 = v28;
        v49 = v35;
        if ( EntityFromSkillId )
        {
          Entity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          if ( !v22 )
            goto LABEL_56;
          *(_DWORD *)(v22 + 48) = (_DWORD)Entity;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          if ( !v35 )
            goto LABEL_56;
          skillNum = 0;
          *(_DWORD *)(v49 + 48) = 0;
        }
        *(_DWORD *)(v28 + 52) = skillNum;
        *(_BYTE *)(v28 + 56) = 1;
        klass = v48->klass;
        if ( !v48->klass )
          goto LABEL_56;
        Entity = (DataManager_o *)sub_1B886EC(v28, *((_QWORD *)klass->_1.image + 8));
        if ( !Entity )
        {
          v43 = sub_1B88830(0LL);
          sub_1B886D8(v43, 0LL);
        }
        if ( v23 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_57;
        v40 = &klass->_1.image + (int)v23;
        v40[4] = (void *)v28;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), v28, v38, v39);
        MasterData_object = v44;
        ++v23;
        v13 = v26;
      }
    }
    ++v21;
  }
  v41 = &v17->m_Items[v23 + 1];
  for ( i = &idList->m_Items[v23 + 1]; ; ++i )
  {
    if ( !LODWORD(Entity[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v13;
    }
    if ( (signed int)v23 >= *(_DWORD *)(*(_QWORD *)&Entity[1].fields._DispLog + 32LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v23 >= idList->max_length )
      goto LABEL_57;
    *i = 0;
    if ( !v17 )
      goto LABEL_56;
    if ( v23 >= v17->max_length )
      goto LABEL_57;
    *v41++ = -1;
    ++v23;
  }
}


int32_t __fastcall ServantLeaderInfo__GetTimesToRestart(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v7; // x1
  UserEventDataLostEntity_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x19
  __int64 v13; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5C353 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C353 = 1;
  }
  entity = 0LL;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v8 = entity;
      v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = v10;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
      if ( !v8 )
        goto LABEL_21;
      if ( UserEventDataLostEntity__IsRestart(v8, UserId, 0LL) )
      {
        v11 = entity;
        v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v17.fields.currentCryptoKey = v13;
        *(_QWORD *)&v17.fields.fakeValue = v12;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
        if ( v11 )
          return UserEventDataLostEntity__GetTimesToRestart(v11, UserId, 0LL);
LABEL_21:
        sub_1B8880C(UserId, v7);
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
  sub_1B88554(p_classPassive, (int32_t)PassiveSkillIdList, v9, v10);
  v13 = this->fields.afterTransformSvtInfo;
  if ( !v13 )
    sub_1B8880C(v11, v12);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)idList, (int32_t)TransformedPassiveSkillIdList, v10, v11);
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
  __int64 v9; // x0
  __int64 v10; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDvcEntity_o *EntityFromSvtIdDvcId; // x22
  TreasureDvcInfo_o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  TreasureDvcInfo_o *v16; // x8
  int32_t tdLv; // w9

  if ( (byte_4A5C337 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A5C337 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  MasterData_object = **(Il2CppObject ***)(v10 + 184);
  if ( !MasterData_object )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !MasterData_object )
    goto LABEL_13;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           (ServantTreasureDvcMaster_o *)MasterData_object,
                           dispSvtId,
                           treasureDeviceId,
                           0LL);
  v13 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v13, 0LL);
  *tdInfo = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v13, v14, v15);
  if ( EntityFromSvtIdDvcId )
  {
    v16 = *tdInfo;
    if ( *tdInfo )
    {
      v16->fields.id = treasureDeviceId;
      tdLv = this->fields.treasureDeviceLv;
      v16->fields.lv = tdLv;
      ServantTreasureDvcEntity__getEffectExplanation(
        EntityFromSvtIdDvcId,
        &v16->fields.name,
        &v16->fields.explanation,
        &v16->fields.maxLv,
        &v16->fields.guageCount,
        &v16->fields.cardId,
        &v16->fields.strengthStatus,
        &v16->fields.treasureDeviceNum,
        tdLv,
        0LL);
      return EntityFromSvtIdDvcId != 0LL;
    }
LABEL_13:
    sub_1B8880C(MasterData_object, tdInfo);
  }
  return EntityFromSvtIdDvcId != 0LL;
}


bool __fastcall ServantLeaderInfo__IsDataLost(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v7; // x1
  UserEventDataLostEntity_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x19
  __int64 v13; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5C352 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C352 = 1;
  }
  entity = 0LL;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
  v8 = entity;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v8 )
    goto LABEL_22;
  if ( UserEventDataLostEntity__IsRestart(v8, UserId, 0LL) )
    return 0;
  v11 = entity;
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  if ( !v11 )
LABEL_22:
    sub_1B8880C(UserId, v7);
  return UserEventDataLostEntity__IsDataLost(v11, UserId, 0LL);
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
  const MethodInfo *v12; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5C354 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C354 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsSlotRestrictionForSupport(questRestrictionInfo, v9, limitCount, DispLimitCount, v12);
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
  const MethodInfo *v12; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5C334 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C334 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsUniqueIndividuality_40439764(questRestrictionInfo, v9, limitCount, DispLimitCount, v12);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction_40496588(
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
  const MethodInfo *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A5C335 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C335 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return QuestRestrictionInfo__IsUniqueIndividuality_40440384(
           questRestrictionInfo,
           v13,
           limitCount,
           DispLimitCount,
           partyItem,
           num,
           -1,
           v16);
}


void __fastcall ServantLeaderInfo__SetServantNameBySpoilerProtection(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_String_o **p_overwriteServantName; // x22
  ServantStatusBattleListViewItem_o *p_overwriteServantDetailName; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  ServantEntity_o *v15; // x21
  const MethodInfo *v16; // x1
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w23
  int32_t v19; // w24
  int32_t LimitCountByDispLimit; // w23
  Il2CppObject *v21; // x0
  __int64 v22; // x25
  __int64 v23; // x26
  ServantLimitImageMaster_o *v24; // x24
  int32_t ServantLimitCountSealAfter; // w0
  System_String_o *Name; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *Master_object; // x23
  const MethodInfo *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t CardImageLimitCount; // w22
  int32_t LimitCountByImageLimitCostumeIn; // w22
  Il2CppObject *v35; // x0
  __int64 v36; // x23
  __int64 v37; // x24
  ServantLimitImageMaster_o *v38; // x19
  int32_t v39; // w0
  System_String_o *v40; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4A5C34D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C34D = 1;
  }
  this->fields.overwriteServantName = 0LL;
  p_overwriteServantName = &this->fields.overwriteServantName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteServantName, 0, v2, v3);
  p_overwriteServantDetailName = (ServantStatusBattleListViewItem_o *)&this->fields.overwriteServantDetailName;
  this->fields.overwriteServantDetailName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteServantDetailName, 0, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v13;
  *(_QWORD *)&v41.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v41, 0LL);
  if ( !v14 )
    goto LABEL_29;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v14,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  v15 = (ServantEntity_o *)Instance;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v16);
    limitCount = this->fields.limitCount;
    v19 = DispLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v19, limitCount, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v21 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v24 = (ServantLimitImageMaster_o *)v21;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v42.fields.currentCryptoKey = v23;
      *(_QWORD *)&v42.fields.fakeValue = v22;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v42, 0LL);
      if ( v24 )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v24,
                                       (int32_t)Instance,
                                       LimitCountByDispLimit,
                                       0LL);
        Name = ServantEntity__getName(v15, ServantLimitCountSealAfter, -1, 0LL);
        *p_overwriteServantName = Name;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteServantName, (int32_t)Name, v27, v28);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                     this->fields.svtId,
                                     0LL);
        if ( Master_object )
        {
          if ( !ServantLimitAddMaster__IsOverwriteSvtDetailName(
                  (ServantLimitAddMaster_o *)Master_object,
                  (int32_t)Instance,
                  0LL) )
          {
            v40 = *p_overwriteServantName;
            goto LABEL_28;
          }
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v30);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              CardImageLimitCount,
                                              0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            v35 = DataManager__GetMasterData_object_(
                    (DataManager_o *)Instance,
                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
            v37 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v36 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            v38 = (ServantLimitImageMaster_o *)v35;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v43.fields.currentCryptoKey = v37;
            *(_QWORD *)&v43.fields.fakeValue = v36;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43, 0LL);
            if ( v38 )
            {
              v39 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                      v38,
                      (int32_t)Instance,
                      LimitCountByImageLimitCostumeIn,
                      0LL);
              v40 = ServantEntity__getName(v15, -1, v39, 0LL);
LABEL_28:
              p_overwriteServantDetailName->klass = (ServantStatusBattleListViewItem_c *)v40;
              sub_1B88554(p_overwriteServantDetailName, (int32_t)v40, v31, v32);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1B8880C(Instance, v10);
  }
}


void __fastcall ServantLeaderInfo__SetTransformData(
        ServantLeaderInfo_o *this,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  ServantTransformMaster_o *v8; // x21
  void *UseEntityList; // x0
  __int64 v10; // x1
  AfterTransformSvtInfo_o *v11; // x22
  struct AfterTransformSvtInfo_o **p_afterTransformSvtInfo; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t aftDispLimitCount; // w28
  Il2CppObject *v16; // x22
  ServantLimitMaster_o *v17; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  ServantLimitEntity_o *v20; // x23
  _DWORD *v21; // x24
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x19
  int32_t atkMax; // w26
  int32_t atkBase; // w29
  int v25; // w27
  struct AfterTransformSvtInfo_o *v26; // x29
  int32_t atk; // w19
  int32_t adjustAtk; // w26
  struct AfterTransformSvtInfo_o *v29; // x8
  __int64 v30; // x9
  Il2CppObject *v31; // x24
  unsigned int v32; // w9
  __int64 v33; // x10
  struct AfterTransformSvtInfo_o *v34; // x8
  __int64 v35; // x10
  __int64 v36; // x9
  Il2CppObject *v37; // x0
  void *v38; // x24
  Il2CppClass *v39; // x25
  ServantTreasureDvcMaster_o *v40; // x22
  int32_t friendshipRanka; // [xsp+14h] [xbp-6Ch]
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4A5C31A & 1) == 0 )
  {
    sub_1B885B0(&AfterTransformSvtInfo_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CheckCombineResStatus_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C31A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v7;
  *(_QWORD *)&v43.fields.fakeValue = v6;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43, 0LL);
  if ( !v8 )
    goto LABEL_49;
  if ( !ServantTransformMaster__TryGetEntity(v8, &entity, (int32_t)UseEntityList, this->fields.dispLimitCount + 1, 0LL) )
    return;
  v11 = (AfterTransformSvtInfo_o *)sub_1B887FC(AfterTransformSvtInfo_TypeInfo);
  AfterTransformSvtInfo___ctor(v11, 0LL);
  this->fields.afterTransformSvtInfo = v11;
  p_afterTransformSvtInfo = &this->fields.afterTransformSvtInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterTransformSvtInfo, (int32_t)v11, v13, v14);
  if ( !entity )
    goto LABEL_49;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_49;
  if ( !UseEntityList )
    goto LABEL_49;
  friendshipRanka = friendshipRank;
  v16 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)UseEntityList,
          entity->fields.aftSvtId,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v16 )
    goto LABEL_49;
  v17 = (ServantLimitMaster_o *)UseEntityList;
  klass = v16[1].klass;
  monitor = v16[1].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = klass;
  *(_QWORD *)&v44.fields.fakeValue = monitor;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v44, 0LL);
  if ( !v17 )
    goto LABEL_49;
  v20 = ServantLimitMaster__GetEntity(v17, (int32_t)UseEntityList, this->fields.limitCount, 0LL);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExpMaster___);
  if ( !UseEntityList )
    goto LABEL_49;
  UseEntityList = ServantExpMaster__GetEntity(
                    (ServantExpMaster_o *)UseEntityList,
                    HIDWORD(v16[8].klass),
                    this->fields.lv,
                    0LL);
  if ( !v20 )
    goto LABEL_49;
  v21 = UseEntityList;
  if ( !UseEntityList )
    goto LABEL_49;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  atkBase = v20->fields.atkBase;
  atkMax = v20->fields.atkMax;
  v25 = *((_DWORD *)UseEntityList + 7);
  UseEntityList = CheckCombineResStatus_TypeInfo;
  if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
  if ( !afterTransformSvtInfo )
    goto LABEL_49;
  afterTransformSvtInfo->fields.atk = v25 * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                                    + v20->fields.atkBase;
  v26 = *p_afterTransformSvtInfo;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_49;
  atk = v26->fields.atk;
  adjustAtk = this->fields.adjustAtk;
  UseEntityList = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UseEntityList = BalanceConfig_TypeInfo;
  }
  v29 = *p_afterTransformSvtInfo;
  v30 = *((_QWORD *)UseEntityList + 23);
  v26->fields.atk = atk + *(_DWORD *)(v30 + 308) * adjustAtk;
  if ( !v29 )
    goto LABEL_49;
  v29->fields.hp = (v20->fields.hpMax - v20->fields.hpBase)
                 * v21[7]
                 / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                 + v20->fields.hpBase
                 + *(_DWORD *)(v30 + 312) * this->fields.adjustHp;
  v31 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v16[1],
                            0LL);
  if ( !v31 )
    goto LABEL_49;
  UseEntityList = ServantSkillMaster__getUseEntityList(
                    (ServantSkillMaster_o *)v31,
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
  v32 = *((_DWORD *)UseEntityList + 6);
  if ( !v32 )
    goto LABEL_50;
  v33 = *((_QWORD *)UseEntityList + 4);
  v34 = this->fields.afterTransformSvtInfo;
  if ( v33 )
    LODWORD(v33) = *(_DWORD *)(v33 + 28);
  if ( !v34 )
    goto LABEL_49;
  v34->fields.skillId1 = v33;
  if ( v32 <= 1 )
    goto LABEL_50;
  v35 = *((_QWORD *)UseEntityList + 5);
  if ( v35 )
    LODWORD(v35) = *(_DWORD *)(v35 + 28);
  v34->fields.skillId2 = v35;
  if ( v32 <= 2 )
LABEL_50:
    sub_1B88814(UseEntityList, v10);
  v36 = *((_QWORD *)UseEntityList + 6);
  if ( v36 )
    LODWORD(v36) = *(_DWORD *)(v36 + 28);
  v34->fields.skillId3 = v36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v37 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v39 = v16[1].klass;
  v38 = v16[1].monitor;
  v40 = (ServantTreasureDvcMaster_o *)v37;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v39;
  *(_QWORD *)&v45.fields.fakeValue = v38;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v40 )
    goto LABEL_49;
  UseEntityList = ServantTreasureDvcMaster__getUseEntity(
                    v40,
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
    sub_1B8880C(UseEntityList, v10);
  (*p_afterTransformSvtInfo)->fields.treasureDeviceId = *((_DWORD *)UseEntityList + 8);
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal(
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

  if ( (byte_4A5C32D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C32D = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v4;
  *(_QWORD *)&v40.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_38:
    sub_1B8880C(Instance, v6);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  wearesDispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v8);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v9);
  if ( Instance )
  {
    v11 = Instance;
    if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
    {
      v12 = 0LL;
      v13 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
      while ( 1 )
      {
        v6 = *((unsigned int *)&v11->fields._DispLog + v12);
        if ( (int)v6 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_38;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v6, 1, 0LL);
          if ( Instance )
          {
            v14 = (SkillLvEntity_o *)Instance;
            v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v16;
            *(_QWORD *)&v41.fields.fakeValue = v15;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v41, 0LL);
            if ( !setupInfo )
              goto LABEL_38;
            v17 = (int)Instance;
            limitCount = this->fields.limitCount;
            EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
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
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              return v20;
          }
        }
        if ( v13 == v12 )
          break;
        if ( ++v12 >= (unsigned __int64)LODWORD(v11->fields.m_CancellationTokenSource) )
LABEL_19:
          sub_1B88814(Instance, v6);
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
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)*v21;
    if ( !(*v21)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)*v21;
    }
    v26 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL);
    v20 = (__int64)i < v26;
    if ( (__int64)i >= v26 )
      break;
    if ( !SkillIdList )
      goto LABEL_38;
    if ( i >= SkillIdList->max_length )
      goto LABEL_19;
    v6 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v6 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_38;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_19;
      if ( !MasterData_object )
        goto LABEL_38;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v6, SkillLevelList->m_Items[i + 1], 0LL);
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
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v42, 0LL);
        if ( !setupInfo )
          goto LABEL_38;
        v32 = (int)Instance;
        v33 = this->fields.limitCount;
        v34 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
        EventUpVal = SkillLvEntity__getEventUpVal(v28, v32, v33, wearesDispLimitCount, setupInfo, v34, 1, 0, 0LL);
        v21 = v29;
        if ( EventUpVal )
          return v20;
      }
    }
  }
  return v20;
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal_40494840(
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

  if ( (byte_4A5C330 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C330 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v6;
  *(_QWORD *)&v22.fields.fakeValue = v5;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_37;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1B8880C(Instance, v8);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v11);
  if ( Instance && (v13 = Instance, (int)Instance->fields.m_CancellationTokenSource >= 1) )
  {
    v14 = 0;
    v15 = 0LL;
    v16 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
    while ( 1 )
    {
      v8 = *((unsigned int *)&v13->fields._DispLog + v15);
      if ( (int)v8 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_37;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v8, 1, 0LL);
        if ( Instance )
        {
          Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_39954432(
                                        (SkillLvEntity_o *)Instance,
                                        eventUpVallInfo,
                                        1,
                                        0,
                                        1,
                                        0,
                                        0LL,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v14 = 1;
        }
      }
      if ( v16 == v15 )
        break;
      if ( ++v15 >= (unsigned __int64)LODWORD(v13->fields.m_CancellationTokenSource) )
LABEL_20:
        sub_1B88814(Instance, v8);
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
    v8 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v8 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_37;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_20;
      if ( !MasterData_object )
        goto LABEL_37;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v8, SkillLevelList->m_Items[i + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_39954432(Entity, eventUpVallInfo, 1, 0, 1, 0, 0LL, 0LL) )
          v14 = 1;
      }
    }
  }
  return v14;
}


int32_t __fastcall ServantLeaderInfo__getBaseFriendPointUpVal(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v8; // x4
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v10; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5C329 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C329 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v4;
  *(_QWORD *)&v15.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1B8880C(Instance, v6);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__GetSkillIdList(
                    (ServantLeaderInfo_o *)MasterData_object,
                    this->fields.skillId1,
                    this->fields.skillId2,
                    this->fields.skillId3,
                    v8);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v10);
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
      v6 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v6 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_22;
        if ( i >= SkillLevelList->max_length )
LABEL_23:
          sub_1B88814(Instance, v6);
        if ( !MasterData_object )
          goto LABEL_22;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v6, SkillLevelList->m_Items[i + 1], 0LL);
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

  if ( (byte_4A5C343 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5C343 = 1;
  }
  if ( ConstantMaster__IsOtherImage(0LL) )
  {
    v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v5;
    *(_QWORD *)&v20.fields.fakeValue = v4;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v20, 0LL);
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
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
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
    if ( OptionManager__GetFriendCostume(0LL) )
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
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    --LimitCountWithRandom;
    return LimitCountWithRandom;
  }
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v19, v18, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4A5C341 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5C341 = 1;
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
  if ( (byte_4A5C34A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantLeaderInfo_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C34A = 1;
  }
  commandCode = v4->fields.commandCode;
  if ( !commandCode )
    return 0LL;
  max_length = commandCode->max_length;
  if ( max_length < 1 )
    return 0LL;
  v7 = 0LL;
  m_Items = commandCode->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= max_length )
      sub_1B88814(this, *(_QWORD *)&index);
    v9 = m_Items[v7];
    if ( !v9 )
      goto LABEL_16;
    if ( v9->fields.idx == index )
      break;
    if ( (int)++v7 >= max_length )
      return 0LL;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v13 = *(_QWORD *)&v9->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v9->fields.commandCodeId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v13;
  *(_QWORD *)&v15.fields.fakeValue = v12;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  if ( !v14 )
LABEL_16:
    sub_1B8880C(this, *(_QWORD *)&index);
  return (CommandCodeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  v14,
                                  (int32_t)this,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
}


System_Int32_array *__fastcall ServantLeaderInfo__getCommandCodeIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  struct CommandCodeStatus_array *commandCode; // x23
  int max_length; // w8
  System_Int32_array *v8; // x19
  int i; // w24
  CommandCodeStatus_o *v10; // x20
  int32_t idx; // w21
  __int64 v12; // x26
  __int64 v13; // x20
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5C349 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C349 = 1;
  }
  if ( !this->fields.commandCode )
    return 0LL;
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1B88658(int___TypeInfo, (unsigned int)v3->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_23:
    sub_1B8880C(v4, v5);
  max_length = commandCode->max_length;
  v8 = (System_Int32_array *)v4;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_24:
        sub_1B88814(v4, v5);
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
        v4 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
        if ( !v8 )
          goto LABEL_23;
        if ( (unsigned int)v12 >= v8->max_length )
          goto LABEL_24;
        v8->m_Items[v12 + 1] = (int)v4;
      }
      max_length = commandCode->max_length;
    }
  }
  return v8;
}


int32_t __fastcall ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4A5C33D & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5C33D = 1;
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
  int32_t LimitCountWithRandom; // w20
  int32_t limitCount; // w22
  int32_t v6; // w0
  int32_t v7; // w1
  int32_t v8; // w19

  if ( (byte_4A5C33F & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5C33F = 1;
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
        v6 = LimitCountWithRandom - 1;
        v7 = limitCount;
        return ImageLimitCount__GetLimitCountByDispLimit(v6, v7, 0LL);
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
    v8 = this->fields.limitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v6 = LimitCountWithRandom - 1;
    v7 = v8;
    return ImageLimitCount__GetLimitCountByDispLimit(v6, v7, 0LL);
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

  if ( (byte_4A5C32C & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C32C = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL) < 1 )
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
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

  if ( (byte_4A5C33B & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C33B = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL) >= 1 )
  {
    v13 = this->fields.equipTarget1;
    if ( !v13 )
      sub_1B8880C(0LL, v12);
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
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x1
  EquipTargetInfo_o *v9; // x0
  BalanceConfig_c *v10; // x0
  SkillInfo_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5C325 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&SkillInfo___TypeInfo);
    byte_4A5C325 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL) >= 1 )
  {
    v9 = this->fields.equipTarget1;
    if ( !v9 )
      sub_1B8880C(0LL, v8);
    EquipTargetInfo__getSkillInfo(v9, skillInfoList, 0LL);
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
    v11 = (SkillInfo_array *)sub_1B88658(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v11, v12, v13);
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

  if ( (byte_4A5C32A & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C32A = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL) < 1 )
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v13, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEventUpVal_40494464(
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
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  bool BaseEventUpVal_40494840; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v22; // w21
  EventUpValInfo_o *v23; // x24
  __int64 v24; // x22
  __int64 v25; // x23
  EquipTargetInfo_o *v26; // x0
  __int64 v27; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4A5C32E & 1) == 0 )
  {
    sub_1B885B0(&EventUpValInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C32E = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v8;
  *(_QWORD *)&v29.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v29, 0LL);
  limitCount = this->fields.limitCount;
  v11 = v9;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v12);
  npcFlag = this->fields.npcFlag;
  v15 = DispLimitCount;
  v16 = (EventUpValInfo_o *)sub_1B887FC(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v16, setupInfo, v11, limitCount, v15, npcFlag, 0LL);
  *eventUpVallInfo = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)eventUpVallInfo, (int32_t)v16, v17, v18);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL) < 1 )
    return 0;
  BaseEventUpVal_40494840 = ServantLeaderInfo__getBaseEventUpVal_40494840(this, eventUpVallInfo, v19);
  equipTarget1 = this->fields.equipTarget1;
  v22 = BaseEventUpVal_40494840;
  if ( !equipTarget1 )
    return v22;
  v23 = *eventUpVallInfo;
  v25 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v25;
  *(_QWORD *)&v30.fields.fakeValue = v24;
  v26 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
  if ( !v23 || (v23->fields.equipSvtId = (int)v26, (v26 = this->fields.equipTarget1) == 0LL) )
    sub_1B8880C(v26, v27);
  return (v22 | EquipTargetInfo__getEventUpVal_38887272(v26, eventUpVallInfo, 1, 0LL)) & 1;
}


bool __fastcall ServantLeaderInfo__getEventUpVal_40495452(
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
  int32_t v22; // w3
  const MethodInfo *v23; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v25; // x25
  __int64 v26; // x23
  __int64 v27; // x24
  EquipTargetInfo_o *v28; // x0
  __int64 v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4A5C32F & 1) == 0 )
  {
    sub_1B885B0(&EventUpValInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C32F = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v12;
  *(_QWORD *)&v31.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v31, 0LL);
  limitCount = this->fields.limitCount;
  v15 = v13;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v16);
  npcFlag = this->fields.npcFlag;
  v19 = DispLimitCount;
  v20 = (EventUpValInfo_o *)sub_1B887FC(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v20, setupInfo, v15, limitCount, v19, npcFlag, 0LL);
  *eventUpVallInfo = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)eventUpVallInfo, (int32_t)v20, v21, v22);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_40494840(this, eventUpVallInfo, v23) )
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
      v28 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v32, 0LL);
      if ( !v25 || (v25->fields.equipSvtId = (int)v28, (v28 = this->fields.equipTarget1) == 0LL) )
        sub_1B8880C(v28, v29);
      if ( EquipTargetInfo__getEventUpVal_38887272(v28, eventUpVallInfo, 1, 0LL) )
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

  if ( (byte_4A5C33A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C33A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  if ( !v14 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v16) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v18, HIDWORD(Entity[8].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
      v20 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_20;
    }
LABEL_21:
    sub_1B8880C(Instance, v10);
  }
  v20 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_20:
  *barExp = v20;
  return 1;
}


int32_t __fastcall ServantLeaderInfo__getFrameType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantExceedMaster_o *v8; // x20
  int32_t FrameType_39669416; // w20
  Il2CppObject *v10; // x21
  const MethodInfo *v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5C33C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C33C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantExceedMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  if ( !v8
    || (FrameType_39669416 = ServantExceedMaster__GetFrameType_39669416(
                               v8,
                               (int32_t)Instance,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v10 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v11),
        !v10) )
  {
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v10,
           (int32_t)Instance,
           this->fields.lv,
           FrameType_39669416,
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

  if ( (byte_4A5C328 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C328 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v5);
  if ( !this->fields.equipTarget1
    || EquipTargetInfo__getFriendPointUpVal(this->fields.equipTarget1, 0LL) <= BaseFriendPointUpVal )
  {
    return 0;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    sub_1B8880C(0LL, v7);
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

  if ( (byte_4A5C327 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C327 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL) < 1 )
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

  if ( (byte_4A5C345 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5C345 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 3, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
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
    if ( OptionManager__GetFriendCostume(0LL) )
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
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    --LimitCountWithRandom;
    return LimitCountWithRandom;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v13, v12, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getLevelMax(ServantLeaderInfo_o *this, const MethodInfo *method)
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

  if ( (byte_4A5C31B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C31B = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v4;
  *(_QWORD *)&v15.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, (int32_t)Instance, this->fields.limitCount, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_17:
    sub_1B8880C(Instance, v6);
  }
  v12 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0LL);
  lvMax = Entity->fields.lvMax;
  if ( v12 )
    lvMax += v12->fields.addLvMax;
  return lvMax;
}


int32_t __fastcall ServantLeaderInfo__getMaxCardImageLimitCount(
        ServantLeaderInfo_o *this,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  int32_t limitCount; // w20
  int32_t v9; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4A5C344 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C344 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetCardImageLimitCount(v9, limitCount, 0, isNpc, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t limitCount; // w19
  int32_t v7; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A5C342 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C342 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  limitCount = this->fields.limitCount;
  v7 = v5;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v7, limitCount, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t limitCount; // w19
  int32_t v7; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A5C33E & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C33E = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  limitCount = this->fields.limitCount;
  v7 = v5;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v7, limitCount, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxIconLimitCount(
        ServantLeaderInfo_o *this,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  int32_t limitCount; // w20
  int32_t v9; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4A5C346 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C346 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetCardImageLimitCount(v9, limitCount, 0, isNpc, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t limitCount; // w19
  int32_t v7; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A5C348 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C348 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  limitCount = this->fields.limitCount;
  v7 = v5;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  return ImageLimitCount__GetImageLimitCount(v7, limitCount, 0LL);
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

  if ( (byte_4A5C320 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C320 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v4;
  *(_QWORD *)&v13.fields.fakeValue = v3;
  v5 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  classPassive = this->fields.classPassive;
  p_classPassive = (ServantStatusBattleListViewItem_o *)&this->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(v5, (int32_t)v5, classPassive, v8);
  p_classPassive->klass = (ServantStatusBattleListViewItem_c *)PassiveSkillIdList;
  sub_1B88554(p_classPassive, (int32_t)PassiveSkillIdList, v10, v11);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)idList, (int32_t)PassiveSkillIdList, v9, v10);
  ServantLeaderInfo__GetPassiveSkillInfo(v11, titleList, explanationList, *idList, v12);
}


int32_t __fastcall ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4A5C347 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5C347 = 1;
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
  const MethodInfo *v15; // x6
  int32_t v16; // w5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A5C331 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C331 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v6;
  *(_QWORD *)&v18.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  npcFlag = this->fields.npcFlag;
  lv = this->fields.lv;
  v14 = DispLimitCount;
  if ( NpcServantFollowerEntity__IsNpc(npcFlag, 0LL) )
    v16 = 99;
  else
    v16 = 2;
  return QuestRestrictionInfo__IsRestriction_40435468(questRestrictionInfo, v9, limitCount, v14, lv, v16, v15);
}


int32_t __fastcall ServantLeaderInfo__getRarity(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5C31C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C31C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8 || (Instance = ServantLimitMaster__GetEntity(v8, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_9:
    sub_1B8880C(Instance, v4);
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

  if ( (byte_4A5C32B & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C32B = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL) >= 1
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

  if ( (byte_4A5C323 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C323 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
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
  BalanceConfig_c *v3; // x0
  System_Int32_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A5C31F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C31F = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v3->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1B8880C(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillLv2, max_length <= 2) )
  {
    sub_1B88814(result, v5);
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

  if ( (byte_4A5C336 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C336 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, v7, this->fields.treasureDeviceId, v8);
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo_40497284(
        ServantLeaderInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t klass; // w8

  if ( (byte_4A5C338 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5C338 = 1;
  }
  *tdLv = this->fields.treasureDeviceLv;
  if ( this->fields.treasureDeviceId < 1 )
  {
    klass = 0;
    LOBYTE(Entity) = 0;
  }
  else
  {
    v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BDA48C(v7);
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BDA48C(v8);
    MasterData_object = **(Il2CppObject ***)(v8 + 184);
    if ( !MasterData_object
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)MasterData_object,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
    {
      sub_1B8880C(MasterData_object, tdLv);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               this->fields.treasureDeviceId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  __int64 v3; // x0
  __int64 v4; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t treasureDeviceLv; // w8

  if ( (byte_4A5C339 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5C339 = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  MasterData_object = **(Il2CppObject ***)(v4 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.treasureDeviceId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  const MethodInfo *v8; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5C332 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C332 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_40439236(questRestrictionInfo, v7, v8);
}


bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction_40496256(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w1
  const MethodInfo *v12; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5C333 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C333 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_40439436(questRestrictionInfo, v11, partyItem, num, -1, v12);
}


bool __fastcall ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4A5C322 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C322 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7, 0LL) > 0;
}


bool __fastcall ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_4A5C317 & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A5C317 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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