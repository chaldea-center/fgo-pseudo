void __fastcall ServantLeaderInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1741E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantLeaderInfo_TypeInfo, v1, v2);
    byte_4B1741E = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo___ctor_41224104(
        ServantLeaderInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  void *Instance; // x0
  const MethodInfo *v25; // x1
  Il2CppObject *Entity; // x21
  int32_t v27; // w8
  int32_t MaxDispLimitCount; // w0
  long double v29; // q0
  int32_t v30; // w22
  __int64 v31; // x8
  __int64 v32; // x0
  Il2CppObject *MasterData_object; // x23
  unsigned int v34; // w8
  __int64 v35; // x9
  __int64 v36; // x9
  __int64 v37; // x8
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  long double v44; // q0
  __int64 v45; // x0
  __int64 v46; // x0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x2

  if ( (byte_4B173E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B173E2 = 1;
  }
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userId = 1LL;
  this->fields.classId = 0;
  this->fields.userSvtId = 1LL;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.exceedCount = 0;
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  this->fields.npcFlag = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, 0LL);
  if ( !Instance )
    goto LABEL_39;
  this->fields.hp = *((_DWORD *)Instance + 9);
  v27 = *((_DWORD *)Instance + 11);
  this->fields.adjustAtk = 0;
  this->fields.adjustHp = 0;
  this->fields.atk = v27;
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(this, v25);
  *(_QWORD *)&v29 = 0x100000001LL;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v30 = MaxDispLimitCount;
  v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1C1C6BC(v29);
  v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1C1C6BC(v29);
  Instance = **(void ***)(v32 + 184);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL);
  if ( !MasterData_object )
    goto LABEL_39;
  Instance = ServantSkillMaster__getUseEntityList(
               (ServantSkillMaster_o *)MasterData_object,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               v30,
               -1,
               -1LL,
               0LL);
  if ( !Instance )
    goto LABEL_39;
  v34 = *((_DWORD *)Instance + 6);
  if ( !v34 )
    goto LABEL_40;
  v35 = *((_QWORD *)Instance + 4);
  if ( v35 )
    LODWORD(v35) = *(_DWORD *)(v35 + 28);
  this->fields.skillId1 = v35;
  if ( v34 <= 1 )
    goto LABEL_40;
  v36 = *((_QWORD *)Instance + 5);
  if ( v36 )
    LODWORD(v36) = *(_DWORD *)(v36 + 28);
  this->fields.skillId2 = v36;
  if ( v34 <= 2 )
LABEL_40:
    sub_1BCAA44(Instance, v25);
  v37 = *((_QWORD *)Instance + 6);
  if ( v37 )
    LODWORD(v37) = *(_DWORD *)(v37 + 28);
  this->fields.skillId3 = v37;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_39;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    goto LABEL_36;
  v45 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
    v45 = sub_1C1C6BC(v44);
  v46 = *(_QWORD *)(*(_QWORD *)(v45 + 192) + 16LL);
  if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
    v46 = sub_1C1C6BC(v44);
  Instance = **(void ***)(v46 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL )
  {
LABEL_39:
    sub_1BCAA3C(Instance, v25);
  }
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)Instance,
                svtId,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v30,
                0,
                -1,
                0LL);
  if ( UseEntity )
    this->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
LABEL_36:
  this->fields.equipTarget1 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipTarget1, 0LL, v38, v39, v40, v41, v42, v43);
  this->fields.randomLimitCountTargets = 0LL;
  *(_QWORD *)&this->fields.imageLimitCount = 0LL;
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.updatedAt = 0LL;
  this->fields.portraitLimitCount = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.randomLimitCountTargets, 0LL, v48, v49, v50, v51, v52, v53);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    ServantLeaderInfo__SetTransformData(this, 0, v54);
}


void __fastcall ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_Dictionary_int__int__o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x2
  int32_t v24; // w0
  int32_t iconLimitCount; // w1
  const MethodInfo *v26; // x2
  int32_t v27; // w0
  int32_t dispLimitCount; // w1
  const MethodInfo *v29; // x2
  int32_t v30; // w0
  int32_t commandCardLimitCount; // w1
  const MethodInfo *v32; // x2
  int32_t v33; // w0
  int32_t portraitLimitCount; // w1
  const MethodInfo *v35; // x2
  ServantLeaderInfo_o *v36; // x0
  int32_t v37; // w1
  const MethodInfo *v38; // x2
  ServantLeaderInfo_o *AdjustLimitCount; // x0
  int32_t v40; // w1
  const MethodInfo *v41; // x2
  ServantLeaderInfo_o *v42; // x0
  int32_t v43; // w1
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4B17414 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&OptionManager_TypeInfo, v8, v9);
    byte_4B17414 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  if ( !OptionManager__GetSpoilerSetting(0LL) )
  {
    v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    *(_QWORD *)&v52.fields.currentCryptoKey = v12;
    *(_QWORD *)&v52.fields.fakeValue = v11;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL) >= 1 )
    {
      v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                   v13,
                                                                   v14,
                                                                   v15);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v16,
        (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v16;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.limitChangeDic,
        (int64_t)v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v24 = ServantLeaderInfo__GetLimitChangeDic(this, this->fields.imageLimitCount, v23);
      iconLimitCount = this->fields.iconLimitCount;
      this->fields.imageLimitCount = v24;
      v27 = ServantLeaderInfo__GetLimitChangeDic(this, iconLimitCount, v26);
      dispLimitCount = this->fields.dispLimitCount;
      this->fields.iconLimitCount = v27;
      v30 = ServantLeaderInfo__GetLimitChangeDic(this, dispLimitCount, v29);
      commandCardLimitCount = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = v30;
      v33 = ServantLeaderInfo__GetLimitChangeDic(this, commandCardLimitCount, v32);
      portraitLimitCount = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = v33;
      v36 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetLimitChangeDic(this, portraitLimitCount, v35);
      v37 = this->fields.dispLimitCount;
      this->fields.portraitLimitCount = (int)v36;
      AdjustLimitCount = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(v36, v37, v38);
      v40 = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = (int)AdjustLimitCount;
      v42 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(AdjustLimitCount, v40, v41);
      v43 = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = (int)v42;
      this->fields.portraitLimitCount = ServantLeaderInfo__GetAdjustLimitCount(v42, v43, v44);
      ServantLeaderInfo__SetServantNameBySpoilerProtection(this, v45);
      this->fields.limitChangeDic = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.limitChangeDic, 0LL, v46, v47, v48, v49, v50, v51);
    }
  }
}


