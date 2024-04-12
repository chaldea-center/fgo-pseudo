void __fastcall UserServantEntity___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall UserServantEntity___ctor(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE20C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42AE20C = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserServantEntity___ctor_21495500(
        UserServantEntity_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q1
  __int128 v8; // q1

  if ( (byte_42AE20D & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42AE20D = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_B52A5C(v5, v6);
  v7 = *(_OWORD *)&e->fields.id.fields.fakeValue;
  *(_OWORD *)&this->fields.id.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.id.fields.fakeValue = v7;
  v8 = *(_OWORD *)&e->fields.userId.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&e->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v8;
  this->fields.svtId = e->fields.svtId;
  this->fields.limitCount = e->fields.limitCount;
  this->fields.imageLimitCount = e->fields.imageLimitCount;
  this->fields.dispLimitCount = e->fields.dispLimitCount;
  this->fields.commandCardLimitCount = e->fields.commandCardLimitCount;
  this->fields.iconLimitCount = e->fields.iconLimitCount;
  this->fields.portraitLimitCount = e->fields.portraitLimitCount;
  this->fields.battleVoice = e->fields.battleVoice;
  this->fields.lv = e->fields.lv;
  this->fields.exp = e->fields.exp;
  this->fields.atk = e->fields.atk;
  this->fields.hp = e->fields.hp;
  this->fields.adjustAtk = e->fields.adjustAtk;
  this->fields.adjustHp = e->fields.adjustHp;
  this->fields.skillLv1 = e->fields.skillLv1;
  this->fields.skillLv2 = e->fields.skillLv2;
  this->fields.skillLv3 = e->fields.skillLv3;
  this->fields.treasureDeviceLv1 = e->fields.treasureDeviceLv1;
  this->fields.exceedCount = e->fields.exceedCount;
  this->fields.status = e->fields.status;
  this->fields.randomLimitCount = e->fields.randomLimitCount;
  this->fields.randomLimitCountSupport = e->fields.randomLimitCountSupport;
  this->fields.limitCountSupport = e->fields.limitCountSupport;
  this->fields.createdAt = e->fields.createdAt;
}


void __fastcall UserServantEntity___ctor_21495808(
        UserServantEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t userId; // x21
  __int128 v8; // q1
  int32_t maxLimitCount; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42AE20E & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AE20E = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_B52A5C(v5, v6);
  userId = e->fields.userId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v10, userId, 0LL);
  v8 = *(_OWORD *)&v10.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v10.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v8;
  this->fields.svtId = e->fields.svtId;
  maxLimitCount = e->fields.maxLimitCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(maxLimitCount, 0LL);
  this->fields.lv = e->fields.maxLv;
  this->fields.atk = e->fields.maxAtk;
  this->fields.hp = e->fields.maxHp;
  this->fields.skillLv1 = e->fields.skillLv1;
  this->fields.skillLv2 = e->fields.skillLv2;
  this->fields.skillLv3 = e->fields.skillLv3;
  this->fields.treasureDeviceLv1 = e->fields.treasureDeviceLv1;
}


int64_t __fastcall UserServantEntity__CreatePrimaryKey(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-30h]

  if ( (byte_42AE20B & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AE20B = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v5, 0LL);
}


bool __fastcall UserServantEntity__GetAdjustMax(
        UserServantEntity_o *this,
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

  if ( (byte_42AE24A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE24A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v22, 0LL);
  if ( !v16 )
    goto LABEL_16;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v16,
                                (int32_t)Instance,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (DataManager_o *)UserServantEntity__getRarity(this, v18),
        !v17) )
  {
LABEL_16:
    sub_B52A5C(Instance, v12);
  }
  Entity = (int32_t *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v17,
                        (int32_t)Instance,
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
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


void __fastcall UserServantEntity__GetAppendPassiveSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x26
  __int64 v15; // x27
  ServantAppendPassiveSkillMaster_o *v16; // x25
  int32_t v17; // w0
  __int128 v18; // q1
  int32_t v19; // w26
  int64_t v20; // x0
  __int128 v21; // q0
  int64_t v22; // x27
  int64_t userSvtId; // x0
  __int64 v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_42AE277 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AE277 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  *(_QWORD *)&v28.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v28, 0LL);
  v18 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v19 = v17;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v26 = v27;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v26, 0LL);
  v21 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v22 = v20;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v21;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v25, 0LL);
  if ( !v16 )
    sub_B52A5C(userSvtId, v24);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v16,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v19,
    v22,
    userSvtId,
    0LL);
}


void __fastcall UserServantEntity__GetAppendPassiveSkillInfo_21537848(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v6; // x0
  __int64 v7; // x1
  SkillInfo_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array *v15; // x8
  unsigned __int64 v16; // x21
  __int64 v17; // x22
  SkillInfo_o *v18; // x20
  SkillInfo_array *v19; // x24
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x0
  __int64 v27; // x0
  System_Int32_array *lvList; // [xsp+8h] [xbp-58h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-48h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-40h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42AE278 & 1) == 0 )
  {
    sub_B52984(&SkillInfo___TypeInfo);
    sub_B52984(&SkillInfo_TypeInfo);
    byte_42AE278 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  releaseStateList = 0LL;
  explanationList = 0LL;
  lvList = 0LL;
  UserServantEntity__GetAppendPassiveSkillInfo(
    this,
    &idList,
    &titleList,
    &explanationList,
    &releaseStateList,
    &lvList,
    v3);
  if ( !idList
    || (v8 = (SkillInfo_array *)sub_B5299C(SkillInfo___TypeInfo, idList->max_length),
        *skillInfoList = v8,
        sub_B52920(
          (BattleServantConfConponent_o *)skillInfoList,
          (System_Int32_array **)v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        (v15 = idList) == 0LL) )
  {
LABEL_18:
    sub_B52A5C(v6, v7);
  }
  v16 = 0LL;
  v17 = 32LL;
  while ( (__int64)v16 < (int)v15->max_length )
  {
    v18 = (SkillInfo_o *)sub_B52A54(SkillInfo_TypeInfo);
    SkillInfo___ctor(v18, 0LL);
    if ( !idList )
      goto LABEL_18;
    if ( v16 >= idList->max_length )
    {
LABEL_20:
      v26 = sub_B52A88(v6);
      sub_B52A28(v26, 0LL);
    }
    if ( !v18 )
      goto LABEL_18;
    v18->fields.id = idList->m_Items[v16 + 1];
    if ( !lvList )
      goto LABEL_18;
    if ( v16 >= lvList->max_length )
      goto LABEL_20;
    v18->fields.lv = lvList->m_Items[v16 + 1];
    if ( !releaseStateList )
      goto LABEL_18;
    if ( v16 >= releaseStateList->max_length )
      goto LABEL_20;
    v18->fields.isUse = releaseStateList->m_Items[v16 + 4];
    v19 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_18;
    v6 = sub_B52A44(v18, v19->obj.klass->_1.element_class);
    if ( !v6 )
    {
      v27 = sub_B52A7C();
      sub_B52A28(v27, 0LL);
    }
    if ( v16 >= v19->max_length )
      goto LABEL_20;
    v19->m_Items[v16] = v18;
    sub_B52920(
      (BattleServantConfConponent_o *)((char *)v19 + v17),
      (System_Int32_array **)v18,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v15 = idList;
    ++v16;
    v17 += 8LL;
    if ( !idList )
      goto LABEL_18;
  }
}


bool __fastcall UserServantEntity__GetBaseBonusUpVal(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 id; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x21
  ServantEntity_o *Entity; // x23
  SkillLvMaster_o *v14; // x21
  const MethodInfo *v15; // x5
  const MethodInfo *v16; // x7
  unsigned __int64 v17; // x25
  char v18; // w24
  SkillLvEntity_o *v19; // x0
  BalanceConfig_c *v20; // x8
  int32_t *p_SvtEquipSkillListMax; // x8
  signed __int64 v22; // x22
  unsigned __int64 v23; // x23
  SkillInfo_o *v24; // x8
  int32_t lv; // w2
  __int64 v27; // x0
  SkillInfo_array *v28; // [xsp+0h] [xbp-60h] BYREF
  System_String_array *explanationList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_42AE22A & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE22A = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v28 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v11;
  *(_QWORD *)&v32.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v32, 0LL);
  if ( !v12 )
    goto LABEL_47;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v12,
                                (int32_t)Instance,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v14 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v15);
  if ( idList )
  {
    v17 = 0LL;
    v18 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v17 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
        break;
      if ( !idList )
        goto LABEL_47;
      if ( v17 >= idList->max_length )
      {
LABEL_48:
        v27 = sub_B52A88(Instance);
        sub_B52A28(v27, 0LL);
      }
      id = (unsigned int)idList->m_Items[v17 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v14 )
          goto LABEL_47;
        v19 = SkillLvMaster__GetEntity(v14, id, 1, 0LL);
        if ( v19 && SkillLvEntity__GetBonusUpVal(v19, eventUpVallInfo, questPhaseEntity, 0LL) )
          v18 = 1;
      }
      ++v17;
    }
  }
  else
  {
    v18 = 0;
  }
  UserServantEntity__getSkillInfo(this, &v28, -1, -1, 1, 0, -1, v16);
  if ( !Entity )
LABEL_47:
    sub_B52A5C(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip(Entity, 0LL);
  v20 = BalanceConfig_TypeInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v20->static_fields->SvtEquipSkillListMax;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v20->static_fields->SvtSkillListMax;
  }
  v22 = *p_SvtEquipSkillListMax;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    while ( v28 )
    {
      if ( v23 >= v28->max_length )
        goto LABEL_48;
      v24 = v28->m_Items[v23];
      if ( v24 )
      {
        id = (unsigned int)v24->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v24->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v14 )
              goto LABEL_47;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity(v14, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__GetBonusUpVal(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            questPhaseEntity,
                                            0LL);
              v18 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( (__int64)++v23 >= v22 )
        return v18 & 1;
    }
    goto LABEL_47;
  }
  return v18 & 1;
}


bool __fastcall UserServantEntity__GetBonusUpVal(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v12; // x25
  __int64 v13; // x26
  int32_t v14; // w25
  int32_t v15; // w26
  const MethodInfo *v16; // x2
  int32_t DispLimitCount; // w27
  EventUpValInfo_o *v18; // x28
  EventUpValInfo_o **v19; // x25
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  DataManager_o *Instance; // x0
  int64_t v27; // x1
  QuestPhaseEntity_o *v28; // x22
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  unsigned __int64 v32; // x26
  char v33; // w27
  UserServantEntity_o *v34; // x21
  EventUpValInfo_o *v35; // x19
  __int64 v36; // x24
  Il2CppObject *lockCountObj; // x25
  const MethodInfo *v38; // x3
  __int64 v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42AE229 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&EventUpValInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE229 = 1;
  }
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v13;
  *(_QWORD *)&v42.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v42, 0LL);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v16);
  v18 = (EventUpValInfo_o *)sub_B52A54(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v18, setupInfo, v14, v15, DispLimitCount, 0, 0LL);
  v19 = eventUpVallInfo;
  *eventUpVallInfo = v18;
  sub_B52920((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Instance )
    return (unsigned __int8)Instance & 1;
  v28 = (QuestPhaseEntity_o *)Instance;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_B52A5C(Instance, v27);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(this, eventUpVallInfo, v28, v30);
  if ( equipIds )
  {
    v31 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v31 >= 1 )
    {
      v32 = 0LL;
      v33 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v32 >= (unsigned int)v31 )
        {
          v40 = sub_B52A88(Instance);
          sub_B52A28(v40, 0LL);
        }
        v27 = equipIds->m_Items[v32];
        if ( v27 >= 1 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_26;
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v27,
                                        (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Instance )
            goto LABEL_26;
          v34 = (UserServantEntity_o *)Instance;
          v35 = *v19;
          lockCountObj = Instance->fields.lockCountObj;
          v36 = *(_QWORD *)&Instance->fields.nowLoadCount;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v43.fields.currentCryptoKey = lockCountObj;
          *(_QWORD *)&v43.fields.fakeValue = v36;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v43, 0LL);
          if ( !v35 )
            goto LABEL_26;
          v19 = eventUpVallInfo;
          v35->fields.equipSvtId = (int)Instance;
          Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(v34, eventUpVallInfo, v28, v38);
          LODWORD(v31) = equipIds->max_length;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v33 = 1;
        }
        ++v32;
      }
      while ( (__int64)v32 < (int)v31 );
      LOBYTE(Instance) = v33;
    }
  }
  return (unsigned __int8)Instance & 1;
}


System_Int32_array *__fastcall UserServantEntity__GetCategoryIdList(
        UserServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        bool includeBeforeOverwrite,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v6; // x20
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  unsigned __int64 v12; // x25
  bool v13; // w21
  SkillInfo_o *v14; // x8
  int32_t id; // w2
  int32_t lv; // w3
  System_Collections_Generic_HashSet_int__o *v17; // x19
  _BOOL8 v18; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 count; // x1
  System_Int32_array *v23; // x20
  __int64 v25; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v26; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v28; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_HashSet_int__o *ret; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_42AE27A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__CopyTo___68488992);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42AE27A = 1;
  }
  entity = 0LL;
  memset(&v28, 0, sizeof(v28));
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  ret = v6;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_33;
  v10 = *(_QWORD *)&enableSkillInfoList->max_length;
  v11 = v8;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    v13 = includeBeforeOverwrite;
    do
    {
      if ( v12 >= (unsigned int)v10 )
      {
        v25 = sub_B52A88(v8);
        sub_B52A28(v25, 0LL);
      }
      v14 = enableSkillInfoList->m_Items[v12];
      if ( v14 )
      {
        id = v14->fields.id;
        if ( id >= 1 )
        {
          lv = v14->fields.lv;
          if ( lv >= 1 )
          {
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_33;
            SkillLvMaster__GetUniqueFuncIdsFromSkill(Master_WarQuestSelectionMaster, &ret, id, lv, v13, 0LL);
          }
        }
      }
      LODWORD(v10) = enableSkillInfoList->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)v10 );
  }
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)ret;
  if ( !ret )
    goto LABEL_33;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v26,
    ret,
    (const MethodInfo_24DA150 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v28 = v26;
  while ( 1 )
  {
    v18 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v28,
            (const MethodInfo_200F134 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v18 )
      break;
    if ( !v11 )
      sub_B52A5C(v18, v19);
    v20 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v11,
            &entity,
            (int32_t)v28.fields._current,
            (const MethodInfo_23E2334 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v20 )
    {
      if ( !entity )
        sub_B52A5C(v20, v21);
      if ( !v17 )
        sub_B52A5C(v20, v21);
      System_Collections_Generic_HashSet_int___Add(
        v17,
        HIDWORD(entity->fields.emptyMessage),
        (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v28,
    (const MethodInfo_200F130 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v17 )
LABEL_33:
    sub_B52A5C(v8, v9);
  count = (unsigned int)v17->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v23 = (System_Int32_array *)sub_B5299C(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_38644592(
    v17,
    v23,
    (const MethodInfo_24DAB70 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68488992);
  return v23;
}


System_Int32_array *__fastcall UserServantEntity__GetCommandCardParam(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = (System_Int32_array *)UserServantEntity__GetUserCommandCardEntity(this, method);
  if ( result )
    return *(System_Int32_array **)&result->m_Items[13];
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantEntity__GetEquipCategoryIdList(
        UserServantEntity_o *this,
        bool includeBeforeOverwrite,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x21
  DataManager_o *v7; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x21
  System_Int32_array *result; // x0
  const MethodInfo *v13; // x3
  bool IsKeepServantEquip; // w8
  UserServantEntity_o *v15; // x0
  const MethodInfo *v16; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42AE26B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42AE26B = 1;
  }
  skillInfoList = 0LL;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AEB684(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v7,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v7 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v18, 0LL);
  if ( !v11 )
LABEL_18:
    sub_B52A5C(v7, includeBeforeOverwrite);
  result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v11,
                                   (int32_t)v7,
                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsKeepServantEquip )
    {
      UserServantEntity__getEquipSkillInfo(this, &skillInfoList, 1, v13);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v15, skillInfoList, includeBeforeOverwrite, v16);
      else
        return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__GetLimitCountWithRandom(
        UserServantEntity_o *this,
        int32_t kind,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  int32_t ChoiceLimitCount; // w0
  int32_t v8; // w19
  BalanceConfig_c *v9; // x0
  __int64 v11; // x19
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42AE210 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    byte_42AE210 = 1;
  }
  if ( UserServantEntity__get_IsRandomChoice(this, *(const MethodInfo **)&kind) && !ignoreRandomSettings )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    ChoiceLimitCount = RandomLimitCountManager__GetChoiceLimitCount(this, 0LL);
    if ( (unsigned int)kind > 4 )
      return -1;
    v8 = ChoiceLimitCount;
    if ( ((1 << kind) & 0x16) != 0 )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      return v8 - (v8 == v9->static_fields->ServantLimitMax);
    }
    return v8;
  }
  switch ( kind )
  {
    case 0:
      v12 = *(_QWORD *)&this->fields.imageLimitCount.fields.currentCryptoKey;
      v11 = *(_QWORD *)&this->fields.imageLimitCount.fields.fakeValue;
      break;
    case 1:
      v12 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
      v11 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
      break;
    case 2:
      v12 = *(_QWORD *)&this->fields.commandCardLimitCount.fields.currentCryptoKey;
      v11 = *(_QWORD *)&this->fields.commandCardLimitCount.fields.fakeValue;
      break;
    case 3:
      v12 = *(_QWORD *)&this->fields.iconLimitCount.fields.currentCryptoKey;
      v11 = *(_QWORD *)&this->fields.iconLimitCount.fields.fakeValue;
      break;
    case 4:
      v12 = *(_QWORD *)&this->fields.portraitLimitCount.fields.currentCryptoKey;
      v11 = *(_QWORD *)&this->fields.portraitLimitCount.fields.fakeValue;
      break;
    default:
      return -1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v12;
  *(_QWORD *)&v13.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL);
}


System_Int32_array *__fastcall UserServantEntity__GetRandomLimitCountList(
        UserServantEntity_o *this,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  __int64 v8; // x8
  int32_t v9; // w20
  int32_t v10; // w21
  System_Int32_array *CardSelectList; // x19
  System_Collections_Generic_List_int__o *v12; // x20
  BalanceConfig_c *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  unsigned __int64 v16; // x21
  int32_t v17; // w25
  __int64 v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42AE275 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE275 = 1;
  }
  if ( !costumeIds )
    costumeIds = (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v6;
  *(_QWORD *)&v20.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
  v8 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v21.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v9 = v7;
  *(_QWORD *)&v21.fields.currentCryptoKey = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v21, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardSelectList = ImageLimitCount__GetCardSelectList(v9, v10, costumeIds, 0LL);
  v12 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !CardSelectList )
    goto LABEL_29;
  v15 = *(_QWORD *)&CardSelectList->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v15 )
      {
        v19 = sub_B52A88(v13);
        sub_B52A28(v19, 0LL);
      }
      v17 = CardSelectList->m_Items[v16 + 1];
      if ( v17 == -1 )
      {
        v14 = 0xFFFFFFFFLL;
        if ( !v12 )
          goto LABEL_29;
      }
      else
      {
        v13 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v13 = BalanceConfig_TypeInfo;
        }
        if ( v17 >= v13->static_fields->ServantLimitMax )
          v14 = (unsigned int)v17;
        else
          v14 = (unsigned int)(v17 + 1);
        if ( !v12 )
          goto LABEL_29;
      }
      System_Collections_Generic_List_int___Add(
        v12,
        v14,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v15) = CardSelectList->max_length;
    }
    while ( (__int64)++v16 < (int)v15 );
  }
  if ( !v12 )
