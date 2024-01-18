void __fastcall ServantLeaderInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4189FE9 & 1) == 0 )
  {
    sub_B2C35C(&ServantLeaderInfo_TypeInfo, v1);
    byte_4189FE9 = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo___ctor_29329736(
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
  ServantEntity_o *Entity; // x22
  const MethodInfo *v19; // x3
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

  if ( (byte_4189FB1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4189FB1 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_38;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_38;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, v19);
  if ( !Instance )
    goto LABEL_38;
  this->fields.hp = *((_DWORD *)Instance + 9);
  v20 = *((_DWORD *)Instance + 11);
  this->fields.adjustAtk = 0;
  this->fields.adjustHp = 0;
  this->fields.atk = v20;
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(this, v17);
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v22 = MaxDispLimitCount;
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v24 = **(_QWORD **)(v23 + 192);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AC505C(v24);
  Instance = **(void ***)(v24 + 184);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
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
    v45 = sub_B2C460(Instance);
    sub_B2C400(v45, 0LL);
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
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v36 = **(_QWORD **)(v35 + 192);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AC505C(v36);
  Instance = **(void ***)(v36 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL )
  {
LABEL_38:
    sub_B2C434(Instance, v17);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipTarget1, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.randomLimitCountTargets = 0LL;
  p_randomLimitCountTargets = &this->fields.randomLimitCountTargets;
  *(p_randomLimitCountTargets - 3) = 0LL;
  *(p_randomLimitCountTargets - 2) = 0LL;
  *(p_randomLimitCountTargets - 4) = 0LL;
  *((_DWORD *)p_randomLimitCountTargets - 2) = 0;
  sub_B2C2F8((BattleServantConfConponent_o *)p_randomLimitCountTargets, 0LL, v39, v40, v41, v42, v43, v44);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
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
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4189FDF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    byte_4189FDF = 1;
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
    *(_QWORD *)&v44.fields.currentCryptoKey = v7;
    *(_QWORD *)&v44.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v44, 0LL) >= 1 )
    {
      v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v8,
        (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v8;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.limitChangeDic,
        (System_Int32_array **)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
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
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.limitChangeDic, 0LL, v38, v39, v40, v41, v42, v43);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipTarget1, 0LL, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_4189FE2 & 1) == 0 )
  {
    sub_B2C35C(&ServantLeaderInfo_TypeInfo, *(_QWORD *)&orgLimitCount);
    byte_4189FE2 = 1;
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
  __int64 v17; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x25
  __int64 v20; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x24
  const MethodInfo *v23; // x1
  int32_t *Entity; // x0
  int32_t v25; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4189FB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4189FB4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v20;
  *(_QWORD *)&v27.fields.fakeValue = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v27, 0LL);
  if ( !v21 )
    goto LABEL_16;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v21,
                                (int32_t)Instance,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_16;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
LABEL_14:
    v25 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_15;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (DataManager_o *)ServantLeaderInfo__getRarity(this, v23),
        !v22) )
  {
LABEL_16:
    sub_B2C434(Instance, v17);
  }
  Entity = (int32_t *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v22,
                        (int32_t)Instance,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_14;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v25 = Entity[8];
  result = 1;
LABEL_15:
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
  ServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v23; // x25
  __int64 v24; // x26
  __int64 EntityListFromSvtId; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BattleServantConfConponent_o *v33; // x26
  __int64 v34; // x25
  System_Int32_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Boolean_array *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v70; // x27
  int v71; // w22
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x11
  int max_length; // w8
  __int64 v74; // x9
  __int64 v75; // x10
  AppendPassiveSkillInfo_o **m_Items; // x11
  AppendPassiveSkillInfo_o *v77; // x19
  __int64 v78; // x24
  __int64 v79; // x8
  System_Int32_array *v80; // x9
  System_Int32_array *v81; // x8
  BattleServantConfConponent_c *klass; // x8
  SkillEntity_o *v83; // x28
  System_String_array *v84; // x26
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x20
  Il2CppClass **v92; // x0
  System_String_array *v93; // x20
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x28
  Il2CppClass **v101; // x0
  System_Boolean_array *v102; // x8
  char v103; // w9
  BattleServantConfConponent_c *v104; // x8
  System_String_array *v105; // x19
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x20
  Il2CppClass **v113; // x0
  System_String_array *v114; // x19
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x20
  Il2CppClass **v122; // x0
  System_String_array *v123; // x8
  System_String_array *v124; // x8
  BattleServantConfConponent_o *v125; // x20
  System_String_o *call_openComp; // t1
  System_Int32_array **v127; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_String_array *v134; // x8
  Il2CppClass **v135; // x28
  System_String_o *v136; // x20
  BattleServantConfConponent_o *v137; // x28
  System_String_o *v138; // t1
  System_String_o *v139; // x0
  System_Int32_array **v140; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  struct AppendPassiveSkillInfo_array *v147; // x8
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  __int64 v172; // x0
  __int64 v173; // x0
  BattleServantConfConponent_o *v174; // [xsp+8h] [xbp-78h]
  __int64 v178; // [xsp+28h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16

  if ( (byte_4189FE3 & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, idList);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B2C35C(&int___TypeInfo, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B2C35C(&string___TypeInfo, v17);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v18);
    sub_B2C35C(&StringLiteral_3305/*"COND_TYPE_TITLE"*/, v19);
    sub_B2C35C(&StringLiteral_3293/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    byte_4189FE3 = 1;
  }
  v174 = (BattleServantConfConponent_o *)lvList;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v179.fields.currentCryptoKey = v24;
  *(_QWORD *)&v179.fields.fakeValue = v23;
  EntityListFromSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v179, 0LL);
  if ( !Master_WarQuestSelectionMaster
    || (EntityListFromSvtId = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                         Master_WarQuestSelectionMaster,
                                         EntityListFromSvtId,
                                         0LL),
        v33 = v174,
        !EntityListFromSvtId) )
  {
LABEL_84:
    sub_B2C434(EntityListFromSvtId, v26);
  }
  v34 = EntityListFromSvtId;
  v178 = *(_QWORD *)(EntityListFromSvtId + 24);
  if ( v178 || (v147 = this->fields.appendPassiveSkill) != 0LL && *(_QWORD *)&v147->max_length )
  {
    v35 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v178);
    *idList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)idList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = (System_String_array *)sub_B2C374(string___TypeInfo, (unsigned int)v178);
    *titleList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    v49 = (System_String_array *)sub_B2C374(string___TypeInfo, (unsigned int)v178);
    *explanationList = v49;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v56 = (System_Boolean_array *)sub_B2C374(bool___TypeInfo, (unsigned int)v178);
    *releaseStateList = v56;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    v63 = (System_Int32_array **)sub_B2C374(int___TypeInfo, (unsigned int)v178);
    v174->klass = (BattleServantConfConponent_c *)v63;
    sub_B2C2F8(v174, v63, v64, v65, v66, v67, v68, v69);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EntityListFromSvtId = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v178 >= 1 )
    {
      v70 = (DataMasterBase_WarMaster__WarEntity__int__o *)EntityListFromSvtId;
      v71 = 0;
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
        v77 = 0LL;
LABEL_27:
        if ( (unsigned int)v71 >= *(_DWORD *)(v34 + 24) )
          goto LABEL_85;
        v78 = v71;
        v79 = *(_QWORD *)(v34 + 8LL * v71 + 32);
        if ( !v79 )
          goto LABEL_84;
        v80 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v71 >= v80->max_length )
          goto LABEL_85;
        v80->m_Items[v71 + 1] = *(_DWORD *)(v79 + 28);
        v81 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v71 >= v81->max_length )
          goto LABEL_85;
        if ( !v70 )
          goto LABEL_84;
        EntityListFromSvtId = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         v70,
                                         v81->m_Items[v71 + 1],
                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        klass = v33->klass;
        v83 = (SkillEntity_o *)EntityListFromSvtId;
        if ( v77 )
        {
          if ( !klass )
            goto LABEL_84;
          if ( (unsigned int)v71 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_85;
          *((_DWORD *)&klass->_1.byval_arg.data + v71) = v77->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_84;
          v84 = *titleList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectTitle(
                                           (SkillEntity_o *)EntityListFromSvtId,
                                           v77->fields.skillLv,
                                           0LL);
          if ( !v84 )
            goto LABEL_84;
          v91 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B2C41C(EntityListFromSvtId, v84->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v71 >= v84->max_length )
            goto LABEL_85;
          v92 = &v84->obj.klass + v71;
          v92[4] = (Il2CppClass *)v91;
          sub_B2C2F8((BattleServantConfConponent_o *)(v92 + 4), v91, v85, v86, v87, v88, v89, v90);
          v93 = *explanationList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectExplanation(v83, v77->fields.skillLv, 0LL);
          if ( !v93 )
            goto LABEL_84;
          v33 = v174;
          v100 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B2C41C(EntityListFromSvtId, v93->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v71 >= v93->max_length )
            goto LABEL_85;
          v101 = &v93->obj.klass + v71;
          v101[4] = (Il2CppClass *)v100;
          sub_B2C2F8((BattleServantConfConponent_o *)(v101 + 4), v100, v94, v95, v96, v97, v98, v99);
          v102 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v71 >= v102->max_length )
            goto LABEL_85;
          v103 = 1;
        }
        else
        {
          if ( !klass )
            goto LABEL_84;
          if ( (unsigned int)v71 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_85;
          *((_DWORD *)&klass->_1.byval_arg.data + v71) = -1;
          v104 = v33->klass;
          if ( !v33->klass )
            goto LABEL_84;
          if ( (unsigned int)v71 >= LODWORD(v104->_1.namespaze) )
            goto LABEL_85;
          if ( !EntityListFromSvtId )
            goto LABEL_84;
          v105 = *titleList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectTitle(
                                           (SkillEntity_o *)EntityListFromSvtId,
                                           *((_DWORD *)&v104->_1.byval_arg.data + v71),
                                           0LL);
          if ( !v105 )
            goto LABEL_84;
          v112 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B2C41C(EntityListFromSvtId, v105->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
            {
LABEL_86:
              v173 = sub_B2C454(EntityListFromSvtId);
              sub_B2C400(v173, 0LL);
            }
          }
          if ( v71 >= v105->max_length )
            goto LABEL_85;
          v113 = &v105->obj.klass + v71;
          v113[4] = (Il2CppClass *)v112;
          sub_B2C2F8((BattleServantConfConponent_o *)(v113 + 4), v112, v106, v107, v108, v109, v110, v111);
          v114 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          EntityListFromSvtId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3305/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v114 )
            goto LABEL_84;
          v121 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B2C41C(EntityListFromSvtId, v114->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v71 >= v114->max_length )
            goto LABEL_85;
          v122 = &v114->obj.klass + v71;
          v122[4] = (Il2CppClass *)v121;
          sub_B2C2F8((BattleServantConfConponent_o *)(v122 + 4), v121, v115, v116, v117, v118, v119, v120);
          v123 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          if ( v71 >= v123->max_length )
            goto LABEL_85;
          EntityListFromSvtId = System_String__op_Inequality(
                                  v123->m_Items[v71],
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v124 = *explanationList;
            if ( !*explanationList )
              goto LABEL_84;
            if ( v71 >= v124->max_length )
              goto LABEL_85;
            v125 = (BattleServantConfConponent_o *)(&v124->obj.klass + v71);
            call_openComp = (System_String_o *)v125->fields.call_openComp;
            v125 = (BattleServantConfConponent_o *)((char *)v125 + 32);
            v127 = (System_Int32_array **)System_String__Concat_44305532(
                                            call_openComp,
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v125->klass = (BattleServantConfConponent_c *)v127;
            sub_B2C2F8(v125, v127, v128, v129, v130, v131, v132, v133);
          }
          v134 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          if ( v71 >= v134->max_length )
            goto LABEL_85;
          v135 = &v134->obj.klass + v71;
          v138 = (System_String_o *)v135[4];
          v137 = (BattleServantConfConponent_o *)(v135 + 4);
          v136 = v138;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v139 = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v140 = (System_Int32_array **)System_String__Concat_44305532(v136, v139, 0LL);
          v137->klass = (BattleServantConfConponent_c *)v140;
          sub_B2C2F8(v137, v140, v141, v142, v143, v144, v145, v146);
          v102 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v71 >= v102->max_length )
            goto LABEL_85;
          v103 = 0;
        }
        ++v71;
        v102->m_Items[v78 + 4] = v103;
        if ( v71 >= (int)v178 )
          return;
      }
      v74 = 0LL;
      v75 = v34 + 8LL * v71 + 32;
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v74 < max_length )
      {
        v77 = m_Items[v74];
        if ( !v77 )
          goto LABEL_84;
        if ( (unsigned int)v71 >= *(_DWORD *)(v34 + 24) )
          break;
        if ( !*(_QWORD *)v75 )
          goto LABEL_84;
        if ( v77->fields.skillId == *(_DWORD *)(*(_QWORD *)v75 + 28LL) )
          goto LABEL_27;
        if ( (int)++v74 >= max_length )
          goto LABEL_26;
      }
