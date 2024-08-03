void __fastcall ServantLeaderInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FD5CF & 1) == 0 )
  {
    sub_1B640C8(&ServantLeaderInfo_TypeInfo, v1);
    byte_49FD5CF = 1;
  }
  ServantLeaderInfo_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLeaderInfo___ctor_40150640(
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
  Il2CppObject *Entity; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  int32_t MaxDispLimitCount; // w0
  int32_t v21; // w22
  __int64 v22; // x8
  __int64 v23; // x0
  Il2CppObject *MasterData_object; // x23
  __int64 v25; // x1
  unsigned int v26; // w8
  __int64 v27; // x9
  __int64 v28; // x9
  __int64 v29; // x8
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x0
  __int64 v33; // x0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  const MethodInfo *v37; // x2

  if ( (byte_49FD593 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FD593 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(this, v18);
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v21 = MaxDispLimitCount;
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1BB5FA4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1BB5FA4(v23);
  Instance = **(void ***)(v23 + 184);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.svtId, 0LL);
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
    sub_1B6432C(Instance, v25);
  v29 = *((_QWORD *)Instance + 6);
  if ( v29 )
    LODWORD(v29) = *(_DWORD *)(v29 + 28);
  this->fields.skillId3 = v29;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_39;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    goto LABEL_36;
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1BB5FA4(v32);
  v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1BB5FA4(v33);
  Instance = **(void ***)(v33 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL )
  {
LABEL_39:
    sub_1B64324(Instance);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipTarget1, 0, v30, v31);
  this->fields.randomLimitCountTargets = 0LL;
  *(_QWORD *)&this->fields.imageLimitCount = 0LL;
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.updatedAt = 0LL;
  this->fields.portraitLimitCount = 0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.randomLimitCountTargets, 0, v35, v36);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL) )
    ServantLeaderInfo__SetTransformData(this, 0, v37);
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
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  int32_t v14; // w0
  int32_t iconLimitCount; // w1
  const MethodInfo *v16; // x2
  int32_t v17; // w0
  int32_t dispLimitCount; // w1
  const MethodInfo *v19; // x2
  int32_t v20; // w0
  int32_t commandCardLimitCount; // w1
  const MethodInfo *v22; // x2
  int32_t v23; // w0
  int32_t portraitLimitCount; // w1
  const MethodInfo *v25; // x2
  ServantLeaderInfo_o *v26; // x0
  int32_t v27; // w1
  const MethodInfo *v28; // x2
  ServantLeaderInfo_o *AdjustLimitCount; // x0
  int32_t v30; // w1
  const MethodInfo *v31; // x2
  ServantLeaderInfo_o *v32; // x0
  int32_t v33; // w1
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_49FD5C5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&OptionManager_TypeInfo, v5);
    byte_49FD5C5 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSpoilerSetting(0LL) )
  {
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v38.fields.currentCryptoKey = v7;
    *(_QWORD *)&v38.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v38, 0LL) >= 1 )
    {
      v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                   v8,
                                                                   v9);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v10,
        (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.limitChangeDic = v10;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.limitChangeDic, (int32_t)v10, v11, v12);
      v14 = ServantLeaderInfo__GetLimitChangeDic(this, this->fields.imageLimitCount, v13);
      iconLimitCount = this->fields.iconLimitCount;
      this->fields.imageLimitCount = v14;
      v17 = ServantLeaderInfo__GetLimitChangeDic(this, iconLimitCount, v16);
      dispLimitCount = this->fields.dispLimitCount;
      this->fields.iconLimitCount = v17;
      v20 = ServantLeaderInfo__GetLimitChangeDic(this, dispLimitCount, v19);
      commandCardLimitCount = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = v20;
      v23 = ServantLeaderInfo__GetLimitChangeDic(this, commandCardLimitCount, v22);
      portraitLimitCount = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = v23;
      v26 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetLimitChangeDic(this, portraitLimitCount, v25);
      v27 = this->fields.dispLimitCount;
      this->fields.portraitLimitCount = (int)v26;
      AdjustLimitCount = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(v26, v27, v28);
      v30 = this->fields.commandCardLimitCount;
      this->fields.dispLimitCount = (int)AdjustLimitCount;
      v32 = (ServantLeaderInfo_o *)ServantLeaderInfo__GetAdjustLimitCount(AdjustLimitCount, v30, v31);
      v33 = this->fields.portraitLimitCount;
      this->fields.commandCardLimitCount = (int)v32;
      this->fields.portraitLimitCount = ServantLeaderInfo__GetAdjustLimitCount(v32, v33, v34);
      ServantLeaderInfo__SetServantNameBySpoilerProtection(this, v35);
      this->fields.limitChangeDic = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.limitChangeDic, 0, v36, v37);
    }
  }
}


