void __fastcall ServantLeaderInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4216972 & 1) == 0 )
  {
    sub_B0D8A4(&ServantLeaderInfo_TypeInfo, v1);
    byte_4216972 = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo___ctor_28142536(
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
  ServantEntity_o *Entity; // x22
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t v20; // w8
  int32_t MaxDispLimitCount; // w0
  int32_t v22; // w21
  __int64 v23; // x23
  __int64 v24; // x23
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x8
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x22
  __int64 v36; // x22
  ServantTreasureDvcEntity_o *UseEntity; // x0
  struct System_Int32_array **p_randomLimitCountTargets; // x19
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x0

  if ( (byte_421693A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_421693A = 1;
  }
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userId = 1LL;
  this->fields.classId = 0;
  this->fields.userSvtId = 1LL;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.exceedCount = 0;
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  this->fields.npcFlag = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_38;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_38;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, v18);
  if ( !Instance )
    goto LABEL_38;
  this->fields.hp = *((_DWORD *)Instance + 9);
  v20 = *((_DWORD *)Instance + 11);
  this->fields.adjustAtk = 0;
  this->fields.adjustHp = 0;
  this->fields.atk = v20;
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(this, v19);
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v22 = MaxDispLimitCount;
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v24 = **(_QWORD **)(v23 + 192);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AA65A4(v24);
  Instance = **(void ***)(v24 + 184);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(this->fields.svtId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  Instance = ServantSkillMaster__getUseEntityList(
               MasterData_WarQuestSelectionMaster,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               v22,
               -1,
               -1LL,
               0LL);
  if ( !Instance )
    goto LABEL_38;
  if ( !*((_DWORD *)Instance + 6) )
    goto LABEL_39;
  v26 = *((_QWORD *)Instance + 4);
  if ( v26 )
    LODWORD(v26) = *(_DWORD *)(v26 + 28);
  this->fields.skillId1 = v26;
  if ( *((_DWORD *)Instance + 6) <= 1u )
    goto LABEL_39;
  v27 = *((_QWORD *)Instance + 5);
  if ( v27 )
    LODWORD(v27) = *(_DWORD *)(v27 + 28);
  this->fields.skillId2 = v27;
  if ( *((_DWORD *)Instance + 6) <= 2u )
  {
LABEL_39:
    v45 = sub_B0D9A8(Instance);
    sub_B0D948(v45, 0LL);
  }
  v28 = *((_QWORD *)Instance + 6);
  if ( v28 )
    LODWORD(v28) = *(_DWORD *)(v28 + 28);
  this->fields.skillId3 = v28;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_38;
  if ( !ServantEntity__get_IsServant(Entity, 0LL) )
    goto LABEL_37;
  v35 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v36 = **(_QWORD **)(v35 + 192);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AA65A4(v36);
  Instance = **(void ***)(v36 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL )
  {
LABEL_38:
    sub_B0D97C(Instance);
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
LABEL_37:
  this->fields.equipTarget1 = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipTarget1, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.randomLimitCountTargets = 0LL;
  p_randomLimitCountTargets = &this->fields.randomLimitCountTargets;
  *(p_randomLimitCountTargets - 3) = 0LL;
  *(p_randomLimitCountTargets - 2) = 0LL;
  *(p_randomLimitCountTargets - 4) = 0LL;
  *((_DWORD *)p_randomLimitCountTargets - 2) = 0;
  sub_B0D840((BattleServantConfConponent_o *)p_randomLimitCountTargets, 0LL, v39, v40, v41, v42, v43, v44);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_Dictionary_int__int__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  int32_t v18; // w0
  int32_t iconLimitCount; // w1
  const MethodInfo *v20; // x2
  int32_t v21; // w0
  int32_t dispLimitCount; // w1
  const MethodInfo *v23; // x2
  int32_t v24; // w0
  int32_t commandCardLimitCount; // w1
  const MethodInfo *v26; // x2
  int32_t v27; // w0
  int32_t portraitLimitCount; // w1
  const MethodInfo *v29; // x2
  ServantLeaderInfo_o *v30; // x0
  int32_t v31; // w1
  const MethodInfo *v32; // x2
  ServantLeaderInfo_o *AdjustLimitCount; // x0
  int32_t v34; // w1
  const MethodInfo *v35; // x2
  ServantLeaderInfo_o *v36; // x0
  int32_t v37; // w1
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4216968 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&OptionManager_TypeInfo, v5);
    byte_4216968 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetSpoilerSetting(0LL) )
  {
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v46.fields.currentCryptoKey = v7;
    *(_QWORD *)&v46.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v46, 0LL) >= 1 )
    {
      v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                                   System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                   v8,
                                                                   v9);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v10,
        (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v10;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.limitChangeDic,
        (System_Int32_array **)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v18 = ServantLeaderInfo__GetLimitChangeDic(this, this->fields.imageLimitCount, v17);
      iconLimitCount = this->fields.iconLimitCount;
      this->fields.imageLimitCount = v18;
      v21 = ServantLeaderInfo__GetLimitChangeDic(this, iconLimitCount, v20);
      dispLimitCount = this->fields.dispLimitCount;
      this->fields.iconLimitCount = v21;
      v24 = ServantLeaderInfo__GetLimitChangeDic(this, dispLimitCount, v23);
      commandCardLimitCount = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = v24;
      v27 = ServantLeaderInfo__GetLimitChangeDic(this, commandCardLimitCount, v26);
      portraitLimitCount = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = v27;
      v30 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetLimitChangeDic(this, portraitLimitCount, v29);
      v31 = this->fields.dispLimitCount;
      this->fields.portraitLimitCount = (int)v30;
      AdjustLimitCount = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(v30, v31, v32);
      v34 = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = (int)AdjustLimitCount;
      v36 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(AdjustLimitCount, v34, v35);
      v37 = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = (int)v36;
      this->fields.portraitLimitCount = ServantLeaderInfo__GetAdjustLimitCount(v36, v37, v38);
      ServantLeaderInfo__SetServantNameBySpoilerProtection(this, v39);
      this->fields.limitChangeDic = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.limitChangeDic, 0LL, v40, v41, v42, v43, v44, v45);
    }
  }
}


// positive sp value has been detected, the output may be wrong!
void __fastcall ServantLeaderInfo__Finalize(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.equipTarget1 = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipTarget1, 0LL, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_421696B & 1) == 0 )
  {
    sub_B0D8A4(&ServantLeaderInfo_TypeInfo, *(_QWORD *)&orgLimitCount);
    byte_421696B = 1;
  }
  v4 = ServantLeaderInfo_TypeInfo;
  if ( (BYTE3(ServantLeaderInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo);
    v4 = ServantLeaderInfo_TypeInfo;
  }
  if ( LIMIT_COUNT_THIRD_STAGE <= 10 && v4->static_fields->LIMIT_COUNT_THIRD_STAGE < LIMIT_COUNT_THIRD_STAGE )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      LIMIT_COUNT_THIRD_STAGE = v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        return ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE;
      }
    }
    else
    {
      return v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
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
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x25
  __int64 v19; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x24
  const MethodInfo *v22; // x1
  int32_t *Entity; // x0
  int32_t v24; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_421693D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_421693D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v19;
  *(_QWORD *)&v26.fields.fakeValue = v18;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v26, 0LL);
  if ( !v20 )
    goto LABEL_16;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v20,
                                (int32_t)Instance,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_16;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
