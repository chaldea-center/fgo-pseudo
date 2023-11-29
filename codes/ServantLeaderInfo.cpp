void __fastcall ServantLeaderInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FC7C5 & 1) == 0 )
  {
    sub_B16FFC(&ServantLeaderInfo_TypeInfo, v1);
    byte_40FC7C5 = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo___ctor_29610580(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x22
  WebViewManager_o *v19; // x0
  ServantLimitMaster_o *v20; // x0
  const MethodInfo *v21; // x3
  ServantLimitEntity_o *v22; // x0
  const MethodInfo *v23; // x1
  int32_t atkBase; // w8
  int32_t MaxDispLimitCount; // w0
  int32_t v26; // w21
  __int64 v27; // x23
  __int64 v28; // x23
  DataManager_o *v29; // x0
  ServantSkillMaster_o *v30; // x23
  int32_t v31; // w0
  ServantSkillEntity_array *UseEntityList; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  ServantSkillEntity_o *v35; // x8
  ServantSkillEntity_o *v36; // x8
  ServantSkillEntity_o *v37; // x8
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x22
  __int64 v45; // x22
  DataManager_o *v46; // x0
  ServantTreasureDvcMaster_o *v47; // x0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  struct System_Int32_array **p_randomLimitCountTargets; // x19
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_40FC78D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FC78D = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_38;
  v20 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v19,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !v20 )
    goto LABEL_38;
  v22 = ServantLimitMaster__GetEntity(v20, svtId, this->fields.limitCount, v21);
  if ( !v22 )
    goto LABEL_38;
  this->fields.hp = v22->fields.hpBase;
  atkBase = v22->fields.atkBase;
  this->fields.adjustAtk = 0;
  this->fields.adjustHp = 0;
  this->fields.atk = atkBase;
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(this, v23);
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v26 = MaxDispLimitCount;
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v28 = **(_QWORD **)(v27 + 192);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AAFCFC(v28);
  v29 = **(DataManager_o ***)(v28 + 184);
  if ( !v29 )
    goto LABEL_38;
  v30 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v29,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  if ( !v30 )
    goto LABEL_38;
  UseEntityList = ServantSkillMaster__getUseEntityList(
                    v30,
                    v31,
                    this->fields.userId,
                    this->fields.lv,
                    this->fields.limitCount,
                    v26,
                    -1,
                    -1LL,
                    0LL);
  if ( !UseEntityList )
    goto LABEL_38;
  if ( !UseEntityList->max_length )
    goto LABEL_39;
  v35 = UseEntityList->m_Items[0];
  if ( v35 )
    LODWORD(v35) = v35->fields.skillId;
  this->fields.skillId1 = (int)v35;
  if ( UseEntityList->max_length <= 1 )
    goto LABEL_39;
  v36 = UseEntityList->m_Items[1];
  if ( v36 )
    LODWORD(v36) = v36->fields.skillId;
  this->fields.skillId2 = (int)v36;
  if ( UseEntityList->max_length <= 2 )
  {
LABEL_39:
    sub_B17100(UseEntityList, v33, v34);
    sub_B170A0();
  }
  v37 = UseEntityList->m_Items[2];
  if ( v37 )
    LODWORD(v37) = v37->fields.skillId;
  this->fields.skillId3 = (int)v37;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_38;
  if ( !ServantEntity__get_IsServant(Entity, 0LL) )
    goto LABEL_37;
  v44 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v45 = **(_QWORD **)(v44 + 192);
  if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
    sub_AAFCFC(v45);
  v46 = **(DataManager_o ***)(v45 + 184);
  if ( !v46
    || (v47 = (ServantTreasureDvcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              v46,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL )
  {
LABEL_38:
    sub_B170D4();
  }
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v47,
                svtId,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v26,
                0,
                -1,
                0LL);
  if ( UseEntity )
    this->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
LABEL_37:
  this->fields.equipTarget1 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipTarget1, 0LL, v38, v39, v40, v41, v42, v43);
  this->fields.randomLimitCountTargets = 0LL;
  p_randomLimitCountTargets = &this->fields.randomLimitCountTargets;
  *(p_randomLimitCountTargets - 3) = 0LL;
  *(p_randomLimitCountTargets - 2) = 0LL;
  *(p_randomLimitCountTargets - 4) = 0LL;
  *((_DWORD *)p_randomLimitCountTargets - 2) = 0;
  sub_B16F98((BattleServantConfConponent_o *)p_randomLimitCountTargets, 0LL, v50, v51, v52, v53, v54, v55);
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
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_Dictionary_int__int__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  int32_t v20; // w0
  int32_t iconLimitCount; // w1
  const MethodInfo *v22; // x2
  int32_t v23; // w0
  int32_t dispLimitCount; // w1
  const MethodInfo *v25; // x2
  int32_t v26; // w0
  int32_t commandCardLimitCount; // w1
  const MethodInfo *v28; // x2
  int32_t v29; // w0
  int32_t portraitLimitCount; // w1
  const MethodInfo *v31; // x2
  ServantLeaderInfo_o *v32; // x0
  int32_t v33; // w1
  const MethodInfo *v34; // x2
  ServantLeaderInfo_o *AdjustLimitCount; // x0
  int32_t v36; // w1
  const MethodInfo *v37; // x2
  ServantLeaderInfo_o *v38; // x0
  int32_t v39; // w1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_40FC7BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&OptionManager_TypeInfo, v5);
    byte_40FC7BB = 1;
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
    *(_QWORD *)&v48.fields.currentCryptoKey = v7;
    *(_QWORD *)&v48.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v48, 0LL) >= 1 )
    {
      v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                   System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                   v8,
                                                                   v9,
                                                                   v10,
                                                                   v11);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v12,
        (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v12;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.limitChangeDic,
        (System_Int32_array **)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      v20 = ServantLeaderInfo__GetLimitChangeDic(this, this->fields.imageLimitCount, v19);
      iconLimitCount = this->fields.iconLimitCount;
      this->fields.imageLimitCount = v20;
      v23 = ServantLeaderInfo__GetLimitChangeDic(this, iconLimitCount, v22);
      dispLimitCount = this->fields.dispLimitCount;
      this->fields.iconLimitCount = v23;
      v26 = ServantLeaderInfo__GetLimitChangeDic(this, dispLimitCount, v25);
      commandCardLimitCount = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = v26;
      v29 = ServantLeaderInfo__GetLimitChangeDic(this, commandCardLimitCount, v28);
      portraitLimitCount = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = v29;
      v32 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetLimitChangeDic(this, portraitLimitCount, v31);
      v33 = this->fields.dispLimitCount;
      this->fields.portraitLimitCount = (int)v32;
      AdjustLimitCount = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(v32, v33, v34);
      v36 = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = (int)AdjustLimitCount;
      v38 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(AdjustLimitCount, v36, v37);
      v39 = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = (int)v38;
      this->fields.portraitLimitCount = ServantLeaderInfo__GetAdjustLimitCount(v38, v39, v40);
      ServantLeaderInfo__SetServantNameBySpoilerProtection(this, v41);
      this->fields.limitChangeDic = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.limitChangeDic, 0LL, v42, v43, v44, v45, v46, v47);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipTarget1, 0LL, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_40FC7BE & 1) == 0 )
  {
    sub_B16FFC(&ServantLeaderInfo_TypeInfo, *(_QWORD *)&orgLimitCount);
    byte_40FC7BE = 1;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x25
  __int64 v19; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x24
  int32_t v21; // w0
  ServantEntity_o *Entity; // x0
  WebViewManager_o *v23; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x24
  const MethodInfo *v25; // x1
  int32_t Rarity; // w0
  int32_t *v27; // x0
  int32_t v28; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_40FC790 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FC790 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL);
  if ( !v20 )
    goto LABEL_16;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v20,
                                v21,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_16;
  if ( !ServantEntity__get_IsServant(Entity, 0LL) )
  {
LABEL_14:
    v28 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_15;
  }
  v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v23
    || (v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v23,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Rarity = ServantLeaderInfo__getRarity(this, v25),
        !v24) )
  {
LABEL_16:
    sub_B170D4();
  }
  v27 = (int32_t *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v24,
                     Rarity,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !v27 )
    goto LABEL_14;
  *maxAjustHp = v27[5];
  *maxAjustAtk = v27[6];
  *secondMaxAdjustHp = v27[7];
  v28 = v27[8];
  result = 1;