LABEL_29:
    sub_B52A5C(v13, v14);
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall UserServantEntity__GetSameSvtEquipNumIsLimitUp(
        UserServantEntity_o *this,
        bool isLimitMax,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *v7; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  UserServantMaster_o *v10; // x20
  System_Collections_Generic_List_UserServantEntity__o *v11; // x0
  __int64 v12; // x1
  int32_t v13; // w20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x21
  __int64 v16; // x22
  UserServantMaster_o *v17; // x20
  bool EntityListBySvtId; // w0
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_42AE27E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE27E = 1;
  }
  userStorageServantList = 0LL;
  memset(&v21, 0, sizeof(v21));
  if ( !isWarehouseServantEquip )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
    v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v17 = (UserServantMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v24.fields.currentCryptoKey = v16;
    *(_QWORD *)&v24.fields.fakeValue = v15;
    v11 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                    v24,
                                                                    0LL);
    if ( !v17 )
      goto LABEL_35;
    EntityListBySvtId = UserServantMaster__TryGetEntityListBySvtId(v17, &userStorageServantList, (int32_t)v11, 0, 0LL);
    v13 = 0;
    if ( !EntityListBySvtId )
      return v13;
LABEL_21:
    v11 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v21,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userStorageServantList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v13 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v21,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v21,
              (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
            return v13;
          }
          if ( !isLimitMax )
            break;
          if ( !v21.fields.current )
            sub_B52A5C(0LL, v19);
          if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)v21.fields.current, v19) )
            goto LABEL_29;
        }
        if ( !v21.fields.current )
          sub_B52A5C(0LL, v19);
        if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)v21.fields.current, v19) )
LABEL_29:
          ++v13;
      }
    }
LABEL_35:
    sub_B52A5C(v11, v12);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  v7 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (UserServantMaster_o *)v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v9;
  *(_QWORD *)&v23.fields.fakeValue = v8;
  v11 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                  v23,
                                                                  0LL);
  if ( !v10 )
    goto LABEL_35;
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(v10, &userStorageServantList, (int32_t)v11, 0LL) )
    goto LABEL_21;
  return 0;
}


System_Int32_array *__fastcall UserServantEntity__GetSkillCategoryIdList(
        UserServantEntity_o *this,
        int32_t skillListNum,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array *result; // x0
  const MethodInfo *v12; // x7
  bool IsServant; // w8
  UserServantEntity_o *v14; // x0
  const MethodInfo *v15; // x3
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42AE27B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE27B = 1;
  }
  skillInfoList = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v7;
  *(_QWORD *)&v17.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL);
  if ( !v8 )
    sub_B52A5C(v9, v10);
  result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v8,
                                   v9,
                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsServant = ServantEntity__get_IsServant((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsServant )
    {
      UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, skillListNum, v12);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v14, skillInfoList, 1, v15);
      else
        return 0LL;
    }
  }
  return result;
}


System_Int32_array *__fastcall UserServantEntity__GetTreasureDeviceCategoryIdList(
        UserServantEntity_o *this,
        bool isLvOne,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x21
  DataManager_o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v10; // x1
  ServantEntity_o *v11; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x21
  int32_t DispLimitCount; // w0
  const MethodInfo *v15; // x5
  __int64 v16; // x20
  __int64 v17; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x20
  __int64 v20; // x21
  TreasureDvcMaster_o *v21; // x19
  TreasureDvcEntity_o *v22; // x19
  TreasureDvcLvMaster_o *v23; // x20
  TreasureDvcLvEntity_o *v24; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x19
  SkillLvMaster_o *v26; // x23
  System_Collections_Generic_HashSet_int__o *v27; // x27
  __int64 v28; // x8
  DataManager_o *v29; // x24
  unsigned __int64 v30; // x20
  unsigned __int64 v31; // x9
  DataVals_o *v32; // x25
  int32_t v33; // w1
  int32_t Param; // w26
  int32_t v35; // w1
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *v37; // x22
  int32_t v38; // w26
  int32_t v39; // w27
  void *v40; // x8
  System_Collections_Generic_HashSet_int__o *v41; // x20
  _BOOL8 v42; // x0
  __int64 v43; // x1
  _BOOL8 v44; // x0
  __int64 v45; // x1
  __int64 count; // x1
  __int64 v48; // x0
  TreasureDvcLvMaster_o *v49; // [xsp+0h] [xbp-C0h]
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v51; // [xsp+10h] [xbp-B0h] BYREF
  WarEntity_o *v52; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v53; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v54; // [xsp+48h] [xbp-78h] BYREF
  TreasureDvcLvEntity_o *v55; // [xsp+50h] [xbp-70h] BYREF
  SkillLvEntity_o *v56; // [xsp+58h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_42AE27C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B52984(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B52984(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__CopyTo___68488992);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42AE27C = 1;
  }
  tdInfo = 0LL;
  v56 = 0LL;
  entity = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v52 = 0LL;
  memset(&v53, 0, sizeof(v53));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v7;
  *(_QWORD *)&v59.fields.fakeValue = v6;
  DataValsList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v59, 0LL);
  if ( !v8 )
    goto LABEL_69;
  v11 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v8,
                             (int32_t)DataValsList,
                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v11 )
    return 0LL;
  v13 = 0LL;
  if ( ServantEntity__get_IsServant(v11, 0LL) )
  {
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v12);
    if ( !UserServantEntity__getTreasureDeviceInfo(this, &tdInfo, DispLimitCount, -1, isLvOne, v15) )
      return 0LL;
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v17 = **(_QWORD **)(v16 + 192);
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AEB684(v17);
    DataValsList = **(DataManager_o ***)(v17 + 184);
    if ( !DataValsList )
      goto LABEL_69;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           DataValsList,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v21 = (TreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v60.fields.currentCryptoKey = v20;
    *(_QWORD *)&v60.fields.fakeValue = v19;
    DataValsList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v60, 0LL);
    if ( !tdInfo || !v21 )
      goto LABEL_69;
    v22 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v21, (int32_t)DataValsList, tdInfo->fields.id, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !v22 )
      goto LABEL_69;
    if ( !tdInfo )
      goto LABEL_69;
    v23 = (TreasureDvcLvMaster_o *)DataValsList;
    if ( !DataValsList )
      goto LABEL_69;
    v24 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, v22->fields.id, tdInfo->fields.lv, 0LL);
    v13 = (__int64)v24;
    if ( v24 )
    {
      if ( !v24->fields.funcId )
        return 0LL;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v49 = v23;
      v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_FunctionMaster___);
      v26 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v27 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v27,
        (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
      if ( !v27 )
        goto LABEL_69;
      System_Collections_Generic_HashSet_int___UnionWith(
        v27,
        *(System_Collections_Generic_IEnumerable_T__o **)(v13 + 32),
        (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      DataValsList = (DataManager_o *)TreasureDvcLvEntity__getDataValsList((TreasureDvcLvEntity_o *)v13, 100, 0LL);
      v28 = *(_QWORD *)(v13 + 32);
      if ( !v28 )
        goto LABEL_69;
      p_lookup = &DataValsList->fields.lookup;
      v29 = DataValsList;
      v30 = 0LL;
      while ( 1 )
      {
        v31 = *(unsigned int *)(v28 + 24);
        if ( (__int64)v30 >= (int)v31 )
        {
          v41 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v41,
            (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
          System_Collections_Generic_HashSet_int___GetEnumerator(
            &v51,
            v27,
            (const MethodInfo_24DA150 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
          v53 = v51;
          while ( 1 )
          {
            v42 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                    &v53,
                    (const MethodInfo_200F134 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
            if ( !v42 )
              break;
            if ( !v25 )
              sub_B52A5C(v42, v43);
            v44 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    v25,
                    &v52,
                    (int32_t)v53.fields._current,
                    (const MethodInfo_23E2334 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
            if ( v44 )
            {
              if ( !v52 )
                sub_B52A5C(v44, v45);
              if ( !v41 )
                sub_B52A5C(v44, v45);
              System_Collections_Generic_HashSet_int___Add(
                v41,
                HIDWORD(v52->fields.emptyMessage),
                (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose(
            &v53,
            (const MethodInfo_200F130 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
          if ( v41 )
          {
            count = (unsigned int)v41->fields._count;
            if ( (int)count >= 1 )
            {
              v13 = sub_B5299C(int___TypeInfo, count);
              System_Collections_Generic_HashSet_int___CopyTo_38644592(
                v41,
                (System_Int32_array *)v13,
                (const MethodInfo_24DAB70 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68488992);
              return (System_Int32_array *)v13;
            }
            return 0LL;
          }
LABEL_69:
          sub_B52A5C(DataValsList, v10);
        }
        if ( v30 >= v31 )
          goto LABEL_82;
        if ( !v25 )
          goto LABEL_69;
        DataValsList = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          v25,
                                          &entity,
                                          *(_DWORD *)(v28 + 4 * v30 + 32),
                                          (const MethodInfo_23E2334 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_69;
          DataValsList = (DataManager_o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v29 )
              goto LABEL_69;
            if ( v30 >= LODWORD(v29->fields.datalist) )
            {
LABEL_82:
              v48 = sub_B52A88(DataValsList);
              sub_B52A28(v48, 0LL);
            }
            if ( !entity )
              goto LABEL_69;
            v32 = (DataVals_o *)p_lookup[v30];
            if ( !v32 )
              goto LABEL_69;
            DataVals__SetTempType(
              (DataVals_o *)p_lookup[v30],
              (FunctionMaster_o *)v25,
              (int32_t)entity->fields.age,
              0LL);
            v33 = DataVals__isParam(v32, 26, 0LL) ? 26 : 3;
            Param = DataVals__GetParam(v32, v33, 0, 0LL);
            v35 = DataVals__isParam(v32, 27, 0LL) ? 27 : 4;
            DataValsList = (DataManager_o *)DataVals__GetParam(v32, v35, 0, 0LL);
            if ( !v26 )
              goto LABEL_69;
            DataValsList = (DataManager_o *)SkillLvMaster__TryGetEntity(v26, &v56, Param, (int32_t)DataValsList, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              if ( !v56 )
                goto LABEL_69;
              funcId = (System_Collections_Generic_IEnumerable_T__o *)v56->fields.funcId;
              if ( funcId )
                System_Collections_Generic_HashSet_int___UnionWith(
                  v27,
                  funcId,
                  (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
            DataValsList = (DataManager_o *)DataVals__isParam(v32, 92, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              DataValsList = (DataManager_o *)DataVals__isParam(v32, 93, 0LL);
              if ( ((unsigned __int8)DataValsList & 1) != 0 )
              {
                v37 = v27;
                v38 = DataVals__GetParam(v32, 92, 0, 0LL);
                v39 = DataVals__GetParam(v32, 93, 0, 0LL);
                if ( DataVals__isParam(v32, 95, 0LL) )
                {
                  DataValsList = (DataManager_o *)TreasureDvcLvMaster__TryGetEntity(v49, &v55, v38, v39, 0LL);
                  v27 = v37;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v40 = v55;
                    if ( !v55 )
                      goto LABEL_69;
LABEL_66:
                    v10 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v40 + 4);
                    if ( v10 )
                      System_Collections_Generic_HashSet_int___UnionWith(
                        v27,
                        v10,
                        (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                  }
                }
                else
                {
                  DataValsList = (DataManager_o *)SkillLvMaster__TryGetEntity(v26, &v54, v38, v39, 0LL);
                  v27 = v37;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v40 = v54;
                    if ( !v54 )
                      goto LABEL_69;
                    goto LABEL_66;
                  }
                }
              }
            }
          }
        }
        v28 = *(_QWORD *)(v13 + 32);
        ++v30;
        if ( !v28 )
          goto LABEL_69;
      }
    }
  }
  return (System_Int32_array *)v13;
}


UserServantCommandCardEntity_o *__fastcall UserServantEntity__GetUserCommandCardEntity(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  DataManager_o *v5; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v7; // q1
  UserServantCommandCardMaster_o *v8; // x20
  int64_t v9; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  int64_t v12; // x19
  const MethodInfo *v13; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-50h]
  UserServantCommandCardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42AE269 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42AE269 = 1;
  }
  entity = 0LL;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AEB684(v4);
  v5 = **(DataManager_o ***)(v4 + 184);
  if ( !v5 )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v5,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  v7 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v8 = (UserServantCommandCardMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v15 = v16;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v15, 0LL);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v5 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v18, 0LL);
  if ( !v8 )
LABEL_16:
    sub_B52A5C(v5, method);
  UserServantCommandCardMaster__TryGetEntity(v8, &entity, v12, (int)v5, v13);
  return entity;
}


bool __fastcall UserServantEntity__HasStatus(UserServantEntity_o *this, int32_t statusFlag, const MethodInfo *method)
{
  return (this->fields.status & statusFlag) != 0;
}


bool __fastcall UserServantEntity__IsAddFriendShipHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( UserServantEntity__IsHeroine(this, method) )
    return LOBYTE(this->fields.status) >> 7;
  else
    LOBYTE(v3) = 0;
  return v3;
}


bool __fastcall UserServantEntity__IsChocolateSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE26E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE26E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 4) & 1;
}


bool __fastcall UserServantEntity__IsCombineExp(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE251 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE251 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return ServantEntity__checkIsCombineMaterialSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCombineMaterial(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE23B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE23B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCondJoin(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 6) & 1;
}


bool __fastcall UserServantEntity__IsEnableOwnRandomLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42AE26F & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    byte_42AE26F = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v8, 0LL) )
  {
    v6 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL) == 1;
  }
  else
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    return OptionManager__GetRandomLimitCountOwn(0LL);
  }
}


bool __fastcall UserServantEntity__IsEnableSupportRandomLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42AE271 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    byte_42AE271 = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v8, 0LL) )
  {
    v6 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
    v5 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL) == 1;
  }
  else
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    return OptionManager__GetRandomLimitCountFriend(0LL);
  }
}


bool __fastcall UserServantEntity__IsEventJoin(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 1) & 1;
}


bool __fastcall UserServantEntity__IsExceedMaxLv(UserServantEntity_o *this, int32_t targetLv, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tdMaxLv; // [xsp+8h] [xbp-8h] BYREF
  int32_t tdLv; // [xsp+Ch] [xbp-4h] BYREF

  tdLv = 0;
  tdMaxLv = 0;
  UserServantEntity__getTreasureDeviceInfo_21516452(this, &tdLv, &tdMaxLv, v3);
  return tdMaxLv < tdLv + targetLv;
}


bool __fastcall UserServantEntity__IsExchangeSvt(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  char i; // w22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int128 v9; // q1
  int64_t v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14[2]; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+88h] [xbp-38h] BYREF

  if ( (byte_42AE276 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserCombineExpMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE276 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  memset(&v14[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_21;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = 0; ; i |= HIDWORD(v15.fields.current[1].klass) == 27 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v15,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v7 )
      break;
    if ( !v15.fields.current )
      sub_B52A5C(v7, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (i & 1) == 0 )
  {
LABEL_18:
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCombineExpMaster___)) == 0LL )
  {
LABEL_21:
    sub_B52A5C(Instance, v4);
  }
  UserCombineExpMaster__GetUserSvtId(v14, (UserCombineExpMaster_o *)Instance, 0LL);
  v14[1] = v14[0];
  v9 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v14[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14[0].fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v13 = v14[0];
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v13, 0LL);
  v12 = v14[1];
  if ( v10 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v12, 0LL) )
    goto LABEL_18;
  LOBYTE(CombineEventCampaigns) = 1;
  return (char)CombineEventCampaigns;
}


bool __fastcall UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE26C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE26C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return ServantEntity__get_IsFriendShipSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE247 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE247 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsIgnoreCombineLimitSpecial(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE26D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE26D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return ServantEntity__get_IsIgnoreCombineLimitSpecial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsLeave(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE243 & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42AE243 = 1;
  }
  if ( !UserServantEntity__IsHeroine(this, method) )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29217932(126, 0LL);
}


bool __fastcall UserServantEntity__IsLock(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.status & 1;
}


bool __fastcall UserServantEntity__IsMaterialTd(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE279 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE279 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsModifyBattleVoice(
        UserServantEntity_o *this,
        int32_t battleVoice,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42AE26A & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE26A = 1;
  }
  v6 = *(_QWORD *)&this->fields.battleVoice.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.battleVoice.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v8, 0LL) != battleVoice;
}