// positive sp value has been detected, the output may be wrong!
void __fastcall ServantLeaderInfo__Finalize(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.equipTarget1 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipTarget1, 0, v2, v3);
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
  if ( (byte_49FD5C8 & 1) == 0 )
  {
    sub_1B640C8(&ServantLeaderInfo_TypeInfo, *(_QWORD *)&orgLimitCount);
    byte_49FD5C8 = 1;
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
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x25
  __int64 v19; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x24
  Il2CppObject *v21; // x24
  const MethodInfo *v22; // x1
  int32_t *Entity; // x0
  int32_t v24; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_49FD597 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FD597 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v19;
  *(_QWORD *)&v26.fields.fakeValue = v18;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v26, 0LL);
  if ( !v20 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
LABEL_13:
    v24 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v21 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v22),
        !v21) )
  {
LABEL_15:
    sub_1B64324(Instance);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
                        (int32_t)Instance,
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_13;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v24 = Entity[8];
  result = 1;
LABEL_14:
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
  Il2CppObject *Master_object; // x0
  __int64 v23; // x26
  __int64 v24; // x27
  ServantAppendPassiveSkillMaster_o *v25; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *EntityListFromSvtId; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_String_o *MasterName_k__BackingField; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x25
  System_Int32_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Boolean_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Int32_array *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x1
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
  int32_t v58; // w1
  SkillEntity_o *v59; // x28
  System_Int32_array *v60; // x8
  System_String_array *v61; // x22
  int32_t v62; // w2
  int32_t v63; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x1
  Il2CppClass **v65; // x0
  System_String_array *v66; // x22
  int32_t v67; // w2
  int32_t v68; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v69; // x1
  Il2CppClass **v70; // x0
  System_Boolean_array *v71; // x8
  char v72; // w9
  System_String_array *v73; // x22
  int32_t v74; // w2
  int32_t v75; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v76; // x1
  Il2CppClass **v77; // x0
  System_String_array *v78; // x28
  int32_t v79; // w2
  int32_t v80; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v81; // x1
  Il2CppClass **v82; // x0
  System_String_array *v83; // x8
  System_String_array *v84; // x8
  ServantStatusBattleListViewItem_o *v85; // x28
  System_String_o *sortValue0; // t1
  System_String_o *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_array *v90; // x8
  Il2CppClass **v91; // x28
  ServantStatusBattleListViewItem_o *v92; // x28
  System_String_o *v93; // x29
  System_String_o *v94; // t1
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  struct AppendPassiveSkillInfo_array *v99; // x8
  int32_t v100; // w2
  int32_t v101; // w3
  int32_t v102; // w2
  int32_t v103; // w3
  int32_t v104; // w2
  int32_t v105; // w3
  int32_t v106; // w2
  int32_t v107; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16

  if ( (byte_49FD5C9 & 1) == 0 )
  {
    sub_1B640C8(&bool___TypeInfo, idList);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1B640C8(&int___TypeInfo, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&string___TypeInfo, v17);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v18);
    sub_1B640C8(&StringLiteral_3778/*"COND_TYPE_TITLE"*/, v19);
    sub_1B640C8(&StringLiteral_3766/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    byte_49FD5C9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v111.fields.currentCryptoKey = v24;
  *(_QWORD *)&v111.fields.fakeValue = v23;
  EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                        v111,
                                                                        0LL);
  if ( !v25
    || (EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                                                              v25,
                                                                              (int32_t)EntityListFromSvtId,
                                                                              0LL)) == 0LL )
  {
LABEL_67:
    sub_1B64324(EntityListFromSvtId);
  }
  MasterName_k__BackingField = EntityListFromSvtId->fields._MasterName_k__BackingField;
  v30 = EntityListFromSvtId;
  if ( MasterName_k__BackingField || (v99 = this->fields.appendPassiveSkill) != 0LL && *(_QWORD *)&v99->max_length )
  {
    v31 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *idList = v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, (int32_t)v31, v32, v33);
    v34 = (System_String_array *)sub_1B64170(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *titleList = v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v34, v35, v36);
    v37 = (System_String_array *)sub_1B64170(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *explanationList = v37;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v37, v38, v39);
    v40 = (System_Boolean_array *)sub_1B64170(bool___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *releaseStateList = v40;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v40, v41, v42);
    v43 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *lvList = v43;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v43, v44, v45);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
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
        if ( v48 >= LODWORD(v30->fields._MasterName_k__BackingField) )
          goto LABEL_68;
        v55 = (int)v48;
        v56 = *((_QWORD *)&v30->fields.list + (int)v48);
        if ( !v56 )
          goto LABEL_67;
        v57 = *idList;
        if ( !*idList )
          goto LABEL_67;
        if ( v48 >= v57->max_length )
          goto LABEL_68;
        v58 = *(_DWORD *)(v56 + 28);
        v57->m_Items[v48 + 1] = v58;
        if ( !v47 )
          goto LABEL_67;
        EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                              v47,
                                                                              v58,
                                                                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v59 = (SkillEntity_o *)EntityListFromSvtId;
        v60 = *lvList;
        if ( v54 )
        {
          if ( !v60 )
            goto LABEL_67;
          if ( v48 >= v60->max_length )
            goto LABEL_68;
          v60->m_Items[v48 + 1] = v54->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v61 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                v54->fields.skillLv,
                                                                                0LL);
          if ( !v61 )
            goto LABEL_67;
          if ( v48 >= v61->max_length )
            goto LABEL_68;
          v64 = EntityListFromSvtId;
          v65 = &v61->obj.klass + (int)v48;
          v65[4] = (Il2CppClass *)v64;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v64, v62, v63);
          v66 = *explanationList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                                v59,
                                                                                v54->fields.skillLv,
                                                                                0LL);
          if ( !v66 )
            goto LABEL_67;
          if ( v48 >= v66->max_length )
            goto LABEL_68;
          v69 = EntityListFromSvtId;
          v70 = &v66->obj.klass + (int)v48;
          v70[4] = (Il2CppClass *)v69;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)v69, v67, v68);
          v71 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v48 >= v71->max_length )
            goto LABEL_68;
          v72 = 1;
        }
        else
        {
          if ( !v60 )
            goto LABEL_67;
          if ( v48 >= v60->max_length )
            goto LABEL_68;
          v60->m_Items[v48 + 1] = -1;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v73 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                -1,
                                                                                0LL);
          if ( !v73 )
            goto LABEL_67;
          if ( v48 >= v73->max_length )
            goto LABEL_68;
          v76 = EntityListFromSvtId;
          v77 = &v73->obj.klass + (int)v48;
          v77[4] = (Il2CppClass *)v76;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v77 + 4), (int32_t)v76, v74, v75);
          v78 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3778/*"COND_TYPE_TITLE"*/,
                                                                                0LL);
          if ( !v78 )
            goto LABEL_67;
          if ( v48 >= v78->max_length )
            goto LABEL_68;
          v81 = EntityListFromSvtId;
          v82 = &v78->obj.klass + (int)v48;
          v82[4] = (Il2CppClass *)v81;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v82 + 4), (int32_t)v81, v79, v80);
          v83 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v48 >= v83->max_length )
            goto LABEL_68;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                                v83->m_Items[v48],
                                                                                (System_String_o *)StringLiteral_1/*""*/,
                                                                                0LL);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v84 = *explanationList;
            if ( !*explanationList )
              goto LABEL_67;
            if ( v48 >= v84->max_length )
              goto LABEL_68;
            v85 = (ServantStatusBattleListViewItem_o *)(&v84->obj.klass + (int)v48);
            sortValue0 = (System_String_o *)v85->fields.sortValue0;
            v85 = (ServantStatusBattleListViewItem_o *)((char *)v85 + 32);
            v87 = System_String__Concat_61375396(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            v85->klass = (ServantStatusBattleListViewItem_c *)v87;
            sub_1B6406C(v85, (int32_t)v87, v88, v89);
          }
          v90 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v48 >= v90->max_length )
            goto LABEL_68;
          v91 = &v90->obj.klass + (int)v48;
          v94 = (System_String_o *)v91[4];
          v92 = (ServantStatusBattleListViewItem_o *)(v91 + 4);
          v93 = v94;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v95 = LocalizationManager__Get((System_String_o *)StringLiteral_3766/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v96 = System_String__Concat_61375396(v93, v95, 0LL);
          v92->klass = (ServantStatusBattleListViewItem_c *)v96;
          sub_1B6406C(v92, (int32_t)v96, v97, v98);
          v71 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v48 >= v71->max_length )
            goto LABEL_68;
          v72 = 0;
        }
        ++v48;
        v71->m_Items[v55 + 4] = v72;
        if ( v48 == (_DWORD)MasterName_k__BackingField )
          return;
      }
      v51 = 0LL;
      v52 = (__int64)(&v30->fields.list + (int)v48);
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v51 < max_length )
      {
        v54 = m_Items[v51];
        if ( !v54 )
          goto LABEL_67;
        if ( v48 >= LODWORD(v30->fields._MasterName_k__BackingField) )
          break;
        if ( !*(_QWORD *)v52 )
          goto LABEL_67;
        if ( v54->fields.skillId == *(_DWORD *)(*(_QWORD *)v52 + 28LL) )
          goto LABEL_24;
        if ( (int)++v51 >= max_length )
          goto LABEL_23;
      }