LABEL_15:
  *secondMaxAdjustAtk = v28;
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
  int32_t v25; // w0
  ServantAppendPassiveSkillEntity_array *EntityListFromSvtId; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BattleServantConfConponent_o *v33; // x26
  ServantAppendPassiveSkillEntity_array *v34; // x25
  System_Int32_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x2
  System_String_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x2
  System_String_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x2
  System_Boolean_array *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x2
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 Entity; // x0
  __int64 v75; // x1
  System_String_array **v76; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // x27
  int v78; // w22
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x11
  int max_length; // w8
  __int64 v81; // x9
  __int64 v82; // x10
  AppendPassiveSkillInfo_o **m_Items; // x11
  AppendPassiveSkillInfo_o *v84; // x19
  __int64 v85; // x24
  ServantAppendPassiveSkillEntity_o *v86; // x8
  System_Int32_array *v87; // x9
  System_Int32_array *v88; // x8
  BattleServantConfConponent_c *klass; // x8
  SkillEntity_o *v90; // x28
  System_String_array *v91; // x26
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x20
  Il2CppClass **v98; // x0
  System_String_array *v99; // x20
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x28
  Il2CppClass **v106; // x0
  System_Boolean_array *v107; // x8
  char v108; // w9
  BattleServantConfConponent_c *v109; // x8
  System_String_array *v110; // x19
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x20
  Il2CppClass **v117; // x0
  System_String_array *v118; // x19
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x20
  Il2CppClass **v125; // x0
  System_String_array *v126; // x8
  System_String_array *v127; // x8
  BattleServantConfConponent_o *v128; // x20
  System_String_o *call_openComp; // t1
  System_Int32_array **v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_array *v137; // x8
  Il2CppClass **v138; // x28
  System_String_o *v139; // x20
  BattleServantConfConponent_o *v140; // x28
  System_String_o *v141; // t1
  System_String_o *v142; // x0
  System_Int32_array **v143; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  struct AppendPassiveSkillInfo_array *v150; // x8
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  BattleServantConfConponent_o *v175; // [xsp+8h] [xbp-78h]
  __int64 v179; // [xsp+28h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16

  if ( (byte_40FC7BF & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, idList);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B16FFC(&int___TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&string___TypeInfo, v17);
    sub_B16FFC(&StringLiteral_26, v18);
    sub_B16FFC(&StringLiteral_3296, v19);
    sub_B16FFC(&StringLiteral_3284, v20);
    sub_B16FFC(&StringLiteral_1, v21);
    byte_40FC7BF = 1;
  }
  v175 = (BattleServantConfConponent_o *)lvList;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v180.fields.currentCryptoKey = v24;
  *(_QWORD *)&v180.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v180, 0LL);
  if ( !Master_WarQuestSelectionMaster
    || (EntityListFromSvtId = ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                Master_WarQuestSelectionMaster,
                                v25,
                                0LL),
        v33 = v175,
        !EntityListFromSvtId) )
  {
LABEL_84:
    sub_B170D4();
  }
  v34 = EntityListFromSvtId;
  v179 = *(_QWORD *)&EntityListFromSvtId->max_length;
  if ( v179 || (v150 = this->fields.appendPassiveSkill) != 0LL && *(_QWORD *)&v150->max_length )
  {
    v35 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v179, v27);
    *idList = v35;
    sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v43 = (System_String_array *)sub_B17014(string___TypeInfo, (unsigned int)v179, v42);
    *titleList = v43;
    sub_B16F98((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
    v51 = (System_String_array *)sub_B17014(string___TypeInfo, (unsigned int)v179, v50);
    *explanationList = v51;
    sub_B16F98(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    v59 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, (unsigned int)v179, v58);
    *releaseStateList = v59;
    sub_B16F98(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    v67 = (System_Int32_array **)sub_B17014(int___TypeInfo, (unsigned int)v179, v66);
    v175->klass = (BattleServantConfConponent_c *)v67;
    sub_B16F98(v175, v67, v68, v69, v70, v71, v72, v73);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Entity = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v179 >= 1 )
    {
      v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)Entity;
      v78 = 0;
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
        v84 = 0LL;
LABEL_27:
        if ( v78 >= v34->max_length )
          goto LABEL_85;
        v85 = v78;
        v86 = v34->m_Items[v78];
        if ( !v86 )
          goto LABEL_84;
        v87 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v78 >= v87->max_length )
          goto LABEL_85;
        v87->m_Items[v78 + 1] = v86->fields.skillId;
        v88 = *idList;
        if ( !*idList )
          goto LABEL_84;
        if ( v78 >= v88->max_length )
          goto LABEL_85;
        if ( !v77 )
          goto LABEL_84;
        Entity = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v77,
                            v88->m_Items[v78 + 1],
                            (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        klass = v33->klass;
        v90 = (SkillEntity_o *)Entity;
        if ( v84 )
        {
          if ( !klass )
            goto LABEL_84;
          if ( (unsigned int)v78 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_85;
          *((_DWORD *)&klass->_1.byval_arg.data + v78) = v84->fields.skillLv;
          if ( !Entity )
            goto LABEL_84;
          v91 = *titleList;
          Entity = (__int64)SkillEntity__getEffectTitle((SkillEntity_o *)Entity, v84->fields.skillLv, 0LL);
          if ( !v91 )
            goto LABEL_84;
          v97 = (System_Int32_array **)Entity;
          if ( Entity )
          {
            Entity = sub_B170BC(Entity, v91->obj.klass->_1.element_class);
            if ( !Entity )
              goto LABEL_86;
          }
          if ( v78 >= v91->max_length )
            goto LABEL_85;
          v98 = &v91->obj.klass + v78;
          v98[4] = (Il2CppClass *)v97;
          sub_B16F98((BattleServantConfConponent_o *)(v98 + 4), v97, v76, v92, v93, v94, v95, v96);
          v99 = *explanationList;
          Entity = (__int64)SkillEntity__getEffectExplanation(v90, v84->fields.skillLv, 0LL);
          if ( !v99 )
            goto LABEL_84;
          v33 = v175;
          v105 = (System_Int32_array **)Entity;
          if ( Entity )
          {
            Entity = sub_B170BC(Entity, v99->obj.klass->_1.element_class);
            if ( !Entity )
              goto LABEL_86;
          }
          if ( v78 >= v99->max_length )
            goto LABEL_85;
          v106 = &v99->obj.klass + v78;
          v106[4] = (Il2CppClass *)v105;
          sub_B16F98((BattleServantConfConponent_o *)(v106 + 4), v105, v76, v100, v101, v102, v103, v104);
          v107 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v78 >= v107->max_length )
            goto LABEL_85;
          v108 = 1;
        }
        else
        {
          if ( !klass )
            goto LABEL_84;
          if ( (unsigned int)v78 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_85;
          *((_DWORD *)&klass->_1.byval_arg.data + v78) = -1;
          v109 = v33->klass;
          if ( !v33->klass )
            goto LABEL_84;
          if ( (unsigned int)v78 >= LODWORD(v109->_1.namespaze) )
            goto LABEL_85;
          if ( !Entity )
            goto LABEL_84;
          v110 = *titleList;
          Entity = (__int64)SkillEntity__getEffectTitle(
                              (SkillEntity_o *)Entity,
                              *((_DWORD *)&v109->_1.byval_arg.data + v78),
                              0LL);
          if ( !v110 )
            goto LABEL_84;
          v116 = (System_Int32_array **)Entity;
          if ( Entity )
          {
            Entity = sub_B170BC(Entity, v110->obj.klass->_1.element_class);
            if ( !Entity )
            {
LABEL_86:
              sub_B170F4(Entity);
              sub_B170A0();
            }
          }
          if ( v78 >= v110->max_length )
            goto LABEL_85;
          v117 = &v110->obj.klass + v78;
          v117[4] = (Il2CppClass *)v116;
          sub_B16F98((BattleServantConfConponent_o *)(v117 + 4), v116, v76, v111, v112, v113, v114, v115);
          v118 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Entity = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3296, 0LL);
          if ( !v118 )
            goto LABEL_84;
          v124 = (System_Int32_array **)Entity;
          if ( Entity )
          {
            Entity = sub_B170BC(Entity, v118->obj.klass->_1.element_class);
            if ( !Entity )
              goto LABEL_86;
          }
          if ( v78 >= v118->max_length )
            goto LABEL_85;
          v125 = &v118->obj.klass + v78;
          v125[4] = (Il2CppClass *)v124;
          sub_B16F98((BattleServantConfConponent_o *)(v125 + 4), v124, v76, v119, v120, v121, v122, v123);
          v126 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          if ( v78 >= v126->max_length )
            goto LABEL_85;
          Entity = System_String__op_Inequality(v126->m_Items[v78], (System_String_o *)StringLiteral_1, 0LL);
          if ( (Entity & 1) != 0 )
          {
            v127 = *explanationList;
            if ( !*explanationList )
              goto LABEL_84;
            if ( v78 >= v127->max_length )
              goto LABEL_85;
            v128 = (BattleServantConfConponent_o *)(&v127->obj.klass + v78);
            call_openComp = (System_String_o *)v128->fields.call_openComp;
            v128 = (BattleServantConfConponent_o *)((char *)v128 + 32);
            v130 = (System_Int32_array **)System_String__Concat_43743732(
                                            call_openComp,
                                            (System_String_o *)StringLiteral_26,
                                            0LL);
            v128->klass = (BattleServantConfConponent_c *)v130;
            sub_B16F98(v128, v130, v131, v132, v133, v134, v135, v136);
          }
          v137 = *explanationList;
          if ( !*explanationList )
            goto LABEL_84;
          if ( v78 >= v137->max_length )
            goto LABEL_85;
          v138 = &v137->obj.klass + v78;
          v141 = (System_String_o *)v138[4];
          v140 = (BattleServantConfConponent_o *)(v138 + 4);
          v139 = v141;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v142 = LocalizationManager__Get((System_String_o *)StringLiteral_3284, 0LL);
          v143 = (System_Int32_array **)System_String__Concat_43743732(v139, v142, 0LL);
          v140->klass = (BattleServantConfConponent_c *)v143;
          sub_B16F98(v140, v143, v144, v145, v146, v147, v148, v149);
          v107 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_84;
          if ( v78 >= v107->max_length )
            goto LABEL_85;
          v108 = 0;
        }
        ++v78;
        v107->m_Items[v85 + 4] = v108;
        if ( v78 >= (int)v179 )
          return;
      }
      v81 = 0LL;
      v82 = (__int64)&v34->m_Items[v78];
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v81 < max_length )
      {
        v84 = m_Items[v81];
        if ( !v84 )
          goto LABEL_84;
        if ( v78 >= v34->max_length )
          break;
        if ( !*(_QWORD *)v82 )
          goto LABEL_84;
        if ( v84->fields.skillId == *(_DWORD *)(*(_QWORD *)v82 + 28LL) )
          goto LABEL_27;
        if ( (int)++v81 >= max_length )
          goto LABEL_26;
      }