bool __fastcall UserServantEntity__IsModifyChoice(UserServantEntity_o *this, bool isChoice, const MethodInfo *method)
{
  return (isChoice ^ (LOBYTE(this->fields.status) >> 4)) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__IsModifyCommandCardLimitCount(
        UserServantEntity_o *this,
        int32_t commandCardLimitCount,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  return UserServantEntity__getCommandCardLimitCount(
           this,
           ignoreRandomSettings,
           (const MethodInfo *)ignoreRandomSettings) != commandCardLimitCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__IsModifyDispLimitCount(
        UserServantEntity_o *this,
        int32_t dispLimitCount,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  return UserServantEntity__getDispLimitCount(this, ignoreRandomSettings, (const MethodInfo *)ignoreRandomSettings) != dispLimitCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__IsModifyIconLimitCount(
        UserServantEntity_o *this,
        int32_t iconLimitCount,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  return UserServantEntity__getIconLimitCount(this, ignoreRandomSettings, (const MethodInfo *)ignoreRandomSettings) != iconLimitCount;
}


bool __fastcall UserServantEntity__IsModifyLock(UserServantEntity_o *this, bool isLock, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) ^ isLock) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__IsModifyPortraitLimitCount(
        UserServantEntity_o *this,
        int32_t portraitLimitCount,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  return UserServantEntity__getPortraitLimitCount(this, ignoreRandomSettings, (const MethodInfo *)ignoreRandomSettings) != portraitLimitCount;
}


bool __fastcall UserServantEntity__IsModifyRandomLimitCountSetting(
        UserServantEntity_o *this,
        int32_t ownSettingParam,
        int32_t friendFollowSettingParam,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  __int64 v9; // x20
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42AE274 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE274 = 1;
  }
  v8 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL) != ownSettingParam )
    return 1;
  v10 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL) != friendFollowSettingParam;
}


bool __fastcall UserServantEntity__IsNew(UserServantEntity_o *this, const MethodInfo *method)
{
  int64_t UserId; // x0
  __int128 v4; // q1
  int64_t v5; // x20
  __int128 v6; // q0
  int64_t v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]

  if ( (byte_42AE241 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserServantNewManager_TypeInfo);
    byte_42AE241 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v5 = UserId;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  if ( v5 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v11, 0LL) )
  {
    v6 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v6;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v10 = v12;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v10, 0LL);
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    }
    return UserServantNewManager__IsNew(v7, 0LL);
  }
  else
  {
    return 0;
  }
}


bool __fastcall UserServantEntity__IsNoPeriod(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 5) & 1;
}


bool __fastcall UserServantEntity__IsOtherImageCancel(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 3) & 1;
}


bool __fastcall UserServantEntity__IsProtectedEventServant(UserServantEntity_o *this, const MethodInfo *method)
{
  EventServantEntity_o *EventServant; // x0
  const MethodInfo *v4; // x1
  EventServantEntity_o *v5; // x0
  __int64 v6; // x1

  EventServant = UserServantEntity__getEventServant(this, method);
  if ( EventServant )
  {
    v5 = UserServantEntity__getEventServant(this, v4);
    if ( !v5 )
      sub_B52A5C(0LL, v6);
    LOBYTE(EventServant) = EventServantEntity__IsProtectedDuringEvent(v5, 0LL);
  }
  return (char)EventServant;
}


bool __fastcall UserServantEntity__IsSameSvtEquipToLimitMaxNum(
        UserServantEntity_o *this,
        bool isWarehouseServantEquip,
        const MethodInfo *method)
{
  BalanceConfig_c *v5; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t ServantLimitMax; // w23
  int v9; // w23
  WarQuestSelectionMaster_o *v10; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  UserServantMaster_o *v13; // x20
  System_Collections_Generic_List_UserServantEntity__o *v14; // x0
  __int64 v15; // x1
  int v16; // w21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  UserServantMaster_o *v21; // x20
  UserServantEntity_Fields *p_fields; // x22
  Il2CppObject *current; // x19
  Il2CppObject v24; // q0
  int64_t v25; // x0
  __int128 v26; // q0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  int32_t LimitCount; // w20
  BalanceConfig_c *v30; // x0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+60h] [xbp-60h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userStorageServantList; // [xsp+78h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_42AE27D & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AE27D = 1;
  }
  userStorageServantList = 0LL;
  memset(&v36, 0, sizeof(v36));
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  ServantLimitMax = v5->static_fields->ServantLimitMax;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v7;
  *(_QWORD *)&v38.fields.fakeValue = v6;
  v9 = ServantLimitMax - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v38, 0LL);
  if ( !v9 )
    return 0;
  if ( !isWarehouseServantEquip )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
    v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v21 = (UserServantMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v40.fields.currentCryptoKey = v20;
    *(_QWORD *)&v40.fields.fakeValue = v19;
    v14 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                    v40,
                                                                    0LL);
    if ( !v21 )
      goto LABEL_46;
    v16 = 0;
    if ( !UserServantMaster__TryGetEntityListBySvtId(v21, &userStorageServantList, (int32_t)v14, 0, 0LL) )
      return v9 <= v16;
LABEL_29:
    v14 = userStorageServantList;
    if ( userStorageServantList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userStorageServantList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v36.fields.current = (Il2CppObject *)v35.fields.fakeValue;
      *(_OWORD *)&v36.fields.list = *(_OWORD *)&v35.fields.currentCryptoKey;
      v16 = 0;
      p_fields = &this->fields;
      while ( 1 )
      {
        v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v36,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
        if ( !v31 )
          break;
        current = v36.fields.current;
        if ( !v36.fields.current )
          sub_B52A5C(v31, v32);
        v24 = v36.fields.current[2];
        *(Il2CppObject *)&v35.fields.currentCryptoKey = v36.fields.current[1];
        *(Il2CppObject *)&v35.fields.fakeValue = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v35;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v34, 0LL);
        v26 = *(_OWORD *)&p_fields->id.fields.fakeValue;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
        *(_OWORD *)&v33.fields.fakeValue = v26;
        if ( v25 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v33, 0LL) )
        {
          LimitCount = UserServantEntity__getLimitCount((UserServantEntity_o *)current, v27);
          v30 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v30 = BalanceConfig_TypeInfo;
          }
          if ( LimitCount != v30->static_fields->ServantLimitMax )
            v16 += UserServantEntity__getLimitCount((UserServantEntity_o *)current, v28) + 1;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v36,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return v9 <= v16;
    }
LABEL_46:
    sub_B52A5C(v14, v15);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  v10 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (UserServantMaster_o *)v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v12;
  *(_QWORD *)&v39.fields.fakeValue = v11;
  v14 = (System_Collections_Generic_List_UserServantEntity__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                  v39,
                                                                  0LL);
  if ( !v13 )
    goto LABEL_46;
  if ( UserServantMaster__TryGetEntitySvtStorageListBySvtId(v13, &userStorageServantList, (int32_t)v14, 0LL) )
    goto LABEL_29;
  v16 = 0;
  return v9 <= v16;
}


bool __fastcall UserServantEntity__IsSetRandomLimitCountValue(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_42AE273 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE273 = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCountSupport.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCountSupport.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6, 0LL) > 0;
}


bool __fastcall UserServantEntity__IsStatusUp(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE252 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE252 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return ServantEntity__get_IsStatusUp((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsUniqueIndividualityRestriction(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w21
  int32_t v8; // w22
  const MethodInfo *v9; // x2
  int32_t DispLimitCount; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42AE22E & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE22E = 1;
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
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
  return QuestRestrictionInfo__IsUniqueIndividuality_34156144(questRestrictionInfo, v7, v8, DispLimitCount, 0LL);
}


bool __fastcall UserServantEntity__IsUniqueIndividualityRestriction_21514628(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w24
  int32_t v14; // w25
  const MethodInfo *v15; // x2
  int32_t DispLimitCount; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42AE22F & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE22F = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v18, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  return QuestRestrictionInfo__IsUniqueIndividuality_34156792(
           questRestrictionInfo,
           v13,
           v14,
           DispLimitCount,
           partyItem,
           num,
           partyIndex,
           0LL);
}


bool __fastcall UserServantEntity__IsWithdrawal(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 2) & 1;
}


int32_t __fastcall UserServantEntity__OwnRandomSettingSelectedButton(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_42AE270 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE270 = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6, 0LL);
}


void __fastcall UserServantEntity__SetOld(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  int64_t v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-30h]

  if ( (byte_42AE242 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserServantNewManager_TypeInfo);
    byte_42AE242 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v5 = v6;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v5, 0LL);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__SetOld(v4, 0LL);
}


int32_t __fastcall UserServantEntity__SupportRandomSettingSelectedButtonIndex(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  int32_t v5; // w0
  int32_t v6; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42AE272 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE272 = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v8, 0LL);
  if ( v5 == 1 )
    v6 = 4;
  else
    v6 = 3;
  if ( v5 == 2 )
    return 5;
  else
    return v6;
}


bool __fastcall UserServantEntity__checkID(UserServantEntity_o *this, int64_t inId, const MethodInfo *method)
{
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_42AE232 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AE232 = 1;
  }
  v5 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v7, 0LL) == inId;
}


int32_t __fastcall UserServantEntity__checkTreasureDeviceLevelUp(
        UserServantEntity_o *this,
        int32_t targetLv,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tdMaxLv; // [xsp+8h] [xbp-8h] BYREF
  int32_t tdLv; // [xsp+Ch] [xbp-4h] BYREF

  tdLv = 0;
  tdMaxLv = 0;
  UserServantEntity__getTreasureDeviceInfo_21516452(this, &tdLv, &tdMaxLv, v3);
  if ( tdLv + targetLv >= tdMaxLv )
    return tdMaxLv;
  else
    return tdLv + targetLv;
}


int32_t __fastcall UserServantEntity__getAddTotalExp(
        UserServantEntity_o *this,
        int32_t materialId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_42AE266 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_B52984(&Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE266 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             materialId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( *(&Entity->fields.id + 1) == 2 )
      LODWORD(Entity) = this->fields.exp;
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


int32_t __fastcall UserServantEntity__getAdjustAtk(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.adjustAtk;
}


int32_t __fastcall UserServantEntity__getAdjustHp(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.adjustHp;
}


void __fastcall UserServantEntity__getAdjustMaxData(
        UserServantEntity_o *this,
        int32_t *hpData,
        int32_t *atkData,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v10; // x1
  int32_t v11; // w23
  _DWORD *v12; // x22
  BalanceConfig_c *v13; // x0
  int32_t v14; // w20
  BalanceConfig_c *v15; // x0

  if ( (byte_42AE24F & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_B52984(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE24F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (void *)UserServantEntity__getRarity(this, v10),
        !MasterData_WarQuestSelectionMaster)
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)Instance,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
  }
  v11 = *((_DWORD *)Instance + 5);
  v12 = Instance;
  v13 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustHp >= v11 )
    v11 = v12[7];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  *hpData = v13->static_fields->StatusUpAdjustHp * v11;
  v14 = v12[6];
  v15 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustAtk >= v14 )
    v14 = v12[8];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  *atkData = v15->static_fields->StatusUpAdjustAtk * v14;
}


SvtUseSkillData_o *__fastcall UserServantEntity__getAppendSkillInfo(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x20
  __int64 v5; // x22
  ServantAppendPassiveSkillMaster_o *v6; // x19
  int64_t v7; // x0
  __int64 v8; // x1
  SvtUseSkillData_o *SkillData; // x19
  WarQuestSelectionMaster_o *v10; // x0
  __int128 v11; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v12; // x20
  struct System_Int32_array *svtSkillNumsList; // x8
  System_Int32_array **v14; // x0
  struct System_Int32_array **p_svtSkillLvList; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WarQuestSelectionMaster_o *v22; // x0
  __int128 v23; // q0
  UserServantAppendPassiveSkillMaster_o *v24; // x22
  int64_t v25; // x0
  __int64 v26; // x8
  int64_t v27; // x21
  const MethodInfo *v28; // x4
  struct System_Int32_array *unlockNums; // x8
  struct System_Int32_array *v30; // x10
  unsigned __int64 v31; // x8
  struct System_Int32_array *v32; // x10
  UserServantAppendPassiveSkillEntity_o *v33; // x11
  unsigned __int64 v34; // x10
  struct System_Int32_array *v35; // x12
  unsigned __int64 max_length; // x13
  struct System_Int32_array *v37; // x14
  struct System_Int32_array *v38; // x11
  UserServantEntity_o *v39; // x11
  __int64 v40; // x10
  __int64 v41; // x13
  unsigned __int64 v42; // x14
  unsigned __int64 v43; // x12
  struct System_Int32_array *v44; // x15
  __int64 v45; // x11
  struct System_Int32_array *v46; // x12
  struct System_Int32_array *v47; // x9
  unsigned __int64 v48; // x8
  struct System_Int32_array *v49; // x9
  __int64 v51; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-50h]
  UserServantAppendPassiveSkillEntity_o *v55; // [xsp+60h] [xbp-30h] BYREF
  UserServantEntity_o *entity; // [xsp+68h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42AE21B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AE21B = 1;
  }
  v55 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = v5;
  *(_QWORD *)&v57.fields.fakeValue = v4;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v57, 0LL);
  if ( !v6 )
    goto LABEL_62;
  SkillData = ServantAppendPassiveSkillMaster__GetSkillData(v6, v7, 0LL);
  v10 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  v11 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v12 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v10;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v11;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v53 = v54;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v53, 0LL);
  if ( !v12 )
    goto LABEL_62;
  v7 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         v12,
         &entity,
         v7,
         (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
  if ( !SkillData )
    goto LABEL_62;
  svtSkillNumsList = SkillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_62;
  v14 = (System_Int32_array **)sub_B5299C(int___TypeInfo, svtSkillNumsList->max_length);
  SkillData->fields.svtSkillLvList = (struct System_Int32_array *)v14;
  p_svtSkillLvList = &SkillData->fields.svtSkillLvList;
  sub_B52920((BattleServantConfConponent_o *)&SkillData->fields.svtSkillLvList, v14, v16, v17, v18, v19, v20, v21);
  v22 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  v23 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v24 = (UserServantAppendPassiveSkillMaster_o *)v22;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v52, 0LL);
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v58.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v27 = v25;
  *(_QWORD *)&v58.fields.currentCryptoKey = v26;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v58, 0LL);
  if ( !v24 )
    goto LABEL_62;
  v7 = UserServantAppendPassiveSkillMaster__TryGetEntity(v24, &v55, v27, v7, v28);
  if ( (v7 & 1) != 0 )
  {
    if ( !v55 )
      goto LABEL_62;
    unlockNums = v55->fields.unlockNums;
    if ( !unlockNums )
      goto LABEL_62;
    if ( *(_QWORD *)&unlockNums->max_length )
    {
      v30 = SkillData->fields.svtSkillNumsList;
      if ( v30 )
      {
        v31 = 0LL;
        while ( 1 )
        {
          if ( (__int64)v31 >= (int)v30->max_length )
            return SkillData;
          v32 = *p_svtSkillLvList;
          if ( !*p_svtSkillLvList )
            goto LABEL_62;
          if ( v31 >= v32->max_length )
            goto LABEL_64;
          v32->m_Items[v31 + 1] = 0;
          v33 = v55;
          if ( !v55 )
            goto LABEL_62;
          v34 = 0LL;
          while ( 1 )
          {
            v35 = v33->fields.unlockNums;
            if ( !v35 )
              goto LABEL_62;
            max_length = v35->max_length;
            if ( (__int64)v34 >= (int)max_length )
              break;
            v37 = SkillData->fields.svtSkillNumsList;
            if ( !v37 )
              goto LABEL_62;
            if ( v31 >= v37->max_length || v34 >= max_length )
              goto LABEL_64;
            if ( v37->m_Items[v31 + 1] == v35->m_Items[v34 + 1] )
            {
              v38 = *p_svtSkillLvList;
              if ( !*p_svtSkillLvList )
                goto LABEL_62;
              if ( v31 >= v38->max_length )
                goto LABEL_64;
              v38->m_Items[v31 + 1] = 1;
              v33 = v55;
            }
            ++v34;
            if ( !v33 )
              goto LABEL_62;
          }
          v39 = entity;
          if ( entity )
            break;
LABEL_54:
          v30 = SkillData->fields.svtSkillNumsList;
          ++v31;
          if ( !v30 )
            goto LABEL_62;
        }
        v40 = 8LL;
        do
        {
          v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
          if ( !v41 )
            break;
          v42 = *(unsigned int *)(v41 + 24);
          v43 = v40 - 8;
          if ( v40 - 8 >= (int)v42 )
            goto LABEL_54;
          v44 = SkillData->fields.svtSkillNumsList;
          if ( !v44 )
            break;
          if ( v31 >= v44->max_length || v43 >= v42 )
            goto LABEL_64;
          if ( v44->m_Items[v31 + 1] == *(_DWORD *)(v41 + 4 * v40) )
          {
            v45 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
            if ( !v45 )
              break;
            if ( v43 >= *(unsigned int *)(v45 + 24) )
              goto LABEL_64;
            v46 = *p_svtSkillLvList;
            if ( !*p_svtSkillLvList )
              break;
            if ( v31 >= v46->max_length )
              goto LABEL_64;
            v46->m_Items[v31 + 1] = *(_DWORD *)(v45 + 4 * v40);
            v39 = entity;
          }
          ++v40;
        }
        while ( v39 );
      }
LABEL_62:
      sub_B52A5C(v7, v8);
    }
  }
  v47 = SkillData->fields.svtSkillNumsList;
  if ( !v47 )
    goto LABEL_62;
  v48 = 0LL;
  while ( (__int64)v48 < (int)v47->max_length )
  {
    v49 = *p_svtSkillLvList;
    if ( *p_svtSkillLvList )
    {
      if ( v48 >= v49->max_length )
      {
LABEL_64:
        v51 = sub_B52A88(v7);
        sub_B52A28(v51, 0LL);
      }
      v49->m_Items[v48 + 1] = 0;
      v47 = SkillData->fields.svtSkillNumsList;
      ++v48;
      if ( v47 )
        continue;
    }
    goto LABEL_62;
  }
  return SkillData;
}


