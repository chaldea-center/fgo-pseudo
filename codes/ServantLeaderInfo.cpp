void __fastcall ServantLeaderInfo___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAE01 & 1) == 0 )
  {
    sub_B5D5C4(&ServantLeaderInfo_TypeInfo, v1, v2, v3);
    byte_42EAE01 = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo___ctor_29348816(
        ServantLeaderInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  void *Instance; // x0
  const MethodInfo *v31; // x1
  ServantEntity_o *Entity; // x22
  const MethodInfo *v33; // x3
  int32_t v34; // w8
  int32_t MaxDispLimitCount; // w0
  int32_t v36; // w21
  __int64 v37; // x23
  __int64 v38; // x23
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v40; // x8
  __int64 v41; // x8
  __int64 v42; // x8
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x22
  __int64 v50; // x22
  ServantTreasureDvcEntity_o *UseEntity; // x0
  struct System_Int32_array **p_randomLimitCountTargets; // x19
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x0

  if ( (byte_42EADC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, svtId, limitCnt, *(_QWORD *)&level);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    byte_42EADC9 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_38;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_38;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, v33);
  if ( !Instance )
    goto LABEL_38;
  this->fields.hp = *((_DWORD *)Instance + 9);
  v34 = *((_DWORD *)Instance + 11);
  this->fields.adjustAtk = 0;
  this->fields.adjustHp = 0;
  this->fields.atk = v34;
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(this, v31);
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v36 = MaxDispLimitCount;
  v37 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v38 = **(_QWORD **)(v37 + 192);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AF52C4(v38);
  Instance = **(void ***)(v38 + 184);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  Instance = ServantSkillMaster__getUseEntityList(
               MasterData_WarQuestSelectionMaster,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               v36,
               -1,
               -1LL,
               0LL);
  if ( !Instance )
    goto LABEL_38;
  if ( !*((_DWORD *)Instance + 6) )
    goto LABEL_39;
  v40 = *((_QWORD *)Instance + 4);
  if ( v40 )
    LODWORD(v40) = *(_DWORD *)(v40 + 28);
  this->fields.skillId1 = v40;
  if ( *((_DWORD *)Instance + 6) <= 1u )
    goto LABEL_39;
  v41 = *((_QWORD *)Instance + 5);
  if ( v41 )
    LODWORD(v41) = *(_DWORD *)(v41 + 28);
  this->fields.skillId2 = v41;
  if ( *((_DWORD *)Instance + 6) <= 2u )
  {
LABEL_39:
    v59 = sub_B5D6C8(Instance);
    sub_B5D668(v59, 0LL);
  }
  v42 = *((_QWORD *)Instance + 6);
  if ( v42 )
    LODWORD(v42) = *(_DWORD *)(v42 + 28);
  this->fields.skillId3 = v42;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_38;
  if ( !ServantEntity__get_IsServant(Entity, 0LL) )
    goto LABEL_37;
  v49 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v50 = **(_QWORD **)(v49 + 192);
  if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
    sub_AF52C4(v50);
  Instance = **(void ***)(v50 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL )
  {
LABEL_38:
    sub_B5D69C(Instance, v31);
  }
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)Instance,
                svtId,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v36,
                0,
                -1,
                0LL);
  if ( UseEntity )
    this->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
LABEL_37:
  this->fields.equipTarget1 = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipTarget1, 0LL, v43, v44, v45, v46, v47, v48);
  this->fields.randomLimitCountTargets = 0LL;
  p_randomLimitCountTargets = &this->fields.randomLimitCountTargets;
  *(p_randomLimitCountTargets - 3) = 0LL;
  *(p_randomLimitCountTargets - 2) = 0LL;
  *(p_randomLimitCountTargets - 4) = 0LL;
  *((_DWORD *)p_randomLimitCountTargets - 2) = 0;
  sub_B5D560((BattleServantConfConponent_o *)p_randomLimitCountTargets, 0LL, v53, v54, v55, v56, v57, v58);
}


void __fastcall ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x21
  System_Collections_Generic_Dictionary_int__int__o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
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
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_42EADF7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&OptionManager_TypeInfo, v11, v12, v13);
    byte_42EADF7 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetSpoilerSetting(0LL) )
  {
    v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v52.fields.currentCryptoKey = v15;
    *(_QWORD *)&v52.fields.fakeValue = v14;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v52, 0LL) >= 1 )
    {
      v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v16,
        (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v16;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.limitChangeDic,
        (System_Int32_array **)v16,
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
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.limitChangeDic, 0LL, v46, v47, v48, v49, v50, v51);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipTarget1, 0LL, v2, v3, v4, v5, v6, v7);
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantLeaderInfo__GetAdjustLimitCount(
        ServantLeaderInfo_o *this,
        int32_t orgLimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int LIMIT_COUNT_THIRD_STAGE; // w19
  ServantLeaderInfo_c *v5; // x0

  LIMIT_COUNT_THIRD_STAGE = orgLimitCount;
  if ( (byte_42EADFA & 1) == 0 )
  {
    sub_B5D5C4(&ServantLeaderInfo_TypeInfo, orgLimitCount, (_DWORD)method, v3);
    byte_42EADFA = 1;
  }
  v5 = ServantLeaderInfo_TypeInfo;
  if ( (BYTE3(ServantLeaderInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo);
    v5 = ServantLeaderInfo_TypeInfo;
  }
  if ( LIMIT_COUNT_THIRD_STAGE <= 10 && v5->static_fields->LIMIT_COUNT_THIRD_STAGE < LIMIT_COUNT_THIRD_STAGE )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      LIMIT_COUNT_THIRD_STAGE = v5->static_fields->LIMIT_COUNT_THIRD_STAGE;
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        return ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE;
      }
    }
    else
    {
      return v5->static_fields->LIMIT_COUNT_THIRD_STAGE;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v29; // x25
  __int64 v30; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x24
  const MethodInfo *v33; // x1
  int32_t *Entity; // x0
  int32_t v35; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42EADCC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantMaster___,
      (_DWORD)maxAjustHp,
      (_DWORD)maxAjustAtk,
      secondMaxAdjustHp);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42EADCC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v30;
  *(_QWORD *)&v37.fields.fakeValue = v29;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
  if ( !v31 )
    goto LABEL_16;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v31,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_16;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