LABEL_85:
      sub_B17100(Entity, v75, v76);
      sub_B170A0();
    }
  }
  else
  {
    *idList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)idList, 0LL, v27, v28, v29, v30, v31, v32);
    *titleList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)titleList, 0LL, v151, v152, v153, v154, v155, v156);
    *explanationList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)explanationList, 0LL, v157, v158, v159, v160, v161, v162);
    *releaseStateList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)releaseStateList, 0LL, v163, v164, v165, v166, v167, v168);
    v175->klass = 0LL;
    sub_B16F98(v175, 0LL, v169, v170, v171, v172, v173, v174);
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
  __int64 v31; // x2
  System_String_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x2
  System_String_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  System_Boolean_array *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x2
  System_Int32_array *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v64; // x1
  System_String_array **v65; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x26
  __int64 v67; // x20
  __int64 v68; // x22
  struct AppendPassiveSkillInfo_array *v69; // x8
  __int64 v70; // x8
  System_Int32_array *v71; // x9
  System_Int32_array *v72; // x8
  struct AppendPassiveSkillInfo_array *v73; // x8
  __int64 v74; // x8
  int v75; // w9
  System_Int32_array *v76; // x8
  SkillEntity_o *v77; // x27
  struct AppendPassiveSkillInfo_array *v78; // x8
  __int64 v79; // x8
  System_String_array *v80; // x25
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x28
  struct AppendPassiveSkillInfo_array *v87; // x8
  int v88; // w28
  __int64 v89; // x8
  System_String_array *v90; // x25
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x27
  System_Boolean_array *v97; // x8
  char v98; // w9
  System_Int32_array *v99; // x8
  System_String_array *v100; // x25
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x27
  System_String_array *v107; // x28
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x27
  System_String_array *v114; // x8
  System_String_array *v115; // x8
  BattleServantConfConponent_o *v116; // x27
  System_Int32_array **v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_array *v124; // x28
  System_String_o *v125; // x27
  System_String_o *v126; // x0
  System_Int32_array **v127; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  char *v134; // x8
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
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
  int v159; // [xsp+8h] [xbp-68h]

  if ( (byte_40FC7C0 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, idList);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_B16FFC(&int___TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&string___TypeInfo, v17);
    sub_B16FFC(&StringLiteral_26, v18);
    sub_B16FFC(&StringLiteral_3296, v19);
    sub_B16FFC(&StringLiteral_3284, v20);
    sub_B16FFC(&StringLiteral_1, v21);
    byte_40FC7C0 = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (v23 = *(_QWORD *)&appendPassiveSkill->max_length) != 0 )
  {
    v24 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v23, titleList);
    *idList = v24;
    sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    v32 = (System_String_array *)sub_B17014(string___TypeInfo, (unsigned int)v23, v31);
    *titleList = v32;
    sub_B16F98((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
    v40 = (System_String_array *)sub_B17014(string___TypeInfo, (unsigned int)v23, v39);
    *explanationList = v40;
    sub_B16F98(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    v48 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, (unsigned int)v23, v47);
    *releaseStateList = v48;
    sub_B16F98(
      (BattleServantConfConponent_o *)releaseStateList,
      (System_Int32_array **)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v56 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v23, v55);
    *lvList = v56;
    sub_B16F98((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)v23 >= 1 )
    {
      v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v67 = 0LL;
      v68 = 32LL;
      v159 = v23;
      while ( 1 )
      {
        v69 = this->fields.appendPassiveSkill;
        if ( !v69 )
          break;
        if ( (unsigned int)v67 >= v69->max_length )
          goto LABEL_76;
        v70 = *(__int64 *)((char *)&v69->obj.klass + v68);
        if ( !v70 )
          break;
        v71 = *idList;
        if ( !*idList )
          break;
        if ( (unsigned int)v67 >= v71->max_length )
          goto LABEL_76;
        v71->m_Items[v67 + 1] = *(_DWORD *)(v70 + 16);
        v72 = *idList;
        if ( !*idList )
          break;
        if ( (unsigned int)v67 >= v72->max_length )
          goto LABEL_76;
        if ( !v66 )
          break;
        Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v66,
                                                    v72->m_Items[v67 + 1],
                                                    (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v73 = this->fields.appendPassiveSkill;
        if ( !v73 )
          break;
        if ( (unsigned int)v67 >= v73->max_length )
          goto LABEL_76;
        v74 = *(__int64 *)((char *)&v73->obj.klass + v68);
        if ( !v74 )
          break;
        v75 = *(_DWORD *)(v74 + 20);
        v76 = *lvList;
        v77 = (SkillEntity_o *)Master_WarQuestSelectionMaster;
        if ( v75 < 1 )
        {
          if ( !v76 )
            break;
          if ( (unsigned int)v67 >= v76->max_length )
            goto LABEL_76;
          v76->m_Items[v67 + 1] = -1;
          v99 = *lvList;
          if ( !*lvList )
            break;
          if ( (unsigned int)v67 >= v99->max_length )
            goto LABEL_76;
          if ( !Master_WarQuestSelectionMaster )
            break;
          v100 = *titleList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                      (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                      v99->m_Items[v67 + 1],
                                                      0LL);
          if ( !v100 )
            break;
          v106 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B170BC(
                                               Master_WarQuestSelectionMaster,
                                               v100->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
            {
LABEL_77:
              sub_B170F4(Master_WarQuestSelectionMaster);
              sub_B170A0();
            }
          }
          if ( (unsigned int)v67 >= v100->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v100->obj.klass + v68) = (Il2CppClass *)v106;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v100 + v68), v106, v65, v101, v102, v103, v104, v105);
          v107 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3296, 0LL);
          if ( !v107 )
            break;
          v113 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B170BC(
                                               Master_WarQuestSelectionMaster,
                                               v107->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v67 >= v107->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v107->obj.klass + v68) = (Il2CppClass *)v113;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v107 + v68), v113, v65, v108, v109, v110, v111, v112);
          v114 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v67 >= v114->max_length )
            goto LABEL_76;
          Master_WarQuestSelectionMaster = System_String__op_Inequality(
                                             *(System_String_o **)((char *)&v114->obj.klass + v68),
                                             (System_String_o *)StringLiteral_1,
                                             0LL);
          if ( (Master_WarQuestSelectionMaster & 1) != 0 )
          {
            v115 = *explanationList;
            if ( !*explanationList )
              break;
            if ( (unsigned int)v67 >= v115->max_length )
              goto LABEL_76;
            v116 = (BattleServantConfConponent_o *)((char *)v115 + v68);
            v117 = (System_Int32_array **)System_String__Concat_43743732(
                                            *(System_String_o **)((char *)&v115->obj.klass + v68),
                                            (System_String_o *)StringLiteral_26,
                                            0LL);
            v116->klass = (BattleServantConfConponent_c *)v117;
            sub_B16F98(v116, v117, v118, v119, v120, v121, v122, v123);
          }
          v124 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v67 >= v124->max_length )
          {
LABEL_76:
            sub_B17100(Master_WarQuestSelectionMaster, v64, v65);
            sub_B170A0();
          }
          v125 = *(System_String_o **)((char *)&v124->obj.klass + v68);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v126 = LocalizationManager__Get((System_String_o *)StringLiteral_3284, 0LL);
          v127 = (System_Int32_array **)System_String__Concat_43743732(v125, v126, 0LL);
          *(Il2CppClass **)((char *)&v124->obj.klass + v68) = (Il2CppClass *)v127;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v124 + v68), v127, v128, v129, v130, v131, v132, v133);
          v97 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          v88 = v159;
          if ( (unsigned int)v67 >= v97->max_length )
            goto LABEL_76;
          v98 = 0;
        }
        else
        {
          if ( !v76 )
            break;
          if ( (unsigned int)v67 >= v76->max_length )
            goto LABEL_76;
          v76->m_Items[v67 + 1] = v75;
          v78 = this->fields.appendPassiveSkill;
          if ( !v78 )
            break;
          if ( (unsigned int)v67 >= v78->max_length )
            goto LABEL_76;
          v79 = *(__int64 *)((char *)&v78->obj.klass + v68);
          if ( !v79 )
            break;
          if ( !Master_WarQuestSelectionMaster )
            break;
          v80 = *titleList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectTitle(
                                                      (SkillEntity_o *)Master_WarQuestSelectionMaster,
                                                      *(_DWORD *)(v79 + 20),
                                                      0LL);
          if ( !v80 )
            break;
          v86 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B170BC(
                                               Master_WarQuestSelectionMaster,
                                               v80->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v67 >= v80->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v80->obj.klass + v68) = (Il2CppClass *)v86;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v80 + v68), v86, v65, v81, v82, v83, v84, v85);
          v87 = this->fields.appendPassiveSkill;
          if ( !v87 )
            break;
          v88 = v159;
          if ( (unsigned int)v67 >= v87->max_length )
            goto LABEL_76;
          v89 = *(__int64 *)((char *)&v87->obj.klass + v68);
          if ( !v89 )
            break;
          v90 = *explanationList;
          Master_WarQuestSelectionMaster = (__int64)SkillEntity__getEffectExplanation(v77, *(_DWORD *)(v89 + 20), 0LL);
          if ( !v90 )
            break;
          v96 = (System_Int32_array **)Master_WarQuestSelectionMaster;
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = sub_B170BC(
                                               Master_WarQuestSelectionMaster,
                                               v90->obj.klass->_1.element_class);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_77;
          }
          if ( (unsigned int)v67 >= v90->max_length )
            goto LABEL_76;
          *(Il2CppClass **)((char *)&v90->obj.klass + v68) = (Il2CppClass *)v96;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v90 + v68), v96, v65, v91, v92, v93, v94, v95);
          v97 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( (unsigned int)v67 >= v97->max_length )
            goto LABEL_76;
          v98 = 1;
        }
        v134 = (char *)v97 + v67++;
        v68 += 8LL;
        v134[32] = v98;
        if ( (int)v67 >= v88 )
          return;
      }
      sub_B170D4();
    }
  }
  else
  {
    *idList = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)idList,
      0LL,
      titleList,
      explanationList,
      releaseStateList,
      lvList,
      (System_Int32_array *)method,
      v7);
    *titleList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)titleList, 0LL, v135, v136, v137, v138, v139, v140);
    *explanationList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)explanationList, 0LL, v141, v142, v143, v144, v145, v146);
    *releaseStateList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)releaseStateList, 0LL, v147, v148, v149, v150, v151, v152);
    *lvList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)lvList, 0LL, v153, v154, v155, v156, v157, v158);
  }
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo_29632824(
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
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x21
  __int64 v28; // x22
  __int64 v29; // x23
  __int64 v30; // x20
  __int64 v31; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  unsigned __int64 v39; // x25
  System_Int32_array **v40; // x1
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  SkillInfo_array *v47; // x26
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x8
  System_Int32_array *lvList; // [xsp+8h] [xbp-68h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_40FC7C1 & 1) == 0 )
  {
    sub_B16FFC(&SkillInfo___TypeInfo, skillInfoList);
    sub_B16FFC(&SkillInfo_TypeInfo, v8);
    byte_40FC7C1 = 1;
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
    v16 = (SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, (unsigned int)v15, v9);
    *skillInfoList = v16;
    sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
    if ( (int)v15 >= 1 )
    {
      v27 = (int)v15;
      v28 = 32LL;
      v29 = 8LL;
      do
      {
        v30 = sub_B170CC(SkillInfo_TypeInfo, v23, v24, v25, v26);
        SkillInfo___ctor((SkillInfo_o *)v30, 0LL);
        if ( !v30 )
          goto LABEL_26;
        *(_DWORD *)(v30 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v39 = v29 - 8;
        if ( v29 - 8 >= (unsigned __int64)idList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v30 + 16) = *((_DWORD *)&idList->obj.klass + v29);
        if ( !lvList )
          goto LABEL_26;
        if ( v39 >= lvList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v30 + 20) = *((_DWORD *)&lvList->obj.klass + v29);
        if ( !titleList )
          goto LABEL_26;
        if ( v39 >= titleList->max_length )
          goto LABEL_27;
        v40 = *(System_Int32_array ***)((char *)&titleList->obj.klass + v28);
        *(_QWORD *)(v30 + 32) = v40;
        sub_B16F98((BattleServantConfConponent_o *)(v30 + 32), v40, v33, v34, v35, v36, v37, v38);
        if ( !explanationList )
          goto LABEL_26;
        if ( v39 >= explanationList->max_length )
          goto LABEL_27;
        v46 = *(System_Int32_array ***)((char *)&explanationList->obj.klass + v28);
        *(_QWORD *)(v30 + 40) = v46;
        sub_B16F98((BattleServantConfConponent_o *)(v30 + 40), v46, v33, v41, v42, v43, v44, v45);
        v47 = *skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_B170D4();
        v31 = sub_B170BC(v30, v47->obj.klass->_1.element_class);
        if ( !v31 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
        if ( v39 >= v47->max_length )
        {
LABEL_27:
          sub_B17100(v31, v32, v33);
          sub_B170A0();
        }
        *(Il2CppClass **)((char *)&v47->obj.klass + v28) = (Il2CppClass *)v30;
        sub_B16F98(
          (BattleServantConfConponent_o *)((char *)v47 + v28),
          (System_Int32_array **)v30,
          v33,
          v48,
          v49,
          v50,
          v51,
          v52);
        v53 = v29 - 7;
        ++v29;
        v28 += 8LL;
      }
      while ( v53 < v27 );
    }
  }
  else
  {
    *skillInfoList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)skillInfoList, 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_40FC7B0 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v4);
    sub_B16FFC(&OptionManager_TypeInfo, v5);
    sub_B16FFC(&ServantLeaderInfo_TypeInfo, v6);
    byte_40FC7B0 = 1;
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
  System_Collections_Generic_Dictionary_int__int__o *limitChangeDic; // x0
  WebViewManager_o *Instance; // x0
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v11; // x4
  System_Collections_Generic_Dictionary_int__int__o *v12; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FC7BC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, *(_QWORD *)&limit);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FC7BC = 1;
  }
  value = 0;
  limitChangeDic = this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitChangeDic,
          limit,
          &value,
          (const MethodInfo_2DDEBC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                      (DataManager_o *)Instance,
                                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        value = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                  MasterData_WarQuestSelectionMaster,
                  this->fields.svtId,
                  limit,
                  v11);
        v12 = this->fields.limitChangeDic;
        if ( v12 )
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            v12,
            limit,
            value,
            (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_B170D4();
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
  int32_t ChoiceLimitCount_21542040; // w0
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v8; // x0

  if ( (byte_40FC78C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v5);
    byte_40FC78C = 1;
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
  ChoiceLimitCount_21542040 = RandomLimitCountManager__GetChoiceLimitCount_21542040(this, 0LL);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_21542040;
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
  int32_t v13; // w0
  UserEventDataLostEntity_o *v14; // x20
  __int64 v15; // x19
  __int64 v16; // x21
  int32_t v17; // w0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40FC7C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40FC7C3 = 1;
  }
  entity = 0LL;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      *(_QWORD *)&v20.fields.currentCryptoKey = v12;
      *(_QWORD *)&v20.fields.fakeValue = v11;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
      if ( !v10 )
        goto LABEL_24;
      if ( UserEventDataLostEntity__IsRestart(v10, v13, 0LL) )
      {
        v14 = entity;
        v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v21.fields.currentCryptoKey = v16;
        *(_QWORD *)&v21.fields.fakeValue = v15;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
        if ( v14 )
          return UserEventDataLostEntity__GetTimesToRestart(v14, v17, 0LL);
LABEL_24:
        sub_B170D4();
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
  int32_t v13; // w0
  UserEventDataLostEntity_o *v14; // x20
  __int64 v15; // x19
  __int64 v16; // x21
  int32_t v17; // w0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40FC7C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40FC7C2 = 1;
  }
  entity = 0LL;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( !v10 )
    goto LABEL_25;
  if ( UserEventDataLostEntity__IsRestart(v10, v13, 0LL) )
    return 0;
  v14 = entity;
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v16;
  *(_QWORD *)&v21.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  if ( !v14 )
LABEL_25:
    sub_B170D4();
  return UserEventDataLostEntity__IsDataLost(v14, v17, 0LL);
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

  if ( (byte_40FC7C4 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_40FC7C4 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13, 0LL);
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

  if ( (byte_40FC7A5 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_40FC7A5 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsUniqueIndividuality_31244328(questRestrictionInfo, v9, limitCount, DispLimitCount, 0LL);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction_29620824(
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

  if ( (byte_40FC7A6 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_40FC7A6 = 1;
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return QuestRestrictionInfo__IsUniqueIndividuality_31244976(
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v25; // x23
  __int64 v26; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x22
  int32_t v28; // w0
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v30; // x22
  const MethodInfo *v31; // x1
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w23
  int32_t v34; // w24
  int32_t LimitCountByDispLimit; // w0
  System_Int32_array **Name; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v44; // x24
  __int64 v45; // x25
  ServantLimitAddMaster_o *v46; // x23
  int32_t v47; // w0
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int32_t CardImageLimitCount; // w19
  int32_t LimitCountByImageLimitCostumeIn; // w0
  System_Int32_array **v58; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_40FC7BD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FC7BD = 1;
  }
  this->fields.overwriteServantName = 0LL;
  p_overwriteServantName = &this->fields.overwriteServantName;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.overwriteServantName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.overwriteServantDetailName = 0LL;
  p_overwriteServantDetailName = (BattleServantConfConponent_o *)&this->fields.overwriteServantDetailName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.overwriteServantDetailName,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v26;
  *(_QWORD *)&v59.fields.fakeValue = v25;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL);
  if ( !v27 )
    goto LABEL_28;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v27,
                                v28,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_28;
  v30 = Entity;
  if ( !ServantEntity__get_IsServant(Entity, 0LL) )
    return;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v31);
  limitCount = this->fields.limitCount;
  v34 = DispLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v34, limitCount, 0LL);
  Name = (System_Int32_array **)ServantEntity__getName(v30, LimitCountByDispLimit, -1, 0LL);
  *p_overwriteServantName = (struct System_String_o *)Name;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.overwriteServantName, Name, v37, v38, v39, v40, v41, v42);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v45 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v46 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v60.fields.currentCryptoKey = v45;
  *(_QWORD *)&v60.fields.fakeValue = v44;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v60, 0LL);
  if ( !v46 )
LABEL_28:
    sub_B170D4();
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName(v46, v47, v48) )
  {
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v49);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
    v58 = (System_Int32_array **)ServantEntity__getName(v30, -1, LimitCountByImageLimitCostumeIn, 0LL);
    p_overwriteServantDetailName->klass = (BattleServantConfConponent_c *)v58;
  }
  else
  {
    v58 = (System_Int32_array **)*p_overwriteServantName;
    p_overwriteServantDetailName->klass = (BattleServantConfConponent_c *)*p_overwriteServantName;
  }
  sub_B16F98(p_overwriteServantDetailName, v58, v50, v51, v52, v53, v54, v55);
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
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  SkillLvEntity_o *PassiveSkillIdList; // x0
  unsigned __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  SkillLvEntity_o *v17; // x23
  unsigned __int64 v18; // x19
  signed __int64 v19; // x22
  SkillLvEntity_o *v20; // x24
  __int64 v21; // x25
  __int64 v22; // x26
  int32_t v23; // w0
  int32_t v24; // w25
  int32_t limitCount; // w26
  int32_t EventId; // w0
  bool v27; // w27
  System_Int32_array *SkillIdList; // x23
  const MethodInfo *v29; // x1
  System_Int32_array *SkillLevelList; // x0
  System_Int32_array *v31; // x24
  unsigned __int64 i; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v34; // x25
  __int64 v35; // x26
  __int64 v36; // x27
  int32_t v37; // w0
  int32_t v38; // w26
  int32_t v39; // w28
  int32_t v40; // w0
  int32_t wearesDispLimitCount; // [xsp+14h] [xbp-6Ch]
  EventUpValSetupInfo_o *v43; // [xsp+18h] [xbp-68h]
  int32_t *v44; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_40FC79E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, setupInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FC79E = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v8;
  *(_QWORD *)&v46.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL) >= 1 )
  {
    v43 = setupInfo;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_42:
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    wearesDispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v11);
    PassiveSkillIdList = (SkillLvEntity_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v12);
    if ( PassiveSkillIdList )
    {
      v16 = *(_QWORD *)&PassiveSkillIdList->fields.chargeTurn;
      v17 = PassiveSkillIdList;
      if ( (int)v16 >= 1 )
      {
        v18 = 0LL;
        v19 = (int)v16;
        while ( 1 )
        {
          v14 = *((unsigned int *)&v17->fields.funcId + v18);
          if ( (int)v14 >= 1 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_42;
            PassiveSkillIdList = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v14, 1, 0LL);
            if ( PassiveSkillIdList )
            {
              v20 = PassiveSkillIdList;
              v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v47.fields.currentCryptoKey = v22;
              *(_QWORD *)&v47.fields.fakeValue = v21;
              v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v47, 0LL);
              if ( !v43 )
                goto LABEL_42;
              v24 = v23;
              limitCount = this->fields.limitCount;
              EventId = EventUpValSetupInfo__get_EventId(v43, 0LL);
              v27 = 1;
              PassiveSkillIdList = (SkillLvEntity_o *)SkillLvEntity__getEventUpVal(
                                                        v20,
                                                        v24,
                                                        limitCount,
                                                        wearesDispLimitCount,
                                                        v43,
                                                        EventId,
                                                        1,
                                                        0,
                                                        0LL);
              if ( ((unsigned __int8)PassiveSkillIdList & 1) != 0 )
                return v27;
            }
          }
          if ( (__int64)++v18 >= v19 )
            break;
          if ( v18 >= (unsigned int)v17->fields.chargeTurn )
          {
LABEL_43:
            sub_B17100(PassiveSkillIdList, v14, v15);
            sub_B170A0();
          }
        }
      }
    }
    SkillIdList = ServantLeaderInfo__getSkillIdList(this, (const MethodInfo *)v14);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v29);
    v44 = &SkillLevelList->m_Items[1];
    v31 = SkillLevelList;
    for ( i = 0LL; ; ++i )
    {
      PassiveSkillIdList = (SkillLvEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        PassiveSkillIdList = (SkillLvEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= PassiveSkillIdList[2].fields.script->fields.count )
        break;
      if ( !SkillIdList )
        goto LABEL_42;
      if ( i >= SkillIdList->max_length )
        goto LABEL_43;
      v14 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v14 >= 1 )
      {
        if ( !v31 )
          goto LABEL_42;
        if ( i >= v31->max_length )
          goto LABEL_43;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_42;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v14, v44[i], 0LL);
        if ( Entity )
        {
          v34 = Entity;
          v36 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v35 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v48.fields.currentCryptoKey = v36;
          *(_QWORD *)&v48.fields.fakeValue = v35;
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v48, 0LL);
          if ( !v43 )
            goto LABEL_42;
          v38 = v37;
          v39 = this->fields.limitCount;
          v40 = EventUpValSetupInfo__get_EventId(v43, 0LL);
          v27 = 1;
          if ( SkillLvEntity__getEventUpVal(v34, v38, v39, wearesDispLimitCount, v43, v40, 1, 0, 0LL) )
            return v27;
        }
      }
    }
  }
  return 0;
}


