void __fastcall ServantLeaderInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4353C93 & 1) == 0 )
  {
    sub_B70694(&ServantLeaderInfo_TypeInfo);
    byte_4353C93 = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantLeaderInfo___ctor_28887084(
        ServantLeaderInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v10; // x1
  ServantEntity_o *Entity; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w8
  int32_t MaxDispLimitCount; // w0
  int32_t v15; // w22
  __int64 v16; // x23
  __int64 v17; // x23
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x23
  __int64 v29; // x23
  ServantTreasureDvcEntity_o *UseEntity; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  __int64 v38; // x0

  if ( (byte_4353C57 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C57 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, v12);
  if ( !Instance )
    goto LABEL_40;
  this->fields.hp = *((_DWORD *)Instance + 9);
  v13 = *((_DWORD *)Instance + 11);
  this->fields.adjustAtk = 0;
  this->fields.adjustHp = 0;
  this->fields.atk = v13;
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(this, v10);
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v15 = MaxDispLimitCount;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v17 = **(_QWORD **)(v16 + 192);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_B08394(v17);
  Instance = **(void ***)(v17 + 184);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(this->fields.svtId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  Instance = ServantSkillMaster__getUseEntityList(
               MasterData_WarQuestSelectionMaster,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               v15,
               -1,
               -1LL,
               0LL);
  if ( !Instance )
    goto LABEL_40;
  if ( !*((_DWORD *)Instance + 6) )
    goto LABEL_41;
  v19 = *((_QWORD *)Instance + 4);
  if ( v19 )
    LODWORD(v19) = *(_DWORD *)(v19 + 28);
  this->fields.skillId1 = v19;
  if ( *((_DWORD *)Instance + 6) <= 1u )
    goto LABEL_41;
  v20 = *((_QWORD *)Instance + 5);
  if ( v20 )
    LODWORD(v20) = *(_DWORD *)(v20 + 28);
  this->fields.skillId2 = v20;
  if ( *((_DWORD *)Instance + 6) <= 2u )
  {
LABEL_41:
    v38 = sub_B70798(Instance);
    sub_B70738(v38, 0LL);
  }
  v21 = *((_QWORD *)Instance + 6);
  if ( v21 )
    LODWORD(v21) = *(_DWORD *)(v21 + 28);
  this->fields.skillId3 = v21;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_40;
  if ( !ServantEntity__get_IsServant(Entity, 0LL) )
    goto LABEL_37;
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_B08394(v29);
  Instance = **(void ***)(v29 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL )
  {
LABEL_40:
    sub_B7076C(Instance, v10);
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
                0LL);
  if ( UseEntity )
    this->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
LABEL_37:
  this->fields.equipTarget1 = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipTarget1, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.randomLimitCountTargets = 0LL;
  *(_QWORD *)&this->fields.imageLimitCount = 0LL;
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.updatedAt = 0LL;
  this->fields.portraitLimitCount = 0;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.randomLimitCountTargets, 0LL, v31, v32, v33, v34, v35, v36);
  if ( ServantEntity__get_IsServant(Entity, 0LL) )
    ServantLeaderInfo__SetTransformData(this, 0, v37);
}


void __fastcall ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2
  int32_t v13; // w0
  int32_t iconLimitCount; // w1
  const MethodInfo *v15; // x2
  int32_t v16; // w0
  int32_t dispLimitCount; // w1
  const MethodInfo *v18; // x2
  int32_t v19; // w0
  int32_t commandCardLimitCount; // w1
  const MethodInfo *v21; // x2
  int32_t v22; // w0
  int32_t portraitLimitCount; // w1
  const MethodInfo *v24; // x2
  ServantLeaderInfo_o *v25; // x0
  int32_t v26; // w1
  const MethodInfo *v27; // x2
  ServantLeaderInfo_o *AdjustLimitCount; // x0
  int32_t v29; // w1
  const MethodInfo *v30; // x2
  ServantLeaderInfo_o *v31; // x0
  int32_t v32; // w1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4353C89 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    byte_4353C89 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetSpoilerSetting(0LL) )
  {
    v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v4;
    *(_QWORD *)&v41.fields.fakeValue = v3;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v41, 0LL) >= 1 )
    {
      v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B70764(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v5,
        (const MethodInfo_2FBA5BC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v5;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.limitChangeDic,
        (System_Int32_array **)v5,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      v13 = ServantLeaderInfo__GetLimitChangeDic(this, this->fields.imageLimitCount, v12);
      iconLimitCount = this->fields.iconLimitCount;
      this->fields.imageLimitCount = v13;
      v16 = ServantLeaderInfo__GetLimitChangeDic(this, iconLimitCount, v15);
      dispLimitCount = this->fields.dispLimitCount;
      this->fields.iconLimitCount = v16;
      v19 = ServantLeaderInfo__GetLimitChangeDic(this, dispLimitCount, v18);
      commandCardLimitCount = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = v19;
      v22 = ServantLeaderInfo__GetLimitChangeDic(this, commandCardLimitCount, v21);
      portraitLimitCount = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = v22;
      v25 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetLimitChangeDic(this, portraitLimitCount, v24);
      v26 = this->fields.dispLimitCount;
      this->fields.portraitLimitCount = (int)v25;
      AdjustLimitCount = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(v25, v26, v27);
      v29 = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = (int)AdjustLimitCount;
      v31 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(AdjustLimitCount, v29, v30);
      v32 = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = (int)v31;
      this->fields.portraitLimitCount = ServantLeaderInfo__GetAdjustLimitCount(v31, v32, v33);
      ServantLeaderInfo__SetServantNameBySpoilerProtection(this, v34);
      this->fields.limitChangeDic = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.limitChangeDic, 0LL, v35, v36, v37, v38, v39, v40);
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipTarget1, 0LL, v2, v3, v4, v5, v6, v7);
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantLeaderInfo__GetAdjustLimitCount(
        ServantLeaderInfo_o *this,
        int32_t orgLimitCount,
        const MethodInfo *method)
{
  ServantLeaderInfo_c *v4; // x0

  if ( (byte_4353C8C & 1) == 0 )
  {
    sub_B70694(&ServantLeaderInfo_TypeInfo);
    byte_4353C8C = 1;
  }
  v4 = ServantLeaderInfo_TypeInfo;
  if ( (BYTE3(ServantLeaderInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo);
    v4 = ServantLeaderInfo_TypeInfo;
  }
  if ( orgLimitCount <= 10 && v4->static_fields->LIMIT_COUNT_THIRD_STAGE < orgLimitCount )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      orgLimitCount = v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x25
  __int64 v15; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x24
  const MethodInfo *v18; // x1
  int32_t *Entity; // x0
  int32_t v20; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4353C5B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C5B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v22, 0LL);
  if ( !v16 )
    goto LABEL_16;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v16,
                                (int32_t)Instance,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_16;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
LABEL_14:
    v20 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_15;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (DataManager_o *)ServantLeaderInfo__getRarity(this, v18),
        !v17) )
  {
LABEL_16:
    sub_B7076C(Instance, v12);
  }
  Entity = (int32_t *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v17,
                        (int32_t)Instance,
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_14;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v20 = Entity[8];
  result = 1;
LABEL_15:
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
  ServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v11; // x25
  __int64 v12; // x26
  __int64 EntityListFromSvtId; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantConfConponent_o *v21; // x26
  __int64 v22; // x25
  System_Int32_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Boolean_array *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v58; // x27
  int v59; // w22
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x11
  int max_length; // w8
  __int64 v62; // x9
  __int64 v63; // x10
  AppendPassiveSkillInfo_o **m_Items; // x11
  AppendPassiveSkillInfo_o *v65; // x19
  __int64 v66; // x24
  __int64 v67; // x8
  System_Int32_array *v68; // x9
  System_Int32_array *v69; // x8
  BattleServantConfConponent_c *klass; // x8
  SkillEntity_o *v71; // x28
  System_String_array *v72; // x26
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x20
  Il2CppClass **v80; // x0
  System_String_array *v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x28
  Il2CppClass **v89; // x0
  System_Boolean_array *v90; // x8
  char v91; // w9
  BattleServantConfConponent_c *v92; // x8
  System_String_array *v93; // x19
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x20
  Il2CppClass **v101; // x0
  System_String_array *v102; // x19
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x20
  Il2CppClass **v110; // x0
  System_String_array *v111; // x8
  System_String_array *v112; // x8
  BattleServantConfConponent_o *v113; // x20
  System_String_o *call_openComp; // t1
  System_Int32_array **v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_String_array *v122; // x8
  Il2CppClass **v123; // x28
  System_String_o *v124; // x20
  BattleServantConfConponent_o *v125; // x28
  System_String_o *v126; // t1
  System_String_o *v127; // x0
  System_Int32_array **v128; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  struct AppendPassiveSkillInfo_array *v135; // x8
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
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
  __int64 v160; // x0
  __int64 v161; // x0
  BattleServantConfConponent_o *v162; // [xsp+8h] [xbp-78h]
  __int64 v166; // [xsp+28h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16

  if ( (byte_4353C8D & 1) == 0 )
  {
    sub_B70694(&bool___TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_B70694(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_3380/*"COND_TYPE_TITLE"*/);
    sub_B70694(&StringLiteral_3368/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353C8D = 1;
  }
  v162 = (BattleServantConfConponent_o *)lvList;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v167.fields.currentCryptoKey = v12;
  *(_QWORD *)&v167.fields.fakeValue = v11;
  EntityListFromSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v167, 0LL);
  if ( !Master_WarQuestSelectionMaster
    || (EntityListFromSvtId = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                         Master_WarQuestSelectionMaster,
                                         EntityListFromSvtId,
                                         0LL),
        v21 = v162,
        !EntityListFromSvtId) )
  {
LABEL_84:
    sub_B7076C(EntityListFromSvtId, v14);
  }
  v22 = EntityListFromSvtId;
  v166 = *(_QWORD *)(EntityListFromSvtId + 24);
  if ( v166 || (v135 = this->fields.appendPassiveSkill) != 0LL && *(_QWORD *)&v135->max_length )
  {
    v23 = (System_Int32_array *)sub_B706AC(int___TypeInfo, (unsigned int)v166);
    *idList = v23;
    sub_B70630((BattleServantConfConponent_o *)idList, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
    v30 = (System_String_array *)sub_B706AC(string___TypeInfo, (unsigned int)v166);
    *titleList = v30;
    sub_B70630((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
    v37 = (System_String_array *)sub_B706AC(string___TypeInfo, (unsigned int)v166);
    *explanationList = v37;
    sub_B70630(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    v44 = (System_Boolean_array *)sub_B706AC(bool___TypeInfo, (unsigned int)v166);
    *releaseStateList = v44;
    sub_B70630(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v51 = (System_Int32_array **)sub_B706AC(int___TypeInfo, (unsigned int)v166);
    v162->klass = (BattleServantConfConponent_c *)v51;
    sub_B70630(v162, v51, v52, v53, v54, v55, v56, v57);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EntityListFromSvtId = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v166 >= 1 )
    {
      v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)EntityListFromSvtId;
      v59 = 0;
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
        v65 = 0LL;
LABEL_27:
        if ( (unsigned int)v59 >= *(_DWORD *)(v22 + 24) )
          goto LABEL_85;
        v66 = v59;
        v67 = *(_QWORD *)(v22 + 8LL * v59 + 32);
        if ( !v67 )
          goto LABEL_84;
        v68 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v59 >= v68->max_length )
          goto LABEL_85;
        v68->m_Items[v59 + 1] = *(_DWORD *)(v67 + 28);
        v69 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v59 >= v69->max_length )
          goto LABEL_85;
        if ( !v58 )
          goto LABEL_84;
        EntityListFromSvtId = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         v58,
                                         v69->m_Items[v59 + 1],
                                         (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        klass = v21->klass;
        v71 = (SkillEntity_o *)EntityListFromSvtId;
        if ( v65 )
        {
          if ( !klass )
            goto LABEL_84;
          if ( (unsigned int)v59 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_85;
          *((_DWORD *)&klass->_1.byval_arg.data + v59) = v65->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_84;
          v72 = *titleList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectTitle(
                                           (SkillEntity_o *)EntityListFromSvtId,
                                           v65->fields.skillLv,
                                           0LL);
          if ( !v72 )
            goto LABEL_84;
          v79 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B70754(EntityListFromSvtId, v72->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v59 >= v72->max_length )
            goto LABEL_85;
          v80 = &v72->obj.klass + v59;
          v80[4] = (Il2CppClass *)v79;
          sub_B70630((BattleServantConfConponent_o *)(v80 + 4), v79, v73, v74, v75, v76, v77, v78);
          v81 = *explanationList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectExplanation(v71, v65->fields.skillLv, 0LL);
          if ( !v81 )
            goto LABEL_84;
          v21 = v162;
          v88 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B70754(EntityListFromSvtId, v81->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v59 >= v81->max_length )
            goto LABEL_85;
          v89 = &v81->obj.klass + v59;
          v89[4] = (Il2CppClass *)v88;
          sub_B70630((BattleServantConfConponent_o *)(v89 + 4), v88, v82, v83, v84, v85, v86, v87);
          v90 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v59 >= v90->max_length )
            goto LABEL_85;
          v91 = 1;
        }
        else
        {
          if ( !klass )
            goto LABEL_84;
          if ( (unsigned int)v59 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_85;
          *((_DWORD *)&klass->_1.byval_arg.data + v59) = -1;
          v92 = v21->klass;
          if ( !v21->klass )
            goto LABEL_84;
          if ( (unsigned int)v59 >= LODWORD(v92->_1.namespaze) )
            goto LABEL_85;
          if ( !EntityListFromSvtId )
            goto LABEL_84;
          v93 = *titleList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectTitle(
                                           (SkillEntity_o *)EntityListFromSvtId,
                                           *((_DWORD *)&v92->_1.byval_arg.data + v59),
                                           0LL);
          if ( !v93 )
            goto LABEL_84;
          v100 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B70754(EntityListFromSvtId, v93->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
            {
LABEL_86:
              v161 = sub_B7078C(EntityListFromSvtId);
              sub_B70738(v161, 0LL);
            }
          }
          if ( v59 >= v93->max_length )
            goto LABEL_85;
          v101 = &v93->obj.klass + v59;
          v101[4] = (Il2CppClass *)v100;
          sub_B70630((BattleServantConfConponent_o *)(v101 + 4), v100, v94, v95, v96, v97, v98, v99);
          v102 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          EntityListFromSvtId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v102 )
            goto LABEL_84;
          v109 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B70754(EntityListFromSvtId, v102->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v59 >= v102->max_length )
            goto LABEL_85;
          v110 = &v102->obj.klass + v59;
          v110[4] = (Il2CppClass *)v109;
          sub_B70630((BattleServantConfConponent_o *)(v110 + 4), v109, v103, v104, v105, v106, v107, v108);
          v111 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          if ( v59 >= v111->max_length )
            goto LABEL_85;
          EntityListFromSvtId = System_String__op_Inequality(
                                  v111->m_Items[v59],
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v112 = *explanationList;
            if ( !*explanationList )
              goto LABEL_84;
            if ( v59 >= v112->max_length )
              goto LABEL_85;
            v113 = (BattleServantConfConponent_o *)(&v112->obj.klass + v59);
            call_openComp = (System_String_o *)v113->fields.call_openComp;
            v113 = (BattleServantConfConponent_o *)((char *)v113 + 32);
            v115 = (System_Int32_array **)System_String__Concat_44758168(
                                            call_openComp,
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v113->klass = (BattleServantConfConponent_c *)v115;
            sub_B70630(v113, v115, v116, v117, v118, v119, v120, v121);
          }
          v122 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          if ( v59 >= v122->max_length )
            goto LABEL_85;
          v123 = &v122->obj.klass + v59;
          v126 = (System_String_o *)v123[4];
          v125 = (BattleServantConfConponent_o *)(v123 + 4);
          v124 = v126;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v127 = LocalizationManager__Get((System_String_o *)StringLiteral_3368/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v128 = (System_Int32_array **)System_String__Concat_44758168(v124, v127, 0LL);
          v125->klass = (BattleServantConfConponent_c *)v128;
          sub_B70630(v125, v128, v129, v130, v131, v132, v133, v134);
          v90 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v59 >= v90->max_length )
            goto LABEL_85;
          v91 = 0;
        }
        ++v59;
        v90->m_Items[v66 + 4] = v91;
        if ( v59 >= (int)v166 )
          return;
      }
      v62 = 0LL;
      v63 = v22 + 8LL * v59 + 32;
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v62 < max_length )
      {
        v65 = m_Items[v62];
        if ( !v65 )
          goto LABEL_84;
        if ( (unsigned int)v59 >= *(_DWORD *)(v22 + 24) )
          break;
        if ( !*(_QWORD *)v63 )
          goto LABEL_84;
        if ( v65->fields.skillId == *(_DWORD *)(*(_QWORD *)v63 + 28LL) )
          goto LABEL_27;
        if ( (int)++v62 >= max_length )
          goto LABEL_26;
      }
LABEL_85:
      v160 = sub_B70798(EntityListFromSvtId);
      sub_B70738(v160, 0LL);
    }
  }
  else
  {
    *idList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)idList, 0LL, v15, v16, v17, v18, v19, v20);
    *titleList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)titleList, 0LL, v136, v137, v138, v139, v140, v141);
    *explanationList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)explanationList, 0LL, v142, v143, v144, v145, v146, v147);
    *releaseStateList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)releaseStateList, 0LL, v148, v149, v150, v151, v152, v153);
    v162->klass = 0LL;
    sub_B70630(v162, 0LL, v154, v155, v156, v157, v158, v159);
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
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x8
  __int64 v13; // x25
  System_Int32_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Boolean_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v50; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x26
  __int64 v52; // x20
  __int64 v53; // x22
  struct AppendPassiveSkillInfo_array *v54; // x8
  __int64 v55; // x8
  System_Int32_array *v56; // x9
  System_Int32_array *v57; // x8
  struct AppendPassiveSkillInfo_array *v58; // x8
  __int64 v59; // x8
  int v60; // w9
  System_Int32_array *v61; // x8
  SkillEntity_o *v62; // x27
  struct AppendPassiveSkillInfo_array *v63; // x8
  __int64 v64; // x8
  System_String_array *v65; // x25
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x28
  struct AppendPassiveSkillInfo_array *v73; // x8
  int v74; // w28
  __int64 v75; // x8
  System_String_array *v76; // x25
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x27
  System_Boolean_array *v84; // x8
  char v85; // w9
  System_Int32_array *v86; // x8
  System_String_array *v87; // x25
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x27
  System_String_array *v95; // x28
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x27
  System_String_array *v103; // x8
  System_String_array *v104; // x8
  BattleServantConfConponent_o *v105; // x27
  System_Int32_array **v106; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array *v113; // x28
  System_String_o *v114; // x27
  System_String_o *v115; // x0
  System_Int32_array **v116; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  char *v123; // x8
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  __int64 v148; // x0
  __int64 v149; // x0
  int v150; // [xsp+8h] [xbp-68h]

  if ( (byte_4353C8E & 1) == 0 )
  {
    sub_B70694(&bool___TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_3380/*"COND_TYPE_TITLE"*/);
    sub_B70694(&StringLiteral_3368/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353C8E = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (v13 = *(_QWORD *)&appendPassiveSkill->max_length) != 0 )
  {
    v14 = (System_Int32_array *)sub_B706AC(int___TypeInfo, (unsigned int)v13);
    *idList = v14;
    sub_B70630((BattleServantConfConponent_o *)idList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    v21 = (System_String_array *)sub_B706AC(string___TypeInfo, (unsigned int)v13);
    *titleList = v21;
    sub_B70630((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
    v28 = (System_String_array *)sub_B706AC(string___TypeInfo, (unsigned int)v13);
    *explanationList = v28;
    sub_B70630(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v35 = (System_Boolean_array *)sub_B706AC(bool___TypeInfo, (unsigned int)v13);
    *releaseStateList = v35;
    sub_B70630(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    v42 = (System_Int32_array *)sub_B706AC(int___TypeInfo, (unsigned int)v13);
    *lvList = v42;
    sub_B70630((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v13 >= 1 )
    {
      v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v52 = 0LL;
      v53 = 32LL;
      v150 = v13;
      while ( 1 )
      {
        v54 = this->fields.appendPassiveSkill;
        if ( !v54 )
          break;
        if ( (unsigned int)v52 >= v54->max_length )
          goto LABEL_76;
        v55 = *(__int64 *)((char *)&v54->obj.klass + v53);
        if ( !v55 )
          break;
        v56 = *idList;
        if ( !*idList )
          break;
        if ( (unsigned int)v52 >= v56->max_length )
          goto LABEL_76;
        v56->m_Items[v52 + 1] = *(_DWORD *)(v55 + 16);
        v57 = *idList;
        if ( !*idList )
          break;
        if ( (unsigned int)v52 >= v57->max_length )
          goto LABEL_76;
        if ( !v51 )
          break;
        Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v51,
                                                    v57->m_Items[v52 + 1],
                                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v58 = this->fields.appendPassiveSkill;
        if ( !v58 )
          break;
        if ( (unsigned int)v52 >= v58->max_length )
          goto LABEL_76;
        v59 = *(__int64 *)((char *)&v58->obj.klass + v53);
        if ( !v59 )
          break;
        v60 = *(_DWORD *)(v59 + 20);
        v61 = *lvList;
        v62 = (SkillEntity_o *)Master_WarQuestSelectionMaster;
        if ( v60 < 1 )
        {
          if ( !v61 )
            break;
          if ( (unsigned int)v52 >= v61->max_length )
            goto LABEL_76;
          v61->m_Items[v52 + 1] = -1;
          v86 = *lvList;
          if ( !*lvList )
            break;
          if ( (unsigned int)v52 >= v86->max_length )
            goto LABEL_76;
          if ( !Master_WarQuestSelectionMaster )
            break;
          v87 = *titleList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                      (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                      v86->m_Items[v52 + 1],
                                                      0LL);
          if ( !v87 )
            break;
          v94 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B70754(
                                               Master_WarQuestSelectionMaster,
                                               v87->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
            {
LABEL_77:
              v149 = sub_B7078C(Master_WarQuestSelectionMaster);
              sub_B70738(v149, 0LL);
            }
          }
          if ( (unsigned int)v52 >= v87->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v87->obj.klass + v53) = (Il2CppClass *)v94;
          sub_B70630((BattleServantConfConponent_o *)((char *)v87 + v53), v94, v88, v89, v90, v91, v92, v93);
          v95 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v95 )
            break;
          v102 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B70754(
                                               Master_WarQuestSelectionMaster,
                                               v95->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v52 >= v95->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v95->obj.klass + v53) = (Il2CppClass *)v102;
          sub_B70630((BattleServantConfConponent_o *)((char *)v95 + v53), v102, v96, v97, v98, v99, v100, v101);
          v103 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v52 >= v103->max_length )
            goto LABEL_76;
          Master_WarQuestSelectionMaster = System_String__op_Inequality(
                                             *(System_String_o **)((char *)&v103->obj.klass + v53),
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL);
          if ( (Master_WarQuestSelectionMaster & 1) != 0 )
          {
            v104 = *explanationList;
            if ( !*explanationList )
              break;
            if ( (unsigned int)v52 >= v104->max_length )
              goto LABEL_76;
            v105 = (BattleServantConfConponent_o *)((char *)v104 + v53);
            v106 = (System_Int32_array **)System_String__Concat_44758168(
                                            *(System_String_o **)((char *)&v104->obj.klass + v53),
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v105->klass = (BattleServantConfConponent_c *)v106;
            sub_B70630(v105, v106, v107, v108, v109, v110, v111, v112);
          }
          v113 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v52 >= v113->max_length )
          {
LABEL_76:
            v148 = sub_B70798(Master_WarQuestSelectionMaster);
            sub_B70738(v148, 0LL);
          }
          v114 = *(System_String_o **)((char *)&v113->obj.klass + v53);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v115 = LocalizationManager__Get((System_String_o *)StringLiteral_3368/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v116 = (System_Int32_array **)System_String__Concat_44758168(v114, v115, 0LL);
          *(Il2CppClass **)((char *)&v113->obj.klass + v53) = (Il2CppClass *)v116;
          sub_B70630((BattleServantConfConponent_o *)((char *)v113 + v53), v116, v117, v118, v119, v120, v121, v122);
          v84 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          v74 = v150;
          if ( (unsigned int)v52 >= v84->max_length )
            goto LABEL_76;
          v85 = 0;
        }
        else
        {
          if ( !v61 )
            break;
          if ( (unsigned int)v52 >= v61->max_length )
            goto LABEL_76;
          v61->m_Items[v52 + 1] = v60;
          v63 = this->fields.appendPassiveSkill;
          if ( !v63 )
            break;
          if ( (unsigned int)v52 >= v63->max_length )
            goto LABEL_76;
          v64 = *(__int64 *)((char *)&v63->obj.klass + v53);
          if ( !v64 )
            break;
          if ( !Master_WarQuestSelectionMaster )
            break;
          v65 = *titleList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                      (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                      *(_DWORD *)(v64 + 20),
                                                      0LL);
          if ( !v65 )
            break;
          v72 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B70754(
                                               Master_WarQuestSelectionMaster,
                                               v65->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v52 >= v65->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v65->obj.klass + v53) = (Il2CppClass *)v72;
          sub_B70630((BattleServantConfConponent_o *)((char *)v65 + v53), v72, v66, v67, v68, v69, v70, v71);
          v73 = this->fields.appendPassiveSkill;
          if ( !v73 )
            break;
          v74 = v150;
          if ( (unsigned int)v52 >= v73->max_length )
            goto LABEL_76;
          v75 = *(__int64 *)((char *)&v73->obj.klass + v53);
          if ( !v75 )
            break;
          v76 = *explanationList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectExplanation(v62, *(_DWORD *)(v75 + 20), 0LL);
          if ( !v76 )
            break;
          v83 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B70754(
                                               Master_WarQuestSelectionMaster,
                                               v76->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v52 >= v76->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v76->obj.klass + v53) = (Il2CppClass *)v83;
          sub_B70630((BattleServantConfConponent_o *)((char *)v76 + v53), v83, v77, v78, v79, v80, v81, v82);
          v84 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( (unsigned int)v52 >= v84->max_length )
            goto LABEL_76;
          v85 = 1;
        }
        v123 = (char *)v84 + v52++;
        v53 += 8LL;
        v123[32] = v85;
        if ( (int)v52 >= v74 )
          return;
      }
      sub_B7076C(Master_WarQuestSelectionMaster, v50);
    }
  }
  else
  {
    *idList = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)idList,
      0LL,
      titleList,
      explanationList,
      releaseStateList,
      lvList,
      (System_Int32_array *)method,
      v7);
    *titleList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)titleList, 0LL, v124, v125, v126, v127, v128, v129);
    *explanationList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)explanationList, 0LL, v130, v131, v132, v133, v134, v135);
    *releaseStateList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)releaseStateList, 0LL, v136, v137, v138, v139, v140, v141);
    *lvList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)lvList, 0LL, v142, v143, v144, v145, v146, v147);
  }
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo_28911308(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x20
  SkillInfo_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  __int64 v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  unsigned __int64 v34; // x25
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  SkillInfo_array *v43; // x26
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x8
  __int64 v51; // x0
  __int64 v52; // x0
  System_Int32_array *lvList; // [xsp+8h] [xbp-68h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4353C8F & 1) == 0 )
  {
    sub_B70694(&SkillInfo___TypeInfo);
    sub_B70694(&SkillInfo_TypeInfo);
    byte_4353C8F = 1;
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
  if ( idList && (v14 = *(_QWORD *)&idList->max_length) != 0 )
  {
    v15 = (SkillInfo_array *)sub_B706AC(SkillInfo___TypeInfo, (unsigned int)v14);
    *skillInfoList = v15;
    sub_B70630((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
    if ( (int)v14 >= 1 )
    {
      v22 = (int)v14;
      v23 = 32LL;
      v24 = 8LL;
      do
      {
        v25 = sub_B70764(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v25, 0LL);
        if ( !v25 )
          goto LABEL_26;
        *(_DWORD *)(v25 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v34 = v24 - 8;
        if ( v24 - 8 >= (unsigned __int64)idList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v25 + 16) = *((_DWORD *)&idList->obj.klass + v24);
        if ( !lvList )
          goto LABEL_26;
        if ( v34 >= lvList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v25 + 20) = *((_DWORD *)&lvList->obj.klass + v24);
        if ( !titleList )
          goto LABEL_26;
        if ( v34 >= titleList->max_length )
          goto LABEL_27;
        v35 = *(System_Int32_array ***)((char *)&titleList->obj.klass + v23);
        *(_QWORD *)(v25 + 32) = v35;
        sub_B70630((BattleServantConfConponent_o *)(v25 + 32), v35, v28, v29, v30, v31, v32, v33);
        if ( !explanationList )
          goto LABEL_26;
        if ( v34 >= explanationList->max_length )
          goto LABEL_27;
        v42 = *(System_Int32_array ***)((char *)&explanationList->obj.klass + v23);
        *(_QWORD *)(v25 + 40) = v42;
        sub_B70630((BattleServantConfConponent_o *)(v25 + 40), v42, v36, v37, v38, v39, v40, v41);
        v43 = *skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_B7076C(v26, v27);
        v26 = sub_B70754(v25, v43->obj.klass->_1.element_class);
        if ( !v26 )
        {
          v52 = sub_B7078C(0LL);
          sub_B70738(v52, 0LL);
        }
        if ( v34 >= v43->max_length )
        {
LABEL_27:
          v51 = sub_B70798(v26);
          sub_B70738(v51, 0LL);
        }
        *(Il2CppClass **)((char *)&v43->obj.klass + v23) = (Il2CppClass *)v25;
        sub_B70630(
          (BattleServantConfConponent_o *)((char *)v43 + v23),
          (System_Int32_array **)v25,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
        v50 = v24 - 7;
        ++v24;
        v23 += 8LL;
      }
      while ( v50 < v22 );
    }
  }
  else
  {
    *skillInfoList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)skillInfoList, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4353C7E & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&ServantLeaderInfo_TypeInfo);
    byte_4353C7E = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( LimitCountWithRandom > 10 || !LimitCountWithRandom || NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
    return LimitCountWithRandom;
  limitCount = this->fields.limitCount;
  if ( !limitCount )
    return 0;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( limitCount == v6->static_fields->ServantLimitMax )
  {
    v7 = ServantLeaderInfo_TypeInfo;
    if ( (BYTE3(ServantLeaderInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo);
      v7 = ServantLeaderInfo_TypeInfo;
    }
    if ( LimitCountWithRandom == v7->static_fields->LIMIT_COUNT_THIRD_STAGE )
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
  v8 = this->fields.limitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetLimitCountByDispLimit(LimitCountWithRandom - 1, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__GetLimitChangeDic(
        ServantLeaderInfo_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  DataManager_o *limitChangeDic; // x0
  const MethodInfo *v6; // x4
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4353C8A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C8A = 1;
  }
  value = 0;
  limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
          limit,
          &value,
          (const MethodInfo_2FBCD70 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    limitChangeDic = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( limitChangeDic )
    {
      limitChangeDic = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          limitChangeDic,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( limitChangeDic )
      {
        value = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                  (ServantLimitSpoilerProtectionMaster_o *)limitChangeDic,
                  this->fields.svtId,
                  limit,
                  v6);
        limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
        if ( limitChangeDic )
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
            limit,
            value,
            (const MethodInfo_2FBB160 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_B7076C(limitChangeDic, *(_QWORD *)&limit);
  }
  return value;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__GetLimitCountWithRandom(
        ServantLeaderInfo_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t ChoiceLimitCount_22287576; // w0
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v7; // x0

  if ( (byte_4353C56 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_4353C56 = 1;
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
  ChoiceLimitCount_22287576 = RandomLimitCountManager__GetChoiceLimitCount_22287576(this, 0LL);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_22287576;
  if ( ((1 << kind) & 0x16) == 0 )
    return imageLimitCount;
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_4353C5F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C5F = 1;
  }
  if ( !classPassive )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
    {
      sub_B7076C(Instance, v7);
    }
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               dispSvtId,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
      return (System_Int32_array *)Entity[1].fields.longName;
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x23
  System_String_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x22
  __int64 v26; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x22
  unsigned __int64 v29; // x26
  unsigned int v30; // w25
  signed __int64 v31; // x27
  int32_t *v32; // x28
  SkillEntity_o *v33; // x23
  System_String_array *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x24
  Il2CppClass **v42; // x0
  System_String_array *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x23
  Il2CppClass **v51; // x0
  unsigned __int64 max_length; // x8
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x0
  __int64 v60; // x0

  if ( (byte_4353C64 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&string___TypeInfo);
    byte_4353C64 = 1;
  }
  if ( !idList )
    goto LABEL_34;
  v9 = *(_QWORD *)&idList->max_length;
  if ( !v9 )
    goto LABEL_34;
  v10 = (System_String_array *)sub_B706AC(string___TypeInfo, (unsigned int)v9);
  *titleList = v10;
  sub_B70630((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_String_array *)sub_B706AC(string___TypeInfo, (unsigned int)v9);
  *explanationList = v17;
  sub_B70630((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v26 = **(_QWORD **)(v25 + 192);
  if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
    sub_B08394(v26);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v26 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_36:
    sub_B7076C(MasterData_WarQuestSelectionMaster, v24);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)v9 < 1 )
    goto LABEL_34;
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v29 = 0LL;
  v30 = 0;
  v31 = (int)v9;
  v32 = &idList->m_Items[1];
  do
  {
    if ( v29 >= idList->max_length )
    {
LABEL_35:
      v59 = sub_B70798(MasterData_WarQuestSelectionMaster);
      sub_B70738(v59, 0LL);
    }
    v24 = (unsigned int)v32[v29];
    if ( (int)v24 >= 1 )
    {
      if ( !v28 )
        goto LABEL_36;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              v28,
                                                              v24,
                                                              (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v33 = (SkillEntity_o *)MasterData_WarQuestSelectionMaster;
        v34 = *titleList;
        MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getEffectTitle(
                                                                (SkillEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                0,
                                                                0LL);
        if ( !v34 )
          goto LABEL_36;
        v41 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (DataManager_o *)sub_B70754(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  v34->obj.klass->_1.element_class);
          if ( !MasterData_WarQuestSelectionMaster )
          {
LABEL_37:
            v60 = sub_B7078C(MasterData_WarQuestSelectionMaster);
            sub_B70738(v60, 0LL);
          }
        }
        if ( v30 >= v34->max_length )
          goto LABEL_35;
        v42 = &v34->obj.klass + (int)v30;
        v42[4] = (Il2CppClass *)v41;
        sub_B70630((BattleServantConfConponent_o *)(v42 + 4), v41, v35, v36, v37, v38, v39, v40);
        v43 = *explanationList;
        MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getEffectExplanation(v33, 0, 0LL);
        if ( !v43 )
          goto LABEL_36;
        v50 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (DataManager_o *)sub_B70754(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  v43->obj.klass->_1.element_class);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_37;
        }
        if ( v30 >= v43->max_length )
          goto LABEL_35;
        v51 = &v43->obj.klass + (int)v30;
        v51[4] = (Il2CppClass *)v50;
        sub_B70630((BattleServantConfConponent_o *)(v51 + 4), v50, v44, v45, v46, v47, v48, v49);
        if ( v29 != v30 )
        {
          max_length = idList->max_length;
          if ( v29 >= max_length )
            goto LABEL_35;
          if ( v30 >= (unsigned int)max_length )
            goto LABEL_35;
          idList->m_Items[v30 + 1] = v32[v29];
          if ( v29 >= idList->max_length )
            goto LABEL_35;
          v32[v29] = 0;
        }
        ++v30;
      }
      else
      {
        if ( v29 >= idList->max_length )
          goto LABEL_35;
        v32[v29] = 0;
      }
    }
    ++v29;
  }
  while ( (__int64)v29 < v31 );
  if ( !v30 )
  {
LABEL_34:
    *titleList = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)titleList,
      0LL,
      explanationList,
      (System_String_array **)idList,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    *explanationList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)explanationList, 0LL, v53, v54, v55, v56, v57, v58);
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
  __int64 v12; // x0

  if ( (byte_4353C5C & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int___TypeInfo);
    byte_4353C5C = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
  if ( !result )
    sub_B7076C(0LL, v10);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = id1, max_length == 1) || (result->m_Items[2] = id2, max_length <= 2) )
  {
    v12 = sub_B70798(result);
    sub_B70738(v12, 0LL);
  }
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
  __int64 v7; // x23
  __int64 v8; // x23
  __int64 Entity; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v11; // x24
  __int64 v12; // x24
  ServantSkillMaster_o *v13; // x27
  const MethodInfo *v14; // x1
  System_Int32_array *SkillLevelList; // x22
  BalanceConfig_c *v16; // x8
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  unsigned __int64 v24; // x21
  il2cpp_array_size_t v25; // w20
  int32_t *v26; // x24
  int32_t v27; // w3
  SkillEntity_o *v28; // x26
  int32_t *v29; // x28
  ServantSkillMaster_o *v30; // x24
  ServantSkillEntity_o *EntityFromSkillId; // x27
  __int64 v32; // x25
  System_Int32_array **EffectTitle; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **EffectExplanation; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int32_t skillNum; // w8
  BattleServantConfConponent_c *klass; // x26
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  void **v55; // x0
  int32_t *v56; // x21
  int32_t *v57; // x23
  __int64 v58; // x0
  __int64 v59; // x0
  int32_t *v60; // [xsp+0h] [xbp-70h]
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // [xsp+8h] [xbp-68h]
  BattleServantConfConponent_o *v63; // [xsp+18h] [xbp-58h]

  v63 = (BattleServantConfConponent_o *)skillInfoList;
  if ( (byte_4353C62 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&SkillInfo___TypeInfo);
    sub_B70694(&SkillInfo_TypeInfo);
    byte_4353C62 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_B08394(v8);
  Entity = **(_QWORD **)(v8 + 184);
  if ( !Entity )
    goto LABEL_55;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Entity,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_B08394(v12);
  Entity = **(_QWORD **)(v12 + 184);
  if ( !Entity )
LABEL_55:
    sub_B7076C(Entity, skillInfoList);
  v13 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Entity,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v14);
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (System_Int32_array **)sub_B706AC(SkillInfo___TypeInfo, (unsigned int)v16->static_fields->SvtSkillListMax);
  v63->klass = (BattleServantConfConponent_c *)v17;
  sub_B70630(v63, v17, v18, v19, v20, v21, v22, v23);
  v24 = 0LL;
  v25 = 0;
  v26 = &idList->m_Items[1];
  v60 = &SkillLevelList->m_Items[1];
  v61 = MasterData_WarQuestSelectionMaster;
  while ( 1 )
  {
    Entity = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Entity = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v24 >= *(int *)(*(_QWORD *)(Entity + 184) + 32LL) )
      break;
    if ( !idList )
      goto LABEL_55;
    if ( v24 >= idList->max_length )
    {
LABEL_54:
      v58 = sub_B70798(Entity);
      sub_B70738(v58, 0LL);
    }
    skillInfoList = (SkillInfo_array **)(unsigned int)v26[v24];
    if ( (int)skillInfoList >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_55;
      Entity = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          MasterData_WarQuestSelectionMaster,
                          (int32_t)skillInfoList,
                          (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( v24 >= idList->max_length )
          goto LABEL_54;
        if ( !v13 )
          goto LABEL_55;
        v27 = v26[v24];
        v28 = (SkillEntity_o *)Entity;
        v29 = v26;
        v30 = v13;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v13, dispSvtId, (int)v24 + 1, v27, 0LL);
        v32 = sub_B70764(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v32, 0LL);
        if ( v24 >= idList->max_length )
          goto LABEL_54;
        if ( !v32 )
          goto LABEL_55;
        *(_DWORD *)(v32 + 16) = v29[v24];
        if ( !SkillLevelList )
          goto LABEL_55;
        if ( v24 >= SkillLevelList->max_length )
          goto LABEL_54;
        *(_DWORD *)(v32 + 20) = v60[v24];
        if ( v24 >= SkillLevelList->max_length )
          goto LABEL_54;
        Entity = SkillEntity__getEffectChargeTurn(v28, v60[v24], 0LL);
        *(_DWORD *)(v32 + 24) = Entity;
        if ( v24 >= SkillLevelList->max_length )
          goto LABEL_54;
        EffectTitle = (System_Int32_array **)SkillEntity__getEffectTitle(v28, v60[v24], 0LL);
        *(_QWORD *)(v32 + 32) = EffectTitle;
        sub_B70630((BattleServantConfConponent_o *)(v32 + 32), EffectTitle, v34, v35, v36, v37, v38, v39);
        if ( v24 >= SkillLevelList->max_length )
          goto LABEL_54;
        EffectExplanation = (System_Int32_array **)SkillEntity__getEffectExplanation(v28, v60[v24], 0LL);
        *(_QWORD *)(v32 + 40) = EffectExplanation;
        sub_B70630((BattleServantConfConponent_o *)(v32 + 40), EffectExplanation, v41, v42, v43, v44, v45, v46);
        if ( EntityFromSkillId )
        {
          Entity = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          *(_DWORD *)(v32 + 48) = Entity;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          skillNum = 0;
          *(_DWORD *)(v32 + 48) = 0;
        }
        *(_DWORD *)(v32 + 52) = skillNum;
        *(_BYTE *)(v32 + 56) = 1;
        klass = v63->klass;
        if ( !v63->klass )
          goto LABEL_55;
        Entity = sub_B70754(v32, *((_QWORD *)klass->_1.image + 8));
        if ( !Entity )
        {
          v59 = sub_B7078C(0LL);
          sub_B70738(v59, 0LL);
        }
        if ( v25 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_54;
        v55 = &klass->_1.image + (int)v25;
        v55[4] = (void *)v32;
        sub_B70630((BattleServantConfConponent_o *)(v55 + 4), (System_Int32_array **)v32, v49, v50, v51, v52, v53, v54);
        MasterData_WarQuestSelectionMaster = v61;
        ++v25;
        v13 = v30;
        v26 = v29;
      }
    }
    ++v24;
  }
  v56 = &idList->m_Items[v25 + 1];
  v57 = &SkillLevelList->m_Items[v25 + 1];
  while ( 1 )
  {
    if ( (*(_BYTE *)(Entity + 307) & 4) != 0 && !*(_DWORD *)(Entity + 224) )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v25 >= *(_DWORD *)(*(_QWORD *)(Entity + 184) + 32LL) )
      break;
    if ( !idList )
      goto LABEL_55;
    if ( v25 >= idList->max_length )
      goto LABEL_54;
    *v56 = 0;
    if ( !SkillLevelList )
      goto LABEL_55;
    if ( v25 >= SkillLevelList->max_length )
      goto LABEL_54;
    *v57++ = -1;
    Entity = (__int64)BalanceConfig_TypeInfo;
    ++v25;
    ++v56;
  }
}


int32_t __fastcall ServantLeaderInfo__GetTimesToRestart(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v7; // x1
  UserEventDataLostEntity_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x19
  __int64 v13; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4353C91 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C91 = 1;
  }
  entity = 0LL;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v8 = entity;
      v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v16.fields.currentCryptoKey = v10;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v16, 0LL);
      if ( !v8 )
        goto LABEL_24;
      if ( UserEventDataLostEntity__IsRestart(v8, UserId, 0LL) )
      {
        v11 = entity;
        v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v17.fields.currentCryptoKey = v13;
        *(_QWORD *)&v17.fields.fakeValue = v12;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL);
        if ( v11 )
          return UserEventDataLostEntity__GetTimesToRestart(v11, UserId, 0LL);
LABEL_24:
        sub_B7076C(UserId, v7);
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
  BattleServantConfConponent_o *p_classPassive; // x20
  System_Int32_array *classPassive; // t1
  System_Int32_array **PassiveSkillIdList; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  struct AfterTransformSvtInfo_o *v17; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( !afterTransformSvtInfo )
    return ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, 0LL, v3);
  classPassive = afterTransformSvtInfo->fields.classPassive;
  p_classPassive = (BattleServantConfConponent_o *)&afterTransformSvtInfo->fields.classPassive;
  PassiveSkillIdList = (System_Int32_array **)ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, classPassive, v3);
  p_classPassive->klass = (BattleServantConfConponent_c *)PassiveSkillIdList;
  sub_B70630(p_classPassive, PassiveSkillIdList, v9, v10, v11, v12, v13, v14);
  v17 = this->fields.afterTransformSvtInfo;
  if ( !v17 )
    sub_B7076C(v15, v16);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ServantLeaderInfo_o *v16; // x0
  const MethodInfo *v17; // x4

  TransformedPassiveSkillIdList = ServantLeaderInfo__GetTransformedPassiveSkillIdList(
                                    this,
                                    svtId,
                                    (const MethodInfo *)titleList);
  *idList = TransformedPassiveSkillIdList;
  sub_B70630(
    (BattleServantConfConponent_o *)idList,
    (System_Int32_array **)TransformedPassiveSkillIdList,
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
  __int64 v9; // x23
  __int64 v10; // x23
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  ServantTreasureDvcEntity_o *EntityFromSvtIdDvcId; // x22
  TreasureDvcInfo_o *v13; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  TreasureDvcInfo_o *v20; // x8

  if ( (byte_4353C75 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&TreasureDvcInfo_TypeInfo);
    byte_4353C75 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_B08394(v10);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v10 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster,
                           dispSvtId,
                           treasureDeviceId,
                           0LL);
  v13 = (TreasureDvcInfo_o *)sub_B70764(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v13, 0LL);
  *tdInfo = v13;
  sub_B70630((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
  if ( EntityFromSvtIdDvcId )
  {
    if ( *tdInfo )
    {
      (*tdInfo)->fields.id = treasureDeviceId;
      if ( *tdInfo )
      {
        (*tdInfo)->fields.lv = this->fields.treasureDeviceLv;
        if ( *tdInfo )
        {
          v20 = *tdInfo;
          ServantTreasureDvcEntity__getEffectExplanation(
            EntityFromSvtIdDvcId,
            &v20->fields.name,
            &v20->fields.explanation,
            &v20->fields.maxLv,
            &v20->fields.guageCount,
            &v20->fields.cardId,
            &v20->fields.strengthStatus,
            &v20->fields.treasureDeviceNum,
            v20->fields.lv,
            0LL);
          return 1;
        }
      }
    }
LABEL_15:
    sub_B7076C(MasterData_WarQuestSelectionMaster, tdInfo);
  }
  return 0;
}


bool __fastcall ServantLeaderInfo__IsDataLost(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v7; // x1
  UserEventDataLostEntity_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x19
  __int64 v13; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4353C90 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C90 = 1;
  }
  entity = 0LL;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
  v8 = entity;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v16, 0LL);
  if ( !v8 )
    goto LABEL_25;
  if ( UserEventDataLostEntity__IsRestart(v8, UserId, 0LL) )
    return 0;
  v11 = entity;
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL);
  if ( !v11 )
LABEL_25:
    sub_B7076C(UserId, v7);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4353C92 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C92 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v13, 0LL);
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

  if ( (byte_4353C72 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C72 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v13, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsUniqueIndividuality_34220604(questRestrictionInfo, v9, limitCount, DispLimitCount, 0LL);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction_28899216(
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

  if ( (byte_4353C73 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C73 = 1;
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return QuestRestrictionInfo__IsUniqueIndividuality_34221252(
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
  struct System_String_o **p_overwriteServantName; // x21
  struct System_String_o **p_overwriteServantDetailName; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v20; // x23
  __int64 v21; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x22
  ServantEntity_o *v23; // x22
  const MethodInfo *v24; // x1
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w23
  int32_t v27; // w24
  int32_t LimitCountByDispLimit; // w0
  System_Int32_array **Name; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v37; // x24
  __int64 v38; // x25
  ServantLimitAddMaster_o *v39; // x23
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int32_t CardImageLimitCount; // w19
  int32_t LimitCountByImageLimitCostumeIn; // w0
  System_Int32_array **v50; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4353C8B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C8B = 1;
  }
  this->fields.overwriteServantName = 0LL;
  p_overwriteServantName = &this->fields.overwriteServantName;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.overwriteServantName, 0LL, v2, v3, v4, v5, v6, v7);
  p_overwriteServantDetailName = &this->fields.overwriteServantDetailName;
  this->fields.overwriteServantDetailName = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.overwriteServantDetailName,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v21;
  *(_QWORD *)&v51.fields.fakeValue = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v51, 0LL);
  if ( !v22 )
    goto LABEL_28;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v22,
                                (int32_t)Instance,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_28;
  v23 = (ServantEntity_o *)Instance;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v24);
  limitCount = this->fields.limitCount;
  v27 = DispLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v27, limitCount, 0LL);
  Name = (System_Int32_array **)ServantEntity__getName(v23, LimitCountByDispLimit, -1, 0LL);
  *p_overwriteServantName = (struct System_String_o *)Name;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.overwriteServantName, Name, v30, v31, v32, v33, v34, v35);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v38 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v39 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v38;
  *(_QWORD *)&v52.fields.fakeValue = v37;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v52, 0LL);
  if ( !v39 )
LABEL_28:
    sub_B7076C(Instance, v18);
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName(v39, (int32_t)Instance, v40) )
  {
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v41);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
    v50 = (System_Int32_array **)ServantEntity__getName(v23, -1, LimitCountByImageLimitCostumeIn, 0LL);
    *p_overwriteServantDetailName = (struct System_String_o *)v50;
  }
  else
  {
    v50 = (System_Int32_array **)*p_overwriteServantName;
    *p_overwriteServantDetailName = *p_overwriteServantName;
  }
  sub_B70630((BattleServantConfConponent_o *)(p_overwriteServantName + 1), v50, v42, v43, v44, v45, v46, v47);
}