LABEL_14:
    v35 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_15;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (DataManager_o *)ServantLeaderInfo__getRarity(this, v33),
        !v32) )
  {
LABEL_16:
    sub_B5D69C(Instance, v27);
  }
  Entity = (int32_t *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v32,
                        (int32_t)Instance,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_14;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v35 = Entity[8];
  result = 1;
LABEL_15:
  *secondMaxAdjustAtk = v35;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  ServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v47; // x25
  __int64 v48; // x26
  __int64 EntityListFromSvtId; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  BattleServantConfConponent_o *v57; // x26
  __int64 v58; // x25
  System_Int32_array *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Boolean_array *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v94; // x27
  int v95; // w22
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x11
  int max_length; // w8
  __int64 v98; // x9
  __int64 v99; // x10
  AppendPassiveSkillInfo_o **m_Items; // x11
  AppendPassiveSkillInfo_o *v101; // x19
  __int64 v102; // x24
  __int64 v103; // x8
  System_Int32_array *v104; // x9
  System_Int32_array *v105; // x8
  BattleServantConfConponent_c *klass; // x8
  SkillEntity_o *v107; // x28
  System_String_array *v108; // x26
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x20
  Il2CppClass **v116; // x0
  System_String_array *v117; // x20
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x28
  Il2CppClass **v125; // x0
  System_Boolean_array *v126; // x8
  char v127; // w9
  BattleServantConfConponent_c *v128; // x8
  System_String_array *v129; // x19
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x20
  Il2CppClass **v137; // x0
  System_String_array *v138; // x19
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x20
  Il2CppClass **v146; // x0
  System_String_array *v147; // x8
  System_String_array *v148; // x8
  BattleServantConfConponent_o *v149; // x20
  System_String_o *call_openComp; // t1
  System_Int32_array **v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_String_array *v158; // x8
  Il2CppClass **v159; // x28
  System_String_o *v160; // x20
  BattleServantConfConponent_o *v161; // x28
  System_String_o *v162; // t1
  System_String_o *v163; // x0
  System_Int32_array **v164; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  struct AppendPassiveSkillInfo_array *v171; // x8
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  __int64 v196; // x0
  __int64 v197; // x0
  BattleServantConfConponent_o *v198; // [xsp+8h] [xbp-78h]
  __int64 v202; // [xsp+28h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v203; // 0:x0.16

  if ( (byte_42EADFB & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&int___TypeInfo, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&string___TypeInfo, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_3371/*"COND_TYPE_TITLE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_3359/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_1/*""*/, v43, v44, v45);
    byte_42EADFB = 1;
  }
  v198 = (BattleServantConfConponent_o *)lvList;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v48 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v203.fields.currentCryptoKey = v48;
  *(_QWORD *)&v203.fields.fakeValue = v47;
  EntityListFromSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v203, 0LL);
  if ( !Master_WarQuestSelectionMaster
    || (EntityListFromSvtId = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                         Master_WarQuestSelectionMaster,
                                         EntityListFromSvtId,
                                         0LL),
        v57 = v198,
        !EntityListFromSvtId) )
  {
LABEL_84:
    sub_B5D69C(EntityListFromSvtId, v50);
  }
  v58 = EntityListFromSvtId;
  v202 = *(_QWORD *)(EntityListFromSvtId + 24);
  if ( v202 || (v171 = this->fields.appendPassiveSkill) != 0LL && *(_QWORD *)&v171->max_length )
  {
    v59 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v202);
    *idList = v59;
    sub_B5D560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v59, v60, v61, v62, v63, v64, v65);
    v66 = (System_String_array *)sub_B5D5DC(string___TypeInfo, (unsigned int)v202);
    *titleList = v66;
    sub_B5D560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v66, v67, v68, v69, v70, v71, v72);
    v73 = (System_String_array *)sub_B5D5DC(string___TypeInfo, (unsigned int)v202);
    *explanationList = v73;
    sub_B5D560(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v73,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
    v80 = (System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, (unsigned int)v202);
    *releaseStateList = v80;
    sub_B5D560(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    v87 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, (unsigned int)v202);
    v198->klass = (BattleServantConfConponent_c *)v87;
    sub_B5D560(v198, v87, v88, v89, v90, v91, v92, v93);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EntityListFromSvtId = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v202 >= 1 )
    {
      v94 = (DataMasterBase_WarMaster__WarEntity__int__o *)EntityListFromSvtId;
      v95 = 0;
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
        v101 = 0LL;
LABEL_27:
        if ( (unsigned int)v95 >= *(_DWORD *)(v58 + 24) )
          goto LABEL_85;
        v102 = v95;
        v103 = *(_QWORD *)(v58 + 8LL * v95 + 32);
        if ( !v103 )
          goto LABEL_84;
        v104 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v95 >= v104->max_length )
          goto LABEL_85;
        v104->m_Items[v95 + 1] = *(_DWORD *)(v103 + 28);
        v105 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v95 >= v105->max_length )
          goto LABEL_85;
        if ( !v94 )
          goto LABEL_84;
        EntityListFromSvtId = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         v94,
                                         v105->m_Items[v95 + 1],
                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        klass = v57->klass;
        v107 = (SkillEntity_o *)EntityListFromSvtId;
        if ( v101 )
        {
          if ( !klass )
            goto LABEL_84;
          if ( (unsigned int)v95 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_85;
          *((_DWORD *)&klass->_1.byval_arg.data + v95) = v101->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_84;
          v108 = *titleList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectTitle(
                                           (SkillEntity_o *)EntityListFromSvtId,
                                           v101->fields.skillLv,
                                           0LL);
          if ( !v108 )
            goto LABEL_84;
          v115 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B5D684(EntityListFromSvtId, v108->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v95 >= v108->max_length )
            goto LABEL_85;
          v116 = &v108->obj.klass + v95;
          v116[4] = (Il2CppClass *)v115;
          sub_B5D560((BattleServantConfConponent_o *)(v116 + 4), v115, v109, v110, v111, v112, v113, v114);
          v117 = *explanationList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectExplanation(v107, v101->fields.skillLv, 0LL);
          if ( !v117 )
            goto LABEL_84;
          v57 = v198;
          v124 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B5D684(EntityListFromSvtId, v117->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v95 >= v117->max_length )
            goto LABEL_85;
          v125 = &v117->obj.klass + v95;
          v125[4] = (Il2CppClass *)v124;
          sub_B5D560((BattleServantConfConponent_o *)(v125 + 4), v124, v118, v119, v120, v121, v122, v123);
          v126 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v95 >= v126->max_length )
            goto LABEL_85;
          v127 = 1;
        }
        else
        {
          if ( !klass )
            goto LABEL_84;
          if ( (unsigned int)v95 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_85;
          *((_DWORD *)&klass->_1.byval_arg.data + v95) = -1;
          v128 = v57->klass;
          if ( !v57->klass )
            goto LABEL_84;
          if ( (unsigned int)v95 >= LODWORD(v128->_1.namespaze) )
            goto LABEL_85;
          if ( !EntityListFromSvtId )
            goto LABEL_84;
          v129 = *titleList;
          EntityListFromSvtId = (__int64)SkillEntity__getEffectTitle(
                                           (SkillEntity_o *)EntityListFromSvtId,
                                           *((_DWORD *)&v128->_1.byval_arg.data + v95),
                                           0LL);
          if ( !v129 )
            goto LABEL_84;
          v136 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B5D684(EntityListFromSvtId, v129->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
            {
LABEL_86:
              v197 = sub_B5D6BC(EntityListFromSvtId);
              sub_B5D668(v197, 0LL);
            }
          }
          if ( v95 >= v129->max_length )
            goto LABEL_85;
          v137 = &v129->obj.klass + v95;
          v137[4] = (Il2CppClass *)v136;
          sub_B5D560((BattleServantConfConponent_o *)(v137 + 4), v136, v130, v131, v132, v133, v134, v135);
          v138 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          EntityListFromSvtId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v138 )
            goto LABEL_84;
          v145 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B5D684(EntityListFromSvtId, v138->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
              goto LABEL_86;
          }
          if ( v95 >= v138->max_length )
            goto LABEL_85;
          v146 = &v138->obj.klass + v95;
          v146[4] = (Il2CppClass *)v145;
          sub_B5D560((BattleServantConfConponent_o *)(v146 + 4), v145, v139, v140, v141, v142, v143, v144);
          v147 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          if ( v95 >= v147->max_length )
            goto LABEL_85;
          EntityListFromSvtId = System_String__op_Inequality(
                                  v147->m_Items[v95],
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v148 = *explanationList;
            if ( !*explanationList )
              goto LABEL_84;
            if ( v95 >= v148->max_length )
              goto LABEL_85;
            v149 = (BattleServantConfConponent_o *)(&v148->obj.klass + v95);
            call_openComp = (System_String_o *)v149->fields.call_openComp;
            v149 = (BattleServantConfConponent_o *)((char *)v149 + 32);
            v151 = (System_Int32_array **)System_String__Concat_44577788(
                                            call_openComp,
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v149->klass = (BattleServantConfConponent_c *)v151;
            sub_B5D560(v149, v151, v152, v153, v154, v155, v156, v157);
          }
          v158 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          if ( v95 >= v158->max_length )
            goto LABEL_85;
          v159 = &v158->obj.klass + v95;
          v162 = (System_String_o *)v159[4];
          v161 = (BattleServantConfConponent_o *)(v159 + 4);
          v160 = v162;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v163 = LocalizationManager__Get((System_String_o *)StringLiteral_3359/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v164 = (System_Int32_array **)System_String__Concat_44577788(v160, v163, 0LL);
          v161->klass = (BattleServantConfConponent_c *)v164;
          sub_B5D560(v161, v164, v165, v166, v167, v168, v169, v170);
          v126 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v95 >= v126->max_length )
            goto LABEL_85;
          v127 = 0;
        }
        ++v95;
        v126->m_Items[v102 + 4] = v127;
        if ( v95 >= (int)v202 )
          return;
      }
      v98 = 0LL;
      v99 = v58 + 8LL * v95 + 32;
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v98 < max_length )
      {
        v101 = m_Items[v98];
        if ( !v101 )
          goto LABEL_84;
        if ( (unsigned int)v95 >= *(_DWORD *)(v58 + 24) )
          break;
        if ( !*(_QWORD *)v99 )
          goto LABEL_84;
        if ( v101->fields.skillId == *(_DWORD *)(*(_QWORD *)v99 + 28LL) )
          goto LABEL_27;
        if ( (int)++v98 >= max_length )
          goto LABEL_26;
      }