bool __fastcall ServantLeaderInfo__getBaseEventUpVal_29618996(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x22
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v13; // x1
  SkillLvEntity_o *PassiveSkillIdList; // x0
  unsigned __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  SkillLvEntity_o *v18; // x22
  bool v19; // w23
  unsigned __int64 v20; // x24
  signed __int64 v21; // x25
  System_Int32_array *SkillIdList; // x22
  const MethodInfo *v23; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_40FC7A1 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FC7A1 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL) < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_39;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_39:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  PassiveSkillIdList = (SkillLvEntity_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v13);
  if ( PassiveSkillIdList
    && (v17 = *(_QWORD *)&PassiveSkillIdList->fields.chargeTurn, v18 = PassiveSkillIdList, (int)v17 >= 1) )
  {
    v19 = 0;
    v20 = 0LL;
    v21 = (int)v17;
    while ( 1 )
    {
      v15 = *((unsigned int *)&v18->fields.funcId + v20);
      if ( (int)v15 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_39;
        PassiveSkillIdList = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v15, 1, 0LL);
        if ( PassiveSkillIdList )
        {
          PassiveSkillIdList = (SkillLvEntity_o *)SkillLvEntity__getEventUpVal_23627436(
                                                    PassiveSkillIdList,
                                                    eventUpVallInfo,
                                                    1,
                                                    0,
                                                    1,
                                                    0,
                                                    0LL);
          if ( ((unsigned __int8)PassiveSkillIdList & 1) != 0 )
            v19 = 1;
        }
      }
      if ( (__int64)++v20 >= v21 )
        break;
      if ( v20 >= (unsigned int)v18->fields.chargeTurn )
      {
LABEL_40:
        sub_B17100(PassiveSkillIdList, v15, v16);
        sub_B170A0();
      }
    }
  }
  else
  {
    v19 = 0;
  }
  SkillIdList = ServantLeaderInfo__getSkillIdList(this, (const MethodInfo *)v15);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v23);
  for ( i = 0LL; ; ++i )
  {
    PassiveSkillIdList = (SkillLvEntity_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      PassiveSkillIdList = (SkillLvEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= PassiveSkillIdList[2].fields.script->fields.count )
      break;
    if ( !SkillIdList )
      goto LABEL_39;
    if ( i >= SkillIdList->max_length )
      goto LABEL_40;
    v15 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v15 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_39;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_40;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_39;
      Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v15, SkillLevelList->m_Items[i + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_23627436(Entity, eventUpVallInfo, 1, 0, 1, 0, 0LL) )
          v19 = 1;
      }
    }
  }
  return v19;
}


