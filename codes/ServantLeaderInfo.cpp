void __fastcall ServantLeaderInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB595C & 1) == 0 )
  {
    sub_1C13D24(&ServantLeaderInfo_TypeInfo, v1);
    byte_4BB595C = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo___ctor_41659808(
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
  unsigned int v26; // w8
  __int64 v27; // x9
  __int64 v28; // x9
  __int64 v29; // x8
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  long double v36; // q0
  __int64 v37; // x0
  __int64 v38; // x0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  const MethodInfo *v52; // x3

  if ( (byte_4BB591F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v11);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BB591F = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
  *(_QWORD *)&v21 = 0x100000001LL;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v22 = MaxDispLimitCount;
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C65C00(v21);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C65C00(v21);
  Instance = **(void ***)(v24 + 184);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(this->fields.svtId, 0LL);
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
  v26 = *((_DWORD *)Instance + 6);
  if ( !v26 )
    goto LABEL_40;
  v27 = *((_QWORD *)Instance + 4);
  if ( v27 )
    LODWORD(v27) = *(_DWORD *)(v27 + 28);
  this->fields.skillId1 = v27;
  if ( v26 <= 1 )
    goto LABEL_40;
  v28 = *((_QWORD *)Instance + 5);
  if ( v28 )
    LODWORD(v28) = *(_DWORD *)(v28 + 28);
  this->fields.skillId2 = v28;
  if ( v26 <= 2 )
LABEL_40:
    sub_1C13F88(Instance, v17);
  v29 = *((_QWORD *)Instance + 6);
  if ( v29 )
    LODWORD(v29) = *(_DWORD *)(v29 + 28);
  this->fields.skillId3 = v29;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_39;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    goto LABEL_36;
  v37 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
    v37 = sub_1C65C00(v36);
  v38 = *(_QWORD *)(*(_QWORD *)(v37 + 192) + 16LL);
  if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
    v38 = sub_1C65C00(v36);
  Instance = **(void ***)(v38 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL )
  {
LABEL_39:
    sub_1C13F80(Instance, v17);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipTarget1, 0LL, v30, v31, v32, v33, v34, v35);
  this->fields.randomLimitCountTargets = 0LL;
  *(_QWORD *)&this->fields.imageLimitCount = 0LL;
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.updatedAt = 0LL;
  this->fields.portraitLimitCount = 0;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.randomLimitCountTargets, 0LL, v40, v41, v42, v43, v44, v45);
  this->fields.imagePartsGroupInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.imagePartsGroupInfo, 0LL, v46, v47, v48, v49, v50, v51);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    ServantLeaderInfo__SetTransformData(this, 0, v22, v52);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2
  int32_t v16; // w0
  int32_t iconLimitCount; // w1
  const MethodInfo *v18; // x2
  int32_t v19; // w0
  int32_t dispLimitCount; // w1
  const MethodInfo *v21; // x2
  int32_t v22; // w0
  int32_t commandCardLimitCount; // w1
  const MethodInfo *v24; // x2
  int32_t v25; // w0
  int32_t portraitLimitCount; // w1
  const MethodInfo *v27; // x2
  ServantLeaderInfo_o *v28; // x0
  int32_t v29; // w1
  const MethodInfo *v30; // x2
  ServantLeaderInfo_o *AdjustLimitCount; // x0
  int32_t v32; // w1
  const MethodInfo *v33; // x2
  ServantLeaderInfo_o *v34; // x0
  int32_t v35; // w1
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4BB5951 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C13D24(&OptionManager_TypeInfo, v5);
    byte_4BB5951 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSpoilerSetting(0LL) )
  {
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v44.fields.currentCryptoKey = v7;
    *(_QWORD *)&v44.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v44, 0LL) >= 1 )
    {
      v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v8,
        (const MethodInfo_3288E14 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v8;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.limitChangeDic, (int64_t)v8, v9, v10, v11, v12, v13, v14);
      v16 = ServantLeaderInfo__GetLimitChangeDic(this, this->fields.imageLimitCount, v15);
      iconLimitCount = this->fields.iconLimitCount;
      this->fields.imageLimitCount = v16;
      v19 = ServantLeaderInfo__GetLimitChangeDic(this, iconLimitCount, v18);
      dispLimitCount = this->fields.dispLimitCount;
      this->fields.iconLimitCount = v19;
      v22 = ServantLeaderInfo__GetLimitChangeDic(this, dispLimitCount, v21);
      commandCardLimitCount = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = v22;
      v25 = ServantLeaderInfo__GetLimitChangeDic(this, commandCardLimitCount, v24);
      portraitLimitCount = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = v25;
      v28 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetLimitChangeDic(this, portraitLimitCount, v27);
      v29 = this->fields.dispLimitCount;
      this->fields.portraitLimitCount = (int)v28;
      AdjustLimitCount = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(v28, v29, v30);
      v32 = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = (int)AdjustLimitCount;
      v34 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(AdjustLimitCount, v32, v33);
      v35 = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = (int)v34;
      this->fields.portraitLimitCount = ServantLeaderInfo__GetAdjustLimitCount(v34, v35, v36);
      ServantLeaderInfo__SetServantNameBySpoilerProtection(this, v37);
      this->fields.limitChangeDic = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.limitChangeDic, 0LL, v38, v39, v40, v41, v42, v43);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipTarget1, 0LL, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_4BB5954 & 1) == 0 )
  {
    sub_1C13D24(&ServantLeaderInfo_TypeInfo, *(_QWORD *)&orgLimitCount);
    byte_4BB5954 = 1;
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

  if ( (byte_4BB5923 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C13D24(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v13);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BB5923 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v20;
  *(_QWORD *)&v27.fields.fakeValue = v19;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v27, 0LL);
  if ( !v21 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v21,
               (int32_t)Instance,
               (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v23),
        !v22) )
  {
LABEL_15:
    sub_1C13F80(Instance, v17);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                        (int32_t)Instance,
                        (const MethodInfo_3238624 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
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
  int64_t EntityListFromSvtId; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_String_o *v34; // x26
  int64_t v35; // x25
  System_Int32_array *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_String_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_String_array *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Boolean_array *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Int32_array *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // x27
  il2cpp_array_size_t v72; // w19
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x11
  int max_length; // w8
  __int64 v75; // x9
  __int64 v76; // x10
  AppendPassiveSkillInfo_o **m_Items; // x11
  AppendPassiveSkillInfo_o *v78; // x29
  __int64 v79; // x20
  __int64 v80; // x8
  System_Int32_array *v81; // x9
  SkillEntity_o *v82; // x28
  System_Int32_array *v83; // x8
  System_String_array *v84; // x22
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x1
  Il2CppClass **v92; // x0
  System_String_array *v93; // x22
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x1
  Il2CppClass **v101; // x0
  System_Boolean_array *v102; // x8
  char v103; // w9
  System_String_array *v104; // x22
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x1
  Il2CppClass **v112; // x0
  System_String_array *v113; // x28
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x1
  Il2CppClass **v121; // x0
  System_String_array *v122; // x8
  System_String_array *v123; // x8
  Il2CppClass **v124; // x28
  System_String_o *v125; // t1
  System_String_o *v126; // x0
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  System_String_array *v133; // x8
  Il2CppClass **v134; // x28
  PartyOrganizationUtility_o *v135; // x28
  System_String_o *v136; // x29
  System_String_o *v137; // t1
  System_String_o *v138; // x0
  System_String_o *v139; // x0
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  struct AppendPassiveSkillInfo_array *v146; // x8
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16

  if ( (byte_4BB5955 & 1) == 0 )
  {
    sub_1C13D24(&bool___TypeInfo, idList);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1C13D24(&DataManager_TypeInfo, v12);
    sub_1C13D24(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1C13D24(&int___TypeInfo, v14);
    sub_1C13D24(&LocalizationManager_TypeInfo, v15);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C13D24(&string___TypeInfo, v17);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v18);
    sub_1C13D24(&StringLiteral_3846/*"COND_TYPE_SERVANT_GROUP"*/, v19);
    sub_1C13D24(&StringLiteral_3834/*"CONDUCTION_LVEXCEED"*/, v20);
    sub_1C13D24(&StringLiteral_1/*""*/, v21);
    byte_4BB5955 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v174.fields.currentCryptoKey = v24;
  *(_QWORD *)&v174.fields.fakeValue = v23;
  EntityListFromSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v174, 0LL);
  if ( !v25
    || (EntityListFromSvtId = (int64_t)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                         v25,
                                         EntityListFromSvtId,
                                         0LL)) == 0 )
  {
LABEL_67:
    sub_1C13F80(EntityListFromSvtId, v27);
  }
  v34 = *(struct System_String_o **)(EntityListFromSvtId + 24);
  v35 = EntityListFromSvtId;
  if ( v34 || (v146 = this->fields.appendPassiveSkill) != 0LL && *(_QWORD *)&v146->max_length )
  {
    v36 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, (unsigned int)v34);
    *idList = v36;
    sub_1C13CC8((PartyOrganizationUtility_o *)idList, (int64_t)v36, v37, v38, v39, v40, v41, v42);
    v43 = (System_String_array *)sub_1C13DCC(string___TypeInfo, (unsigned int)v34);
    *titleList = v43;
    sub_1C13CC8((PartyOrganizationUtility_o *)titleList, (int64_t)v43, v44, v45, v46, v47, v48, v49);
    v50 = (System_String_array *)sub_1C13DCC(string___TypeInfo, (unsigned int)v34);
    *explanationList = v50;
    sub_1C13CC8((PartyOrganizationUtility_o *)explanationList, (int64_t)v50, v51, v52, v53, v54, v55, v56);
    v57 = (System_Boolean_array *)sub_1C13DCC(bool___TypeInfo, (unsigned int)v34);
    *releaseStateList = v57;
    sub_1C13CC8((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v57, v58, v59, v60, v61, v62, v63);
    v64 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, (unsigned int)v34);
    *lvList = v64;
    sub_1C13CC8((PartyOrganizationUtility_o *)lvList, (int64_t)v64, v65, v66, v67, v68, v69, v70);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EntityListFromSvtId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v34 >= 1 )
    {
      v71 = (DataMasterBase_TMaster__TEntity__PKType__o *)EntityListFromSvtId;
      v72 = 0;
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
        v78 = 0LL;
LABEL_24:
        if ( v72 >= *(_DWORD *)(v35 + 24) )
          goto LABEL_68;
        v79 = (int)v72;
        v80 = *(_QWORD *)(v35 + 8LL * (int)v72 + 32);
        if ( !v80 )
          goto LABEL_67;
        v81 = *idList;
        if ( !*idList )
          goto LABEL_67;
        if ( v72 >= v81->max_length )
          goto LABEL_68;
        v27 = *(unsigned int *)(v80 + 28);
        v81->m_Items[v72 + 1] = v27;
        if ( !v71 )
          goto LABEL_67;
        EntityListFromSvtId = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                         v71,
                                         v27,
                                         (const MethodInfo_3238624 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v82 = (SkillEntity_o *)EntityListFromSvtId;
        v83 = *lvList;
        if ( v78 )
        {
          if ( !v83 )
            goto LABEL_67;
          if ( v72 >= v83->max_length )
            goto LABEL_68;
          v83->m_Items[v72 + 1] = v78->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v84 = *titleList;
          EntityListFromSvtId = (int64_t)SkillEntity__getEffectTitle(
                                           (SkillEntity_o *)EntityListFromSvtId,
                                           v78->fields.skillLv,
                                           0LL);
          if ( !v84 )
            goto LABEL_67;
          if ( v72 >= v84->max_length )
            goto LABEL_68;
          v91 = EntityListFromSvtId;
          v92 = &v84->obj.klass + (int)v72;
          v92[4] = (Il2CppClass *)v91;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v92 + 4), v91, v85, v86, v87, v88, v89, v90);
          v93 = *explanationList;
          EntityListFromSvtId = (int64_t)SkillEntity__getEffectExplanation(v82, v78->fields.skillLv, 0LL);
          if ( !v93 )
            goto LABEL_67;
          if ( v72 >= v93->max_length )
            goto LABEL_68;
          v100 = EntityListFromSvtId;
          v101 = &v93->obj.klass + (int)v72;
          v101[4] = (Il2CppClass *)v100;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v101 + 4), v100, v94, v95, v96, v97, v98, v99);
          v102 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v72 >= v102->max_length )
            goto LABEL_68;
          v103 = 1;
        }
        else
        {
          if ( !v83 )
            goto LABEL_67;
          if ( v72 >= v83->max_length )
            goto LABEL_68;
          v83->m_Items[v72 + 1] = -1;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v104 = *titleList;
          EntityListFromSvtId = (int64_t)SkillEntity__getEffectTitle((SkillEntity_o *)EntityListFromSvtId, -1, 0LL);
          if ( !v104 )
            goto LABEL_67;
          if ( v72 >= v104->max_length )
            goto LABEL_68;
          v111 = EntityListFromSvtId;
          v112 = &v104->obj.klass + (int)v72;
          v112[4] = (Il2CppClass *)v111;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v112 + 4), v111, v105, v106, v107, v108, v109, v110);
          v113 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"COND_TYPE_SERVANT_GROUP"*/, 0LL);
          if ( !v113 )
            goto LABEL_67;
          if ( v72 >= v113->max_length )
            goto LABEL_68;
          v120 = EntityListFromSvtId;
          v121 = &v113->obj.klass + (int)v72;
          v121[4] = (Il2CppClass *)v120;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 4), v120, v114, v115, v116, v117, v118, v119);
          v122 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v72 >= v122->max_length )
            goto LABEL_68;
          EntityListFromSvtId = System_String__op_Inequality(
                                  v122->m_Items[v72],
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v123 = *explanationList;
            if ( !*explanationList )
              goto LABEL_67;
            if ( v72 >= v123->max_length )
              goto LABEL_68;
            v124 = &v123->obj.klass + (int)v72;
            v125 = (System_String_o *)v124[4];
            v124 += 4;
            v126 = System_String__Concat_62967944(v125, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            *v124 = (Il2CppClass *)v126;
            sub_1C13CC8((PartyOrganizationUtility_o *)v124, (int64_t)v126, v127, v128, v129, v130, v131, v132);
          }
          v133 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v72 >= v133->max_length )
            goto LABEL_68;
          v134 = &v133->obj.klass + (int)v72;
          v137 = (System_String_o *)v134[4];
          v135 = (PartyOrganizationUtility_o *)(v134 + 4);
          v136 = v137;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v138 = LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"CONDUCTION_LVEXCEED"*/, 0LL);
          v139 = System_String__Concat_62967944(v136, v138, 0LL);
          v135->klass = (PartyOrganizationUtility_c *)v139;
          sub_1C13CC8(v135, (int64_t)v139, v140, v141, v142, v143, v144, v145);
          v102 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v72 >= v102->max_length )
            goto LABEL_68;
          v103 = 0;
        }
        ++v72;
        v102->m_Items[v79 + 4] = v103;
        if ( v72 == (_DWORD)v34 )
          return;
      }
      v75 = 0LL;
      v76 = v35 + 8LL * (int)v72 + 32;
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v75 < max_length )
      {
        v78 = m_Items[v75];
        if ( !v78 )
          goto LABEL_67;
        if ( v72 >= *(_DWORD *)(v35 + 24) )
          break;
        if ( !*(_QWORD *)v76 )
          goto LABEL_67;
        if ( v78->fields.skillId == *(_DWORD *)(*(_QWORD *)v76 + 28LL) )
          goto LABEL_24;
        if ( (int)++v75 >= max_length )
          goto LABEL_23;
      }