LABEL_14:
    v24 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_15;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (DataManager_o *)ServantLeaderInfo__getRarity(this, v22),
        !v21) )
  {
LABEL_16:
    sub_B0D97C(Instance);
  }
  Entity = (int32_t *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v21,
                        (int32_t)Instance,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_14;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v24 = Entity[8];
  result = 1;
LABEL_15:
  *secondMaxAdjustAtk = v24;
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
  ServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v23; // x25
  __int64 v24; // x26
  __int64 EntityListFromSvtId; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BattleServantConfConponent_o *v32; // x26
  __int64 v33; // x25
  System_Int32_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Boolean_array *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v69; // x27
  int v70; // w22
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x11
  int max_length; // w8
  __int64 v73; // x9
  __int64 v74; // x10
  AppendPassiveSkillInfo_o **m_Items; // x11
  AppendPassiveSkillInfo_o *v76; // x19
  __int64 v77; // x24
  __int64 v78; // x8
  System_Int32_array *v79; // x9
  System_Int32_array *v80; // x8
  BattleServantConfConponent_c *klass; // x8
  SkillEntity_o *v82; // x28
  System_String_array *v83; // x26
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x20
  Il2CppClass **v91; // x0
  System_String_array *v92; // x20
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x28
  Il2CppClass **v100; // x0
  System_Boolean_array *v101; // x8
  char v102; // w9
  BattleServantConfConponent_c *v103; // x8
  System_String_array *v104; // x19
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x20
  Il2CppClass **v112; // x0
  System_String_array *v113; // x19
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x20
  Il2CppClass **v121; // x0
  System_String_array *v122; // x8
  System_String_array *v123; // x8
  BattleServantConfConponent_o *v124; // x20
  System_String_o *call_openComp; // t1
  System_Int32_array **v126; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_String_array *v133; // x8
  Il2CppClass **v134; // x28
  System_String_o *v135; // x20
  BattleServantConfConponent_o *v136; // x28
  System_String_o *v137; // t1
  System_String_o *v138; // x0
  System_Int32_array **v139; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  struct AppendPassiveSkillInfo_array *v146; // x8
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  __int64 v171; // x0
  __int64 v172; // x0
  BattleServantConfConponent_o *v173; // [xsp+8h] [xbp-78h]
  __int64 v177; // [xsp+28h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16

  if ( (byte_421696C & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, idList);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B0D8A4(&int___TypeInfo, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B0D8A4(&string___TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v18);
    sub_B0D8A4(&StringLiteral_3318/*"COND_TYPE_TITLE"*/, v19);
    sub_B0D8A4(&StringLiteral_3306/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_B0D8A4(&StringLiteral_1/*""*/, v21);
    byte_421696C = 1;
  }
  v173 = (BattleServantConfConponent_o *)lvList;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v178.fields.currentCryptoKey = v24;
  *(_QWORD *)&v178.fields.fakeValue = v23;
  EntityListFromSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v178, 0LL);
  if ( !Master_WarQuestSelectionMaster
    || (EntityListFromSvtId = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                         Master_WarQuestSelectionMaster,
                                         EntityListFromSvtId,
                                         0LL),
        v32 = v173,
        !EntityListFromSvtId) )
  {
LABEL_84:
    sub_B0D97C(EntityListFromSvtId);
  }
  v33 = EntityListFromSvtId;
  v177 = *(_QWORD *)(EntityListFromSvtId + 24);
  if ( v177 || (v146 = this->fields.appendPassiveSkill) != 0LL && *(_QWORD *)&v146->max_length )
  {
    v34 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v177);
    *idList = v34;
    sub_B0D840((BattleServantConfConponent_o *)idList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    v41 = (System_String_array *)sub_B0D8BC(string___TypeInfo, (unsigned int)v177);
    *titleList = v41;
    sub_B0D840((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
    v48 = (System_String_array *)sub_B0D8BC(string___TypeInfo, (unsigned int)v177);
    *explanationList = v48;
    sub_B0D840(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v55 = (System_Boolean_array *)sub_B0D8BC(bool___TypeInfo, (unsigned int)v177);
    *releaseStateList = v55;
    sub_B0D840(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    v62 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, (unsigned int)v177);
    v173->klass = (BattleServantConfConponent_c *)v62;
    sub_B0D840(v173, v62, v63, v64, v65, v66, v67, v68);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EntityListFromSvtId = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v177 >= 1 )
    {
      v69 = (DataMasterBase_WarMaster__WarEntity__int__o *)EntityListFromSvtId;
      v70 = 0;
      while ( 1 )
      {
        appendPassiveSkill = this->fields.appendPassiveSkill;
        if ( appendPassiveSkill )
        {
          max_length = appendPassiveSkill->max_length;
          if ( max_length >= 1 )
            break;
        }
LABEL_26:
        v76 = 0LL;
LABEL_27:
        if ( (unsigned int)v70 >= *(_DWORD *)(v33 + 24) )
          goto LABEL_85;
        v77 = v70;
        v78 = *(_QWORD *)(v33 + 8LL * v70 + 32);
        if ( !v78 )
          goto LABEL_84;
        v79 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v70 >= v79->max_length )
          goto LABEL_85;
        v79->m_Items[v70 + 1] = *(_DWORD *)(v78 + 28);
        v80 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v70 >= v80->max_length )
          goto LABEL_85;
        if ( !v69 )
          goto LABEL_84;
        EntityListFromSvtId = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         v69,
                                         v80->m_Items[v70 + 1],
                                         (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        klass = v32->klass;
        v82 = (SkillEntity_o *)EntityListFromSvtId;
        if ( v76 )
        {
          if ( !klass )
            goto LABEL_84;
          if ( (unsigned int)v70 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_85;
          *((_DWORD *)&klass->_1.byval_arg.data + v70) = v76->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_84;
          v83 = *titleList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectTitle(
                                           (SkillEntity_o *)EntityListFromSvtId,
                                           v76->fields.skillLv,
                                           0LL);
          if ( !v83 )
            goto LABEL_84;
          v90 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B0D964(EntityListFromSvtId, v83->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v70 >= v83->max_length )
            goto LABEL_85;
          v91 = &v83->obj.klass + v70;
          v91[4] = (Il2CppClass *)v90;
          sub_B0D840((BattleServantConfConponent_o *)(v91 + 4), v90, v84, v85, v86, v87, v88, v89);
          v92 = *explanationList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectExplanation(v82, v76->fields.skillLv, 0LL);
          if ( !v92 )
            goto LABEL_84;
          v32 = v173;
          v99 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B0D964(EntityListFromSvtId, v92->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v70 >= v92->max_length )
            goto LABEL_85;
          v100 = &v92->obj.klass + v70;
          v100[4] = (Il2CppClass *)v99;
          sub_B0D840((BattleServantConfConponent_o *)(v100 + 4), v99, v93, v94, v95, v96, v97, v98);
          v101 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v70 >= v101->max_length )
            goto LABEL_85;
          v102 = 1;
        }
        else
        {
          if ( !klass )
            goto LABEL_84;
          if ( (unsigned int)v70 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_85;
          *((_DWORD *)&klass->_1.byval_arg.data + v70) = -1;
          v103 = v32->klass;
          if ( !v32->klass )
            goto LABEL_84;
          if ( (unsigned int)v70 >= LODWORD(v103->_1.namespaze) )
            goto LABEL_85;
          if ( !EntityListFromSvtId )
            goto LABEL_84;
          v104 = *titleList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectTitle(
                                           (SkillEntity_o *)EntityListFromSvtId,
                                           *((_DWORD *)&v103->_1.byval_arg.data + v70),
                                           0LL);
          if ( !v104 )
            goto LABEL_84;
          v111 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B0D964(EntityListFromSvtId, v104->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
            {
LABEL_86:
              v172 = sub_B0D99C(EntityListFromSvtId);
              sub_B0D948(v172, 0LL);
            }
          }
          if ( v70 >= v104->max_length )
            goto LABEL_85;
          v112 = &v104->obj.klass + v70;
          v112[4] = (Il2CppClass *)v111;
          sub_B0D840((BattleServantConfConponent_o *)(v112 + 4), v111, v105, v106, v107, v108, v109, v110);
          v113 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          EntityListFromSvtId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3318/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v113 )
            goto LABEL_84;
          v120 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B0D964(EntityListFromSvtId, v113->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v70 >= v113->max_length )
            goto LABEL_85;
          v121 = &v113->obj.klass + v70;
          v121[4] = (Il2CppClass *)v120;
          sub_B0D840((BattleServantConfConponent_o *)(v121 + 4), v120, v114, v115, v116, v117, v118, v119);
          v122 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          if ( v70 >= v122->max_length )
            goto LABEL_85;
          EntityListFromSvtId = System_String__op_Inequality(
                                  v122->m_Items[v70],
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v123 = *explanationList;
            if ( !*explanationList )
              goto LABEL_84;
            if ( v70 >= v123->max_length )
              goto LABEL_85;
            v124 = (BattleServantConfConponent_o *)(&v123->obj.klass + v70);
            call_openComp = (System_String_o *)v124->fields.call_openComp;
            v124 = (BattleServantConfConponent_o *)((char *)v124 + 32);
            v126 = (System_Int32_array **)System_String__Concat_43849904(
                                            call_openComp,
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v124->klass = (BattleServantConfConponent_c *)v126;
            sub_B0D840(v124, v126, v127, v128, v129, v130, v131, v132);
          }
          v133 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          if ( v70 >= v133->max_length )
            goto LABEL_85;
          v134 = &v133->obj.klass + v70;
          v137 = (System_String_o *)v134[4];
          v136 = (BattleServantConfConponent_o *)(v134 + 4);
          v135 = v137;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v138 = LocalizationManager__Get((System_String_o *)StringLiteral_3306/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v139 = (System_Int32_array **)System_String__Concat_43849904(v135, v138, 0LL);
          v136->klass = (BattleServantConfConponent_c *)v139;
          sub_B0D840(v136, v139, v140, v141, v142, v143, v144, v145);
          v101 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v70 >= v101->max_length )
            goto LABEL_85;
          v102 = 0;
        }
        ++v70;
        v101->m_Items[v77 + 4] = v102;
        if ( v70 >= (int)v177 )
          return;
      }
      v73 = 0LL;
      v74 = v33 + 8LL * v70 + 32;
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v73 < max_length )
      {
        v76 = m_Items[v73];
        if ( !v76 )
          goto LABEL_84;
        if ( (unsigned int)v70 >= *(_DWORD *)(v33 + 24) )
          break;
        if ( !*(_QWORD *)v74 )
          goto LABEL_84;
        if ( v76->fields.skillId == *(_DWORD *)(*(_QWORD *)v74 + 28LL) )
          goto LABEL_27;
        if ( (int)++v73 >= max_length )
          goto LABEL_26;
      }
LABEL_85:
      v171 = sub_B0D9A8(EntityListFromSvtId);
      sub_B0D948(v171, 0LL);
    }
  }
  else
  {
    *idList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)idList, 0LL, v26, v27, v28, v29, v30, v31);
    *titleList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)titleList, 0LL, v147, v148, v149, v150, v151, v152);
    *explanationList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)explanationList, 0LL, v153, v154, v155, v156, v157, v158);
    *releaseStateList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)releaseStateList, 0LL, v159, v160, v161, v162, v163, v164);
    v173->klass = 0LL;
    sub_B0D840(v173, 0LL, v165, v166, v167, v168, v169, v170);
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
  System_Int32_array *v7; // x7
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Boolean_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v60; // x26
  __int64 v61; // x20
  __int64 v62; // x22
  struct AppendPassiveSkillInfo_array *v63; // x8
  __int64 v64; // x8
  System_Int32_array *v65; // x9
  System_Int32_array *v66; // x8
  struct AppendPassiveSkillInfo_array *v67; // x8
  __int64 v68; // x8
  int v69; // w9
  System_Int32_array *v70; // x8
  SkillEntity_o *v71; // x27
  struct AppendPassiveSkillInfo_array *v72; // x8
  __int64 v73; // x8
  System_String_array *v74; // x25
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x28
  struct AppendPassiveSkillInfo_array *v82; // x8
  int v83; // w28
  __int64 v84; // x8
  System_String_array *v85; // x25
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x27
  System_Boolean_array *v93; // x8
  char v94; // w9
  System_Int32_array *v95; // x8
  System_String_array *v96; // x25
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x27
  System_String_array *v104; // x28
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x27
  System_String_array *v112; // x8
  System_String_array *v113; // x8
  BattleServantConfConponent_o *v114; // x27
  System_Int32_array **v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_String_array *v122; // x28
  System_String_o *v123; // x27
  System_String_o *v124; // x0
  System_Int32_array **v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  char *v132; // x8
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  __int64 v157; // x0
  __int64 v158; // x0
  int v159; // [xsp+8h] [xbp-68h]

  if ( (byte_421696D & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, idList);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_B0D8A4(&int___TypeInfo, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&string___TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v18);
    sub_B0D8A4(&StringLiteral_3318/*"COND_TYPE_TITLE"*/, v19);
    sub_B0D8A4(&StringLiteral_3306/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_B0D8A4(&StringLiteral_1/*""*/, v21);
    byte_421696D = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (v23 = *(_QWORD *)&appendPassiveSkill->max_length) != 0 )
  {
    v24 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v23);
    *idList = v24;
    sub_B0D840((BattleServantConfConponent_o *)idList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    v31 = (System_String_array *)sub_B0D8BC(string___TypeInfo, (unsigned int)v23);
    *titleList = v31;
    sub_B0D840((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
    v38 = (System_String_array *)sub_B0D8BC(string___TypeInfo, (unsigned int)v23);
    *explanationList = v38;
    sub_B0D840(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v45 = (System_Boolean_array *)sub_B0D8BC(bool___TypeInfo, (unsigned int)v23);
    *releaseStateList = v45;
    sub_B0D840(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v52 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v23);
    *lvList = v52;
    sub_B0D840((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v23 >= 1 )
    {
      v60 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v61 = 0LL;
      v62 = 32LL;
      v159 = v23;
      while ( 1 )
      {
        v63 = this->fields.appendPassiveSkill;
        if ( !v63 )
          break;
        if ( (unsigned int)v61 >= v63->max_length )
          goto LABEL_76;
        v64 = *(__int64 *)((char *)&v63->obj.klass + v62);
        if ( !v64 )
          break;
        v65 = *idList;
        if ( !*idList )
          break;
        if ( (unsigned int)v61 >= v65->max_length )
          goto LABEL_76;
        v65->m_Items[v61 + 1] = *(_DWORD *)(v64 + 16);
        v66 = *idList;
        if ( !*idList )
          break;
        if ( (unsigned int)v61 >= v66->max_length )
          goto LABEL_76;
        if ( !v60 )
          break;
        Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v60,
                                                    v66->m_Items[v61 + 1],
                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v67 = this->fields.appendPassiveSkill;
        if ( !v67 )
          break;
        if ( (unsigned int)v61 >= v67->max_length )
          goto LABEL_76;
        v68 = *(__int64 *)((char *)&v67->obj.klass + v62);
        if ( !v68 )
          break;
        v69 = *(_DWORD *)(v68 + 20);
        v70 = *lvList;
        v71 = (SkillEntity_o *)Master_WarQuestSelectionMaster;
        if ( v69 < 1 )
        {
          if ( !v70 )
            break;
          if ( (unsigned int)v61 >= v70->max_length )
            goto LABEL_76;
          v70->m_Items[v61 + 1] = -1;
          v95 = *lvList;
          if ( !*lvList )
            break;
          if ( (unsigned int)v61 >= v95->max_length )
            goto LABEL_76;
          if ( !Master_WarQuestSelectionMaster )
            break;
          v96 = *titleList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                      (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                      v95->m_Items[v61 + 1],
                                                      0LL);
          if ( !v96 )
            break;
          v103 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B0D964(
                                               Master_WarQuestSelectionMaster,
                                               v96->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
            {
LABEL_77:
              v158 = sub_B0D99C(Master_WarQuestSelectionMaster);
              sub_B0D948(v158, 0LL);
            }
          }
          if ( (unsigned int)v61 >= v96->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v96->obj.klass + v62) = (Il2CppClass *)v103;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v96 + v62), v103, v97, v98, v99, v100, v101, v102);
          v104 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3318/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v104 )
            break;
          v111 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B0D964(
                                               Master_WarQuestSelectionMaster,
                                               v104->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v61 >= v104->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v104->obj.klass + v62) = (Il2CppClass *)v111;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v104 + v62), v111, v105, v106, v107, v108, v109, v110);
          v112 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v61 >= v112->max_length )
            goto LABEL_76;
          Master_WarQuestSelectionMaster = System_String__op_Inequality(
                                             *(System_String_o **)((char *)&v112->obj.klass + v62),
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL);
          if ( (Master_WarQuestSelectionMaster & 1) != 0 )
          {
            v113 = *explanationList;
            if ( !*explanationList )
              break;
            if ( (unsigned int)v61 >= v113->max_length )
              goto LABEL_76;
            v114 = (BattleServantConfConponent_o *)((char *)v113 + v62);
            v115 = (System_Int32_array **)System_String__Concat_43849904(
                                            *(System_String_o **)((char *)&v113->obj.klass + v62),
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v114->klass = (BattleServantConfConponent_c *)v115;
            sub_B0D840(v114, v115, v116, v117, v118, v119, v120, v121);
          }
          v122 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v61 >= v122->max_length )
          {
LABEL_76:
            v157 = sub_B0D9A8(Master_WarQuestSelectionMaster);
            sub_B0D948(v157, 0LL);
          }
          v123 = *(System_String_o **)((char *)&v122->obj.klass + v62);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v124 = LocalizationManager__Get((System_String_o *)StringLiteral_3306/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v125 = (System_Int32_array **)System_String__Concat_43849904(v123, v124, 0LL);
          *(Il2CppClass **)((char *)&v122->obj.klass + v62) = (Il2CppClass *)v125;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v122 + v62), v125, v126, v127, v128, v129, v130, v131);
          v93 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          v83 = v159;
          if ( (unsigned int)v61 >= v93->max_length )
            goto LABEL_76;
          v94 = 0;
        }
        else
        {
          if ( !v70 )
            break;
          if ( (unsigned int)v61 >= v70->max_length )
            goto LABEL_76;
          v70->m_Items[v61 + 1] = v69;
          v72 = this->fields.appendPassiveSkill;
          if ( !v72 )
            break;
          if ( (unsigned int)v61 >= v72->max_length )
            goto LABEL_76;
          v73 = *(__int64 *)((char *)&v72->obj.klass + v62);
          if ( !v73 )
            break;
          if ( !Master_WarQuestSelectionMaster )
            break;
          v74 = *titleList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                      (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                      *(_DWORD *)(v73 + 20),
                                                      0LL);
          if ( !v74 )
            break;
          v81 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B0D964(
                                               Master_WarQuestSelectionMaster,
                                               v74->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v61 >= v74->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v74->obj.klass + v62) = (Il2CppClass *)v81;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v74 + v62), v81, v75, v76, v77, v78, v79, v80);
          v82 = this->fields.appendPassiveSkill;
          if ( !v82 )
            break;
          v83 = v159;
          if ( (unsigned int)v61 >= v82->max_length )
            goto LABEL_76;
          v84 = *(__int64 *)((char *)&v82->obj.klass + v62);
          if ( !v84 )
            break;
          v85 = *explanationList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectExplanation(v71, *(_DWORD *)(v84 + 20), 0LL);
          if ( !v85 )
            break;
          v92 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B0D964(
                                               Master_WarQuestSelectionMaster,
                                               v85->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v61 >= v85->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v85->obj.klass + v62) = (Il2CppClass *)v92;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v85 + v62), v92, v86, v87, v88, v89, v90, v91);
          v93 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( (unsigned int)v61 >= v93->max_length )
            goto LABEL_76;
          v94 = 1;
        }
        v132 = (char *)v93 + v61++;
        v62 += 8LL;
        v132[32] = v94;
        if ( (int)v61 >= v83 )
          return;
      }
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
  }
  else
  {
    *idList = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)idList,
      0LL,
      titleList,
      explanationList,
      releaseStateList,
      lvList,
      (System_Int32_array *)method,
      v7);
    *titleList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)titleList, 0LL, v133, v134, v135, v136, v137, v138);
    *explanationList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)explanationList, 0LL, v139, v140, v141, v142, v143, v144);
    *releaseStateList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)releaseStateList, 0LL, v145, v146, v147, v148, v149, v150);
    *lvList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)lvList, 0LL, v151, v152, v153, v154, v155, v156);
  }
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo_28164780(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x20
  SkillInfo_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  __int64 v28; // x20
  __int64 v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  unsigned __int64 v36; // x25
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  SkillInfo_array *v45; // x26
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x8
  __int64 v53; // x0
  __int64 v54; // x0
  System_Int32_array *lvList; // [xsp+8h] [xbp-68h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_421696E & 1) == 0 )
  {
    sub_B0D8A4(&SkillInfo___TypeInfo, skillInfoList);
    sub_B0D8A4(&SkillInfo_TypeInfo, v8);
    byte_421696E = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  releaseStateList = 0LL;
  explanationList = 0LL;
  lvList = 0LL;
  if ( isNpc )
    ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      v4);
  else
    ServantLeaderInfo__GetAppendPassiveSkillInfo(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      v4);
  if ( idList && (v15 = *(_QWORD *)&idList->max_length) != 0 )
  {
    v16 = (SkillInfo_array *)sub_B0D8BC(SkillInfo___TypeInfo, (unsigned int)v15);
    *skillInfoList = v16;
    sub_B0D840((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
    if ( (int)v15 >= 1 )
    {
      v25 = (int)v15;
      v26 = 32LL;
      v27 = 8LL;
      do
      {
        v28 = sub_B0D974(SkillInfo_TypeInfo, v23, v24);
        SkillInfo___ctor((SkillInfo_o *)v28, 0LL);
        if ( !v28 )
          goto LABEL_26;
        *(_DWORD *)(v28 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v36 = v27 - 8;
        if ( v27 - 8 >= (unsigned __int64)idList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v28 + 16) = *((_DWORD *)&idList->obj.klass + v27);
        if ( !lvList )
          goto LABEL_26;
        if ( v36 >= lvList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v28 + 20) = *((_DWORD *)&lvList->obj.klass + v27);
        if ( !titleList )
          goto LABEL_26;
        if ( v36 >= titleList->max_length )
          goto LABEL_27;
        v37 = *(System_Int32_array ***)((char *)&titleList->obj.klass + v26);
        *(_QWORD *)(v28 + 32) = v37;
        sub_B0D840((BattleServantConfConponent_o *)(v28 + 32), v37, v30, v31, v32, v33, v34, v35);
        if ( !explanationList )
          goto LABEL_26;
        if ( v36 >= explanationList->max_length )
          goto LABEL_27;
        v44 = *(System_Int32_array ***)((char *)&explanationList->obj.klass + v26);
        *(_QWORD *)(v28 + 40) = v44;
        sub_B0D840((BattleServantConfConponent_o *)(v28 + 40), v44, v38, v39, v40, v41, v42, v43);
        v45 = *skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_B0D97C(v29);
        v29 = sub_B0D964(v28, v45->obj.klass->_1.element_class);
        if ( !v29 )
        {
          v54 = sub_B0D99C(0LL);
          sub_B0D948(v54, 0LL);
        }
        if ( v36 >= v45->max_length )
        {
LABEL_27:
          v53 = sub_B0D9A8(v29);
          sub_B0D948(v53, 0LL);
        }
        *(Il2CppClass **)((char *)&v45->obj.klass + v26) = (Il2CppClass *)v28;
        sub_B0D840(
          (BattleServantConfConponent_o *)((char *)v45 + v26),
          (System_Int32_array **)v28,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        v52 = v27 - 7;
        ++v27;
        v26 += 8LL;
      }
      while ( v52 < v25 );
    }
  }
  else
  {
    *skillInfoList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)skillInfoList, 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_421695D & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v4);
    sub_B0D8A4(&OptionManager_TypeInfo, v5);
    sub_B0D8A4(&ServantLeaderInfo_TypeInfo, v6);
    byte_421695D = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( LimitCountWithRandom > 10 || !LimitCountWithRandom || NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
    return LimitCountWithRandom;
  limitCount = this->fields.limitCount;
  if ( !limitCount )
    return 0;
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( limitCount == v9->static_fields->ServantLimitMax )
  {
    v10 = ServantLeaderInfo_TypeInfo;
    if ( (BYTE3(ServantLeaderInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo);
      v10 = ServantLeaderInfo_TypeInfo;
    }
    if ( LimitCountWithRandom == v10->static_fields->LIMIT_COUNT_THIRD_STAGE )
    {
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetFriendImageLimitCount(0LL) )
        return this->fields.limitCount;
    }
  }
  v11 = this->fields.limitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
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
  const MethodInfo *v9; // x4
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4216969 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, *(_QWORD *)&limit);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4216969 = 1;
  }
  value = 0;
  limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
          limit,
          &value,
          (const MethodInfo_2E6B464 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    limitChangeDic = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( limitChangeDic )
    {
      limitChangeDic = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          limitChangeDic,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( limitChangeDic )
      {
        value = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                  (ServantLimitSpoilerProtectionMaster_o *)limitChangeDic,
                  this->fields.svtId,
                  limit,
                  v9);
        limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
        if ( limitChangeDic )
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
            limit,
            value,
            (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_B0D97C(limitChangeDic);
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
  int32_t ChoiceLimitCount_21501716; // w0
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v8; // x0

  if ( (byte_4216939 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v5);
    byte_4216939 = 1;
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
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  ChoiceLimitCount_21501716 = RandomLimitCountManager__GetChoiceLimitCount_21501716(this, 0LL);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_21501716;
  if ( ((1 << kind) & 0x16) == 0 )
    return imageLimitCount;
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
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


int32_t __fastcall ServantLeaderInfo__GetTimesToRestart(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserEventDataLostEntity_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  UserEventDataLostEntity_o *v13; // x20
  __int64 v14; // x19
  __int64 v15; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4216970 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4216970 = 1;
  }
  entity = 0LL;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_24;
    if ( UserEventDataLostMaster__TryGetEntity(
           (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
           &entity,
           UserId,
           questRestrictionInfo->fields.dataLostBattleId,
           0LL) )
    {
      v10 = entity;
      v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v18.fields.currentCryptoKey = v12;
      *(_QWORD *)&v18.fields.fakeValue = v11;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
      if ( !v10 )
        goto LABEL_24;
      if ( UserEventDataLostEntity__IsRestart(v10, UserId, 0LL) )
      {
        v13 = entity;
        v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v19.fields.currentCryptoKey = v15;
        *(_QWORD *)&v19.fields.fakeValue = v14;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL);
        if ( v13 )
          return UserEventDataLostEntity__GetTimesToRestart(v13, UserId, 0LL);
LABEL_24:
        sub_B0D97C(UserId);
      }
    }
  }
  return 0;
}


bool __fastcall ServantLeaderInfo__IsDataLost(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserEventDataLostEntity_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  UserEventDataLostEntity_o *v13; // x20
  __int64 v14; // x19
  __int64 v15; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_421696F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_421696F = 1;
  }
  entity = 0LL;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( !UserEventDataLostMaster__TryGetEntity(
          (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          UserId,
          questRestrictionInfo->fields.dataLostBattleId,
          0LL) )
    return 0;
  v10 = entity;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
  if ( !v10 )
    goto LABEL_25;
  if ( UserEventDataLostEntity__IsRestart(v10, UserId, 0LL) )
    return 0;
  v13 = entity;
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL);
  if ( !v13 )
LABEL_25:
    sub_B0D97C(UserId);
  return UserEventDataLostEntity__IsDataLost(v13, UserId, 0LL);
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

  if ( (byte_4216971 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4216971 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL);
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

  if ( (byte_4216952 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4216952 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsUniqueIndividuality_30611436(questRestrictionInfo, v9, limitCount, DispLimitCount, 0LL);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction_28152780(
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

  if ( (byte_4216953 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4216953 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v17, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return QuestRestrictionInfo__IsUniqueIndividuality_30612084(
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_String_o **p_overwriteServantName; // x21
  BattleServantConfConponent_o *p_overwriteServantDetailName; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v25; // x23
  __int64 v26; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x22
  ServantEntity_o *v28; // x22
  const MethodInfo *v29; // x1
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w23
  int32_t v32; // w24
  int32_t LimitCountByDispLimit; // w0
  System_Int32_array **Name; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v42; // x24
  __int64 v43; // x25
  ServantLimitAddMaster_o *v44; // x23
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t CardImageLimitCount; // w19
  int32_t LimitCountByImageLimitCostumeIn; // w0
  System_Int32_array **v55; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_421696A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_421696A = 1;
  }
  this->fields.overwriteServantName = 0LL;
  p_overwriteServantName = &this->fields.overwriteServantName;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.overwriteServantName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.overwriteServantDetailName = 0LL;
  p_overwriteServantDetailName = (BattleServantConfConponent_o *)&this->fields.overwriteServantDetailName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.overwriteServantDetailName,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v56.fields.currentCryptoKey = v26;
  *(_QWORD *)&v56.fields.fakeValue = v25;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v56, 0LL);
  if ( !v27 )
    goto LABEL_28;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v27,
                                (int32_t)Instance,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_28;
  v28 = (ServantEntity_o *)Instance;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v29);
  limitCount = this->fields.limitCount;
  v32 = DispLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v32, limitCount, 0LL);
  Name = (System_Int32_array **)ServantEntity__getName(v28, LimitCountByDispLimit, -1, 0LL);
  *p_overwriteServantName = (struct System_String_o *)Name;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.overwriteServantName, Name, v35, v36, v37, v38, v39, v40);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v43 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v44 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = v43;
  *(_QWORD *)&v57.fields.fakeValue = v42;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v57, 0LL);
  if ( !v44 )
LABEL_28:
    sub_B0D97C(Instance);
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName(v44, (int32_t)Instance, v45) )
  {
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v46);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
    v55 = (System_Int32_array **)ServantEntity__getName(v28, -1, LimitCountByImageLimitCostumeIn, 0LL);
    p_overwriteServantDetailName->klass = (BattleServantConfConponent_c *)v55;
  }
  else
  {
    v55 = (System_Int32_array **)*p_overwriteServantName;
    p_overwriteServantDetailName->klass = (BattleServantConfConponent_c *)*p_overwriteServantName;
  }
  sub_B0D840(p_overwriteServantDetailName, v55, v47, v48, v49, v50, v51, v52);
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  DataManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v15; // x23
  unsigned __int64 v16; // x19
  signed __int64 v17; // x22
  SkillLvEntity_o *v18; // x24
  __int64 v19; // x25
  __int64 v20; // x26
  int32_t v21; // w25
  int32_t limitCount; // w26
  int32_t EventId; // w0
  bool v24; // w27
  System_Int32_array *SkillIdList; // x23
  const MethodInfo *v26; // x1
  System_Int32_array *SkillLevelList; // x0
  System_Int32_array *v28; // x24
  unsigned __int64 i; // x22
  int32_t v30; // w1
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v32; // x25
  __int64 v33; // x26
  __int64 v34; // x27
  int32_t v35; // w26
  int32_t v36; // w28
  int32_t v37; // w0
  __int64 v39; // x0
  int32_t wearesDispLimitCount; // [xsp+14h] [xbp-6Ch]
  EventUpValSetupInfo_o *v41; // [xsp+18h] [xbp-68h]
  int32_t *v42; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_421694B & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, setupInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_421694B = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v8;
  *(_QWORD *)&v44.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v44, 0LL) >= 1 )
  {
    v41 = setupInfo;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_42:
      sub_B0D97C(Instance);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    wearesDispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v11);
    Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v12);
    if ( Instance )
    {
      datalist = Instance->fields.datalist;
      v15 = Instance;
      if ( (int)datalist >= 1 )
      {
        v16 = 0LL;
        v17 = (int)datalist;
        while ( 1 )
        {
          v13 = (const MethodInfo *)*((unsigned int *)&v15->fields.lookup + v16);
          if ( (int)v13 >= 1 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_42;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          (int32_t)v13,
                                          1,
                                          0LL);
            if ( Instance )
            {
              v18 = (SkillLvEntity_o *)Instance;
              v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v45.fields.currentCryptoKey = v20;
              *(_QWORD *)&v45.fields.fakeValue = v19;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v45, 0LL);
              if ( !v41 )
                goto LABEL_42;
              v21 = (int)Instance;
              limitCount = this->fields.limitCount;
              EventId = EventUpValSetupInfo__get_EventId(v41, 0LL);
              v24 = 1;
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal(
                                            v18,
                                            v21,
                                            limitCount,
                                            wearesDispLimitCount,
                                            v41,
                                            EventId,
                                            1,
                                            0,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v24;
            }
          }
          if ( (__int64)++v16 >= v17 )
            break;
          if ( v16 >= LODWORD(v15->fields.datalist) )
          {
LABEL_43:
            v39 = sub_B0D9A8(Instance);
            sub_B0D948(v39, 0LL);
          }
        }
      }
    }
    SkillIdList = ServantLeaderInfo__getSkillIdList(this, v13);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v26);
    v42 = &SkillLevelList->m_Items[1];
    v28 = SkillLevelList;
    for ( i = 0LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= SLODWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
        break;
      if ( !SkillIdList )
        goto LABEL_42;
      if ( i >= SkillIdList->max_length )
        goto LABEL_43;
      v30 = SkillIdList->m_Items[i + 1];
      if ( v30 >= 1 )
      {
        if ( !v28 )
          goto LABEL_42;
        if ( i >= v28->max_length )
          goto LABEL_43;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_42;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v30, v42[i], 0LL);
        if ( Entity )
        {
          v32 = Entity;
          v34 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v33 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v46.fields.currentCryptoKey = v34;
          *(_QWORD *)&v46.fields.fakeValue = v33;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v46, 0LL);
          if ( !v41 )
            goto LABEL_42;
          v35 = (int)Instance;
          v36 = this->fields.limitCount;
          v37 = EventUpValSetupInfo__get_EventId(v41, 0LL);
          v24 = 1;
          if ( SkillLvEntity__getEventUpVal(v32, v35, v36, wearesDispLimitCount, v41, v37, 1, 0, 0LL) )
            return v24;
        }
      }
    }
  }
  return 0;
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal_28150952(
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
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v16; // x22
  bool v17; // w23
  unsigned __int64 v18; // x24
  signed __int64 v19; // x25
  System_Int32_array *SkillIdList; // x22
  const MethodInfo *v21; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  int32_t v24; // w1
  SkillLvEntity_o *Entity; // x0
  __int64 v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_421694E & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421694E = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v9;
  *(_QWORD *)&v27.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v27, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_39;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_39:
    sub_B0D97C(Instance);
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v13);
  if ( Instance && (datalist = Instance->fields.datalist, v16 = Instance, (int)datalist >= 1) )
  {
    v17 = 0;
    v18 = 0LL;
    v19 = (int)datalist;
    while ( 1 )
    {
      v14 = (const MethodInfo *)*((unsigned int *)&v16->fields.lookup + v18);
      if ( (int)v14 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_39;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)v14, 1, 0LL);
        if ( Instance )
        {
          Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_26144328(
                                        (SkillLvEntity_o *)Instance,
                                        eventUpVallInfo,
                                        1,
                                        0,
                                        1,
                                        0,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v17 = 1;
        }
      }
      if ( (__int64)++v18 >= v19 )
        break;
      if ( v18 >= LODWORD(v16->fields.datalist) )
      {
LABEL_40:
        v26 = sub_B0D9A8(Instance);
        sub_B0D948(v26, 0LL);
      }
    }
  }
  else
  {
    v17 = 0;
  }
  SkillIdList = ServantLeaderInfo__getSkillIdList(this, v14);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v21);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= SLODWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
      break;
    if ( !SkillIdList )
      goto LABEL_39;
    if ( i >= SkillIdList->max_length )
      goto LABEL_40;
    v24 = SkillIdList->m_Items[i + 1];
    if ( v24 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_39;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_40;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_39;
      Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v24, SkillLevelList->m_Items[i + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_26144328(Entity, eventUpVallInfo, 1, 0, 1, 0, 0LL) )
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
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v10; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v12; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x22
  int32_t v15; // w1
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4216947 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4216947 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v7;
  *(_QWORD *)&v19.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B0D97C(Instance);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__getSkillIdList(this, v10);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v12);
    for ( i = 0LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= SLODWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
        break;
      if ( !SkillIdList )
        goto LABEL_24;
      if ( i >= SkillIdList->max_length )
        goto LABEL_25;
      v15 = SkillIdList->m_Items[i + 1];
      if ( v15 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v18 = sub_B0D9A8(Instance);
          sub_B0D948(v18, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v15, SkillLevelList->m_Items[i + 1], 0LL);
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
  int32_t v9; // w20
  BalanceConfig_c *v10; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int LimitCountWithRandom; // w20
  const MethodInfo *v13; // x2
  bool v14; // vf
  bool v15; // w1
  ServantLeaderInfo_o *v16; // x0
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w19
  int32_t v21; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4216960 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&OptionManager_TypeInfo, v5);
    byte_4216960 = 1;
  }
  if ( ConstantMaster__IsOtherImage(0LL) )
  {
    v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v22.fields.currentCryptoKey = v8;
    *(_QWORD *)&v22.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v22, 0LL);
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    static_fields = v10->static_fields;
    if ( v9 < static_fields->ExclusiveNpcServantIdStart )
    {
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
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
    v14 = __OFSUB__(LimitCountWithRandom--, 1);
    if ( LimitCountWithRandom < 0 == v14 )
      return LimitCountWithRandom;
    v15 = 1;
    v16 = this;
    return ServantLeaderInfo__getMaxCardImageLimitCount(v16, v15, v13);
  }
  if ( LimitCountWithRandom >= 11 )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__GetFriendCostume(0LL) )
      return LimitCountWithRandom;
    goto LABEL_32;
  }
  if ( LimitCountWithRandom < 1 )
  {
LABEL_32:
    v16 = this;
    v15 = 0;
    return ServantLeaderInfo__getMaxCardImageLimitCount(v16, v15, v13);
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    --LimitCountWithRandom;
    return LimitCountWithRandom;
  }
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v19;
  *(_QWORD *)&v23.fields.fakeValue = v18;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v21, v20, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_421695E & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_421695E = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 2, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
  }
  else if ( LimitCountWithRandom >= 11 )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x20
  __int64 v16; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x19
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_4216967 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantLeaderInfo_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4216967 = 1;
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
    {
      v18 = sub_B0D9A8(this);
      sub_B0D948(v18, 0LL);
    }
    v12 = m_Items[v10];
    if ( !v12 )
      goto LABEL_18;
    if ( v12->fields.idx == index )
      break;
    if ( (int)++v10 >= max_length )
      return 0LL;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v16 = *(_QWORD *)&v12->fields.commandCodeId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v12->fields.commandCodeId.fields.fakeValue;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  *(_QWORD *)&v19.fields.fakeValue = v15;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL);
  if ( !v17 )