void __fastcall ServantLeaderInfo__SetTransformData(
        ServantLeaderInfo_o *this,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  ServantTransformMaster_o *v8; // x21
  void *UseEntityList; // x0
  __int64 v10; // x1
  AfterTransformSvtInfo_o *v11; // x22
  struct AfterTransformSvtInfo_o **p_afterTransformSvtInfo; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t aftDispLimitCount; // w26
  WarEntity_o *v20; // x22
  ServantLimitMaster_o *v21; // x23
  struct System_String_o *age; // x24
  __int64 v23; // x25
  const MethodInfo *v24; // x3
  ServantLimitEntity_o *v25; // x23
  _DWORD *v26; // x24
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x19
  int32_t atkBase; // w26
  int32_t atkMax; // w27
  int v30; // w28
  struct AfterTransformSvtInfo_o *v31; // x19
  int32_t atk; // w26
  int32_t adjustAtk; // w27
  ServantSkillMaster_o *v34; // x24
  __int64 v35; // x9
  struct AfterTransformSvtInfo_o *v36; // x8
  __int64 v37; // x9
  struct AfterTransformSvtInfo_o *v38; // x8
  __int64 v39; // x9
  struct AfterTransformSvtInfo_o *v40; // x8
  WarQuestSelectionMaster_o *v41; // x0
  struct System_String_o *v42; // x24
  __int64 v43; // x25
  ServantTreasureDvcMaster_o *v44; // x22
  __int64 v45; // x0
  int32_t v46; // [xsp+10h] [xbp-60h]
  int32_t friendshipRanka; // [xsp+14h] [xbp-5Ch]
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4353C58 & 1) == 0 )
  {
    sub_B70694(&AfterTransformSvtInfo_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CheckCombineResStatus_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C58 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantTransformMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v49.fields.currentCryptoKey = v7;
  *(_QWORD *)&v49.fields.fakeValue = v6;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v49, 0LL);
  if ( !v8 )
    goto LABEL_60;
  if ( !ServantTransformMaster__TryGetEntity(v8, &entity, (int32_t)UseEntityList, this->fields.dispLimitCount + 1, 0LL) )
    return;
  v11 = (AfterTransformSvtInfo_o *)sub_B70764(AfterTransformSvtInfo_TypeInfo);
  AfterTransformSvtInfo___ctor(v11, 0LL);
  this->fields.afterTransformSvtInfo = v11;
  p_afterTransformSvtInfo = &this->fields.afterTransformSvtInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.afterTransformSvtInfo,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !entity )
    goto LABEL_60;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UseEntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_60;
  if ( !UseEntityList )
    goto LABEL_60;
  friendshipRanka = friendshipRank;
  v20 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)UseEntityList,
          entity->fields.aftSvtId,
          (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UseEntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v20 )
    goto LABEL_60;
  v21 = (ServantLimitMaster_o *)UseEntityList;
  v23 = *(_QWORD *)&v20->fields.id;
  age = v20->fields.age;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v23;
  *(_QWORD *)&v50.fields.fakeValue = age;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v50, 0LL);
  if ( !v21 )
    goto LABEL_60;
  v25 = ServantLimitMaster__GetEntity(v21, (int32_t)UseEntityList, this->fields.limitCount, v24);
  UseEntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantExpMaster___);
  if ( !UseEntityList )
    goto LABEL_60;
  UseEntityList = ServantExpMaster__GetEntity(
                    (ServantExpMaster_o *)UseEntityList,
                    HIDWORD(v20[1].klass),
                    this->fields.lv,
                    0LL);
  if ( !v25 )
    goto LABEL_60;
  v26 = UseEntityList;
  v46 = aftDispLimitCount;
  if ( !UseEntityList )
    goto LABEL_60;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  atkBase = v25->fields.atkBase;
  atkMax = v25->fields.atkMax;
  v30 = *((_DWORD *)UseEntityList + 7);
  UseEntityList = CheckCombineResStatus_TypeInfo;
  if ( (BYTE3(CheckCombineResStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
  }
  if ( !afterTransformSvtInfo )
    goto LABEL_60;
  afterTransformSvtInfo->fields.atk = v30 * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                                    + v25->fields.atkBase;
  v31 = *p_afterTransformSvtInfo;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_60;
  atk = v31->fields.atk;
  adjustAtk = this->fields.adjustAtk;
  UseEntityList = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UseEntityList = BalanceConfig_TypeInfo;
  }
  v31->fields.atk = atk + *(_DWORD *)(*((_QWORD *)UseEntityList + 23) + 300LL) * adjustAtk;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_60;
  (*p_afterTransformSvtInfo)->fields.hp = (v25->fields.hpMax - v25->fields.hpBase)
                                        * v26[7]
                                        / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                                        + v25->fields.hpBase;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_60;
  (*p_afterTransformSvtInfo)->fields.hp += *(_DWORD *)(*((_QWORD *)UseEntityList + 23) + 304LL) * this->fields.adjustHp;
  v34 = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v20->fields.id,
                            0LL);
  if ( !v34 )
    goto LABEL_60;
  UseEntityList = ServantSkillMaster__getUseEntityList(
                    v34,
                    (int32_t)UseEntityList,
                    this->fields.userId,
                    this->fields.lv,
                    this->fields.limitCount,
                    v46 - 1,
                    -1,
                    -1LL,
                    0LL);
  if ( !UseEntityList )
    goto LABEL_60;
  if ( !*((_DWORD *)UseEntityList + 6) )
    goto LABEL_61;
  v35 = *((_QWORD *)UseEntityList + 4);
  v36 = this->fields.afterTransformSvtInfo;
  if ( v35 )
    LODWORD(v35) = *(_DWORD *)(v35 + 28);
  if ( !v36 )
    goto LABEL_60;
  v36->fields.skillId1 = v35;
  if ( *((_DWORD *)UseEntityList + 6) <= 1u )
    goto LABEL_61;
  v37 = *((_QWORD *)UseEntityList + 5);
  v38 = *p_afterTransformSvtInfo;
  if ( v37 )
    LODWORD(v37) = *(_DWORD *)(v37 + 28);
  if ( !v38 )
    goto LABEL_60;
  v38->fields.skillId2 = v37;
  if ( *((_DWORD *)UseEntityList + 6) <= 2u )
  {
LABEL_61:
    v45 = sub_B70798(UseEntityList);
    sub_B70738(v45, 0LL);
  }
  v39 = *((_QWORD *)UseEntityList + 6);
  v40 = *p_afterTransformSvtInfo;
  if ( v39 )
    LODWORD(v39) = *(_DWORD *)(v39 + 28);
  if ( !v40 )
    goto LABEL_60;
  v40->fields.skillId3 = v39;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v41 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v43 = *(_QWORD *)&v20->fields.id;
  v42 = v20->fields.age;
  v44 = (ServantTreasureDvcMaster_o *)v41;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v43;
  *(_QWORD *)&v51.fields.fakeValue = v42;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v51, 0LL);
  if ( !v44 )
    goto LABEL_60;
  UseEntityList = ServantTreasureDvcMaster__getUseEntity(
                    v44,
                    (int32_t)UseEntityList,
                    this->fields.userId,
                    this->fields.lv,
                    this->fields.limitCount,
                    v46 - 1,
                    friendshipRanka,
                    -1,
                    0LL);
  if ( !UseEntityList )
    return;
  if ( !*p_afterTransformSvtInfo )