LABEL_85:
      v196 = sub_B5D6C8(EntityListFromSvtId);
      sub_B5D668(v196, 0LL);
    }
  }
  else
  {
    *idList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)idList, 0LL, v51, v52, v53, v54, v55, v56);
    *titleList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)titleList, 0LL, v172, v173, v174, v175, v176, v177);
    *explanationList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)explanationList, 0LL, v178, v179, v180, v181, v182, v183);
    *releaseStateList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)releaseStateList, 0LL, v184, v185, v186, v187, v188, v189);
    v198->klass = 0LL;
    sub_B5D560(v198, 0LL, v190, v191, v192, v193, v194, v195);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x8
  __int64 v43; // x25
  System_Int32_array *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Boolean_array *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v80; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v81; // x26
  __int64 v82; // x20
  __int64 v83; // x22
  struct AppendPassiveSkillInfo_array *v84; // x8
  __int64 v85; // x8
  System_Int32_array *v86; // x9
  System_Int32_array *v87; // x8
  struct AppendPassiveSkillInfo_array *v88; // x8
  __int64 v89; // x8
  int v90; // w9
  System_Int32_array *v91; // x8
  SkillEntity_o *v92; // x27
  struct AppendPassiveSkillInfo_array *v93; // x8
  __int64 v94; // x8
  System_String_array *v95; // x25
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x28
  struct AppendPassiveSkillInfo_array *v103; // x8
  int v104; // w28
  __int64 v105; // x8
  System_String_array *v106; // x25
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x27
  System_Boolean_array *v114; // x8
  char v115; // w9
  System_Int32_array *v116; // x8
  System_String_array *v117; // x25
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x27
  System_String_array *v125; // x28
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x27
  System_String_array *v133; // x8
  System_String_array *v134; // x8
  BattleServantConfConponent_o *v135; // x27
  System_Int32_array **v136; // x0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_String_array *v143; // x28
  System_String_o *v144; // x27
  System_String_o *v145; // x0
  System_Int32_array **v146; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  char *v153; // x8
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
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  __int64 v178; // x0
  __int64 v179; // x0
  int v180; // [xsp+8h] [xbp-68h]

  if ( (byte_42EADFC & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&int___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&string___TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3371/*"COND_TYPE_TITLE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_3359/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_1/*""*/, v39, v40, v41);
    byte_42EADFC = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (v43 = *(_QWORD *)&appendPassiveSkill->max_length) != 0 )
  {
    v44 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v43);
    *idList = v44;
    sub_B5D560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v44, v45, v46, v47, v48, v49, v50);
    v51 = (System_String_array *)sub_B5D5DC(string___TypeInfo, (unsigned int)v43);
    *titleList = v51;
    sub_B5D560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = (System_String_array *)sub_B5D5DC(string___TypeInfo, (unsigned int)v43);
    *explanationList = v58;
    sub_B5D560(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
    v65 = (System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, (unsigned int)v43);
    *releaseStateList = v65;
    sub_B5D560(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
    v72 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v43);
    *lvList = v72;
    sub_B5D560((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v43 >= 1 )
    {
      v81 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v82 = 0LL;
      v83 = 32LL;
      v180 = v43;
      while ( 1 )
      {
        v84 = this->fields.appendPassiveSkill;
        if ( !v84 )
          break;
        if ( (unsigned int)v82 >= v84->max_length )
          goto LABEL_76;
        v85 = *(__int64 *)((char *)&v84->obj.klass + v83);
        if ( !v85 )
          break;
        v86 = *idList;
        if ( !*idList )
          break;
        if ( (unsigned int)v82 >= v86->max_length )
          goto LABEL_76;
        v86->m_Items[v82 + 1] = *(_DWORD *)(v85 + 16);
        v87 = *idList;
        if ( !*idList )
          break;
        if ( (unsigned int)v82 >= v87->max_length )
          goto LABEL_76;
        if ( !v81 )
          break;
        Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v81,
                                                    v87->m_Items[v82 + 1],
                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v88 = this->fields.appendPassiveSkill;
        if ( !v88 )
          break;
        if ( (unsigned int)v82 >= v88->max_length )
          goto LABEL_76;
        v89 = *(__int64 *)((char *)&v88->obj.klass + v83);
        if ( !v89 )
          break;
        v90 = *(_DWORD *)(v89 + 20);
        v91 = *lvList;
        v92 = (SkillEntity_o *)Master_WarQuestSelectionMaster;
        if ( v90 < 1 )
        {
          if ( !v91 )
            break;
          if ( (unsigned int)v82 >= v91->max_length )
            goto LABEL_76;
          v91->m_Items[v82 + 1] = -1;
          v116 = *lvList;
          if ( !*lvList )
            break;
          if ( (unsigned int)v82 >= v116->max_length )
            goto LABEL_76;
          if ( !Master_WarQuestSelectionMaster )
            break;
          v117 = *titleList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                      (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                      v116->m_Items[v82 + 1],
                                                      0LL);
          if ( !v117 )
            break;
          v124 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B5D684(
                                               Master_WarQuestSelectionMaster,
                                               v117->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
            {
LABEL_77:
              v179 = sub_B5D6BC(Master_WarQuestSelectionMaster);
              sub_B5D668(v179, 0LL);
            }
          }
          if ( (unsigned int)v82 >= v117->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v117->obj.klass + v83) = (Il2CppClass *)v124;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v117 + v83), v124, v118, v119, v120, v121, v122, v123);
          v125 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v125 )
            break;
          v132 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B5D684(
                                               Master_WarQuestSelectionMaster,
                                               v125->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v82 >= v125->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v125->obj.klass + v83) = (Il2CppClass *)v132;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v125 + v83), v132, v126, v127, v128, v129, v130, v131);
          v133 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v82 >= v133->max_length )
            goto LABEL_76;
          Master_WarQuestSelectionMaster = System_String__op_Inequality(
                                             *(System_String_o **)((char *)&v133->obj.klass + v83),
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL);
          if ( (Master_WarQuestSelectionMaster & 1) != 0 )
          {
            v134 = *explanationList;
            if ( !*explanationList )
              break;
            if ( (unsigned int)v82 >= v134->max_length )
              goto LABEL_76;
            v135 = (BattleServantConfConponent_o *)((char *)v134 + v83);
            v136 = (System_Int32_array **)System_String__Concat_44577788(
                                            *(System_String_o **)((char *)&v134->obj.klass + v83),
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v135->klass = (BattleServantConfConponent_c *)v136;
            sub_B5D560(v135, v136, v137, v138, v139, v140, v141, v142);
          }
          v143 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v82 >= v143->max_length )
          {
LABEL_76:
            v178 = sub_B5D6C8(Master_WarQuestSelectionMaster);
            sub_B5D668(v178, 0LL);
          }
          v144 = *(System_String_o **)((char *)&v143->obj.klass + v83);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v145 = LocalizationManager__Get((System_String_o *)StringLiteral_3359/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v146 = (System_Int32_array **)System_String__Concat_44577788(v144, v145, 0LL);
          *(Il2CppClass **)((char *)&v143->obj.klass + v83) = (Il2CppClass *)v146;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v143 + v83), v146, v147, v148, v149, v150, v151, v152);
          v114 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          v104 = v180;
          if ( (unsigned int)v82 >= v114->max_length )
            goto LABEL_76;
          v115 = 0;
        }
        else
        {
          if ( !v91 )
            break;
          if ( (unsigned int)v82 >= v91->max_length )
            goto LABEL_76;
          v91->m_Items[v82 + 1] = v90;
          v93 = this->fields.appendPassiveSkill;
          if ( !v93 )
            break;
          if ( (unsigned int)v82 >= v93->max_length )
            goto LABEL_76;
          v94 = *(__int64 *)((char *)&v93->obj.klass + v83);
          if ( !v94 )
            break;
          if ( !Master_WarQuestSelectionMaster )
            break;
          v95 = *titleList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                      (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                      *(_DWORD *)(v94 + 20),
                                                      0LL);
          if ( !v95 )
            break;
          v102 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B5D684(
                                               Master_WarQuestSelectionMaster,
                                               v95->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v82 >= v95->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v95->obj.klass + v83) = (Il2CppClass *)v102;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v95 + v83), v102, v96, v97, v98, v99, v100, v101);
          v103 = this->fields.appendPassiveSkill;
          if ( !v103 )
            break;
          v104 = v180;
          if ( (unsigned int)v82 >= v103->max_length )
            goto LABEL_76;
          v105 = *(__int64 *)((char *)&v103->obj.klass + v83);
          if ( !v105 )
            break;
          v106 = *explanationList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectExplanation(v92, *(_DWORD *)(v105 + 20), 0LL);
          if ( !v106 )
            break;
          v113 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B5D684(
                                               Master_WarQuestSelectionMaster,
                                               v106->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v82 >= v106->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v106->obj.klass + v83) = (Il2CppClass *)v113;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v106 + v83), v113, v107, v108, v109, v110, v111, v112);
          v114 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( (unsigned int)v82 >= v114->max_length )
            goto LABEL_76;
          v115 = 1;
        }
        v153 = (char *)v114 + v82++;
        v83 += 8LL;
        v153[32] = v115;
        if ( (int)v82 >= v104 )
          return;
      }
      sub_B5D69C(Master_WarQuestSelectionMaster, v80);
    }
  }
  else
  {
    *idList = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)idList,
      0LL,
      titleList,
      explanationList,
      releaseStateList,
      lvList,
      (System_Int32_array *)method,
      v7);
    *titleList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)titleList, 0LL, v154, v155, v156, v157, v158, v159);
    *explanationList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)explanationList, 0LL, v160, v161, v162, v163, v164, v165);
    *releaseStateList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)releaseStateList, 0LL, v166, v167, v168, v169, v170, v171);
    *lvList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)lvList, 0LL, v172, v173, v174, v175, v176, v177);
  }
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo_29371140(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x20
  SkillInfo_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  __int64 v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  unsigned __int64 v37; // x25
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  SkillInfo_array *v46; // x26
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x8
  __int64 v54; // x0
  __int64 v55; // x0
  System_Int32_array *lvList; // [xsp+8h] [xbp-68h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_42EADFD & 1) == 0 )
  {
    sub_B5D5C4(&SkillInfo___TypeInfo, (_DWORD)skillInfoList, isNpc, method);
    sub_B5D5C4(&SkillInfo_TypeInfo, v8, v9, v10);
    byte_42EADFD = 1;
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
  if ( idList && (v17 = *(_QWORD *)&idList->max_length) != 0 )
  {
    v18 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)v17);
    *skillInfoList = v18;
    sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
    if ( (int)v17 >= 1 )
    {
      v25 = (int)v17;
      v26 = 32LL;
      v27 = 8LL;
      do
      {
        v28 = sub_B5D694(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v28, 0LL);
        if ( !v28 )
          goto LABEL_26;
        *(_DWORD *)(v28 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v37 = v27 - 8;
        if ( v27 - 8 >= (unsigned __int64)idList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v28 + 16) = *((_DWORD *)&idList->obj.klass + v27);
        if ( !lvList )
          goto LABEL_26;
        if ( v37 >= lvList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v28 + 20) = *((_DWORD *)&lvList->obj.klass + v27);
        if ( !titleList )
          goto LABEL_26;
        if ( v37 >= titleList->max_length )
          goto LABEL_27;
        v38 = *(System_Int32_array ***)((char *)&titleList->obj.klass + v26);
        *(_QWORD *)(v28 + 32) = v38;
        sub_B5D560((BattleServantConfConponent_o *)(v28 + 32), v38, v31, v32, v33, v34, v35, v36);
        if ( !explanationList )
          goto LABEL_26;
        if ( v37 >= explanationList->max_length )
          goto LABEL_27;
        v45 = *(System_Int32_array ***)((char *)&explanationList->obj.klass + v26);
        *(_QWORD *)(v28 + 40) = v45;
        sub_B5D560((BattleServantConfConponent_o *)(v28 + 40), v45, v39, v40, v41, v42, v43, v44);
        v46 = *skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_B5D69C(v29, v30);
        v29 = sub_B5D684(v28, v46->obj.klass->_1.element_class);
        if ( !v29 )
        {
          v55 = sub_B5D6BC(0LL);
          sub_B5D668(v55, 0LL);
        }
        if ( v37 >= v46->max_length )
        {
LABEL_27:
          v54 = sub_B5D6C8(v29);
          sub_B5D668(v54, 0LL);
        }
        *(Il2CppClass **)((char *)&v46->obj.klass + v26) = (Il2CppClass *)v28;
        sub_B5D560(
          (BattleServantConfConponent_o *)((char *)v46 + v26),
          (System_Int32_array **)v28,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        v53 = v27 - 7;
        ++v27;
        v26 += 8LL;
      }
      while ( v53 < v25 );
    }
  }
  else
  {
    *skillInfoList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)skillInfoList, 0LL, v11, v12, v13, v14, v15, v16);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int LimitCountWithRandom; // w20
  int32_t limitCount; // w21
  BalanceConfig_c *v16; // x0
  ServantLeaderInfo_c *v17; // x0
  int32_t v18; // w19

  if ( (byte_42EADEC & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&OptionManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ServantLeaderInfo_TypeInfo, v11, v12, v13);
    byte_42EADEC = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( LimitCountWithRandom > 10 || !LimitCountWithRandom || NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
    return LimitCountWithRandom;
  limitCount = this->fields.limitCount;
  if ( !limitCount )
    return 0;
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  if ( limitCount == v16->static_fields->ServantLimitMax )
  {
    v17 = ServantLeaderInfo_TypeInfo;
    if ( (BYTE3(ServantLeaderInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLeaderInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLeaderInfo_TypeInfo);
      v17 = ServantLeaderInfo_TypeInfo;
    }
    if ( LimitCountWithRandom == v17->static_fields->LIMIT_COUNT_THIRD_STAGE )
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
  v18 = this->fields.limitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetLimitCountByDispLimit(LimitCountWithRandom - 1, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__GetLimitChangeDic(
        ServantLeaderInfo_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *limitChangeDic; // x0
  const MethodInfo *v16; // x4
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EADF8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, limit, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EADF8 = 1;
  }
  value = 0;
  limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
          limit,
          &value,
          (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    limitChangeDic = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( limitChangeDic )
    {
      limitChangeDic = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          limitChangeDic,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( limitChangeDic )
      {
        value = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                  (ServantLimitSpoilerProtectionMaster_o *)limitChangeDic,
                  this->fields.svtId,
                  limit,
                  v16);
        limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
        if ( limitChangeDic )
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
            limit,
            value,
            (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_B5D69C(limitChangeDic, *(_QWORD *)&limit);
  }
  return value;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLeaderInfo__GetLimitCountWithRandom(
        ServantLeaderInfo_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t ChoiceLimitCount_22316908; // w0
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v11; // x0

  if ( (byte_42EADC8 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, kind, (_DWORD)method, v3);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v6, v7, v8);
    byte_42EADC8 = 1;
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
  ChoiceLimitCount_22316908 = RandomLimitCountManager__GetChoiceLimitCount_22316908(this, 0LL);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_22316908;
  if ( ((1 << kind) & 0x16) == 0 )
    return imageLimitCount;
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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


int32_t __fastcall ServantLeaderInfo__GetRestrictionTargetType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
    return 99;
  else
    return 2;
}


int32_t __fastcall ServantLeaderInfo__GetTimesToRestart(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v17; // x1
  UserEventDataLostEntity_o *v18; // x20
  __int64 v19; // x21
  __int64 v20; // x22
  UserEventDataLostEntity_o *v21; // x20
  __int64 v22; // x19
  __int64 v23; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42EADFF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_UserEventDataLostMaster___,
      (_DWORD)questRestrictionInfo,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    byte_42EADFF = 1;
  }
  entity = 0LL;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v18 = entity;
      v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v26.fields.currentCryptoKey = v20;
      *(_QWORD *)&v26.fields.fakeValue = v19;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
      if ( !v18 )
        goto LABEL_24;
      if ( UserEventDataLostEntity__IsRestart(v18, UserId, 0LL) )
      {
        v21 = entity;
        v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v27.fields.currentCryptoKey = v23;
        *(_QWORD *)&v27.fields.fakeValue = v22;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
        if ( v21 )
          return UserEventDataLostEntity__GetTimesToRestart(v21, UserId, 0LL);
LABEL_24:
        sub_B5D69C(UserId, v17);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v17; // x1
  UserEventDataLostEntity_o *v18; // x20
  __int64 v19; // x21
  __int64 v20; // x22
  UserEventDataLostEntity_o *v21; // x20
  __int64 v22; // x19
  __int64 v23; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42EADFE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_UserEventDataLostMaster___,
      (_DWORD)questRestrictionInfo,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    byte_42EADFE = 1;
  }
  entity = 0LL;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
  v18 = entity;
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v20;
  *(_QWORD *)&v26.fields.fakeValue = v19;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
  if ( !v18 )
    goto LABEL_25;
  if ( UserEventDataLostEntity__IsRestart(v18, UserId, 0LL) )
    return 0;
  v21 = entity;
  v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v23;
  *(_QWORD *)&v27.fields.fakeValue = v22;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  if ( !v21 )
LABEL_25:
    sub_B5D69C(UserId, v17);
  return UserEventDataLostEntity__IsDataLost(v21, UserId, 0LL);
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
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  int32_t limitCount; // w21
  int32_t v10; // w22
  const MethodInfo *v11; // x1
  int32_t DispLimitCount; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42EAE00 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)questRestrictionInfo,
      (_DWORD)method,
      v3);
    byte_42EAE00 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  limitCount = this->fields.limitCount;
  v10 = v8;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v11);
  return QuestRestrictionInfo__IsSlotRestrictionForSupport(questRestrictionInfo, v10, limitCount, DispLimitCount, 0LL);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  int32_t limitCount; // w21
  int32_t v10; // w22
  const MethodInfo *v11; // x1
  int32_t DispLimitCount; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42EADE1 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)questRestrictionInfo,
      (_DWORD)method,
      v3);
    byte_42EADE1 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  limitCount = this->fields.limitCount;
  v10 = v8;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v11);
  return QuestRestrictionInfo__IsUniqueIndividuality_34267908(
           questRestrictionInfo,
           v10,
           limitCount,
           DispLimitCount,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction_29359140(
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

  if ( (byte_42EADE2 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)questRestrictionInfo,
      (_DWORD)partyItem,
      *(_QWORD *)&num);
    byte_42EADE2 = 1;
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return QuestRestrictionInfo__IsUniqueIndividuality_34268556(
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  struct System_String_o **p_overwriteServantName; // x21
  BattleServantConfConponent_o *p_overwriteServantDetailName; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v38; // x23
  __int64 v39; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x22
  ServantEntity_o *v41; // x22
  const MethodInfo *v42; // x1
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w23
  int32_t v45; // w24
  int32_t LimitCountByDispLimit; // w0
  System_Int32_array **Name; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v55; // x24
  __int64 v56; // x25
  ServantLimitAddMaster_o *v57; // x23
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int32_t CardImageLimitCount; // w19
  int32_t LimitCountByImageLimitCostumeIn; // w0
  System_Int32_array **v68; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_42EADF9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42EADF9 = 1;
  }
  this->fields.overwriteServantName = 0LL;
  p_overwriteServantName = &this->fields.overwriteServantName;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.overwriteServantName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.overwriteServantDetailName = 0LL;
  p_overwriteServantDetailName = (BattleServantConfConponent_o *)&this->fields.overwriteServantDetailName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.overwriteServantDetailName,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v39 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v69.fields.currentCryptoKey = v39;
  *(_QWORD *)&v69.fields.fakeValue = v38;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v69, 0LL);
  if ( !v40 )
    goto LABEL_28;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v40,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_28;
  v41 = (ServantEntity_o *)Instance;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v42);
  limitCount = this->fields.limitCount;
  v45 = DispLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v45, limitCount, 0LL);
  Name = (System_Int32_array **)ServantEntity__getName(v41, LimitCountByDispLimit, -1, 0LL);
  *p_overwriteServantName = (struct System_String_o *)Name;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.overwriteServantName, Name, v48, v49, v50, v51, v52, v53);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v56 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v55 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v57 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v56;
  *(_QWORD *)&v70.fields.fakeValue = v55;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  if ( !v57 )