LABEL_68:
      sub_1C13F88(EntityListFromSvtId, v27);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)idList, 0LL, v28, v29, v30, v31, v32, v33);
    *titleList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)titleList, 0LL, v147, v148, v149, v150, v151, v152);
    *explanationList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)explanationList, 0LL, v153, v154, v155, v156, v157, v158);
    *releaseStateList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)releaseStateList, 0LL, v159, v160, v161, v162, v163, v164);
    *lvList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)lvList, 0LL, v165, v166, v167, v168, v169, v170);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x8
  __int64 v24; // x25
  System_Int32_array *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_String_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_String_array *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Boolean_array *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Int32_array *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t Master_object; // x0
  __int64 skillId; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // x26
  il2cpp_array_size_t v63; // w29
  struct AppendPassiveSkillInfo_array *v64; // x8
  __int64 v65; // x19
  AppendPassiveSkillInfo_o *v66; // x8
  System_Int32_array *v67; // x9
  struct AppendPassiveSkillInfo_array *v68; // x8
  AppendPassiveSkillInfo_o *v69; // x8
  int skillLv; // w10
  SkillEntity_o *v71; // x27
  System_Int32_array *v72; // x9
  System_String_array *v73; // x28
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x1
  Il2CppClass **v81; // x0
  struct AppendPassiveSkillInfo_array *v82; // x8
  AppendPassiveSkillInfo_o *v83; // x8
  System_String_array *v84; // x28
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x1
  Il2CppClass **v92; // x0
  System_Boolean_array *v93; // x8
  char v94; // w9
  System_String_array *v95; // x28
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x1
  Il2CppClass **v103; // x0
  System_String_array *v104; // x27
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x1
  Il2CppClass **v112; // x0
  System_String_array *v113; // x8
  System_String_array *v114; // x8
  Il2CppClass **v115; // x27
  System_String_o *v116; // t1
  System_String_o *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  System_String_array *v124; // x8
  Il2CppClass **v125; // x27
  PartyOrganizationUtility_o *v126; // x27
  System_String_o *v127; // x28
  System_String_o *v128; // t1
  System_String_o *v129; // x0
  System_String_o *v130; // x0
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
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

  if ( (byte_4BB5956 & 1) == 0 )
  {
    sub_1C13D24(&bool___TypeInfo, idList);
    sub_1C13D24(&Method_DataManager_GetMaster_SkillMaster___, v13);
    sub_1C13D24(&DataManager_TypeInfo, v14);
    sub_1C13D24(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v15);
    sub_1C13D24(&int___TypeInfo, v16);
    sub_1C13D24(&LocalizationManager_TypeInfo, v17);
    sub_1C13D24(&string___TypeInfo, v18);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v19);
    sub_1C13D24(&StringLiteral_3846/*"COND_TYPE_SERVANT_GROUP"*/, v20);
    sub_1C13D24(&StringLiteral_3834/*"CONDUCTION_LVEXCEED"*/, v21);
    sub_1C13D24(&StringLiteral_1/*""*/, v22);
    byte_4BB5956 = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (v24 = *(_QWORD *)&appendPassiveSkill->max_length) != 0 )
  {
    v25 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, (unsigned int)v24);
    *idList = v25;
    sub_1C13CC8((PartyOrganizationUtility_o *)idList, (int64_t)v25, v26, v27, v28, v29, v30, v31);
    v32 = (System_String_array *)sub_1C13DCC(string___TypeInfo, (unsigned int)v24);
    *titleList = v32;
    sub_1C13CC8((PartyOrganizationUtility_o *)titleList, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    v39 = (System_String_array *)sub_1C13DCC(string___TypeInfo, (unsigned int)v24);
    *explanationList = v39;
    sub_1C13CC8((PartyOrganizationUtility_o *)explanationList, (int64_t)v39, v40, v41, v42, v43, v44, v45);
    v46 = (System_Boolean_array *)sub_1C13DCC(bool___TypeInfo, (unsigned int)v24);
    *releaseStateList = v46;
    sub_1C13CC8((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v46, v47, v48, v49, v50, v51, v52);
    v53 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, (unsigned int)v24);
    *lvList = v53;
    sub_1C13CC8((PartyOrganizationUtility_o *)lvList, (int64_t)v53, v54, v55, v56, v57, v58, v59);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v24 >= 1 )
    {
      v62 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v63 = 0;
      while ( 1 )
      {
        v64 = this->fields.appendPassiveSkill;
        if ( !v64 )
          break;
        if ( v63 >= v64->max_length )
          goto LABEL_58;
        v65 = (int)v63;
        v66 = v64->m_Items[v63];
        if ( !v66 )
          break;
        v67 = *idList;
        if ( !*idList )
          break;
        if ( v63 >= v67->max_length )
          goto LABEL_58;
        skillId = (unsigned int)v66->fields.skillId;
        v67->m_Items[v63 + 1] = skillId;
        if ( !v62 )
          break;
        Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                   v62,
                                   skillId,
                                   (const MethodInfo_3238624 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v68 = this->fields.appendPassiveSkill;
        if ( !v68 )
          break;
        if ( v63 >= v68->max_length )
          goto LABEL_58;
        v69 = v68->m_Items[v63];
        if ( !v69 )
          break;
        skillLv = v69->fields.skillLv;
        v71 = (SkillEntity_o *)Master_object;
        v72 = *lvList;
        if ( skillLv < 1 )
        {
          if ( !v72 )
            break;
          if ( v63 >= v72->max_length )
            goto LABEL_58;
          v72->m_Items[v63 + 1] = -1;
          if ( !Master_object )
            break;
          v95 = *titleList;
          Master_object = (int64_t)SkillEntity__getEffectTitle((SkillEntity_o *)Master_object, -1, 0LL);
          if ( !v95 )
            break;
          if ( v63 >= v95->max_length )
            goto LABEL_58;
          v102 = Master_object;
          v103 = &v95->obj.klass + (int)v63;
          v103[4] = (Il2CppClass *)v102;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v103 + 4), v102, v96, v97, v98, v99, v100, v101);
          v104 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"COND_TYPE_SERVANT_GROUP"*/, 0LL);
          if ( !v104 )
            break;
          if ( v63 >= v104->max_length )
            goto LABEL_58;
          v111 = Master_object;
          v112 = &v104->obj.klass + (int)v63;
          v112[4] = (Il2CppClass *)v111;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v112 + 4), v111, v105, v106, v107, v108, v109, v110);
          v113 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v63 >= v113->max_length )
            goto LABEL_58;
          Master_object = System_String__op_Inequality(v113->m_Items[v63], (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (Master_object & 1) != 0 )
          {
            v114 = *explanationList;
            if ( !*explanationList )
              break;
            if ( v63 >= v114->max_length )
              goto LABEL_58;
            v115 = &v114->obj.klass + (int)v63;
            v116 = (System_String_o *)v115[4];
            v115 += 4;
            v117 = System_String__Concat_62967944(v116, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            *v115 = (Il2CppClass *)v117;
            sub_1C13CC8((PartyOrganizationUtility_o *)v115, (int64_t)v117, v118, v119, v120, v121, v122, v123);
          }
          v124 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v63 >= v124->max_length )
LABEL_58:
            sub_1C13F88(Master_object, skillId);
          v125 = &v124->obj.klass + (int)v63;
          v128 = (System_String_o *)v125[4];
          v126 = (PartyOrganizationUtility_o *)(v125 + 4);
          v127 = v128;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v129 = LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"CONDUCTION_LVEXCEED"*/, 0LL);
          v130 = System_String__Concat_62967944(v127, v129, 0LL);
          v126->klass = (PartyOrganizationUtility_c *)v130;
          sub_1C13CC8(v126, (int64_t)v130, v131, v132, v133, v134, v135, v136);
          v93 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v63 >= v93->max_length )
            goto LABEL_58;
          v94 = 0;
        }
        else
        {
          if ( !v72 )
            break;
          if ( v63 >= v72->max_length )
            goto LABEL_58;
          v72->m_Items[v63 + 1] = skillLv;
          if ( !Master_object )
            break;
          v73 = *titleList;
          Master_object = (int64_t)SkillEntity__getEffectTitle((SkillEntity_o *)Master_object, v69->fields.skillLv, 0LL);
          if ( !v73 )
            break;
          if ( v63 >= v73->max_length )
            goto LABEL_58;
          v80 = Master_object;
          v81 = &v73->obj.klass + (int)v63;
          v81[4] = (Il2CppClass *)v80;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v81 + 4), v80, v74, v75, v76, v77, v78, v79);
          v82 = this->fields.appendPassiveSkill;
          if ( !v82 )
            break;
          if ( v63 >= v82->max_length )
            goto LABEL_58;
          v83 = v82->m_Items[v63];
          if ( !v83 )
            break;
          v84 = *explanationList;
          Master_object = (int64_t)SkillEntity__getEffectExplanation(v71, v83->fields.skillLv, 0LL);
          if ( !v84 )
            break;
          if ( v63 >= v84->max_length )
            goto LABEL_58;
          v91 = Master_object;
          v92 = &v84->obj.klass + (int)v63;
          v92[4] = (Il2CppClass *)v91;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v92 + 4), v91, v85, v86, v87, v88, v89, v90);
          v93 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v63 >= v93->max_length )
            goto LABEL_58;
          v94 = 1;
        }
        ++v63;
        v93->m_Items[v65 + 4] = v94;
        if ( (_DWORD)v24 == v63 )
          return;
      }
      sub_1C13F80(Master_object, skillId);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)idList,
      0LL,
      (int64_t)titleList,
      (int32_t)explanationList,
      (System_String_o *)releaseStateList,
      (BattleSetupInfo_o *)lvList,
      (FollowerInfo_o *)method,
      v7);
    *titleList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)titleList, 0LL, v137, v138, v139, v140, v141, v142);
    *explanationList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)explanationList, 0LL, v143, v144, v145, v146, v147, v148);
    *releaseStateList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)releaseStateList, 0LL, v149, v150, v151, v152, v153, v154);
    *lvList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)lvList, 0LL, v155, v156, v157, v158, v159, v160);
  }
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo_41680568(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x20
  SkillInfo_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x21
  __int64 v24; // x22
  __int64 v25; // x23
  int64_t v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  unsigned __int64 v35; // x25
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  SkillInfo_array *v44; // x26
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x0
  System_Int32_array *v52; // [xsp+0h] [xbp-70h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4BB5957 & 1) == 0 )
  {
    sub_1C13D24(&SkillInfo___TypeInfo, skillInfoList);
    sub_1C13D24(&SkillInfo_TypeInfo, v8);
    byte_4BB5957 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v52 = 0LL;
  releaseStateList = 0LL;
  if ( isNpc )
    ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v52,
      v4);
  else
    ServantLeaderInfo__GetAppendPassiveSkillInfo(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v52,
      v4);
  if ( idList && (v15 = *(_QWORD *)&idList->max_length) != 0 )
  {
    v16 = (SkillInfo_array *)sub_1C13DCC(SkillInfo___TypeInfo, (unsigned int)v15);
    *skillInfoList = v16;
    sub_1C13CC8((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    if ( (int)v15 >= 1 )
    {
      v23 = -(__int64)(unsigned int)v15;
      v24 = 8LL;
      v25 = 32LL;
      do
      {
        v26 = sub_1C13F70(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v26, 0LL);
        if ( !v26 )
          goto LABEL_26;
        *(_DWORD *)(v26 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v35 = v24 - 8;
        if ( v24 - 8 >= (unsigned __int64)idList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v26 + 16) = *((_DWORD *)&idList->obj.klass + v24);
        if ( !v52 )
          goto LABEL_26;
        if ( v35 >= v52->max_length )
          goto LABEL_27;
        *(_DWORD *)(v26 + 20) = *((_DWORD *)&v52->obj.klass + v24);
        if ( !titleList )
          goto LABEL_26;
        if ( v35 >= titleList->max_length )
          goto LABEL_27;
        v36 = *(int64_t *)((char *)&titleList->obj.klass + v25);
        *(_QWORD *)(v26 + 32) = v36;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 32), v36, v29, v30, v31, v32, v33, v34);
        if ( !explanationList )
          goto LABEL_26;
        if ( v35 >= explanationList->max_length )
          goto LABEL_27;
        v43 = *(int64_t *)((char *)&explanationList->obj.klass + v25);
        *(_QWORD *)(v26 + 40) = v43;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 40), v43, v37, v38, v39, v40, v41, v42);
        v44 = *skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_1C13F80(v27, v28);
        v27 = sub_1C13E60(v26, v44->obj.klass->_1.element_class);
        if ( !v27 )
        {
          v51 = sub_1C13FA4(0LL);
          sub_1C13E4C(v51, 0LL);
        }
        if ( v35 >= v44->max_length )
LABEL_27:
          sub_1C13F88(v27, v28);
        *(Il2CppClass **)((char *)&v44->obj.klass + v25) = (Il2CppClass *)v26;
        sub_1C13CC8((PartyOrganizationUtility_o *)((char *)v44 + v25), v26, v45, v46, v47, v48, v49, v50);
        ++v24;
        v25 += 8LL;
      }
      while ( v23 + v24 != 8 );
    }
  }
  else
  {
    *skillInfoList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)skillInfoList, 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4BB5946 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&ImageLimitCount_TypeInfo, v4);
    sub_1C13D24(&OptionManager_TypeInfo, v5);
    sub_1C13D24(&ServantLeaderInfo_TypeInfo, v6);
    byte_4BB5946 = 1;
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

  if ( (byte_4BB5952 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, *(_QWORD *)&limit);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB5952 = 1;
  }
  value = 0;
  limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
          limit,
          &value,
          (const MethodInfo_328AE70 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    limitChangeDic = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( limitChangeDic )
    {
      limitChangeDic = (DataManager_o *)DataManager__GetMasterData_object_(
                                          limitChangeDic,
                                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
            (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_1C13F80(limitChangeDic, *(_QWORD *)&limit);
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
  int32_t ChoiceLimitCount_33243232; // w0
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v8; // x0

  if ( (byte_4BB591E & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, v5);
    byte_4BB591E = 1;
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
  ChoiceLimitCount_33243232 = RandomLimitCountManager__GetChoiceLimitCount_33243232(this, 0LL);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_33243232;
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

  if ( (byte_4BB5927 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&dispSvtId);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB5927 = 1;
  }
  if ( !classPassive )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
    {
      sub_1C13F80(Instance, v9);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               dispSvtId,
               (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  System_String_array *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  long double v30; // q0
  __int64 v31; // x0
  __int64 v32; // x0
  DataManager_o *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x22
  unsigned __int64 v35; // x25
  unsigned int v36; // w24
  __int64 v37; // x26
  int32_t *v38; // x27
  System_String_array *v39; // x28
  SkillEntity_o *v40; // x23
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  Il2CppClass **v48; // x0
  System_String_array *v49; // x28
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  Il2CppClass **v57; // x0
  unsigned __int64 max_length; // x8
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7

  if ( (byte_4BB592C & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_SkillMaster___, titleList);
    sub_1C13D24(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    sub_1C13D24(&string___TypeInfo, v13);
    byte_4BB592C = 1;
  }
  if ( !idList )
    goto LABEL_29;
  v14 = *(_QWORD *)&idList->max_length;
  if ( !v14 )
    goto LABEL_29;
  v15 = (System_String_array *)sub_1C13DCC(string___TypeInfo, (unsigned int)v14);
  *titleList = v15;
  sub_1C13CC8((PartyOrganizationUtility_o *)titleList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_String_array *)sub_1C13DCC(string___TypeInfo, (unsigned int)v14);
  *explanationList = v22;
  sub_1C13CC8((PartyOrganizationUtility_o *)explanationList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1C65C00(v30);
  v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1C65C00(v30);
  MasterData_object = **(DataManager_o ***)(v32 + 184);
  if ( !MasterData_object )
LABEL_31:
    sub_1C13F80(MasterData_object, v29);
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)v14 < 1 )
    goto LABEL_29;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v35 = 0LL;
  v36 = 0;
  v37 = (unsigned int)v14;
  v38 = &idList->m_Items[1];
  do
  {
    if ( v35 >= idList->max_length )
LABEL_30:
      sub_1C13F88(MasterData_object, v29);
    v29 = (unsigned int)v38[v35];
    if ( (int)v29 >= 1 )
    {
      if ( !v34 )
        goto LABEL_31;
      MasterData_object = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                             v34,
                                             v29,
                                             (const MethodInfo_3238624 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( MasterData_object )
      {
        v39 = *titleList;
        v40 = (SkillEntity_o *)MasterData_object;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectTitle((SkillEntity_o *)MasterData_object, 0, 0LL);
        if ( !v39 )
          goto LABEL_31;
        if ( v36 >= v39->max_length )
          goto LABEL_30;
        v47 = (int64_t)MasterData_object;
        v48 = &v39->obj.klass + (int)v36;
        v48[4] = (Il2CppClass *)v47;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v48 + 4), v47, v41, v42, v43, v44, v45, v46);
        v49 = *explanationList;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectExplanation(v40, 0, 0LL);
        if ( !v49 )
          goto LABEL_31;
        if ( v36 >= v49->max_length )
          goto LABEL_30;
        v56 = (int64_t)MasterData_object;
        v57 = &v49->obj.klass + (int)v36;
        v57[4] = (Il2CppClass *)v56;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v57 + 4), v56, v50, v51, v52, v53, v54, v55);
        if ( v35 != v36 )
        {
          max_length = idList->max_length;
          if ( v35 >= max_length || v36 >= (unsigned int)max_length )
            goto LABEL_30;
          idList->m_Items[v36 + 1] = v38[v35];
          v38[v35] = 0;
        }
        ++v36;
      }
      else
      {
        if ( v35 >= idList->max_length )
          goto LABEL_30;
        v38[v35] = 0;
      }
    }
    ++v35;
  }
  while ( v37 != v35 );
  if ( !v36 )
  {
LABEL_29:
    *titleList = 0LL;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)titleList,
      0LL,
      (int64_t)explanationList,
      (int32_t)idList,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    *explanationList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)explanationList, 0LL, v59, v60, v61, v62, v63, v64);
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
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4BB5924 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&id1);
    sub_1C13D24(&int___TypeInfo, v8);
    byte_4BB5924 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1C13F80(0LL, v11);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = id1, max_length == 1) || (result->m_Items[2] = id2, max_length <= 2) )
    sub_1C13F88(result, v11);
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
  int64_t v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  unsigned __int64 v33; // x21
  int64_t v34; // x23
  il2cpp_array_size_t v35; // w29
  int32_t *v36; // x24
  SkillEntity_o *v37; // x27
  BalanceConfig_c **v38; // x20
  ServantSkillEntity_o *EntityFromSkillId; // x26
  int64_t v40; // x25
  System_String_o *EffectTitle; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_String_o *EffectExplanation; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x8
  int32_t skillNum; // w8
  PartyOrganizationUtility_c *klass; // x26
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  void **v64; // x0
  int32_t *v65; // x20
  int32_t *i; // x21
  __int64 v67; // x0
  Il2CppObject *v68; // [xsp+0h] [xbp-90h]
  int32_t *v69; // [xsp+8h] [xbp-88h]
  ServantSkillMaster_o *v71; // [xsp+18h] [xbp-78h]
  PartyOrganizationUtility_o *v72; // [xsp+20h] [xbp-70h]
  int64_t v73; // [xsp+28h] [xbp-68h]

  v72 = (PartyOrganizationUtility_o *)skillInfoList;
  if ( (byte_4BB592A & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_1C13D24(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    sub_1C13D24(&SkillInfo___TypeInfo, v12);
    sub_1C13D24(&SkillInfo_TypeInfo, v13);
    byte_4BB592A = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C65C00(v5);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C65C00(v5);
  Entity = **(DataManager_o ***)(v15 + 184);
  if ( !Entity )
    goto LABEL_56;
  MasterData_object = DataManager__GetMasterData_object_(
                        Entity,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SkillMaster___);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C65C00(v18);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C65C00(v18);
  Entity = **(DataManager_o ***)(v20 + 184);
  if ( !Entity )
LABEL_56:
    sub_1C13F80(Entity, skillInfoList);
  v21 = &BalanceConfig_TypeInfo;
  v71 = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                  Entity,
                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v22);
  v24 = BalanceConfig_TypeInfo;
  v25 = SkillLevelList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  v26 = sub_1C13DCC(SkillInfo___TypeInfo, (unsigned int)v24->static_fields->SvtSkillListMax);
  v72->klass = (PartyOrganizationUtility_c *)v26;
  sub_1C13CC8(v72, v26, v27, v28, v29, v30, v31, v32);
  v33 = 0LL;
  v73 = 0LL;
  v34 = 0LL;
  v35 = 0;
  v36 = &idList->m_Items[1];
  v68 = MasterData_object;
  v69 = &v25->m_Items[1];
  while ( 1 )
  {
    Entity = (DataManager_o *)*v21;
    if ( !(*v21)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v21;
    }
    if ( (__int64)v33 >= *(int *)(*(_QWORD *)&Entity[1].fields._DispLog + 32LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v33 >= idList->max_length )
LABEL_57:
      sub_1C13F88(Entity, skillInfoList);
    skillInfoList = (SkillInfo_array **)(unsigned int)v36[v33];
    if ( (int)skillInfoList >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_56;
      Entity = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)skillInfoList,
                                  (const MethodInfo_3238624 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( v33 >= idList->max_length )
          goto LABEL_57;
        v37 = (SkillEntity_o *)Entity;
        Entity = (DataManager_o *)v71;
        if ( !v71 )
          goto LABEL_56;
        v38 = v21;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v71, dispSvtId, (int)v33 + 1, v36[v33], 0LL);
        v40 = sub_1C13F70(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v40, 0LL);
        if ( v33 >= idList->max_length )
          goto LABEL_57;
        if ( !v40 )
          goto LABEL_56;
        *(_DWORD *)(v40 + 16) = v36[v33];
        if ( !v25 )
          goto LABEL_56;
        if ( v33 >= v25->max_length )
          goto LABEL_57;
        *(_DWORD *)(v40 + 20) = v69[v33];
        Entity = (DataManager_o *)SkillEntity__getEffectChargeTurn(v37, v69[v33], 0LL);
        *(_DWORD *)(v40 + 24) = (_DWORD)Entity;
        if ( v33 >= v25->max_length )
          goto LABEL_57;
        EffectTitle = SkillEntity__getEffectTitle(v37, v69[v33], 0LL);
        *(_QWORD *)(v40 + 32) = EffectTitle;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)EffectTitle, v42, v43, v44, v45, v46, v47);
        if ( v33 >= v25->max_length )
          goto LABEL_57;
        EffectExplanation = SkillEntity__getEffectExplanation(v37, v69[v33], 0LL);
        *(_QWORD *)(v40 + 40) = EffectExplanation;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 40), (int64_t)EffectExplanation, v49, v50, v51, v52, v53, v54);
        v55 = v73;
        if ( EntityFromSkillId )
          v34 = v40;
        if ( !EntityFromSkillId )
          v55 = v40;
        v73 = v55;
        if ( EntityFromSkillId )
        {
          Entity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          if ( !v34 )
            goto LABEL_56;
          *(_DWORD *)(v34 + 48) = (_DWORD)Entity;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          if ( !v55 )
            goto LABEL_56;
          skillNum = 0;
          *(_DWORD *)(v73 + 48) = 0;
        }
        *(_DWORD *)(v40 + 52) = skillNum;
        *(_BYTE *)(v40 + 56) = 1;
        klass = v72->klass;
        if ( !v72->klass )
          goto LABEL_56;
        Entity = (DataManager_o *)sub_1C13E60(v40, *((_QWORD *)klass->_1.image + 8));
        if ( !Entity )
        {
          v67 = sub_1C13FA4(0LL);
          sub_1C13E4C(v67, 0LL);
        }
        if ( v35 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_57;
        v64 = &klass->_1.image + (int)v35;
        v64[4] = (void *)v40;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v64 + 4), v40, v58, v59, v60, v61, v62, v63);
        MasterData_object = v68;
        ++v35;
        v21 = v38;
      }
    }
    ++v33;
  }
  v65 = &v25->m_Items[v35 + 1];
  for ( i = &idList->m_Items[v35 + 1]; ; ++i )
  {
    if ( !LODWORD(Entity[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v21;
    }
    if ( (signed int)v35 >= *(_DWORD *)(*(_QWORD *)&Entity[1].fields._DispLog + 32LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v35 >= idList->max_length )
      goto LABEL_57;
    *i = 0;
    if ( !v25 )
      goto LABEL_56;
    if ( v35 >= v25->max_length )
      goto LABEL_57;
    *v65++ = -1;
    ++v35;
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

  if ( (byte_4BB5959 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4BB5959 = 1;
  }
  entity = 0LL;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BAF1E5 )
    {
      sub_1C13D24(&NetworkManager_TypeInfo, v8);
      byte_4BAF1E5 = 1;
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
      v10 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v19, 0LL);
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
        v10 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v20, 0LL);
        if ( v14 )
          return UserEventDataLostEntity__GetTimesToRestart(v14, (int32_t)v10, 0LL);
LABEL_25:
        sub_1C13F80(v10, v8);
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
  sub_1C13CC8(p_classPassive, (int64_t)PassiveSkillIdList, v9, v10, v11, v12, v13, v14);
  v17 = this->fields.afterTransformSvtInfo;
  if ( !v17 )
    sub_1C13F80(v15, v16);
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
  sub_1C13CC8(
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  TreasureDvcInfo_o *v23; // x8
  int32_t tdLv; // w9

  if ( (byte_4BB593D & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, tdInfo);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1C13D24(&TreasureDvcInfo_TypeInfo, v11);
    byte_4BB593D = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C65C00(v5);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C65C00(v5);
  MasterData_object = **(Il2CppObject ***)(v13 + 184);
  if ( !MasterData_object )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !MasterData_object )
    goto LABEL_13;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           (ServantTreasureDvcMaster_o *)MasterData_object,
                           dispSvtId,
                           treasureDeviceId,
                           0LL);
  v16 = (TreasureDvcInfo_o *)sub_1C13F70(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v16, 0LL);
  *tdInfo = v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)tdInfo, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  if ( EntityFromSvtIdDvcId )
  {
    v23 = *tdInfo;
    if ( *tdInfo )
    {
      v23->fields.id = treasureDeviceId;
      tdLv = this->fields.treasureDeviceLv;
      v23->fields.lv = tdLv;
      ServantTreasureDvcEntity__getEffectExplanation(
        EntityFromSvtIdDvcId,
        &v23->fields.name,
        &v23->fields.explanation,
        &v23->fields.maxLv,
        &v23->fields.guageCount,
        &v23->fields.cardId,
        &v23->fields.strengthStatus,
        &v23->fields.treasureDeviceNum,
        tdLv,
        0LL);
      return EntityFromSvtIdDvcId != 0LL;
    }
LABEL_13:
    sub_1C13F80(MasterData_object, tdInfo);
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

  if ( (byte_4BB5958 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4BB5958 = 1;
  }
  entity = 0LL;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v8);
    byte_4BAF1E5 = 1;
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
  v10 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v19, 0LL);
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
  v10 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v20, 0LL);
  if ( !v14 )
LABEL_26:
    sub_1C13F80(v10, v8);
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
  const MethodInfo *v12; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4BB595A & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4BB595A = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v14, 0LL);
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

  if ( (byte_4BB593A & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4BB593A = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v16, 0LL);
  limitCount = this->fields.limitCount;
  v11 = v9;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v12);
  return QuestRestrictionInfo__IsUniqueIndividuality_41612184(
           questRestrictionInfo,
           v11,
           limitCount,
           DispLimitCount,
           npcFollowerInfo,
           v14);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction_41670524(
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

  if ( (byte_4BB593B & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4BB593B = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v20, 0LL);
  limitCount = this->fields.limitCount;
  v15 = v13;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v16);
  return QuestRestrictionInfo__IsUniqueIndividuality_41613668(
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


void __fastcall ServantLeaderInfo__SetEquipImagePartsGroupIdxs(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ServantLeaderInfo___c__DisplayClass128_0_o *v11; // x20
  void *Master_object; // x0
  __int64 v13; // x1
  struct EquipTargetInfo_o *equipTarget1; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  System_Collections_Generic_IEnumerable_TSource__o *imagePartsGroupInfo; // x21
  System_Func_object__bool__o *v19; // x22
  System_Int32_array **v20; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4BB595B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_Single_UserImagePartsGroupEntity___, v5);
    sub_1C13D24(&System_Func_UserImagePartsGroupEntity__bool__TypeInfo, v6);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C13D24(&Method_ServantLeaderInfo___c__DisplayClass128_0__SetEquipImagePartsGroupIdxs_b__0__, v8);
    sub_1C13D24(&ServantLeaderInfo___c__DisplayClass128_0_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_20564/*"ig"*/, v10);
    byte_4BB595B = 1;
  }
  entity = 0LL;
  v11 = (ServantLeaderInfo___c__DisplayClass128_0_o *)sub_1C13F70(ServantLeaderInfo___c__DisplayClass128_0_TypeInfo);
  ServantLeaderInfo___c__DisplayClass128_0___ctor(v11, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.imagePartsGroupInfo, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
    equipTarget1 = this->fields.equipTarget1;
    if ( !equipTarget1 )
      goto LABEL_19;
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v17 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v17;
    *(_QWORD *)&v22.fields.fakeValue = v16;
    Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v22, 0LL);
    if ( !v15 )
      goto LABEL_19;
    Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              v15,
                              &entity,
                              (int32_t)Master_object,
                              (const MethodInfo_3238670 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return;
    if ( !entity )
      goto LABEL_19;
    Master_object = (void *)EntityScriptUtil__GetIntValue(
                              (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                              (System_String_o *)StringLiteral_20564/*"ig"*/,
                              0,
                              0LL);
    if ( !v11 )
      goto LABEL_19;
    v11->fields.scriptImageValue = (int)Master_object;
    if ( !(_DWORD)Master_object )
      return;
    imagePartsGroupInfo = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.imagePartsGroupInfo;
    v19 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_UserImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v19,
      (Il2CppObject *)v11,
      Method_ServantLeaderInfo___c__DisplayClass128_0__SetEquipImagePartsGroupIdxs_b__0__,
      0LL);
    Master_object = System_Linq_Enumerable__Single_object__50092060(
                      imagePartsGroupInfo,
                      (System_Func_TSource__bool__o *)v19,
                      (const MethodInfo_2FC581C *)Method_System_Linq_Enumerable_Single_UserImagePartsGroupEntity___);
    if ( !Master_object )
      goto LABEL_19;
    v20 = (System_Int32_array **)Master_object;
    if ( BasicHelper__IsNullOrEmpty(*((System_Collections_ICollection_o **)Master_object + 3), 0LL) )
      return;
    Master_object = this->fields.equipTarget1;
    if ( !Master_object )
LABEL_19:
      sub_1C13F80(Master_object, v13);
    EquipTargetInfo__SetImagePartsGroupIdxs((EquipTargetInfo_o *)Master_object, v20[3], 0LL);
  }
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  PartyOrganizationUtility_o *p_overwriteServantDetailName; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v27; // x23
  __int64 v28; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x21
  ServantEntity_o *v30; // x21
  const MethodInfo *v31; // x1
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w23
  int32_t v34; // w24
  int32_t LimitCountByDispLimit; // w23
  Il2CppObject *Master_object; // x0
  __int64 v37; // x25
  __int64 v38; // x26
  ServantLimitImageMaster_o *v39; // x24
  struct System_String_o *LimitCountSealedServantName; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  Il2CppObject *v47; // x23
  const MethodInfo *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int32_t CardImageLimitCount; // w22
  int32_t LimitCountByImageLimitCostumeIn; // w22
  Il2CppObject *v57; // x0
  __int64 v58; // x23
  __int64 v59; // x24
  ServantLimitImageMaster_o *v60; // x19
  int32_t ServantLimitCountSealAfter; // w0
  struct System_String_o *overwriteServantName; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4BB5953 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1C13D24(&DataManager_TypeInfo, v12);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1C13D24(&ImageLimitCount_TypeInfo, v14);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BB5953 = 1;
  }
  this->fields.overwriteServantName = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.overwriteServantName, 0LL, v2, v3, v4, v5, v6, v7);
  p_overwriteServantDetailName = (PartyOrganizationUtility_o *)&this->fields.overwriteServantDetailName;
  this->fields.overwriteServantDetailName = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.overwriteServantDetailName, 0LL, v18, v19, v20, v21, v22, v23);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v28;
  *(_QWORD *)&v63.fields.fakeValue = v27;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v63, 0LL);
  if ( !v29 )
    goto LABEL_28;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v29,
               (int32_t)Instance,
               (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_28;
  v30 = (ServantEntity_o *)Instance;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v31);
    limitCount = this->fields.limitCount;
    v34 = DispLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v34, limitCount, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v38 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v37 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v39 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v64.fields.currentCryptoKey = v38;
    *(_QWORD *)&v64.fields.fakeValue = v37;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v64, 0LL);
    if ( v39 )
    {
      LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                      v39,
                                      (int32_t)Instance,
                                      LimitCountByDispLimit,
                                      0LL);
      this->fields.overwriteServantName = LimitCountSealedServantName;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.overwriteServantName,
        (int64_t)LimitCountSealedServantName,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      v47 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                   this->fields.svtId,
                                   0LL);
      if ( v47 )
      {
        if ( !ServantLimitAddMaster__IsOverwriteSvtDetailName((ServantLimitAddMaster_o *)v47, (int32_t)Instance, 0LL) )
        {
          overwriteServantName = this->fields.overwriteServantName;
          goto LABEL_27;
        }
        CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v48);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v57 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          v59 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v58 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          v60 = (ServantLimitImageMaster_o *)v57;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v65.fields.currentCryptoKey = v59;
          *(_QWORD *)&v65.fields.fakeValue = v58;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v65, 0LL);
          if ( v60 )
          {
            ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v60,
                                           (int32_t)Instance,
                                           LimitCountByImageLimitCostumeIn,
                                           0LL);
            overwriteServantName = ServantEntity__getName(v30, -1, ServantLimitCountSealAfter, 0LL);