bool __fastcall UserServantEntity__getBaseEventUpVal(
        UserServantEntity_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        int32_t baseEventId,
        bool finishEvent,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 id; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x27
  __int64 v18; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x26
  SkillLvMaster_o *v20; // x26
  const MethodInfo *v21; // x5
  const MethodInfo *v22; // x7
  unsigned __int64 v23; // x28
  bool v24; // w27
  SkillLvEntity_o *Entity; // x0
  unsigned __int64 v26; // x24
  SkillInfo_o *v27; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v29; // x0
  __int64 v31; // x0
  SkillInfo_array *skillInfoList; // [xsp+10h] [xbp-70h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-68h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42AE226 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE226 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v18;
  *(_QWORD *)&v37.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v37, 0LL);
  if ( !v19
    || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v19,
          (int32_t)Instance,
          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_38:
    sub_B52A5C(Instance, id);
  }
  v20 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v21);
  if ( idList )
  {
    v23 = 0LL;
    v24 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v23 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
        break;
      if ( !idList )
        goto LABEL_38;
      if ( v23 >= idList->max_length )
      {
LABEL_39:
        v31 = sub_B52A88(Instance);
        sub_B52A28(v31, 0LL);
      }
      id = (unsigned int)idList->m_Items[v23 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v20 )
          goto LABEL_38;
        Entity = SkillLvMaster__GetEntity(v20, id, 1, 0LL);
        if ( Entity )
        {
          if ( SkillLvEntity__getEventUpVal(
                 Entity,
                 wearersSvtId,
                 wearesLimitCount,
                 wearesDispLimitCount,
                 setupInfo,
                 baseEventId,
                 1,
                 1,
                 0LL) )
          {
            return v24;
          }
        }
      }
      ++v23;
    }
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, finishEvent, -1, v22);
  v26 = 0LL;
  v24 = 1;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v26 >= SLODWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
      return 0;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( v26 >= skillInfoList->max_length )
      goto LABEL_39;
    v27 = skillInfoList->m_Items[v26];
    if ( v27 )
    {
      id = (unsigned int)v27->fields.id;
      if ( (int)id >= 1 )
      {
        lv = v27->fields.lv;
        if ( lv >= 1 )
        {
          if ( !v20 )
            goto LABEL_38;
          v29 = SkillLvMaster__GetEntity(v20, id, lv, 0LL);
          if ( v29 )
          {
            if ( SkillLvEntity__getEventUpVal(
                   v29,
                   wearersSvtId,
                   wearesLimitCount,
                   wearesDispLimitCount,
                   setupInfo,
                   baseEventId,
                   1,
                   1,
                   0LL) )
            {
              return v24;
            }
          }
        }
      }
    }
    ++v26;
  }
}


bool __fastcall UserServantEntity__getBaseEventUpVal_21511524(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 id; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x20
  ServantEntity_o *Entity; // x22
  SkillLvMaster_o *v12; // x20
  const MethodInfo *v13; // x5
  const MethodInfo *v14; // x7
  unsigned __int64 v15; // x24
  char v16; // w23
  SkillLvEntity_o *v17; // x0
  BalanceConfig_c *v18; // x8
  int32_t *p_SvtEquipSkillListMax; // x8
  signed __int64 v20; // x21
  unsigned __int64 v21; // x22
  SkillInfo_o *v22; // x8
  int32_t lv; // w2
  __int64 v25; // x0
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42AE228 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE228 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v9;
  *(_QWORD *)&v30.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v30, 0LL);
  if ( !v10 )
    goto LABEL_47;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v10,
                                (int32_t)Instance,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v12 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v13);
  if ( idList )
  {
    v15 = 0LL;
    v16 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v15 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
        break;
      if ( !idList )
        goto LABEL_47;
      if ( v15 >= idList->max_length )
      {
LABEL_48:
        v25 = sub_B52A88(Instance);
        sub_B52A28(v25, 0LL);
      }
      id = (unsigned int)idList->m_Items[v15 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v12 )
          goto LABEL_47;
        v17 = SkillLvMaster__GetEntity(v12, id, 1, 0LL);
        if ( v17 && SkillLvEntity__getEventUpVal_26552708(v17, eventUpVallInfo, 1, 1, 0, 0, 0LL) )
          v16 = 1;
      }
      ++v15;
    }
  }
  else
  {
    v16 = 0;
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v14);
  if ( !Entity )
LABEL_47:
    sub_B52A5C(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip(Entity, 0LL);
  v18 = BalanceConfig_TypeInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v18->static_fields->SvtEquipSkillListMax;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v18->static_fields->SvtSkillListMax;
  }
  v20 = *p_SvtEquipSkillListMax;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    while ( skillInfoList )
    {
      if ( v21 >= skillInfoList->max_length )
        goto LABEL_48;
      v22 = skillInfoList->m_Items[v21];
      if ( v22 )
      {
        id = (unsigned int)v22->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v22->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v12 )
              goto LABEL_47;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity(v12, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_26552708(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            1,
                                            1,
                                            0,
                                            0,
                                            0LL);
              v16 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( (__int64)++v21 >= v20 )
        return v16 & 1;
    }
    goto LABEL_47;
  }
  return v16 & 1;
}


int32_t __fastcall UserServantEntity__getBaseFriendPointUpType(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantSkillMaster_o *v8; // x20
  BattleBuffData_BuffData_array *ServantSkillList; // x20
  UserServantEntity___c_c *v10; // x8
  struct UserServantEntity___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__52_0; // x21
  Il2CppObject *v13; // x22
  struct UserServantEntity___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int max_length; // w8
  unsigned int v22; // w27
  Il2CppClass **v23; // x8
  ServantSkillEntity_o *v24; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v27; // x24
  __int64 v28; // x25
  int64_t v29; // x23
  int32_t v30; // w0
  const MethodInfo *v31; // x2
  int32_t SkillLevel; // w0
  const MethodInfo *v33; // x2
  int32_t v35; // w0
  __int64 v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_42AE21F & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Sort_ServantSkillEntity___);
    sub_B52984(&Method_System_Comparison_ServantSkillEntity___ctor__);
    sub_B52984(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_UserServantEntity___c__getBaseFriendPointUpType_b__52_0__);
    sub_B52984(&UserServantEntity___c_TypeInfo);
    byte_42AE21F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v7;
  *(_QWORD *)&v37.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v37, 0LL);
  if ( !v8 )
    goto LABEL_34;
  ServantSkillList = (BattleBuffData_BuffData_array *)ServantSkillMaster__getServantSkillList(
                                                        v8,
                                                        (int32_t)Instance,
                                                        0LL);
  v10 = UserServantEntity___c_TypeInfo;
  if ( (BYTE3(UserServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v10 = UserServantEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__52_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = UserServantEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantSkillEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__52_0,
      v13,
      Method_UserServantEntity___c__getBaseFriendPointUpType_b__52_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantSkillEntity___ctor__);
    v14 = UserServantEntity___c_TypeInfo->static_fields;
    v14->__9__52_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__52_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v14->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    ServantSkillList,
    (System_Comparison_T__o *)_9__52_0,
    (const MethodInfo_1A33468 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !ServantSkillList )
    goto LABEL_34;
  max_length = ServantSkillList->max_length;
  if ( max_length < 1 )
    return 0;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 >= max_length )
    {
      v36 = sub_B52A88(Instance);
      sub_B52A28(v36, 0LL);
    }
    v23 = &ServantSkillList->obj.klass + (int)v22;
    v24 = (ServantSkillEntity_o *)v23[4];
    if ( !v24 )
      goto LABEL_34;
    Instance = (DataManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v23[4], 0, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      lv = this->fields.lv;
      v28 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v27 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v29 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v38.fields.currentCryptoKey = v28;
      *(_QWORD *)&v38.fields.fakeValue = v27;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v38, 0LL);
      Instance = (DataManager_o *)ServantSkillEntity__isUse(v24, v29, lv, v30, -1, -1, -1, -1LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        SkillLevel = UserServantEntity__getSkillLevel(this, v24->fields.num - 1, v31);
        Instance = (DataManager_o *)ServantSkillEntity__getFriendPointUpVal(v24, SkillLevel, 0LL);
        if ( (int)Instance >= 1 )
          break;
      }
    }
    max_length = ServantSkillList->max_length;
    if ( (int)++v22 >= max_length )
      return 0;
  }
  v35 = UserServantEntity__getSkillLevel(this, v24->fields.num - 1, v33);
  Instance = (DataManager_o *)ServantSkillEntity__getSkillLvEntity(v24, v35, 0LL);
  if ( !Instance )
LABEL_34:
    sub_B52A5C(Instance, v4);
  return SkillLvEntity__getFriendPointUpType((SkillLvEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getBaseFriendPointUpVal(UserServantEntity_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantSkillMaster_o *v8; // x20
  BattleBuffData_BuffData_array *ServantSkillList; // x20
  UserServantEntity___c_c *v10; // x8
  struct UserServantEntity___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__51_0; // x21
  Il2CppObject *v13; // x22
  struct UserServantEntity___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int max_length; // w8
  unsigned int v22; // w27
  Il2CppClass **v23; // x8
  ServantSkillEntity_o *v24; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v27; // x24
  __int64 v28; // x25
  int64_t v29; // x23
  int32_t v30; // w0
  const MethodInfo *v31; // x2
  int32_t SkillLevel; // w0
  __int64 v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_42AE21E & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Sort_ServantSkillEntity___);
    sub_B52984(&Method_System_Comparison_ServantSkillEntity___ctor__);
    sub_B52984(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_UserServantEntity___c__getBaseFriendPointUpVal_b__51_0__);
    sub_B52984(&UserServantEntity___c_TypeInfo);
    byte_42AE21E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v7;
  *(_QWORD *)&v35.fields.fakeValue = v6;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v35, 0LL);
  if ( !v8 )
    goto LABEL_33;
  ServantSkillList = (BattleBuffData_BuffData_array *)ServantSkillMaster__getServantSkillList(
                                                        v8,
                                                        (int32_t)Instance,
                                                        0LL);
  v10 = UserServantEntity___c_TypeInfo;
  if ( (BYTE3(UserServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v10 = UserServantEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__51_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = UserServantEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantSkillEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__51_0,
      v13,
      Method_UserServantEntity___c__getBaseFriendPointUpVal_b__51_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantSkillEntity___ctor__);
    v14 = UserServantEntity___c_TypeInfo->static_fields;
    v14->__9__51_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__51_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v14->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    ServantSkillList,
    (System_Comparison_T__o *)_9__51_0,
    (const MethodInfo_1A33468 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !ServantSkillList )
    goto LABEL_33;
  max_length = ServantSkillList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
      {
        v33 = sub_B52A88(Instance);
        sub_B52A28(v33, 0LL);
      }
      v23 = &ServantSkillList->obj.klass + (int)v22;
      v24 = (ServantSkillEntity_o *)v23[4];
      if ( !v24 )
        break;
      Instance = (WebViewManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v23[4], 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        lv = this->fields.lv;
        v28 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v27 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v29 = UserId;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v36.fields.currentCryptoKey = v28;
        *(_QWORD *)&v36.fields.fakeValue = v27;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v36, 0LL);
        Instance = (WebViewManager_o *)ServantSkillEntity__isUse(v24, v29, lv, v30, -1, -1, -1, -1LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          SkillLevel = UserServantEntity__getSkillLevel(this, v24->fields.num - 1, v31);
          Instance = (WebViewManager_o *)ServantSkillEntity__getFriendPointUpVal(v24, SkillLevel, 0LL);
          if ( (int)Instance > 0 )
            return (int)Instance;
        }
      }
      max_length = ServantSkillList->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_31;
    }
LABEL_33:
    sub_B52A5C(Instance, v4);
  }
LABEL_31:
  LODWORD(Instance) = 0;
  return (int)Instance;
}


int32_t __fastcall UserServantEntity__getCardImageLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  BalanceConfig_c *v6; // x0
  int32_t result; // w0
  bool v8; // vf
  __int64 v9; // x20
  __int64 v10; // x21
  int32_t v11; // w0
  __int64 v12; // x8
  int32_t v13; // w19
  int32_t v14; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42AE257 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE257 = 1;
  }
  if ( !ConstantMaster__IsOtherImage(0LL) || (this->fields.status & 8) != 0 )
  {
    result = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v5);
    if ( result <= 10 )
    {
      v8 = __OFSUB__(result--, 1);
      if ( result < 0 != v8 )
      {
        v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v15.fields.currentCryptoKey = v10;
        *(_QWORD *)&v15.fields.fakeValue = v9;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
        v12 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v13 = v11;
        *(_QWORD *)&v16.fields.currentCryptoKey = v12;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        return ImageLimitCount__GetCardImageLimitCount(v13, v14, 1, 0, 0LL);
      }
    }
  }
  else
  {
    v6 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    return v6->static_fields->OtherImageLimitCount;
  }
  return result;
}


int32_t __fastcall UserServantEntity__getCollectionNo(UserServantEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE237 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE237 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return *((_DWORD *)Instance + 52);
}


int32_t __fastcall UserServantEntity__getCombineQp(UserServantEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  int32_t v9; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42AE23D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CombineQpMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE23D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineQpMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpMaster__GetEntity(
                     (CombineQpMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_13:
    sub_B52A5C(Instance, v4);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtEq(UserServantEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  int32_t v9; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42AE248 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE248 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpSvtEquipMaster__GetEntity(
                     (CombineQpSvtEquipMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_13:
    sub_B52A5C(Instance, v4);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtExceed(UserServantEntity_o *this, const MethodInfo *method)
{
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v3; // x1

  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(this, method);
  if ( !SvtExceedEnt )
    sub_B52A5C(0LL, v3);
  return SvtExceedEnt->fields.qp;
}


int32_t __fastcall UserServantEntity__getCombineVoiceLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  bool v6; // vf

  result = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v3);
  if ( result <= 2 )
  {
    v6 = __OFSUB__(result--, 1);
    if ( result < 0 != v6 )
      return BasicHelper__DecryptValue_19348088(this->fields.limitCount, 0LL);
  }
  return result;
}


int32_t __fastcall UserServantEntity__getCommandCardLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  const MethodInfo *v6; // x1
  bool v7; // vf

  result = UserServantEntity__GetLimitCountWithRandom(this, 2, ignoreRandomSettings, v3);
  if ( result <= 10 )
  {
    v7 = __OFSUB__(result--, 1);
    if ( result < 0 != v7 )
      return UserServantEntity__getMaxCommandCardLimitCount(this, v6);
  }
  return result;
}


System_Int32_array *__fastcall UserServantEntity__getCommandCodeIdList(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v6; // q1
  WarQuestSelectionMaster_o *v7; // x20
  int64_t v8; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  int64_t v11; // x19
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42AE267 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE267 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v7 = MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v14, 0LL);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
  if ( !v7 )
LABEL_12:
    sub_B52A5C(Instance, v4);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           v11,
           (int32_t)Instance,
           v12);
}


int32_t __fastcall UserServantEntity__getCost(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE253 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE253 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return Instance[1].fields.m_CachedPtr;
}


int32_t __fastcall UserServantEntity__getDispLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  const MethodInfo *v6; // x1
  bool v7; // vf

  result = UserServantEntity__GetLimitCountWithRandom(this, 1, ignoreRandomSettings, v3);
  if ( result <= 10 )
  {
    v7 = __OFSUB__(result--, 1);
    if ( result < 0 != v7 )
      return UserServantEntity__getMaxDispLimitCount(this, v6);
  }
  return result;
}


int32_t __fastcall UserServantEntity__getDispSelectLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t LimitCountWithRandom; // w0
  __int64 v7; // x20
  __int64 v8; // x21
  int32_t v9; // w19
  int32_t v10; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42AE255 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE255 = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 1, ignoreRandomSettings, v3);
  v8 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v9 = LimitCountWithRandom - 1;
  if ( LimitCountWithRandom < 1 )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.fakeValue = v7;
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL);
  }
  else
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v12.fields.currentCryptoKey = v8;
    *(_QWORD *)&v12.fields.fakeValue = v7;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetLimitCountByDispLimit(v9, v10, 0LL);
  }
}


void __fastcall UserServantEntity__getEquipSkillInfo(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        bool useUserSvtId,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x21
  DataManager_o *UseEntity; // x0
  __int64 v9; // x22
  BalanceConfig_c *v10; // x8
  SkillInfo_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int128 v18; // q0
  __int128 v19; // q1
  __int64 v20; // x19
  __int64 i; // x23
  SkillInfo_o *v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t v25; // w0
  __int128 v26; // q0
  int32_t v27; // w25
  int64_t v28; // x0
  int32_t lv; // w26
  int64_t v30; // x27
  int32_t v31; // w5
  ServantSkillEntity_o *v32; // x25
  int32_t skillNum; // w8
  SkillInfo_array *v34; // x25
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  unsigned __int64 v41; // x21
  BalanceConfig_c *v42; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  int64_t userSvtId; // [xsp+28h] [xbp-F8h]
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50[2]; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_42AE218 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&SkillInfo___TypeInfo);
    sub_B52984(&SkillInfo_TypeInfo);
    byte_42AE218 = 1;
  }
  memset(&v50[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AEB684(v7);
  UseEntity = **(DataManager_o ***)(v7 + 184);
  if ( !UseEntity )
LABEL_45:
    sub_B52A5C(UseEntity, skillInfoList);
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 UseEntity,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v9 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
         this,
         this->klass[1]._1.image);
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (SkillInfo_array *)sub_B5299C(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v11;
  sub_B52920((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  if ( useUserSvtId )
  {
    v19 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v18 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v50, -1LL, 0LL);
    v19 = *(_OWORD *)&v50[0].fields.currentCryptoKey;
    v18 = *(_OWORD *)&v50[0].fields.fakeValue;
  }
  *(_OWORD *)&v50[1].fields.currentCryptoKey = v19;
  *(_OWORD *)&v50[1].fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v49 = v50[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
  v20 = 8LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v41 = v20 - 8;
    v42 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v42 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v41 >= v42->static_fields->SvtEquipSkillListMax )
      break;
    v22 = (SkillInfo_o *)sub_B52A54(SkillInfo_TypeInfo);
    SkillInfo___ctor(v22, 0LL);
    v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v51.fields.currentCryptoKey = v24;
    *(_QWORD *)&v51.fields.fakeValue = v23;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v51, 0LL);
    v26 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v27 = v25;
    *(_OWORD *)&v50[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v50[0].fields.fakeValue = v26;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v48 = v50[0];
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v48, 0LL);
    lv = this->fields.lv;
    v30 = v28;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
    UseEntity = (DataManager_o *)MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_45;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   v27,
                                   (int)v20 - 7,
                                   v30,
                                   lv,
                                   v31,
                                   -1,
                                   -1,
                                   -1,
                                   userSvtId,
                                   0,
                                   0LL);
    if ( UseEntity )
    {
      if ( !v22 )
        goto LABEL_45;
      v32 = (ServantSkillEntity_o *)UseEntity;
      v22->fields.id = HIDWORD(UseEntity->fields.datalist);
      if ( !v9 )
        goto LABEL_45;
      if ( v41 >= *(unsigned int *)(v9 + 24) )
        goto LABEL_46;
      v22->fields.lv = *(_DWORD *)(v9 + 4 * v20);
      if ( v41 >= *(unsigned int *)(v9 + 24) )
        goto LABEL_46;
      ServantSkillEntity__getEffectExplanation(
        (ServantSkillEntity_o *)UseEntity,
        &v22->fields.charge,
        &v22->fields.title,
        &v22->fields.explanation,
        *(_DWORD *)(v9 + 4 * v20),
        1,
        0LL);
      UseEntity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(v32, 0LL);
      v22->fields.strengthStatus = (int)UseEntity;
      skillNum = v32->fields.skillNum;
      v22->fields.isUse = 1;
      v22->fields.skillRecord = skillNum;
    }
    else
    {
      if ( !v22 )
        goto LABEL_45;
      v22->fields.lv = -1;
    }
    v34 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_45;
    UseEntity = (DataManager_o *)sub_B52A44(v22, v34->obj.klass->_1.element_class);
    if ( !UseEntity )
    {
      v44 = sub_B52A7C();
      sub_B52A28(v44, 0LL);
    }
    if ( v41 >= v34->max_length )
    {
LABEL_46:
      v43 = sub_B52A88(UseEntity);
      sub_B52A28(v43, 0LL);
    }
    *(Il2CppClass **)((char *)&v34->obj.klass + i) = (Il2CppClass *)v22;
    sub_B52920(
      (BattleServantConfConponent_o *)((char *)v34 + i),
      (System_Int32_array **)v22,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    ++v20;
  }
}