LABEL_28:
    sub_B5D69C(Instance, v36);
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName(v57, (int32_t)Instance, v58) )
  {
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v59);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
    v68 = (System_Int32_array **)ServantEntity__getName(v41, -1, LimitCountByImageLimitCostumeIn, 0LL);
    p_overwriteServantDetailName->klass = (BattleServantConfConponent_c *)v68;
  }
  else
  {
    v68 = (System_Int32_array **)*p_overwriteServantName;
    p_overwriteServantDetailName->klass = (BattleServantConfConponent_c *)*p_overwriteServantName;
  }
  sub_B5D560(p_overwriteServantDetailName, v68, v60, v61, v62, v63, v64, v65);
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x21
  __int64 v15; // x22
  DataManager_o *Instance; // x0
  unsigned __int64 v17; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v22; // x23
  unsigned __int64 v23; // x19
  signed __int64 v24; // x22
  SkillLvEntity_o *v25; // x24
  __int64 v26; // x25
  __int64 v27; // x26
  int32_t v28; // w25
  int32_t limitCount; // w26
  int32_t EventId; // w0
  bool v31; // w27
  System_Int32_array *SkillIdList; // x23
  const MethodInfo *v33; // x1
  System_Int32_array *SkillLevelList; // x0
  System_Int32_array *v35; // x24
  unsigned __int64 i; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v38; // x25
  __int64 v39; // x26
  __int64 v40; // x27
  int32_t v41; // w26
  int32_t v42; // w28
  int32_t v43; // w0
  __int64 v45; // x0
  int32_t wearesDispLimitCount; // [xsp+14h] [xbp-6Ch]
  EventUpValSetupInfo_o *v47; // [xsp+18h] [xbp-68h]
  int32_t *v48; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_42EADDA & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)setupInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EADDA = 1;
  }
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v15;
  *(_QWORD *)&v50.fields.fakeValue = v14;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v50, 0LL) >= 1 )
  {
    v47 = setupInfo;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_42:
      sub_B5D69C(Instance, v17);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    wearesDispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v19);
    Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v20);
    if ( Instance )
    {
      datalist = Instance->fields.datalist;
      v22 = Instance;
      if ( (int)datalist >= 1 )
      {
        v23 = 0LL;
        v24 = (int)datalist;
        while ( 1 )
        {
          v17 = *((unsigned int *)&v22->fields.lookup + v23);
          if ( (int)v17 >= 1 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_42;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v17, 1, 0LL);
            if ( Instance )
            {
              v25 = (SkillLvEntity_o *)Instance;
              v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v51.fields.currentCryptoKey = v27;
              *(_QWORD *)&v51.fields.fakeValue = v26;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v51, 0LL);
              if ( !v47 )
                goto LABEL_42;
              v28 = (int)Instance;
              limitCount = this->fields.limitCount;
              EventId = EventUpValSetupInfo__get_EventId(v47, 0LL);
              v31 = 1;
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal(
                                            v25,
                                            v28,
                                            limitCount,
                                            wearesDispLimitCount,
                                            v47,
                                            EventId,
                                            1,
                                            0,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v31;
            }
          }
          if ( (__int64)++v23 >= v24 )
            break;
          if ( v23 >= LODWORD(v22->fields.datalist) )
          {
LABEL_43:
            v45 = sub_B5D6C8(Instance);
            sub_B5D668(v45, 0LL);
          }
        }
      }
    }
    SkillIdList = ServantLeaderInfo__getSkillIdList(this, (const MethodInfo *)v17);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v33);
    v48 = &SkillLevelList->m_Items[1];
    v35 = SkillLevelList;
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
      v17 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v17 >= 1 )
      {
        if ( !v35 )
          goto LABEL_42;
        if ( i >= v35->max_length )
          goto LABEL_43;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_42;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v17, v48[i], 0LL);
        if ( Entity )
        {
          v38 = Entity;
          v40 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v39 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v52.fields.currentCryptoKey = v40;
          *(_QWORD *)&v52.fields.fakeValue = v39;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v52, 0LL);
          if ( !v47 )
            goto LABEL_42;
          v41 = (int)Instance;
          v42 = this->fields.limitCount;
          v43 = EventUpValSetupInfo__get_EventId(v47, 0LL);
          v31 = 1;
          if ( SkillLvEntity__getEventUpVal(v38, v41, v42, wearesDispLimitCount, v47, v43, 1, 0, 0LL) )
            return v31;
        }
      }
    }
  }
  return 0;
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal_29357232(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x20
  __int64 v16; // x22
  DataManager_o *Instance; // x0
  unsigned __int64 v18; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v21; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v23; // x22
  bool v24; // w23
  unsigned __int64 v25; // x24
  signed __int64 v26; // x25
  System_Int32_array *SkillIdList; // x22
  const MethodInfo *v28; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  SkillLvEntity_o *Entity; // x0
  __int64 v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_42EADDD & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)eventUpVallInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EADDD = 1;
  }
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v16;
  *(_QWORD *)&v33.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v33, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_39;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_39:
    sub_B5D69C(Instance, v18);
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v21);
  if ( Instance && (datalist = Instance->fields.datalist, v23 = Instance, (int)datalist >= 1) )
  {
    v24 = 0;
    v25 = 0LL;
    v26 = (int)datalist;
    while ( 1 )
    {
      v18 = *((unsigned int *)&v23->fields.lookup + v25);
      if ( (int)v18 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_39;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v18, 1, 0LL);
        if ( Instance )
        {
          Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_26836992(
                                        (SkillLvEntity_o *)Instance,
                                        eventUpVallInfo,
                                        1,
                                        0,
                                        1,
                                        0,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v24 = 1;
        }
      }
      if ( (__int64)++v25 >= v26 )
        break;
      if ( v25 >= LODWORD(v23->fields.datalist) )
      {
LABEL_40:
        v32 = sub_B5D6C8(Instance);
        sub_B5D668(v32, 0LL);
      }
    }
  }
  else
  {
    v24 = 0;
  }
  SkillIdList = ServantLeaderInfo__getSkillIdList(this, (const MethodInfo *)v18);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v28);
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
    v18 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v18 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_39;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_40;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_39;
      Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v18, SkillLevelList->m_Items[i + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_26836992(Entity, eventUpVallInfo, 1, 0, 1, 0, 0LL) )
          v24 = 1;
      }
    }
  }
  return v24;
}