LABEL_60:
    sub_B7076C(UseEntityList, v10);
  (*p_afterTransformSvtInfo)->fields.treasureDeviceId = *((_DWORD *)UseEntityList + 8);
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v4; // x21
  __int64 v5; // x22
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x4
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v13; // x23
  unsigned __int64 v14; // x19
  signed __int64 v15; // x22
  SkillLvEntity_o *v16; // x24
  __int64 v17; // x25
  __int64 v18; // x26
  int32_t v19; // w25
  int32_t limitCount; // w26
  int32_t EventId; // w0
  bool v22; // w27
  System_Int32_array *SkillIdList; // x23
  const MethodInfo *v24; // x1
  System_Int32_array *SkillLevelList; // x0
  System_Int32_array *v26; // x24
  unsigned __int64 i; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v29; // x25
  __int64 v30; // x26
  __int64 v31; // x27
  int32_t v32; // w26
  int32_t v33; // w28
  int32_t v34; // w0
  __int64 v36; // x0
  int32_t wearesDispLimitCount; // [xsp+14h] [xbp-6Ch]
  EventUpValSetupInfo_o *v38; // [xsp+18h] [xbp-68h]
  int32_t *v39; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4353C6B & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C6B = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v5;
  *(_QWORD *)&v41.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v41, 0LL) >= 1 )
  {
    v38 = setupInfo;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_42:
      sub_B7076C(Instance, v7);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    wearesDispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v9);
    Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v10);
    if ( Instance )
    {
      datalist = Instance->fields.datalist;
      v13 = Instance;
      if ( (int)datalist >= 1 )
      {
        v14 = 0LL;
        v15 = (int)datalist;
        while ( 1 )
        {
          v7 = *((unsigned int *)&v13->fields.lookup + v14);
          if ( (int)v7 >= 1 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_42;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v7, 1, 0LL);
            if ( Instance )
            {
              v16 = (SkillLvEntity_o *)Instance;
              v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v42.fields.currentCryptoKey = v18;
              *(_QWORD *)&v42.fields.fakeValue = v17;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v42, 0LL);
              if ( !v38 )
                goto LABEL_42;
              v19 = (int)Instance;
              limitCount = this->fields.limitCount;
              EventId = EventUpValSetupInfo__get_EventId(v38, 0LL);
              v22 = 1;
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal(
                                            v16,
                                            v19,
                                            limitCount,
                                            wearesDispLimitCount,
                                            v38,
                                            EventId,
                                            1,
                                            0,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v22;
            }
          }
          if ( (__int64)++v14 >= v15 )
            break;
          if ( v14 >= LODWORD(v13->fields.datalist) )
          {
LABEL_43:
            v36 = sub_B70798(Instance);
            sub_B70738(v36, 0LL);
          }
        }
      }
    }
    SkillIdList = ServantLeaderInfo__GetSkillIdList(
                    (ServantLeaderInfo_o *)Instance,
                    this->fields.skillId1,
                    this->fields.skillId2,
                    this->fields.skillId3,
                    v11);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v24);
    v39 = &SkillLevelList->m_Items[1];
    v26 = SkillLevelList;
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
      v7 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v7 >= 1 )
      {
        if ( !v26 )
          goto LABEL_42;
        if ( i >= v26->max_length )
          goto LABEL_43;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_42;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v7, v39[i], 0LL);
        if ( Entity )
        {
          v29 = Entity;
          v31 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v43.fields.currentCryptoKey = v31;
          *(_QWORD *)&v43.fields.fakeValue = v30;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v43, 0LL);
          if ( !v38 )
            goto LABEL_42;
          v32 = (int)Instance;
          v33 = this->fields.limitCount;
          v34 = EventUpValSetupInfo__get_EventId(v38, 0LL);
          v22 = 1;
          if ( SkillLvEntity__getEventUpVal(v29, v32, v33, wearesDispLimitCount, v38, v34, 1, 0, 0LL) )
            return v22;
        }
      }
    }
  }
  return 0;
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal_28897296(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x22
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x4
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v14; // x22
  bool v15; // w23
  unsigned __int64 v16; // x24
  signed __int64 v17; // x25
  System_Int32_array *SkillIdList; // x22
  const MethodInfo *v19; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  SkillLvEntity_o *Entity; // x0
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4353C6E & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C6E = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v6;
  *(_QWORD *)&v24.fields.fakeValue = v5;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v24, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_39;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_39:
    sub_B7076C(Instance, v8);
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v11);
  if ( Instance && (datalist = Instance->fields.datalist, v14 = Instance, (int)datalist >= 1) )
  {
    v15 = 0;
    v16 = 0LL;
    v17 = (int)datalist;
    while ( 1 )
    {
      v8 = *((unsigned int *)&v14->fields.lookup + v16);
      if ( (int)v8 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_39;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v8, 1, 0LL);
        if ( Instance )
        {
          Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_26500472(
                                        (SkillLvEntity_o *)Instance,
                                        eventUpVallInfo,
                                        1,
                                        0,
                                        1,
                                        0,
                                        0LL,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v15 = 1;
        }
      }
      if ( (__int64)++v16 >= v17 )
        break;
      if ( v16 >= LODWORD(v14->fields.datalist) )
      {
LABEL_40:
        v23 = sub_B70798(Instance);
        sub_B70738(v23, 0LL);
      }
    }
  }
  else
  {
    v15 = 0;
  }
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  (ServantLeaderInfo_o *)Instance,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v12);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v19);
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
    v8 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v8 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_39;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_40;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_39;
      Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v8, SkillLevelList->m_Items[i + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_26500472(Entity, eventUpVallInfo, 1, 0, 1, 0, 0LL, 0LL) )
          v15 = 1;
      }
    }
  }
  return v15;
}