LABEL_18:
    sub_B0D97C(this);
  return (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v17,
                                  (int32_t)this,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
}


System_Int32_array *__fastcall ServantLeaderInfo__getCommandCodeIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  BalanceConfig_c *v6; // x0
  struct CommandCodeStatus_array *commandCode; // x23
  int max_length; // w8
  System_Int32_array *v9; // x19
  int i; // w24
  CommandCodeStatus_o *v11; // x20
  int32_t idx; // w21
  __int64 v13; // x26
  __int64 v14; // x20
  __int64 v15; // x21
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4216966 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4216966 = 1;
  }
  if ( !this->fields.commandCode )
    return 0LL;
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (BalanceConfig_c *)sub_B0D8BC(int___TypeInfo, (unsigned int)v5->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_26:
    sub_B0D97C(v6);
  max_length = commandCode->max_length;
  v9 = (System_Int32_array *)v6;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
LABEL_27:
        v17 = sub_B0D9A8(v6);
        sub_B0D948(v17, 0LL);
      }
      v11 = commandCode->m_Items[i];
      if ( !v11 )
        goto LABEL_26;
      v6 = BalanceConfig_TypeInfo;
      idx = v11->fields.idx;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v6 = BalanceConfig_TypeInfo;
      }
      if ( idx < v6->static_fields->SvtCommandCardMax )
      {
        v13 = v11->fields.idx;
        v15 = *(_QWORD *)&v11->fields.commandCodeId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v11->fields.commandCodeId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v18.fields.currentCryptoKey = v15;
        *(_QWORD *)&v18.fields.fakeValue = v14;
        v6 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
        if ( !v9 )
          goto LABEL_26;
        if ( (unsigned int)v13 >= v9->max_length )
          goto LABEL_27;
        v9->m_Items[v13 + 1] = (int)v6;
      }
      max_length = commandCode->max_length;
    }
  }
  return v9;
}