EventServantEntity_o *__fastcall UserServantEntity__getEventServant(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  EventServantEntity_o *result; // x0
  __int64 v6; // x8
  EventServantEntity_o *v7; // x20
  __int64 v8; // x26
  __int64 v9; // x8
  EventServantMaster_o *v10; // x21
  int32_t v11; // w22
  __int64 v12; // x23
  __int64 v13; // x24
  __int64 v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42AE244 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE244 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
LABEL_20:
    sub_B52A5C(Instance, v4);
  }
  result = (EventServantEntity_o *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0LL);
  if ( result )
  {
    v6 = *(_QWORD *)&result->fields.type;
    v7 = result;
    result = 0LL;
    if ( v6 )
    {
      if ( (int)v6 >= 1 )
      {
        v8 = 0LL;
        do
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_20;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventServantMaster___);
          if ( (unsigned int)v8 >= v7->fields.type )
          {
            v14 = sub_B52A88(Instance);
            sub_B52A28(v14, 0LL);
          }
          v9 = *((_QWORD *)&v7->fields.joinMessage + v8);
          if ( !v9 )
            goto LABEL_20;
          v10 = (EventServantMaster_o *)Instance;
          v11 = *(_DWORD *)(v9 + 16);
          v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v15.fields.currentCryptoKey = v13;
          *(_QWORD *)&v15.fields.fakeValue = v12;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
          if ( !v10 )
            goto LABEL_20;
          result = EventServantMaster__getEntity_31163732(v10, v11, (int32_t)Instance, 0LL);
          if ( result )
            return result;
          ++v8;
        }
        while ( (int)v8 < v7->fields.type );
        return 0LL;
      }
    }
  }
  return result;
}


EventServantEntity_o *__fastcall UserServantEntity__getEventServantIgnoreEnd(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  EventServantMaster_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE245 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE245 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventServantMaster___);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = (EventServantMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v6 )
    sub_B52A5C(v7, v8);
  return EventServantMaster__getEntityServantIgnoreEnd(v6, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall UserServantEntity__getEventServant_21522844(
        UserServantEntity_o *this,
        bool is_finishedAt,
        const MethodInfo *method)
{
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v6; // x20
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42AE246 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE246 = 1;
  }
  EventServant = UserServantEntity__getEventServant(this, (const MethodInfo *)is_finishedAt);
  if ( !EventServant )
    return 0LL;
  v6 = EventServant;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v6->fields.eventId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
  }
  if ( !EventEntity__IsOpen((EventEntity_o *)Instance, is_finishedAt, 0LL) )
    return 0LL;
  return v6;
}


bool __fastcall UserServantEntity__getEventUpVal(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w21
  int32_t v8; // w22
  const MethodInfo *v9; // x2
  int32_t DispLimitCount; // w23
  int32_t EventId; // w5
  const MethodInfo *v12; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42AE220 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE220 = 1;
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
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
  EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
  return UserServantEntity__getBaseEventUpVal(this, v7, v8, DispLimitCount, setupInfo, EventId, 0, v12);
}


System_Boolean_array *__fastcall UserServantEntity__getEventUpValList(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *v4; // x20
  struct System_Int32_array *eventIdList; // x8
  __int64 v6; // x23
  int32_t DispLimitCount; // w22
  System_Boolean_array *v8; // x21
  unsigned __int64 v9; // x25
  signed __int64 v10; // x26
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w23
  const MethodInfo *v14; // x7
  struct System_Int32_array *v15; // x8
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_42AE224 & 1) == 0 )
  {
    sub_B52984(&bool___TypeInfo);
    this = (UserServantEntity_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE224 = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_19;
  v6 = *(_QWORD *)&eventIdList->max_length;
  if ( !v6 )
    return 0LL;
  DispLimitCount = UserServantEntity__getDispLimitCount(v4, 0, method);
  v8 = (System_Boolean_array *)sub_B5299C(bool___TypeInfo, (unsigned int)v6);
  if ( (int)v6 >= 1 )
  {
    v9 = 0LL;
    v10 = (int)v6;
    while ( 1 )
    {
      v12 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v18.fields.currentCryptoKey = v12;
      *(_QWORD *)&v18.fields.fakeValue = v11;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v18, 0LL);
      this = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                      v4->fields.limitCount,
                                      0LL);
      v15 = setupInfo->fields.eventIdList;
      if ( !v15 )
        break;
      if ( v9 >= v15->max_length )
        goto LABEL_20;
      this = (UserServantEntity_o *)UserServantEntity__getBaseEventUpVal(
                                      v4,
                                      v13,
                                      (int32_t)this,
                                      DispLimitCount,
                                      setupInfo,
                                      v15->m_Items[v9 + 1],
                                      0,
                                      v14);
      if ( !v8 )
        break;
      if ( v9 >= v8->max_length )
      {
LABEL_20:
        v17 = sub_B52A88(this);
        sub_B52A28(v17, 0LL);
      }
      v8->m_Items[v9++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v9 >= v10 )
        return v8;
    }
LABEL_19:
    sub_B52A5C(this, setupInfo);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
System_Boolean_array *__fastcall UserServantEntity__getEventUpValList_21510660(
        UserServantEntity_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *v10; // x23
  struct System_Int32_array *eventIdList; // x8
  __int64 v12; // x25
  const MethodInfo *v13; // x7
  System_Boolean_array *v14; // x24
  unsigned __int64 v15; // x26
  struct System_Int32_array *v16; // x8
  __int64 v18; // x0

  v10 = this;
  if ( (byte_42AE225 & 1) == 0 )
  {
    this = (UserServantEntity_o *)sub_B52984(&bool___TypeInfo);
    byte_42AE225 = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_16;
  v12 = *(_QWORD *)&eventIdList->max_length;
  if ( !v12 )
    return 0LL;
  this = (UserServantEntity_o *)sub_B5299C(bool___TypeInfo, (unsigned int)v12);
  v14 = (System_Boolean_array *)this;
  if ( (int)v12 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v16 = setupInfo->fields.eventIdList;
      if ( !v16 )
        break;
      if ( v15 >= v16->max_length )
        goto LABEL_17;
      this = (UserServantEntity_o *)UserServantEntity__getBaseEventUpVal(
                                      v10,
                                      wearersSvtId,
                                      wearesLimitCount,
                                      wearesDispLimitCount,
                                      setupInfo,
                                      v16->m_Items[v15 + 1],
                                      0,
                                      v13);
      if ( !v14 )
        break;
      if ( v15 >= v14->max_length )
      {
LABEL_17:
        v18 = sub_B52A88(this);
        sub_B52A28(v18, 0LL);
      }
      v14->m_Items[v15++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v15 >= (int)v12 )
        return v14;
    }
LABEL_16:
    sub_B52A5C(this, *(_QWORD *)&wearersSvtId);
  }
  return v14;
}


bool __fastcall UserServantEntity__getEventUpVal_21508832(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  int32_t v10; // w23
  const MethodInfo *v11; // x2
  int32_t DispLimitCount; // w3
  const MethodInfo *v13; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42AE221 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE221 = 1;
  }
  if ( !setupInfo )
    return 0;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
  return UserServantEntity__getBaseEventUpVal(this, v9, v10, DispLimitCount, setupInfo, eventId, 0, v13);
}


bool __fastcall UserServantEntity__getEventUpVal_21509060(
        UserServantEntity_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t EventId; // w0
  const MethodInfo *v12; // x7

  if ( !setupInfo )
    return 0;
  EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
  return UserServantEntity__getBaseEventUpVal(
           this,
           wearersSvtId,
           wearesLimitCount,
           wearesDispLimitCount,
           setupInfo,
           EventId,
           0,
           v12);
}


bool __fastcall UserServantEntity__getEventUpVal_21509172(
        UserServantEntity_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        int32_t eventId,
        bool finishEvent,
        const MethodInfo *method)
{
  return setupInfo
      && UserServantEntity__getBaseEventUpVal(
           this,
           wearersSvtId,
           wearesLimitCount,
           wearesDispLimitCount,
           setupInfo,
           eventId,
           finishEvent,
           method);
}


bool __fastcall UserServantEntity__getEventUpVal_21509192(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int64_t v8; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v10; // x2
  int32_t DispLimitCount; // w0
  __int64 v12; // x24
  __int64 v13; // x25
  int32_t v14; // w23
  int32_t v15; // w24
  int32_t v16; // w25
  int32_t EventId; // w0
  const MethodInfo *v18; // x7
  __int64 v20; // x8
  unsigned __int64 v21; // x28
  UserServantEntity_o *v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t v25; // w25
  int32_t v26; // w26
  int32_t v27; // w0
  const MethodInfo *v28; // x7
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42AE222 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE222 = 1;
  }
  if ( setupInfo )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B52A5C(Instance, v8);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v10);
    v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v14 = DispLimitCount;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v13;
    *(_QWORD *)&v30.fields.fakeValue = v12;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v30, 0LL);
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal(this, v15, v16, v14, setupInfo, EventId, 0, v18);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 1;
    if ( equipIds )
    {
      v20 = *(_QWORD *)&equipIds->max_length;
      if ( (int)v20 >= 1 )
      {
        v21 = 0LL;
        while ( 1 )
        {
          if ( v21 >= (unsigned int)v20 )
          {
            v29 = sub_B52A88(Instance);
            sub_B52A28(v29, 0LL);
          }
          v8 = equipIds->m_Items[v21];
          if ( v8 >= 1 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_24;
            Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          v8,
                                          (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Instance )
            {
              v22 = (UserServantEntity_o *)Instance;
              v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v31.fields.currentCryptoKey = v24;
              *(_QWORD *)&v31.fields.fakeValue = v23;
              v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v31, 0LL);
              v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
              v27 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
              Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal(
                                            v22,
                                            v25,
                                            v26,
                                            v14,
                                            setupInfo,
                                            v27,
                                            0,
                                            v28);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return 1;
            }
          }
          LODWORD(v20) = equipIds->max_length;
          if ( (__int64)++v21 >= (int)v20 )
            return 0;
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_21509764(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        UserServantEntity_array *equipServentEntityList,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t DispLimitCount; // w0
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w22
  int32_t v14; // w23
  int32_t v15; // w24
  int32_t EventId; // w0
  const MethodInfo *v17; // x7
  _BOOL8 BaseEventUpVal; // x0
  __int64 v20; // x8
  unsigned __int64 i; // x27
  UserServantEntity_o *v22; // x23
  __int64 v23; // x24
  __int64 v24; // x25
  int32_t v25; // w24
  int32_t v26; // w25
  int32_t v27; // w0
  const MethodInfo *v28; // x7
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42AE223 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE223 = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v8);
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)Instance,
      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
    v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v13 = DispLimitCount;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v12;
    *(_QWORD *)&v30.fields.fakeValue = v11;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v30, 0LL);
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    BaseEventUpVal = UserServantEntity__getBaseEventUpVal(this, v14, v15, v13, setupInfo, EventId, 0, v17);
    if ( BaseEventUpVal )
      return 1;
    if ( equipServentEntityList )
    {
      v20 = *(_QWORD *)&equipServentEntityList->max_length;
      if ( (int)v20 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v20; ++i )
        {
          if ( i >= (unsigned int)v20 )
          {
            v29 = sub_B52A88(BaseEventUpVal);
            sub_B52A28(v29, 0LL);
          }
          v22 = equipServentEntityList->m_Items[i];
          if ( v22 )
          {
            v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v31.fields.currentCryptoKey = v24;
            *(_QWORD *)&v31.fields.fakeValue = v23;
            v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v31, 0LL);
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
            v27 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            BaseEventUpVal = UserServantEntity__getBaseEventUpVal(v22, v25, v26, v13, setupInfo, v27, 0, v28);
            if ( BaseEventUpVal )
              return 1;
            LODWORD(v20) = equipServentEntityList->max_length;
          }
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_21510952(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w23
  int32_t v12; // w24
  const MethodInfo *v13; // x2
  int32_t DispLimitCount; // w25
  EventUpValInfo_o *v15; // x26
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  DataManager_o *Instance; // x0
  int64_t v23; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v25; // x2
  __int64 v26; // x8
  unsigned __int64 v27; // x25
  char v28; // w26
  UserServantEntity_o *v29; // x22
  EventUpValInfo_o *v30; // x27
  __int64 v31; // x23
  Il2CppObject *lockCountObj; // x24
  const MethodInfo *v33; // x2
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42AE227 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&EventUpValInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE227 = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v10;
  *(_QWORD *)&v36.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v36, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v13);
  v15 = (EventUpValInfo_o *)sub_B52A54(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v15, setupInfo, v11, v12, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v15;
  sub_B52920((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_B52A5C(Instance, v23);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal_21511524(this, eventUpVallInfo, v25);
  if ( equipIds )
  {
    v26 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      v28 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v27 >= (unsigned int)v26 )
        {
          v35 = sub_B52A88(Instance);
          sub_B52A28(v35, 0LL);
        }
        v23 = equipIds->m_Items[v27];
        if ( v23 >= 1 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_23;
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v23,
                                        (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Instance )
            goto LABEL_23;
          v29 = (UserServantEntity_o *)Instance;
          v30 = *eventUpVallInfo;
          lockCountObj = Instance->fields.lockCountObj;
          v31 = *(_QWORD *)&Instance->fields.nowLoadCount;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v37.fields.currentCryptoKey = lockCountObj;
          *(_QWORD *)&v37.fields.fakeValue = v31;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v37, 0LL);
          if ( !v30 )
            goto LABEL_23;
          v30->fields.equipSvtId = (int)Instance;
          Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal_21511524(v29, eventUpVallInfo, v33);
          LODWORD(v26) = equipIds->max_length;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v28 = 1;
        }
        ++v27;
      }
      while ( (__int64)v27 < (int)v26 );
      LOBYTE(Instance) = v28;
    }
  }
  return (unsigned __int8)Instance & 1;
}


int32_t __fastcall UserServantEntity__getExceedLvMax(UserServantEntity_o *this, int32_t cnt, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  ServantLimitMaster_o *v10; // x21
  int32_t v11; // w22
  ServantLimitEntity_o *v12; // x21
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42AE25F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE25F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                this->fields.limitCount,
                                0LL);
  if ( !v10 )
    goto LABEL_16;
  v12 = ServantLimitMaster__GetEntity(v10, v11, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v12 || !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)ServantExceedMaster__TryGetEntity(
                                (ServantExceedMaster_o *)Instance,
                                &entity,
                                v12->fields.rarity,
                                cnt,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.addLvMax + v12->fields.lvMax;
LABEL_16:
    sub_B52A5C(Instance, v6);
  }
  return UserServantEntity__getLevelMax(this, v6);
}


bool __fastcall UserServantEntity__getExpInfo(
        UserServantEntity_o *this,
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

  if ( (byte_42AE239 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE239 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v22, 0LL);
  if ( !v14 )
    goto LABEL_22;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v14,
             (int32_t)Instance,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.lv < UserServantEntity__getLevelMax(this, v16) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    sub_B52A5C(Instance, v10);
  }
  v20 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_21:
  *barExp = v20;
  return 1;
}


int32_t __fastcall UserServantEntity__getFigureImageLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  bool v7; // vf
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  __int64 v11; // x8
  int32_t v12; // w19
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42AE259 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE259 = 1;
  }
  result = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v3);
  if ( result <= 10 )
  {
    if ( result > 3 )
    {
      return 2;
    }
    else
    {
      v7 = __OFSUB__(result--, 1);
      if ( result < 0 != v7 )
      {
        v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v14.fields.currentCryptoKey = v9;
        *(_QWORD *)&v14.fields.fakeValue = v8;
        v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
        v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v12 = v10;
        *(_QWORD *)&v15.fields.currentCryptoKey = v11;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        return ImageLimitCount__GetImageLimitCount(v12, v13, 0LL);
      }
    }
  }
  return result;
}


int32_t __fastcall UserServantEntity__getFigureLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int LimitCountWithRandom; // w8
  __int64 v7; // x20
  __int64 v8; // x21
  int32_t v9; // w19
  int32_t v10; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42AE25A & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE25A = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v3);
  if ( LimitCountWithRandom > 10 )
    return LimitCountWithRandom;
  v8 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v9 = LimitCountWithRandom - 1;
  if ( LimitCountWithRandom < 1 )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.fakeValue = v7;
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL);
  }
  else
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v12.fields.currentCryptoKey = v8;
    *(_QWORD *)&v12.fields.fakeValue = v7;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetLimitCountByImageLimit_28275948(v9, v10, 0LL);
  }
}