// positive sp value has been detected, the output may be wrong!
void __fastcall ServantLeaderInfo__Finalize(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.equipTarget1 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipTarget1, 0LL, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_4B17417 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantLeaderInfo_TypeInfo, *(_QWORD *)&orgLimitCount, method);
    byte_4B17417 = 1;
  }
  v4 = ServantLeaderInfo_TypeInfo;
  if ( !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo, *(_QWORD *)&orgLimitCount);
    v4 = ServantLeaderInfo_TypeInfo;
  }
  if ( LIMIT_COUNT_THIRD_STAGE <= 10 && v4->static_fields->LIMIT_COUNT_THIRD_STAGE < LIMIT_COUNT_THIRD_STAGE )
  {
    LIMIT_COUNT_THIRD_STAGE = v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&orgLimitCount);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v24; // x1
  __int64 v25; // x25
  __int64 v26; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x24
  Il2CppObject *v28; // x24
  const MethodInfo *v29; // x1
  int32_t *Entity; // x0
  int32_t v31; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B173E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp, maxAjustAtk);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B173E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v33.fields.currentCryptoKey = v26;
  *(_QWORD *)&v33.fields.fakeValue = v25;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL);
  if ( !v27 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v27,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
LABEL_13:
    v31 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v28 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v29),
        !v28) )
  {
LABEL_15:
    sub_1BCAA3C(Instance, v22);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v28,
                        (int32_t)Instance,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_13;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v31 = Entity[8];
  result = 1;
LABEL_14:
  *secondMaxAdjustAtk = v31;
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *Master_object; // x0
  __int64 v35; // x1
  __int64 v36; // x26
  __int64 v37; // x27
  ServantAppendPassiveSkillMaster_o *v38; // x25
  int64_t EntityListFromSvtId; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_String_o *v47; // x26
  int64_t v48; // x25
  System_Int32_array *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_String_array *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_array *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Boolean_array *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Int32_array *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v85; // x27
  il2cpp_array_size_t v86; // w19
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x11
  int max_length; // w8
  __int64 v89; // x9
  __int64 v90; // x10
  AppendPassiveSkillInfo_o **m_Items; // x11
  AppendPassiveSkillInfo_o *v92; // x29
  __int64 v93; // x20
  __int64 v94; // x8
  System_Int32_array *v95; // x9
  SkillEntity_o *v96; // x28
  System_Int32_array *v97; // x8
  System_String_array *v98; // x22
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x1
  Il2CppClass **v106; // x0
  System_String_array *v107; // x22
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x1
  Il2CppClass **v115; // x0
  System_Boolean_array *v116; // x8
  char v117; // w9
  System_String_array *v118; // x22
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  int64_t v125; // x1
  Il2CppClass **v126; // x0
  __int64 v127; // x1
  System_String_array *v128; // x28
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  int64_t v135; // x1
  Il2CppClass **v136; // x0
  System_String_array *v137; // x8
  System_String_array *v138; // x8
  Il2CppClass **v139; // x28
  System_String_o *v140; // t1
  System_String_o *v141; // x0
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  System_String_array *v148; // x8
  Il2CppClass **v149; // x28
  PartyOrganizationUtility_o *v150; // x28
  System_String_o *v151; // x29
  System_String_o *v152; // t1
  System_String_o *v153; // x0
  System_String_o *v154; // x0
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  struct AppendPassiveSkillInfo_array *v161; // x8
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16

  if ( (byte_4B17418 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, idList, titleList);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&int___TypeInfo, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&string___TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_3834/*"COND_TYPE_TITLE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_3822/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v32, v33);
    byte_4B17418 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, idList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v37 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v38 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
  *(_QWORD *)&v189.fields.currentCryptoKey = v37;
  *(_QWORD *)&v189.fields.fakeValue = v36;
  EntityListFromSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v189, 0LL);
  if ( !v38
    || (EntityListFromSvtId = (int64_t)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                         v38,
                                         EntityListFromSvtId,
                                         0LL)) == 0 )
  {
LABEL_67:
    sub_1BCAA3C(EntityListFromSvtId, v40);
  }
  v47 = *(struct System_String_o **)(EntityListFromSvtId + 24);
  v48 = EntityListFromSvtId;
  if ( v47 || (v161 = this->fields.appendPassiveSkill) != 0LL && *(_QWORD *)&v161->max_length )
  {
    v49 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v47);
    *idList = v49;
    sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v49, v50, v51, v52, v53, v54, v55);
    v56 = (System_String_array *)sub_1BCA888(string___TypeInfo, (unsigned int)v47);
    *titleList = v56;
    sub_1BCA784((PartyOrganizationUtility_o *)titleList, (int64_t)v56, v57, v58, v59, v60, v61, v62);
    v63 = (System_String_array *)sub_1BCA888(string___TypeInfo, (unsigned int)v47);
    *explanationList = v63;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v63, v64, v65, v66, v67, v68, v69);
    v70 = (System_Boolean_array *)sub_1BCA888(bool___TypeInfo, (unsigned int)v47);
    *releaseStateList = v70;
    sub_1BCA784((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v70, v71, v72, v73, v74, v75, v76);
    v77 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v47);
    *lvList = v77;
    sub_1BCA784((PartyOrganizationUtility_o *)lvList, (int64_t)v77, v78, v79, v80, v81, v82, v83);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v84);
    EntityListFromSvtId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v47 >= 1 )
    {
      v85 = (DataMasterBase_TMaster__TEntity__PKType__o *)EntityListFromSvtId;
      v86 = 0;
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
        v92 = 0LL;
LABEL_24:
        if ( v86 >= *(_DWORD *)(v48 + 24) )
          goto LABEL_68;
        v93 = (int)v86;
        v94 = *(_QWORD *)(v48 + 8LL * (int)v86 + 32);
        if ( !v94 )
          goto LABEL_67;
        v95 = *idList;
        if ( !*idList )
          goto LABEL_67;
        if ( v86 >= v95->max_length )
          goto LABEL_68;
        v40 = *(unsigned int *)(v94 + 28);
        v95->m_Items[v86 + 1] = v40;
        if ( !v85 )
          goto LABEL_67;
        EntityListFromSvtId = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                         v85,
                                         v40,
                                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v96 = (SkillEntity_o *)EntityListFromSvtId;
        v97 = *lvList;
        if ( v92 )
        {
          if ( !v97 )
            goto LABEL_67;
          if ( v86 >= v97->max_length )
            goto LABEL_68;
          v97->m_Items[v86 + 1] = v92->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v98 = *titleList;
          EntityListFromSvtId = (int64_t)SkillEntity__getEffectTitle(
                                           (SkillEntity_o *)EntityListFromSvtId,
                                           v92->fields.skillLv,
                                           0LL);
          if ( !v98 )
            goto LABEL_67;
          if ( v86 >= v98->max_length )
            goto LABEL_68;
          v105 = EntityListFromSvtId;
          v106 = &v98->obj.klass + (int)v86;
          v106[4] = (Il2CppClass *)v105;
          sub_1BCA784((PartyOrganizationUtility_o *)(v106 + 4), v105, v99, v100, v101, v102, v103, v104);
          v107 = *explanationList;
          EntityListFromSvtId = (int64_t)SkillEntity__getEffectExplanation(v96, v92->fields.skillLv, 0LL);
          if ( !v107 )
            goto LABEL_67;
          if ( v86 >= v107->max_length )
            goto LABEL_68;
          v114 = EntityListFromSvtId;
          v115 = &v107->obj.klass + (int)v86;
          v115[4] = (Il2CppClass *)v114;
          sub_1BCA784((PartyOrganizationUtility_o *)(v115 + 4), v114, v108, v109, v110, v111, v112, v113);
          v116 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v86 >= v116->max_length )
            goto LABEL_68;
          v117 = 1;
        }
        else
        {
          if ( !v97 )
            goto LABEL_67;
          if ( v86 >= v97->max_length )
            goto LABEL_68;
          v97->m_Items[v86 + 1] = -1;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v118 = *titleList;
          EntityListFromSvtId = (int64_t)SkillEntity__getEffectTitle((SkillEntity_o *)EntityListFromSvtId, -1, 0LL);
          if ( !v118 )
            goto LABEL_67;
          if ( v86 >= v118->max_length )
            goto LABEL_68;
          v125 = EntityListFromSvtId;
          v126 = &v118->obj.klass + (int)v86;
          v126[4] = (Il2CppClass *)v125;
          sub_1BCA784((PartyOrganizationUtility_o *)(v126 + 4), v125, v119, v120, v121, v122, v123, v124);
          v128 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v127);
          EntityListFromSvtId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v128 )
            goto LABEL_67;
          if ( v86 >= v128->max_length )
            goto LABEL_68;
          v135 = EntityListFromSvtId;
          v136 = &v128->obj.klass + (int)v86;
          v136[4] = (Il2CppClass *)v135;
          sub_1BCA784((PartyOrganizationUtility_o *)(v136 + 4), v135, v129, v130, v131, v132, v133, v134);
          v137 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v86 >= v137->max_length )
            goto LABEL_68;
          EntityListFromSvtId = System_String__op_Inequality(
                                  v137->m_Items[v86],
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v138 = *explanationList;
            if ( !*explanationList )
              goto LABEL_67;
            if ( v86 >= v138->max_length )
              goto LABEL_68;
            v139 = &v138->obj.klass + (int)v86;
            v140 = (System_String_o *)v139[4];
            v139 += 4;
            v141 = System_String__Concat_62401220(v140, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            *v139 = (Il2CppClass *)v141;
            sub_1BCA784((PartyOrganizationUtility_o *)v139, (int64_t)v141, v142, v143, v144, v145, v146, v147);
          }
          v148 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v86 >= v148->max_length )
            goto LABEL_68;
          v149 = &v148->obj.klass + (int)v86;
          v152 = (System_String_o *)v149[4];
          v150 = (PartyOrganizationUtility_o *)(v149 + 4);
          v151 = v152;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
          v153 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v154 = System_String__Concat_62401220(v151, v153, 0LL);
          v150->klass = (PartyOrganizationUtility_c *)v154;
          sub_1BCA784(v150, (int64_t)v154, v155, v156, v157, v158, v159, v160);
          v116 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v86 >= v116->max_length )
            goto LABEL_68;
          v117 = 0;
        }
        ++v86;
        v116->m_Items[v93 + 4] = v117;
        if ( v86 == (_DWORD)v47 )
          return;
      }
      v89 = 0LL;
      v90 = v48 + 8LL * (int)v86 + 32;
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v89 < max_length )
      {
        v92 = m_Items[v89];
        if ( !v92 )
          goto LABEL_67;
        if ( v86 >= *(_DWORD *)(v48 + 24) )
          break;
        if ( !*(_QWORD *)v90 )
          goto LABEL_67;
        if ( v92->fields.skillId == *(_DWORD *)(*(_QWORD *)v90 + 28LL) )
          goto LABEL_24;
        if ( (int)++v89 >= max_length )
          goto LABEL_23;
      }
LABEL_68:
      sub_1BCAA44(EntityListFromSvtId, v40);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)idList, 0LL, v41, v42, v43, v44, v45, v46);
    *titleList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)titleList, 0LL, v162, v163, v164, v165, v166, v167);
    *explanationList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, 0LL, v168, v169, v170, v171, v172, v173);
    *releaseStateList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)releaseStateList, 0LL, v174, v175, v176, v177, v178, v179);
    *lvList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)lvList, 0LL, v180, v181, v182, v183, v184, v185);
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
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x8
  __int64 v34; // x25
  System_Int32_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_String_array *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_array *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Boolean_array *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Int32_array *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  int64_t Master_object; // x0
  __int64 skillId; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v73; // x26
  il2cpp_array_size_t v74; // w29
  struct AppendPassiveSkillInfo_array *v75; // x8
  __int64 v76; // x19
  AppendPassiveSkillInfo_o *v77; // x8
  System_Int32_array *v78; // x9
  struct AppendPassiveSkillInfo_array *v79; // x8
  AppendPassiveSkillInfo_o *v80; // x8
  int skillLv; // w10
  SkillEntity_o *v82; // x27
  System_Int32_array *v83; // x9
  System_String_array *v84; // x28
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x1
  Il2CppClass **v92; // x0
  struct AppendPassiveSkillInfo_array *v93; // x8
  AppendPassiveSkillInfo_o *v94; // x8
  System_String_array *v95; // x28
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x1
  Il2CppClass **v103; // x0
  System_Boolean_array *v104; // x8
  char v105; // w9
  System_String_array *v106; // x28
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x1
  Il2CppClass **v114; // x0
  __int64 v115; // x1
  System_String_array *v116; // x27
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  int64_t v123; // x1
  Il2CppClass **v124; // x0
  System_String_array *v125; // x8
  System_String_array *v126; // x8
  Il2CppClass **v127; // x27
  System_String_o *v128; // t1
  System_String_o *v129; // x0
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  System_String_array *v136; // x8
  Il2CppClass **v137; // x27
  PartyOrganizationUtility_o *v138; // x27
  System_String_o *v139; // x28
  System_String_o *v140; // t1
  System_String_o *v141; // x0
  System_String_o *v142; // x0
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7

  if ( (byte_4B17419 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, idList, titleList);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&int___TypeInfo, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&string___TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3834/*"COND_TYPE_TITLE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3822/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    byte_4B17419 = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (v34 = *(_QWORD *)&appendPassiveSkill->max_length) != 0 )
  {
    v35 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v34);
    *idList = v35;
    sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
    v42 = (System_String_array *)sub_1BCA888(string___TypeInfo, (unsigned int)v34);
    *titleList = v42;
    sub_1BCA784((PartyOrganizationUtility_o *)titleList, (int64_t)v42, v43, v44, v45, v46, v47, v48);
    v49 = (System_String_array *)sub_1BCA888(string___TypeInfo, (unsigned int)v34);
    *explanationList = v49;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v49, v50, v51, v52, v53, v54, v55);
    v56 = (System_Boolean_array *)sub_1BCA888(bool___TypeInfo, (unsigned int)v34);
    *releaseStateList = v56;
    sub_1BCA784((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v56, v57, v58, v59, v60, v61, v62);
    v63 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v34);
    *lvList = v63;
    sub_1BCA784((PartyOrganizationUtility_o *)lvList, (int64_t)v63, v64, v65, v66, v67, v68, v69);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v70);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v34 >= 1 )
    {
      v73 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v74 = 0;
      while ( 1 )
      {
        v75 = this->fields.appendPassiveSkill;
        if ( !v75 )
          break;
        if ( v74 >= v75->max_length )
          goto LABEL_58;
        v76 = (int)v74;
        v77 = v75->m_Items[v74];
        if ( !v77 )
          break;
        v78 = *idList;
        if ( !*idList )
          break;
        if ( v74 >= v78->max_length )
          goto LABEL_58;
        skillId = (unsigned int)v77->fields.skillId;
        v78->m_Items[v74 + 1] = skillId;
        if ( !v73 )
          break;
        Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                   v73,
                                   skillId,
                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v79 = this->fields.appendPassiveSkill;
        if ( !v79 )
          break;
        if ( v74 >= v79->max_length )
          goto LABEL_58;
        v80 = v79->m_Items[v74];
        if ( !v80 )
          break;
        skillLv = v80->fields.skillLv;
        v82 = (SkillEntity_o *)Master_object;
        v83 = *lvList;
        if ( skillLv < 1 )
        {
          if ( !v83 )
            break;
          if ( v74 >= v83->max_length )
            goto LABEL_58;
          v83->m_Items[v74 + 1] = -1;
          if ( !Master_object )
            break;
          v106 = *titleList;
          Master_object = (int64_t)SkillEntity__getEffectTitle((SkillEntity_o *)Master_object, -1, 0LL);
          if ( !v106 )
            break;
          if ( v74 >= v106->max_length )
            goto LABEL_58;
          v113 = Master_object;
          v114 = &v106->obj.klass + (int)v74;
          v114[4] = (Il2CppClass *)v113;
          sub_1BCA784((PartyOrganizationUtility_o *)(v114 + 4), v113, v107, v108, v109, v110, v111, v112);
          v116 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v115);
          Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v116 )
            break;
          if ( v74 >= v116->max_length )
            goto LABEL_58;
          v123 = Master_object;
          v124 = &v116->obj.klass + (int)v74;
          v124[4] = (Il2CppClass *)v123;
          sub_1BCA784((PartyOrganizationUtility_o *)(v124 + 4), v123, v117, v118, v119, v120, v121, v122);
          v125 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v74 >= v125->max_length )
            goto LABEL_58;
          Master_object = System_String__op_Inequality(v125->m_Items[v74], (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (Master_object & 1) != 0 )
          {
            v126 = *explanationList;
            if ( !*explanationList )
              break;
            if ( v74 >= v126->max_length )
              goto LABEL_58;
            v127 = &v126->obj.klass + (int)v74;
            v128 = (System_String_o *)v127[4];
            v127 += 4;
            v129 = System_String__Concat_62401220(v128, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            *v127 = (Il2CppClass *)v129;
            sub_1BCA784((PartyOrganizationUtility_o *)v127, (int64_t)v129, v130, v131, v132, v133, v134, v135);
          }
          v136 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v74 >= v136->max_length )
LABEL_58:
            sub_1BCAA44(Master_object, skillId);
          v137 = &v136->obj.klass + (int)v74;
          v140 = (System_String_o *)v137[4];
          v138 = (PartyOrganizationUtility_o *)(v137 + 4);
          v139 = v140;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, skillId);
          v141 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v142 = System_String__Concat_62401220(v139, v141, 0LL);
          v138->klass = (PartyOrganizationUtility_c *)v142;
          sub_1BCA784(v138, (int64_t)v142, v143, v144, v145, v146, v147, v148);
          v104 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v74 >= v104->max_length )
            goto LABEL_58;
          v105 = 0;
        }
        else
        {
          if ( !v83 )
            break;
          if ( v74 >= v83->max_length )
            goto LABEL_58;
          v83->m_Items[v74 + 1] = skillLv;
          if ( !Master_object )
            break;
          v84 = *titleList;
          Master_object = (int64_t)SkillEntity__getEffectTitle((SkillEntity_o *)Master_object, v80->fields.skillLv, 0LL);
          if ( !v84 )
            break;
          if ( v74 >= v84->max_length )
            goto LABEL_58;
          v91 = Master_object;
          v92 = &v84->obj.klass + (int)v74;
          v92[4] = (Il2CppClass *)v91;
          sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 4), v91, v85, v86, v87, v88, v89, v90);
          v93 = this->fields.appendPassiveSkill;
          if ( !v93 )
            break;
          if ( v74 >= v93->max_length )
            goto LABEL_58;
          v94 = v93->m_Items[v74];
          if ( !v94 )
            break;
          v95 = *explanationList;
          Master_object = (int64_t)SkillEntity__getEffectExplanation(v82, v94->fields.skillLv, 0LL);
          if ( !v95 )
            break;
          if ( v74 >= v95->max_length )
            goto LABEL_58;
          v102 = Master_object;
          v103 = &v95->obj.klass + (int)v74;
          v103[4] = (Il2CppClass *)v102;
          sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 4), v102, v96, v97, v98, v99, v100, v101);
          v104 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v74 >= v104->max_length )
            goto LABEL_58;
          v105 = 1;
        }
        ++v74;
        v104->m_Items[v76 + 4] = v105;
        if ( (_DWORD)v34 == v74 )
          return;
      }
      sub_1BCAA3C(Master_object, skillId);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)idList,
      0LL,
      (int64_t)titleList,
      (int32_t)explanationList,
      (System_String_o *)releaseStateList,
      (BattleSetupInfo_o *)lvList,
      (FollowerInfo_o *)method,
      v7);
    *titleList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)titleList, 0LL, v149, v150, v151, v152, v153, v154);
    *explanationList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, 0LL, v155, v156, v157, v158, v159, v160);
    *releaseStateList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)releaseStateList, 0LL, v161, v162, v163, v164, v165, v166);
    *lvList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)lvList, 0LL, v167, v168, v169, v170, v171, v172);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo_41245048(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x20
  SkillInfo_array *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x21
  __int64 v28; // x22
  __int64 v29; // x23
  int64_t v30; // x20
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  unsigned __int64 v39; // x25
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  SkillInfo_array *v48; // x26
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x0
  System_Int32_array *v56; // [xsp+0h] [xbp-70h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B1741A & 1) == 0 )
  {
    sub_1BCA7E0(&SkillInfo___TypeInfo, skillInfoList, isNpc);
    sub_1BCA7E0(&SkillInfo_TypeInfo, v8, v9);
    byte_4B1741A = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v56 = 0LL;
  releaseStateList = 0LL;
  if ( isNpc )
    ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v56,
      v4);
  else
    ServantLeaderInfo__GetAppendPassiveSkillInfo(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v56,
      v4);
  if ( idList && (v16 = *(_QWORD *)&idList->max_length) != 0 )
  {
    v17 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)v16);
    *skillInfoList = v17;
    sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    if ( (int)v16 >= 1 )
    {
      v27 = -(__int64)(unsigned int)v16;
      v28 = 8LL;
      v29 = 32LL;
      do
      {
        v30 = sub_1BCAA2C(SkillInfo_TypeInfo, v24, v25, v26);
        SkillInfo___ctor((SkillInfo_o *)v30, 0LL);
        if ( !v30 )
          goto LABEL_26;
        *(_DWORD *)(v30 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v39 = v28 - 8;
        if ( v28 - 8 >= (unsigned __int64)idList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v30 + 16) = *((_DWORD *)&idList->obj.klass + v28);
        if ( !v56 )
          goto LABEL_26;
        if ( v39 >= v56->max_length )
          goto LABEL_27;
        *(_DWORD *)(v30 + 20) = *((_DWORD *)&v56->obj.klass + v28);
        if ( !titleList )
          goto LABEL_26;
        if ( v39 >= titleList->max_length )
          goto LABEL_27;
        v40 = *(int64_t *)((char *)&titleList->obj.klass + v29);
        *(_QWORD *)(v30 + 32) = v40;
        sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 32), v40, v33, v34, v35, v36, v37, v38);
        if ( !explanationList )
          goto LABEL_26;
        if ( v39 >= explanationList->max_length )
          goto LABEL_27;
        v47 = *(int64_t *)((char *)&explanationList->obj.klass + v29);
        *(_QWORD *)(v30 + 40) = v47;
        sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 40), v47, v41, v42, v43, v44, v45, v46);
        v48 = *skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_1BCAA3C(v31, v32);
        v31 = sub_1BCA91C(v30, v48->obj.klass->_1.element_class);
        if ( !v31 )
        {
          v55 = sub_1BCAA60(0LL);
          sub_1BCA908(v55, 0LL);
        }
        if ( v39 >= v48->max_length )
LABEL_27:
          sub_1BCAA44(v31, v32);
        *(Il2CppClass **)((char *)&v48->obj.klass + v29) = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)((char *)v48 + v29), v30, v49, v50, v51, v52, v53, v54);
        ++v28;
        v29 += 8LL;
      }
      while ( v27 + v28 != 8 );
    }
  }
  else
  {
    *skillInfoList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int LimitCountWithRandom; // w20
  __int64 v11; // x1
  int32_t limitCount; // w21
  BalanceConfig_c *v13; // x0
  ServantLeaderInfo_c *v14; // x0
  int32_t v15; // w19

  if ( (byte_4B17409 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v4, v5);
    sub_1BCA7E0(&OptionManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&ServantLeaderInfo_TypeInfo, v8, v9);
    byte_4B17409 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( LimitCountWithRandom > 10 || !LimitCountWithRandom || NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
    return LimitCountWithRandom;
  limitCount = this->fields.limitCount;
  if ( !limitCount )
    return 0;
  v13 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( limitCount == v13->static_fields->ServantLimitMax )
  {
    v14 = ServantLeaderInfo_TypeInfo;
    if ( !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo, v11);
      v14 = ServantLeaderInfo_TypeInfo;
    }
    if ( LimitCountWithRandom == v14->static_fields->LIMIT_COUNT_THIRD_STAGE )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v11);
      if ( OptionManager__GetFriendImageLimitCount(0LL) )
        return this->fields.limitCount;
    }
  }
  v15 = this->fields.limitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v11);
  return ImageLimitCount__GetLimitCountByDispLimit(LimitCountWithRandom - 1, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__GetLimitChangeDic(
        ServantLeaderInfo_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *limitChangeDic; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B17415 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, *(_QWORD *)&limit, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B17415 = 1;
  }
  value = 0;
  limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
          limit,
          &value,
          (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    limitChangeDic = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( limitChangeDic )
    {
      limitChangeDic = (DataManager_o *)DataManager__GetMasterData_object_(
                                          limitChangeDic,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
            (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_1BCAA3C(limitChangeDic, *(_QWORD *)&limit);
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
  __int64 v6; // x2
  __int64 v7; // x1
  int32_t ChoiceLimitCount_32000736; // w0
  __int64 v9; // x1
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v11; // x0

  if ( (byte_4B173E1 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v5, v6);
    byte_4B173E1 = 1;
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
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v7);
  ChoiceLimitCount_32000736 = RandomLimitCountManager__GetChoiceLimitCount_32000736(this, 0LL);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_32000736;
  if ( ((1 << kind) & 0x16) == 0 )
    return imageLimitCount;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
    v11 = BalanceConfig_TypeInfo;
  }
  return imageLimitCount - (imageLimitCount == v11->static_fields->ServantLimitMax);
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
  System_Int32_array *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0

  v4 = classPassive;
  if ( (byte_4B173EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&dispSvtId, classPassive);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B173EA = 1;
  }
  if ( !v4 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v11);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               dispSvtId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
      return (System_Int32_array *)Entity[10].monitor;
    else
      return 0LL;
  }
  return v4;
}


void __fastcall ServantLeaderInfo__GetPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x23
  System_String_array *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_array *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  long double v33; // q0
  __int64 v34; // x0
  __int64 v35; // x0
  DataManager_o *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x22
  unsigned __int64 v38; // x25
  unsigned int v39; // w24
  __int64 v40; // x26
  int32_t *v41; // x27
  System_String_array *v42; // x28
  SkillEntity_o *v43; // x23
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  Il2CppClass **v51; // x0
  System_String_array *v52; // x28
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x1
  Il2CppClass **v60; // x0
  unsigned __int64 max_length; // x8
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7

  if ( (byte_4B173EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, titleList, explanationList);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13, v14);
    sub_1BCA7E0(&string___TypeInfo, v15, v16);
    byte_4B173EF = 1;
  }
  if ( !idList )
    goto LABEL_29;
  v17 = *(_QWORD *)&idList->max_length;
  if ( !v17 )
    goto LABEL_29;
  v18 = (System_String_array *)sub_1BCA888(string___TypeInfo, (unsigned int)v17);
  *titleList = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)titleList, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (System_String_array *)sub_1BCA888(string___TypeInfo, (unsigned int)v17);
  *explanationList = v25;
  sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1C1C6BC(v33);
  v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1C1C6BC(v33);
  MasterData_object = **(DataManager_o ***)(v35 + 184);
  if ( !MasterData_object )
LABEL_31:
    sub_1BCAA3C(MasterData_object, v32);
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)v17 < 1 )
    goto LABEL_29;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v38 = 0LL;
  v39 = 0;
  v40 = (unsigned int)v17;
  v41 = &idList->m_Items[1];
  do
  {
    if ( v38 >= idList->max_length )
LABEL_30:
      sub_1BCAA44(MasterData_object, v32);
    v32 = (unsigned int)v41[v38];
    if ( (int)v32 >= 1 )
    {
      if ( !v37 )
        goto LABEL_31;
      MasterData_object = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                             v37,
                                             v32,
                                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( MasterData_object )
      {
        v42 = *titleList;
        v43 = (SkillEntity_o *)MasterData_object;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectTitle((SkillEntity_o *)MasterData_object, 0, 0LL);
        if ( !v42 )
          goto LABEL_31;
        if ( v39 >= v42->max_length )
          goto LABEL_30;
        v50 = (int64_t)MasterData_object;
        v51 = &v42->obj.klass + (int)v39;
        v51[4] = (Il2CppClass *)v50;
        sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), v50, v44, v45, v46, v47, v48, v49);
        v52 = *explanationList;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectExplanation(v43, 0, 0LL);
        if ( !v52 )
          goto LABEL_31;
        if ( v39 >= v52->max_length )
          goto LABEL_30;
        v59 = (int64_t)MasterData_object;
        v60 = &v52->obj.klass + (int)v39;
        v60[4] = (Il2CppClass *)v59;
        sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), v59, v53, v54, v55, v56, v57, v58);
        if ( v38 != v39 )
        {
          max_length = idList->max_length;
          if ( v38 >= max_length || v39 >= (unsigned int)max_length )
            goto LABEL_30;
          idList->m_Items[v39 + 1] = v41[v38];
          v41[v38] = 0;
        }
        ++v39;
      }
      else
      {
        if ( v38 >= idList->max_length )
          goto LABEL_30;
        v41[v38] = 0;
      }
    }
    ++v38;
  }
  while ( v40 != v38 );
  if ( !v39 )
  {
LABEL_29:
    *titleList = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)titleList,
      0LL,
      (int64_t)explanationList,
      (int32_t)idList,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    *explanationList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, 0LL, v62, v63, v64, v65, v66, v67);
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
  __int64 v9; // x2
  BalanceConfig_c *v10; // x0
  System_Int32_array *result; // x0
  __int64 v12; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B173E7 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&id1, *(_QWORD *)&id2);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    byte_4B173E7 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&id1);
    v10 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v10->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1BCAA3C(0LL, v12);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = id1, max_length == 1) || (result->m_Items[2] = id2, max_length <= 2) )
    sub_1BCAA44(result, v12);
  result->m_Items[3] = id3;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo__GetSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispSvtId,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  long double v5; // q0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x0
  __int64 v21; // x0
  DataManager_o *Entity; // x0
  Il2CppObject *MasterData_object; // x26
  long double v24; // q0
  __int64 v25; // x8
  __int64 v26; // x0
  BalanceConfig_c **v27; // x25
  const MethodInfo *v28; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v30; // x1
  BalanceConfig_c *v31; // x8
  System_Int32_array *v32; // x22
  int64_t v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  unsigned __int64 v40; // x21
  int64_t v41; // x23
  il2cpp_array_size_t v42; // w29
  int32_t *v43; // x24
  SkillEntity_o *v44; // x27
  BalanceConfig_c **v45; // x20
  ServantSkillEntity_o *EntityFromSkillId; // x26
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  int64_t v50; // x25
  System_String_o *EffectTitle; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_String_o *EffectExplanation; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x8
  int32_t skillNum; // w8
  PartyOrganizationUtility_c *klass; // x26
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  void **v74; // x0
  int32_t *v75; // x20
  int32_t *i; // x21
  __int64 v77; // x0
  Il2CppObject *v78; // [xsp+0h] [xbp-90h]
  int32_t *v79; // [xsp+8h] [xbp-88h]
  ServantSkillMaster_o *v81; // [xsp+18h] [xbp-78h]
  PartyOrganizationUtility_o *v82; // [xsp+20h] [xbp-70h]
  int64_t v83; // [xsp+28h] [xbp-68h]

  v82 = (PartyOrganizationUtility_o *)skillInfoList;
  if ( (byte_4B173ED & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, *(_QWORD *)&dispSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14, v15);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v16, v17);
    sub_1BCA7E0(&SkillInfo_TypeInfo, v18, v19);
    byte_4B173ED = 1;
  }
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1C6BC(v5);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1C6BC(v5);
  Entity = **(DataManager_o ***)(v21 + 184);
  if ( !Entity )
    goto LABEL_56;
  MasterData_object = DataManager__GetMasterData_object_(
                        Entity,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C1C6BC(v24);
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C1C6BC(v24);
  Entity = **(DataManager_o ***)(v26 + 184);
  if ( !Entity )
LABEL_56:
    sub_1BCAA3C(Entity, skillInfoList);
  v27 = &BalanceConfig_TypeInfo;
  v81 = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                  Entity,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v28);
  v31 = BalanceConfig_TypeInfo;
  v32 = SkillLevelList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v30);
    v31 = BalanceConfig_TypeInfo;
  }
  v33 = sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)v31->static_fields->SvtSkillListMax);
  v82->klass = (PartyOrganizationUtility_c *)v33;
  sub_1BCA784(v82, v33, v34, v35, v36, v37, v38, v39);
  v40 = 0LL;
  v83 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v43 = &idList->m_Items[1];
  v78 = MasterData_object;
  v79 = &v32->m_Items[1];
  while ( 1 )
  {
    Entity = (DataManager_o *)*v27;
    if ( !(*v27)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Entity, skillInfoList);
      Entity = (DataManager_o *)*v27;
    }
    if ( (__int64)v40 >= *(int *)(*(_QWORD *)&Entity[1].fields._DispLog + 32LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v40 >= idList->max_length )
LABEL_57:
      sub_1BCAA44(Entity, skillInfoList);
    skillInfoList = (SkillInfo_array **)(unsigned int)v43[v40];
    if ( (int)skillInfoList >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_56;
      Entity = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)skillInfoList,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( v40 >= idList->max_length )
          goto LABEL_57;
        v44 = (SkillEntity_o *)Entity;
        Entity = (DataManager_o *)v81;
        if ( !v81 )
          goto LABEL_56;
        v45 = v27;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v81, dispSvtId, (int)v40 + 1, v43[v40], 0LL);
        v50 = sub_1BCAA2C(SkillInfo_TypeInfo, v47, v48, v49);
        SkillInfo___ctor((SkillInfo_o *)v50, 0LL);
        if ( v40 >= idList->max_length )
          goto LABEL_57;
        if ( !v50 )
          goto LABEL_56;
        *(_DWORD *)(v50 + 16) = v43[v40];
        if ( !v32 )
          goto LABEL_56;
        if ( v40 >= v32->max_length )
          goto LABEL_57;
        *(_DWORD *)(v50 + 20) = v79[v40];
        Entity = (DataManager_o *)SkillEntity__getEffectChargeTurn(v44, v79[v40], 0LL);
        *(_DWORD *)(v50 + 24) = (_DWORD)Entity;
        if ( v40 >= v32->max_length )
          goto LABEL_57;
        EffectTitle = SkillEntity__getEffectTitle(v44, v79[v40], 0LL);
        *(_QWORD *)(v50 + 32) = EffectTitle;
        sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 32), (int64_t)EffectTitle, v52, v53, v54, v55, v56, v57);
        if ( v40 >= v32->max_length )
          goto LABEL_57;
        EffectExplanation = SkillEntity__getEffectExplanation(v44, v79[v40], 0LL);
        *(_QWORD *)(v50 + 40) = EffectExplanation;
        sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 40), (int64_t)EffectExplanation, v59, v60, v61, v62, v63, v64);
        v65 = v83;
        if ( EntityFromSkillId )
          v41 = v50;
        if ( !EntityFromSkillId )
          v65 = v50;
        v83 = v65;
        if ( EntityFromSkillId )
        {
          Entity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          if ( !v41 )
            goto LABEL_56;
          *(_DWORD *)(v41 + 48) = (_DWORD)Entity;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          if ( !v65 )
            goto LABEL_56;
          skillNum = 0;
          *(_DWORD *)(v83 + 48) = 0;
        }
        *(_DWORD *)(v50 + 52) = skillNum;
        *(_BYTE *)(v50 + 56) = 1;
        klass = v82->klass;
        if ( !v82->klass )
          goto LABEL_56;
        Entity = (DataManager_o *)sub_1BCA91C(v50, *((_QWORD *)klass->_1.image + 8));
        if ( !Entity )
        {
          v77 = sub_1BCAA60(0LL);
          sub_1BCA908(v77, 0LL);
        }
        if ( v42 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_57;
        v74 = &klass->_1.image + (int)v42;
        v74[4] = (void *)v50;
        sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 4), v50, v68, v69, v70, v71, v72, v73);
        MasterData_object = v78;
        ++v42;
        v27 = v45;
      }
    }
    ++v40;
  }
  v75 = &v32->m_Items[v42 + 1];
  for ( i = &idList->m_Items[v42 + 1]; ; ++i )
  {
    if ( !LODWORD(Entity[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Entity, skillInfoList);
      Entity = (DataManager_o *)*v27;
    }
    if ( (signed int)v42 >= *(_DWORD *)(*(_QWORD *)&Entity[1].fields._DispLog + 32LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v42 >= idList->max_length )
      goto LABEL_57;
    *i = 0;
    if ( !v32 )
      goto LABEL_56;
    if ( v42 >= v32->max_length )
      goto LABEL_57;
    *v75++ = -1;
    ++v42;
  }
}


int32_t __fastcall ServantLeaderInfo__GetTimesToRestart(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  UserEventDataLostEntity_o *v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  __int64 v19; // x1
  UserEventDataLostEntity_o *v20; // x20
  __int64 v21; // x19
  __int64 v22; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B1741C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B1741C = 1;
  }
  entity = 0LL;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questRestrictionInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
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
      v16 = entity;
      v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
      *(_QWORD *)&v25.fields.currentCryptoKey = v18;
      *(_QWORD *)&v25.fields.fakeValue = v17;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
      if ( !v16 )
        goto LABEL_21;
      if ( UserEventDataLostEntity__IsRestart(v16, UserId, 0LL) )
      {
        v20 = entity;
        v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
        *(_QWORD *)&v26.fields.currentCryptoKey = v22;
        *(_QWORD *)&v26.fields.fakeValue = v21;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
        if ( v20 )
          return UserEventDataLostEntity__GetTimesToRestart(v20, UserId, 0LL);
LABEL_21:
        sub_1BCAA3C(UserId, v14);
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
  PartyOrganizationUtility_o *p_classPassive; // x20
  System_Int32_array *classPassive; // t1
  System_Int32_array *PassiveSkillIdList; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  struct AfterTransformSvtInfo_o *v17; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( !afterTransformSvtInfo )
    return ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, 0LL, v3);
  classPassive = afterTransformSvtInfo->fields.classPassive;
  p_classPassive = (PartyOrganizationUtility_o *)&afterTransformSvtInfo->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, classPassive, v3);
  p_classPassive->klass = (PartyOrganizationUtility_c *)PassiveSkillIdList;
  sub_1BCA784(p_classPassive, (int64_t)PassiveSkillIdList, v9, v10, v11, v12, v13, v14);
  v17 = this->fields.afterTransformSvtInfo;
  if ( !v17 )
    sub_1BCAA3C(v15, v16);
  return v17->fields.classPassive;
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  ServantLeaderInfo_o *v16; // x0
  const MethodInfo *v17; // x4

  TransformedPassiveSkillIdList = ServantLeaderInfo__GetTransformedPassiveSkillIdList(
                                    this,
                                    svtId,
                                    (const MethodInfo *)titleList);
  *idList = TransformedPassiveSkillIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)idList,
    (int64_t)TransformedPassiveSkillIdList,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ServantLeaderInfo__GetPassiveSkillInfo(v16, titleList, explanationList, *idList, v17);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLeaderInfo__GetTreasureDeviceInfo(
        ServantLeaderInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispSvtId,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  long double v5; // q0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x0
  __int64 v15; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDvcEntity_o *EntityFromSvtIdDvcId; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  TreasureDvcInfo_o *v21; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  TreasureDvcInfo_o *v28; // x8
  int32_t tdLv; // w9

  if ( (byte_4B17400 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, tdInfo, *(_QWORD *)&dispSvtId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11);
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, v12, v13);
    byte_4B17400 = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC(v5);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC(v5);
  MasterData_object = **(Il2CppObject ***)(v15 + 184);
  if ( !MasterData_object )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !MasterData_object )
    goto LABEL_13;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           (ServantTreasureDvcMaster_o *)MasterData_object,
                           dispSvtId,
                           treasureDeviceId,
                           0LL);
  v21 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, v18, v19, v20);
  TreasureDvcInfo___ctor(v21, 0LL);
  *tdInfo = v21;
  sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  if ( EntityFromSvtIdDvcId )
  {
    v28 = *tdInfo;
    if ( *tdInfo )
    {
      v28->fields.id = treasureDeviceId;
      tdLv = this->fields.treasureDeviceLv;
      v28->fields.lv = tdLv;
      ServantTreasureDvcEntity__getEffectExplanation(
        EntityFromSvtIdDvcId,
        &v28->fields.name,
        &v28->fields.explanation,
        &v28->fields.maxLv,
        &v28->fields.guageCount,
        &v28->fields.cardId,
        &v28->fields.strengthStatus,
        &v28->fields.treasureDeviceNum,
        tdLv,
        0LL);
      return EntityFromSvtIdDvcId != 0LL;
    }
LABEL_13:
    sub_1BCAA3C(MasterData_object, tdInfo);
  }
  return EntityFromSvtIdDvcId != 0LL;
}


bool __fastcall ServantLeaderInfo__IsDataLost(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  UserEventDataLostEntity_o *v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  __int64 v19; // x1
  UserEventDataLostEntity_o *v20; // x20
  __int64 v21; // x19
  __int64 v22; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B1741B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B1741B = 1;
  }
  entity = 0LL;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questRestrictionInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
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
  v16 = entity;
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  *(_QWORD *)&v25.fields.currentCryptoKey = v18;
  *(_QWORD *)&v25.fields.fakeValue = v17;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  if ( !v16 )
    goto LABEL_22;
  if ( UserEventDataLostEntity__IsRestart(v16, UserId, 0LL) )
    return 0;
  v20 = entity;
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
  *(_QWORD *)&v26.fields.currentCryptoKey = v22;
  *(_QWORD *)&v26.fields.fakeValue = v21;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
  if ( !v20 )
LABEL_22:
    sub_1BCAA3C(UserId, v14);
  return UserEventDataLostEntity__IsDataLost(v20, UserId, 0LL);
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

  if ( (byte_4B1741D & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo, method);
    byte_4B1741D = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsSlotRestrictionForSupport(questRestrictionInfo, v9, limitCount, DispLimitCount, v12);
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
  const MethodInfo *v14; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B173FD & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo, npcFollowerInfo);
    byte_4B173FD = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  limitCount = this->fields.limitCount;
  v11 = v9;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v12);
  return QuestRestrictionInfo__IsUniqueIndividuality_41176740(
           questRestrictionInfo,
           v11,
           limitCount,
           DispLimitCount,
           npcFollowerInfo,
           v14);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction_41235004(
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
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B173FE & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo, partyItem);
    byte_4B173FE = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  limitCount = this->fields.limitCount;
  v15 = v13;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v16);
  return QuestRestrictionInfo__IsUniqueIndividuality_41178148(
           questRestrictionInfo,
           v15,
           limitCount,
           DispLimitCount,
           partyItem,
           num,
           -1,
           npcFollowerInfo,
           v19);
}


void __fastcall ServantLeaderInfo__SetServantNameBySpoilerProtection(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  PartyOrganizationUtility_o *p_overwriteServantDetailName; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *Instance; // x0
  __int64 v33; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v35; // x1
  __int64 v36; // x23
  __int64 v37; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x21
  ServantEntity_o *v39; // x21
  const MethodInfo *v40; // x1
  int32_t DispLimitCount; // w0
  __int64 v42; // x1
  int32_t limitCount; // w23
  int32_t v44; // w24
  __int64 v45; // x1
  int32_t LimitCountByDispLimit; // w23
  Il2CppObject *Master_object; // x0
  __int64 v48; // x1
  __int64 v49; // x25
  __int64 v50; // x26
  ServantLimitImageMaster_o *v51; // x24
  struct System_String_o *LimitCountSealedServantName; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *v59; // x23
  const MethodInfo *v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x1
  int32_t CardImageLimitCount; // w22
  int32_t LimitCountByImageLimitCostumeIn; // w22
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x23
  __int64 v73; // x24
  ServantLimitImageMaster_o *v74; // x19
  int32_t ServantLimitCountSealAfter; // w0
  struct System_String_o *overwriteServantName; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_4B17416 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B17416 = 1;
  }
  this->fields.overwriteServantName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overwriteServantName, 0LL, v2, v3, v4, v5, v6, v7);
  p_overwriteServantDetailName = (PartyOrganizationUtility_o *)&this->fields.overwriteServantDetailName;
  this->fields.overwriteServantDetailName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overwriteServantDetailName, 0LL, v26, v27, v28, v29, v30, v31);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
  *(_QWORD *)&v77.fields.currentCryptoKey = v37;
  *(_QWORD *)&v77.fields.fakeValue = v36;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v77, 0LL);
  if ( !v38 )
    goto LABEL_28;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v38,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_28;
  v39 = (ServantEntity_o *)Instance;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v40);
    limitCount = this->fields.limitCount;
    v44 = DispLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v42);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v44, limitCount, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v50 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v49 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v51 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
    *(_QWORD *)&v78.fields.currentCryptoKey = v50;
    *(_QWORD *)&v78.fields.fakeValue = v49;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v78, 0LL);
    if ( v51 )
    {
      LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                      v51,
                                      (int32_t)Instance,
                                      LimitCountByDispLimit,
                                      0LL);
      this->fields.overwriteServantName = LimitCountSealedServantName;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.overwriteServantName,
        (int64_t)LimitCountSealedServantName,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      v59 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                   this->fields.svtId,
                                   0LL);
      if ( v59 )
      {
        if ( !ServantLimitAddMaster__IsOverwriteSvtDetailName((ServantLimitAddMaster_o *)v59, (int32_t)Instance, 0LL) )
        {
          overwriteServantName = this->fields.overwriteServantName;
          goto LABEL_27;
        }
        CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v60);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v67);
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v70 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          v73 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v72 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          v74 = (ServantLimitImageMaster_o *)v70;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
          *(_QWORD *)&v79.fields.currentCryptoKey = v73;
          *(_QWORD *)&v79.fields.fakeValue = v72;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v79, 0LL);
          if ( v74 )
          {
            ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v74,
                                           (int32_t)Instance,
                                           LimitCountByImageLimitCostumeIn,
                                           0LL);
            overwriteServantName = ServantEntity__getName(v39, -1, ServantLimitCountSealAfter, 0LL);
LABEL_27:
            p_overwriteServantDetailName->klass = (PartyOrganizationUtility_c *)overwriteServantName;
            sub_1BCA784(p_overwriteServantDetailName, (int64_t)overwriteServantName, v61, v62, v63, v64, v65, v66);
            return;
          }
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(Instance, v33);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo__SetTransformData(
        ServantLeaderInfo_o *this,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *Master_object; // x0
  __int64 v28; // x1
  __int64 v29; // x22
  __int64 v30; // x23
  ServantTransformMaster_o *v31; // x21
  void *UseEntityList; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  AfterTransformSvtInfo_o *v37; // x22
  struct AfterTransformSvtInfo_o **p_afterTransformSvtInfo; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int32_t aftDispLimitCount; // w28
  Il2CppObject *v46; // x22
  ServantLimitMaster_o *v47; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  ServantLimitEntity_o *v50; // x23
  _DWORD *v51; // x24
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x19
  int32_t atkMax; // w26
  int32_t atkBase; // w29
  int v55; // w27
  struct AfterTransformSvtInfo_o *v56; // x29
  int32_t atk; // w19
  int32_t adjustAtk; // w26
  struct AfterTransformSvtInfo_o *v59; // x8
  __int64 v60; // x9
  Il2CppObject *v61; // x24
  unsigned int v62; // w9
  __int64 v63; // x10
  struct AfterTransformSvtInfo_o *v64; // x8
  __int64 v65; // x10
  __int64 v66; // x9
  Il2CppObject *v67; // x0
  __int64 v68; // x1
  void *v69; // x24
  Il2CppClass *v70; // x25
  ServantTreasureDvcMaster_o *v71; // x22
  int32_t friendshipRanka; // [xsp+14h] [xbp-6Ch]
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4B173E3 & 1) == 0 )
  {
    sub_1BCA7E0(&AfterTransformSvtInfo_TypeInfo, *(_QWORD *)&friendshipRank, method);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v5, v6);
    sub_1BCA7E0(&CheckCombineResStatus_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExpMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantSkillMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTransformMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    byte_4B173E3 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&friendshipRank);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v31 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
  *(_QWORD *)&v74.fields.currentCryptoKey = v30;
  *(_QWORD *)&v74.fields.fakeValue = v29;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v74, 0LL);
  if ( !v31 )
    goto LABEL_49;
  if ( !ServantTransformMaster__TryGetEntity(v31, &entity, (int32_t)UseEntityList, this->fields.dispLimitCount + 1, 0LL) )
    return;
  v37 = (AfterTransformSvtInfo_o *)sub_1BCAA2C(AfterTransformSvtInfo_TypeInfo, v34, v35, v36);
  AfterTransformSvtInfo___ctor(v37, 0LL);
  this->fields.afterTransformSvtInfo = v37;
  p_afterTransformSvtInfo = &this->fields.afterTransformSvtInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.afterTransformSvtInfo,
    (int64_t)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !entity )
    goto LABEL_49;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_49;
  if ( !UseEntityList )
    goto LABEL_49;
  friendshipRanka = friendshipRank;
  v46 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)UseEntityList,
          entity->fields.aftSvtId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v46 )
    goto LABEL_49;
  v47 = (ServantLimitMaster_o *)UseEntityList;
  klass = v46[1].klass;
  monitor = v46[1].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
  *(_QWORD *)&v75.fields.currentCryptoKey = klass;
  *(_QWORD *)&v75.fields.fakeValue = monitor;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v75, 0LL);
  if ( !v47 )
    goto LABEL_49;
  v50 = ServantLimitMaster__GetEntity(v47, (int32_t)UseEntityList, this->fields.limitCount, 0LL);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExpMaster___);
  if ( !UseEntityList )
    goto LABEL_49;
  UseEntityList = ServantExpMaster__GetEntity(
                    (ServantExpMaster_o *)UseEntityList,
                    HIDWORD(v46[8].klass),
                    this->fields.lv,
                    0LL);
  if ( !v50 )
    goto LABEL_49;
  v51 = UseEntityList;
  if ( !UseEntityList )
    goto LABEL_49;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  atkBase = v50->fields.atkBase;
  atkMax = v50->fields.atkMax;
  v55 = *((_DWORD *)UseEntityList + 7);
  UseEntityList = CheckCombineResStatus_TypeInfo;
  if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo, v33);
  if ( !afterTransformSvtInfo )
    goto LABEL_49;
  afterTransformSvtInfo->fields.atk = v55 * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                                    + v50->fields.atkBase;
  v56 = *p_afterTransformSvtInfo;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_49;
  atk = v56->fields.atk;
  adjustAtk = this->fields.adjustAtk;
  UseEntityList = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v33);
    UseEntityList = BalanceConfig_TypeInfo;
  }
  v59 = *p_afterTransformSvtInfo;
  v60 = *((_QWORD *)UseEntityList + 23);
  v56->fields.atk = atk + *(_DWORD *)(v60 + 308) * adjustAtk;
  if ( !v59 )
    goto LABEL_49;
  v59->fields.hp = (v50->fields.hpMax - v50->fields.hpBase)
                 * v51[7]
                 / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                 + v50->fields.hpBase
                 + *(_DWORD *)(v60 + 312) * this->fields.adjustHp;
  v61 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v46[1],
                            0LL);
  if ( !v61 )
    goto LABEL_49;
  UseEntityList = ServantSkillMaster__getUseEntityList(
                    (ServantSkillMaster_o *)v61,
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
  v62 = *((_DWORD *)UseEntityList + 6);
  if ( !v62 )
    goto LABEL_50;
  v63 = *((_QWORD *)UseEntityList + 4);
  v64 = this->fields.afterTransformSvtInfo;
  if ( v63 )
    LODWORD(v63) = *(_DWORD *)(v63 + 28);
  if ( !v64 )
    goto LABEL_49;
  v64->fields.skillId1 = v63;
  if ( v62 <= 1 )
    goto LABEL_50;
  v65 = *((_QWORD *)UseEntityList + 5);
  if ( v65 )
    LODWORD(v65) = *(_DWORD *)(v65 + 28);
  v64->fields.skillId2 = v65;
  if ( v62 <= 2 )
LABEL_50:
    sub_1BCAA44(UseEntityList, v33);
  v66 = *((_QWORD *)UseEntityList + 6);
  if ( v66 )
    LODWORD(v66) = *(_DWORD *)(v66 + 28);
  v64->fields.skillId3 = v66;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
  v67 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v70 = v46[1].klass;
  v69 = v46[1].monitor;
  v71 = (ServantTreasureDvcMaster_o *)v67;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v68);
  *(_QWORD *)&v76.fields.currentCryptoKey = v70;
  *(_QWORD *)&v76.fields.fakeValue = v69;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v76, 0LL);
  if ( !v71 )
    goto LABEL_49;
  UseEntityList = ServantTreasureDvcMaster__getUseEntity(
                    v71,
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
    sub_1BCAA3C(UseEntityList, v33);
  (*p_afterTransformSvtInfo)->fields.treasureDeviceId = *((_DWORD *)UseEntityList + 8);
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x21
  __int64 v10; // x22
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x4
  DataManager_o *v17; // x23
  __int64 v18; // x22
  __int64 v19; // x28
  SkillLvEntity_o *v20; // x24
  __int64 v21; // x25
  __int64 v22; // x26
  int32_t v23; // w26
  int32_t limitCount; // w27
  int32_t EventId; // w0
  char v26; // w25
  BalanceConfig_c **v27; // x27
  System_Int32_array *SkillIdList; // x23
  const MethodInfo *v29; // x1
  System_Int32_array *SkillLevelList; // x24
  unsigned __int64 i; // x22
  __int64 v32; // x8
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v34; // x26
  BalanceConfig_c **v35; // x19
  __int64 v36; // x27
  __int64 v37; // x28
  int32_t v38; // w27
  int32_t v39; // w28
  int32_t v40; // w0
  bool EventUpVal; // w0
  int32_t wearesDispLimitCount; // [xsp+14h] [xbp-7Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B173F6 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, setupInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v3, v4);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B173F6 = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v10;
  *(_QWORD *)&v46.fields.fakeValue = v9;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v46, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_38:
    sub_1BCAA3C(Instance, v12);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  wearesDispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v15);
  if ( Instance )
  {
    v17 = Instance;
    if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
    {
      v18 = 0LL;
      v19 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
      while ( 1 )
      {
        v12 = *((unsigned int *)&v17->fields._DispLog + v18);
        if ( (int)v12 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_38;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v12, 1, 0LL);
          if ( Instance )
          {
            v20 = (SkillLvEntity_o *)Instance;
            v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
            *(_QWORD *)&v47.fields.currentCryptoKey = v22;
            *(_QWORD *)&v47.fields.fakeValue = v21;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v47, 0LL);
            if ( !setupInfo )
              goto LABEL_38;
            v23 = (int)Instance;
            limitCount = this->fields.limitCount;
            EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            v26 = 1;
            Instance = (DataManager_o *)SkillLvEntity__getEventUpVal(
                                          v20,
                                          v23,
                                          limitCount,
                                          wearesDispLimitCount,
                                          setupInfo,
                                          EventId,
                                          1,
                                          0,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              return v26;
          }
        }
        if ( v19 == v18 )
          break;
        if ( ++v18 >= (unsigned __int64)LODWORD(v17->fields.m_CancellationTokenSource) )
LABEL_19:
          sub_1BCAA44(Instance, v12);
      }
    }
  }
  v27 = &BalanceConfig_TypeInfo;
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  (ServantLeaderInfo_o *)Instance,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v16);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v29);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)*v27;
    if ( !(*v27)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance, v12);
      Instance = (DataManager_o *)*v27;
    }
    v32 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL);
    v26 = (__int64)i < v32;
    if ( (__int64)i >= v32 )
      break;
    if ( !SkillIdList )
      goto LABEL_38;
    if ( i >= SkillIdList->max_length )
      goto LABEL_19;
    v12 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v12 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_38;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_19;
      if ( !MasterData_object )
        goto LABEL_38;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v12, SkillLevelList->m_Items[i + 1], 0LL);
      if ( Entity )
      {
        v34 = Entity;
        v35 = v27;
        v37 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
        *(_QWORD *)&v48.fields.currentCryptoKey = v37;
        *(_QWORD *)&v48.fields.fakeValue = v36;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v48, 0LL);
        if ( !setupInfo )
          goto LABEL_38;
        v38 = (int)Instance;
        v39 = this->fields.limitCount;
        v40 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
        EventUpVal = SkillLvEntity__getEventUpVal(v34, v38, v39, wearesDispLimitCount, setupInfo, v40, 1, 0, 0LL);
        v27 = v35;
        if ( EventUpVal )
          return v26;
      }
    }
  }
  return v26;
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal_41233248(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x22
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x4
  DataManager_o *v19; // x22
  bool v20; // w23
  __int64 v21; // x24
  __int64 v22; // x25
  System_Int32_array *SkillIdList; // x22
  const MethodInfo *v24; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B173F9 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, eventUpVallInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B173F9 = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpVallInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v12;
  *(_QWORD *)&v28.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_37;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1BCAA3C(Instance, v14);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v17);
  if ( Instance && (v19 = Instance, (int)Instance->fields.m_CancellationTokenSource >= 1) )
  {
    v20 = 0;
    v21 = 0LL;
    v22 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
    while ( 1 )
    {
      v14 = *((unsigned int *)&v19->fields._DispLog + v21);
      if ( (int)v14 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_37;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v14, 1, 0LL);
        if ( Instance )
        {
          Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_40683416(
                                        (SkillLvEntity_o *)Instance,
                                        eventUpVallInfo,
                                        1,
                                        0,
                                        1,
                                        0,
                                        0LL,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v20 = 1;
        }
      }
      if ( v22 == v21 )
        break;
      if ( ++v21 >= (unsigned __int64)LODWORD(v19->fields.m_CancellationTokenSource) )
LABEL_20:
        sub_1BCAA44(Instance, v14);
    }
  }
  else
  {
    v20 = 0;
  }
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  (ServantLeaderInfo_o *)Instance,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v18);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v24);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL) )
      break;
    if ( !SkillIdList )
      goto LABEL_37;
    if ( i >= SkillIdList->max_length )
      goto LABEL_20;
    v14 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v14 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_37;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_20;
      if ( !MasterData_object )
        goto LABEL_37;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v14, SkillLevelList->m_Items[i + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_40683416(Entity, eventUpVallInfo, 1, 0, 1, 0, 0LL, 0LL) )
          v20 = 1;
      }
    }
  }
  return v20;
}


int32_t __fastcall ServantLeaderInfo__getBaseFriendPointUpVal(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x19
  __int64 v11; // x20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v15; // x4
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v17; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B173F2 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B173F2 = 1;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v22.fields.currentCryptoKey = v11;
  *(_QWORD *)&v22.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1BCAA3C(Instance, v13);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__GetSkillIdList(
                    (ServantLeaderInfo_o *)MasterData_object,
                    this->fields.skillId1,
                    this->fields.skillId2,
                    this->fields.skillId3,
                    v15);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v17);
    for ( i = 0LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_22;
      if ( i >= SkillIdList->max_length )
        goto LABEL_23;
      v13 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v13 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_22;
        if ( i >= SkillLevelList->max_length )
LABEL_23:
          sub_1BCAA44(Instance, v13);
        if ( !MasterData_object )
          goto LABEL_22;
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_object,
                   v13,
                   SkillLevelList->m_Items[i + 1],
                   0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x20
  __int64 v13; // x21
  int32_t v14; // w0
  __int64 v15; // x1
  BalanceConfig_c *v16; // x8
  int32_t v17; // w20
  struct BalanceConfig_StaticFields *static_fields; // x9
  int LimitCountWithRandom; // w20
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  bool v22; // vf
  bool v23; // w1
  ServantLeaderInfo_o *v24; // x0
  __int64 v25; // x1
  __int64 v27; // x21
  __int64 v28; // x22
  int32_t v29; // w19
  __int64 v30; // x1
  int32_t v31; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B1740C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&OptionManager_TypeInfo, v8, v9);
    byte_4B1740C = 1;
  }
  if ( ConstantMaster__IsOtherImage(0LL) )
  {
    v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    *(_QWORD *)&v32.fields.currentCryptoKey = v13;
    *(_QWORD *)&v32.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
    v16 = BalanceConfig_TypeInfo;
    v17 = v14;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
      v16 = BalanceConfig_TypeInfo;
    }
    static_fields = v16->static_fields;
    if ( v17 < static_fields->ExclusiveNpcServantIdStart )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16, v15);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->OtherImageLimitCount;
    }
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 0, v11);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
    v22 = __OFSUB__(LimitCountWithRandom--, 1);
    if ( LimitCountWithRandom < 0 == v22 )
      return LimitCountWithRandom;
    v23 = 1;
    v24 = this;
    return ServantLeaderInfo__getMaxCardImageLimitCount(v24, v23, v21);
  }
  if ( LimitCountWithRandom >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v20);
    if ( OptionManager__GetFriendCostume(0LL) )
      return LimitCountWithRandom;
    goto LABEL_27;
  }
  if ( LimitCountWithRandom < 1 )
  {
LABEL_27:
    v24 = this;
    v23 = 0;
    return ServantLeaderInfo__getMaxCardImageLimitCount(v24, v23, v21);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v20);
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    --LimitCountWithRandom;
    return LimitCountWithRandom;
  }
  v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v29 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
  *(_QWORD *)&v33.fields.currentCryptoKey = v28;
  *(_QWORD *)&v33.fields.fakeValue = v27;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v30);
  return ImageLimitCount__GetImageLimitCount(v31, v29, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4B1740A & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B1740A = 1;
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
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v5);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct CommandCodeStatus_array *commandCode; // x10
  int max_length; // w8
  __int64 v13; // x9
  CommandCodeStatus_o **m_Items; // x10
  CommandCodeStatus_o *v15; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  __int64 v20; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v4 = this;
  if ( (byte_4B17413 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    this = (ServantLeaderInfo_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B17413 = 1;
  }
  commandCode = v4->fields.commandCode;
  if ( !commandCode )
    return 0LL;
  max_length = commandCode->max_length;
  if ( max_length < 1 )
    return 0LL;
  v13 = 0LL;
  m_Items = commandCode->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= max_length )
      sub_1BCAA44(this, *(_QWORD *)&index);
    v15 = m_Items[v13];
    if ( !v15 )
      goto LABEL_16;
    if ( v15->fields.idx == index )
      break;
    if ( (int)++v13 >= max_length )
      return 0LL;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v20 = *(_QWORD *)&v15->fields.commandCodeId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v15->fields.commandCodeId.fields.fakeValue;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v22.fields.currentCryptoKey = v20;
  *(_QWORD *)&v22.fields.fakeValue = v19;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
  if ( !v21 )
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&index);
  return (CommandCodeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  v21,
                                  (int32_t)this,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
}


System_Int32_array *__fastcall ServantLeaderInfo__getCommandCodeIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  BalanceConfig_c *v9; // x0
  __int64 v10; // x1
  struct CommandCodeStatus_array *commandCode; // x23
  int max_length; // w8
  System_Int32_array *v13; // x19
  int i; // w24
  CommandCodeStatus_o *v15; // x20
  int32_t idx; // w21
  __int64 v17; // x26
  __int64 v18; // x20
  __int64 v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B17412 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    byte_4B17412 = 1;
  }
  if ( !this->fields.commandCode )
    return 0LL;
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (BalanceConfig_c *)sub_1BCA888(int___TypeInfo, (unsigned int)v8->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_23:
    sub_1BCAA3C(v9, v10);
  max_length = commandCode->max_length;
  v13 = (System_Int32_array *)v9;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_24:
        sub_1BCAA44(v9, v10);
      v15 = commandCode->m_Items[i];
      if ( !v15 )
        goto LABEL_23;
      v9 = BalanceConfig_TypeInfo;
      idx = v15->fields.idx;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
        v9 = BalanceConfig_TypeInfo;
      }
      if ( idx < v9->static_fields->SvtCommandCardMax )
      {
        v17 = v15->fields.idx;
        v19 = *(_QWORD *)&v15->fields.commandCodeId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&v15->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
        *(_QWORD *)&v21.fields.currentCryptoKey = v19;
        *(_QWORD *)&v21.fields.fakeValue = v18;
        v9 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
        if ( !v13 )
          goto LABEL_23;
        if ( (unsigned int)v17 >= v13->max_length )
          goto LABEL_24;
        v13->m_Items[v17 + 1] = (int)v9;
      }
      max_length = commandCode->max_length;
    }
  }
  return v13;
}


int32_t __fastcall ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4B17406 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B17406 = 1;
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
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v5);
    if ( OptionManager__GetFriendCostume(0LL) )
      return LimitCountWithRandom;
  }
  else if ( LimitCountWithRandom >= 1 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v5);
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
  __int64 v5; // x2
  int32_t LimitCountWithRandom; // w20
  __int64 v7; // x1
  int32_t limitCount; // w22
  int32_t v9; // w0
  int32_t v10; // w1
  __int64 v11; // x1
  int32_t v12; // w19

  if ( (byte_4B17408 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    byte_4B17408 = 1;
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
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v7);
        v9 = LimitCountWithRandom - 1;
        v10 = limitCount;
        return ImageLimitCount__GetLimitCountByDispLimit(v9, v10, 0LL);
      }
      return limitCount;
    }
    return this->fields.limitCount;
  }
  if ( LimitCountWithRandom >= 11 || LimitCountWithRandom < 1 )
    return this->fields.limitCount;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v7);
  limitCount = LimitCountWithRandom;
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    v12 = this->fields.limitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v11);
    v9 = LimitCountWithRandom - 1;
    v10 = v12;
    return ImageLimitCount__GetLimitCountByDispLimit(v9, v10, 0LL);
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
  __int64 v7; // x1
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

  if ( (byte_4B173F5 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo, method);
    byte_4B173F5 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL) < 1 )
    return 0;
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v13, limitCount, DispLimitCount, setupInfo, 0LL);
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

  if ( (byte_4B17404 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp, lateExp);
    byte_4B17404 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v11 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL) >= 1 )
  {
    v13 = this->fields.equipTarget1;
    if ( !v13 )
      sub_1BCAA3C(0LL, v12);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  EquipTargetInfo_o *v12; // x0
  BalanceConfig_c *v13; // x0
  SkillInfo_array *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B173EE & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v7, v8);
    byte_4B173EE = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v11 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL) >= 1 )
  {
    v12 = this->fields.equipTarget1;
    if ( !v12 )
      sub_1BCAA3C(0LL, skillInfoList);
    EquipTargetInfo__getSkillInfo(v12, skillInfoList, 0LL);
  }
  else
  {
LABEL_9:
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)v13->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v14;
    sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
  __int64 v8; // x1
  EquipTargetInfo_o *equipTarget1; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w0
  int32_t limitCount; // w22
  int32_t v14; // w23
  const MethodInfo *v15; // x1
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B173F3 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo, method);
    byte_4B173F3 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v6;
  *(_QWORD *)&v18.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL) < 1 )
    return 0;
  if ( ServantLeaderInfo__getBaseEventUpVal(this, setupInfo, v7) )
    return 1;
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  limitCount = this->fields.limitCount;
  v14 = v12;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v15);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v14, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEventUpVal_41232872(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w0
  int32_t limitCount; // w22
  int32_t v13; // w23
  const MethodInfo *v14; // x1
  int32_t DispLimitCount; // w0
  int32_t npcFlag; // w24
  int32_t v17; // w25
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  EventUpValInfo_o *v21; // x26
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x2
  bool BaseEventUpVal_41233248; // w0
  __int64 v30; // x1
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v32; // w21
  EventUpValInfo_o *v33; // x24
  __int64 v34; // x22
  __int64 v35; // x23
  EquipTargetInfo_o *v36; // x0
  __int64 v37; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4B173F7 & 1) == 0 )
  {
    sub_1BCA7E0(&EventUpValInfo_TypeInfo, eventUpVallInfo, setupInfo);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    byte_4B173F7 = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpVallInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v10;
  *(_QWORD *)&v39.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v39, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  npcFlag = this->fields.npcFlag;
  v17 = DispLimitCount;
  v21 = (EventUpValInfo_o *)sub_1BCAA2C(EventUpValInfo_TypeInfo, v18, v19, v20);
  EventUpValInfo___ctor(v21, setupInfo, v13, limitCount, v17, npcFlag, 0LL);
  *eventUpVallInfo = v21;
  sub_1BCA784((PartyOrganizationUtility_o *)eventUpVallInfo, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL) < 1 )
    return 0;
  BaseEventUpVal_41233248 = ServantLeaderInfo__getBaseEventUpVal_41233248(this, eventUpVallInfo, v28);
  equipTarget1 = this->fields.equipTarget1;
  v32 = BaseEventUpVal_41233248;
  if ( !equipTarget1 )
    return v32;
  v33 = *eventUpVallInfo;
  v35 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
  *(_QWORD *)&v40.fields.currentCryptoKey = v35;
  *(_QWORD *)&v40.fields.fakeValue = v34;
  v36 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v40, 0LL);
  if ( !v33 || (v33->fields.equipSvtId = (int)v36, (v36 = this->fields.equipTarget1) == 0LL) )
    sub_1BCAA3C(v36, v37);
  return (v32 | EquipTargetInfo__getEventUpVal_39606772(v36, eventUpVallInfo, 1, 0LL)) & 1;
}


bool __fastcall ServantLeaderInfo__getEventUpVal_41233860(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool *isServantEventUpVal,
        bool *isEquipEventUpVal,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w0
  int32_t limitCount; // w24
  int32_t v17; // w25
  const MethodInfo *v18; // x1
  int32_t DispLimitCount; // w0
  int32_t npcFlag; // w26
  int32_t v21; // w27
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  EventUpValInfo_o *v25; // x28
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x2
  __int64 v33; // x1
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v35; // x25
  __int64 v36; // x23
  __int64 v37; // x24
  EquipTargetInfo_o *v38; // x0
  __int64 v39; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4B173F8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventUpValInfo_TypeInfo, eventUpVallInfo, isServantEventUpVal);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    byte_4B173F8 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpVallInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v14;
  *(_QWORD *)&v41.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v41, 0LL);
  limitCount = this->fields.limitCount;
  v17 = v15;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v18);
  npcFlag = this->fields.npcFlag;
  v21 = DispLimitCount;
  v25 = (EventUpValInfo_o *)sub_1BCAA2C(EventUpValInfo_TypeInfo, v22, v23, v24);
  EventUpValInfo___ctor(v25, setupInfo, v17, limitCount, v21, npcFlag, 0LL);
  *eventUpVallInfo = v25;
  sub_1BCA784((PartyOrganizationUtility_o *)eventUpVallInfo, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_41233248(this, eventUpVallInfo, v32) )
      *isServantEventUpVal = 1;
    equipTarget1 = this->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v35 = *eventUpVallInfo;
      v37 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
      *(_QWORD *)&v42.fields.currentCryptoKey = v37;
      *(_QWORD *)&v42.fields.fakeValue = v36;
      v38 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v42, 0LL);
      if ( !v35 || (v35->fields.equipSvtId = (int)v38, (v38 = this->fields.equipTarget1) == 0LL) )
        sub_1BCAA3C(v38, v39);
      if ( EquipTargetInfo__getEventUpVal_39606772(v38, eventUpVallInfo, 1, 0LL) )
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  __int64 v21; // x24
  __int64 v22; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v25; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v27; // x24
  int m_CancellationTokenSource; // w25
  float v29; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B17403 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, exp, lateExp);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B17403 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v31.fields.currentCryptoKey = v22;
  *(_QWORD *)&v31.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v31, 0LL);
  if ( !v23 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v23,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v25) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v27 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v27, HIDWORD(Entity[8].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
      v29 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_20;
    }
LABEL_21:
    sub_1BCAA3C(Instance, v18);
  }
  v29 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_20:
  *barExp = v29;
  return 1;
}


int32_t __fastcall ServantLeaderInfo__getFrameType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  ServantExceedMaster_o *v16; // x20
  int32_t FrameType_40396124; // w20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B17405 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExceedMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17405 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantExceedMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  if ( !v16
    || (FrameType_40396124 = ServantExceedMaster__GetFrameType_40396124(
                               v16,
                               (int32_t)Instance,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v18 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v19),
        !v18) )
  {
LABEL_10:
    sub_1BCAA3C(Instance, v11);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v18,
           (int32_t)Instance,
           this->fields.lv,
           FrameType_40396124,
           0LL);
}


int32_t __fastcall ServantLeaderInfo__getFriendPointUpType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x21
  const MethodInfo *v6; // x1
  int32_t BaseFriendPointUpVal; // w0
  __int64 v8; // x1
  EquipTargetInfo_o *equipTarget1; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4B173F1 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B173F1 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v11, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v6);
  if ( !this->fields.equipTarget1
    || EquipTargetInfo__getFriendPointUpVal(this->fields.equipTarget1, 0LL) <= BaseFriendPointUpVal )
  {
    return 0;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    sub_1BCAA3C(0LL, v8);
  return EquipTargetInfo__getFriendPointUpType(equipTarget1, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getFriendPointUpVal(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x21
  const MethodInfo *v6; // x1
  int32_t BaseFriendPointUpVal; // w0
  EquipTargetInfo_o *equipTarget1; // x8
  int32_t v9; // w19
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4B173F0 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B173F0 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v11, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v6);
  equipTarget1 = this->fields.equipTarget1;
  v9 = BaseFriendPointUpVal;
  if ( !equipTarget1 )
    return v9;
  result = EquipTargetInfo__getFriendPointUpVal(equipTarget1, 0LL);
  if ( result <= v9 )
    return v9;
  return result;
}


int32_t __fastcall ServantLeaderInfo__getIconLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int LimitCountWithRandom; // w20
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  bool v11; // vf
  bool v12; // w1
  ServantLeaderInfo_o *v13; // x0
  __int64 v14; // x1
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t v18; // w19
  __int64 v19; // x1
  int32_t v20; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B1740E & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&OptionManager_TypeInfo, v6, v7);
    byte_4B1740E = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 3, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
    v11 = __OFSUB__(LimitCountWithRandom--, 1);
    if ( LimitCountWithRandom < 0 == v11 )
      return LimitCountWithRandom;
    v12 = 1;
    v13 = this;
    return ServantLeaderInfo__getMaxIconLimitCount(v13, v12, v10);
  }
  if ( LimitCountWithRandom >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v9);
    if ( OptionManager__GetFriendCostume(0LL) )
      return LimitCountWithRandom;
    goto LABEL_18;
  }
  if ( LimitCountWithRandom < 1 )
  {
LABEL_18:
    v13 = this;
    v12 = 0;
    return ServantLeaderInfo__getMaxIconLimitCount(v13, v12, v10);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v9);
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    --LimitCountWithRandom;
    return LimitCountWithRandom;
  }
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v19);
  return ImageLimitCount__GetImageLimitCount(v20, v18, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getLevelMax(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x20
  __int64 v11; // x21
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x22
  ServantLimitMaster_o *v18; // x20
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v20; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B173E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExceedMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B173E4 = 1;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v23.fields.currentCryptoKey = v11;
  *(_QWORD *)&v23.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  *(_QWORD *)&v24.fields.currentCryptoKey = v17;
  *(_QWORD *)&v24.fields.fakeValue = v16;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
  if ( !v18
    || (Entity = ServantLimitMaster__GetEntity(v18, (int32_t)Instance, this->fields.limitCount, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v13);
  }
  v20 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0LL);
  lvMax = Entity->fields.lvMax;
  if ( v20 )
    lvMax += v20->fields.addLvMax;
  return lvMax;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__getMaxCardImageLimitCount(
        ServantLeaderInfo_o *this,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w0
  __int64 v10; // x1
  int32_t limitCount; // w20
  int32_t v12; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B1740D & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, isNpc, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    byte_4B1740D = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isNpc);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v9;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v10);
  return ImageLimitCount__GetCardImageLimitCount(v12, limitCount, 0, isNpc, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  __int64 v9; // x1
  int32_t limitCount; // w19
  int32_t v11; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1740B & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    byte_4B1740B = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v13, 0LL);
  limitCount = this->fields.limitCount;
  v11 = v8;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v9);
  return ImageLimitCount__GetImageLimitCount(v11, limitCount, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  __int64 v9; // x1
  int32_t limitCount; // w19
  int32_t v11; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B17407 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    byte_4B17407 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v13, 0LL);
  limitCount = this->fields.limitCount;
  v11 = v8;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v9);
  return ImageLimitCount__GetImageLimitCount(v11, limitCount, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__getMaxIconLimitCount(
        ServantLeaderInfo_o *this,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w0
  __int64 v10; // x1
  int32_t limitCount; // w20
  int32_t v12; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B1740F & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, isNpc, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    byte_4B1740F = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isNpc);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v9;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v10);
  return ImageLimitCount__GetCardImageLimitCount(v12, limitCount, 0, isNpc, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  __int64 v9; // x1
  int32_t limitCount; // w19
  int32_t v11; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B17411 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    byte_4B17411 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v13, 0LL);
  limitCount = this->fields.limitCount;
  v11 = v8;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v9);
  return ImageLimitCount__GetImageLimitCount(v11, limitCount, 0LL);
}


System_Int32_array *__fastcall ServantLeaderInfo__getPassiveSkillIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x21
  ServantLeaderInfo_o *v6; // x0
  PartyOrganizationUtility_o *p_classPassive; // x19
  System_Int32_array *classPassive; // t1
  const MethodInfo *v9; // x3
  System_Int32_array *PassiveSkillIdList; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B173E9 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B173E9 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v18.fields.currentCryptoKey = v5;
  *(_QWORD *)&v18.fields.fakeValue = v4;
  v6 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  classPassive = this->fields.classPassive;
  p_classPassive = (PartyOrganizationUtility_o *)&this->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(v6, (int32_t)v6, classPassive, v9);
  p_classPassive->klass = (PartyOrganizationUtility_c *)PassiveSkillIdList;
  sub_1BCA784(p_classPassive, (int64_t)PassiveSkillIdList, v11, v12, v13, v14, v15, v16);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  ServantLeaderInfo_o *v15; // x0
  const MethodInfo *v16; // x4

  PassiveSkillIdList = ServantLeaderInfo__getPassiveSkillIdList(this, (const MethodInfo *)idList);
  *idList = PassiveSkillIdList;
  sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)PassiveSkillIdList, v9, v10, v11, v12, v13, v14);
  ServantLeaderInfo__GetPassiveSkillInfo(v15, titleList, explanationList, *idList, v16);
}


int32_t __fastcall ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4B17410 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B17410 = 1;
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
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v5);
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

  if ( (byte_4B173FA & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo, method);
    byte_4B173FA = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v6;
  *(_QWORD *)&v18.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
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
  return QuestRestrictionInfo__IsRestriction_41172444(questRestrictionInfo, v9, limitCount, v14, lv, v16, v15);
}


int32_t __fastcall ServantLeaderInfo__getRarity(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x22
  ServantLimitMaster_o *v14; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B173E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B173E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v16.fields.currentCryptoKey = v13;
  *(_QWORD *)&v16.fields.fakeValue = v12;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  if ( !v14 || (Instance = ServantLimitMaster__GetEntity(v14, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_9:
    sub_1BCAA3C(Instance, v9);
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

  if ( (byte_4B173F4 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo, method);
    byte_4B173F4 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL) >= 1
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

  if ( (byte_4B173EC & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList, method);
    byte_4B173EC = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  System_Int32_array *result; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B173E8 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B173E8 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v6->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1BCAA3C(0LL, v8);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillLv2, max_length <= 2) )
  {
    sub_1BCAA44(result, v8);
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

  if ( (byte_4B173FF & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo, method);
    byte_4B173FF = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, v7, this->fields.treasureDeviceId, v8);
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo_41235708(
        ServantLeaderInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t klass; // w8

  if ( (byte_4B17401 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, tdLv, tdMaxLv);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11);
    byte_4B17401 = 1;
  }
  *tdLv = this->fields.treasureDeviceLv;
  if ( this->fields.treasureDeviceId < 1 )
  {
    klass = 0;
    LOBYTE(Entity) = 0;
  }
  else
  {
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C1C6BC(v4);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C1C6BC(v4);
    MasterData_object = **(Il2CppObject ***)(v13 + 184);
    if ( !MasterData_object
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)MasterData_object,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
    {
      sub_1BCAA3C(MasterData_object, tdLv);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               this->fields.treasureDeviceId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x0
  __int64 v10; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t treasureDeviceLv; // w8

  if ( (byte_4B17402 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7, v8);
    byte_4B17402 = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1C6BC(v3);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  MasterData_object = **(Il2CppObject ***)(v10 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_1BCAA3C(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.treasureDeviceId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_4B173FB & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo, method);
    byte_4B173FB = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_41176212(questRestrictionInfo, v7, v8);
}


bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction_41234664(
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

  if ( (byte_4B173FC & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo, partyItem);
    byte_4B173FC = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_41176412(questRestrictionInfo, v11, partyItem, num, -1, v12);
}


bool __fastcall ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4B173EB & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B173EB = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v6 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL) > 0;
}


bool __fastcall ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_4B173E0 & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B173E0 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  LOBYTE(randomLimitCountTargets) = v4->static_fields->enableRandomLimitCount;
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