int32_t __fastcall ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_421695A & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_421695A = 1;
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
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__GetFriendCostume(0LL) )
      return LimitCountWithRandom;
  }
  else if ( LimitCountWithRandom >= 1 )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
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
  int32_t LimitCountWithRandom; // w21
  int32_t limitCount; // w22
  int32_t v7; // w0
  int32_t v8; // w1
  int32_t v9; // w19

  if ( (byte_421695C & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, method);
    sub_B0D8A4(&OptionManager_TypeInfo, v4);
    byte_421695C = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom < 11 )
    {
      limitCount = this->fields.limitCount;
      if ( LimitCountWithRandom >= 1 )
      {
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
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
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  limitCount = LimitCountWithRandom;
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    v9 = this->fields.limitCount;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
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

  if ( (byte_421694A & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_421694A = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL) < 1 )
    return 0;
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v9;
  *(_QWORD *)&v17.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v17, 0LL);
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
  EquipTargetInfo_o *v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4216958 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp);
    byte_4216958 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_10;
  v11 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v14, 0LL) >= 1 )
  {
    v12 = this->fields.equipTarget1;
    if ( !v12 )
      sub_B0D97C(0LL);
    return EquipTargetInfo__getExpInfo(v12, exp, lateExp, barExp, 0LL);
  }
  else
  {
LABEL_10:
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
  EquipTargetInfo_o *v10; // x0
  BalanceConfig_c *v11; // x0
  SkillInfo_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4216943 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&SkillInfo___TypeInfo, v6);
    byte_4216943 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_10;
  v9 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v9;
  *(_QWORD *)&v19.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL) >= 1 )
  {
    v10 = this->fields.equipTarget1;
    if ( !v10 )
      sub_B0D97C(0LL);
    EquipTargetInfo__getSkillInfo(v10, skillInfoList, 0LL);
  }
  else
  {
LABEL_10:
    v11 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    v12 = (SkillInfo_array *)sub_B0D8BC(SkillInfo___TypeInfo, (unsigned int)v11->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v12;
    sub_B0D840((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4216948 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4216948 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v17, 0LL) < 1 )
    return 0;
  if ( ServantLeaderInfo__getBaseEventUpVal(this, setupInfo, v7) )
    return 1;
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v13, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEventUpVal_28150548(
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
  __int64 v17; // x1
  __int64 v18; // x2
  EventUpValInfo_o *v19; // x26
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  bool BaseEventUpVal_28150952; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v29; // w21
  EventUpValInfo_o *v30; // x24
  __int64 v31; // x22
  __int64 v32; // x23
  EquipTargetInfo_o *v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_421694C & 1) == 0 )
  {
    sub_B0D8A4(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_421694C = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v9;
  *(_QWORD *)&v35.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v35, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v10;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v13);
  npcFlag = this->fields.npcFlag;
  v16 = DispLimitCount;
  v19 = (EventUpValInfo_o *)sub_B0D974(EventUpValInfo_TypeInfo, v17, v18);
  EventUpValInfo___ctor(v19, setupInfo, v12, limitCount, v16, npcFlag, 0LL);
  *eventUpVallInfo = v19;
  sub_B0D840((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(this->fields.svtId, 0LL) < 1 )
    return 0;
  BaseEventUpVal_28150952 = ServantLeaderInfo__getBaseEventUpVal_28150952(this, eventUpVallInfo, v26);
  equipTarget1 = this->fields.equipTarget1;
  v29 = BaseEventUpVal_28150952;
  if ( !equipTarget1 )
    return v29;
  v30 = *eventUpVallInfo;
  v32 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v32;
  *(_QWORD *)&v36.fields.fakeValue = v31;
  v33 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v36, 0LL);
  if ( !v30 || (v30->fields.equipSvtId = (int)v33, (v33 = this->fields.equipTarget1) == 0LL) )
    sub_B0D97C(v33);
  return (v29 | EquipTargetInfo__getEventUpVal_28815196(v33, eventUpVallInfo, 1, 0LL)) & 1;
}


bool __fastcall ServantLeaderInfo__getEventUpVal_28151592(
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
  __int64 v21; // x1
  __int64 v22; // x2
  EventUpValInfo_o *v23; // x28
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v32; // x25
  __int64 v33; // x23
  __int64 v34; // x24
  EquipTargetInfo_o *v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_421694D & 1) == 0 )
  {
    sub_B0D8A4(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_421694D = 1;
  }
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v13;
  *(_QWORD *)&v37.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v37, 0LL);
  limitCount = this->fields.limitCount;
  v16 = v14;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v17);
  npcFlag = this->fields.npcFlag;
  v20 = DispLimitCount;
  v23 = (EventUpValInfo_o *)sub_B0D974(EventUpValInfo_TypeInfo, v21, v22);
  EventUpValInfo___ctor(v23, setupInfo, v16, limitCount, v20, npcFlag, 0LL);
  *eventUpVallInfo = v23;
  sub_B0D840((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(this->fields.svtId, 0LL) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_28150952(this, eventUpVallInfo, v30) )
      *isServantEventUpVal = 1;
    equipTarget1 = this->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v32 = *eventUpVallInfo;
      v34 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v38.fields.currentCryptoKey = v34;
      *(_QWORD *)&v38.fields.fakeValue = v33;
      v35 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v38, 0LL);
      if ( !v32 || (v32->fields.equipSvtId = (int)v35, (v35 = this->fields.equipTarget1) == 0LL) )
        sub_B0D97C(v35);
      if ( EquipTargetInfo__getEventUpVal_28815196(v35, eventUpVallInfo, 1, 0LL) )
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x24
  __int64 v16; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x23
  WarEntity_o *Entity; // x23
  const MethodInfo *v19; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v21; // x24
  int datalist; // w25
  float v23; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4216957 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4216957 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v16;
  *(_QWORD *)&v25.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v25, 0LL);
  if ( !v17 )
    goto LABEL_22;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v19) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v21 = (ServantExpMaster_o *)Instance;
    if ( lv >= 2 )
    {
      if ( !Entity )
        goto LABEL_22;
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(
                                    (ServantExpMaster_o *)Instance,
                                    HIDWORD(Entity[1].klass),
                                    lv - 1,
                                    0LL);
      if ( !Instance )
        goto LABEL_22;
      datalist = (int)Instance->fields.datalist;
    }
    else
    {
      if ( !Entity || !Instance )
        goto LABEL_22;
      datalist = 0;
    }
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v21, HIDWORD(Entity[1].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - datalist;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.datalist) - this->fields.exp;
      v23 = (float)*exp / (float)(LODWORD(Instance->fields.datalist) - datalist);
      goto LABEL_21;
    }