int32_t __fastcall ServantLeaderInfo__getBaseFriendPointUpVal(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x19
  __int64 v15; // x20
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v19; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v21; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x22
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  __int64 v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42EADD6 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EADD6 = 1;
  }
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v15;
  *(_QWORD *)&v27.fields.fakeValue = v14;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B5D69C(Instance, v17);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__getSkillIdList(this, v19);
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
        goto LABEL_24;
      if ( i >= SkillIdList->max_length )
        goto LABEL_25;
      v17 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v17 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v26 = sub_B5D6C8(Instance);
          sub_B5D668(v26, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v17, SkillLevelList->m_Items[i + 1], 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x2
  __int64 v15; // x20
  __int64 v16; // x21
  int32_t v17; // w20
  BalanceConfig_c *v18; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int LimitCountWithRandom; // w20
  const MethodInfo *v21; // x2
  bool v22; // vf
  bool v23; // w1
  ServantLeaderInfo_o *v24; // x0
  __int64 v26; // x21
  __int64 v27; // x22
  int32_t v28; // w19
  int32_t v29; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42EADEF & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&OptionManager_TypeInfo, v11, v12, v13);
    byte_42EADEF = 1;
  }
  if ( ConstantMaster__IsOtherImage(0LL) )
  {
    v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v16;
    *(_QWORD *)&v30.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
    v18 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    static_fields = v18->static_fields;
    if ( v17 < static_fields->ExclusiveNpcServantIdStart )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->OtherImageLimitCount;
    }
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 0, v14);
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
    v24 = this;
    v23 = 0;
    return ServantLeaderInfo__getMaxCardImageLimitCount(v24, v23, v21);
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
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v27;
  *(_QWORD *)&v31.fields.fakeValue = v26;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v29, v28, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int LimitCountWithRandom; // w20
  const MethodInfo *v6; // x1
  bool v7; // vf

  if ( (byte_42EADED & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EADED = 1;
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
    return ServantLeaderInfo__getMaxCommandCardLimitCount(this, v6);
  }
  v7 = __OFSUB__(LimitCountWithRandom--, 1);
  if ( LimitCountWithRandom < 0 == v7 )
    return LimitCountWithRandom;
  return ServantLeaderInfo__getMaxCommandCardLimitCount(this, v6);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEntity_o *__fastcall ServantLeaderInfo__getCommandCodeEntity(
        ServantLeaderInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantLeaderInfo_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct CommandCodeStatus_array *commandCode; // x10
  int max_length; // w8
  __int64 v17; // x9
  CommandCodeStatus_o **m_Items; // x10
  CommandCodeStatus_o *v19; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x20
  __int64 v23; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x19
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v5 = this;
  if ( (byte_42EADF6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    this = (ServantLeaderInfo_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EADF6 = 1;
  }
  commandCode = v5->fields.commandCode;
  if ( !commandCode )
    return 0LL;
  max_length = commandCode->max_length;
  if ( max_length < 1 )
    return 0LL;
  v17 = 0LL;
  m_Items = commandCode->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v17 >= max_length )
    {
      v25 = sub_B5D6C8(this);
      sub_B5D668(v25, 0LL);
    }
    v19 = m_Items[v17];
    if ( !v19 )
      goto LABEL_18;
    if ( v19->fields.idx == index )
      break;
    if ( (int)++v17 >= max_length )
      return 0LL;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v23 = *(_QWORD *)&v19->fields.commandCodeId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v19->fields.commandCodeId.fields.fakeValue;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v23;
  *(_QWORD *)&v26.fields.fakeValue = v22;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
  if ( !v24 )
LABEL_18:
    sub_B5D69C(this, *(_QWORD *)&index);
  return (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v24,
                                  (int32_t)this,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
}


System_Int32_array *__fastcall ServantLeaderInfo__getCommandCodeIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BalanceConfig_c *v11; // x0
  BalanceConfig_c *v12; // x0
  __int64 v13; // x1
  struct CommandCodeStatus_array *commandCode; // x23
  int max_length; // w8
  System_Int32_array *v16; // x19
  int i; // w24
  CommandCodeStatus_o *v18; // x20
  int32_t idx; // w21
  __int64 v20; // x26
  __int64 v21; // x20
  __int64 v22; // x21
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42EADF5 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    byte_42EADF5 = 1;
  }
  if ( !this->fields.commandCode )
    return 0LL;
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (BalanceConfig_c *)sub_B5D5DC(int___TypeInfo, (unsigned int)v11->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_26:
    sub_B5D69C(v12, v13);
  max_length = commandCode->max_length;
  v16 = (System_Int32_array *)v12;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
LABEL_27:
        v24 = sub_B5D6C8(v12);
        sub_B5D668(v24, 0LL);
      }
      v18 = commandCode->m_Items[i];
      if ( !v18 )
        goto LABEL_26;
      v12 = BalanceConfig_TypeInfo;
      idx = v18->fields.idx;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v12 = BalanceConfig_TypeInfo;
      }
      if ( idx < v12->static_fields->SvtCommandCardMax )
      {
        v20 = v18->fields.idx;
        v22 = *(_QWORD *)&v18->fields.commandCodeId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&v18->fields.commandCodeId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v25.fields.currentCryptoKey = v22;
        *(_QWORD *)&v25.fields.fakeValue = v21;
        v12 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
        if ( !v16 )
          goto LABEL_26;
        if ( (unsigned int)v20 >= v16->max_length )
          goto LABEL_27;
        v16->m_Items[v20 + 1] = (int)v12;
      }
      max_length = commandCode->max_length;
    }
  }
  return v16;
}


int32_t __fastcall ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int LimitCountWithRandom; // w20
  const MethodInfo *v6; // x1
  bool v7; // vf

  if ( (byte_42EADE9 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EADE9 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 1, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
    v7 = __OFSUB__(LimitCountWithRandom--, 1);
    if ( LimitCountWithRandom < 0 == v7 )
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
  return ServantLeaderInfo__getMaxDispLimitCount(this, v6);
}


int32_t __fastcall ServantLeaderInfo__getDispSelectLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t LimitCountWithRandom; // w21
  int32_t limitCount; // w22
  int32_t v10; // w0
  int32_t v11; // w1
  int32_t v12; // w19

  if ( (byte_42EADEB & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    byte_42EADEB = 1;
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
        v10 = LimitCountWithRandom - 1;
        v11 = limitCount;
        return ImageLimitCount__GetLimitCountByDispLimit(v10, v11, 0LL);
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
    v12 = this->fields.limitCount;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    v10 = LimitCountWithRandom - 1;
    v11 = v12;
    return ImageLimitCount__GetLimitCountByDispLimit(v10, v11, 0LL);
  }
  return limitCount;
}


bool __fastcall ServantLeaderInfo__getEquipEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x22
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

  if ( (byte_42EADD9 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)setupInfo, (_DWORD)method, v3);
    byte_42EADD9 = 1;
  }
  if ( !setupInfo )
    return 0;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v7;
  *(_QWORD *)&v17.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL) < 1 )
    return 0;
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
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

  if ( (byte_42EADE7 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)exp, (_DWORD)lateExp, barExp);
    byte_42EADE7 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL) >= 1 )
  {
    v13 = this->fields.equipTarget1;
    if ( !v13 )
      sub_B5D69C(0LL, v12);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  __int64 v15; // x1
  EquipTargetInfo_o *v16; // x0
  BalanceConfig_c *v17; // x0
  SkillInfo_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42EADD2 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SkillInfo___TypeInfo, v9, v10, v11);
    byte_42EADD2 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_10;
  v14 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v14;
  *(_QWORD *)&v25.fields.fakeValue = v13;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL) >= 1 )
  {
    v16 = this->fields.equipTarget1;
    if ( !v16 )
      sub_B5D69C(0LL, v15);
    EquipTargetInfo__getSkillInfo(v16, skillInfoList, 0LL);
  }
  else
  {
LABEL_10:
    v17 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    v18 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)v17->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v18;
    sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
  }
}