LABEL_68:
      sub_1B6432C(EntityListFromSvtId, v46);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, 0, v27, v28);
    *titleList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, 0, v100, v101);
    *explanationList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, 0, v102, v103);
    *releaseStateList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)releaseStateList, 0, v104, v105);
    *lvList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lvList, 0, v106, v107);
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
  __int64 v40; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x26
  il2cpp_array_size_t v42; // w29
  struct AppendPassiveSkillInfo_array *v43; // x8
  __int64 v44; // x19
  AppendPassiveSkillInfo_o *v45; // x8
  System_Int32_array *v46; // x9
  int32_t skillId; // w1
  struct AppendPassiveSkillInfo_array *v48; // x8
  AppendPassiveSkillInfo_o *v49; // x8
  int skillLv; // w10
  SkillEntity_o *v51; // x27
  System_Int32_array *v52; // x9
  System_String_array *v53; // x28
  int32_t v54; // w2
  int32_t v55; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x1
  Il2CppClass **v57; // x0
  struct AppendPassiveSkillInfo_array *v58; // x8
  AppendPassiveSkillInfo_o *v59; // x8
  System_String_array *v60; // x28
  int32_t v61; // w2
  int32_t v62; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x1
  Il2CppClass **v64; // x0
  System_Boolean_array *v65; // x8
  char v66; // w9
  System_String_array *v67; // x28
  int32_t v68; // w2
  int32_t v69; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x1
  Il2CppClass **v71; // x0
  System_String_array *v72; // x27
  int32_t v73; // w2
  int32_t v74; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v75; // x1
  Il2CppClass **v76; // x0
  System_String_array *v77; // x8
  System_String_array *v78; // x8
  ServantStatusBattleListViewItem_o *v79; // x27
  System_String_o *sortValue0; // t1
  System_String_o *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_array *v84; // x8
  Il2CppClass **v85; // x27
  ServantStatusBattleListViewItem_o *v86; // x27
  System_String_o *v87; // x28
  System_String_o *v88; // t1
  System_String_o *v89; // x0
  System_String_o *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w2
  int32_t v96; // w3
  int32_t v97; // w2
  int32_t v98; // w3
  int32_t v99; // w2
  int32_t v100; // w3

  if ( (byte_49FD5CA & 1) == 0 )
  {
    sub_1B640C8(&bool___TypeInfo, idList);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1B640C8(&int___TypeInfo, v15);
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    sub_1B640C8(&string___TypeInfo, v17);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v18);
    sub_1B640C8(&StringLiteral_3778/*"COND_TYPE_TITLE"*/, v19);
    sub_1B640C8(&StringLiteral_3766/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    byte_49FD5CA = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (v23 = *(_QWORD *)&appendPassiveSkill->max_length) != 0 )
  {
    v24 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v23);
    *idList = v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, (int32_t)v24, v25, v26);
    v27 = (System_String_array *)sub_1B64170(string___TypeInfo, (unsigned int)v23);
    *titleList = v27;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v27, v28, v29);
    v30 = (System_String_array *)sub_1B64170(string___TypeInfo, (unsigned int)v23);
    *explanationList = v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v30, v31, v32);
    v33 = (System_Boolean_array *)sub_1B64170(bool___TypeInfo, (unsigned int)v23);
    *releaseStateList = v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v33, v34, v35);
    v36 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v23);
    *lvList = v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v36, v37, v38);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
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
        skillId = v45->fields.skillId;
        v46->m_Items[v42 + 1] = skillId;
        if ( !v41 )
          break;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v41,
                                                                        skillId,
                                                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v48 = this->fields.appendPassiveSkill;
        if ( !v48 )
          break;
        if ( v42 >= v48->max_length )
          goto LABEL_58;
        v49 = v48->m_Items[v42];
        if ( !v49 )
          break;
        skillLv = v49->fields.skillLv;
        v51 = (SkillEntity_o *)Master_object;
        v52 = *lvList;
        if ( skillLv < 1 )
        {
          if ( !v52 )
            break;
          if ( v42 >= v52->max_length )
            goto LABEL_58;
          v52->m_Items[v42 + 1] = -1;
          if ( !Master_object )
            break;
          v67 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          -1,
                                                                          0LL);
          if ( !v67 )
            break;
          if ( v42 >= v67->max_length )
            goto LABEL_58;
          v70 = Master_object;
          v71 = &v67->obj.klass + (int)v42;
          v71[4] = (Il2CppClass *)v70;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v70, v68, v69);
          v72 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_3778/*"COND_TYPE_TITLE"*/,
                                                                          0LL);
          if ( !v72 )
            break;
          if ( v42 >= v72->max_length )
            goto LABEL_58;
          v75 = Master_object;
          v76 = &v72->obj.klass + (int)v42;
          v76[4] = (Il2CppClass *)v75;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 4), (int32_t)v75, v73, v74);
          v77 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v42 >= v77->max_length )
            goto LABEL_58;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                          v77->m_Items[v42],
                                                                          (System_String_o *)StringLiteral_1/*""*/,
                                                                          0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v78 = *explanationList;
            if ( !*explanationList )
              break;
            if ( v42 >= v78->max_length )
              goto LABEL_58;
            v79 = (ServantStatusBattleListViewItem_o *)(&v78->obj.klass + (int)v42);
            sortValue0 = (System_String_o *)v79->fields.sortValue0;
            v79 = (ServantStatusBattleListViewItem_o *)((char *)v79 + 32);
            v81 = System_String__Concat_61375396(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            v79->klass = (ServantStatusBattleListViewItem_c *)v81;
            sub_1B6406C(v79, (int32_t)v81, v82, v83);
          }
          v84 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v42 >= v84->max_length )
LABEL_58:
            sub_1B6432C(Master_object, v40);
          v85 = &v84->obj.klass + (int)v42;
          v88 = (System_String_o *)v85[4];
          v86 = (ServantStatusBattleListViewItem_o *)(v85 + 4);
          v87 = v88;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_3766/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v90 = System_String__Concat_61375396(v87, v89, 0LL);
          v86->klass = (ServantStatusBattleListViewItem_c *)v90;
          sub_1B6406C(v86, (int32_t)v90, v91, v92);
          v65 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v42 >= v65->max_length )
            goto LABEL_58;
          v66 = 0;
        }
        else
        {
          if ( !v52 )
            break;
          if ( v42 >= v52->max_length )
            goto LABEL_58;
          v52->m_Items[v42 + 1] = skillLv;
          if ( !Master_object )
            break;
          v53 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          v49->fields.skillLv,
                                                                          0LL);
          if ( !v53 )
            break;
          if ( v42 >= v53->max_length )
            goto LABEL_58;
          v56 = Master_object;
          v57 = &v53->obj.klass + (int)v42;
          v57[4] = (Il2CppClass *)v56;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v56, v54, v55);
          v58 = this->fields.appendPassiveSkill;
          if ( !v58 )
            break;
          if ( v42 >= v58->max_length )
            goto LABEL_58;
          v59 = v58->m_Items[v42];
          if ( !v59 )
            break;
          v60 = *explanationList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                          v51,
                                                                          v59->fields.skillLv,
                                                                          0LL);
          if ( !v60 )
            break;
          if ( v42 >= v60->max_length )
            goto LABEL_58;
          v63 = Master_object;
          v64 = &v60->obj.klass + (int)v42;
          v64[4] = (Il2CppClass *)v63;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v63, v61, v62);
          v65 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v42 >= v65->max_length )
            goto LABEL_58;
          v66 = 1;
        }
        ++v42;
        v65->m_Items[v44 + 4] = v66;
        if ( (_DWORD)v23 == v42 )
          return;
      }
      sub_1B64324(Master_object);
    }
  }
  else
  {
    *idList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, 0, (int32_t)titleList, (int32_t)explanationList);
    *titleList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, 0, v93, v94);
    *explanationList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, 0, v95, v96);
    *releaseStateList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)releaseStateList, 0, v97, v98);
    *lvList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lvList, 0, v99, v100);
  }
}


void __fastcall ServantLeaderInfo__GetAppendPassiveSkillInfo_40171876(
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  __int64 v20; // x20
  const MethodInfo *v21; // x1
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  unsigned __int64 v26; // x25
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  SkillInfo_array *v31; // x26
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x0
  System_Int32_array *v35; // [xsp+0h] [xbp-70h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_49FD5CB & 1) == 0 )
  {
    sub_1B640C8(&SkillInfo___TypeInfo, skillInfoList);
    sub_1B640C8(&SkillInfo_TypeInfo, v8);
    byte_49FD5CB = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v35 = 0LL;
  releaseStateList = 0LL;
  if ( isNpc )
    ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v35,
      v4);
  else
    ServantLeaderInfo__GetAppendPassiveSkillInfo(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v35,
      v4);
  if ( idList && (v11 = *(_QWORD *)&idList->max_length) != 0 )
  {
    v12 = (SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, (unsigned int)v11);
    *skillInfoList = v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v12, v13, v14);
    if ( (int)v11 >= 1 )
    {
      v17 = -(__int64)(unsigned int)v11;
      v18 = 8LL;
      v19 = 32LL;
      do
      {
        v20 = sub_1B64314(SkillInfo_TypeInfo, v15, v16);
        SkillInfo___ctor((SkillInfo_o *)v20, v21);
        if ( !v20 )
          goto LABEL_26;
        *(_DWORD *)(v20 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v26 = v18 - 8;
        if ( v18 - 8 >= (unsigned __int64)idList->max_length )
          goto LABEL_27;
        *(_DWORD *)(v20 + 16) = *((_DWORD *)&idList->obj.klass + v18);
        if ( !v35 )
          goto LABEL_26;
        if ( v26 >= v35->max_length )
          goto LABEL_27;
        *(_DWORD *)(v20 + 20) = *((_DWORD *)&v35->obj.klass + v18);
        if ( !titleList )
          goto LABEL_26;
        if ( v26 >= titleList->max_length )
          goto LABEL_27;
        v27 = *(__int64 *)((char *)&titleList->obj.klass + v19);
        *(_QWORD *)(v20 + 32) = v27;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 32), v27, v24, v25);
        if ( !explanationList )
          goto LABEL_26;
        if ( v26 >= explanationList->max_length )
          goto LABEL_27;
        v30 = *(__int64 *)((char *)&explanationList->obj.klass + v19);
        *(_QWORD *)(v20 + 40) = v30;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 40), v30, v28, v29);
        v31 = *skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_1B64324(v22);
        v22 = sub_1B64204(v20, v31->obj.klass->_1.element_class);
        if ( !v22 )
        {
          v34 = sub_1B64348(0LL);
          sub_1B641F0(v34, 0LL);
        }
        if ( v26 >= v31->max_length )