LABEL_22:
    sub_B0D97C(Instance);
  }
  v23 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_21:
  *barExp = v23;
  return 1;
}


int32_t __fastcall ServantLeaderInfo__getFrameType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantExceedMaster_o *v10; // x20
  int32_t FrameType_29619684; // w20
  ServantLvDetailMaster_o *v12; // x21
  const MethodInfo *v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4216959 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4216959 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantExceedMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v15, 0LL);
  if ( !v10
    || (FrameType_29619684 = ServantExceedMaster__GetFrameType_29619684(
                               v10,
                               (int32_t)Instance,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v12 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (WebViewManager_o *)ServantLeaderInfo__getRarity(this, v13),
        !v12) )
  {
LABEL_11:
    sub_B0D97C(Instance);
  }
  return ServantLvDetailMaster__GetFrameType(v12, (int32_t)Instance, this->fields.lv, FrameType_29619684, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getFriendPointUpType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  const MethodInfo *v5; // x1
  int32_t BaseFriendPointUpVal; // w0
  EquipTargetInfo_o *equipTarget1; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4216946 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4216946 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v9, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v5);
  if ( !this->fields.equipTarget1
    || EquipTargetInfo__getFriendPointUpVal(this->fields.equipTarget1, 0LL) <= BaseFriendPointUpVal )
  {
    return 0;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    sub_B0D97C(0LL);
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

  if ( (byte_4216945 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4216945 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v10, 0LL) < 1 )
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

  if ( (byte_4216962 & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&OptionManager_TypeInfo, v5);
    byte_4216962 = 1;
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
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__GetFriendCostume(0LL) )
      return LimitCountWithRandom;
    goto LABEL_20;
  }
  if ( LimitCountWithRandom < 1 )
  {
LABEL_20:
    v10 = this;
    v9 = 0;
    return ServantLeaderInfo__getMaxIconLimitCount(v10, v9, v7);
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    --LimitCountWithRandom;
    return LimitCountWithRandom;
  }
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v13;
  *(_QWORD *)&v16.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v15, v14, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getLevelMax(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x21
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  ServantLimitMaster_o *v12; // x20
  const MethodInfo *v13; // x3
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v15; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_421693B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421693B = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL);
  if ( !v12
    || (Entity = ServantLimitMaster__GetEntity(v12, (int32_t)Instance, this->fields.limitCount, v13),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_19:
    sub_B0D97C(Instance);
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

  if ( (byte_4216961 & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, isNpc);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4216961 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v12, 0LL);
  limitCount = this->fields.limitCount;
  v10 = v8;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
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

  if ( (byte_421695F & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_421695F = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v10, 0LL);
  limitCount = this->fields.limitCount;
  v8 = v6;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
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

  if ( (byte_421695B & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_421695B = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v10, 0LL);
  limitCount = this->fields.limitCount;
  v8 = v6;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
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

  if ( (byte_4216963 & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, isNpc);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4216963 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v12, 0LL);
  limitCount = this->fields.limitCount;
  v10 = v8;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
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

  if ( (byte_4216965 & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4216965 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v10, 0LL);
  limitCount = this->fields.limitCount;
  v8 = v6;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v8, limitCount, 0LL);
}


System_Int32_array *__fastcall ServantLeaderInfo__getPassiveSkillIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleServantConfConponent_o *p_classPassive; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  WarEntity_o *Entity; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **longName; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4216940 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4216940 = 1;
  }
  p_classPassive = (BattleServantConfConponent_o *)&this->fields.classPassive;
  if ( !this->fields.classPassive )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v21.fields.currentCryptoKey = v10;
    *(_QWORD *)&v21.fields.fakeValue = v9;
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v21, 0LL);
    if ( !v11 )
LABEL_12:
      sub_B0D97C(Instance);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v11,
               (int32_t)Instance,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
    {
      longName = (System_Int32_array **)Entity[1].fields.longName;
      p_classPassive->klass = (BattleServantConfConponent_c *)longName;
      sub_B0D840(p_classPassive, longName, v13, v14, v15, v16, v17, v18);
    }
  }
  return (System_Int32_array *)p_classPassive->klass;
}