bool __fastcall ServantLeaderInfo__getEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x22
  const MethodInfo *v8; // x2
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

  if ( (byte_42EADD7 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)setupInfo, (_DWORD)method, v3);
    byte_42EADD7 = 1;
  }
  if ( !setupInfo )
    return 0;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL) < 1 )
    return 0;
  if ( ServantLeaderInfo__getBaseEventUpVal(this, setupInfo, v8) )
    return 1;
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
  limitCount = this->fields.limitCount;
  v14 = v12;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v15);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v14, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEventUpVal_29356828(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w0
  int32_t limitCount; // w22
  int32_t v14; // w23
  const MethodInfo *v15; // x1
  int32_t DispLimitCount; // w0
  int32_t npcFlag; // w24
  int32_t v18; // w25
  EventUpValInfo_o *v19; // x26
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  bool BaseEventUpVal_29357232; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v29; // w21
  EventUpValInfo_o *v30; // x24
  __int64 v31; // x22
  __int64 v32; // x23
  EquipTargetInfo_o *v33; // x0
  __int64 v34; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42EADDB & 1) == 0 )
  {
    sub_B5D5C4(&EventUpValInfo_TypeInfo, (_DWORD)eventUpVallInfo, (_DWORD)setupInfo, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8, v9);
    byte_42EADDB = 1;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v11;
  *(_QWORD *)&v36.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v36, 0LL);
  limitCount = this->fields.limitCount;
  v14 = v12;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v15);
  npcFlag = this->fields.npcFlag;
  v18 = DispLimitCount;
  v19 = (EventUpValInfo_o *)sub_B5D694(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v19, setupInfo, v14, limitCount, v18, npcFlag, 0LL);
  *eventUpVallInfo = v19;
  sub_B5D560((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL) < 1 )
    return 0;
  BaseEventUpVal_29357232 = ServantLeaderInfo__getBaseEventUpVal_29357232(this, eventUpVallInfo, v26);
  equipTarget1 = this->fields.equipTarget1;
  v29 = BaseEventUpVal_29357232;
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
  *(_QWORD *)&v37.fields.currentCryptoKey = v32;
  *(_QWORD *)&v37.fields.fakeValue = v31;
  v33 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
  if ( !v30 || (v30->fields.equipSvtId = (int)v33, (v33 = this->fields.equipTarget1) == 0LL) )
    sub_B5D69C(v33, v34);
  return (v29 | EquipTargetInfo__getEventUpVal_30734952(v33, eventUpVallInfo, 1, 0LL)) & 1;
}


bool __fastcall ServantLeaderInfo__getEventUpVal_29357872(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool *isServantEventUpVal,
        bool *isEquipEventUpVal,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x24
  __int64 v15; // x25
  int32_t v16; // w0
  int32_t limitCount; // w24
  int32_t v18; // w25
  const MethodInfo *v19; // x1
  int32_t DispLimitCount; // w0
  int32_t npcFlag; // w26
  int32_t v22; // w27
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
  __int64 v36; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42EADDC & 1) == 0 )
  {
    sub_B5D5C4(&EventUpValInfo_TypeInfo, (_DWORD)eventUpVallInfo, (_DWORD)isServantEventUpVal, isEquipEventUpVal);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    byte_42EADDC = 1;
  }
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v15;
  *(_QWORD *)&v38.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v38, 0LL);
  limitCount = this->fields.limitCount;
  v18 = v16;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v19);
  npcFlag = this->fields.npcFlag;
  v22 = DispLimitCount;
  v23 = (EventUpValInfo_o *)sub_B5D694(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v23, setupInfo, v18, limitCount, v22, npcFlag, 0LL);
  *eventUpVallInfo = v23;
  sub_B5D560((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_29357232(this, eventUpVallInfo, v30) )
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
      *(_QWORD *)&v39.fields.currentCryptoKey = v34;
      *(_QWORD *)&v39.fields.fakeValue = v33;
      v35 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v39, 0LL);
      if ( !v32 || (v32->fields.equipSvtId = (int)v35, (v35 = this->fields.equipTarget1) == 0LL) )
        sub_B5D69C(v35, v36);
      if ( EquipTargetInfo__getEventUpVal_30734952(v35, eventUpVallInfo, 1, 0LL) )
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v24; // x24
  __int64 v25; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x23
  WarEntity_o *Entity; // x23
  const MethodInfo *v28; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v30; // x24
  int datalist; // w25
  float v32; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_42EADE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, (_DWORD)exp, (_DWORD)lateExp, barExp);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EADE6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v25 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v34.fields.currentCryptoKey = v25;
  *(_QWORD *)&v34.fields.fakeValue = v24;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v34, 0LL);
  if ( !v26 )
    goto LABEL_22;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v26,
             (int32_t)Instance,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v28) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v30 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v30, HIDWORD(Entity[1].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - datalist;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.datalist) - this->fields.exp;
      v32 = (float)*exp / (float)(LODWORD(Instance->fields.datalist) - datalist);
      goto LABEL_21;
    }
LABEL_22:
    sub_B5D69C(Instance, v22);
  }
  v32 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_21:
  *barExp = v32;
  return 1;
}


int32_t __fastcall ServantLeaderInfo__getFrameType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x21
  __int64 v18; // x22
  ServantExceedMaster_o *v19; // x20
  int32_t FrameType_30842504; // w20
  ServantLvDetailMaster_o *v21; // x21
  const MethodInfo *v22; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_42EADE8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EADE8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantExceedMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v18;
  *(_QWORD *)&v24.fields.fakeValue = v17;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v24, 0LL);
  if ( !v19
    || (FrameType_30842504 = ServantExceedMaster__GetFrameType_30842504(
                               v19,
                               (int32_t)Instance,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v21 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (WebViewManager_o *)ServantLeaderInfo__getRarity(this, v22),
        !v21) )
  {
LABEL_11:
    sub_B5D69C(Instance, v15);
  }
  return ServantLvDetailMaster__GetFrameType(v21, (int32_t)Instance, this->fields.lv, FrameType_30842504, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getFriendPointUpType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x21
  const MethodInfo *v7; // x1
  int32_t BaseFriendPointUpVal; // w0
  __int64 v9; // x1
  EquipTargetInfo_o *equipTarget1; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42EADD5 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EADD5 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v12, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v7);
  if ( !this->fields.equipTarget1
    || EquipTargetInfo__getFriendPointUpVal(this->fields.equipTarget1, 0LL) <= BaseFriendPointUpVal )
  {
    return 0;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    sub_B5D69C(0LL, v9);
  return EquipTargetInfo__getFriendPointUpType(equipTarget1, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getFriendPointUpVal(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x21
  const MethodInfo *v7; // x1
  int32_t BaseFriendPointUpVal; // w0
  EquipTargetInfo_o *equipTarget1; // x8
  int32_t v10; // w19
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42EADD4 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EADD4 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v12, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v7);
  equipTarget1 = this->fields.equipTarget1;
  v10 = BaseFriendPointUpVal;
  if ( !equipTarget1 )
    return v10;
  result = EquipTargetInfo__getFriendPointUpVal(equipTarget1, 0LL);
  if ( result <= v10 )
    return v10;
  return result;
}


int32_t __fastcall ServantLeaderInfo__getIconLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int LimitCountWithRandom; // w20
  const MethodInfo *v12; // x2
  bool v13; // vf
  bool v14; // w1
  ServantLeaderInfo_o *v15; // x0
  __int64 v17; // x21
  __int64 v18; // x22
  int32_t v19; // w19
  int32_t v20; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42EADF1 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&OptionManager_TypeInfo, v8, v9, v10);
    byte_42EADF1 = 1;
  }
  LimitCountWithRandom = ServantLeaderInfo__GetLimitCountWithRandom(this, 3, v2);
  if ( NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0LL) )
  {
    if ( LimitCountWithRandom > 10 )
      return LimitCountWithRandom;
    v13 = __OFSUB__(LimitCountWithRandom--, 1);
    if ( LimitCountWithRandom < 0 == v13 )
      return LimitCountWithRandom;
    v14 = 1;
    v15 = this;
    return ServantLeaderInfo__getMaxIconLimitCount(v15, v14, v12);
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
    v15 = this;
    v14 = 0;
    return ServantLeaderInfo__getMaxIconLimitCount(v15, v14, v12);
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
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = LimitCountWithRandom - (LimitCountWithRandom < 3);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v20, v19, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getLevelMax(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x21
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  ServantLimitMaster_o *v21; // x20
  const MethodInfo *v22; // x3
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v24; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_42EADCA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EADCA = 1;
  }
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v15;
  *(_QWORD *)&v27.fields.fakeValue = v14;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v20;
  *(_QWORD *)&v28.fields.fakeValue = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v28, 0LL);
  if ( !v21
    || (Entity = ServantLimitMaster__GetEntity(v21, (int32_t)Instance, this->fields.limitCount, v22),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_19:
    sub_B5D69C(Instance, v17);
  }
  v24 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0LL);
  lvMax = Entity->fields.lvMax;
  if ( v24 )
    lvMax += v24->fields.addLvMax;
  return lvMax;
}