LABEL_27:
          sub_1B6432C(v22, v23);
        *(Il2CppClass **)((char *)&v31->obj.klass + v19) = (Il2CppClass *)v20;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v31 + v19), v20, v32, v33);
        ++v18;
        v19 += 8LL;
      }
      while ( v17 + v18 != 8 );
    }
  }
  else
  {
    *skillInfoList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, 0, v9, v10);
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

  if ( (byte_49FD5BA & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v4);
    sub_1B640C8(&OptionManager_TypeInfo, v5);
    sub_1B640C8(&ServantLeaderInfo_TypeInfo, v6);
    byte_49FD5BA = 1;
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

  if ( (byte_49FD5C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, *(_QWORD *)&limit);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD5C6 = 1;
  }
  value = 0;
  limitChangeDic = (DataManager_o *)this->fields.limitChangeDic;
  if ( !limitChangeDic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          (System_Collections_Generic_Dictionary_int__int__o *)limitChangeDic,
          limit,
          &value,
          (const MethodInfo_311C54C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    limitChangeDic = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( limitChangeDic )
    {
      limitChangeDic = (DataManager_o *)DataManager__GetMasterData_object_(
                                          limitChangeDic,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
            (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          return value;
        }
      }
    }
LABEL_10:
    sub_1B64324(limitChangeDic);
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
  int32_t ChoiceLimitCount_31462296; // w0
  int32_t imageLimitCount; // w19
  BalanceConfig_c *v8; // x0

  if ( (byte_49FD592 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v5);
    byte_49FD592 = 1;
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
  ChoiceLimitCount_31462296 = RandomLimitCountManager__GetChoiceLimitCount_31462296(this, 0LL);
  if ( (unsigned int)kind > 4 )
    return -1;
  imageLimitCount = ChoiceLimitCount_31462296;
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
  Il2CppObject *Entity; // x0

  if ( (byte_49FD59B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&dispSvtId);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD59B = 1;
  }
  if ( !classPassive )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               dispSvtId,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  __int64 v18; // x0
  __int64 v19; // x0
  DataManager_o *MasterData_object; // x0
  __int64 v21; // x1
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

  if ( (byte_49FD5A0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, titleList);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1B640C8(&string___TypeInfo, v10);
    byte_49FD5A0 = 1;
  }
  if ( !idList )
    goto LABEL_29;
  v11 = *(_QWORD *)&idList->max_length;
  if ( !v11 )
    goto LABEL_29;
  v12 = (System_String_array *)sub_1B64170(string___TypeInfo, (unsigned int)v11);
  *titleList = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v12, v13, v14);
  v15 = (System_String_array *)sub_1B64170(string___TypeInfo, (unsigned int)v11);
  *explanationList = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v15, v16, v17);
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BB5FA4(v18);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BB5FA4(v19);
  MasterData_object = **(DataManager_o ***)(v19 + 184);
  if ( !MasterData_object )
LABEL_31:
    sub_1B64324(MasterData_object);
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
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
      sub_1B6432C(MasterData_object, v21);
    v21 = (unsigned int)v26[v23];
    if ( (int)v21 >= 1 )
    {
      if ( !v22 )
        goto LABEL_31;
      MasterData_object = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                             v22,
                                             v21,
                                             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v31, v29, v30);
        v33 = *explanationList;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectExplanation(v28, 0, 0LL);
        if ( !v33 )
          goto LABEL_31;
        if ( v24 >= v33->max_length )
          goto LABEL_30;
        v36 = MasterData_object;
        v37 = &v33->obj.klass + (int)v24;
        v37[4] = (Il2CppClass *)v36;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v36, v34, v35);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, 0, (int32_t)explanationList, (int32_t)idList);
    *explanationList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, 0, v39, v40);
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

  if ( (byte_49FD598 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&id1);
    sub_1B640C8(&int___TypeInfo, v8);
    byte_49FD598 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1B64324(0LL);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = id1, max_length == 1) || (result->m_Items[2] = id2, max_length <= 2) )
    sub_1B6432C(result, v11);
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
  SkillInfo_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  unsigned __int64 v28; // x21
  __int64 v29; // x23
  il2cpp_array_size_t v30; // w29
  int32_t *v31; // x24
  SkillEntity_o *v32; // x27
  BalanceConfig_c **v33; // x20
  ServantSkillEntity_o *EntityFromSkillId; // x26
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x25
  const MethodInfo *v38; // x1
  System_String_o *EffectTitle; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *EffectExplanation; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x8
  int32_t skillNum; // w8
  SkillInfo_array *v47; // x26
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppClass **v50; // x0
  int32_t *v51; // x20
  int32_t *i; // x21
  __int64 v53; // x0
  Il2CppObject *v54; // [xsp+0h] [xbp-90h]
  int32_t *v55; // [xsp+8h] [xbp-88h]
  ServantSkillMaster_o *v57; // [xsp+18h] [xbp-78h]
  __int64 v59; // [xsp+28h] [xbp-68h]

  if ( (byte_49FD59E & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1B640C8(&SkillInfo___TypeInfo, v11);
    sub_1B640C8(&SkillInfo_TypeInfo, v12);
    byte_49FD59E = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB5FA4(v13);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB5FA4(v14);
  Entity = **(DataManager_o ***)(v14 + 184);
  if ( !Entity )
    goto LABEL_56;
  MasterData_object = DataManager__GetMasterData_object_(
                        Entity,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BB5FA4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BB5FA4(v18);
  Entity = **(DataManager_o ***)(v18 + 184);
  if ( !Entity )
LABEL_56:
    sub_1B64324(Entity);
  v19 = &BalanceConfig_TypeInfo;
  v57 = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                  Entity,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v20);
  v22 = BalanceConfig_TypeInfo;
  v23 = SkillLevelList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  v24 = (SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, (unsigned int)v22->static_fields->SvtSkillListMax);
  *skillInfoList = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v24, v25, v26);
  v28 = 0LL;
  v59 = 0LL;
  v29 = 0LL;
  v30 = 0;
  v31 = &idList->m_Items[1];
  v54 = MasterData_object;
  v55 = &v23->m_Items[1];
  while ( 1 )
  {
    Entity = (DataManager_o *)*v19;
    if ( !(*v19)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v19;
    }
    if ( (__int64)v28 >= *(int *)(*(_QWORD *)&Entity[1].fields._DispLog + 32LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v28 >= idList->max_length )
LABEL_57:
      sub_1B6432C(Entity, v27);
    v27 = (unsigned int)v31[v28];
    if ( (int)v27 >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_56;
      Entity = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  v27,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( v28 >= idList->max_length )
          goto LABEL_57;
        v32 = (SkillEntity_o *)Entity;
        Entity = (DataManager_o *)v57;
        if ( !v57 )
          goto LABEL_56;
        v33 = v19;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v57, dispSvtId, (int)v28 + 1, v31[v28], 0LL);
        v37 = sub_1B64314(SkillInfo_TypeInfo, v35, v36);
        SkillInfo___ctor((SkillInfo_o *)v37, v38);
        if ( v28 >= idList->max_length )
          goto LABEL_57;
        if ( !v37 )
          goto LABEL_56;
        *(_DWORD *)(v37 + 16) = v31[v28];
        if ( !v23 )
          goto LABEL_56;
        if ( v28 >= v23->max_length )
          goto LABEL_57;
        *(_DWORD *)(v37 + 20) = v55[v28];
        Entity = (DataManager_o *)SkillEntity__getEffectChargeTurn(v32, v55[v28], 0LL);
        *(_DWORD *)(v37 + 24) = (_DWORD)Entity;
        if ( v28 >= v23->max_length )
          goto LABEL_57;
        EffectTitle = SkillEntity__getEffectTitle(v32, v55[v28], 0LL);
        *(_QWORD *)(v37 + 32) = EffectTitle;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)EffectTitle, v40, v41);
        if ( v28 >= v23->max_length )
          goto LABEL_57;
        EffectExplanation = SkillEntity__getEffectExplanation(v32, v55[v28], 0LL);
        *(_QWORD *)(v37 + 40) = EffectExplanation;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 40), (int32_t)EffectExplanation, v43, v44);
        v45 = v59;
        if ( EntityFromSkillId )
          v29 = v37;
        if ( !EntityFromSkillId )
          v45 = v37;
        v59 = v45;
        if ( EntityFromSkillId )
        {
          Entity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          if ( !v29 )
            goto LABEL_56;
          *(_DWORD *)(v29 + 48) = (_DWORD)Entity;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          if ( !v45 )
            goto LABEL_56;
          skillNum = 0;
          *(_DWORD *)(v59 + 48) = 0;
        }
        *(_DWORD *)(v37 + 52) = skillNum;
        *(_BYTE *)(v37 + 56) = 1;
        v47 = *skillInfoList;
        if ( !*skillInfoList )
          goto LABEL_56;
        Entity = (DataManager_o *)sub_1B64204(v37, v47->obj.klass->_1.element_class);
        if ( !Entity )
        {
          v53 = sub_1B64348(0LL);
          sub_1B641F0(v53, 0LL);
        }
        if ( v30 >= v47->max_length )
          goto LABEL_57;
        v50 = &v47->obj.klass + (int)v30;
        v50[4] = (Il2CppClass *)v37;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 4), v37, v48, v49);
        MasterData_object = v54;
        ++v30;
        v19 = v33;
      }
    }
    ++v28;
  }
  v51 = &v23->m_Items[v30 + 1];
  for ( i = &idList->m_Items[v30 + 1]; ; ++i )
  {
    if ( !LODWORD(Entity[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v19;
    }
    if ( (signed int)v30 >= *(_DWORD *)(*(_QWORD *)&Entity[1].fields._DispLog + 32LL) )
      break;
    if ( !idList )
      goto LABEL_56;
    if ( v30 >= idList->max_length )
      goto LABEL_57;
    *i = 0;
    if ( !v23 )
      goto LABEL_56;
    if ( v30 >= v23->max_length )
      goto LABEL_57;
    *v51++ = -1;
    ++v30;
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
  UserEventDataLostEntity_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  UserEventDataLostEntity_o *v13; // x20
  __int64 v14; // x19
  __int64 v15; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_49FD5CD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FD5CD = 1;
  }
  entity = 0LL;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v10 = entity;
      v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = v12;
      *(_QWORD *)&v18.fields.fakeValue = v11;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
      if ( !v10 )
        goto LABEL_21;
      if ( UserEventDataLostEntity__IsRestart(v10, UserId, 0LL) )
      {
        v13 = entity;
        v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v19.fields.currentCryptoKey = v15;
        *(_QWORD *)&v19.fields.fakeValue = v14;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v19, 0LL);
        if ( v13 )
          return UserEventDataLostEntity__GetTimesToRestart(v13, UserId, 0LL);
LABEL_21:
        sub_1B64324(UserId);
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
  struct AfterTransformSvtInfo_o *v12; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( !afterTransformSvtInfo )
    return ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, 0LL, v3);
  classPassive = afterTransformSvtInfo->fields.classPassive;
  p_classPassive = (ServantStatusBattleListViewItem_o *)&afterTransformSvtInfo->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, classPassive, v3);
  p_classPassive->klass = (ServantStatusBattleListViewItem_c *)PassiveSkillIdList;
  sub_1B6406C(p_classPassive, (int32_t)PassiveSkillIdList, v9, v10);
  v12 = this->fields.afterTransformSvtInfo;
  if ( !v12 )
    sub_1B64324(v11);
  return v12->fields.classPassive;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, (int32_t)TransformedPassiveSkillIdList, v10, v11);
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
  __int64 v15; // x1
  __int64 v16; // x2
  TreasureDvcInfo_o *v17; // x23
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  TreasureDvcInfo_o *v21; // x8
  int32_t tdLv; // w9

  if ( (byte_49FD5B1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, tdInfo);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1B640C8(&TreasureDvcInfo_TypeInfo, v10);
    byte_49FD5B1 = 1;
  }
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BB5FA4(v11);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  MasterData_object = **(Il2CppObject ***)(v12 + 184);
  if ( !MasterData_object )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !MasterData_object )
    goto LABEL_13;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           (ServantTreasureDvcMaster_o *)MasterData_object,
                           dispSvtId,
                           treasureDeviceId,
                           0LL);
  v17 = (TreasureDvcInfo_o *)sub_1B64314(TreasureDvcInfo_TypeInfo, v15, v16);
  TreasureDvcInfo___ctor(v17, v18);
  *tdInfo = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v17, v19, v20);
  if ( EntityFromSvtIdDvcId )
  {
    v21 = *tdInfo;
    if ( *tdInfo )
    {
      v21->fields.id = treasureDeviceId;
      tdLv = this->fields.treasureDeviceLv;
      v21->fields.lv = tdLv;
      ServantTreasureDvcEntity__getEffectExplanation(
        EntityFromSvtIdDvcId,
        &v21->fields.name,
        &v21->fields.explanation,
        &v21->fields.maxLv,
        &v21->fields.guageCount,
        &v21->fields.cardId,
        &v21->fields.strengthStatus,
        &v21->fields.treasureDeviceNum,
        tdLv,
        0LL);
      return EntityFromSvtIdDvcId != 0LL;
    }
LABEL_13:
    sub_1B64324(MasterData_object);
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
  UserEventDataLostEntity_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  UserEventDataLostEntity_o *v13; // x20
  __int64 v14; // x19
  __int64 v15; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_49FD5CC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventDataLostMaster___, questRestrictionInfo);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FD5CC = 1;
  }
  entity = 0LL;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
  v10 = entity;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !v10 )
    goto LABEL_22;
  if ( UserEventDataLostEntity__IsRestart(v10, UserId, 0LL) )
    return 0;
  v13 = entity;
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v19, 0LL);
  if ( !v13 )