void __fastcall ServantLeaderInfo__getPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Int32_array *PassiveSkillIdList; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x23
  System_String_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x22
  __int64 v39; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x22
  unsigned int v48; // w25
  __int64 v49; // x26
  __int64 v50; // x27
  System_Int32_array *v51; // x8
  unsigned __int64 v52; // x28
  int32_t v53; // w1
  SkillEntity_o *v54; // x23
  System_String_array *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x24
  Il2CppClass **v63; // x0
  System_String_array *v64; // x20
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x23
  Il2CppClass **v72; // x0
  System_Int32_array *v73; // x8
  unsigned __int64 max_length; // x9
  System_Int32_array *v75; // x8
  System_Int32_array *v76; // x8
  __int64 v77; // x8
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x0
  __int64 v85; // x0

  if ( (byte_4216944 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, idList);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B0D8A4(&string___TypeInfo, v9);
    byte_4216944 = 1;
  }
  PassiveSkillIdList = ServantLeaderInfo__getPassiveSkillIdList(this, (const MethodInfo *)idList);
  *idList = PassiveSkillIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)idList,
    (System_Int32_array **)PassiveSkillIdList,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !*idList )
    goto LABEL_39;
  v23 = *(_QWORD *)&(*idList)->max_length;
  if ( !v23 )
    goto LABEL_39;
  v24 = (System_String_array *)sub_B0D8BC(string___TypeInfo, (unsigned int)v23);
  *titleList = v24;
  sub_B0D840((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_String_array *)sub_B0D8BC(string___TypeInfo, (unsigned int)v23);
  *explanationList = v31;
  sub_B0D840((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  v38 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v39 = **(_QWORD **)(v38 + 192);
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AA65A4(v39);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v39 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_40:
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)v23 < 1 )
    goto LABEL_38;
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v48 = 0;
  v49 = (int)v23;
  v50 = 8LL;
  do
  {
    v51 = *idList;
    if ( !*idList )
      goto LABEL_40;
    v52 = v50 - 8;
    if ( v50 - 8 >= (unsigned __int64)v51->max_length )
      goto LABEL_41;
    v53 = *((_DWORD *)&v51->obj.klass + v50);
    if ( v53 >= 1 )
    {
      if ( !v47 )
        goto LABEL_40;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              v47,
                                                              v53,
                                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v54 = (SkillEntity_o *)MasterData_WarQuestSelectionMaster;
        v55 = *titleList;
        MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getEffectTitle(
                                                                (SkillEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                0,
                                                                0LL);
        if ( !v55 )
          goto LABEL_40;
        v62 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (DataManager_o *)sub_B0D964(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  v55->obj.klass->_1.element_class);
          if ( !MasterData_WarQuestSelectionMaster )
          {
LABEL_42:
            v85 = sub_B0D99C(MasterData_WarQuestSelectionMaster);
            sub_B0D948(v85, 0LL);
          }
        }
        if ( v48 >= v55->max_length )
          goto LABEL_41;
        v63 = &v55->obj.klass + (int)v48;
        v63[4] = (Il2CppClass *)v62;
        sub_B0D840((BattleServantConfConponent_o *)(v63 + 4), v62, v56, v57, v58, v59, v60, v61);
        v64 = *explanationList;
        MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getEffectExplanation(v54, 0, 0LL);
        if ( !v64 )
          goto LABEL_40;
        v71 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (DataManager_o *)sub_B0D964(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  v64->obj.klass->_1.element_class);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_42;
        }
        if ( v48 >= v64->max_length )
          goto LABEL_41;
        v72 = &v64->obj.klass + (int)v48;
        v72[4] = (Il2CppClass *)v71;
        sub_B0D840((BattleServantConfConponent_o *)(v72 + 4), v71, v65, v66, v67, v68, v69, v70);
        if ( v52 != v48 )
        {
          v73 = *idList;
          if ( !*idList )
            goto LABEL_40;
          max_length = v73->max_length;
          if ( v52 >= max_length || v48 >= (unsigned int)max_length )
            goto LABEL_41;
          v73->m_Items[v48 + 1] = *((_DWORD *)&v73->obj.klass + v50);
          v75 = *idList;
          if ( !*idList )
            goto LABEL_40;
          if ( v52 >= v75->max_length )
            goto LABEL_41;
          *((_DWORD *)&v75->obj.klass + v50) = 0;
        }
        ++v48;
      }
      else
      {
        v76 = *idList;
        if ( !*idList )
          goto LABEL_40;
        if ( v52 >= v76->max_length )
        {
LABEL_41:
          v84 = sub_B0D9A8(MasterData_WarQuestSelectionMaster);
          sub_B0D948(v84, 0LL);
        }
        *((_DWORD *)&v76->obj.klass + v50) = 0;
      }
    }
    v77 = v50 - 7;
    ++v50;
  }
  while ( v77 < v49 );
  if ( !v48 )
  {
LABEL_38:
    *idList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)idList, 0LL, v41, v42, v43, v44, v45, v46);