LABEL_27:
            p_overwriteServantDetailName->klass = (PartyOrganizationUtility_c *)overwriteServantName;
            sub_1C13CC8(p_overwriteServantDetailName, (int64_t)overwriteServantName, v49, v50, v51, v52, v53, v54);
            return;
          }
        }
      }
    }
LABEL_28:
    sub_1C13F80(Instance, v25);
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
  void *UseEntityList; // x0
  __int64 v24; // x1
  AfterTransformSvtInfo_o *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int32_t aftDispLimitCount; // w22
  int32_t v33; // w21
  Il2CppObject *v34; // x23
  ServantLimitMaster_o *v35; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  ServantLimitEntity_o *v38; // x24
  _DWORD *v39; // x25
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x19
  int32_t atkMax; // w27
  int32_t atkBase; // w29
  int v43; // w28
  struct AfterTransformSvtInfo_o *v44; // x29
  int32_t atk; // w19
  int32_t adjustAtk; // w27
  struct AfterTransformSvtInfo_o *v47; // x8
  __int64 v48; // x9
  Il2CppObject *v49; // x24
  unsigned int v50; // w9
  __int64 v51; // x10
  struct AfterTransformSvtInfo_o *v52; // x8
  __int64 v53; // x10
  __int64 v54; // x9
  Il2CppObject *v55; // x0
  void *v56; // x24
  Il2CppClass *v57; // x25
  ServantTreasureDvcMaster_o *v58; // x23
  int32_t friendshipRanka; // [xsp+Ch] [xbp-74h]
  struct AfterTransformSvtInfo_o **p_afterTransformSvtInfo; // [xsp+10h] [xbp-70h]
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4BB5920 & 1) == 0 )
  {
    sub_1C13D24(&AfterTransformSvtInfo_TypeInfo, *(_QWORD *)&friendshipRank);
    sub_1C13D24(&BalanceConfig_TypeInfo, v7);
    sub_1C13D24(&CheckCombineResStatus_TypeInfo, v8);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantExpMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantSkillMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantTransformMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v14);
    sub_1C13D24(&DataManager_TypeInfo, v15);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1C13D24(&ImageLimitCount_TypeInfo, v17);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    byte_4BB5920 = 1;
  }
  entity = 0LL;
  if ( dispLimitCount <= 1 )
    dispLimitCount = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v62.fields.currentCryptoKey = v21;
  *(_QWORD *)&v62.fields.fakeValue = v20;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v62, 0LL);
  if ( !v22 )
    goto LABEL_53;
  if ( !ServantTransformMaster__TryGetEntity(v22, &entity, (int32_t)UseEntityList, dispLimitCount, 0LL) )
    return;
  v25 = (AfterTransformSvtInfo_o *)sub_1C13F70(AfterTransformSvtInfo_TypeInfo);
  AfterTransformSvtInfo___ctor(v25, 0LL);
  this->fields.afterTransformSvtInfo = v25;
  p_afterTransformSvtInfo = &this->fields.afterTransformSvtInfo;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.afterTransformSvtInfo,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !entity )
    goto LABEL_53;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  v33 = ImageLimitCount__ConvertDispLimitCountForClient(aftDispLimitCount, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_53;
  if ( !UseEntityList )
    goto LABEL_53;
  friendshipRanka = friendshipRank;
  v34 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)UseEntityList,
          entity->fields.aftSvtId,
          (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v34 )
    goto LABEL_53;
  v35 = (ServantLimitMaster_o *)UseEntityList;
  klass = v34[1].klass;
  monitor = v34[1].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = klass;
  *(_QWORD *)&v63.fields.fakeValue = monitor;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v63, 0LL);
  if ( !v35 )
    goto LABEL_53;
  v38 = ServantLimitMaster__GetEntity(v35, (int32_t)UseEntityList, this->fields.limitCount, 0LL);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantExpMaster___);
  if ( !UseEntityList )
    goto LABEL_53;
  UseEntityList = ServantExpMaster__GetEntity(
                    (ServantExpMaster_o *)UseEntityList,
                    HIDWORD(v34[8].klass),
                    this->fields.lv,
                    0LL);
  if ( !v38 )
    goto LABEL_53;
  v39 = UseEntityList;
  if ( !UseEntityList )
    goto LABEL_53;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  atkBase = v38->fields.atkBase;
  atkMax = v38->fields.atkMax;
  UseEntityList = CheckCombineResStatus_TypeInfo;
  v43 = v39[7];
  if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
  if ( !afterTransformSvtInfo )
    goto LABEL_53;
  afterTransformSvtInfo->fields.atk = v43 * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                                    + v38->fields.atkBase;
  v44 = *p_afterTransformSvtInfo;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_53;
  atk = v44->fields.atk;
  adjustAtk = this->fields.adjustAtk;
  UseEntityList = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UseEntityList = BalanceConfig_TypeInfo;
  }
  v47 = *p_afterTransformSvtInfo;
  v48 = *((_QWORD *)UseEntityList + 23);
  v44->fields.atk = atk + *(_DWORD *)(v48 + 308) * adjustAtk;
  if ( !v47 )
    goto LABEL_53;
  v47->fields.hp = (v38->fields.hpMax - v38->fields.hpBase)
                 * v39[7]
                 / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                 + v38->fields.hpBase
                 + *(_DWORD *)(v48 + 312) * this->fields.adjustHp;
  v49 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v34[1],
                            0LL);
  if ( !v49 )
    goto LABEL_53;
  UseEntityList = ServantSkillMaster__getUseEntityList(
                    (ServantSkillMaster_o *)v49,
                    (int32_t)UseEntityList,
                    this->fields.userId,
                    this->fields.lv,
                    this->fields.limitCount,
                    v33,
                    -1,
                    -1LL,
                    0LL);
  if ( !UseEntityList )
    goto LABEL_53;
  v50 = *((_DWORD *)UseEntityList + 6);
  if ( !v50 )
    goto LABEL_54;
  v51 = *((_QWORD *)UseEntityList + 4);
  v52 = this->fields.afterTransformSvtInfo;
  if ( v51 )
    LODWORD(v51) = *(_DWORD *)(v51 + 28);
  if ( !v52 )
    goto LABEL_53;
  v52->fields.skillId1 = v51;
  if ( v50 <= 1 )
    goto LABEL_54;
  v53 = *((_QWORD *)UseEntityList + 5);
  if ( v53 )
    LODWORD(v53) = *(_DWORD *)(v53 + 28);
  v52->fields.skillId2 = v53;
  if ( v50 <= 2 )