LABEL_22:
    sub_1B64324(UserId);
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

  if ( (byte_49FD5CE & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FD5CE = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL);
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

  if ( (byte_49FD5AE & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FD5AE = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL);
  limitCount = this->fields.limitCount;
  v9 = v7;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  return QuestRestrictionInfo__IsUniqueIndividuality_40104816(questRestrictionInfo, v9, limitCount, DispLimitCount, 0LL);
}


bool __fastcall ServantLeaderInfo__IsUniqueIndividualityRestriction_40161904(
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

  if ( (byte_49FD5AF & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FD5AF = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return QuestRestrictionInfo__IsUniqueIndividuality_40105436(
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
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  ServantEntity_o *v20; // x22
  const MethodInfo *v21; // x1
  int32_t DispLimitCount; // w0
  int32_t limitCount; // w23
  int32_t v24; // w24
  int32_t LimitCountByDispLimit; // w0
  System_String_o *Name; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *Master_object; // x0
  __int64 v30; // x24
  __int64 v31; // x25
  ServantLimitAddMaster_o *v32; // x23
  const MethodInfo *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t CardImageLimitCount; // w19
  int32_t LimitCountByImageLimitCostumeIn; // w0
  System_String_o *v38; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_49FD5C7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FD5C7 = 1;
  }
  this->fields.overwriteServantName = 0LL;
  p_overwriteServantName = &this->fields.overwriteServantName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.overwriteServantName, 0, v2, v3);
  p_overwriteServantDetailName = &this->fields.overwriteServantDetailName;
  this->fields.overwriteServantDetailName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.overwriteServantDetailName, 0, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v18;
  *(_QWORD *)&v39.fields.fakeValue = v17;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v39, 0LL);
  if ( !v19 )
    goto LABEL_23;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v19,
               (int32_t)Instance,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_23;
  v20 = (ServantEntity_o *)Instance;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v21);
  limitCount = this->fields.limitCount;
  v24 = DispLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v24, limitCount, 0LL);
  Name = ServantEntity__getName(v20, LimitCountByDispLimit, -1, 0LL);
  *p_overwriteServantName = Name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.overwriteServantName, (int32_t)Name, v27, v28);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v31 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v32 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v31;
  *(_QWORD *)&v40.fields.fakeValue = v30;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v40, 0LL);
  if ( !v32 )