LABEL_39:
    *titleList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)titleList, 0LL, v17, v18, v19, v20, v21, v22);
    *explanationList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)explanationList, 0LL, v78, v79, v80, v81, v82, v83);
  }
}


int32_t __fastcall ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4216964 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4216964 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 4, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
  }
  else if ( LimitCountWithRandom >= 11 )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
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
  bool isWhole; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_421694F & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_421694F = 1;
  }
  isWhole = 0;
  if ( questRestrictionInfo )
  {
    v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v15.fields.currentCryptoKey = v6;
    *(_QWORD *)&v15.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v15, 0LL);
    limitCount = this->fields.limitCount;
    v9 = v7;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
    return QuestRestrictionInfo__IsRestriction_30608704(
             questRestrictionInfo,
             &isWhole,
             v9,
             limitCount,
             DispLimitCount,
             this->fields.lv,
             0,
             0LL);
  }
  else
  {
    return 0;
  }
}


int32_t __fastcall ServantLeaderInfo__getRarity(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_421693C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421693C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v12, 0LL);
  if ( !v9 || (Instance = ServantLimitMaster__GetEntity(v9, (int32_t)Instance, this->fields.limitCount, v10)) == 0LL )
LABEL_10:
    sub_B0D97C(Instance);
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

  if ( (byte_4216949 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4216949 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v9, 0LL) >= 1
      && ServantLeaderInfo__getBaseEventUpVal(this, setupInfo, v7);
}


int32_t __fastcall ServantLeaderInfo__getServantLevel(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *__fastcall ServantLeaderInfo__getSkillIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  System_Int32_array *result; // x0
  il2cpp_array_size_t max_length; // w8
  __int64 v7; // x0

  if ( (byte_421693E & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    byte_421693E = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v4->static_fields->SvtSkillListMax);
  if ( !result )
    sub_B0D97C(0LL);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillId1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillId2, max_length <= 2) )
  {
    v7 = sub_B0D9A8(result);
    sub_B0D948(v7, 0LL);
  }
  result->m_Items[3] = this->fields.skillId3;
  return result;
}


void __fastcall ServantLeaderInfo__getSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x21
  __int64 EffectChargeTurn; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v14; // x21
  __int64 v15; // x21
  const MethodInfo *v16; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v18; // x1
  BalanceConfig_c **v19; // x25
  System_Int32_array *SkillLevelList; // x22
  BalanceConfig_c *v21; // x8
  SkillInfo_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  unsigned __int64 v29; // x20
  il2cpp_array_size_t v30; // w19
  int32_t *v31; // x24
  int32_t *v32; // x28
  int32_t v33; // w1
  WarEntity_o *Entity; // x0
  SkillEntity_o *v35; // x26
  BalanceConfig_c **v36; // x23
  __int64 v37; // x25
  __int64 v38; // x27
  int32_t v39; // w1
  ServantSkillEntity_o *EntityFromSkillId; // x27
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x25
  System_Int32_array **EffectTitle; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **EffectExplanation; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int32_t skillNum; // w8
  SkillInfo_array *v59; // x26
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  Il2CppClass **v66; // x0
  int32_t *v67; // x20
  int32_t *v68; // x23
  __int64 v69; // x0
  __int64 v70; // x0
  ServantSkillMaster_o *v71; // [xsp+0h] [xbp-70h]
  DataMasterBase_WarMaster__WarEntity__int__o *v72; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_4216942 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_B0D8A4(&SkillInfo___TypeInfo, v8);
    sub_B0D8A4(&SkillInfo_TypeInfo, v9);
    byte_4216942 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AA65A4(v11);
  EffectChargeTurn = **(_QWORD **)(v11 + 184);
  if ( !EffectChargeTurn )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)EffectChargeTurn,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AA65A4(v15);
  EffectChargeTurn = **(_QWORD **)(v15 + 184);
  if ( !EffectChargeTurn )