int32_t __fastcall ServantLeaderInfo__getBaseFriendPointUpVal(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x20
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v10; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x22
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  BalanceConfig_c *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40FC79A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC79A = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v7;
  *(_QWORD *)&v20.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL) >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__getSkillIdList(this, v10);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v12);
    for ( i = 0LL; ; ++i )
    {
      v19 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v19 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= v19->static_fields->SvtSkillListMax )
        break;
      if ( !SkillIdList )
        goto LABEL_24;
      if ( i >= SkillIdList->max_length )
        goto LABEL_25;
      v13 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v13 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          sub_B17100(v19, v13, v14);
          sub_B170A0();
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v13, SkillLevelList->m_Items[i + 1], 0LL);
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

  if ( (byte_40FC7B3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&OptionManager_TypeInfo, v5);
    byte_40FC7B3 = 1;
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
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
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
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL);
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

  if ( (byte_40FC7B1 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FC7B1 = 1;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x20
  __int64 v17; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x19
  int32_t v19; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_40FC7BA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantLeaderInfo_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FC7BA = 1;
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
      sub_B17100(this, *(_QWORD *)&index, method);
      sub_B170A0();
    }
    v12 = m_Items[v10];
    if ( !v12 )
      goto LABEL_18;
    if ( v12->fields.idx == index )
      break;
    if ( (int)++v10 >= max_length )
      return 0LL;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v17 = *(_QWORD *)&v12->fields.commandCodeId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&v12->fields.commandCodeId.fields.fakeValue;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v17;
  *(_QWORD *)&v20.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( !v18 )
LABEL_18:
    sub_B170D4();
  return (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v18,
                                  v19,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
}


System_Int32_array *__fastcall ServantLeaderInfo__getCommandCodeIdList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  BalanceConfig_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct CommandCodeStatus_array *commandCode; // x23
  int max_length; // w8
  System_Int32_array *v12; // x19
  int i; // w24
  CommandCodeStatus_o *v14; // x20
  int32_t idx; // w21
  __int64 v16; // x26
  __int64 v17; // x20
  __int64 v18; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40FC7B9 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40FC7B9 = 1;
  }
  if ( !this->fields.commandCode )
    return 0LL;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (BalanceConfig_c *)sub_B17014(int___TypeInfo, (unsigned int)v6->static_fields->SvtCommandCardMax, v2);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_26:
    sub_B170D4();
  max_length = commandCode->max_length;
  v12 = (System_Int32_array *)v7;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