LABEL_23:
    sub_1B64324(Instance);
  if ( ServantLimitAddMaster__IsOverwriteSvtDetailName(v32, (int32_t)Instance, 0LL) )
  {
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(this, v33);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0LL);
    v38 = ServantEntity__getName(v20, -1, LimitCountByImageLimitCostumeIn, 0LL);
  }
  else
  {
    v38 = *p_overwriteServantName;
  }
  *p_overwriteServantDetailName = v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(p_overwriteServantName + 1), (int32_t)v38, v34, v35);
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
  __int64 v22; // x2
  AfterTransformSvtInfo_o *v23; // x22
  struct AfterTransformSvtInfo_o **p_afterTransformSvtInfo; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t aftDispLimitCount; // w28
  Il2CppObject *v28; // x22
  ServantLimitMaster_o *v29; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  ServantLimitEntity_o *v32; // x23
  _DWORD *v33; // x24
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x19
  int32_t atkMax; // w26
  int32_t atkBase; // w29
  int v37; // w27
  struct AfterTransformSvtInfo_o *v38; // x29
  int32_t atk; // w19
  int32_t adjustAtk; // w26
  struct AfterTransformSvtInfo_o *v41; // x8
  __int64 v42; // x9
  Il2CppObject *v43; // x24
  __int64 v44; // x1
  unsigned int v45; // w9
  __int64 v46; // x10
  struct AfterTransformSvtInfo_o *v47; // x8
  __int64 v48; // x10
  __int64 v49; // x9
  Il2CppObject *v50; // x0
  void *v51; // x24
  Il2CppClass *v52; // x25
  ServantTreasureDvcMaster_o *v53; // x22
  int32_t friendshipRanka; // [xsp+14h] [xbp-6Ch]
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_49FD594 & 1) == 0 )
  {
    sub_1B640C8(&AfterTransformSvtInfo_TypeInfo, *(_QWORD *)&friendshipRank);
    sub_1B640C8(&BalanceConfig_TypeInfo, v5);
    sub_1B640C8(&CheckCombineResStatus_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantExpMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantSkillMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantTransformMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v12);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    byte_49FD594 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v56.fields.currentCryptoKey = v18;
  *(_QWORD *)&v56.fields.fakeValue = v17;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v56, 0LL);
  if ( !v19 )
    goto LABEL_49;
  if ( !ServantTransformMaster__TryGetEntity(v19, &entity, (int32_t)UseEntityList, this->fields.dispLimitCount + 1, 0LL) )
    return;
  v23 = (AfterTransformSvtInfo_o *)sub_1B64314(AfterTransformSvtInfo_TypeInfo, v21, v22);
  AfterTransformSvtInfo___ctor(v23, 0LL);
  this->fields.afterTransformSvtInfo = v23;
  p_afterTransformSvtInfo = &this->fields.afterTransformSvtInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.afterTransformSvtInfo, (int32_t)v23, v25, v26);
  if ( !entity )
    goto LABEL_49;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_49;
  if ( !UseEntityList )
    goto LABEL_49;
  friendshipRanka = friendshipRank;
  v28 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)UseEntityList,
          entity->fields.aftSvtId,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !v28 )
    goto LABEL_49;
  v29 = (ServantLimitMaster_o *)UseEntityList;
  klass = v28[1].klass;
  monitor = v28[1].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = klass;
  *(_QWORD *)&v57.fields.fakeValue = monitor;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v57, 0LL);
  if ( !v29 )
    goto LABEL_49;
  v32 = ServantLimitMaster__GetEntity(v29, (int32_t)UseEntityList, this->fields.limitCount, 0LL);
  UseEntityList = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantExpMaster___);
  if ( !UseEntityList )
    goto LABEL_49;
  UseEntityList = ServantExpMaster__GetEntity(
                    (ServantExpMaster_o *)UseEntityList,
                    HIDWORD(v28[8].klass),
                    this->fields.lv,
                    0LL);
  if ( !v32 )
    goto LABEL_49;
  v33 = UseEntityList;
  if ( !UseEntityList )
    goto LABEL_49;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  atkBase = v32->fields.atkBase;
  atkMax = v32->fields.atkMax;
  v37 = *((_DWORD *)UseEntityList + 7);
  UseEntityList = CheckCombineResStatus_TypeInfo;
  if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
  if ( !afterTransformSvtInfo )
    goto LABEL_49;
  afterTransformSvtInfo->fields.atk = v37 * (atkMax - atkBase) / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                                    + v32->fields.atkBase;
  v38 = *p_afterTransformSvtInfo;
  if ( !*p_afterTransformSvtInfo )
    goto LABEL_49;
  atk = v38->fields.atk;
  adjustAtk = this->fields.adjustAtk;
  UseEntityList = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UseEntityList = BalanceConfig_TypeInfo;
  }
  v41 = *p_afterTransformSvtInfo;
  v42 = *((_QWORD *)UseEntityList + 23);
  v38->fields.atk = atk + *(_DWORD *)(v42 + 308) * adjustAtk;
  if ( !v41 )
    goto LABEL_49;
  v41->fields.hp = (v32->fields.hpMax - v32->fields.hpBase)
                 * v33[7]
                 / CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE
                 + v32->fields.hpBase
                 + *(_DWORD *)(v42 + 312) * this->fields.adjustHp;
  v43 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v28[1],
                            0LL);
  if ( !v43 )
    goto LABEL_49;
  UseEntityList = ServantSkillMaster__getUseEntityList(
                    (ServantSkillMaster_o *)v43,
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
  v45 = *((_DWORD *)UseEntityList + 6);
  if ( !v45 )
    goto LABEL_50;
  v46 = *((_QWORD *)UseEntityList + 4);
  v47 = this->fields.afterTransformSvtInfo;
  if ( v46 )
    LODWORD(v46) = *(_DWORD *)(v46 + 28);
  if ( !v47 )
    goto LABEL_49;
  v47->fields.skillId1 = v46;
  if ( v45 <= 1 )
    goto LABEL_50;
  v48 = *((_QWORD *)UseEntityList + 5);
  if ( v48 )
    LODWORD(v48) = *(_DWORD *)(v48 + 28);
  v47->fields.skillId2 = v48;
  if ( v45 <= 2 )
LABEL_50:
    sub_1B6432C(UseEntityList, v44);
  v49 = *((_QWORD *)UseEntityList + 6);
  if ( v49 )
    LODWORD(v49) = *(_DWORD *)(v49 + 28);
  v47->fields.skillId3 = v49;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v50 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v52 = v28[1].klass;
  v51 = v28[1].monitor;
  v53 = (ServantTreasureDvcMaster_o *)v50;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v58.fields.currentCryptoKey = v52;
  *(_QWORD *)&v58.fields.fakeValue = v51;
  UseEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v58, 0LL);
  if ( !v53 )
    goto LABEL_49;
  UseEntityList = ServantTreasureDvcMaster__getUseEntity(
                    v53,
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
    sub_1B64324(UseEntityList);
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
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x4
  DataManager_o *v13; // x23
  __int64 v14; // x22
  __int64 v15; // x28
  __int64 v16; // x1
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

  if ( (byte_49FD5A7 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, setupInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD5A7 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v7;
  *(_QWORD *)&v43.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v43, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_38:
    sub_1B64324(Instance);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  wearesDispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v10);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v11);
  if ( Instance )
  {
    v13 = Instance;
    if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
    {
      v14 = 0LL;
      v15 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
      while ( 1 )
      {
        v16 = *((unsigned int *)&v13->fields._DispLog + v14);
        if ( (int)v16 >= 1 )
        {
          if ( !MasterData_object )
            goto LABEL_38;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v16, 1, 0LL);
          if ( Instance )
          {
            v17 = (SkillLvEntity_o *)Instance;
            v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v19;
            *(_QWORD *)&v44.fields.fakeValue = v18;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
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
        if ( v15 == v14 )
          break;
        if ( ++v14 >= (unsigned __int64)LODWORD(v13->fields.m_CancellationTokenSource) )
LABEL_19:
          sub_1B6432C(Instance, v16);
      }
    }
  }
  v24 = &BalanceConfig_TypeInfo;
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  (ServantLeaderInfo_o *)Instance,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v12);
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
    v16 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v16 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_38;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_19;
      if ( !MasterData_object )
        goto LABEL_38;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v16, SkillLevelList->m_Items[i + 1], 0LL);
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
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
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