int32_t __fastcall ServantLeaderInfo__getBaseFriendPointUpVal(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v8; // x4
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v10; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x22
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  __int64 v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4353C67 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C67 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v4;
  *(_QWORD *)&v16.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v16, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B7076C(Instance, v6);
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__GetSkillIdList(
                    (ServantLeaderInfo_o *)MasterData_WarQuestSelectionMaster,
                    this->fields.skillId1,
                    this->fields.skillId2,
                    this->fields.skillId3,
                    v8);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v10);
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
      v6 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v6 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v15 = sub_B70798(Instance);
          sub_B70738(v15, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster,
                   v6,
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
  const MethodInfo *v3; // x2
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w20
  BalanceConfig_c *v7; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int LimitCountWithRandom; // w20
  const MethodInfo *v10; // x2
  bool v11; // vf
  bool v12; // w1
  ServantLeaderInfo_o *v13; // x0
  __int64 v15; // x21
  __int64 v16; // x22
  int32_t v17; // w19
  int32_t v18; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4353C81 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    byte_4353C81 = 1;
  }
  if ( ConstantMaster__IsOtherImage(0LL) )
  {
    v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v19.fields.currentCryptoKey = v5;
    *(_QWORD *)&v19.fields.fakeValue = v4;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v19, 0LL);
    v7 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    static_fields = v7->static_fields;
    if ( v6 < static_fields->ExclusiveNpcServantIdStart )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
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
    v11 = __OFSUB__(LimitCountWithRandom--, 1);
    if ( LimitCountWithRandom < 0 == v11 )
      return LimitCountWithRandom;
    v12 = 1;
    v13 = this;
    return ServantLeaderInfo__getMaxCardImageLimitCount(v13, v12, v10);
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
    v13 = this;
    v12 = 0;
    return ServantLeaderInfo__getMaxCardImageLimitCount(v13, v12, v10);
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
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  *(_QWORD *)&v20.fields.fakeValue = v15;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v20, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v18, v17, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4353C7F & 1) == 0 )
  {
    sub_B70694(&OptionManager_TypeInfo);
    byte_4353C7F = 1;
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
  struct CommandCodeStatus_array *commandCode; // x10
  int max_length; // w8
  __int64 v7; // x9
  CommandCodeStatus_o **m_Items; // x10
  CommandCodeStatus_o *v9; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x19
  __int64 v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = this;
  if ( (byte_4353C88 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantLeaderInfo_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C88 = 1;
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
    {
      v15 = sub_B70798(this);
      sub_B70738(v15, 0LL);
    }
    v9 = m_Items[v7];
    if ( !v9 )
      goto LABEL_18;
    if ( v9->fields.idx == index )
      break;
    if ( (int)++v7 >= max_length )
      return 0LL;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v13 = *(_QWORD *)&v9->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v9->fields.commandCodeId.fields.fakeValue;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v13;
  *(_QWORD *)&v16.fields.fakeValue = v12;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v16, 0LL);
  if ( !v14 )
LABEL_18:
    sub_B7076C(this, *(_QWORD *)&index);
  return (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v14,
                                  (int32_t)this,
                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4353C87 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C87 = 1;
  }
  if ( !this->fields.commandCode )
    return 0LL;
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_B706AC(int___TypeInfo, (unsigned int)v3->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_26:
    sub_B7076C(v4, v5);
  max_length = commandCode->max_length;
  v8 = (System_Int32_array *)v4;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
LABEL_27:
        v16 = sub_B70798(v4);
        sub_B70738(v16, 0LL);
      }
      v10 = commandCode->m_Items[i];
      if ( !v10 )
        goto LABEL_26;
      v4 = BalanceConfig_TypeInfo;
      idx = v10->fields.idx;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v4 = BalanceConfig_TypeInfo;
      }
      if ( idx < v4->static_fields->SvtCommandCardMax )
      {
        v12 = v10->fields.idx;
        v14 = *(_QWORD *)&v10->fields.commandCodeId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&v10->fields.commandCodeId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v17.fields.currentCryptoKey = v14;
        *(_QWORD *)&v17.fields.fakeValue = v13;
        v4 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL);
        if ( !v8 )
          goto LABEL_26;
        if ( (unsigned int)v12 >= v8->max_length )
          goto LABEL_27;
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

  if ( (byte_4353C7B & 1) == 0 )
  {
    sub_B70694(&OptionManager_TypeInfo);
    byte_4353C7B = 1;
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
  int32_t LimitCountWithRandom; // w21
  int32_t limitCount; // w22
  int32_t v6; // w0
  int32_t v7; // w1
  int32_t v8; // w19

  if ( (byte_4353C7D & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    byte_4353C7D = 1;
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
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  limitCount = LimitCountWithRandom;
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
    v8 = this->fields.limitCount;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
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

  if ( (byte_4353C6A & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C6A = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v16, 0LL) < 1 )
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL);
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

  if ( (byte_4353C79 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C79 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v15, 0LL) >= 1 )
  {
    v13 = this->fields.equipTarget1;
    if ( !v13 )
      sub_B7076C(0LL, v12);
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
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x1
  EquipTargetInfo_o *v9; // x0
  BalanceConfig_c *v10; // x0
  SkillInfo_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4353C63 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&SkillInfo___TypeInfo);
    byte_4353C63 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_10;
  v7 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v18, 0LL) >= 1 )
  {
    v9 = this->fields.equipTarget1;
    if ( !v9 )
      sub_B7076C(0LL, v8);
    EquipTargetInfo__getSkillInfo(v9, skillInfoList, 0LL);
  }
  else
  {
LABEL_10:
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = (SkillInfo_array *)sub_B706AC(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v11;
    sub_B70630((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4353C68 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C68 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL) < 1 )
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v18, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v13, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEventUpVal_28896892(
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  bool BaseEventUpVal_28897296; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v26; // w21
  EventUpValInfo_o *v27; // x24
  __int64 v28; // x22
  __int64 v29; // x23
  EquipTargetInfo_o *v30; // x0
  __int64 v31; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4353C6C & 1) == 0 )
  {
    sub_B70694(&EventUpValInfo_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C6C = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v8;
  *(_QWORD *)&v33.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v33, 0LL);
  limitCount = this->fields.limitCount;
  v11 = v9;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v12);
  npcFlag = this->fields.npcFlag;
  v15 = DispLimitCount;
  v16 = (EventUpValInfo_o *)sub_B70764(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v16, setupInfo, v11, limitCount, v15, npcFlag, 0LL);
  *eventUpVallInfo = v16;
  sub_B70630((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(this->fields.svtId, 0LL) < 1 )
    return 0;
  BaseEventUpVal_28897296 = ServantLeaderInfo__getBaseEventUpVal_28897296(this, eventUpVallInfo, v23);
  equipTarget1 = this->fields.equipTarget1;
  v26 = BaseEventUpVal_28897296;
  if ( !equipTarget1 )
    return v26;
  v27 = *eventUpVallInfo;
  v29 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v34.fields.currentCryptoKey = v29;
  *(_QWORD *)&v34.fields.fakeValue = v28;
  v30 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v34, 0LL);
  if ( !v27 || (v27->fields.equipSvtId = (int)v30, (v30 = this->fields.equipTarget1) == 0LL) )
    sub_B7076C(v30, v31);
  return (v26 | EquipTargetInfo__getEventUpVal_31362452(v30, eventUpVallInfo, 1, 0LL)) & 1;
}


bool __fastcall ServantLeaderInfo__getEventUpVal_28897948(
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v29; // x25
  __int64 v30; // x23
  __int64 v31; // x24
  EquipTargetInfo_o *v32; // x0
  __int64 v33; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4353C6D & 1) == 0 )
  {
    sub_B70694(&EventUpValInfo_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C6D = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v12;
  *(_QWORD *)&v35.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v35, 0LL);
  limitCount = this->fields.limitCount;
  v15 = v13;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v16);
  npcFlag = this->fields.npcFlag;
  v19 = DispLimitCount;
  v20 = (EventUpValInfo_o *)sub_B70764(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v20, setupInfo, v15, limitCount, v19, npcFlag, 0LL);
  *eventUpVallInfo = v20;
  sub_B70630((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(this->fields.svtId, 0LL) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_28897296(this, eventUpVallInfo, v27) )
      *isServantEventUpVal = 1;
    equipTarget1 = this->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v29 = *eventUpVallInfo;
      v31 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v36.fields.currentCryptoKey = v31;
      *(_QWORD *)&v36.fields.fakeValue = v30;
      v32 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v36, 0LL);
      if ( !v29 || (v29->fields.equipSvtId = (int)v32, (v32 = this->fields.equipTarget1) == 0LL) )
        sub_B7076C(v32, v33);
      if ( EquipTargetInfo__getEventUpVal_31362452(v32, eventUpVallInfo, 1, 0LL) )
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x23
  WarEntity_o *Entity; // x23
  const MethodInfo *v16; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v18; // x24
  int datalist; // w25
  float v20; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4353C78 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C78 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v22, 0LL);
  if ( !v14 )
    goto LABEL_22;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v14,
             (int32_t)Instance,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v16) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v18 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v18, HIDWORD(Entity[1].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - datalist;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.datalist) - this->fields.exp;
      v20 = (float)*exp / (float)(LODWORD(Instance->fields.datalist) - datalist);
      goto LABEL_21;
    }