LABEL_85:
      v172 = sub_B2C460(EntityListFromSvtId);
      sub_B2C400(v172, 0LL);
    }
  }
  else
  {
    *idList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)idList, 0LL, v27, v28, v29, v30, v31, v32);
    *titleList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)titleList, 0LL, v148, v149, v150, v151, v152, v153);
    *explanationList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)explanationList, 0LL, v154, v155, v156, v157, v158, v159);
    *releaseStateList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)releaseStateList, 0LL, v160, v161, v162, v163, v164, v165);
    v174->klass = 0LL;
    sub_B2C2F8(v174, 0LL, v166, v167, v168, v169, v170, v171);
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
  __int64 v60; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x26
  __int64 v62; // x20
  __int64 v63; // x22
  struct AppendPassiveSkillInfo_array *v64; // x8
  __int64 v65; // x8
  System_Int32_array *v66; // x9
  System_Int32_array *v67; // x8
  struct AppendPassiveSkillInfo_array *v68; // x8
  __int64 v69; // x8
  int v70; // w9
  System_Int32_array *v71; // x8
  SkillEntity_o *v72; // x27
  struct AppendPassiveSkillInfo_array *v73; // x8
  __int64 v74; // x8
  System_String_array *v75; // x25
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x28
  struct AppendPassiveSkillInfo_array *v83; // x8
  int v84; // w28
  __int64 v85; // x8
  System_String_array *v86; // x25
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x27
  System_Boolean_array *v94; // x8
  char v95; // w9
  System_Int32_array *v96; // x8
  System_String_array *v97; // x25
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x27
  System_String_array *v105; // x28
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x27
  System_String_array *v113; // x8
  System_String_array *v114; // x8
  BattleServantConfConponent_o *v115; // x27
  System_Int32_array **v116; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_String_array *v123; // x28
  System_String_o *v124; // x27
  System_String_o *v125; // x0
  System_Int32_array **v126; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  char *v133; // x8
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  __int64 v158; // x0
  __int64 v159; // x0
  int v160; // [xsp+8h] [xbp-68h]

  if ( (byte_4189FE4 & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, idList);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_B2C35C(&int___TypeInfo, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&string___TypeInfo, v17);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v18);
    sub_B2C35C(&StringLiteral_3305/*"COND_TYPE_TITLE"*/, v19);
    sub_B2C35C(&StringLiteral_3293/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    byte_4189FE4 = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (v23 = *(_QWORD *)&appendPassiveSkill->max_length) != 0 )
  {
    v24 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v23);
    *idList = v24;
    sub_B2C2F8((BattleServantConfConponent_o *)idList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    v31 = (System_String_array *)sub_B2C374(string___TypeInfo, (unsigned int)v23);
    *titleList = v31;
    sub_B2C2F8((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
    v38 = (System_String_array *)sub_B2C374(string___TypeInfo, (unsigned int)v23);
    *explanationList = v38;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v45 = (System_Boolean_array *)sub_B2C374(bool___TypeInfo, (unsigned int)v23);
    *releaseStateList = v45;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v52 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v23);
    *lvList = v52;
    sub_B2C2F8((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v23 >= 1 )
    {
      v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v62 = 0LL;
      v63 = 32LL;
      v160 = v23;
      while ( 1 )
      {
        v64 = this->fields.appendPassiveSkill;
        if ( !v64 )
          break;
        if ( (unsigned int)v62 >= v64->max_length )
          goto LABEL_76;
        v65 = *(__int64 *)((char *)&v64->obj.klass + v63);
        if ( !v65 )
          break;
        v66 = *idList;
        if ( !*idList )
          break;
        if ( (unsigned int)v62 >= v66->max_length )
          goto LABEL_76;
        v66->m_Items[v62 + 1] = *(_DWORD *)(v65 + 16);
        v67 = *idList;
        if ( !*idList )
          break;
        if ( (unsigned int)v62 >= v67->max_length )
          goto LABEL_76;
        if ( !v61 )
          break;
        Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v61,
                                                    v67->m_Items[v62 + 1],
                                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v68 = this->fields.appendPassiveSkill;
        if ( !v68 )
          break;
        if ( (unsigned int)v62 >= v68->max_length )
          goto LABEL_76;
        v69 = *(__int64 *)((char *)&v68->obj.klass + v63);
        if ( !v69 )
          break;
        v70 = *(_DWORD *)(v69 + 20);
        v71 = *lvList;
        v72 = (SkillEntity_o *)Master_WarQuestSelectionMaster;
        if ( v70 < 1 )
        {
          if ( !v71 )
            break;
          if ( (unsigned int)v62 >= v71->max_length )
            goto LABEL_76;
          v71->m_Items[v62 + 1] = -1;
          v96 = *lvList;
          if ( !*lvList )
            break;
          if ( (unsigned int)v62 >= v96->max_length )
            goto LABEL_76;
          if ( !Master_WarQuestSelectionMaster )
            break;
          v97 = *titleList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                      (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                      v96->m_Items[v62 + 1],
                                                      0LL);
          if ( !v97 )
            break;
          v104 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B2C41C(
                                               Master_WarQuestSelectionMaster,
                                               v97->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
            {
LABEL_77:
              v159 = sub_B2C454(Master_WarQuestSelectionMaster);
              sub_B2C400(v159, 0LL);
            }
          }
          if ( (unsigned int)v62 >= v97->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v97->obj.klass + v63) = (Il2CppClass *)v104;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v97 + v63), v104, v98, v99, v100, v101, v102, v103);
          v105 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3305/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v105 )
            break;
          v112 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B2C41C(
                                               Master_WarQuestSelectionMaster,
                                               v105->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v62 >= v105->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v105->obj.klass + v63) = (Il2CppClass *)v112;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v105 + v63), v112, v106, v107, v108, v109, v110, v111);
          v113 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v62 >= v113->max_length )
            goto LABEL_76;
          Master_WarQuestSelectionMaster = System_String__op_Inequality(
                                             *(System_String_o **)((char *)&v113->obj.klass + v63),
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL);
          if ( (Master_WarQuestSelectionMaster & 1) != 0 )
          {
            v114 = *explanationList;
            if ( !*explanationList )
              break;
            if ( (unsigned int)v62 >= v114->max_length )
              goto LABEL_76;
            v115 = (BattleServantConfConponent_o *)((char *)v114 + v63);
            v116 = (System_Int32_array **)System_String__Concat_44305532(
                                            *(System_String_o **)((char *)&v114->obj.klass + v63),
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v115->klass = (BattleServantConfConponent_c *)v116;
            sub_B2C2F8(v115, v116, v117, v118, v119, v120, v121, v122);
          }
          v123 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v62 >= v123->max_length )
          {
LABEL_76:
            v158 = sub_B2C460(Master_WarQuestSelectionMaster);
            sub_B2C400(v158, 0LL);
          }
          v124 = *(System_String_o **)((char *)&v123->obj.klass + v63);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v125 = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v126 = (System_Int32_array **)System_String__Concat_44305532(v124, v125, 0LL);
          *(Il2CppClass **)((char *)&v123->obj.klass + v63) = (Il2CppClass *)v126;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v123 + v63), v126, v127, v128, v129, v130, v131, v132);
          v94 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          v84 = v160;
          if ( (unsigned int)v62 >= v94->max_length )
            goto LABEL_76;
          v95 = 0;
        }
        else
        {
          if ( !v71 )
            break;
          if ( (unsigned int)v62 >= v71->max_length )
            goto LABEL_76;
          v71->m_Items[v62 + 1] = v70;
          v73 = this->fields.appendPassiveSkill;
          if ( !v73 )
            break;
          if ( (unsigned int)v62 >= v73->max_length )
            goto LABEL_76;
          v74 = *(__int64 *)((char *)&v73->obj.klass + v63);
          if ( !v74 )
            break;
          if ( !Master_WarQuestSelectionMaster )
            break;
          v75 = *titleList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                      (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                      *(_DWORD *)(v74 + 20),
                                                      0LL);
          if ( !v75 )
            break;
          v82 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B2C41C(
                                               Master_WarQuestSelectionMaster,
                                               v75->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v62 >= v75->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v75->obj.klass + v63) = (Il2CppClass *)v82;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v75 + v63), v82, v76, v77, v78, v79, v80, v81);
          v83 = this->fields.appendPassiveSkill;
          if ( !v83 )
            break;
          v84 = v160;
          if ( (unsigned int)v62 >= v83->max_length )
            goto LABEL_76;
          v85 = *(__int64 *)((char *)&v83->obj.klass + v63);
          if ( !v85 )
            break;
          v86 = *explanationList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectExplanation(v72, *(_DWORD *)(v85 + 20), 0LL);
          if ( !v86 )
            break;
          v93 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B2C41C(
                                               Master_WarQuestSelectionMaster,
                                               v86->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v62 >= v86->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v86->obj.klass + v63) = (Il2CppClass *)v93;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v86 + v63), v93, v87, v88, v89, v90, v91, v92);
          v94 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( (unsigned int)v62 >= v94->max_length )
            goto LABEL_76;
          v95 = 1;
        }
        v133 = (char *)v94 + v62++;
        v63 += 8LL;
        v133[32] = v95;
        if ( (int)v62 >= v84 )
          return;
      }
      sub_B2C434(Master_WarQuestSelectionMaster, v60);
    }
  }
  else
  {
    *idList = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)idList,
      0LL,
      titleList,
      explanationList,
      releaseStateList,
      lvList,
      (System_Int32_array *)method,
      v7);
    *titleList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)titleList, 0LL, v134, v135, v136, v137, v138, v139);
    *explanationList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)explanationList, 0LL, v140, v141, v142, v143, v144, v145);
    *releaseStateList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)releaseStateList, 0LL, v146, v147, v148, v149, v150, v151);
    *lvList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)lvList, 0LL, v152, v153, v154, v155, v156, v157);
  }
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo_29351980(
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
  __int64 v23; // x21
  __int64 v24; // x22
  __int64 v25; // x23
  __int64 v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  unsigned __int64 v35; // x25
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  SkillInfo_array *v44; // x26
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x8
  __int64 v52; // x0
  __int64 v53; // x0
  System_Int32_array *lvList; // [xsp+8h] [xbp-68h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4189FE5 & 1) == 0 )
  {
    sub_B2C35C(&SkillInfo___TypeInfo, skillInfoList);
    sub_B2C35C(&SkillInfo_TypeInfo, v8);
    byte_4189FE5 = 1;
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
    v16 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)v15);
    *skillInfoList = v16;
    sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
    if ( (int)v15 >= 1 )
    {
      v23 = (int)v15;
      v24 = 32LL;
      v25 = 8LL;
      do
      {
        v26 = sub_B2C42C(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v26, 0LL);
        if ( !v26 )
          goto LABEL_26;
        *(_DWORD *)(v26 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v35 = v25 - 8;
        if ( v25 - 8 >= (unsigned __int64)idList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v26 + 16) = *((_DWORD *)&idList->obj.klass + v25);
        if ( !lvList )
          goto LABEL_26;
        if ( v35 >= lvList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v26 + 20) = *((_DWORD *)&lvList->obj.klass + v25);
        if ( !titleList )
          goto LABEL_26;
        if ( v35 >= titleList->max_length )
          goto LABEL_27;
        v36 = *(System_Int32_array ***)((char *)&titleList->obj.klass + v24);
        *(_QWORD *)(v26 + 32) = v36;
        sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 32), v36, v29, v30, v31, v32, v33, v34);
        if ( !explanationList )
          goto LABEL_26;
        if ( v35 >= explanationList->max_length )
          goto LABEL_27;
        v43 = *(System_Int32_array ***)((char *)&explanationList->obj.klass + v24);
        *(_QWORD *)(v26 + 40) = v43;
        sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 40), v43, v37, v38, v39, v40, v41, v42);
        v44 = *skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_B2C434(v27, v28);
        v27 = sub_B2C41C(v26, v44->obj.klass->_1.element_class);
        if ( !v27 )
        {
          v53 = sub_B2C454(0LL);
          sub_B2C400(v53, 0LL);
        }
        if ( v35 >= v44->max_length )
        {
LABEL_27:
          v52 = sub_B2C460(v27);
          sub_B2C400(v52, 0LL);
        }
        *(Il2CppClass **)((char *)&v44->obj.klass + v24) = (Il2CppClass *)v26;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)((char *)v44 + v24),
          (System_Int32_array **)v26,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        v51 = v25 - 7;
        ++v25;
        v24 += 8LL;
      }
      while ( v51 < v23 );
    }
  }
  else
  {
    *skillInfoList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4189FD4 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v4);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    sub_B2C35C(&ServantLeaderInfo_TypeInfo, v6);
    byte_4189FD4 = 1;
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

  if ( (byte_4189FE0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, *(_QWORD *)&limit);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4189FE0 = 1;
  }
  value = 0;
  limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
          limit,
          &value,
          (const MethodInfo_2E26150 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    limitChangeDic = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( limitChangeDic )
    {
      limitChangeDic = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          limitChangeDic,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
            (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_B2C434(limitChangeDic, *(_QWORD *)&limit);
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
  int32_t ChoiceLimitCount_21887276; // w0
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v8; // x0

  if ( (byte_4189FB0 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v5);
    byte_4189FB0 = 1;
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
  ChoiceLimitCount_21887276 = RandomLimitCountManager__GetChoiceLimitCount_21887276(this, 0LL);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_21887276;
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
  __int64 v10; // x1
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  UserEventDataLostEntity_o *v14; // x20
  __int64 v15; // x19
  __int64 v16; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4189FE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4189FE7 = 1;
  }
  entity = 0LL;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v11 = entity;
      v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v19.fields.currentCryptoKey = v13;
      *(_QWORD *)&v19.fields.fakeValue = v12;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
      if ( !v11 )
        goto LABEL_24;
      if ( UserEventDataLostEntity__IsRestart(v11, UserId, 0LL) )
      {
        v14 = entity;
        v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v20.fields.currentCryptoKey = v16;
        *(_QWORD *)&v20.fields.fakeValue = v15;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
        if ( v14 )
          return UserEventDataLostEntity__GetTimesToRestart(v14, UserId, 0LL);
LABEL_24:
        sub_B2C434(UserId, v10);
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
  __int64 v10; // x1
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  UserEventDataLostEntity_o *v14; // x20
  __int64 v15; // x19
  __int64 v16; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4189FE6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4189FE6 = 1;
  }
  entity = 0LL;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
  v11 = entity;
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  if ( !v11 )
    goto LABEL_25;
  if ( UserEventDataLostEntity__IsRestart(v11, UserId, 0LL) )
    return 0;
  v14 = entity;
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  *(_QWORD *)&v20.fields.fakeValue = v15;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
  if ( !v14 )
LABEL_25:
    sub_B2C434(UserId, v10);
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

  if ( (byte_4189FE8 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4189FE8 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
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

  if ( (byte_4189FC9 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4189FC9 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsUniqueIndividuality_31227040(questRestrictionInfo, v9, limitCount, DispLimitCount, 0LL);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction_29339980(
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

  if ( (byte_4189FCA & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4189FCA = 1;
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return QuestRestrictionInfo__IsUniqueIndividuality_31227688(
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
  __int64 v24; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v26; // x23
  __int64 v27; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x22
  ServantEntity_o *v29; // x22
  const MethodInfo *v30; // x1
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w23
  int32_t v33; // w24
  int32_t LimitCountByDispLimit; // w0
  System_Int32_array **Name; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v43; // x24
  __int64 v44; // x25
  ServantLimitAddMaster_o *v45; // x23
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int32_t CardImageLimitCount; // w19
  int32_t LimitCountByImageLimitCostumeIn; // w0
  System_Int32_array **v56; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4189FE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4189FE1 = 1;
  }
  this->fields.overwriteServantName = 0LL;
  p_overwriteServantName = &this->fields.overwriteServantName;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.overwriteServantName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.overwriteServantDetailName = 0LL;
  p_overwriteServantDetailName = (BattleServantConfConponent_o *)&this->fields.overwriteServantDetailName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.overwriteServantDetailName,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = v27;
  *(_QWORD *)&v57.fields.fakeValue = v26;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v57, 0LL);
  if ( !v28 )
    goto LABEL_28;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v28,
                                (int32_t)Instance,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_28;
  v29 = (ServantEntity_o *)Instance;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v30);
  limitCount = this->fields.limitCount;
  v33 = DispLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v33, limitCount, 0LL);
  Name = (System_Int32_array **)ServantEntity__getName(v29, LimitCountByDispLimit, -1, 0LL);
  *p_overwriteServantName = (struct System_String_o *)Name;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.overwriteServantName, Name, v36, v37, v38, v39, v40, v41);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v44 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v45 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v58.fields.currentCryptoKey = v44;
  *(_QWORD *)&v58.fields.fakeValue = v43;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v58, 0LL);
  if ( !v45 )
LABEL_28:
    sub_B2C434(Instance, v24);
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName(v45, (int32_t)Instance, v46) )
  {
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v47);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
    v56 = (System_Int32_array **)ServantEntity__getName(v29, -1, LimitCountByImageLimitCostumeIn, 0LL);
    p_overwriteServantDetailName->klass = (BattleServantConfConponent_c *)v56;
  }
  else
  {
    v56 = (System_Int32_array **)*p_overwriteServantName;
    p_overwriteServantDetailName->klass = (BattleServantConfConponent_c *)*p_overwriteServantName;
  }
  sub_B2C2F8(p_overwriteServantDetailName, v56, v48, v49, v50, v51, v52, v53);
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
  unsigned __int64 v10; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
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
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v31; // x25
  __int64 v32; // x26
  __int64 v33; // x27
  int32_t v34; // w26
  int32_t v35; // w28
  int32_t v36; // w0
  __int64 v38; // x0
  int32_t wearesDispLimitCount; // [xsp+14h] [xbp-6Ch]
  EventUpValSetupInfo_o *v40; // [xsp+18h] [xbp-68h]
  int32_t *v41; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4189FC2 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, setupInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4189FC2 = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v8;
  *(_QWORD *)&v43.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v43, 0LL) >= 1 )
  {
    v40 = setupInfo;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_42:
      sub_B2C434(Instance, v10);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    wearesDispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v12);
    Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v13);
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
          v10 = *((unsigned int *)&v15->fields.lookup + v16);
          if ( (int)v10 >= 1 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_42;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v10, 1, 0LL);
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
              *(_QWORD *)&v44.fields.currentCryptoKey = v20;
              *(_QWORD *)&v44.fields.fakeValue = v19;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v44, 0LL);
              if ( !v40 )
                goto LABEL_42;
              v21 = (int)Instance;
              limitCount = this->fields.limitCount;
              EventId = EventUpValSetupInfo__get_EventId(v40, 0LL);
              v24 = 1;
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal(
                                            v18,
                                            v21,
                                            limitCount,
                                            wearesDispLimitCount,
                                            v40,
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
            v38 = sub_B2C460(Instance);
            sub_B2C400(v38, 0LL);
          }
        }
      }
    }
    SkillIdList = ServantLeaderInfo__getSkillIdList(this, (const MethodInfo *)v10);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v26);
    v41 = &SkillLevelList->m_Items[1];
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
      v10 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v10 >= 1 )
      {
        if ( !v28 )
          goto LABEL_42;
        if ( i >= v28->max_length )
          goto LABEL_43;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_42;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v10, v41[i], 0LL);
        if ( Entity )
        {
          v31 = Entity;
          v33 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v32 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v45.fields.currentCryptoKey = v33;
          *(_QWORD *)&v45.fields.fakeValue = v32;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v45, 0LL);
          if ( !v40 )
            goto LABEL_42;
          v34 = (int)Instance;
          v35 = this->fields.limitCount;
          v36 = EventUpValSetupInfo__get_EventId(v40, 0LL);
          v24 = 1;
          if ( SkillLvEntity__getEventUpVal(v31, v34, v35, wearesDispLimitCount, v40, v36, 1, 0, 0LL) )
            return v24;
        }
      }
    }
  }
  return 0;
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal_29338152(
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
  unsigned __int64 v11; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
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
  SkillLvEntity_o *Entity; // x0
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4189FC5 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4189FC5 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v9;
  *(_QWORD *)&v26.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v26, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_39;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_39:
    sub_B2C434(Instance, v11);
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v14);
  if ( Instance && (datalist = Instance->fields.datalist, v16 = Instance, (int)datalist >= 1) )
  {
    v17 = 0;
    v18 = 0LL;
    v19 = (int)datalist;
    while ( 1 )
    {
      v11 = *((unsigned int *)&v16->fields.lookup + v18);
      if ( (int)v11 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_39;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v11, 1, 0LL);
        if ( Instance )
        {
          Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_23801352(
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
        v25 = sub_B2C460(Instance);
        sub_B2C400(v25, 0LL);
      }
    }
  }
  else
  {
    v17 = 0;
  }
  SkillIdList = ServantLeaderInfo__getSkillIdList(this, (const MethodInfo *)v11);
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
    v11 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v11 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_39;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_40;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_39;
      Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v11, SkillLevelList->m_Items[i + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_23801352(Entity, eventUpVallInfo, 1, 0, 1, 0, 0LL) )
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
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v11; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v13; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x22
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4189FBE & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4189FBE = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B2C434(Instance, v9);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__getSkillIdList(this, v11);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v13);
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
      v9 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v9 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v18 = sub_B2C460(Instance);
          sub_B2C400(v18, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v9, SkillLevelList->m_Items[i + 1], 0LL);
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

  if ( (byte_4189FD7 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    byte_4189FD7 = 1;
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
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL);
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
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
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

  if ( (byte_4189FD5 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_4189FD5 = 1;
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
  if ( (byte_4189FDE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantLeaderInfo_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4189FDE = 1;
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
      v18 = sub_B2C460(this);
      sub_B2C400(v18, 0LL);
    }
    v12 = m_Items[v10];
    if ( !v12 )
      goto LABEL_18;
    if ( v12->fields.idx == index )
      break;
    if ( (int)++v10 >= max_length )
      return 0LL;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
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
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  if ( !v17 )
LABEL_18:
    sub_B2C434(this, *(_QWORD *)&index);
  return (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v17,
                                  (int32_t)this,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4189FDD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4189FDD = 1;
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
  v6 = (BalanceConfig_c *)sub_B2C374(int___TypeInfo, (unsigned int)v5->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_26:
    sub_B2C434(v6, v7);
  max_length = commandCode->max_length;
  v10 = (System_Int32_array *)v6;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
LABEL_27:
        v18 = sub_B2C460(v6);
        sub_B2C400(v18, 0LL);
      }
      v12 = commandCode->m_Items[i];
      if ( !v12 )
        goto LABEL_26;
      v6 = BalanceConfig_TypeInfo;
      idx = v12->fields.idx;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v6 = BalanceConfig_TypeInfo;
      }
      if ( idx < v6->static_fields->SvtCommandCardMax )
      {
        v14 = v12->fields.idx;
        v16 = *(_QWORD *)&v12->fields.commandCodeId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v12->fields.commandCodeId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v19.fields.currentCryptoKey = v16;
        *(_QWORD *)&v19.fields.fakeValue = v15;
        v6 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
        if ( !v10 )
          goto LABEL_26;
        if ( (unsigned int)v14 >= v10->max_length )
          goto LABEL_27;
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

  if ( (byte_4189FD1 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_4189FD1 = 1;
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

  if ( (byte_4189FD3 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&OptionManager_TypeInfo, v4);
    byte_4189FD3 = 1;
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

  if ( (byte_4189FC1 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4189FC1 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL) < 1 )
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
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

  if ( (byte_4189FCF & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp);
    byte_4189FCF = 1;
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
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL) >= 1 )
  {
    v13 = this->fields.equipTarget1;
    if ( !v13 )
      sub_B2C434(0LL, v12);
    return EquipTargetInfo__getExpInfo(v13, exp, lateExp, barExp, 0LL);
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
  __int64 v10; // x1
  EquipTargetInfo_o *v11; // x0
  BalanceConfig_c *v12; // x0
  SkillInfo_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4189FBA & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&SkillInfo___TypeInfo, v6);
    byte_4189FBA = 1;
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
  *(_QWORD *)&v20.fields.currentCryptoKey = v9;
  *(_QWORD *)&v20.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL) >= 1 )
  {
    v11 = this->fields.equipTarget1;
    if ( !v11 )
      sub_B2C434(0LL, v10);
    EquipTargetInfo__getSkillInfo(v11, skillInfoList, 0LL);
  }
  else
  {
LABEL_10:
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    v13 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)v12->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v13;
    sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4189FBF & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4189FBF = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL) < 1 )
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v13, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEventUpVal_29337748(
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  bool BaseEventUpVal_29338152; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v27; // w21
  EventUpValInfo_o *v28; // x24
  __int64 v29; // x22
  __int64 v30; // x23
  EquipTargetInfo_o *v31; // x0
  __int64 v32; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4189FC3 & 1) == 0 )
  {
    sub_B2C35C(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4189FC3 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v34.fields.currentCryptoKey = v9;
  *(_QWORD *)&v34.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v34, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v10;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v13);
  npcFlag = this->fields.npcFlag;
  v16 = DispLimitCount;
  v17 = (EventUpValInfo_o *)sub_B2C42C(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v17, setupInfo, v12, limitCount, v16, npcFlag, 0LL);
  *eventUpVallInfo = v17;
  sub_B2C2F8((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL) < 1 )
    return 0;
  BaseEventUpVal_29338152 = ServantLeaderInfo__getBaseEventUpVal_29338152(this, eventUpVallInfo, v24);
  equipTarget1 = this->fields.equipTarget1;
  v27 = BaseEventUpVal_29338152;
  if ( !equipTarget1 )
    return v27;
  v28 = *eventUpVallInfo;
  v30 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v30;
  *(_QWORD *)&v35.fields.fakeValue = v29;
  v31 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v35, 0LL);
  if ( !v28 || (v28->fields.equipSvtId = (int)v31, (v31 = this->fields.equipTarget1) == 0LL) )
    sub_B2C434(v31, v32);
  return (v27 | EquipTargetInfo__getEventUpVal_29555188(v31, eventUpVallInfo, 1, 0LL)) & 1;
}


bool __fastcall ServantLeaderInfo__getEventUpVal_29338792(
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v30; // x25
  __int64 v31; // x23
  __int64 v32; // x24
  EquipTargetInfo_o *v33; // x0
  __int64 v34; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4189FC4 & 1) == 0 )
  {
    sub_B2C35C(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4189FC4 = 1;
  }
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v13;
  *(_QWORD *)&v36.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v36, 0LL);
  limitCount = this->fields.limitCount;
  v16 = v14;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v17);
  npcFlag = this->fields.npcFlag;
  v20 = DispLimitCount;
  v21 = (EventUpValInfo_o *)sub_B2C42C(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v21, setupInfo, v16, limitCount, v20, npcFlag, 0LL);
  *eventUpVallInfo = v21;
  sub_B2C2F8((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_29338152(this, eventUpVallInfo, v28) )
      *isServantEventUpVal = 1;
    equipTarget1 = this->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v30 = *eventUpVallInfo;
      v32 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v37.fields.currentCryptoKey = v32;
      *(_QWORD *)&v37.fields.fakeValue = v31;
      v33 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v37, 0LL);
      if ( !v30 || (v30->fields.equipSvtId = (int)v33, (v33 = this->fields.equipTarget1) == 0LL) )
        sub_B2C434(v33, v34);
      if ( EquipTargetInfo__getEventUpVal_29555188(v33, eventUpVallInfo, 1, 0LL) )
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x24
  __int64 v17; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x23
  WarEntity_o *Entity; // x23
  const MethodInfo *v20; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v22; // x24
  int datalist; // w25
  float v24; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4189FCE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4189FCE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v17;
  *(_QWORD *)&v26.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v26, 0LL);
  if ( !v18 )
    goto LABEL_22;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v18,
             (int32_t)Instance,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v20) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v22 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v22, HIDWORD(Entity[1].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - datalist;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.datalist) - this->fields.exp;
      v24 = (float)*exp / (float)(LODWORD(Instance->fields.datalist) - datalist);
      goto LABEL_21;
    }