bool __fastcall ServantLeaderInfo__getBaseEventUpVal_40160140(
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
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x4
  DataManager_o *v15; // x22
  bool v16; // w23
  __int64 v17; // x24
  __int64 v18; // x25
  __int64 v19; // x1
  System_Int32_array *SkillIdList; // x22
  const MethodInfo *v21; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_49FD5AA & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD5AA = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v9;
  *(_QWORD *)&v25.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v25, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_37;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_1B64324(Instance);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v13);
  if ( Instance && (v15 = Instance, (int)Instance->fields.m_CancellationTokenSource >= 1) )
  {
    v16 = 0;
    v17 = 0LL;
    v18 = (unsigned int)Instance->fields.m_CancellationTokenSource - 1LL;
    while ( 1 )
    {
      v19 = *((unsigned int *)&v15->fields._DispLog + v17);
      if ( (int)v19 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_37;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v19, 1, 0LL);
        if ( Instance )
        {
          Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_39537972(
                                        (SkillLvEntity_o *)Instance,
                                        eventUpVallInfo,
                                        1,
                                        0,
                                        1,
                                        0,
                                        0LL,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v16 = 1;
        }
      }
      if ( v18 == v17 )
        break;
      if ( ++v17 >= (unsigned __int64)LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_20:
        sub_1B6432C(Instance, v19);
    }
  }
  else
  {
    v16 = 0;
  }
  SkillIdList = ServantLeaderInfo__GetSkillIdList(
                  (ServantLeaderInfo_o *)Instance,
                  this->fields.skillId1,
                  this->fields.skillId2,
                  this->fields.skillId3,
                  v14);
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
    v19 = (unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v19 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_37;
      if ( i >= SkillLevelList->max_length )
        goto LABEL_20;
      if ( !MasterData_object )
        goto LABEL_37;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v19, SkillLevelList->m_Items[i + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_39537972(Entity, eventUpVallInfo, 1, 0, 1, 0, 0LL, 0LL) )
          v16 = 1;
      }
    }
  }
  return v16;
}


int32_t __fastcall ServantLeaderInfo__getBaseFriendPointUpVal(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v10; // x4
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD5A3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD5A3 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1B64324(Instance);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__GetSkillIdList(
                    (ServantLeaderInfo_o *)MasterData_object,
                    this->fields.skillId1,
                    this->fields.skillId2,
                    this->fields.skillId3,
                    v10);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v12);
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
      v13 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v13 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_22;
        if ( i >= SkillLevelList->max_length )
LABEL_23:
          sub_1B6432C(Instance, v13);
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

  if ( (byte_49FD5BD & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&OptionManager_TypeInfo, v5);
    byte_49FD5BD = 1;
  }
  if ( ConstantMaster__IsOtherImage(0LL) )
  {
    v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v8;
    *(_QWORD *)&v23.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
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
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v24, 0LL);
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

  if ( (byte_49FD5BB & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49FD5BB = 1;
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
  if ( (byte_49FD5C4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantLeaderInfo_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD5C4 = 1;
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
      sub_1B6432C(this, *(_QWORD *)&index);
    v12 = m_Items[v10];
    if ( !v12 )
      goto LABEL_16;
    if ( v12->fields.idx == index )
      break;
    if ( (int)++v10 >= max_length )
      return 0LL;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v16 = *(_QWORD *)&v12->fields.commandCodeId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v12->fields.commandCodeId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v16;
  *(_QWORD *)&v18.fields.fakeValue = v15;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !v17 )
LABEL_16:
    sub_1B64324(this);
  return (CommandCodeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  v17,
                                  (int32_t)this,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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

  if ( (byte_49FD5C3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&int___TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_49FD5C3 = 1;
  }
  if ( !this->fields.commandCode )
    return 0LL;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (BalanceConfig_c *)sub_1B64170(int___TypeInfo, (unsigned int)v5->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_23:
    sub_1B64324(v6);
  max_length = commandCode->max_length;
  v10 = (System_Int32_array *)v6;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_24:
        sub_1B6432C(v6, v7);
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
        v6 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
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

  if ( (byte_49FD5B7 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49FD5B7 = 1;
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

  if ( (byte_49FD5B9 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&OptionManager_TypeInfo, v4);
    byte_49FD5B9 = 1;
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

  if ( (byte_49FD5A6 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_49FD5A6 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL) < 1 )
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
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

  if ( (byte_49FD5B5 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp);
    byte_49FD5B5 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v11 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL) >= 1 )
  {
    v12 = this->fields.equipTarget1;
    if ( !v12 )
      sub_1B64324(0LL);
    return EquipTargetInfo__getExpInfo(v12, exp, lateExp, barExp, 0LL);
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
  EquipTargetInfo_o *v10; // x0
  BalanceConfig_c *v11; // x0
  SkillInfo_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_49FD59F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&SkillInfo___TypeInfo, v6);
    byte_49FD59F = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v9 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL) >= 1 )
  {
    v10 = this->fields.equipTarget1;
    if ( !v10 )
      sub_1B64324(0LL);
    EquipTargetInfo__getSkillInfo(v10, skillInfoList, 0LL);
  }
  else
  {
LABEL_9:
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    v12 = (SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, (unsigned int)v11->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v12, v13, v14);
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

  if ( (byte_49FD5A4 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_49FD5A4 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL) < 1 )
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  limitCount = this->fields.limitCount;
  v13 = v11;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v14);
  return EquipTargetInfo__getEventUpVal(equipTarget1, v13, limitCount, DispLimitCount, setupInfo, 0LL);
}


bool __fastcall ServantLeaderInfo__getEventUpVal_40159764(
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
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x2
  bool BaseEventUpVal_40160140; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v25; // w21
  EventUpValInfo_o *v26; // x24
  __int64 v27; // x22
  __int64 v28; // x23
  EquipTargetInfo_o *v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_49FD5A8 & 1) == 0 )
  {
    sub_1B640C8(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FD5A8 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v9;
  *(_QWORD *)&v31.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v31, 0LL);
  limitCount = this->fields.limitCount;
  v12 = v10;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v13);
  npcFlag = this->fields.npcFlag;
  v16 = DispLimitCount;
  v19 = (EventUpValInfo_o *)sub_1B64314(EventUpValInfo_TypeInfo, v17, v18);
  EventUpValInfo___ctor(v19, setupInfo, v12, limitCount, v16, npcFlag, 0LL);
  *eventUpVallInfo = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)eventUpVallInfo, (int32_t)v19, v20, v21);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.svtId, 0LL) < 1 )
    return 0;
  BaseEventUpVal_40160140 = ServantLeaderInfo__getBaseEventUpVal_40160140(this, eventUpVallInfo, v22);
  equipTarget1 = this->fields.equipTarget1;
  v25 = BaseEventUpVal_40160140;
  if ( !equipTarget1 )
    return v25;
  v26 = *eventUpVallInfo;
  v28 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v28;
  *(_QWORD *)&v32.fields.fakeValue = v27;
  v29 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v32, 0LL);
  if ( !v26 || (v26->fields.equipSvtId = (int)v29, (v29 = this->fields.equipTarget1) == 0LL) )
    sub_1B64324(v29);
  return (v25 | EquipTargetInfo__getEventUpVal_38570040(v29, eventUpVallInfo, 1, 0LL)) & 1;
}