LABEL_54:
    sub_1C13F88(UseEntityList, v24);
  v54 = *((_QWORD *)UseEntityList + 6);
  if ( v54 )
    LODWORD(v54) = *(_DWORD *)(v54 + 28);
  v52->fields.skillId3 = v54;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v55 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v57 = v34[1].klass;
  v56 = v34[1].monitor;
  v58 = (ServantTreasureDvcMaster_o *)v55;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v57;
  *(_QWORD *)&v64.fields.fakeValue = v56;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v64, 0LL);
  if ( !v58 )
    goto LABEL_53;
  UseEntityList = ServantTreasureDvcMaster__getUseEntity(
                    v58,
                    (int32_t)UseEntityList,
                    this->fields.userId,
                    this->fields.lv,
                    this->fields.limitCount,
                    v33,
                    friendshipRanka,
                    -1,
                    0LL);
  if ( !UseEntityList )
    return;
  if ( !*p_afterTransformSvtInfo )
LABEL_53:
    sub_1C13F80(UseEntityList, v24);
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

  if ( (byte_4BB5933 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, setupInfo);
    sub_1C13D24(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB5933 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v7;
  *(_QWORD *)&v43.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v43, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_38:
    sub_1C13F80(Instance, v9);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v44, 0LL);
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
          sub_1C13F88(Instance, v9);
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
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v45, 0LL);
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