LABEL_22:
    sub_B2C434(Instance, v14);
  }
  v24 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_21:
  *barExp = v24;
  return 1;
}


int32_t __fastcall ServantLeaderInfo__getFrameType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantExceedMaster_o *v11; // x20
  int32_t FrameType_30786392; // w20
  ServantLvDetailMaster_o *v13; // x21
  const MethodInfo *v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4189FD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4189FD0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantExceedMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
  if ( !v11
    || (FrameType_30786392 = ServantExceedMaster__GetFrameType_30786392(
                               v11,
                               (int32_t)Instance,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (WebViewManager_o *)ServantLeaderInfo__getRarity(this, v14),
        !v13) )
  {
LABEL_11:
    sub_B2C434(Instance, v7);
  }
  return ServantLvDetailMaster__GetFrameType(v13, (int32_t)Instance, this->fields.lv, FrameType_30786392, 0LL);
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

  if ( (byte_4189FBD & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4189FBD = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v5);
  if ( !this->fields.equipTarget1
    || EquipTargetInfo__getFriendPointUpVal(this->fields.equipTarget1, 0LL) <= BaseFriendPointUpVal )
  {
    return 0;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    sub_B2C434(0LL, v7);
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

  if ( (byte_4189FBC & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4189FBC = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL) < 1 )
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

  if ( (byte_4189FD9 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    byte_4189FD9 = 1;
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
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
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
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  ServantLimitMaster_o *v13; // x20
  const MethodInfo *v14; // x3
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v16; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4189FB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4189FB2 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
  if ( !v13
    || (Entity = ServantLimitMaster__GetEntity(v13, (int32_t)Instance, this->fields.limitCount, v14),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_19:
    sub_B2C434(Instance, v9);
  }
  v16 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0LL);
  lvMax = Entity->fields.lvMax;
  if ( v16 )
    lvMax += v16->fields.addLvMax;
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

  if ( (byte_4189FD8 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, isNpc);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4189FD8 = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
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

  if ( (byte_4189FD6 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4189FD6 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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

  if ( (byte_4189FD2 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4189FD2 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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

  if ( (byte_4189FDA & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, isNpc);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4189FDA = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
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

  if ( (byte_4189FDC & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4189FDC = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x20
  WarEntity_o *Entity; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **longName; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4189FB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4189FB7 = 1;
  }
  p_classPassive = (BattleServantConfConponent_o *)&this->fields.classPassive;
  if ( !this->fields.classPassive )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v22.fields.currentCryptoKey = v11;
    *(_QWORD *)&v22.fields.fakeValue = v10;
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL);
    if ( !v12 )
LABEL_12:
      sub_B2C434(Instance, v8);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v12,
               (int32_t)Instance,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
    {
      longName = (System_Int32_array **)Entity[1].fields.longName;
      p_classPassive->klass = (BattleServantConfConponent_c *)longName;
      sub_B2C2F8(p_classPassive, longName, v14, v15, v16, v17, v18, v19);
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
  __int64 v38; // x1
  __int64 v39; // x22
  __int64 v40; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x22
  unsigned int v49; // w25
  __int64 v50; // x26
  __int64 v51; // x27
  System_Int32_array *v52; // x8
  unsigned __int64 v53; // x28
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

  if ( (byte_4189FBB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, idList);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B2C35C(&string___TypeInfo, v9);
    byte_4189FBB = 1;
  }
  PassiveSkillIdList = ServantLeaderInfo__getPassiveSkillIdList(this, (const MethodInfo *)idList);
  *idList = PassiveSkillIdList;
  sub_B2C2F8(
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
  v24 = (System_String_array *)sub_B2C374(string___TypeInfo, (unsigned int)v23);
  *titleList = v24;
  sub_B2C2F8((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_String_array *)sub_B2C374(string___TypeInfo, (unsigned int)v23);
  *explanationList = v31;
  sub_B2C2F8((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v40 = **(_QWORD **)(v39 + 192);
  if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
    sub_AC505C(v40);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v40 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_40:
    sub_B2C434(MasterData_WarQuestSelectionMaster, v38);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)v23 < 1 )
    goto LABEL_38;
  v48 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v49 = 0;
  v50 = (int)v23;
  v51 = 8LL;
  do
  {
    v52 = *idList;
    if ( !*idList )
      goto LABEL_40;
    v53 = v51 - 8;
    if ( v51 - 8 >= (unsigned __int64)v52->max_length )
      goto LABEL_41;
    v38 = *((unsigned int *)&v52->obj.klass + v51);
    if ( (int)v38 >= 1 )
    {
      if ( !v48 )
        goto LABEL_40;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              v48,
                                                              v38,
                                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
          MasterData_WarQuestSelectionMaster = (DataManager_o *)sub_B2C41C(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  v55->obj.klass->_1.element_class);
          if ( !MasterData_WarQuestSelectionMaster )
          {
LABEL_42:
            v85 = sub_B2C454(MasterData_WarQuestSelectionMaster);
            sub_B2C400(v85, 0LL);
          }
        }
        if ( v49 >= v55->max_length )
          goto LABEL_41;
        v63 = &v55->obj.klass + (int)v49;
        v63[4] = (Il2CppClass *)v62;
        sub_B2C2F8((BattleServantConfConponent_o *)(v63 + 4), v62, v56, v57, v58, v59, v60, v61);
        v64 = *explanationList;
        MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getEffectExplanation(v54, 0, 0LL);
        if ( !v64 )
          goto LABEL_40;
        v71 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (DataManager_o *)sub_B2C41C(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  v64->obj.klass->_1.element_class);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_42;
        }
        if ( v49 >= v64->max_length )
          goto LABEL_41;
        v72 = &v64->obj.klass + (int)v49;
        v72[4] = (Il2CppClass *)v71;
        sub_B2C2F8((BattleServantConfConponent_o *)(v72 + 4), v71, v65, v66, v67, v68, v69, v70);
        if ( v53 != v49 )
        {
          v73 = *idList;
          if ( !*idList )
            goto LABEL_40;
          max_length = v73->max_length;
          if ( v53 >= max_length || v49 >= (unsigned int)max_length )
            goto LABEL_41;
          v73->m_Items[v49 + 1] = *((_DWORD *)&v73->obj.klass + v51);
          v75 = *idList;
          if ( !*idList )
            goto LABEL_40;
          if ( v53 >= v75->max_length )
            goto LABEL_41;
          *((_DWORD *)&v75->obj.klass + v51) = 0;
        }
        ++v49;
      }
      else
      {
        v76 = *idList;
        if ( !*idList )
          goto LABEL_40;
        if ( v53 >= v76->max_length )
        {
LABEL_41:
          v84 = sub_B2C460(MasterData_WarQuestSelectionMaster);
          sub_B2C400(v84, 0LL);
        }
        *((_DWORD *)&v76->obj.klass + v51) = 0;
      }
    }
    v77 = v51 - 7;
    ++v51;
  }
  while ( v77 < v50 );
  if ( !v49 )
  {
LABEL_38:
    *idList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)idList, 0LL, v42, v43, v44, v45, v46, v47);
LABEL_39:
    *titleList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)titleList, 0LL, v17, v18, v19, v20, v21, v22);
    *explanationList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)explanationList, 0LL, v78, v79, v80, v81, v82, v83);
  }
}


int32_t __fastcall ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4189FDB & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_4189FDB = 1;
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

  if ( (byte_4189FC6 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4189FC6 = 1;
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
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
    limitCount = this->fields.limitCount;
    v9 = v7;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
    return QuestRestrictionInfo__IsRestriction_31224308(
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
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  const MethodInfo *v11; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4189FB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4189FB3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v10 || (Instance = ServantLimitMaster__GetEntity(v10, (int32_t)Instance, this->fields.limitCount, v11)) == 0LL )
LABEL_10:
    sub_B2C434(Instance, v6);
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

  if ( (byte_4189FC0 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4189FC0 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v9, 0LL) >= 1
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
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v8; // x0

  if ( (byte_4189FB5 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_4189FB5 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v4->static_fields->SvtSkillListMax);
  if ( !result )
    sub_B2C434(0LL, v6);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillId1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillId2, max_length <= 2) )
  {
    v8 = sub_B2C460(result);
    sub_B2C400(v8, 0LL);
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
  System_Int32_array **v22; // x0
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
  WarEntity_o *Entity; // x0
  SkillEntity_o *v34; // x26
  BalanceConfig_c **v35; // x23
  __int64 v36; // x25
  __int64 v37; // x27
  ServantSkillEntity_o *EntityFromSkillId; // x27
  __int64 v39; // x25
  System_Int32_array **EffectTitle; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **EffectExplanation; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int32_t skillNum; // w8
  BattleServantConfConponent_c *klass; // x26
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  void **v62; // x0
  int32_t *v63; // x20
  int32_t *v64; // x23
  __int64 v65; // x0
  __int64 v66; // x0
  ServantSkillMaster_o *v67; // [xsp+0h] [xbp-70h]
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // [xsp+8h] [xbp-68h]
  BattleServantConfConponent_o *v70; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  v70 = (BattleServantConfConponent_o *)skillInfoList;
  if ( (byte_4189FB9 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_B2C35C(&SkillInfo___TypeInfo, v8);
    sub_B2C35C(&SkillInfo_TypeInfo, v9);
    byte_4189FB9 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AC505C(v11);
  EffectChargeTurn = **(_QWORD **)(v11 + 184);
  if ( !EffectChargeTurn )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)EffectChargeTurn,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AC505C(v15);
  EffectChargeTurn = **(_QWORD **)(v15 + 184);
  if ( !EffectChargeTurn )
LABEL_58:
    sub_B2C434(EffectChargeTurn, skillInfoList);
  v67 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)EffectChargeTurn,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
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
  v22 = (System_Int32_array **)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)v21->static_fields->SvtSkillListMax);
  v70->klass = (BattleServantConfConponent_c *)v22;
  sub_B2C2F8(v70, v22, v23, v24, v25, v26, v27, v28);
  v29 = 0LL;
  v30 = 0;
  v31 = &SkillIdList->m_Items[1];
  v32 = &SkillLevelList->m_Items[1];
  v68 = MasterData_WarQuestSelectionMaster;
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
    skillInfoList = (SkillInfo_array **)(unsigned int)v31[v29];
    if ( (int)skillInfoList >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_58;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int32_t)skillInfoList,
                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        v34 = (SkillEntity_o *)Entity;
        v35 = v19;
        v37 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v71.fields.currentCryptoKey = v37;
        *(_QWORD *)&v71.fields.fakeValue = v36;
        EffectChargeTurn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v71, 0LL);
        if ( v29 >= SkillIdList->max_length )
          goto LABEL_57;
        skillInfoList = (SkillInfo_array **)(unsigned int)EffectChargeTurn;
        EffectChargeTurn = (__int64)v67;
        if ( !v67 )
          goto LABEL_58;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(
                              v67,
                              (int32_t)skillInfoList,
                              (int)v29 + 1,
                              v31[v29],
                              0LL);
        v39 = sub_B2C42C(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v39, 0LL);
        if ( v29 >= SkillIdList->max_length )
        {
LABEL_57:
          v65 = sub_B2C460(EffectChargeTurn);
          sub_B2C400(v65, 0LL);
        }
        if ( !v39 )
          goto LABEL_58;
        *(_DWORD *)(v39 + 16) = v31[v29];
        if ( !SkillLevelList )
          goto LABEL_58;
        if ( v29 >= SkillLevelList->max_length )
          goto LABEL_57;
        *(_DWORD *)(v39 + 20) = v32[v29];
        if ( v29 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectChargeTurn = SkillEntity__getEffectChargeTurn(v34, v32[v29], 0LL);
        *(_DWORD *)(v39 + 24) = EffectChargeTurn;
        if ( v29 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectTitle = (System_Int32_array **)SkillEntity__getEffectTitle(v34, v32[v29], 0LL);
        *(_QWORD *)(v39 + 32) = EffectTitle;
        sub_B2C2F8((BattleServantConfConponent_o *)(v39 + 32), EffectTitle, v41, v42, v43, v44, v45, v46);
        if ( v29 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectExplanation = (System_Int32_array **)SkillEntity__getEffectExplanation(v34, v32[v29], 0LL);
        *(_QWORD *)(v39 + 40) = EffectExplanation;
        sub_B2C2F8((BattleServantConfConponent_o *)(v39 + 40), EffectExplanation, v48, v49, v50, v51, v52, v53);
        if ( EntityFromSkillId )
        {
          EffectChargeTurn = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          *(_DWORD *)(v39 + 48) = EffectChargeTurn;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          skillNum = 0;
          *(_DWORD *)(v39 + 48) = 0;
        }
        *(_DWORD *)(v39 + 52) = skillNum;
        *(_BYTE *)(v39 + 56) = 1;
        klass = v70->klass;
        if ( !v70->klass )
          goto LABEL_58;
        EffectChargeTurn = sub_B2C41C(v39, *((_QWORD *)klass->_1.image + 8));
        if ( !EffectChargeTurn )
        {
          v66 = sub_B2C454(0LL);
          sub_B2C400(v66, 0LL);
        }
        if ( v30 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_57;
        v62 = &klass->_1.image + (int)v30;
        v62[4] = (void *)v39;
        sub_B2C2F8((BattleServantConfConponent_o *)(v62 + 4), (System_Int32_array **)v39, v56, v57, v58, v59, v60, v61);
        v19 = v35;
        MasterData_WarQuestSelectionMaster = v68;
        ++v30;
      }
    }
    ++v29;
  }
  v63 = &SkillIdList->m_Items[v30 + 1];
  v64 = &SkillLevelList->m_Items[v30 + 1];
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
    *v63 = 0;
    if ( !SkillLevelList )
      goto LABEL_58;
    if ( v30 >= SkillLevelList->max_length )
      goto LABEL_57;
    *v64++ = -1;
    EffectChargeTurn = (__int64)*v19;
    ++v30;
    ++v63;
  }
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
  __int64 v8; // x0

  if ( (byte_4189FB6 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_4189FB6 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v4->static_fields->SvtSkillListMax);
  if ( !result )
    sub_B2C434(0LL, v6);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillLv2, max_length <= 2) )
  {
    v8 = sub_B2C460(result);
    sub_B2C400(v8, 0LL);
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
  TreasureDvcInfo_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  TreasureDvcInfo_o *v23; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4189FCB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, tdInfo);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, v7);
    byte_4189FCB = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AC505C(v9);
  v10 = **(DataManager_o ***)(v9 + 184);
  if ( !v10 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v10,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v13;
  *(_QWORD *)&v25.fields.fakeValue = v12;
  v10 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v25, 0LL);
  if ( !v14 )
    goto LABEL_18;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           v14,
                           (int32_t)v10,
                           this->fields.treasureDeviceId,
                           0LL);
  v16 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v16, 0LL);
  *tdInfo = v16;
  sub_B2C2F8((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
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
          v23 = *tdInfo;
          ServantTreasureDvcEntity__getEffectExplanation(
            EntityFromSvtIdDvcId,
            &v23->fields.name,
            &v23->fields.explanation,
            &v23->fields.maxLv,
            &v23->fields.guageCount,
            &v23->fields.cardId,
            &v23->fields.strengthStatus,
            &v23->fields.treasureDeviceNum,
            v23->fields.lv,
            0LL);
          return 1;
        }
      }
    }
LABEL_18:
    sub_B2C434(v10, tdInfo);
  }
  return 0;
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo_29340648(
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

  if ( (byte_4189FCC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, tdLv);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    byte_4189FCC = 1;
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
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v10 = **(_QWORD **)(v9 + 192);
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AC505C(v10);
    MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v10 + 184);
    if ( !MasterData_WarQuestSelectionMaster
      || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
    {
      sub_B2C434(MasterData_WarQuestSelectionMaster, tdLv);
    }
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
               this->fields.treasureDeviceId,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_4189FCD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_4189FCD = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_B2C434(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             this->fields.treasureDeviceId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_4189FC7 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4189FC7 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v9, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_31226468(questRestrictionInfo, v7, 0LL);
}


bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction_29339604(
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

  if ( (byte_4189FC8 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4189FC8 = 1;
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_31226692(questRestrictionInfo, v11, partyItem, num, -1, 0LL);
}


bool __fastcall ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4189FB8 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4189FB8 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v7, 0LL) > 0;
}


bool __fastcall ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_4189FAF & 1) == 0 )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4189FAF = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
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