bool __fastcall ServantLeaderInfo__getEventUpVal_40160752(
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
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v28; // x25
  __int64 v29; // x23
  __int64 v30; // x24
  EquipTargetInfo_o *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_49FD5A9 & 1) == 0 )
  {
    sub_1B640C8(&EventUpValInfo_TypeInfo, eventUpVallInfo);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_49FD5A9 = 1;
  }
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v13;
  *(_QWORD *)&v33.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v33, 0LL);
  limitCount = this->fields.limitCount;
  v16 = v14;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(this, v17);
  npcFlag = this->fields.npcFlag;
  v20 = DispLimitCount;
  v23 = (EventUpValInfo_o *)sub_1B64314(EventUpValInfo_TypeInfo, v21, v22);
  EventUpValInfo___ctor(v23, setupInfo, v16, limitCount, v20, npcFlag, 0LL);
  *eventUpVallInfo = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)eventUpVallInfo, (int32_t)v23, v24, v25);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.svtId, 0LL) >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal_40160140(this, eventUpVallInfo, v26) )
      *isServantEventUpVal = 1;
    equipTarget1 = this->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v28 = *eventUpVallInfo;
      v30 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = v30;
      *(_QWORD *)&v34.fields.fakeValue = v29;
      v31 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v34, 0LL);
      if ( !v28 || (v28->fields.equipSvtId = (int)v31, (v31 = this->fields.equipTarget1) == 0LL) )
        sub_1B64324(v31);
      if ( EquipTargetInfo__getEventUpVal_38570040(v31, eventUpVallInfo, 1, 0LL) )
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
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x24
  __int64 v16; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v19; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v21; // x24
  int m_CancellationTokenSource; // w25
  float v23; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_49FD5B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FD5B4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v16;
  *(_QWORD *)&v25.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v25, 0LL);
  if ( !v17 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < ServantLeaderInfo__getLevelMax(this, v19) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___);
    lv = this->fields.lv;
    v21 = (ServantExpMaster_o *)Instance;
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
    Instance = (DataManager_o *)ServantExpMaster__GetEntity(v21, HIDWORD(Entity[8].klass), this->fields.lv, 0LL);
    *exp = this->fields.exp - m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
      v23 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
      goto LABEL_20;
    }
LABEL_21:
    sub_1B64324(Instance);
  }
  v23 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_20:
  *barExp = v23;
  return 1;
}


int32_t __fastcall ServantLeaderInfo__getFrameType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantExceedMaster_o *v10; // x20
  int32_t FrameType_39340080; // w20
  Il2CppObject *v12; // x21
  const MethodInfo *v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_49FD5B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD5B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantExceedMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
  if ( !v10
    || (FrameType_39340080 = ServantExceedMaster__GetFrameType_39340080(
                               v10,
                               (int32_t)Instance,
                               this->fields.limitCount,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v12 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v13),
        !v12) )
  {
LABEL_10:
    sub_1B64324(Instance);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v12,
           (int32_t)Instance,
           this->fields.lv,
           FrameType_39340080,
           0LL);
}


int32_t __fastcall ServantLeaderInfo__getFriendPointUpType(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  const MethodInfo *v5; // x1
  int32_t BaseFriendPointUpVal; // w0
  EquipTargetInfo_o *equipTarget1; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_49FD5A2 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD5A2 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v9, 0LL) < 1 )
    return 0;
  BaseFriendPointUpVal = ServantLeaderInfo__getBaseFriendPointUpVal(this, v5);
  if ( !this->fields.equipTarget1
    || EquipTargetInfo__getFriendPointUpVal(this->fields.equipTarget1, 0LL) <= BaseFriendPointUpVal )
  {
    return 0;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    sub_1B64324(0LL);
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

  if ( (byte_49FD5A1 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD5A1 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL) < 1 )
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

  if ( (byte_49FD5BF & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&OptionManager_TypeInfo, v5);
    byte_49FD5BF = 1;
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
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  ServantLimitMaster_o *v12; // x20
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v14; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD595 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD595 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v7;
  *(_QWORD *)&v17.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !v12
    || (Entity = ServantLimitMaster__GetEntity(v12, (int32_t)Instance, this->fields.limitCount, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  v14 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0LL);
  lvMax = Entity->fields.lvMax;
  if ( v14 )
    lvMax += v14->fields.addLvMax;
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

  if ( (byte_49FD5BE & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, isNpc);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_49FD5BE = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
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

  if ( (byte_49FD5BC & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FD5BC = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL);
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

  if ( (byte_49FD5B8 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FD5B8 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL);
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

  if ( (byte_49FD5C0 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, isNpc);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_49FD5C0 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
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

  if ( (byte_49FD5C2 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49FD5C2 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL);
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

  if ( (byte_49FD59A & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD59A = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v4;
  *(_QWORD *)&v13.fields.fakeValue = v3;
  v5 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL);
  classPassive = this->fields.classPassive;
  p_classPassive = (ServantStatusBattleListViewItem_o *)&this->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(v5, (int32_t)v5, classPassive, v8);
  p_classPassive->klass = (ServantStatusBattleListViewItem_c *)PassiveSkillIdList;
  sub_1B6406C(p_classPassive, (int32_t)PassiveSkillIdList, v10, v11);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, (int32_t)PassiveSkillIdList, v9, v10);
  ServantLeaderInfo__GetPassiveSkillInfo(v11, titleList, explanationList, *idList, v12);
}


int32_t __fastcall ServantLeaderInfo__getPortraitLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int LimitCountWithRandom; // w20
  const MethodInfo *v5; // x1
  bool v6; // vf

  if ( (byte_49FD5C1 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49FD5C1 = 1;
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

  if ( (byte_49FD5AB & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FD5AB = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
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
  return QuestRestrictionInfo__IsRestriction_40100520(questRestrictionInfo, v9, limitCount, v14, lv, v15, 0LL);
}


int32_t __fastcall ServantLeaderInfo__getRarity(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_49FD596 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FD596 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
  if ( !v9 || (Instance = ServantLimitMaster__GetEntity(v9, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_9:
    sub_1B64324(Instance);
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

  if ( (byte_49FD5A5 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_49FD5A5 = 1;
  }
  if ( !setupInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v9, 0LL) >= 1
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

  if ( (byte_49FD59D & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
    byte_49FD59D = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
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

  if ( (byte_49FD599 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&int___TypeInfo, v3);
    byte_49FD599 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v4->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1B64324(0LL);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = this->fields.skillLv2, max_length <= 2) )
  {
    sub_1B6432C(result, v6);
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

  if ( (byte_49FD5B0 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
    byte_49FD5B0 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL);
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, v7, this->fields.treasureDeviceId, v8);
}


bool __fastcall ServantLeaderInfo__getTreasureDeviceInfo_40162724(
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

  if ( (byte_49FD5B2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, tdLv);
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    byte_49FD5B2 = 1;
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
      v9 = sub_1BB5FA4(v9);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BB5FA4(v10);
    MasterData_object = **(Il2CppObject ***)(v10 + 184);
    if ( !MasterData_object
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)MasterData_object,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
    {
      sub_1B64324(MasterData_object);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               this->fields.treasureDeviceId,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_49FD5B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_49FD5B3 = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB5FA4(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB5FA4(v6);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_1B64324(MasterData_object);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.treasureDeviceId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_49FD5AC & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FD5AC = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v9, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_40104288(questRestrictionInfo, v7, 0LL);
}


bool __fastcall ServantLeaderInfo__getUniqueSvtRestriction_40161564(
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

  if ( (byte_49FD5AD & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_49FD5AD = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_40104488(questRestrictionInfo, v11, partyItem, num, -1, 0LL);
}


bool __fastcall ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_49FD59C & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD59C = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v7, 0LL) > 0;
}


bool __fastcall ServantLeaderInfo__get_IsRandomChoice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct System_Int32_array *randomLimitCountTargets; // x8

  if ( (byte_49FD591 & 1) == 0 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, method);
    byte_49FD591 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_49F81D6 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, method);
    byte_49F81D6 = 1;
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