LABEL_27:
        sub_B17100(v7, v8, v9);
        sub_B170A0();
      }
      v14 = commandCode->m_Items[i];
      if ( !v14 )
        goto LABEL_26;
      v7 = BalanceConfig_TypeInfo;
      idx = v14->fields.idx;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v7 = BalanceConfig_TypeInfo;
      }
      if ( idx < v7->static_fields->SvtCommandCardMax )
      {
        v16 = v14->fields.idx;
        v18 = *(_QWORD *)&v14->fields.commandCodeId.fields.currentCryptoKey;
        v17 = *(_QWORD *)&v14->fields.commandCodeId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v20.fields.currentCryptoKey = v18;
        *(_QWORD *)&v20.fields.fakeValue = v17;
        v7 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
        if ( !v12 )
          goto LABEL_26;
        if ( (unsigned int)v16 >= v12->max_length )
          goto LABEL_27;
        v12->m_Items[v16 + 1] = (int)v7;
      }
      max_length = commandCode->max_length;
    }
  }
  return v12;
}


int32_t __fastcall ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_40FC7AD & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FC7AD = 1;
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

  if ( (byte_40FC7AF & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&OptionManager_TypeInfo, v4);
    byte_40FC7AF = 1;
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

  if ( (byte_40FC79D & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_40FC79D = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL) < 1 )
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17, 0LL);
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

  if ( (byte_40FC7AB & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp);
    byte_40FC7AB = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL) >= 1 )
  {
    v12 = this->fields.equipTarget1;
    if ( !v12 )
      sub_B170D4();
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

  if ( (byte_40FC796 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&SkillInfo___TypeInfo, v6);
    byte_40FC796 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL) >= 1 )
  {
    v10 = this->fields.equipTarget1;
    if ( !v10 )
      sub_B170D4();
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
    v12 = (SkillInfo_array *)sub_B17014(
                               SkillInfo___TypeInfo,
                               (unsigned int)v11->static_fields->SvtEquipSkillListMax,
                               method);
    *skillInfoList = v12;
    sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_40FC79B & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_40FC79B = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17, 0LL) < 1 )
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v13, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEventUpVal_29618592(
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
  __int64 v19; // x3
  __int64 v20; // x4
  EventUpValInfo_o *v21; // x26
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  bool BaseEventUpVal_29618996; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v31; // w21
  EventUpValInfo_o *v32; // x24
  __int64 v33; // x22
  __int64 v34; // x23
  int32_t v35; // w0
  EquipTargetInfo_o *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_40FC79F & 1) == 0 )
  {
    sub_B16FFC(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40FC79F = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v9;
  *(_QWORD *)&v38.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v38, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v10;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v13);
  npcFlag = this->fields.npcFlag;
  v16 = DispLimitCount;
  v21 = (EventUpValInfo_o *)sub_B170CC(EventUpValInfo_TypeInfo, v17, v18, v19, v20);
  EventUpValInfo___ctor(v21, setupInfo, v12, limitCount, v16, npcFlag, 0LL);
  *eventUpVallInfo = v21;
  sub_B16F98((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL) < 1 )
    return 0;
  BaseEventUpVal_29618996 = ServantLeaderInfo__getBaseEventUpVal_29618996(this, eventUpVallInfo, v28);
  equipTarget1 = this->fields.equipTarget1;
  v31 = BaseEventUpVal_29618996;
  if ( !equipTarget1 )
    return v31;
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
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v39, 0LL);
  if ( !v32 || (v32->fields.equipSvtId = v35, (v36 = this->fields.equipTarget1) == 0LL) )
    sub_B170D4();
  return (v31 | EquipTargetInfo__getEventUpVal_29334696(v36, eventUpVallInfo, 1, 0LL)) & 1;
}