int32_t __fastcall ServantLeaderInfo__getMaxCardImageLimitCount(
        ServantLeaderInfo_o *this,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w0
  int32_t limitCount; // w20
  int32_t v13; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42EADF0 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, isNpc, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42EADF0 = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetCardImageLimitCount(v13, limitCount, 0, isNpc, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxCommandCardLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  int32_t limitCount; // w19
  int32_t v12; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42EADEE & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    byte_42EADEE = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v10;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v12, limitCount, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  int32_t limitCount; // w19
  int32_t v12; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42EADEA & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    byte_42EADEA = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v10;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v12, limitCount, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxIconLimitCount(
        ServantLeaderInfo_o *this,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w0
  int32_t limitCount; // w20
  int32_t v13; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42EADF2 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, isNpc, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42EADF2 = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetCardImageLimitCount(v13, limitCount, 0, isNpc, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getMaxPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  int32_t limitCount; // w19
  int32_t v12; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42EADF4 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    byte_42EADF4 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v10;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v12, limitCount, 0LL);
}


System_Int32_array *__fastcall ServantLeaderInfo__getPassiveSkillIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *p_classPassive; // x19
  WebViewManager_o *Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x21
  __int64 v19; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x20
  WarEntity_o *Entity; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **longName; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42EADCF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EADCF = 1;
  }
  p_classPassive = (BattleServantConfConponent_o *)&this->fields.classPassive;
  if ( !this->fields.classPassive )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v19;
    *(_QWORD *)&v30.fields.fakeValue = v18;
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
    if ( !v20 )
LABEL_12:
      sub_B5D69C(Instance, v16);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
    {
      longName = (System_Int32_array **)Entity[1].fields.longName;
      p_classPassive->klass = (BattleServantConfConponent_c *)longName;
      sub_B5D560(p_classPassive, longName, v22, v23, v24, v25, v26, v27);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Int32_array *PassiveSkillIdList; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x23
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
  __int64 v44; // x1
  __int64 v45; // x22
  __int64 v46; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v54; // x22
  unsigned int v55; // w25
  __int64 v56; // x26
  __int64 v57; // x27
  System_Int32_array *v58; // x8
  unsigned __int64 v59; // x28
  SkillEntity_o *v60; // x23
  System_String_array *v61; // x20
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x24
  Il2CppClass **v69; // x0
  System_String_array *v70; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x23
  Il2CppClass **v78; // x0
  System_Int32_array *v79; // x8
  unsigned __int64 max_length; // x9
  System_Int32_array *v81; // x8
  System_Int32_array *v82; // x8
  __int64 v83; // x8
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  __int64 v90; // x0
  __int64 v91; // x0

  if ( (byte_42EADD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11, v12);
    sub_B5D5C4(&string___TypeInfo, v13, v14, v15);
    byte_42EADD3 = 1;
  }
  PassiveSkillIdList = ServantLeaderInfo__getPassiveSkillIdList(this, (const MethodInfo *)idList);
  *idList = PassiveSkillIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)idList,
    (System_Int32_array **)PassiveSkillIdList,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !*idList )
    goto LABEL_39;
  v29 = *(_QWORD *)&(*idList)->max_length;
  if ( !v29 )
    goto LABEL_39;
  v30 = (System_String_array *)sub_B5D5DC(string___TypeInfo, (unsigned int)v29);
  *titleList = v30;
  sub_B5D560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_String_array *)sub_B5D5DC(string___TypeInfo, (unsigned int)v29);
  *explanationList = v37;
  sub_B5D560((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
  v45 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v46 = **(_QWORD **)(v45 + 192);
  if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
    sub_AF52C4(v46);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v46 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_40:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, v44);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)v29 < 1 )
    goto LABEL_38;
  v54 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v55 = 0;
  v56 = (int)v29;
  v57 = 8LL;
  do
  {
    v58 = *idList;
    if ( !*idList )
      goto LABEL_40;
    v59 = v57 - 8;
    if ( v57 - 8 >= (unsigned __int64)v58->max_length )
      goto LABEL_41;
    v44 = *((unsigned int *)&v58->obj.klass + v57);
    if ( (int)v44 >= 1 )
    {
      if ( !v54 )
        goto LABEL_40;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              v54,
                                                              v44,
                                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v60 = (SkillEntity_o *)MasterData_WarQuestSelectionMaster;
        v61 = *titleList;
        MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getEffectTitle(
                                                                (SkillEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                0,
                                                                0LL);
        if ( !v61 )
          goto LABEL_40;
        v68 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (DataManager_o *)sub_B5D684(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  v61->obj.klass->_1.element_class);
          if ( !MasterData_WarQuestSelectionMaster )
          {
LABEL_42:
            v91 = sub_B5D6BC(MasterData_WarQuestSelectionMaster);
            sub_B5D668(v91, 0LL);
          }
        }
        if ( v55 >= v61->max_length )
          goto LABEL_41;
        v69 = &v61->obj.klass + (int)v55;
        v69[4] = (Il2CppClass *)v68;
        sub_B5D560((BattleServantConfConponent_o *)(v69 + 4), v68, v62, v63, v64, v65, v66, v67);
        v70 = *explanationList;
        MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getEffectExplanation(v60, 0, 0LL);
        if ( !v70 )
          goto LABEL_40;
        v77 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (DataManager_o *)sub_B5D684(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  v70->obj.klass->_1.element_class);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_42;
        }
        if ( v55 >= v70->max_length )
          goto LABEL_41;
        v78 = &v70->obj.klass + (int)v55;
        v78[4] = (Il2CppClass *)v77;
        sub_B5D560((BattleServantConfConponent_o *)(v78 + 4), v77, v71, v72, v73, v74, v75, v76);
        if ( v59 != v55 )
        {
          v79 = *idList;
          if ( !*idList )
            goto LABEL_40;
          max_length = v79->max_length;
          if ( v59 >= max_length || v55 >= (unsigned int)max_length )
            goto LABEL_41;
          v79->m_Items[v55 + 1] = *((_DWORD *)&v79->obj.klass + v57);
          v81 = *idList;
          if ( !*idList )
            goto LABEL_40;
          if ( v59 >= v81->max_length )
            goto LABEL_41;
          *((_DWORD *)&v81->obj.klass + v57) = 0;
        }
        ++v55;
      }
      else
      {
        v82 = *idList;
        if ( !*idList )
          goto LABEL_40;
        if ( v59 >= v82->max_length )
        {
LABEL_41:
          v90 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
          sub_B5D668(v90, 0LL);
        }
        *((_DWORD *)&v82->obj.klass + v57) = 0;
      }
    }
    v83 = v57 - 7;
    ++v57;
  }
  while ( v83 < v56 );
  if ( !v55 )
  {
LABEL_38:
    *idList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)idList, 0LL, v48, v49, v50, v51, v52, v53);
LABEL_39:
    *titleList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)titleList, 0LL, v23, v24, v25, v26, v27, v28);
    *explanationList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)explanationList, 0LL, v84, v85, v86, v87, v88, v89);
  }
}


int32_t __fastcall ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int LimitCountWithRandom; // w20
  const MethodInfo *v6; // x1
  bool v7; // vf

  if ( (byte_42EADF3 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EADF3 = 1;
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
    return ServantLeaderInfo__getMaxPortraitLimitCount(this, v6);
  }
  v7 = __OFSUB__(LimitCountWithRandom--, 1);
  if ( LimitCountWithRandom < 0 == v7 )
    return LimitCountWithRandom;
  return ServantLeaderInfo__getMaxPortraitLimitCount(this, v6);
}


bool __fastcall ServantLeaderInfo__getQuestRestriction(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  int32_t limitCount; // w21
  int32_t v10; // w22
  const MethodInfo *v11; // x1
  int32_t DispLimitCount; // w0
  int32_t npcFlag; // w8
  int32_t lv; // w23
  int32_t v15; // w20
  int32_t v16; // w5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42EADDE & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)questRestrictionInfo,
      (_DWORD)method,
      v3);
    byte_42EADDE = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
  limitCount = this->fields.limitCount;
  v10 = v8;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v11);
  npcFlag = this->fields.npcFlag;
  lv = this->fields.lv;
  v15 = DispLimitCount;
  if ( NpcServantFollowerEntity__IsNpc(npcFlag, 0LL) )
    v16 = 99;
  else
    v16 = 2;
  return QuestRestrictionInfo__IsRestriction_34263116(questRestrictionInfo, v10, limitCount, v15, lv, v16, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getRarity(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x21
  __int64 v15; // x22
  ServantLimitMaster_o *v16; // x20
  const MethodInfo *v17; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_42EADCB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EADCB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
  if ( !v16 || (Instance = ServantLimitMaster__GetEntity(v16, (int32_t)Instance, this->fields.limitCount, v17)) == 0LL )
LABEL_10:
    sub_B5D69C(Instance, v12);
  return *((_DWORD *)Instance + 6);
}


bool __fastcall ServantLeaderInfo__getServantEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x22
  const MethodInfo *v8; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42EADD8 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)setupInfo, (_DWORD)method, v3);
    byte_42EADD8 = 1;
  }
  if ( !setupInfo )
    return 0;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v10, 0LL) >= 1
      && ServantLeaderInfo__getBaseEventUpVal(this, setupInfo, v8);
}


int32_t __fastcall ServantLeaderInfo__getServantLevel(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *__fastcall ServantLeaderInfo__getSkillIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  System_Int32_array *result; // x0
  __int64 v10; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v12; // x0

  if ( (byte_42EADCD & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42EADCD = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
  if ( !result )
    sub_B5D69C(0LL, v10);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillId1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillId2, max_length <= 2) )
  {
    v12 = sub_B5D6C8(result);
    sub_B5D668(v12, 0LL);
  }
  result->m_Items[3] = this->fields.skillId3;
  return result;
}


void __fastcall ServantLeaderInfo__getSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x21
  __int64 v26; // x21
  __int64 EffectChargeTurn; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v29; // x21
  __int64 v30; // x21
  const MethodInfo *v31; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v33; // x1
  BalanceConfig_c **v34; // x25
  System_Int32_array *SkillLevelList; // x22
  BalanceConfig_c *v36; // x8
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  unsigned __int64 v44; // x20
  il2cpp_array_size_t v45; // w19
  int32_t *v46; // x24
  int32_t *v47; // x28
  WarEntity_o *Entity; // x0
  SkillEntity_o *v49; // x26
  BalanceConfig_c **v50; // x23
  __int64 v51; // x25
  __int64 v52; // x27
  ServantSkillEntity_o *EntityFromSkillId; // x27
  __int64 v54; // x25
  System_Int32_array **EffectTitle; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **EffectExplanation; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int32_t skillNum; // w8
  BattleServantConfConponent_c *klass; // x26
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  void **v77; // x0
  int32_t *v78; // x20
  int32_t *v79; // x23
  __int64 v80; // x0
  __int64 v81; // x0
  ServantSkillMaster_o *v82; // [xsp+0h] [xbp-70h]
  DataMasterBase_WarMaster__WarEntity__int__o *v83; // [xsp+8h] [xbp-68h]
  BattleServantConfConponent_o *v85; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  v85 = (BattleServantConfConponent_o *)skillInfoList;
  if ( (byte_42EADD1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16, v17, v18);
    sub_B5D5C4(&SkillInfo___TypeInfo, v19, v20, v21);
    sub_B5D5C4(&SkillInfo_TypeInfo, v22, v23, v24);
    byte_42EADD1 = 1;
  }
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v26 = **(_QWORD **)(v25 + 192);
  if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
    sub_AF52C4(v26);
  EffectChargeTurn = **(_QWORD **)(v26 + 184);
  if ( !EffectChargeTurn )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)EffectChargeTurn,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  v29 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v30 = **(_QWORD **)(v29 + 192);
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    sub_AF52C4(v30);
  EffectChargeTurn = **(_QWORD **)(v30 + 184);
  if ( !EffectChargeTurn )