System_String_o *__fastcall UserServantEntity__getFrameCardPrefix(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  int32_t v9; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42AE265 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE265 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                this->fields.limitCount,
                                0LL);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance
    || (Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                      (ServantExceedMaster_o *)Instance,
                                      Entity->fields.rarity,
                                      this->fields.exceedCount,
                                      0LL)) == 0LL )
  {
LABEL_13:
    sub_B52A5C(Instance, v4);
  }
  return ServantExceedEntity__getFrameCardPrefix((ServantExceedEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getFrameType(UserServantEntity_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantExceedMaster_o *v8; // x20
  int32_t v9; // w21
  int32_t FrameType_30463188; // w20
  ServantLvDetailMaster_o *v11; // x21
  const MethodInfo *v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42AE263 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE263 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantExceedMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                   this->fields.limitCount,
                                   0LL);
  if ( !v8
    || (FrameType_30463188 = ServantExceedMaster__GetFrameType_30463188(
                               v8,
                               v9,
                               (int32_t)Instance,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v11 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v12),
        !v11) )
  {
LABEL_11:
    sub_B52A5C(Instance, v4);
  }
  return ServantLvDetailMaster__GetFrameType(v11, (int32_t)Instance, this->fields.lv, FrameType_30463188, 0LL);
}


int32_t __fastcall UserServantEntity__getFriendIconLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  const MethodInfo *v6; // x1
  bool v7; // vf

  result = UserServantEntity__GetLimitCountWithRandom(this, 3, ignoreRandomSettings, v3);
  if ( result <= 10 )
  {
    v7 = __OFSUB__(result--, 1);
    if ( result < 0 != v7 )
      return UserServantEntity__getMaxFriendIconLimitCount(this, v6);
  }
  return result;
}


int32_t __fastcall UserServantEntity__getFriendPointUpType(
        UserServantEntity_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x8
  int v10; // w21
  unsigned __int64 v11; // x24
  UserServantEntity_o *v12; // x22
  UserServantEntity_o *v13; // x23
  __int64 v15; // x0

  if ( (byte_42AE21D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE21D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_B52A5C(Instance, v6);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal(this, v8);
  if ( !equipIds )
    return 0;
  v9 = *(_QWORD *)&equipIds->max_length;
  if ( (int)v9 < 1 )
    return 0;
  v10 = (int)Instance;
  v11 = 0LL;
  v12 = 0LL;
  do
  {
    if ( v11 >= (unsigned int)v9 )
    {
      v15 = sub_B52A88(Instance);
      sub_B52A28(v15, 0LL);
    }
    v6 = (const MethodInfo *)equipIds->m_Items[v11];
    if ( (__int64)v6 >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int64_t)v6,
                                    (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_19;
      v13 = (UserServantEntity_o *)Instance;
      Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v6);
      LODWORD(v9) = equipIds->max_length;
      if ( (int)Instance > v10 )
        v12 = v13;
      if ( (int)Instance > v10 )
        v10 = (int)Instance;
    }
    ++v11;
  }
  while ( (__int64)v11 < (int)v9 );
  if ( v12 )
    return UserServantEntity__getBaseFriendPointUpType(v12, v6);
  else
    return 0;
}


int32_t __fastcall UserServantEntity__getFriendPointUpVal(
        UserServantEntity_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  __int64 v10; // x8
  unsigned __int64 i; // x22
  __int64 v13; // x0

  if ( (byte_42AE21C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE21C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_B52A5C(Instance, v6);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal(this, v8);
  v9 = (int)Instance;
  if ( equipIds )
  {
    v10 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v10 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v10; ++i )
      {
        if ( i >= (unsigned int)v10 )
        {
          v13 = sub_B52A88(Instance);
          sub_B52A28(v13, 0LL);
        }
        v6 = (const MethodInfo *)equipIds->m_Items[i];
        if ( (__int64)v6 >= 1 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_15;
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        (int64_t)v6,
                                        (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Instance )
            goto LABEL_15;
          Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v6);
          LODWORD(v10) = equipIds->max_length;
          if ( (int)Instance > v9 )
            v9 = (int)Instance;
        }
      }
    }
  }
  return v9;
}


int32_t __fastcall UserServantEntity__getFriendshipRank(UserServantEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v6; // q1
  UserServantCollectionMaster_o *v7; // x20
  int64_t v8; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  int64_t v11; // x19
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42AE238 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE238 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v7 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v14, 0LL);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
  if ( !v7 || (Instance = UserServantCollectionMaster__GetEntityDefinitely(v7, v11, (int32_t)Instance, v12)) == 0LL )
LABEL_13:
    sub_B52A5C(Instance, v4);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 100),
           0LL);
}


int32_t __fastcall UserServantEntity__getIconLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  const MethodInfo *v6; // x1
  bool v7; // vf

  result = UserServantEntity__GetLimitCountWithRandom(this, 3, ignoreRandomSettings, v3);
  if ( result <= 10 )
  {
    v7 = __OFSUB__(result--, 1);
    if ( result < 0 != v7 )
      return UserServantEntity__getMaxIconLimitCount(this, v6);
  }
  return result;
}


int32_t __fastcall UserServantEntity__getLevelMax(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  int32_t v9; // w21
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v11; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42AE23E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE23E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                this->fields.limitCount,
                                0LL);
  if ( !v8
    || (Entity = ServantLimitMaster__GetEntity(v8, v9, (int32_t)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_14:
    sub_B52A5C(Instance, v4);
  }
  v11 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0LL);
  lvMax = Entity->fields.lvMax;
  if ( v11 )
    lvMax += v11->fields.addLvMax;
  return lvMax;
}


int32_t __fastcall UserServantEntity__getLimitCntMax(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE23F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE23F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return Instance->fields.nowLoadCount;
}


int32_t __fastcall UserServantEntity__getLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_42AE213 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE213 = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6, 0LL);
}


int32_t __fastcall UserServantEntity__getMagnification(
        UserServantEntity_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  UserServantEntity_o *v4; // x19
  int32_t combineMaterialId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_42AE236 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_B52984(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (UserServantEntity_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE236 = 1;
  }
  entity = 0LL;
  if ( !svtEntity )
    goto LABEL_16;
  combineMaterialId = svtEntity->fields.combineMaterialId;
  this = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  &entity,
                                  combineMaterialId,
                                  (const MethodInfo_23E2334 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
LABEL_16:
    sub_B52A5C(this, svtEntity);
  if ( *(&entity->fields.id + 1) == 3 )
    return 1;
LABEL_10:
  if ( ServantEntity__get_IsServant(svtEntity, 0LL) )
    return v4->fields.treasureDeviceLv1;
  v8 = *(_QWORD *)&v4->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&v4->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL) + 1;
}


int32_t __fastcall UserServantEntity__getMaxCardImageLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v6; // x8
  int32_t v7; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42AE258 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE258 = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetCardImageLimitCount(v7, v8, 1, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxCommandCardLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v6; // x8
  int32_t v7; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42AE256 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE256 = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v7, v8, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxDispLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v6; // x8
  int32_t v7; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42AE254 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE254 = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v7, v8, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxFriendIconLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v6; // x8
  int32_t v7; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42AE25C & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE25C = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetCardImageLimitCount(v7, v8, 0, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxIconLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v6; // x8
  int32_t v7; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42AE25B & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE25B = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetCardImageLimitCount(v7, v8, 1, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxPortraitLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v6; // x8
  int32_t v7; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42AE25D & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE25D = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  v6 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v11.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v7, v8, 0LL);
}


void __fastcall UserServantEntity__getNextUseSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **skillNameList,
        int32_t targetLv,
        int32_t targetLimitCnt,
        bool useUserSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 v10; // x19
  __int64 UseEntity; // x0
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x24
  BalanceConfig_c *v13; // x8
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
  __int128 v28; // q0
  __int128 v29; // q1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x21
  __int64 v31; // x22
  __int64 v32; // x20
  unsigned __int64 v33; // x25
  BalanceConfig_c *v34; // x0
  SkillInfo_o *v35; // x0
  __int64 v36; // x19
  __int64 v37; // x26
  int32_t v38; // w0
  __int128 v39; // q0
  int32_t v40; // w27
  int64_t v41; // x0
  int32_t lv; // w28
  int64_t v43; // x19
  System_Int32_array *v44; // x8
  System_String_array *v45; // x26
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x19
  BattleServantConfConponent_o *v53; // x0
  __int64 v54; // x19
  __int64 v55; // x27
  int32_t v56; // w0
  __int128 v57; // q0
  int32_t v58; // w27
  int64_t v59; // x0
  ServantSkillEntity_o *v60; // x0
  __int128 v61; // q0
  ServantSkillEntity_o *v62; // x26
  int64_t v63; // x0
  System_Int32_array *v64; // x8
  System_String_array *v65; // x27
  __int64 v66; // x0
  __int64 v67; // x0
  int64_t userSvtId; // [xsp+38h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+40h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+60h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77[2]; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_42AE219 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&SkillInfo_TypeInfo);
    sub_B52984(&string___TypeInfo);
    byte_42AE219 = 1;
  }
  memset(&v77[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AEB684(v10);
  UseEntity = **(_QWORD **)(v10 + 184);
  if ( !UseEntity )
LABEL_61:
    sub_B52A5C(UseEntity, idList);
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)UseEntity,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  v14 = (System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)v13->static_fields->SvtSkillListMax);
  *idList = v14;
  sub_B52920((BattleServantConfConponent_o *)idList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_String_array *)sub_B5299C(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *skillNameList = v21;
  sub_B52920((BattleServantConfConponent_o *)skillNameList, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  if ( useUserSvtId )
  {
    v29 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v28 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v77, -1LL, 0LL);
    v29 = *(_OWORD *)&v77[0].fields.currentCryptoKey;
    v28 = *(_OWORD *)&v77[0].fields.fakeValue;
  }
  *(_OWORD *)&v77[1].fields.currentCryptoKey = v29;
  *(_OWORD *)&v77[1].fields.fakeValue = v28;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v76 = v77[1];
  p_userId = &this->fields.userId;
  v31 = 8LL;
  v32 = 32LL;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v76, 0LL);
  while ( 1 )
  {
    v33 = v31 - 8;
    v34 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v33 >= v34->static_fields->SvtSkillListMax )
      break;
    v35 = (SkillInfo_o *)sub_B52A54(SkillInfo_TypeInfo);
    SkillInfo___ctor(v35, 0LL);
    v37 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v78.fields.currentCryptoKey = v37;
    *(_QWORD *)&v78.fields.fakeValue = v36;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v78, 0LL);
    v39 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v40 = v38;
    *(_OWORD *)&v77[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v77[0].fields.fakeValue = v39;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v75 = v77[0];
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v75, 0LL);
    lv = this->fields.lv;
    v43 = v41;
    UseEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_61;
    UseEntity = (__int64)ServantSkillMaster__getUseEntity(
                           MasterData_WarQuestSelectionMaster,
                           v40,
                           (int)v31 - 7,
                           v43,
                           lv,
                           UseEntity,
                           -1,
                           -1,
                           -1,
                           userSvtId,
                           0,
                           0LL);
    if ( UseEntity )
    {
      v44 = *idList;
      if ( !*idList )
        goto LABEL_61;
      if ( v33 >= v44->max_length )
        goto LABEL_62;
      *((_DWORD *)&v44->obj.klass + v31) = *(_DWORD *)(UseEntity + 28);
      v45 = *skillNameList;
      UseEntity = (__int64)ServantSkillEntity__getSkillName((ServantSkillEntity_o *)UseEntity, 0LL);
      if ( !v45 )
        goto LABEL_61;
      v52 = (System_Int32_array **)UseEntity;
      if ( UseEntity )
      {
        UseEntity = sub_B52A44(UseEntity, v45->obj.klass->_1.element_class);
        if ( !UseEntity )
          goto LABEL_63;
      }
      if ( v33 >= v45->max_length )
        goto LABEL_62;
      v53 = (BattleServantConfConponent_o *)((char *)v45 + v32);
LABEL_40:
      v53->klass = (BattleServantConfConponent_c *)v52;
      sub_B52920(v53, v52, v46, v47, v48, v49, v50, v51);
      goto LABEL_41;
    }
    v55 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v54 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v79.fields.currentCryptoKey = v55;
    *(_QWORD *)&v79.fields.fakeValue = v54;
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v79, 0LL);
    v57 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v58 = v56;
    *(_OWORD *)&v77[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v77[0].fields.fakeValue = v57;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v74 = v77[0];
    v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v74, 0LL);
    v60 = ServantSkillMaster__getUseEntity(
            MasterData_WarQuestSelectionMaster,
            v58,
            (int)v31 - 7,
            v59,
            targetLv,
            targetLimitCnt,
            -1,
            -1,
            -1,
            -1LL,
            0,
            0LL);
    if ( v60 )
    {
      v61 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v62 = v60;
      *(_OWORD *)&v77[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
      *(_OWORD *)&v77[0].fields.fakeValue = v61;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v73 = v77[0];
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v73, 0LL);
      UseEntity = ServantSkillEntity__isUse(v62, v63, targetLv, targetLimitCnt, -1, -1, -1, -1LL, 0LL);
      if ( (UseEntity & 1) != 0 )
      {
        v64 = *idList;
        if ( !*idList )
          goto LABEL_61;
        if ( v33 >= v64->max_length )
        {
LABEL_62:
          v66 = sub_B52A88(UseEntity);
          sub_B52A28(v66, 0LL);
        }
        *((_DWORD *)&v64->obj.klass + v31) = v62->fields.skillId;
        v65 = *skillNameList;
        UseEntity = (__int64)ServantSkillEntity__getSkillName(v62, 0LL);
        if ( !v65 )
          goto LABEL_61;
        v52 = (System_Int32_array **)UseEntity;
        if ( UseEntity )
        {
          UseEntity = sub_B52A44(UseEntity, v65->obj.klass->_1.element_class);
          if ( !UseEntity )
          {
LABEL_63:
            v67 = sub_B52A7C();
            sub_B52A28(v67, 0LL);
          }
        }
        if ( v33 >= v65->max_length )
          goto LABEL_62;
        v53 = (BattleServantConfConponent_o *)((char *)v65 + v32);
        goto LABEL_40;
      }
    }
LABEL_41:
    ++v31;
    v32 += 8LL;
  }
}


void __fastcall UserServantEntity__getPassiveSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v10; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x24
  __int128 v12; // q1
  int64_t v13; // x25
  __int64 v14; // x19
  __int64 v15; // x20
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  int32_t friendshipRank; // w24
  __int64 v19; // x19
  __int64 v20; // x19
  WarQuestSelectionMaster_o *v21; // x0
  __int64 v22; // x26
  __int64 v23; // x27
  ServantPassiveSkillMaster_o *v24; // x25
  int32_t v25; // w0
  __int128 v26; // q0
  int32_t v27; // w26
  int64_t v28; // x28
  int32_t lv; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x19
  BattleServantConfConponent_o *v31; // x28
  char v32; // w23
  BalanceConfig_c *v33; // x0
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
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  WarQuestSelectionMaster_o *v55; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x25
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int v63; // w8
  void *v64; // x26
  int i; // w24
  __int64 v66; // x8
  int32_t v67; // w27
  int64_t UserId; // x28
  __int64 v69; // x19
  __int64 v70; // x20
  int32_t v71; // w4
  int32_t BuddyPoint; // w28
  __int64 v73; // x19
  __int64 v74; // x20
  int32_t v75; // w3
  __int64 v76; // x19
  __int64 v77; // x8
  unsigned __int64 v78; // x20
  System_Int32_array *v79; // x8
  int max_length; // w9
  unsigned int v81; // w10
  __int64 v82; // x27
  char *v83; // x10
  _DWORD *v84; // x10
  int v85; // t1
  System_String_array *v86; // x8
  System_String_array *v87; // x9
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 v100; // x0
  EventServantPointRankMaster_o *v101; // [xsp+28h] [xbp-E8h]
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // [xsp+30h] [xbp-E0h]
  System_String_array **explanationLista; // [xsp+38h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+90h] [xbp-80h]
  UserEventServantPointEntity_o *entity; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_42AE21A & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    byte_42AE21A = 1;
  }
  explanationLista = explanationList;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v12 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v108.fields.fakeValue = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v107 = v108;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v107, 0LL);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v110.fields.currentCryptoKey = v15;
  *(_QWORD *)&v110.fields.fakeValue = v14;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v110, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_87;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(
               MasterData_WarQuestSelectionMaster,
               v13,
               (int32_t)Instance,
               v16);
  if ( !Instance )
    goto LABEL_87;
  friendshipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, v10);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v17);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v20 = **(_QWORD **)(v19 + 192);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AEB684(v20);
  Instance = **(void ***)(v20 + 184);
  if ( !Instance )
    goto LABEL_87;
  v21 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v24 = (ServantPassiveSkillMaster_o *)v21;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v111.fields.currentCryptoKey = v23;
  *(_QWORD *)&v111.fields.fakeValue = v22;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v111, 0LL);
  v26 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v27 = v25;
  *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v108.fields.fakeValue = v26;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v106 = v108;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v106, 0LL);
  lv = this->fields.lv;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
  if ( !v24 )
    goto LABEL_87;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v24,
    idList,
    titleList,
    explanationLista,
    v27,
    v28,
    lv,
    (int32_t)Instance,
    dispLimitCount,
    friendshipRank,
    -1,
    1,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.svtId, 0LL);
  if ( !v30 )
    goto LABEL_87;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v30,
               (int32_t)Instance,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v31 = (BattleServantConfConponent_o *)explanationLista;
  if ( !Instance )
    goto LABEL_87;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  if ( *idList )
  {
    v32 = 0;
  }
  else
  {
    v33 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    v34 = (System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)v33->static_fields->SvtPassiveSkillListMax);
    *idList = v34;
    sub_B52920((BattleServantConfConponent_o *)idList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    v41 = (System_String_array *)sub_B5299C(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v41;
    sub_B52920((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
    v48 = (System_Int32_array **)sub_B5299C(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationLista = (System_String_array *)v48;
    sub_B52920((BattleServantConfConponent_o *)explanationLista, v48, v49, v50, v51, v52, v53, v54);
    v32 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v55 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL)) == 0LL )
LABEL_87:
    sub_B52A5C(Instance, v10);
  v63 = *((_DWORD *)Instance + 6);
  v64 = Instance;
  if ( v63 >= 1 )
  {
    v101 = (EventServantPointRankMaster_o *)v55;
    for ( i = 0; i < v63; ++i )
    {
      if ( i >= (unsigned int)v63 )
        goto LABEL_86;
      v66 = *((_QWORD *)v64 + i + 4);
      if ( !v66 )
        goto LABEL_87;
      v67 = *(_DWORD *)(v66 + 16);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v70 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v69 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v112.fields.currentCryptoKey = v70;
      *(_QWORD *)&v112.fields.fakeValue = v69;
      v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v112, 0LL);
      Instance = Master_WarQuestSelectionMaster;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_87;
      if ( UserEventServantPointMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, v67, v71, 0LL) )
      {
        Instance = entity;
        if ( !entity )
          goto LABEL_87;
        BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
      }
      else
      {
        BuddyPoint = 0;
      }
      v74 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v73 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v113.fields.currentCryptoKey = v74;
      *(_QWORD *)&v113.fields.fakeValue = v73;
      v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v113, 0LL);
      Instance = v101;
      if ( !v101 )
        goto LABEL_87;
      Instance = EventServantPointRankMaster__GetEnableEntity(v101, v67, BuddyPoint, v75, 0LL);
      if ( Instance )
      {
        v76 = *((_QWORD *)Instance + 4);
        v31 = (BattleServantConfConponent_o *)explanationLista;
        if ( !v76 )
          goto LABEL_87;
        v77 = *(_QWORD *)(v76 + 24);
        if ( (int)v77 >= 1 )
        {
          v78 = 0LL;
          while ( v78 < (unsigned int)v77 )
          {
            v79 = *idList;
            if ( !*idList )
              goto LABEL_87;
            max_length = v79->max_length;
            if ( max_length >= 1 )
            {
              v10 = (const MethodInfo *)*(unsigned int *)(v76 + 4 * v78 + 32);
              v81 = 0;
              while ( 1 )
              {
                if ( v81 >= max_length )
                  goto LABEL_86;
                v82 = (int)v81;
                v83 = (char *)v79 + 4 * (int)v81;
                v85 = *((_DWORD *)v83 + 8);
                v84 = v83 + 32;
                if ( !v85 )
                  break;
                v81 = v82 + 1;
                if ( (int)v82 + 1 >= max_length )
                  goto LABEL_79;
              }
              *v84 = (_DWORD)v10;
              if ( !v56 )
                goto LABEL_87;
              Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v56,
                           (int32_t)v10,
                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              v86 = *titleList;
              if ( !*titleList )
                goto LABEL_87;
              v87 = *explanationLista;
              if ( !*explanationLista || !Instance )
                goto LABEL_87;
              if ( (unsigned int)v82 >= v86->max_length || (unsigned int)v82 >= v87->max_length )
                break;
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Instance,
                &v86->m_Items[v82],
                &v87->m_Items[v82],
                0,
                0LL);
              v32 = 0;
            }
LABEL_79:
            LODWORD(v77) = *(_DWORD *)(v76 + 24);
            if ( (__int64)++v78 >= (int)v77 )
              goto LABEL_82;
          }
LABEL_86:
          v100 = sub_B52A88(Instance);
          sub_B52A28(v100, 0LL);
        }
      }
      else
      {
        v31 = (BattleServantConfConponent_o *)explanationLista;
      }