LABEL_22:
    sub_B7076C(Instance, v10);
  }
  v20 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_21:
  *barExp = v20;
  return 1;
}


int32_t __fastcall ServantLeaderInfo__getFrameType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantExceedMaster_o *v8; // x20
  int32_t FrameType_31474112; // w20
  ServantLvDetailMaster_o *v10; // x21
  const MethodInfo *v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4353C7A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C7A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantExceedMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v13, 0LL);
  if ( !v8
    || (FrameType_31474112 = ServantExceedMaster__GetFrameType_31474112(
                               v8,
                               (int32_t)Instance,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v10 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (WebViewManager_o *)ServantLeaderInfo__getRarity(this, v11),
        !v10) )
  {
LABEL_11:
    sub_B7076C(Instance, v4);
  }
  return ServantLvDetailMaster__GetFrameType(v10, (int32_t)Instance, this->fields.lv, FrameType_31474112, 0LL);
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

  if ( (byte_4353C66 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C66 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v10, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v5);
  if ( !this->fields.equipTarget1
    || EquipTargetInfo__getFriendPointUpVal(this->fields.equipTarget1, 0LL) <= BaseFriendPointUpVal )
  {
    return 0;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    sub_B7076C(0LL, v7);
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

  if ( (byte_4353C65 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C65 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v10, 0LL) < 1 )
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

  if ( (byte_4353C83 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    byte_4353C83 = 1;
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
    v8 = this;
    v7 = 0;
    return ServantLeaderInfo__getMaxIconLimitCount(v8, v7, v5);
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
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v14, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v13, v12, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getLevelMax(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  const MethodInfo *v11; // x3
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v13; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4353C59 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C59 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v4;
  *(_QWORD *)&v16.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v16, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v9;
  *(_QWORD *)&v17.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, (int32_t)Instance, this->fields.limitCount, v11),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_19:
    sub_B7076C(Instance, v6);
  }
  v13 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0LL);
  lvMax = Entity->fields.lvMax;
  if ( v13 )
    lvMax += v13->fields.addLvMax;
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

  if ( (byte_4353C82 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C82 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v11, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
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

  if ( (byte_4353C80 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C80 = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v9, 0LL);
  limitCount = this->fields.limitCount;
  v7 = v5;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
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

  if ( (byte_4353C7C & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C7C = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v9, 0LL);
  limitCount = this->fields.limitCount;
  v7 = v5;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
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

  if ( (byte_4353C84 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C84 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v11, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
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

  if ( (byte_4353C86 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C86 = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v9, 0LL);
  limitCount = this->fields.limitCount;
  v7 = v5;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v7, limitCount, 0LL);
}


System_Int32_array *__fastcall ServantLeaderInfo__getPassiveSkillIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  ServantLeaderInfo_o *v5; // x0
  BattleServantConfConponent_o *p_classPassive; // x19
  System_Int32_array *classPassive; // t1
  const MethodInfo *v8; // x3
  System_Int32_array **PassiveSkillIdList; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4353C5E & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C5E = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v4;
  *(_QWORD *)&v17.fields.fakeValue = v3;
  v5 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL);
  classPassive = this->fields.classPassive;
  p_classPassive = (BattleServantConfConponent_o *)&this->fields.classPassive;
  PassiveSkillIdList = (System_Int32_array **)ServantLeaderInfo__GetPassiveSkillIdList(
                                                v5,
                                                (int32_t)v5,
                                                classPassive,
                                                v8);
  p_classPassive->klass = (BattleServantConfConponent_c *)PassiveSkillIdList;
  sub_B70630(p_classPassive, PassiveSkillIdList, v10, v11, v12, v13, v14, v15);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  ServantLeaderInfo_o *v15; // x0
  const MethodInfo *v16; // x4

  PassiveSkillIdList = ServantLeaderInfo__getPassiveSkillIdList(this, (const MethodInfo *)idList);
  *idList = PassiveSkillIdList;
  sub_B70630(
    (BattleServantConfConponent_o *)idList,
    (System_Int32_array **)PassiveSkillIdList,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  ServantLeaderInfo__GetPassiveSkillInfo(v15, titleList, explanationList, *idList, v16);
}


int32_t __fastcall ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_4353C85 & 1) == 0 )
  {
    sub_B70694(&OptionManager_TypeInfo);
    byte_4353C85 = 1;
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
  int32_t npcFlag; // w8
  int32_t lv; // w23
  int32_t v14; // w20
  int32_t v15; // w5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4353C6F & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C6F = 1;
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
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL);
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
  return QuestRestrictionInfo__IsRestriction_34215812(questRestrictionInfo, v9, limitCount, v14, lv, v15, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getRarity(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  const MethodInfo *v9; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4353C5A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C5A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v11, 0LL);
  if ( !v8 || (Instance = ServantLimitMaster__GetEntity(v8, (int32_t)Instance, this->fields.limitCount, v9)) == 0LL )
LABEL_10:
    sub_B7076C(Instance, v4);
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

  if ( (byte_4353C69 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C69 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v9, 0LL) >= 1
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

  if ( (byte_4353C61 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C61 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v12, 0LL);
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
  __int64 v7; // x0

  if ( (byte_4353C5D & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int___TypeInfo);
    byte_4353C5D = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, (unsigned int)v3->static_fields->SvtSkillListMax);
  if ( !result )
    sub_B7076C(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillLv2, max_length <= 2) )
  {
    v7 = sub_B70798(result);
    sub_B70738(v7, 0LL);
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

  if ( (byte_4353C74 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C74 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v10, 0LL);
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, v7, this->fields.treasureDeviceId, v8);
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo_28899976(
        ServantLeaderInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w8

  if ( (byte_4353C76 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4353C76 = 1;
  }
  *tdLv = this->fields.treasureDeviceLv;
  if ( this->fields.treasureDeviceId < 1 )
  {
    bannerId = 0;
    LOBYTE(Entity) = 0;
  }
  else
  {
    v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v8 = **(_QWORD **)(v7 + 192);
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_B08394(v8);
    MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v8 + 184);
    if ( !MasterData_WarQuestSelectionMaster
      || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
    {
      sub_B7076C(MasterData_WarQuestSelectionMaster, tdLv);
    }
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
               this->fields.treasureDeviceId,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  __int64 v3; // x20
  __int64 v4; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t treasureDeviceLv; // w8

  if ( (byte_4353C77 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4353C77 = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B08394(v4);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v4 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_B7076C(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             this->fields.treasureDeviceId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_4353C70 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C70 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v9, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_34220032(questRestrictionInfo, v7, 0LL);
}


bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction_28898840(
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

  if ( (byte_4353C71 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C71 = 1;
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v13, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_34220256(questRestrictionInfo, v11, partyItem, num, -1, 0LL);
}


bool __fastcall ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4353C60 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4353C60 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v7, 0LL) > 0;
}


bool __fastcall ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_4353C55 & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_4353C55 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
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