LABEL_58:
    sub_B0D97C(EffectChargeTurn);
  v71 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)EffectChargeTurn,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillIdList = ServantLeaderInfo__getSkillIdList(this, v16);
  v19 = &BalanceConfig_TypeInfo;
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v18);
  v21 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  v22 = (SkillInfo_array *)sub_B0D8BC(SkillInfo___TypeInfo, (unsigned int)v21->static_fields->SvtSkillListMax);
  *skillInfoList = v22;
  sub_B0D840((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  v29 = 0LL;
  v30 = 0;
  v31 = &SkillIdList->m_Items[1];
  v32 = &SkillLevelList->m_Items[1];
  v72 = MasterData_WarQuestSelectionMaster;
  while ( 1 )
  {
    EffectChargeTurn = (__int64)*v19;
    if ( (BYTE3((*v19)->vtable._0_Equals.methodPtr) & 4) != 0 && !*(_DWORD *)(EffectChargeTurn + 224) )
    {
      j_il2cpp_runtime_class_init_0(EffectChargeTurn);
      EffectChargeTurn = (__int64)*v19;
    }
    if ( (__int64)v29 >= *(int *)(*(_QWORD *)(EffectChargeTurn + 184) + 32LL) )
      break;
    if ( !SkillIdList )
      goto LABEL_58;
    if ( v29 >= SkillIdList->max_length )
      goto LABEL_57;
    v33 = v31[v29];
    if ( v33 >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_58;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v33,
                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        v35 = (SkillEntity_o *)Entity;
        v36 = v19;
        v38 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v37 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v75.fields.currentCryptoKey = v38;
        *(_QWORD *)&v75.fields.fakeValue = v37;
        EffectChargeTurn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v75, 0LL);
        if ( v29 >= SkillIdList->max_length )
          goto LABEL_57;
        v39 = EffectChargeTurn;
        EffectChargeTurn = (__int64)v71;
        if ( !v71 )
          goto LABEL_58;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v71, v39, (int)v29 + 1, v31[v29], 0LL);
        v43 = sub_B0D974(SkillInfo_TypeInfo, v41, v42);
        SkillInfo___ctor((SkillInfo_o *)v43, 0LL);
        if ( v29 >= SkillIdList->max_length )
        {
LABEL_57:
          v69 = sub_B0D9A8(EffectChargeTurn);
          sub_B0D948(v69, 0LL);
        }
        if ( !v43 )
          goto LABEL_58;
        *(_DWORD *)(v43 + 16) = v31[v29];
        if ( !SkillLevelList )
          goto LABEL_58;
        if ( v29 >= SkillLevelList->max_length )
          goto LABEL_57;
        *(_DWORD *)(v43 + 20) = v32[v29];
        if ( v29 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectChargeTurn = SkillEntity__getEffectChargeTurn(v35, v32[v29], 0LL);
        *(_DWORD *)(v43 + 24) = EffectChargeTurn;
        if ( v29 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectTitle = (System_Int32_array **)SkillEntity__getEffectTitle(v35, v32[v29], 0LL);
        *(_QWORD *)(v43 + 32) = EffectTitle;
        sub_B0D840((BattleServantConfConponent_o *)(v43 + 32), EffectTitle, v45, v46, v47, v48, v49, v50);
        if ( v29 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectExplanation = (System_Int32_array **)SkillEntity__getEffectExplanation(v35, v32[v29], 0LL);
        *(_QWORD *)(v43 + 40) = EffectExplanation;
        sub_B0D840((BattleServantConfConponent_o *)(v43 + 40), EffectExplanation, v52, v53, v54, v55, v56, v57);
        if ( EntityFromSkillId )
        {
          EffectChargeTurn = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          *(_DWORD *)(v43 + 48) = EffectChargeTurn;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          skillNum = 0;
          *(_DWORD *)(v43 + 48) = 0;
        }
        *(_DWORD *)(v43 + 52) = skillNum;
        *(_BYTE *)(v43 + 56) = 1;
        v59 = *skillInfoList;
        if ( !*skillInfoList )
          goto LABEL_58;
        EffectChargeTurn = sub_B0D964(v43, v59->obj.klass->_1.element_class);
        if ( !EffectChargeTurn )
        {
          v70 = sub_B0D99C(0LL);
          sub_B0D948(v70, 0LL);
        }
        if ( v30 >= v59->max_length )
          goto LABEL_57;
        v66 = &v59->obj.klass + (int)v30;
        v66[4] = (Il2CppClass *)v43;
        sub_B0D840((BattleServantConfConponent_o *)(v66 + 4), (System_Int32_array **)v43, v60, v61, v62, v63, v64, v65);
        v19 = v36;
        MasterData_WarQuestSelectionMaster = v72;
        ++v30;
      }
    }
    ++v29;
  }
  v67 = &SkillIdList->m_Items[v30 + 1];
  v68 = &SkillLevelList->m_Items[v30 + 1];
  while ( 1 )
  {
    if ( (*(_BYTE *)(EffectChargeTurn + 307) & 4) != 0 && !*(_DWORD *)(EffectChargeTurn + 224) )
    {
      j_il2cpp_runtime_class_init_0(EffectChargeTurn);
      EffectChargeTurn = (__int64)*v19;
    }
    if ( (signed int)v30 >= *(_DWORD *)(*(_QWORD *)(EffectChargeTurn + 184) + 32LL) )
      break;
    if ( !SkillIdList )
      goto LABEL_58;
    if ( v30 >= SkillIdList->max_length )
      goto LABEL_57;
    *v67 = 0;
    if ( !SkillLevelList )
      goto LABEL_58;
    if ( v30 >= SkillLevelList->max_length )
      goto LABEL_57;
    *v68++ = -1;
    EffectChargeTurn = (__int64)*v19;
    ++v30;
    ++v67;
  }
}


System_Int32_array *__fastcall ServantLeaderInfo__getSkillLevelList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  System_Int32_array *result; // x0
  il2cpp_array_size_t max_length; // w8
  __int64 v7; // x0

  if ( (byte_421693F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    byte_421693F = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v4->static_fields->SvtSkillListMax);
  if ( !result )
    sub_B0D97C(0LL);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillLv2, max_length <= 2) )
  {
    v7 = sub_B0D9A8(result);
    sub_B0D948(v7, 0LL);
  }
  result->m_Items[3] = this->fields.skillLv3;
  return result;
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo(
        ServantLeaderInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x21
  DataManager_o *v10; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x22
  __int64 v13; // x23
  ServantTreasureDvcMaster_o *v14; // x21
  ServantTreasureDvcEntity_o *EntityFromSvtIdDvcId; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  TreasureDvcInfo_o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  TreasureDvcInfo_o *v25; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4216954 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, tdInfo);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_B0D8A4(&TreasureDvcInfo_TypeInfo, v7);
    byte_4216954 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AA65A4(v9);
  v10 = **(DataManager_o ***)(v9 + 184);
  if ( !v10 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v10,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v13;
  *(_QWORD *)&v27.fields.fakeValue = v12;
  v10 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v27, 0LL);
  if ( !v14 )
    goto LABEL_18;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           v14,
                           (int32_t)v10,
                           this->fields.treasureDeviceId,
                           0LL);
  v18 = (TreasureDvcInfo_o *)sub_B0D974(TreasureDvcInfo_TypeInfo, v16, v17);
  TreasureDvcInfo___ctor(v18, 0LL);
  *tdInfo = v18;
  sub_B0D840((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
  if ( EntityFromSvtIdDvcId )
  {
    if ( *tdInfo )
    {
      (*tdInfo)->fields.id = this->fields.treasureDeviceId;
      if ( *tdInfo )
      {
        (*tdInfo)->fields.lv = this->fields.treasureDeviceLv;
        if ( *tdInfo )
        {
          v25 = *tdInfo;
          ServantTreasureDvcEntity__getEffectExplanation(
            EntityFromSvtIdDvcId,
            &v25->fields.name,
            &v25->fields.explanation,
            &v25->fields.maxLv,
            &v25->fields.guageCount,
            &v25->fields.cardId,
            &v25->fields.strengthStatus,
            &v25->fields.treasureDeviceNum,
            v25->fields.lv,
            0LL);
          return 1;
        }
      }
    }
LABEL_18:
    sub_B0D97C(v10);
  }
  return 0;
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo_28153448(
        ServantLeaderInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w8

  if ( (byte_4216955 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, tdLv);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    byte_4216955 = 1;
  }
  *tdLv = this->fields.treasureDeviceLv;
  if ( this->fields.treasureDeviceId < 1 )
  {
    bannerId = 0;
    LOBYTE(Entity) = 0;
  }
  else
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v10 = **(_QWORD **)(v9 + 192);
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AA65A4(v10);
    MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v10 + 184);
    if ( !MasterData_WarQuestSelectionMaster
      || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
    {
      sub_B0D97C(MasterData_WarQuestSelectionMaster);
    }
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
               this->fields.treasureDeviceId,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    if ( Entity )
    {
      bannerId = Entity->fields.bannerId;
      LOBYTE(Entity) = 1;
    }
    else
    {
      bannerId = 0;
    }
  }
  *tdMaxLv = bannerId;
  return (char)Entity;
}


int32_t __fastcall ServantLeaderInfo__getTreasureDeviceLevelIcon(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t treasureDeviceLv; // w8

  if ( (byte_4216956 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_4216956 = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AA65A4(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             this->fields.treasureDeviceId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  if ( treasureDeviceLv >= Entity->fields.bannerId )
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

  if ( (byte_4216950 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4216950 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v9, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_30610864(questRestrictionInfo, v7, 0LL);
}


bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction_28152404(
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

  if ( (byte_4216951 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4216951 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_30611088(questRestrictionInfo, v11, partyItem, num, -1, 0LL);
}


bool __fastcall ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4216941 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4216941 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v5 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v7, 0LL) > 0;
}


bool __fastcall ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_4216938 & 1) == 0 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, method);
    byte_4216938 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4212D36 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, method);
    byte_4212D36 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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