LABEL_82:
      v63 = *((_DWORD *)v64 + 6);
    }
  }
  if ( (v32 & 1) != 0 )
  {
    *idList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)idList, 0LL, v57, v58, v59, v60, v61, v62);
    *titleList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)titleList, 0LL, v88, v89, v90, v91, v92, v93);
    v31->klass = 0LL;
    sub_B52920(v31, 0LL, v94, v95, v96, v97, v98, v99);
  }
}


int32_t __fastcall UserServantEntity__getPortraitLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  const MethodInfo *v6; // x1
  bool v7; // vf

  result = UserServantEntity__GetLimitCountWithRandom(this, 4, ignoreRandomSettings, v3);
  if ( result <= 10 )
  {
    v7 = __OFSUB__(result--, 1);
    if ( result < 0 != v7 )
      return UserServantEntity__getMaxPortraitLimitCount(this, v6);
  }
  return result;
}


bool __fastcall UserServantEntity__getQuestRestriction(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  int32_t v10; // w23
  const MethodInfo *v11; // x2
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42AE22B & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE22B = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
  return QuestRestrictionInfo__IsRestriction_34151352(
           questRestrictionInfo,
           v9,
           v10,
           DispLimitCount,
           this->fields.lv,
           targetType,
           0LL);
}


int32_t __fastcall UserServantEntity__getRarity(UserServantEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  int32_t v9; // w0
  __int64 v10; // x8
  int32_t v11; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42AE250 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE250 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL);
  v10 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v14.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v11 = v9;
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
  if ( !v8 || (Instance = ServantLimitMaster__GetEntity(v8, v11, (int32_t)Instance, 0LL)) == 0LL )
LABEL_10:
    sub_B52A5C(Instance, v4);
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getRarityIcon(UserServantEntity_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  ServantExceedMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x1
  int32_t RarityIcon; // w20
  ServantLvDetailMaster_o *v8; // x21
  const MethodInfo *v9; // x1

  if ( (byte_42AE264 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE264 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v6),
        !MasterData_WarQuestSelectionMaster)
    || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                       MasterData_WarQuestSelectionMaster,
                       (int32_t)Instance,
                       this->fields.exceedCount,
                       0,
                       0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v8 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v9),
        !v8) )
  {
    sub_B52A5C(Instance, v4);
  }
  return ServantLvDetailMaster__GetRarityIcon(v8, (int32_t)Instance, this->fields.lv, RarityIcon, 0LL);
}


int32_t __fastcall UserServantEntity__getSellMana(UserServantEntity_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v10; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42AE234 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE234 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  if ( !v8
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (WebViewManager_o *)UserServantEntity__getMagnification(this, Entity, v10),
        !Entity) )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return Entity->fields.sellMana * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellQp(UserServantEntity_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v10; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42AE233 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE233 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  if ( !v8
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (WebViewManager_o *)UserServantEntity__getMagnification(this, Entity, v10),
        !Entity) )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return Entity->fields.sellQp * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellRarePri(UserServantEntity_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v10; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42AE235 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE235 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  if ( !v8
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (WebViewManager_o *)UserServantEntity__getMagnification(this, Entity, v10),
        !Entity) )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return Entity->fields.sellRarePri * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getServantExp(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.exp;
}


int32_t __fastcall UserServantEntity__getServantLevel(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantEntity__getSkillIdList(
        UserServantEntity_o *this,
        int32_t dispLimitCount,
        int32_t specificLimitCount,
        bool useUserSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x22
  ServantSkillEntity_o *UseEntity; // x0
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x22
  BalanceConfig_c *v11; // x8
  const MethodInfo *v12; // x2
  System_Int32_array *v13; // x23
  __int128 v14; // q0
  __int128 v15; // q1
  int64_t userSvtId; // x24
  signed __int64 v17; // x26
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w0
  __int128 v21; // q0
  int32_t v22; // w25
  int64_t v23; // x0
  int32_t lv; // w27
  int64_t v25; // x28
  unsigned __int64 v26; // x21
  BalanceConfig_c *v27; // x0
  __int64 v29; // x0
  int32_t v31; // [xsp+2Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34[2]; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v31 = dispLimitCount;
  if ( (byte_42AE216 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42AE216 = 1;
  }
  memset(&v34[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AEB684(v8);
  UseEntity = **(ServantSkillEntity_o ***)(v8 + 184);
  if ( !UseEntity )
LABEL_39:
    sub_B52A5C(UseEntity, *(_QWORD *)&dispLimitCount);
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)UseEntity,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v13 = (System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)v11->static_fields->SvtSkillListMax);
  if ( (v31 & 0x80000000) != 0 )
  {
    v31 = UserServantEntity__getDispLimitCount(this, 0, v12);
    if ( useUserSvtId )
      goto LABEL_13;
LABEL_15:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v34, -1LL, 0LL);
    v15 = *(_OWORD *)&v34[0].fields.currentCryptoKey;
    v14 = *(_OWORD *)&v34[0].fields.fakeValue;
    goto LABEL_19;
  }
  if ( !useUserSvtId )
    goto LABEL_15;
LABEL_13:
  v15 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  v14 = *(_OWORD *)&this->fields.id.fields.fakeValue;
LABEL_19:
  *(_OWORD *)&v34[1].fields.currentCryptoKey = v15;
  *(_OWORD *)&v34[1].fields.fakeValue = v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v33 = v34[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v33, 0LL);
  v17 = 0LL;
  while ( 1 )
  {
    v26 = v17;
    v27 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    if ( v17 >= v27->static_fields->SvtSkillListMax )
      return v13;
    v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v35.fields.currentCryptoKey = v19;
    *(_QWORD *)&v35.fields.fakeValue = v18;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v35, 0LL);
    v21 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v22 = v20;
    *(_OWORD *)&v34[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v34[0].fields.fakeValue = v21;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v32 = v34[0];
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v32, 0LL);
    lv = this->fields.lv;
    v25 = v23;
    UseEntity = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                          this->fields.limitCount,
                                          0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    v17 = v26 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  MasterData_WarQuestSelectionMaster,
                  v22,
                  (int)v26 + 1,
                  v25,
                  lv,
                  (int32_t)UseEntity,
                  v31,
                  -1,
                  specificLimitCount,
                  userSvtId,
                  0,
                  0LL);
    if ( UseEntity )
    {
      if ( !v13 )
        goto LABEL_39;
      if ( v26 >= v13->max_length )
      {
        v29 = sub_B52A88(UseEntity);
        sub_B52A28(v29, 0LL);
      }
      v13->m_Items[v26 + 1] = UseEntity->fields.skillId;
    }
  }
}


void __fastcall UserServantEntity__getSkillInfo(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        bool useUserSvtId,
        bool finishEvent,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 v12; // x19
  __int64 v13; // x19
  __int64 Instance; // x0
  WarQuestSelectionMaster_o *v15; // x0
  __int64 v16; // x20
  __int64 v17; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x19
  _BOOL4 IsServantEquip; // w22
  BalanceConfig_c *v20; // x0
  BalanceConfig_c *v21; // x0
  SkillInfo_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2
  __int128 v30; // q0
  __int128 v31; // q1
  unsigned __int64 v32; // x27
  __int64 v33; // x23
  SkillInfo_o *v34; // x26
  __int64 v35; // x19
  __int64 v36; // x20
  _BOOL4 v37; // w28
  int32_t v38; // w0
  __int128 v39; // q0
  int32_t v40; // w19
  int64_t v41; // x0
  int32_t lv; // w22
  int64_t v43; // x20
  int32_t v44; // w5
  signed __int64 v45; // x25
  ServantSkillEntity_o *v46; // x19
  int32_t skillNum; // w8
  __int64 v48; // x19
  __int64 v49; // x20
  int32_t v50; // w0
  SkillInfo_array *v51; // x19
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // [xsp+28h] [xbp-128h]
  __int64 v61; // [xsp+30h] [xbp-120h]
  bool v62; // [xsp+3Ch] [xbp-114h]
  signed __int64 v63; // [xsp+40h] [xbp-110h]
  int64_t userSvtId; // [xsp+48h] [xbp-108h]
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+68h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71[2]; // [xsp+B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_42AE217 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SkillInfo___TypeInfo);
    sub_B52984(&SkillInfo_TypeInfo);
    byte_42AE217 = 1;
  }
  memset(&v71[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AEB684(v13);
  Instance = **(_QWORD **)(v13 + 184);
  if ( !Instance )
    goto LABEL_63;
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  v15 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)v15;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v72.fields.currentCryptoKey = v17;
  *(_QWORD *)&v72.fields.fakeValue = v16;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v72, 0LL);
  if ( !v18 )
    goto LABEL_63;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v18,
                        Instance,
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_63;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  v61 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  if ( skillListNum > 0 )
  {
    if ( !IsServantEquip )
      goto LABEL_25;
    goto LABEL_21;
  }
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  skillListNum = v20->static_fields->SvtSkillListMax;
  if ( IsServantEquip )
  {
LABEL_21:
    v21 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    skillListNum = v21->static_fields->SvtEquipSkillListMax;
  }
LABEL_25:
  v22 = (SkillInfo_array *)sub_B5299C(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v22;
  sub_B52920((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v29);
    if ( useUserSvtId )
      goto LABEL_27;
  }
  else if ( useUserSvtId )
  {
LABEL_27:
    v31 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v30 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    goto LABEL_33;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v71, -1LL, 0LL);
  v31 = *(_OWORD *)&v71[0].fields.currentCryptoKey;
  v30 = *(_OWORD *)&v71[0].fields.fakeValue;
LABEL_33:
  *(_OWORD *)&v71[1].fields.currentCryptoKey = v31;
  *(_OWORD *)&v71[1].fields.fakeValue = v30;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v70 = v71[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v70, 0LL);
  if ( skillListNum >= 1 )
  {
    v63 = skillListNum;
    v32 = 0LL;
    v33 = 32LL;
    v60 = v61 + 32;
    v62 = finishEvent;
    while ( 1 )
    {
      v34 = (SkillInfo_o *)sub_B52A54(SkillInfo_TypeInfo);
      SkillInfo___ctor(v34, 0LL);
      v36 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v73.fields.currentCryptoKey = v36;
      *(_QWORD *)&v73.fields.fakeValue = v35;
      v37 = IsServantEquip;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v73, 0LL);
      v39 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v40 = v38;
      *(_OWORD *)&v71[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v71[0].fields.fakeValue = v39;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v69 = v71[0];
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v69, 0LL);
      lv = this->fields.lv;
      v43 = v41;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.limitCount, 0LL);
      Instance = (__int64)MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v45 = v32 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            MasterData_WarQuestSelectionMaster,
                            v40,
                            (int)v32 + 1,
                            v43,
                            lv,
                            v44,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            userSvtId,
                            v62,
                            0LL);
      if ( Instance )
      {
        if ( !v34 )
          break;
        v46 = (ServantSkillEntity_o *)Instance;
        v34->fields.id = *(_DWORD *)(Instance + 28);
        if ( !v61 )
          break;
        if ( v32 >= *(unsigned int *)(v61 + 24) )
          goto LABEL_64;
        v34->fields.lv = *(_DWORD *)(v60 + 4 * v32);
        if ( v32 >= *(unsigned int *)(v61 + 24) )
          goto LABEL_64;
        IsServantEquip = v37;
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v34->fields.charge,
          &v34->fields.title,
          &v34->fields.explanation,
          *(_DWORD *)(v60 + 4 * v32),
          v37,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v46, 0LL);
        v34->fields.strengthStatus = Instance;
        skillNum = v46->fields.skillNum;
        v34->fields.isUse = 1;
        v34->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v34 )
          break;
        IsServantEquip = v37;
        v34->fields.lv = -1;
        if ( !v37 )
        {
          v49 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v48 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v74.fields.currentCryptoKey = v49;
          *(_QWORD *)&v74.fields.fakeValue = v48;
          v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v74, 0LL);
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(
                                MasterData_WarQuestSelectionMaster,
                                v50,
                                v45,
                                0LL);
          if ( Instance )
          {
            v34->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v34->fields.title,
              &v34->fields.explanation,
              0LL);
          }
        }
      }
      v51 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_B52A44(v34, v51->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v59 = sub_B52A7C();
        sub_B52A28(v59, 0LL);
      }
      if ( v32 >= v51->max_length )
      {
LABEL_64:
        v58 = sub_B52A88(Instance);
        sub_B52A28(v58, 0LL);
      }
      *(Il2CppClass **)((char *)&v51->obj.klass + v33) = (Il2CppClass *)v34;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)v51 + v33),
        (System_Int32_array **)v34,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      v33 += 8LL;
      ++v32;
      if ( v45 >= v63 )
        return;
    }
LABEL_63:
    sub_B52A5C(Instance, skillInfoList);
  }
}


int32_t __fastcall UserServantEntity__getSkillLevel(UserServantEntity_o *this, int32_t iIdx, const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0

  if ( (byte_42AE214 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42AE214 = 1;
  }
  switch ( iIdx )
  {
    case 2:
      return this->fields.skillLv3;
    case 1:
      return this->fields.skillLv2;
    case 0:
      return this->fields.skillLv1;
  }
  if ( iIdx < 3 )
    return 0;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  return v6->static_fields->SvtEquipSkillListMax > iIdx;
}


System_Int32_array *__fastcall UserServantEntity__getSkillLevelList(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v7; // x19
  int32_t skillLv3; // w8
  __int64 v9; // x20
  unsigned __int64 v10; // x23
  __int64 v12; // x0

  if ( (byte_42AE215 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42AE215 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_B5299C(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
    sub_B52A5C(0LL, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = (System_Int32_array *)v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_18:
    v12 = sub_B52A88(v4);
    sub_B52A28(v12, 0LL);
  }
  skillLv3 = this->fields.skillLv3;
  v9 = 11LL;
  v4->_1.byval_arg.bits = skillLv3;
  while ( 1 )
  {
    v4 = BalanceConfig_TypeInfo;
    v10 = v9 - 8;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v10 >= v4->static_fields->SvtEquipSkillListMax )
      return v7;
    if ( v10 >= v7->max_length )
      goto LABEL_18;
    *((_DWORD *)&v7->obj.klass + v9++) = 1;
  }
}


void __fastcall UserServantEntity__getStatusUpInfo(
        UserServantEntity_o *this,
        int32_t *hpUp,
        int32_t *atkUp,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitMaster_o *v12; // x22
  int32_t v13; // w0
  __int64 v14; // x8
  int32_t v15; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42AE25E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE25E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
  v14 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v17.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL);
  if ( !v12 || (Instance = ServantLimitMaster__GetEntity(v12, v15, (int32_t)Instance, 0LL)) == 0LL )
LABEL_10:
    sub_B52A5C(Instance, v8);
  *hpUp = *((_DWORD *)Instance + 9);
  *atkUp = *((_DWORD *)Instance + 11);
}


int32_t __fastcall UserServantEntity__getSvtClassGroupType(
        UserServantEntity_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AE23C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE23C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     classId,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
  }
  return *((_DWORD *)Instance + 13);
}


int32_t __fastcall UserServantEntity__getSvtClassId(UserServantEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE23A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE23A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return *((_DWORD *)Instance + 20);
}


ServantExceedEntity_o *__fastcall UserServantEntity__getSvtExceedEnt(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  ServantExceedMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x1

  if ( (byte_42AE262 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE262 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v6),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B52A5C(Instance, v4);
  }
  return ServantExceedMaster__GetEntity(
           MasterData_WarQuestSelectionMaster,
           (int32_t)Instance,
           this->fields.exceedCount,
           0LL);
}


int32_t __fastcall UserServantEntity__getSvtId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_42AE212 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE212 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6, 0LL);
}