LABEL_58:
    sub_B5D69C(EffectChargeTurn, skillInfoList);
  v82 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)EffectChargeTurn,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillIdList = ServantLeaderInfo__getSkillIdList(this, v31);
  v34 = &BalanceConfig_TypeInfo;
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v33);
  v36 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v36 = BalanceConfig_TypeInfo;
  }
  v37 = (System_Int32_array **)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)v36->static_fields->SvtSkillListMax);
  v85->klass = (BattleServantConfConponent_c *)v37;
  sub_B5D560(v85, v37, v38, v39, v40, v41, v42, v43);
  v44 = 0LL;
  v45 = 0;
  v46 = &SkillIdList->m_Items[1];
  v47 = &SkillLevelList->m_Items[1];
  v83 = MasterData_WarQuestSelectionMaster;
  while ( 1 )
  {
    EffectChargeTurn = (__int64)*v34;
    if ( (BYTE3((*v34)->vtable._0_Equals.methodPtr) & 4) != 0 && !*(_DWORD *)(EffectChargeTurn + 224) )
    {
      j_il2cpp_runtime_class_init_0(EffectChargeTurn);
      EffectChargeTurn = (__int64)*v34;
    }
    if ( (__int64)v44 >= *(int *)(*(_QWORD *)(EffectChargeTurn + 184) + 32LL) )
      break;
    if ( !SkillIdList )
      goto LABEL_58;
    if ( v44 >= SkillIdList->max_length )
      goto LABEL_57;
    skillInfoList = (SkillInfo_array **)(unsigned int)v46[v44];
    if ( (int)skillInfoList >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_58;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int32_t)skillInfoList,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        v49 = (SkillEntity_o *)Entity;
        v50 = v34;
        v52 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v51 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v86.fields.currentCryptoKey = v52;
        *(_QWORD *)&v86.fields.fakeValue = v51;
        EffectChargeTurn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v86, 0LL);
        if ( v44 >= SkillIdList->max_length )
          goto LABEL_57;
        skillInfoList = (SkillInfo_array **)(unsigned int)EffectChargeTurn;
        EffectChargeTurn = (__int64)v82;
        if ( !v82 )
          goto LABEL_58;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(
                              v82,
                              (int32_t)skillInfoList,
                              (int)v44 + 1,
                              v46[v44],
                              0LL);
        v54 = sub_B5D694(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v54, 0LL);
        if ( v44 >= SkillIdList->max_length )
        {
LABEL_57:
          v80 = sub_B5D6C8(EffectChargeTurn);
          sub_B5D668(v80, 0LL);
        }
        if ( !v54 )
          goto LABEL_58;
        *(_DWORD *)(v54 + 16) = v46[v44];
        if ( !SkillLevelList )
          goto LABEL_58;
        if ( v44 >= SkillLevelList->max_length )
          goto LABEL_57;
        *(_DWORD *)(v54 + 20) = v47[v44];
        if ( v44 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectChargeTurn = SkillEntity__getEffectChargeTurn(v49, v47[v44], 0LL);
        *(_DWORD *)(v54 + 24) = EffectChargeTurn;
        if ( v44 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectTitle = (System_Int32_array **)SkillEntity__getEffectTitle(v49, v47[v44], 0LL);
        *(_QWORD *)(v54 + 32) = EffectTitle;
        sub_B5D560((BattleServantConfConponent_o *)(v54 + 32), EffectTitle, v56, v57, v58, v59, v60, v61);
        if ( v44 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectExplanation = (System_Int32_array **)SkillEntity__getEffectExplanation(v49, v47[v44], 0LL);
        *(_QWORD *)(v54 + 40) = EffectExplanation;
        sub_B5D560((BattleServantConfConponent_o *)(v54 + 40), EffectExplanation, v63, v64, v65, v66, v67, v68);
        if ( EntityFromSkillId )
        {
          EffectChargeTurn = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          *(_DWORD *)(v54 + 48) = EffectChargeTurn;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          skillNum = 0;
          *(_DWORD *)(v54 + 48) = 0;
        }
        *(_DWORD *)(v54 + 52) = skillNum;
        *(_BYTE *)(v54 + 56) = 1;
        klass = v85->klass;
        if ( !v85->klass )
          goto LABEL_58;
        EffectChargeTurn = sub_B5D684(v54, *((_QWORD *)klass->_1.image + 8));
        if ( !EffectChargeTurn )
        {
          v81 = sub_B5D6BC(0LL);
          sub_B5D668(v81, 0LL);
        }
        if ( v45 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_57;
        v77 = &klass->_1.image + (int)v45;
        v77[4] = (void *)v54;
        sub_B5D560((BattleServantConfConponent_o *)(v77 + 4), (System_Int32_array **)v54, v71, v72, v73, v74, v75, v76);
        v34 = v50;
        MasterData_WarQuestSelectionMaster = v83;
        ++v45;
      }
    }
    ++v44;
  }
  v78 = &SkillIdList->m_Items[v45 + 1];
  v79 = &SkillLevelList->m_Items[v45 + 1];
  while ( 1 )
  {
    if ( (*(_BYTE *)(EffectChargeTurn + 307) & 4) != 0 && !*(_DWORD *)(EffectChargeTurn + 224) )
    {
      j_il2cpp_runtime_class_init_0(EffectChargeTurn);
      EffectChargeTurn = (__int64)*v34;
    }
    if ( (signed int)v45 >= *(_DWORD *)(*(_QWORD *)(EffectChargeTurn + 184) + 32LL) )
      break;
    if ( !SkillIdList )
      goto LABEL_58;
    if ( v45 >= SkillIdList->max_length )
      goto LABEL_57;
    *v78 = 0;
    if ( !SkillLevelList )
      goto LABEL_58;
    if ( v45 >= SkillLevelList->max_length )
      goto LABEL_57;
    *v79++ = -1;
    EffectChargeTurn = (__int64)*v34;
    ++v45;
    ++v78;
  }
}


System_Int32_array *__fastcall ServantLeaderInfo__getSkillLevelList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  System_Int32_array *result; // x0
  __int64 v10; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v12; // x0

  if ( (byte_42EADCE & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42EADCE = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
  if ( !result )
    sub_B5D69C(0LL, v10);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillLv2, max_length <= 2) )
  {
    v12 = sub_B5D6C8(result);
    sub_B5D668(v12, 0LL);
  }
  result->m_Items[3] = this->fields.skillLv3;
  return result;
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo(
        ServantLeaderInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x21
  DataManager_o *v17; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x22
  __int64 v20; // x23
  ServantTreasureDvcMaster_o *v21; // x21
  ServantTreasureDvcEntity_o *EntityFromSvtIdDvcId; // x21
  TreasureDvcInfo_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  TreasureDvcInfo_o *v30; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_42EADE3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, (_DWORD)tdInfo, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9, v10, v11);
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, v12, v13, v14);
    byte_42EADE3 = 1;
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v16 = **(_QWORD **)(v15 + 192);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AF52C4(v16);
  v17 = **(DataManager_o ***)(v16 + 184);
  if ( !v17 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v17,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v20;
  *(_QWORD *)&v32.fields.fakeValue = v19;
  v17 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v32, 0LL);
  if ( !v21 )
    goto LABEL_18;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           v21,
                           (int32_t)v17,
                           this->fields.treasureDeviceId,
                           0LL);
  v23 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v23, 0LL);
  *tdInfo = v23;
  sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
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
          v30 = *tdInfo;
          ServantTreasureDvcEntity__getEffectExplanation(
            EntityFromSvtIdDvcId,
            &v30->fields.name,
            &v30->fields.explanation,
            &v30->fields.maxLv,
            &v30->fields.guageCount,
            &v30->fields.cardId,
            &v30->fields.strengthStatus,
            &v30->fields.treasureDeviceNum,
            v30->fields.lv,
            0LL);
          return 1;
        }
      }
    }
LABEL_18:
    sub_B5D69C(v17, tdInfo);
  }
  return 0;
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo_29359808(
        ServantLeaderInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x21
  __int64 v14; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w8

  if ( (byte_42EADE4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, (_DWORD)tdLv, (_DWORD)tdMaxLv, method);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11, v12);
    byte_42EADE4 = 1;
  }
  *tdLv = this->fields.treasureDeviceLv;
  if ( this->fields.treasureDeviceId < 1 )
  {
    bannerId = 0;
    LOBYTE(Entity) = 0;
  }
  else
  {
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v14 = **(_QWORD **)(v13 + 192);
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      sub_AF52C4(v14);
    MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v14 + 184);
    if ( !MasterData_WarQuestSelectionMaster
      || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
    {
      sub_B5D69C(MasterData_WarQuestSelectionMaster, tdLv);
    }
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
               this->fields.treasureDeviceId,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  __int64 v12; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t treasureDeviceLv; // w8

  if ( (byte_42EADE5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8, v9, v10);
    byte_42EADE5 = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(v12);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v12 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             this->fields.treasureDeviceId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  __int64 v3; // x3
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42EADDF & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)questRestrictionInfo,
      (_DWORD)method,
      v3);
    byte_42EADDF = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v10, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_34267336(questRestrictionInfo, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction_29358764(
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

  if ( (byte_42EADE0 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)questRestrictionInfo,
      (_DWORD)partyItem,
      *(_QWORD *)&num);
    byte_42EADE0 = 1;
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_34267560(questRestrictionInfo, v11, partyItem, num, -1, 0LL);
}


bool __fastcall ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42EADD0 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EADD0 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v7 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL) > 0;
}


bool __fastcall ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *v5; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_42EADC7 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EADC7 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BE7 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  LOBYTE(randomLimitCountTargets) = v5->static_fields->enableRandomLimitCount;
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