bool __fastcall ServantLeaderInfo__getBaseEventUpVal_41668828(
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

  if ( (byte_4BB5936 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_1C13D24(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB5936 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v9;
  *(_QWORD *)&v25.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v25, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_37;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1C13F80(Instance, v11);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_41117412(
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
        sub_1C13F88(Instance, v11);
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
        if ( SkillLvEntity__getEventUpVal_41117412(Entity, eventUpVallInfo, 1, 0, 1, 0, 0LL, 0LL) )
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

  if ( (byte_4BB592F & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB592F = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v18, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1C13F80(Instance, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          sub_1C13F88(Instance, v9);
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

  if ( (byte_4BB5949 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&ImageLimitCount_TypeInfo, v3);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C13D24(&OptionManager_TypeInfo, v5);
    byte_4BB5949 = 1;
  }
  if ( ConstantMaster__IsOtherImage(0LL) )
  {
    v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v8;
    *(_QWORD *)&v23.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v23, 0LL);
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
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v24, 0LL);
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

  if ( (byte_4BB5947 & 1) == 0 )
  {
    sub_1C13D24(&OptionManager_TypeInfo, method);
    byte_4BB5947 = 1;
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
  if ( (byte_4BB5950 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_1C13D24(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantLeaderInfo_o *)sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB5950 = 1;
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
      sub_1C13F88(this, *(_QWORD *)&index);
    v12 = m_Items[v10];
    if ( !v12 )
      goto LABEL_16;
    if ( v12->fields.idx == index )
      break;
    if ( (int)++v10 >= max_length )
      return 0LL;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v16 = *(_QWORD *)&v12->fields.commandCodeId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v12->fields.commandCodeId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v16;
  *(_QWORD *)&v18.fields.fakeValue = v15;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v18, 0LL);
  if ( !v17 )
LABEL_16:
    sub_1C13F80(this, *(_QWORD *)&index);
  return (CommandCodeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  v17,
                                  (int32_t)this,
                                  (const MethodInfo_3238624 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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

  if ( (byte_4BB594F & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&int___TypeInfo, v3);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4BB594F = 1;
  }
  if ( !this->fields.commandCode )
    return 0LL;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (BalanceConfig_c *)sub_1C13DCC(int___TypeInfo, (unsigned int)v5->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_23:
    sub_1C13F80(v6, v7);
  max_length = commandCode->max_length;
  v10 = (System_Int32_array *)v6;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_24:
        sub_1C13F88(v6, v7);
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
        v6 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v18, 0LL);
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

  if ( (byte_4BB5943 & 1) == 0 )
  {
    sub_1C13D24(&OptionManager_TypeInfo, method);
    byte_4BB5943 = 1;
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

  if ( (byte_4BB5945 & 1) == 0 )
  {
    sub_1C13D24(&ImageLimitCount_TypeInfo, method);
    sub_1C13D24(&OptionManager_TypeInfo, v4);
    byte_4BB5945 = 1;
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

  if ( (byte_4BB5932 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4BB5932 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v16, 0LL) < 1 )
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v17, 0LL);
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

  if ( (byte_4BB5941 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp);
    byte_4BB5941 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v15, 0LL) >= 1 )
  {
    v13 = this->fields.equipTarget1;
    if ( !v13 )
      sub_1C13F80(0LL, v12);
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
  SkillInfo_array *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4BB592B & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C13D24(&SkillInfo___TypeInfo, v6);
    byte_4BB592B = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v9 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v9;
  *(_QWORD *)&v20.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v20, 0LL) >= 1 )
  {
    v11 = this->fields.equipTarget1;
    if ( !v11 )
      sub_1C13F80(0LL, v10);
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
    v13 = (SkillInfo_array *)sub_1C13DCC(SkillInfo___TypeInfo, (unsigned int)v12->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v13;
    sub_1C13CC8((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4BB5930 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4BB5930 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v17, 0LL) < 1 )
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v18, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v13, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEventUpVal_41668452(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2
  bool BaseEventUpVal_41668828; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v27; // w21
  EventUpValInfo_o *v28; // x24
  __int64 v29; // x22
  __int64 v30; // x23
  EquipTargetInfo_o *v31; // x0
  __int64 v32; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4BB5934 & 1) == 0 )
  {
    sub_1C13D24(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4BB5934 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v9;
  *(_QWORD *)&v34.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v34, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v10;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v13);
  npcFlag = this->fields.npcFlag;
  v16 = DispLimitCount;
  v17 = (EventUpValInfo_o *)sub_1C13F70(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v17, setupInfo, v12, limitCount, v16, npcFlag, 0LL);
  *eventUpVallInfo = v17;
  sub_1C13CC8((PartyOrganizationUtility_o *)eventUpVallInfo, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(this->fields.svtId, 0LL) < 1 )
    return 0;
  BaseEventUpVal_41668828 = ServantLeaderInfo__getBaseEventUpVal_41668828(this, eventUpVallInfo, v24);
  equipTarget1 = this->fields.equipTarget1;
  v27 = BaseEventUpVal_41668828;
  if ( !equipTarget1 )
    return v27;
  v28 = *eventUpVallInfo;
  v30 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v30;
  *(_QWORD *)&v35.fields.fakeValue = v29;
  v31 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v35, 0LL);
  if ( !v28 || (v28->fields.equipSvtId = (int)v31, (v31 = this->fields.equipTarget1) == 0LL) )
    sub_1C13F80(v31, v32);
  return (v27 | EquipTargetInfo__getEventUpVal_40045780(v31, eventUpVallInfo, 1, 0LL)) & 1;
}


bool __fastcall ServantLeaderInfo__getEventUpVal_41669440(
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v30; // x25
  __int64 v31; // x23
  __int64 v32; // x24
  EquipTargetInfo_o *v33; // x0
  __int64 v34; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4BB5935 & 1) == 0 )
  {
    sub_1C13D24(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4BB5935 = 1;
  }
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v13;
  *(_QWORD *)&v36.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v36, 0LL);
  limitCount = this->fields.limitCount;
  v16 = v14;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v17);
  npcFlag = this->fields.npcFlag;
  v20 = DispLimitCount;
  v21 = (EventUpValInfo_o *)sub_1C13F70(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v21, setupInfo, v16, limitCount, v20, npcFlag, 0LL);
  *eventUpVallInfo = v21;
  sub_1C13CC8((PartyOrganizationUtility_o *)eventUpVallInfo, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(this->fields.svtId, 0LL) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_41668828(this, eventUpVallInfo, v28) )
      *isServantEventUpVal = 1;
    equipTarget1 = this->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v30 = *eventUpVallInfo;
      v32 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v37.fields.currentCryptoKey = v32;
      *(_QWORD *)&v37.fields.fakeValue = v31;
      v33 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v37, 0LL);
      if ( !v30 || (v30->fields.equipSvtId = (int)v33, (v33 = this->fields.equipTarget1) == 0LL) )
        sub_1C13F80(v33, v34);
      if ( EquipTargetInfo__getEventUpVal_40045780(v33, eventUpVallInfo, 1, 0LL) )
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

  if ( (byte_4BB5940 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BB5940 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v17;
  *(_QWORD *)&v26.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v26, 0LL);
  if ( !v18 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v18,
             (int32_t)Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v20) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    sub_1C13F80(Instance, v14);
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
  int32_t FrameType_40830668; // w20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4BB5942 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB5942 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantExceedMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v16, 0LL);
  if ( !v11
    || (FrameType_40830668 = ServantExceedMaster__GetFrameType_40830668(
                               v11,
                               (int32_t)Instance,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v14),
        !v13) )
  {
LABEL_10:
    sub_1C13F80(Instance, v7);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v13,
           (int32_t)Instance,
           this->fields.lv,
           FrameType_40830668,
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

  if ( (byte_4BB592E & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BB592E = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v10, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v5);
  if ( !this->fields.equipTarget1
    || EquipTargetInfo__getFriendPointUpVal(this->fields.equipTarget1, 0LL) <= BaseFriendPointUpVal )
  {
    return 0;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    sub_1C13F80(0LL, v7);
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

  if ( (byte_4BB592D & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BB592D = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v10, 0LL) < 1 )
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

  if ( (byte_4BB594B & 1) == 0 )
  {
    sub_1C13D24(&ImageLimitCount_TypeInfo, method);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C13D24(&OptionManager_TypeInfo, v5);
    byte_4BB594B = 1;
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
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v16, 0LL);
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

  if ( (byte_4BB5921 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB5921 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v18, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v19, 0LL);
  if ( !v13
    || (Entity = ServantLimitMaster__GetEntity(v13, (int32_t)Instance, this->fields.limitCount, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_17:
    sub_1C13F80(Instance, v9);
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

  if ( (byte_4BB594A & 1) == 0 )
  {
    sub_1C13D24(&ImageLimitCount_TypeInfo, isNpc);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4BB594A = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v12, 0LL);
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

  if ( (byte_4BB5948 & 1) == 0 )
  {
    sub_1C13D24(&ImageLimitCount_TypeInfo, method);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4BB5948 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v10, 0LL);
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

  if ( (byte_4BB5944 & 1) == 0 )
  {
    sub_1C13D24(&ImageLimitCount_TypeInfo, method);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4BB5944 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v10, 0LL);
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

  if ( (byte_4BB594C & 1) == 0 )
  {
    sub_1C13D24(&ImageLimitCount_TypeInfo, isNpc);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4BB594C = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v12, 0LL);
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

  if ( (byte_4BB594E & 1) == 0 )
  {
    sub_1C13D24(&ImageLimitCount_TypeInfo, method);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4BB594E = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v10, 0LL);
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
  PartyOrganizationUtility_o *p_classPassive; // x19
  System_Int32_array *classPassive; // t1
  const MethodInfo *v8; // x3
  System_Int32_array *PassiveSkillIdList; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4BB5926 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BB5926 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v4;
  *(_QWORD *)&v17.fields.fakeValue = v3;
  v5 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v17, 0LL);
  classPassive = this->fields.classPassive;
  p_classPassive = (PartyOrganizationUtility_o *)&this->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(v5, (int32_t)v5, classPassive, v8);
  p_classPassive->klass = (PartyOrganizationUtility_c *)PassiveSkillIdList;
  sub_1C13CC8(p_classPassive, (int64_t)PassiveSkillIdList, v10, v11, v12, v13, v14, v15);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)idList, (int64_t)PassiveSkillIdList, v9, v10, v11, v12, v13, v14);
  ServantLeaderInfo__GetPassiveSkillInfo(v15, titleList, explanationList, *idList, v16);
}


int32_t __fastcall ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4BB594D & 1) == 0 )
  {
    sub_1C13D24(&OptionManager_TypeInfo, method);
    byte_4BB594D = 1;
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
  int32_t DispLimitCount; // w0
  const MethodInfo *v13; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4BB5937 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4BB5937 = 1;
  }
  if ( !questRestrictionInfo || NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
    return 0;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v14, 0LL);
  limitCount = this->fields.limitCount;
  v10 = v8;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v11);
  return QuestRestrictionInfo__IsRestriction_41607864(
           questRestrictionInfo,
           v10,
           limitCount,
           DispLimitCount,
           this->fields.lv,
           2,
           v13);
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

  if ( (byte_4BB5922 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BB5922 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v12, 0LL);
  if ( !v10 || (Instance = ServantLimitMaster__GetEntity(v10, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_9:
    sub_1C13F80(Instance, v6);
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

  if ( (byte_4BB5931 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4BB5931 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v9, 0LL) >= 1
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

  if ( (byte_4BB5929 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
    byte_4BB5929 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v12, 0LL);
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

  if ( (byte_4BB5925 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&int___TypeInfo, v3);
    byte_4BB5925 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, (unsigned int)v4->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1C13F80(0LL, v6);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillLv2, max_length <= 2) )
  {
    sub_1C13F88(result, v6);
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

  if ( (byte_4BB593C & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
    byte_4BB593C = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v10, 0LL);
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, v7, this->fields.treasureDeviceId, v8);
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo_41671228(
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

  if ( (byte_4BB593E & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_TreasureDvcMaster___, tdLv);
    sub_1C13D24(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    byte_4BB593E = 1;
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
      v10 = sub_1C65C00(v4);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C65C00(v4);
    MasterData_object = **(Il2CppObject ***)(v11 + 184);
    if ( !MasterData_object
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)MasterData_object,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
    {
      sub_1C13F80(MasterData_object, tdLv);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               this->fields.treasureDeviceId,
               (const MethodInfo_3238624 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_4BB593F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_4BB593F = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C65C00(v2);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C65C00(v2);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_1C13F80(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.treasureDeviceId,
             (const MethodInfo_3238624 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_4BB5938 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4BB5938 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v10, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_41611656(questRestrictionInfo, v7, v8);
}


bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction_41670184(
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

  if ( (byte_4BB5939 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4BB5939 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v14, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_41611856(questRestrictionInfo, v11, partyItem, num, -1, v12);
}


bool __fastcall ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4BB5928 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BB5928 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v7, 0LL) > 0;
}


bool __fastcall ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_4BB591D & 1) == 0 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB591D = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB05D4 = 1;
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


void __fastcall ServantLeaderInfo___c__DisplayClass128_0___ctor(
        ServantLeaderInfo___c__DisplayClass128_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantLeaderInfo___c__DisplayClass128_0___SetEquipImagePartsGroupIdxs_b__0(
        ServantLeaderInfo___c__DisplayClass128_0_o *this,
        UserImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C13F80(this, 0LL);
  return entity->fields.id == this->fields.scriptImageValue;
}