bool __fastcall UserServantEntity__getTreasureDeviceInfo(
        UserServantEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        bool isLvOne,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v11; // x24
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  int32_t FriendshipRank; // w25
  __int64 v22; // x24
  __int64 v23; // x24
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v26; // x26
  __int64 v27; // x27
  ServantTreasureDvcMaster_o *v28; // x24
  TreasureDvcInfo_o **v29; // x19
  int32_t v30; // w0
  __int128 v31; // q1
  int32_t v32; // w26
  int64_t v33; // x0
  int32_t lv; // w27
  int64_t v35; // x28
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int64 v37; // x21
  __int64 v38; // x22
  TreasureDvcInfo_o **v39; // x28
  int32_t v40; // w0
  __int128 v41; // q0
  int32_t v42; // w21
  int64_t v43; // x0
  ServantTreasureDvcEntity_o *v44; // x21
  WarQuestSelectionMaster_o *v45; // x0
  __int64 v46; // x23
  __int64 v47; // x24
  ServantFlagMaster_o *v48; // x22
  DataManager_o *v49; // x22
  WarQuestSelectionMaster_o *v50; // x0
  __int64 v51; // x24
  __int64 v52; // x25
  ServantFlagReleaseMaster_o *v53; // x23
  WarQuestSelectionMaster_o *v54; // x0
  __int64 v55; // x23
  __int64 v56; // x24
  ServantFlagMaster_o *v57; // x20
  TreasureDvcInfo_o *v58; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_42AE230 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantFlagMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TreasureDvcInfo_TypeInfo);
    byte_42AE230 = 1;
  }
  v11 = (TreasureDvcInfo_o *)sub_B52A54(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v11, 0LL);
  *tdInfo = v11;
  sub_B52920((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  FriendshipRank = UserServantEntity__getFriendshipRank(this, v18);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v20);
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v23 = **(_QWORD **)(v22 + 192);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_AEB684(v23);
  Instance = **(DataManager_o ***)(v23 + 184);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v27;
  *(_QWORD *)&v63.fields.fakeValue = v26;
  v29 = tdInfo;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v63, 0LL);
  v31 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v32 = v30;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v31;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v61 = v62;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v61, 0LL);
  lv = this->fields.lv;
  v35 = v33;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                this->fields.limitCount,
                                0LL);
  if ( !v28 )
    goto LABEL_53;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v28,
                v32,
                v35,
                lv,
                (int32_t)Instance,
                dispLimitCount,
                FriendshipRank,
                beforeClearQuestId,
                0LL);
  if ( isLvOne )
  {
    v38 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v37 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v39 = v29;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v64.fields.currentCryptoKey = v38;
    *(_QWORD *)&v64.fields.fakeValue = v37;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v64, 0LL);
    v41 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v42 = v40;
    *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v62.fields.fakeValue = v41;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v60 = v62;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v60, 0LL);
    v44 = ServantTreasureDvcMaster__getUseEntity(v28, v42, v43, 1, 0, 0, 0, -1, 0LL);
    if ( v44 )
    {
LABEL_25:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v45 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                Instance,
                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
        v47 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v46 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v48 = (ServantFlagMaster_o *)v45;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v65.fields.currentCryptoKey = v47;
        *(_QWORD *)&v65.fields.fakeValue = v46;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v65, 0LL);
        if ( v48 )
        {
          Instance = (DataManager_o *)ServantFlagMaster__getEntity(v48, (int32_t)Instance, 1, 0LL);
          if ( *v39 )
          {
            (*v39)->fields.id = v44->fields.treasureDeviceId;
            if ( *v39 )
            {
              v49 = Instance;
              (*v39)->fields.lv = this->fields.treasureDeviceLv1;
              if ( Instance )
              {
                Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_53;
                v50 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
                v52 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
                v51 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
                v53 = (ServantFlagReleaseMaster_o *)v50;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v66.fields.currentCryptoKey = v52;
                *(_QWORD *)&v66.fields.fakeValue = v51;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                              v66,
                                              0LL);
                if ( !v53 )
                  goto LABEL_53;
                Instance = (DataManager_o *)ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
                                              v53,
                                              (int32_t)Instance,
                                              *(_DWORD *)&v49->fields._DispLog,
                                              0LL);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                {
                  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_53;
                  v54 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                          Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
                  v56 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
                  v55 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
                  v57 = (ServantFlagMaster_o *)v54;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v67.fields.currentCryptoKey = v56;
                  *(_QWORD *)&v67.fields.fakeValue = v55;
                  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                v67,
                                                0LL);
                  if ( !v57 )
                    goto LABEL_53;
                  Instance = (DataManager_o *)ServantFlagMaster__getBeforeEnhanceTdId(
                                                v57,
                                                (int32_t)Instance,
                                                *(_DWORD *)&v49->fields._DispLog,
                                                0LL);
                  if ( (int)Instance >= 1 )
                  {
                    if ( !*v39 )
                      goto LABEL_53;
                    (*v39)->fields.id = (int)Instance;
                  }
                }
              }
              v58 = *v39;
              if ( *v39 )
              {
                Instance = (DataManager_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                              v44,
                                              &v58->fields.name,
                                              &v58->fields.explanation,
                                              &v58->fields.maxLv,
                                              &v58->fields.guageCount,
                                              &v58->fields.cardId,
                                              &v58->fields.strengthStatus,
                                              &v58->fields.treasureDeviceNum,
                                              v58->fields.lv,
                                              0LL);
                v58->fields.isUse = (unsigned __int8)Instance & 1;
                if ( *v39 )
                  return (*v39)->fields.isUse;
              }
            }
          }
        }
      }
LABEL_53:
      sub_B52A5C(Instance, v19);
    }
  }
  else
  {
    v44 = UseEntity;
    v39 = v29;
    if ( UseEntity )
      goto LABEL_25;
  }
  return 0;
}


bool __fastcall UserServantEntity__getTreasureDeviceInfo_21516452(
        UserServantEntity_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x22
  int treasureDeviceLv1; // w8
  int64_t UserId; // x22
  const MethodInfo *v15; // x2
  int32_t DispLimitCount; // w21
  WarQuestSelectionMaster_o *v17; // x0
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionMaster_o *v20; // x23
  const MethodInfo *v21; // x3
  int32_t v22; // w22
  __int64 v23; // x23
  __int64 v24; // x23
  ServantTreasureDvcMaster_o *v25; // x23
  int32_t v26; // w0
  __int128 v27; // q1
  int32_t v28; // w24
  int64_t v29; // x0
  __int64 v30; // x8
  int32_t lv; // w25
  int64_t v32; // x20
  ServantTreasureDvcEntity_o *UseEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42AE231 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE231 = 1;
  }
  *tdMaxLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v11;
  *(_QWORD *)&v37.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v37, 0LL);
  if ( !v12 )
    goto LABEL_34;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v12,
               (int32_t)Instance,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
  {
    LOBYTE(UseEntity) = 0;
    *tdLv = -1;
    return (char)UseEntity;
  }
  treasureDeviceLv1 = this->fields.treasureDeviceLv1;
  *tdLv = treasureDeviceLv1;
  if ( treasureDeviceLv1 < 1 )
  {
    LOBYTE(UseEntity) = 0;
    return (char)UseEntity;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  v17 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (UserServantCollectionMaster_o *)v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v19;
  *(_QWORD *)&v38.fields.fakeValue = v18;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v38, 0LL);
  if ( !v20 )
    goto LABEL_34;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v20, UserId, (int32_t)Instance, v21);
  if ( !Instance )
    goto LABEL_34;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 100),
          0LL);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v24 = **(_QWORD **)(v23 + 192);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AEB684(v24);
  Instance = **(void ***)(v24 + 184);
  if ( !Instance )
    goto LABEL_34;
  v25 = (ServantTreasureDvcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.svtId, 0LL);
  v27 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v28 = v26;
  *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v36.fields.fakeValue = v27;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v35 = v36;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v35, 0LL);
  v30 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v39.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  lv = this->fields.lv;
  v32 = v29;
  *(_QWORD *)&v39.fields.currentCryptoKey = v30;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v39, 0LL);
  if ( !v25 )
LABEL_34:
    sub_B52A5C(Instance, v8);
  UseEntity = ServantTreasureDvcMaster__getUseEntity(v25, v28, v32, lv, (int32_t)Instance, DispLimitCount, v22, -1, 0LL);
  if ( UseEntity )
  {
    *tdMaxLv = ServantTreasureDvcEntity__getLevelMax(UseEntity, 0LL);
    LOBYTE(UseEntity) = 1;
  }
  return (char)UseEntity;
}


int32_t __fastcall UserServantEntity__getTreasureDeviceLevelIcon(UserServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t tdMaxLv; // [xsp+8h] [xbp-8h] BYREF
  int32_t tdLv; // [xsp+Ch] [xbp-4h] BYREF

  tdLv = 0;
  tdMaxLv = 0;
  if ( !UserServantEntity__getTreasureDeviceInfo_21516452(this, &tdLv, &tdMaxLv, v2) )
    return 0;
  if ( tdLv >= tdMaxLv )
    return 2;
  return tdLv > 1;
}


int32_t __fastcall UserServantEntity__getTreasureDeviceLv(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.treasureDeviceLv1;
}


bool __fastcall UserServantEntity__getUniqueSvtRestriction(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42AE22C & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE22C = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_34155572(questRestrictionInfo, v7, 0LL);
}


bool __fastcall UserServantEntity__getUniqueSvtRestriction_21514228(
        UserServantEntity_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42AE22D & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE22D = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_34155796(questRestrictionInfo, v13, partyItem, num, partyIndex, 0LL);
}


ServantSkillEntity_array *__fastcall UserServantEntity__getUseSvtEqSkillInfo(
        UserServantEntity_o *this,
        int32_t targetLv,
        int32_t targetLimitCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x23
  __int64 v7; // x23
  DataManager_o *ServantSkillList; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x24
  __int64 v11; // x25
  ServantSkillMaster_o *v12; // x23
  int datalist; // w8
  DataManager_o *v14; // x23
  unsigned int v15; // w20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x19
  DataManager_c **v17; // x8
  ServantSkillEntity_o *v18; // x24
  __int128 v19; // q0
  int64_t v20; // x0
  int32_t lv; // w25
  __int64 v22; // x27
  __int64 v23; // x28
  int64_t v24; // x26
  int32_t v25; // w0
  __int128 v26; // q0
  int64_t v27; // x0
  __int64 v29; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // [xsp+10h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42AE249 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42AE249 = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AEB684(v7);
  ServantSkillList = **(DataManager_o ***)(v7 + 184);
  if ( !ServantSkillList )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         ServantSkillList,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v11;
  *(_QWORD *)&v36.fields.fakeValue = v10;
  ServantSkillList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v36, 0LL);
  if ( !v12 )
    goto LABEL_34;
  ServantSkillList = (DataManager_o *)ServantSkillMaster__getServantSkillList(v12, (int32_t)ServantSkillList, 0LL);
  if ( !ServantSkillList )
    goto LABEL_34;
  datalist = (int)ServantSkillList->fields.datalist;
  v14 = ServantSkillList;
  if ( datalist >= 1 )
  {
    v15 = 0;
    p_userId = &this->fields.userId;
    while ( 1 )
    {
      if ( v15 >= datalist )
      {
        v29 = sub_B52A88(ServantSkillList);
        sub_B52A28(v29, 0LL);
      }
      v17 = &v14->klass + (int)v15;
      v18 = (ServantSkillEntity_o *)v17[4];
      if ( !v18 )
        break;
      ServantSkillList = (DataManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v17[4], 0, 0LL);
      if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
      {
        v19 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v35.fields.fakeValue = v19;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v35;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v34, 0LL);
        lv = this->fields.lv;
        v23 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v22 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v24 = v20;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v37.fields.currentCryptoKey = v23;
        *(_QWORD *)&v37.fields.fakeValue = v22;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v37, 0LL);
        ServantSkillList = (DataManager_o *)ServantSkillEntity__isUse(v18, v24, lv, v25, -1, -1, -1, -1LL, 0LL);
        if ( ((unsigned __int8)ServantSkillList & 1) == 0 )
        {
          v26 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
          *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
          *(_OWORD *)&v35.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v33 = v35;
          v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v33, 0LL);
          ServantSkillList = (DataManager_o *)ServantSkillEntity__isUse(
                                                v18,
                                                v27,
                                                targetLv,
                                                targetLimitCnt,
                                                -1,
                                                -1,
                                                -1,
                                                -1LL,
                                                0LL);
          if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
          {
            ServantSkillList = (DataManager_o *)v30;
            if ( !v30 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v30,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
          }
        }
      }
      datalist = (int)v14->fields.datalist;
      if ( (int)++v15 >= datalist )
        goto LABEL_32;
    }
LABEL_34:
    sub_B52A5C(ServantSkillList, v5);
  }
LABEL_32:
  ServantSkillList = (DataManager_o *)v30;
  if ( !v30 )
    goto LABEL_34;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
}


UserCommandCodeEntity_o *__fastcall UserServantEntity__getUserCommandCodeEntity(
        UserServantEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v8; // q1
  UserServantCommandCodeMaster_o *v9; // x21
  int64_t v10; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  int64_t v13; // x20
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]
  UserServantCommandCodeEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42AE268 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE268 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v8 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v9 = (UserServantCommandCodeMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v17, 0LL);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
  if ( !v9 )
    goto LABEL_16;
  if ( UserServantCommandCodeMaster__TryGetEntity(v9, &entity, v13, (int)Instance, v14) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v15);
LABEL_16:
    sub_B52A5C(Instance, v6);
  }
  return 0LL;
}


int64_t __fastcall UserServantEntity__getUserId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-30h]

  if ( (byte_42AE211 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AE211 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v5, 0LL);
}


bool __fastcall UserServantEntity__get_IsRandomChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0

  if ( (byte_42AE20F & 1) == 0 )
  {
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    byte_42AE20F = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42AE27F )
  {
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    byte_42AE27F = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  return v3->static_fields->enableRandomLimitCount && UserServantEntity__IsEnableOwnRandomLimitCount(this, method);
}


bool __fastcall UserServantEntity__isAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AE24D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_B52984(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE24D = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
  }
  return this->fields.adjustAtk >= SLODWORD(Instance->fields.datalist);
}


bool __fastcall UserServantEntity__isAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AE24B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_B52984(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE24B = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
  }
  return this->fields.adjustHp >= *(_DWORD *)&Instance->fields._DispLog;
}


bool __fastcall UserServantEntity__isExceedFriendshipMax(UserServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  WarEntity_o *v9; // x20
  WarQuestSelectionMaster_o *v10; // x0
  __int128 v11; // q1
  UserServantCollectionMaster_o *v12; // x21
  int64_t v13; // x0
  __int64 v14; // x8
  int64_t v15; // x19
  const MethodInfo *v16; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-50h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42AE261 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE261 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v7;
  *(_QWORD *)&v22.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v22, 0LL);
  if ( !v8 )
    goto LABEL_18;
  v9 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         v8,
         (int32_t)Instance,
         (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v10 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v11 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v12 = (UserServantCollectionMaster_o *)v10;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v11;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v19, 0LL);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v23.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v23, 0LL);
  if ( !v12
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v12, v15, (int32_t)Instance, v16),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        !v9)
    || !EntityDefinitely
    || !Instance )
  {
LABEL_18:
    sub_B52A5C(Instance, v4);
  }
  return !FriendshipMaster__TryGetEntity(
            (FriendshipMaster_o *)Instance,
            &entity,
            v9->fields.eventId,
            v9->fields.lastQuestId + EntityDefinitely->fields.friendshipExceedCount + 1,
            0LL);
}


bool __fastcall UserServantEntity__isExceedLvMax(UserServantEntity_o *this, const MethodInfo *method)
{
  ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v4; // x1
  __int64 Rarity; // x0
  __int64 v6; // x1
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AE260 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42AE260 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  Rarity = UserServantEntity__getRarity(this, v4);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(Rarity, v6);
  return !ServantExceedMaster__TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            Rarity,
            this->fields.exceedCount + 1,
            0LL);
}


bool __fastcall UserServantEntity__isExceeded(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.exceedCount > 0;
}


bool __fastcall UserServantEntity__isLevelMax(UserServantEntity_o *this, const MethodInfo *method)
{
  return UserServantEntity__getLevelMax(this, method) == this->fields.lv;
}


bool __fastcall UserServantEntity__isLimitCountMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t LimitCntMax; // w0
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42AE240 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE240 = 1;
  }
  LimitCntMax = UserServantEntity__getLimitCntMax(this, method);
  v5 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v6 = LimitCntMax;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v4;
  return v6 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v8, 0LL);
}


bool __fastcall UserServantEntity__isSecondAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AE24E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_B52984(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE24E = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
  }
  return this->fields.adjustAtk == LODWORD(Instance->fields.lookup);
}


bool __fastcall UserServantEntity__isSecondAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AE24C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_B52984(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE24C = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
  }
  return this->fields.adjustHp == HIDWORD(Instance->fields.datalist);
}


void __fastcall UserServantEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE5B6 & 1) == 0 )
  {
    sub_B52984(&UserServantEntity___c_TypeInfo);
    byte_42AE5B6 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(UserServantEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserServantEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall UserServantEntity___c___ctor(UserServantEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserServantEntity___c___getBaseFriendPointUpType_b__52_0(
        UserServantEntity___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantEntity___c___getBaseFriendPointUpVal_b__51_0(
        UserServantEntity___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}