bool __fastcall ServantLeaderInfo__getEventUpVal_29619636(
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
  __int64 v23; // x3
  __int64 v24; // x4
  EventUpValInfo_o *v25; // x28
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v34; // x25
  __int64 v35; // x23
  __int64 v36; // x24
  int32_t v37; // w0
  EquipTargetInfo_o *v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_40FC7A0 & 1) == 0 )
  {
    sub_B16FFC(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_40FC7A0 = 1;
  }
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v13;
  *(_QWORD *)&v40.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v40, 0LL);
  limitCount = this->fields.limitCount;
  v16 = v14;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v17);
  npcFlag = this->fields.npcFlag;
  v20 = DispLimitCount;
  v25 = (EventUpValInfo_o *)sub_B170CC(EventUpValInfo_TypeInfo, v21, v22, v23, v24);
  EventUpValInfo___ctor(v25, setupInfo, v16, limitCount, v20, npcFlag, 0LL);
  *eventUpVallInfo = v25;
  sub_B16F98((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_29618996(this, eventUpVallInfo, v32) )
      *isServantEventUpVal = 1;
    equipTarget1 = this->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v34 = *eventUpVallInfo;
      v36 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v41.fields.currentCryptoKey = v36;
      *(_QWORD *)&v41.fields.fakeValue = v35;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v41, 0LL);
      if ( !v34 || (v34->fields.equipSvtId = v37, (v38 = this->fields.equipTarget1) == 0LL) )
        sub_B170D4();
      if ( EquipTargetInfo__getEventUpVal_29334696(v38, eventUpVallInfo, 1, 0LL) )
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x24
  __int64 v16; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x23
  int32_t v18; // w0
  WarEntity_o *Entity; // x23
  const MethodInfo *v20; // x1
  WebViewManager_o *v21; // x0
  ServantExpMaster_o *v22; // x0
  int32_t lv; // w8
  ServantExpMaster_o *v24; // x24
  int32_t v25; // w25
  float v26; // s0
  ServantExpEntity_o *v27; // x0
  ServantExpEntity_o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_40FC7AA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FC7AA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v16;
  *(_QWORD *)&v30.fields.fakeValue = v15;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL);
  if ( !v17 )
    goto LABEL_22;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v17,
             v18,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v20) )
  {
    v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v21 )
      goto LABEL_22;
    v22 = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v21,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v24 = v22;
    if ( lv >= 2 )
    {
      if ( !Entity )
        goto LABEL_22;
      if ( !v22 )
        goto LABEL_22;
      v27 = ServantExpMaster__GetEntity(v22, HIDWORD(Entity[1].klass), lv - 1, 0LL);
      if ( !v27 )
        goto LABEL_22;
      v25 = v27->fields.exp;
    }
    else
    {
      if ( !Entity || !v22 )
        goto LABEL_22;
      v25 = 0;
    }
    v28 = ServantExpMaster__GetEntity(v24, HIDWORD(Entity[1].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - v25;
    if ( v28 )
    {
      *lateExp = v28->fields.exp - this->fields.exp;
      v26 = (float)*exp / (float)(v28->fields.exp - v25);
      goto LABEL_21;
    }
LABEL_22:
    sub_B170D4();
  }
  v26 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_21:
  *barExp = v26;
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
  int32_t v11; // w0
  int32_t FrameType_30698720; // w20
  WebViewManager_o *v13; // x0
  ServantLvDetailMaster_o *v14; // x21
  const MethodInfo *v15; // x1
  int32_t Rarity; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40FC7AC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC7AC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantExceedMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v9;
  *(_QWORD *)&v18.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  if ( !v10
    || (FrameType_30698720 = ServantExceedMaster__GetFrameType_30698720(
                               v10,
                               v11,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               0LL),
        (v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v14 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v13,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Rarity = ServantLeaderInfo__getRarity(this, v15),
        !v14) )
  {
LABEL_11:
    sub_B170D4();
  }
  return ServantLvDetailMaster__GetFrameType(v14, Rarity, this->fields.lv, FrameType_30698720, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getFriendPointUpType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  const MethodInfo *v5; // x1
  int32_t BaseFriendPointUpVal; // w0
  EquipTargetInfo_o *equipTarget1; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_40FC799 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FC799 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v5);
  if ( !this->fields.equipTarget1
    || EquipTargetInfo__getFriendPointUpVal(this->fields.equipTarget1, 0LL) <= BaseFriendPointUpVal )
  {
    return 0;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    sub_B170D4();
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

  if ( (byte_40FC798 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FC798 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL) < 1 )
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

  if ( (byte_40FC7B5 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&OptionManager_TypeInfo, v5);
    byte_40FC7B5 = 1;
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
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  ServantLimitMaster_o *v12; // x20
  int32_t v13; // w0
  const MethodInfo *v14; // x3
  ServantLimitEntity_o *Entity; // x20
  WebViewManager_o *v16; // x0
  ServantExceedMaster_o *v17; // x0
  ServantExceedEntity_o *v18; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40FC78E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC78E = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v7;
  *(_QWORD *)&v21.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v11;
  *(_QWORD *)&v22.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
  if ( !v12
    || (Entity = ServantLimitMaster__GetEntity(v12, v13, this->fields.limitCount, v14),
        (v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v17 = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v16,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !v17 )
  {
LABEL_19:
    sub_B170D4();
  }
  v18 = ServantExceedMaster__GetEntity(v17, Entity->fields.rarity, this->fields.exceedCount, 0LL);
  lvMax = Entity->fields.lvMax;
  if ( v18 )
    lvMax += v18->fields.addLvMax;
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

  if ( (byte_40FC7B4 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, isNpc);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40FC7B4 = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
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

  if ( (byte_40FC7B2 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_40FC7B2 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
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

  if ( (byte_40FC7AE & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_40FC7AE = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
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

  if ( (byte_40FC7B6 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, isNpc);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40FC7B6 = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
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

  if ( (byte_40FC7B8 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_40FC7B8 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
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
  int32_t v12; // w0
  WarEntity_o *Entity; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **longName; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40FC793 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC793 = 1;
  }
  p_classPassive = (BattleServantConfConponent_o *)&this->fields.classPassive;
  if ( !this->fields.classPassive )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v22.fields.currentCryptoKey = v10;
    *(_QWORD *)&v22.fields.fakeValue = v9;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
    if ( !v11 )
LABEL_12:
      sub_B170D4();
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v11,
               v12,
               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
    {
      longName = (System_Int32_array **)Entity[1].fields.longName;
      p_classPassive->klass = (BattleServantConfConponent_c *)longName;
      sub_B16F98(p_classPassive, longName, v14, v15, v16, v17, v18, v19);
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
  __int64 v31; // x2
  System_String_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x22
  __int64 v40; // x22
  DataManager_o *v41; // x0
  SkillEntity_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v50; // x22
  unsigned int v51; // w25
  __int64 v52; // x26
  __int64 v53; // x27
  System_Int32_array *v54; // x8
  unsigned __int64 v55; // x28
  SkillEntity_o *v56; // x23
  System_String_array *v57; // x20
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x24
  Il2CppClass **v64; // x0
  System_String_array *v65; // x20
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

  if ( (byte_40FC797 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, idList);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B16FFC(&string___TypeInfo, v9);
    byte_40FC797 = 1;
  }
  PassiveSkillIdList = ServantLeaderInfo__getPassiveSkillIdList(this, (const MethodInfo *)idList);
  *idList = PassiveSkillIdList;
  sub_B16F98(
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
  v24 = (System_String_array *)sub_B17014(string___TypeInfo, (unsigned int)v23, v17);
  *titleList = v24;
  sub_B16F98((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  v32 = (System_String_array *)sub_B17014(string___TypeInfo, (unsigned int)v23, v31);
  *explanationList = v32;
  sub_B16F98((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
  v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v40 = **(_QWORD **)(v39 + 192);
  if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
    sub_AAFCFC(v40);
  v41 = **(DataManager_o ***)(v40 + 184);
  if ( !v41 )
LABEL_40:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (SkillEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          v41,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)v23 < 1 )
    goto LABEL_38;
  v50 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v51 = 0;
  v52 = (int)v23;
  v53 = 8LL;
  do
  {
    v54 = *idList;
    if ( !*idList )
      goto LABEL_40;
    v55 = v53 - 8;
    if ( v53 - 8 >= (unsigned __int64)v54->max_length )
      goto LABEL_41;
    v43 = *((unsigned int *)&v54->obj.klass + v53);
    if ( (int)v43 >= 1 )
    {
      if ( !v50 )
        goto LABEL_40;
      MasterData_WarQuestSelectionMaster = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              v50,
                                                              v43,
                                                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v56 = MasterData_WarQuestSelectionMaster;
        v57 = *titleList;
        MasterData_WarQuestSelectionMaster = (SkillEntity_o *)SkillEntity__getEffectTitle(
                                                                MasterData_WarQuestSelectionMaster,
                                                                0,
                                                                0LL);
        if ( !v57 )
          goto LABEL_40;
        v63 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (SkillEntity_o *)sub_B170BC(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  v57->obj.klass->_1.element_class);
          if ( !MasterData_WarQuestSelectionMaster )
          {
LABEL_42:
            sub_B170F4(MasterData_WarQuestSelectionMaster);
            sub_B170A0();
          }
        }
        if ( v51 >= v57->max_length )
          goto LABEL_41;
        v64 = &v57->obj.klass + (int)v51;
        v64[4] = (Il2CppClass *)v63;
        sub_B16F98((BattleServantConfConponent_o *)(v64 + 4), v63, v44, v58, v59, v60, v61, v62);
        v65 = *explanationList;
        MasterData_WarQuestSelectionMaster = (SkillEntity_o *)SkillEntity__getEffectExplanation(v56, 0, 0LL);
        if ( !v65 )
          goto LABEL_40;
        v71 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (SkillEntity_o *)sub_B170BC(
                                                                  MasterData_WarQuestSelectionMaster,
                                                                  v65->obj.klass->_1.element_class);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_42;
        }
        if ( v51 >= v65->max_length )
          goto LABEL_41;
        v72 = &v65->obj.klass + (int)v51;
        v72[4] = (Il2CppClass *)v71;
        sub_B16F98((BattleServantConfConponent_o *)(v72 + 4), v71, v44, v66, v67, v68, v69, v70);
        if ( v55 != v51 )
        {
          v73 = *idList;
          if ( !*idList )
            goto LABEL_40;
          max_length = v73->max_length;
          if ( v55 >= max_length || v51 >= (unsigned int)max_length )
            goto LABEL_41;
          v73->m_Items[v51 + 1] = *((_DWORD *)&v73->obj.klass + v53);
          v75 = *idList;
          if ( !*idList )
            goto LABEL_40;
          if ( v55 >= v75->max_length )
            goto LABEL_41;
          *((_DWORD *)&v75->obj.klass + v53) = 0;
        }
        ++v51;
      }
      else
      {
        v76 = *idList;
        if ( !*idList )
          goto LABEL_40;
        if ( v55 >= v76->max_length )
        {
LABEL_41:
          sub_B17100(MasterData_WarQuestSelectionMaster, v43, v44);
          sub_B170A0();
        }
        *((_DWORD *)&v76->obj.klass + v53) = 0;
      }
    }
    v77 = v53 - 7;
    ++v53;
  }
  while ( v77 < v52 );
  if ( !v51 )
  {
LABEL_38:
    *idList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)idList, 0LL, v44, v45, v46, v47, v48, v49);
LABEL_39:
    *titleList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)titleList, 0LL, v17, v18, v19, v20, v21, v22);
    *explanationList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)explanationList, 0LL, v78, v79, v80, v81, v82, v83);
  }
}


int32_t __fastcall ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_40FC7B7 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FC7B7 = 1;
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

  if ( (byte_40FC7A2 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_40FC7A2 = 1;
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
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
    limitCount = this->fields.limitCount;
    v9 = v7;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
    return QuestRestrictionInfo__IsRestriction_31241596(
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  int32_t v10; // w0
  const MethodInfo *v11; // x3
  ServantLimitEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40FC78F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FC78F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v9 || (Entity = ServantLimitMaster__GetEntity(v9, v10, this->fields.limitCount, v11)) == 0LL )
LABEL_10:
    sub_B170D4();
  return Entity->fields.rarity;
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

  if ( (byte_40FC79C & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_40FC79C = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9, 0LL) >= 1
      && ServantLeaderInfo__getBaseEventUpVal(this, setupInfo, v7);
}


int32_t __fastcall ServantLeaderInfo__getServantLevel(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *__fastcall ServantLeaderInfo__getSkillIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  System_Int32_array *result; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40FC791 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v4);
    byte_40FC791 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v5->static_fields->SvtSkillListMax, v2);
  if ( !result )
    sub_B170D4();
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillId1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillId2, max_length <= 2) )
  {
    sub_B17100(result, v7, v8);
    sub_B170A0();
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
  DataManager_o *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v14; // x21
  __int64 v15; // x21
  DataManager_o *v16; // x0
  const MethodInfo *v17; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v19; // x1
  BalanceConfig_c **v20; // x25
  __int64 v21; // x2
  System_Int32_array *SkillLevelList; // x22
  BalanceConfig_c *v23; // x8
  SkillInfo_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  System_String_array **v32; // x2
  unsigned __int64 v33; // x20
  il2cpp_array_size_t v34; // w19
  int32_t *v35; // x24
  int32_t *v36; // x28
  WarEntity_o *Entity; // x0
  SkillEntity_o *v38; // x26
  BalanceConfig_c **v39; // x23
  __int64 v40; // x25
  __int64 v41; // x27
  __int64 EffectChargeTurn; // x0
  ServantSkillEntity_o *EntityFromSkillId; // x27
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x25
  System_Int32_array **EffectTitle; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **EffectExplanation; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int32_t skillNum; // w8
  SkillInfo_array *v64; // x26
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  Il2CppClass **v70; // x0
  int32_t *v71; // x20
  int32_t *v72; // x23
  ServantSkillMaster_o *v73; // [xsp+0h] [xbp-70h]
  DataMasterBase_WarMaster__WarEntity__int__o *v74; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_40FC795 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_B16FFC(&SkillInfo___TypeInfo, v8);
    sub_B16FFC(&SkillInfo_TypeInfo, v9);
    byte_40FC795 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AAFCFC(v11);
  v12 = **(DataManager_o ***)(v11 + 184);
  if ( !v12 )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        v12,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AAFCFC(v15);
  v16 = **(DataManager_o ***)(v15 + 184);
  if ( !v16 )
LABEL_58:
    sub_B170D4();
  v73 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v16,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillIdList = ServantLeaderInfo__getSkillIdList(this, v17);
  v20 = &BalanceConfig_TypeInfo;
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v19);
  v23 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  v24 = (SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, (unsigned int)v23->static_fields->SvtSkillListMax, v21);
  *skillInfoList = v24;
  sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  v33 = 0LL;
  v34 = 0;
  v35 = &SkillIdList->m_Items[1];
  v36 = &SkillLevelList->m_Items[1];
  v74 = MasterData_WarQuestSelectionMaster;
  while ( 1 )
  {
    EffectChargeTurn = (__int64)*v20;
    if ( (BYTE3((*v20)->vtable._0_Equals.methodPtr) & 4) != 0 && !*(_DWORD *)(EffectChargeTurn + 224) )
    {
      j_il2cpp_runtime_class_init_0(EffectChargeTurn);
      EffectChargeTurn = (__int64)*v20;
    }
    if ( (__int64)v33 >= *(int *)(*(_QWORD *)(EffectChargeTurn + 184) + 32LL) )
      break;
    if ( !SkillIdList )
      goto LABEL_58;
    if ( v33 >= SkillIdList->max_length )
      goto LABEL_57;
    v31 = (unsigned int)v35[v33];
    if ( (int)v31 >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_58;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v31,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        v38 = (SkillEntity_o *)Entity;
        v39 = v20;
        v41 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v40 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v77.fields.currentCryptoKey = v41;
        *(_QWORD *)&v77.fields.fakeValue = v40;
        EffectChargeTurn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v77, 0LL);
        if ( v33 >= SkillIdList->max_length )
          goto LABEL_57;
        if ( !v73 )
          goto LABEL_58;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v73, EffectChargeTurn, (int)v33 + 1, v35[v33], 0LL);
        v48 = sub_B170CC(SkillInfo_TypeInfo, v44, v45, v46, v47);
        SkillInfo___ctor((SkillInfo_o *)v48, 0LL);
        if ( v33 >= SkillIdList->max_length )
        {
LABEL_57:
          sub_B17100(EffectChargeTurn, v31, v32);
          sub_B170A0();
        }
        if ( !v48 )
          goto LABEL_58;
        *(_DWORD *)(v48 + 16) = v35[v33];
        if ( !SkillLevelList )
          goto LABEL_58;
        if ( v33 >= SkillLevelList->max_length )
          goto LABEL_57;
        *(_DWORD *)(v48 + 20) = v36[v33];
        if ( v33 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectChargeTurn = SkillEntity__getEffectChargeTurn(v38, v36[v33], 0LL);
        *(_DWORD *)(v48 + 24) = EffectChargeTurn;
        if ( v33 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectTitle = (System_Int32_array **)SkillEntity__getEffectTitle(v38, v36[v33], 0LL);
        *(_QWORD *)(v48 + 32) = EffectTitle;
        sub_B16F98((BattleServantConfConponent_o *)(v48 + 32), EffectTitle, v50, v51, v52, v53, v54, v55);
        if ( v33 >= SkillLevelList->max_length )
          goto LABEL_57;
        EffectExplanation = (System_Int32_array **)SkillEntity__getEffectExplanation(v38, v36[v33], 0LL);
        *(_QWORD *)(v48 + 40) = EffectExplanation;
        sub_B16F98((BattleServantConfConponent_o *)(v48 + 40), EffectExplanation, v57, v58, v59, v60, v61, v62);
        if ( EntityFromSkillId )
        {
          *(_DWORD *)(v48 + 48) = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          skillNum = 0;
          *(_DWORD *)(v48 + 48) = 0;
        }
        *(_DWORD *)(v48 + 52) = skillNum;
        *(_BYTE *)(v48 + 56) = 1;
        v64 = *skillInfoList;
        if ( !*skillInfoList )
          goto LABEL_58;
        EffectChargeTurn = sub_B170BC(v48, v64->obj.klass->_1.element_class);
        if ( !EffectChargeTurn )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
        if ( v34 >= v64->max_length )
          goto LABEL_57;
        v70 = &v64->obj.klass + (int)v34;
        v70[4] = (Il2CppClass *)v48;
        sub_B16F98((BattleServantConfConponent_o *)(v70 + 4), (System_Int32_array **)v48, v32, v65, v66, v67, v68, v69);
        v20 = v39;
        MasterData_WarQuestSelectionMaster = v74;
        ++v34;
      }
    }
    ++v33;
  }
  v71 = &SkillIdList->m_Items[v34 + 1];
  v72 = &SkillLevelList->m_Items[v34 + 1];
  while ( 1 )
  {
    if ( (*(_BYTE *)(EffectChargeTurn + 307) & 4) != 0 && !*(_DWORD *)(EffectChargeTurn + 224) )
    {
      j_il2cpp_runtime_class_init_0(EffectChargeTurn);
      EffectChargeTurn = (__int64)*v20;
    }
    if ( (signed int)v34 >= *(_DWORD *)(*(_QWORD *)(EffectChargeTurn + 184) + 32LL) )
      break;
    if ( !SkillIdList )
      goto LABEL_58;
    if ( v34 >= SkillIdList->max_length )
      goto LABEL_57;
    *v71 = 0;
    if ( !SkillLevelList )
      goto LABEL_58;
    if ( v34 >= SkillLevelList->max_length )
      goto LABEL_57;
    *v72++ = -1;
    EffectChargeTurn = (__int64)*v20;
    ++v34;
    ++v71;
  }
}


System_Int32_array *__fastcall ServantLeaderInfo__getSkillLevelList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  System_Int32_array *result; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40FC792 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v4);
    byte_40FC792 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v5->static_fields->SvtSkillListMax, v2);
  if ( !result )
    sub_B170D4();
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillLv2, max_length <= 2) )
  {
    sub_B17100(result, v7, v8);
    sub_B170A0();
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
  int32_t v15; // w0
  ServantTreasureDvcEntity_o *EntityFromSvtIdDvcId; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  TreasureDvcInfo_o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  TreasureDvcInfo_o *v28; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_40FC7A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, tdInfo);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, v7);
    byte_40FC7A7 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AAFCFC(v9);
  v10 = **(DataManager_o ***)(v9 + 184);
  if ( !v10 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v10,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v13;
  *(_QWORD *)&v30.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL);
  if ( !v14 )
    goto LABEL_18;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(v14, v15, this->fields.treasureDeviceId, 0LL);
  v21 = (TreasureDvcInfo_o *)sub_B170CC(TreasureDvcInfo_TypeInfo, v17, v18, v19, v20);
  TreasureDvcInfo___ctor(v21, 0LL);
  *tdInfo = v21;
  sub_B16F98((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
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
          v28 = *tdInfo;
          ServantTreasureDvcEntity__getEffectExplanation(
            EntityFromSvtIdDvcId,
            &v28->fields.name,
            &v28->fields.explanation,
            &v28->fields.maxLv,
            &v28->fields.guageCount,
            &v28->fields.cardId,
            &v28->fields.strengthStatus,
            &v28->fields.treasureDeviceNum,
            v28->fields.lv,
            0LL);
          return 1;
        }
      }
    }
LABEL_18:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo_29621492(
        ServantLeaderInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x21
  DataManager_o *v11; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w8

  if ( (byte_40FC7A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, tdLv);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    byte_40FC7A8 = 1;
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
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v10 = **(_QWORD **)(v9 + 192);
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AAFCFC(v10);
    v11 = **(DataManager_o ***)(v10 + 184);
    if ( !v11
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                v11,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               this->fields.treasureDeviceId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  DataManager_o *v7; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t treasureDeviceLv; // w8

  if ( (byte_40FC7A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_40FC7A9 = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              v7,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.treasureDeviceId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_40FC7A3 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_40FC7A3 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_31243756(questRestrictionInfo, v7, 0LL);
}


bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction_29620448(
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

  if ( (byte_40FC7A4 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_40FC7A4 = 1;
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_31243980(questRestrictionInfo, v11, partyItem, num, -1, 0LL);
}


bool __fastcall ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_40FC794 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FC794 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL) > 0;
}


bool __fastcall ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_40FC78B & 1) == 0 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40FC78B = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
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