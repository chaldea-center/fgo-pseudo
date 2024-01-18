void __fastcall UserServantEntity___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall UserServantEntity___ctor(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185EBF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_long___ctor__, method);
    byte_4185EBF = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_24E3FD4 *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserServantEntity___ctor_21638868(
        UserServantEntity_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q1
  __int128 v8; // q1

  if ( (byte_4185EC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_long___ctor__, e);
    byte_4185EC0 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_24E3FD4 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_B2C434(v5, v6);
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


void __fastcall UserServantEntity___ctor_21639176(
        UserServantEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t userId; // x21
  __int128 v10; // q1
  int32_t maxLimitCount; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4185EC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_long___ctor__, e);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4185EC1 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_24E3FD4 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_B2C434(v7, v8);
  userId = e->fields.userId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v12, userId, 0LL);
  v10 = *(_OWORD *)&v12.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v12.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v10;
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

  if ( (byte_4185EBE & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4185EBE = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v5, 0LL);
}


bool __fastcall UserServantEntity__GetAdjustMax(
        UserServantEntity_o *this,
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

  if ( (byte_4185EFD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4185EFD = 1;
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
        Instance = (DataManager_o *)UserServantEntity__getRarity(this, v23),
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


void __fastcall UserServantEntity__GetAppendPassiveSkillInfo(
        UserServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v17; // x26
  __int64 v18; // x27
  ServantAppendPassiveSkillMaster_o *v19; // x25
  int32_t v20; // w0
  __int128 v21; // q1
  int32_t v22; // w26
  int64_t v23; // x0
  __int128 v24; // q0
  int64_t v25; // x27
  int64_t userSvtId; // x0
  __int64 v27; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4185F27 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, idList);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    byte_4185F27 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v18;
  *(_QWORD *)&v31.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v31, 0LL);
  v21 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v22 = v20;
  *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.fakeValue = v21;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v29 = v30;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v29, 0LL);
  v24 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v25 = v23;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v24;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v28, 0LL);
  if ( !v19 )
    sub_B2C434(userSvtId, v27);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v19,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v22,
    v25,
    userSvtId,
    0LL);
}


void __fastcall UserServantEntity__GetAppendPassiveSkillInfo_21681068(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  SkillInfo_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array *v16; // x8
  unsigned __int64 v17; // x21
  __int64 v18; // x22
  SkillInfo_o *v19; // x20
  SkillInfo_array *v20; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x0
  __int64 v28; // x0
  System_Int32_array *lvList; // [xsp+8h] [xbp-58h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-48h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-40h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4185F28 & 1) == 0 )
  {
    sub_B2C35C(&SkillInfo___TypeInfo, skillInfoList);
    sub_B2C35C(&SkillInfo_TypeInfo, v6);
    byte_4185F28 = 1;
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
    || (v9 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, idList->max_length),
        *skillInfoList = v9,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)skillInfoList,
          (System_Int32_array **)v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (v16 = idList) == 0LL) )
  {
LABEL_18:
    sub_B2C434(v7, v8);
  }
  v17 = 0LL;
  v18 = 32LL;
  while ( (__int64)v17 < (int)v16->max_length )
  {
    v19 = (SkillInfo_o *)sub_B2C42C(SkillInfo_TypeInfo);
    SkillInfo___ctor(v19, 0LL);
    if ( !idList )
      goto LABEL_18;
    if ( v17 >= idList->max_length )
    {
LABEL_20:
      v27 = sub_B2C460(v7);
      sub_B2C400(v27, 0LL);
    }
    if ( !v19 )
      goto LABEL_18;
    v19->fields.id = idList->m_Items[v17 + 1];
    if ( !lvList )
      goto LABEL_18;
    if ( v17 >= lvList->max_length )
      goto LABEL_20;
    v19->fields.lv = lvList->m_Items[v17 + 1];
    if ( !releaseStateList )
      goto LABEL_18;
    if ( v17 >= releaseStateList->max_length )
      goto LABEL_20;
    v19->fields.isUse = releaseStateList->m_Items[v17 + 4];
    v20 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_18;
    v7 = sub_B2C41C(v19, v20->obj.klass->_1.element_class);
    if ( !v7 )
    {
      v28 = sub_B2C454();
      sub_B2C400(v28, 0LL);
    }
    if ( v17 >= v20->max_length )
      goto LABEL_20;
    v20->m_Items[v17] = v19;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)((char *)v20 + v18),
      (System_Int32_array **)v19,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v16 = idList;
    ++v17;
    v18 += 8LL;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 id; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x23
  __int64 v16; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x21
  ServantEntity_o *Entity; // x23
  SkillLvMaster_o *v19; // x21
  const MethodInfo *v20; // x5
  const MethodInfo *v21; // x7
  unsigned __int64 v22; // x25
  char v23; // w24
  SkillLvEntity_o *v24; // x0
  BalanceConfig_c *v25; // x8
  int32_t *p_SvtEquipSkillListMax; // x8
  signed __int64 v27; // x22
  unsigned __int64 v28; // x23
  SkillInfo_o *v29; // x8
  int32_t lv; // w2
  __int64 v32; // x0
  SkillInfo_array *v33; // [xsp+0h] [xbp-60h] BYREF
  System_String_array *explanationList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4185EDD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4185EDD = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v33 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v16;
  *(_QWORD *)&v37.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v37, 0LL);
  if ( !v17 )
    goto LABEL_47;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v17,
                                (int32_t)Instance,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v19 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v20);
  if ( idList )
  {
    v22 = 0LL;
    v23 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v22 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
        break;
      if ( !idList )
        goto LABEL_47;
      if ( v22 >= idList->max_length )
      {
LABEL_48:
        v32 = sub_B2C460(Instance);
        sub_B2C400(v32, 0LL);
      }
      id = (unsigned int)idList->m_Items[v22 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v19 )
          goto LABEL_47;
        v24 = SkillLvMaster__GetEntity(v19, id, 1, 0LL);
        if ( v24 && SkillLvEntity__GetBonusUpVal(v24, eventUpVallInfo, questPhaseEntity, 0LL) )
          v23 = 1;
      }
      ++v22;
    }
  }
  else
  {
    v23 = 0;
  }
  UserServantEntity__getSkillInfo(this, &v33, -1, -1, 1, 0, -1, v21);
  if ( !Entity )
LABEL_47:
    sub_B2C434(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip(Entity, 0LL);
  v25 = BalanceConfig_TypeInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v25->static_fields->SvtEquipSkillListMax;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v25->static_fields->SvtSkillListMax;
  }
  v27 = *p_SvtEquipSkillListMax;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    while ( v33 )
    {
      if ( v28 >= v33->max_length )
        goto LABEL_48;
      v29 = v33->m_Items[v28];
      if ( v29 )
      {
        id = (unsigned int)v29->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v29->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v19 )
              goto LABEL_47;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity(v19, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__GetBonusUpVal(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            questPhaseEntity,
                                            0LL);
              v23 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( (__int64)++v28 >= v27 )
        return v23 & 1;
    }
    goto LABEL_47;
  }
  return v23 & 1;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x25
  __int64 v18; // x26
  int32_t v19; // w25
  int32_t v20; // w26
  const MethodInfo *v21; // x2
  int32_t DispLimitCount; // w27
  EventUpValInfo_o *v23; // x28
  EventUpValInfo_o **v24; // x25
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  DataManager_o *Instance; // x0
  int64_t v32; // x1
  QuestPhaseEntity_o *v33; // x22
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  unsigned __int64 v37; // x26
  char v38; // w27
  UserServantEntity_o *v39; // x21
  EventUpValInfo_o *v40; // x19
  __int64 v41; // x24
  Il2CppObject *lockCountObj; // x25
  const MethodInfo *v43; // x3
  __int64 v45; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4185EDC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, eventUpVallInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B2C35C(&EventUpValInfo_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4185EDC = 1;
  }
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v18;
  *(_QWORD *)&v47.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v21);
  v23 = (EventUpValInfo_o *)sub_B2C42C(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v23, setupInfo, v19, v20, DispLimitCount, 0, 0LL);
  v24 = eventUpVallInfo;
  *eventUpVallInfo = v23;
  sub_B2C2F8((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v23, v25, v26, v27, v28, v29, v30);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Instance )
    return (unsigned __int8)Instance & 1;
  v33 = (QuestPhaseEntity_o *)Instance;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_B2C434(Instance, v32);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(this, eventUpVallInfo, v33, v35);
  if ( equipIds )
  {
    v36 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v36 >= 1 )
    {
      v37 = 0LL;
      v38 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v37 >= (unsigned int)v36 )
        {
          v45 = sub_B2C460(Instance);
          sub_B2C400(v45, 0LL);
        }
        v32 = equipIds->m_Items[v37];
        if ( v32 >= 1 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_26;
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v32,
                                        (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Instance )
            goto LABEL_26;
          v39 = (UserServantEntity_o *)Instance;
          v40 = *v24;
          lockCountObj = Instance->fields.lockCountObj;
          v41 = *(_QWORD *)&Instance->fields.nowLoadCount;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v48.fields.currentCryptoKey = lockCountObj;
          *(_QWORD *)&v48.fields.fakeValue = v41;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v48, 0LL);
          if ( !v40 )
            goto LABEL_26;
          v24 = eventUpVallInfo;
          v40->fields.equipSvtId = (int)Instance;
          Instance = (DataManager_o *)UserServantEntity__GetBaseBonusUpVal(v39, eventUpVallInfo, v33, v43);
          LODWORD(v36) = equipIds->max_length;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v38 = 1;
        }
        ++v37;
      }
      while ( (__int64)v37 < (int)v36 );
      LOBYTE(Instance) = v38;
    }
  }
  return (unsigned __int8)Instance & 1;
}


System_Int32_array *__fastcall UserServantEntity__GetCategoryIdList(
        UserServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  __int64 v21; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x20
  unsigned __int64 v23; // x27
  SkillInfo_o *v24; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v26; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x24
  unsigned __int64 v29; // x21
  unsigned __int64 max_length; // x9
  DataVals_o *v31; // x25
  int32_t v32; // w1
  int32_t Param; // w26
  int32_t v34; // w1
  int32_t v35; // w0
  System_Collections_Generic_HashSet_int__o *v36; // x19
  _BOOL8 v37; // x0
  __int64 v38; // x1
  _BOOL8 v39; // x0
  __int64 v40; // x1
  __int64 count; // x1
  System_Int32_array *v42; // x20
  __int64 v44; // x0
  System_Collections_Generic_HashSet_int__o *v45; // [xsp+0h] [xbp-B0h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v47; // [xsp+10h] [xbp-A0h] BYREF
  WarEntity_o *v48; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v49; // [xsp+30h] [xbp-80h] BYREF
  SkillLvEntity_o *v50; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4185F2A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__CopyTo___67287864, v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v14);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_B2C35C(&int___TypeInfo, v17);
    byte_4185F2A = 1;
  }
  v50 = 0LL;
  entity = 0LL;
  v48 = 0LL;
  memset(&v49, 0, sizeof(v49));
  v45 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v45,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_55;
  v21 = *(_QWORD *)&enableSkillInfoList->max_length;
  v22 = DataValsList;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    do
    {
      if ( v23 >= (unsigned int)v21 )
      {
LABEL_56:
        v44 = sub_B2C460(DataValsList);
        sub_B2C400(v44, 0LL);
      }
      v24 = enableSkillInfoList->m_Items[v23];
      if ( v24 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v24->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v24->fields.lv;
          if ( lv >= 1 )
          {
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_55;
            DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvMaster__GetEntity(
                                                                            Master_WarQuestSelectionMaster,
                                                                            (int32_t)id,
                                                                            lv,
                                                                            0LL);
            if ( DataValsList )
            {
              id = (System_Collections_Generic_IEnumerable_T__o *)DataValsList->fields.list;
              v26 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)v45;
                if ( !v45 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v45,
                  id,
                  (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvEntity__getDataValsList(v26, 0LL);
                funcId = v26->fields.funcId;
                if ( !funcId )
                  goto LABEL_55;
                v28 = DataValsList;
                v29 = 0LL;
                p_list = &DataValsList->fields.list;
                while ( 1 )
                {
                  max_length = funcId->max_length;
                  if ( (__int64)v29 >= (int)max_length )
                    break;
                  if ( v29 >= max_length )
                    goto LABEL_56;
                  if ( !v22 )
                    goto LABEL_55;
                  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v22,
                                                                                  &entity,
                                                                                  funcId->m_Items[v29 + 1],
                                                                                  (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_55;
                    DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)FuncList__isAddState(
                                                                                    (int32_t)entity->fields.age,
                                                                                    0LL);
                    if ( ((unsigned __int8)DataValsList & 1) != 0 )
                    {
                      if ( !v28 )
                        goto LABEL_55;
                      if ( v29 >= LODWORD(v28->fields._MasterName_k__BackingField) )
                        goto LABEL_56;
                      if ( !entity )
                        goto LABEL_55;
                      v31 = (DataVals_o *)p_list[v29];
                      if ( !v31 )
                        goto LABEL_55;
                      DataVals__SetTempType(
                        (DataVals_o *)p_list[v29],
                        (FunctionMaster_o *)v22,
                        (int32_t)entity->fields.age,
                        0LL);
                      if ( DataVals__isParam(v31, 26, 0LL) )
                        v32 = 26;
                      else
                        v32 = 3;
                      Param = DataVals__GetParam(v31, v32, 0, 0LL);
                      if ( DataVals__isParam(v31, 27, 0LL) )
                        v34 = 27;
                      else
                        v34 = 4;
                      v35 = DataVals__GetParam(v31, v34, 0, 0LL);
                      DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvMaster__TryGetEntity(
                                                                                      Master_WarQuestSelectionMaster,
                                                                                      &v50,
                                                                                      Param,
                                                                                      v35,
                                                                                      0LL);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v50 )
                          goto LABEL_55;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v50->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v45,
                            id,
                            (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                      }
                    }
                  }
                  funcId = v26->fields.funcId;
                  ++v29;
                  if ( !funcId )
                    goto LABEL_55;
                }
              }
            }
          }
        }
      }
      LODWORD(v21) = enableSkillInfoList->max_length;
    }
    while ( (__int64)++v23 < (int)v21 );
  }
  v36 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v36,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)v45;
  if ( !v45 )
    goto LABEL_55;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v47,
    v45,
    (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v49 = v47;
  while ( 1 )
  {
    v37 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v49,
            (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v37 )
      break;
    if ( !v22 )
      sub_B2C434(v37, v38);
    v39 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v22,
            &v48,
            (int32_t)v49.fields._current,
            (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v39 )
    {
      if ( !v48 )
        sub_B2C434(v39, v40);
      if ( !v36 )
        sub_B2C434(v39, v40);
      System_Collections_Generic_HashSet_int___Add(
        v36,
        HIDWORD(v48->fields.emptyMessage),
        (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v49,
    (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v36 )
LABEL_55:
    sub_B2C434(DataValsList, id);
  count = (unsigned int)v36->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v42 = (System_Int32_array *)sub_B2C374(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_47736232(
    v36,
    v42,
    (const MethodInfo_2D865A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___67287864);
  return v42;
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


System_Int32_array *__fastcall UserServantEntity__GetEquipCategoryIdList(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x20
  DataManager_o *v8; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x20
  System_Int32_array *result; // x0
  const MethodInfo *v14; // x3
  bool IsKeepServantEquip; // w8
  UserServantEntity_o *v16; // x0
  const MethodInfo *v17; // x2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4185F1E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_4185F1E = 1;
  }
  skillInfoList = 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AC505C(v7);
  v8 = **(DataManager_o ***)(v7 + 184);
  if ( !v8 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v8,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  v8 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  if ( !v12 )
LABEL_18:
    sub_B2C434(v8, method);
  result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v12,
                                   (int32_t)v8,
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsKeepServantEquip )
    {
      UserServantEntity__getEquipSkillInfo(this, &skillInfoList, 1, v14);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v16, skillInfoList, v17);
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
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t ChoiceLimitCount; // w0
  int32_t v10; // w19
  BalanceConfig_c *v11; // x0
  __int64 v13; // x19
  __int64 v14; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4185EC3 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v8);
    byte_4185EC3 = 1;
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
    v10 = ChoiceLimitCount;
    if ( ((1 << kind) & 0x16) != 0 )
    {
      v11 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v11 = BalanceConfig_TypeInfo;
      }
      return v10 - (v10 == v11->static_fields->ServantLimitMax);
    }
    return v10;
  }
  switch ( kind )
  {
    case 0:
      v14 = *(_QWORD *)&this->fields.imageLimitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.imageLimitCount.fields.fakeValue;
      break;
    case 1:
      v14 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
      break;
    case 2:
      v14 = *(_QWORD *)&this->fields.commandCardLimitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.commandCardLimitCount.fields.fakeValue;
      break;
    case 3:
      v14 = *(_QWORD *)&this->fields.iconLimitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.iconLimitCount.fields.fakeValue;
      break;
    case 4:
      v14 = *(_QWORD *)&this->fields.portraitLimitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.portraitLimitCount.fields.fakeValue;
      break;
    default:
      return -1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v14;
  *(_QWORD *)&v15.fields.fakeValue = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
}


System_Int32_array *__fastcall UserServantEntity__GetRandomLimitCountList(
        UserServantEntity_o *this,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w0
  __int64 v15; // x8
  int32_t v16; // w20
  int32_t v17; // w21
  System_Int32_array *CardSelectList; // x19
  System_Collections_Generic_List_int__o *v19; // x20
  BalanceConfig_c *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  unsigned __int64 v23; // x21
  int32_t v24; // w25
  __int64 v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v3 = costumeIds;
  if ( (byte_4185F25 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, costumeIds);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4185F25 = 1;
  }
  if ( !v3 )
    v3 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v13;
  *(_QWORD *)&v27.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v27, 0LL);
  v15 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v28.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardSelectList = ImageLimitCount__GetCardSelectList(v16, v17, v3, 0LL);
  v19 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !CardSelectList )
    goto LABEL_29;
  v22 = *(_QWORD *)&CardSelectList->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    do
    {
      if ( v23 >= (unsigned int)v22 )
      {
        v26 = sub_B2C460(v20);
        sub_B2C400(v26, 0LL);
      }
      v24 = CardSelectList->m_Items[v23 + 1];
      if ( v24 == -1 )
      {
        v21 = 0xFFFFFFFFLL;
        if ( !v19 )
          goto LABEL_29;
      }
      else
      {
        v20 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v20 = BalanceConfig_TypeInfo;
        }
        if ( v24 >= v20->static_fields->ServantLimitMax )
          v21 = (unsigned int)v24;
        else
          v21 = (unsigned int)(v24 + 1);
        if ( !v19 )
          goto LABEL_29;
      }
      System_Collections_Generic_List_int___Add(
        v19,
        v21,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v22) = CardSelectList->max_length;
    }
    while ( (__int64)++v23 < (int)v22 );
  }
  if ( !v19 )
LABEL_29:
    sub_B2C434(v20, v21);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantEntity__GetSkillCategoryIdList(
        UserServantEntity_o *this,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_Int32_array *result; // x0
  const MethodInfo *v15; // x7
  bool IsServant; // w8
  UserServantEntity_o *v17; // x0
  const MethodInfo *v18; // x2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4185F2B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&skillListNum);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4185F2B = 1;
  }
  skillInfoList = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v10;
  *(_QWORD *)&v20.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v11,
                                   v12,
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsServant = ServantEntity__get_IsServant((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsServant )
    {
      UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, skillListNum, v15);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v17, skillInfoList, v18);
      else
        return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantEntity__GetTreasureDeviceCategoryIdList(
        UserServantEntity_o *this,
        bool isLvOne,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v26; // x22
  __int64 v27; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x21
  DataManager_o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x1
  ServantEntity_o *v31; // x0
  const MethodInfo *v32; // x2
  __int64 v33; // x21
  int32_t DispLimitCount; // w0
  const MethodInfo *v35; // x5
  __int64 v36; // x20
  __int64 v37; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v39; // x20
  __int64 v40; // x21
  TreasureDvcMaster_o *v41; // x19
  TreasureDvcEntity_o *v42; // x19
  TreasureDvcLvMaster_o *v43; // x20
  TreasureDvcLvEntity_o *v44; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // x19
  SkillLvMaster_o *v46; // x23
  System_Collections_Generic_HashSet_int__o *v47; // x27
  __int64 v48; // x8
  DataManager_o *v49; // x24
  unsigned __int64 v50; // x20
  unsigned __int64 v51; // x9
  DataVals_o *v52; // x25
  int32_t v53; // w1
  int32_t Param; // w26
  int32_t v55; // w1
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *v57; // x22
  int32_t v58; // w26
  int32_t v59; // w27
  void *v60; // x8
  System_Collections_Generic_HashSet_int__o *v61; // x20
  _BOOL8 v62; // x0
  __int64 v63; // x1
  _BOOL8 v64; // x0
  __int64 v65; // x1
  __int64 count; // x1
  __int64 v68; // x0
  TreasureDvcLvMaster_o *v69; // [xsp+0h] [xbp-C0h]
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v71; // [xsp+10h] [xbp-B0h] BYREF
  WarEntity_o *v72; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v73; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v74; // [xsp+48h] [xbp-78h] BYREF
  TreasureDvcLvEntity_o *v75; // [xsp+50h] [xbp-70h] BYREF
  SkillLvEntity_o *v76; // [xsp+58h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4185F2C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, isLvOne);
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__CopyTo___67287864, v16);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v19);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v20);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v21);
    sub_B2C35C(&int___TypeInfo, v22);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v24);
    byte_4185F2C = 1;
  }
  tdInfo = 0LL;
  v76 = 0LL;
  entity = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v72 = 0LL;
  memset(&v73, 0, sizeof(v73));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v79.fields.currentCryptoKey = v27;
  *(_QWORD *)&v79.fields.fakeValue = v26;
  DataValsList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v79, 0LL);
  if ( !v28 )
    goto LABEL_69;
  v31 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v28,
                             (int32_t)DataValsList,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v31 )
    return 0LL;
  v33 = 0LL;
  if ( ServantEntity__get_IsServant(v31, 0LL) )
  {
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v32);
    if ( !UserServantEntity__getTreasureDeviceInfo(this, &tdInfo, DispLimitCount, -1, isLvOne, v35) )
      return 0LL;
    v36 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v37 = **(_QWORD **)(v36 + 192);
    if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
      sub_AC505C(v37);
    DataValsList = **(DataManager_o ***)(v37 + 184);
    if ( !DataValsList )
      goto LABEL_69;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           DataValsList,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v40 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v41 = (TreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v80.fields.currentCryptoKey = v40;
    *(_QWORD *)&v80.fields.fakeValue = v39;
    DataValsList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v80, 0LL);
    if ( !tdInfo || !v41 )
      goto LABEL_69;
    v42 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v41, (int32_t)DataValsList, tdInfo->fields.id, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !v42 )
      goto LABEL_69;
    if ( !tdInfo )
      goto LABEL_69;
    v43 = (TreasureDvcLvMaster_o *)DataValsList;
    if ( !DataValsList )
      goto LABEL_69;
    v44 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, v42->fields.id, tdInfo->fields.lv, 0LL);
    v33 = (__int64)v44;
    if ( v44 )
    {
      if ( !v44->fields.funcId )
        return 0LL;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v69 = v43;
      v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
      v46 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
      v47 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v47,
        (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
      if ( !v47 )
        goto LABEL_69;
      System_Collections_Generic_HashSet_int___UnionWith(
        v47,
        *(System_Collections_Generic_IEnumerable_T__o **)(v33 + 32),
        (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      DataValsList = (DataManager_o *)TreasureDvcLvEntity__getDataValsList((TreasureDvcLvEntity_o *)v33, 100, 0LL);
      v48 = *(_QWORD *)(v33 + 32);
      if ( !v48 )
        goto LABEL_69;
      p_lookup = &DataValsList->fields.lookup;
      v49 = DataValsList;
      v50 = 0LL;
      while ( 1 )
      {
        v51 = *(unsigned int *)(v48 + 24);
        if ( (__int64)v50 >= (int)v51 )
        {
          v61 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor(
            v61,
            (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
          System_Collections_Generic_HashSet_int___GetEnumerator(
            &v71,
            v47,
            (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
          v73 = v71;
          while ( 1 )
          {
            v62 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                    &v73,
                    (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
            if ( !v62 )
              break;
            if ( !v45 )
              sub_B2C434(v62, v63);
            v64 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    v45,
                    &v72,
                    (int32_t)v73.fields._current,
                    (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
            if ( v64 )
            {
              if ( !v72 )
                sub_B2C434(v64, v65);
              if ( !v61 )
                sub_B2C434(v64, v65);
              System_Collections_Generic_HashSet_int___Add(
                v61,
                HIDWORD(v72->fields.emptyMessage),
                (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose(
            &v73,
            (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
          if ( v61 )
          {
            count = (unsigned int)v61->fields._count;
            if ( (int)count >= 1 )
            {
              v33 = sub_B2C374(int___TypeInfo, count);
              System_Collections_Generic_HashSet_int___CopyTo_47736232(
                v61,
                (System_Int32_array *)v33,
                (const MethodInfo_2D865A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___67287864);
              return (System_Int32_array *)v33;
            }
            return 0LL;
          }
LABEL_69:
          sub_B2C434(DataValsList, v30);
        }
        if ( v50 >= v51 )
          goto LABEL_82;
        if ( !v45 )
          goto LABEL_69;
        DataValsList = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          v45,
                                          &entity,
                                          *(_DWORD *)(v48 + 4 * v50 + 32),
                                          (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_69;
          DataValsList = (DataManager_o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v49 )
              goto LABEL_69;
            if ( v50 >= LODWORD(v49->fields.datalist) )
            {
LABEL_82:
              v68 = sub_B2C460(DataValsList);
              sub_B2C400(v68, 0LL);
            }
            if ( !entity )
              goto LABEL_69;
            v52 = (DataVals_o *)p_lookup[v50];
            if ( !v52 )
              goto LABEL_69;
            DataVals__SetTempType(
              (DataVals_o *)p_lookup[v50],
              (FunctionMaster_o *)v45,
              (int32_t)entity->fields.age,
              0LL);
            v53 = DataVals__isParam(v52, 26, 0LL) ? 26 : 3;
            Param = DataVals__GetParam(v52, v53, 0, 0LL);
            v55 = DataVals__isParam(v52, 27, 0LL) ? 27 : 4;
            DataValsList = (DataManager_o *)DataVals__GetParam(v52, v55, 0, 0LL);
            if ( !v46 )
              goto LABEL_69;
            DataValsList = (DataManager_o *)SkillLvMaster__TryGetEntity(v46, &v76, Param, (int32_t)DataValsList, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              if ( !v76 )
                goto LABEL_69;
              funcId = (System_Collections_Generic_IEnumerable_T__o *)v76->fields.funcId;
              if ( funcId )
                System_Collections_Generic_HashSet_int___UnionWith(
                  v47,
                  funcId,
                  (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
            DataValsList = (DataManager_o *)DataVals__isParam(v52, 92, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              DataValsList = (DataManager_o *)DataVals__isParam(v52, 93, 0LL);
              if ( ((unsigned __int8)DataValsList & 1) != 0 )
              {
                v57 = v47;
                v58 = DataVals__GetParam(v52, 92, 0, 0LL);
                v59 = DataVals__GetParam(v52, 93, 0, 0LL);
                if ( DataVals__isParam(v52, 95, 0LL) )
                {
                  DataValsList = (DataManager_o *)TreasureDvcLvMaster__TryGetEntity(v69, &v75, v58, v59, 0LL);
                  v47 = v57;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v60 = v75;
                    if ( !v75 )
                      goto LABEL_69;
LABEL_66:
                    v30 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v60 + 4);
                    if ( v30 )
                      System_Collections_Generic_HashSet_int___UnionWith(
                        v47,
                        v30,
                        (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                  }
                }
                else
                {
                  DataValsList = (DataManager_o *)SkillLvMaster__TryGetEntity(v46, &v74, v58, v59, 0LL);
                  v47 = v57;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v60 = v74;
                    if ( !v74 )
                      goto LABEL_69;
                    goto LABEL_66;
                  }
                }
              }
            }
          }
        }
        v48 = *(_QWORD *)(v33 + 32);
        ++v50;
        if ( !v48 )
          goto LABEL_69;
      }
    }
  }
  return (System_Int32_array *)v33;
}


UserServantCommandCardEntity_o *__fastcall UserServantEntity__GetUserCommandCardEntity(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x20
  DataManager_o *v8; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v10; // q1
  UserServantCommandCardMaster_o *v11; // x20
  int64_t v12; // x0
  __int64 v13; // x21
  __int64 v14; // x22
  int64_t v15; // x19
  const MethodInfo *v16; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-50h]
  UserServantCommandCardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4185F1C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_4185F1C = 1;
  }
  entity = 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AC505C(v7);
  v8 = **(DataManager_o ***)(v7 + 184);
  if ( !v8 )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v8,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  v10 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v11 = (UserServantCommandCardMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v18 = v19;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v18, 0LL);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v14;
  *(_QWORD *)&v21.fields.fakeValue = v13;
  v8 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v21, 0LL);
  if ( !v11 )
LABEL_16:
    sub_B2C434(v8, method);
  UserServantCommandCardMaster__TryGetEntity(v11, &entity, v15, (int)v8, v16);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185F21 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185F21 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 4) & 1;
}


bool __fastcall UserServantEntity__IsCombineExp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185F04 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185F04 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return ServantEntity__checkIsCombineMaterialSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCombineMaterial(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185EEE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EEE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsCondJoin(UserServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 6) & 1;
}


bool __fastcall UserServantEntity__IsEnableOwnRandomLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4185F22 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185F22 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL) == 1;
}


bool __fastcall UserServantEntity__IsEnableSupportRandomLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4185F23 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185F23 = 1;
  }
  v4 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.randomLimitCountSupport.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL) == 1;
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
  UserServantEntity__getTreasureDeviceInfo_21659764(this, &tdLv, &tdMaxLv, v3);
  return tdMaxLv < tdLv + targetLv;
}


bool __fastcall UserServantEntity__IsExchangeSvt(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  char i; // w22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int128 v16; // q1
  int64_t v17; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21[2]; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+88h] [xbp-38h] BYREF

  if ( (byte_4185F26 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCombineExpMaster___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4185F26 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  memset(&v21[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_21;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = 0; ; i |= HIDWORD(v22.fields.current[1].klass) == 27 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v14 )
      break;
    if ( !v22.fields.current )
      sub_B2C434(v14, v15);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (i & 1) == 0 )
  {
LABEL_18:
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCombineExpMaster___)) == 0LL )
  {
LABEL_21:
    sub_B2C434(Instance, v11);
  }
  UserCombineExpMaster__GetUserSvtId(v21, (UserCombineExpMaster_o *)Instance, 0LL);
  v21[1] = v21[0];
  v16 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v21[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21[0].fields.fakeValue = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v20 = v21[0];
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v20, 0LL);
  v19 = v21[1];
  if ( v17 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v19, 0LL) )
    goto LABEL_18;
  LOBYTE(CombineEventCampaigns) = 1;
  return (char)CombineEventCampaigns;
}


bool __fastcall UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185F1F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185F1F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return ServantEntity__get_IsFriendShipSvtEquip((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185EFA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EFA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsIgnoreCombineLimitSpecial(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185F20 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185F20 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return ServantEntity__get_IsIgnoreCombineLimitSpecial((ServantEntity_o *)Instance, 0LL);
}


bool __fastcall UserServantEntity__IsLeave(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185EF6 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, method);
    byte_4185EF6 = 1;
  }
  if ( !UserServantEntity__IsHeroine(this, method) )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28617756(126, 0LL);
}


bool __fastcall UserServantEntity__IsLock(UserServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.status & 1;
}


bool __fastcall UserServantEntity__IsMaterialTd(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185F29 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185F29 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__IsModifyBattleVoice(
        UserServantEntity_o *this,
        int32_t battleVoice,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4185F1D & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&battleVoice);
    byte_4185F1D = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8, 0LL) != battleVoice;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__IsModifyRandomLimitCountSetting(
        UserServantEntity_o *this,
        bool ownSetting,
        bool friendFollowSetting,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  char v7; // w8

  if ( ((UserServantEntity__IsEnableOwnRandomLimitCount(this, (const MethodInfo *)ownSetting) ^ ownSetting) & 1) != 0 )
    v7 = 1;
  else
    v7 = UserServantEntity__IsEnableSupportRandomLimitCount(this, v6) ^ friendFollowSetting;
  return v7 & 1;
}


bool __fastcall UserServantEntity__IsNew(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t UserId; // x0
  __int128 v6; // q1
  int64_t v7; // x20
  __int128 v8; // q0
  int64_t v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4185EF4 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_B2C35C(&UserServantNewManager_TypeInfo, v4);
    byte_4185EF4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v7 = UserId;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v13 = v14;
  if ( v7 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v13, 0LL) )
  {
    v8 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v14.fields.fakeValue = v8;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v12 = v14;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v12, 0LL);
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    }
    return UserServantNewManager__IsNew(v9, 0LL);
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
      sub_B2C434(0LL, v6);
    LOBYTE(EventServant) = EventServantEntity__IsProtectedDuringEvent(v5, 0LL);
  }
  return (char)EventServant;
}


bool __fastcall UserServantEntity__IsSetRandomLimitCountValue(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4185F24 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185F24 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL) > 0;
}


bool __fastcall UserServantEntity__IsStatusUp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185F05 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185F05 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
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

  if ( (byte_4185EE1 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4185EE1 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
  return QuestRestrictionInfo__IsUniqueIndividuality_31227040(questRestrictionInfo, v7, v8, DispLimitCount, 0LL);
}


bool __fastcall UserServantEntity__IsUniqueIndividualityRestriction_21657940(
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

  if ( (byte_4185EE2 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4185EE2 = 1;
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  return QuestRestrictionInfo__IsUniqueIndividuality_31227688(
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


void __fastcall UserServantEntity__SetOld(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int128 v4; // q1
  int64_t v5; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_4185EF5 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_B2C35C(&UserServantNewManager_TypeInfo, v3);
    byte_4185EF5 = 1;
  }
  v4 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v6, 0LL);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__SetOld(v5, 0LL);
}


bool __fastcall UserServantEntity__checkID(UserServantEntity_o *this, int64_t inId, const MethodInfo *method)
{
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_4185EE5 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, inId);
    byte_4185EE5 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v7, 0LL) == inId;
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
  UserServantEntity__getTreasureDeviceInfo_21659764(this, &tdLv, &tdMaxLv, v3);
  if ( tdLv + targetLv >= tdMaxLv )
    return tdMaxLv;
  else
    return tdLv + targetLv;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getAddTotalExp(
        UserServantEntity_o *this,
        int32_t materialId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_4185F19 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineMaster___, *(_QWORD *)&materialId);
    sub_B2C35C(&Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4185F19 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             materialId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *Instance; // x0
  __int64 v11; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v13; // x1
  int32_t v14; // w23
  _DWORD *v15; // x22
  BalanceConfig_c *v16; // x0
  int32_t v17; // w20
  BalanceConfig_c *v18; // x0

  if ( (byte_4185F02 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, hpData);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantRarityMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4185F02 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (void *)UserServantEntity__getRarity(this, v13),
        !MasterData_WarQuestSelectionMaster)
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v11);
  }
  v14 = *((_DWORD *)Instance + 5);
  v15 = Instance;
  v16 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustHp >= v14 )
    v14 = v15[7];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  *hpData = v16->static_fields->StatusUpAdjustHp * v14;
  v17 = v15[6];
  v18 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustAtk >= v17 )
    v17 = v15[8];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  *atkData = v18->static_fields->StatusUpAdjustAtk * v17;
}


SvtUseSkillData_o *__fastcall UserServantEntity__getAppendSkillInfo(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x20
  __int64 v12; // x22
  ServantAppendPassiveSkillMaster_o *v13; // x19
  int64_t v14; // x0
  __int64 v15; // x1
  SvtUseSkillData_o *SkillData; // x19
  WarQuestSelectionMaster_o *v17; // x0
  __int128 v18; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v19; // x20
  struct System_Int32_array *svtSkillNumsList; // x8
  System_Int32_array **v21; // x0
  struct System_Int32_array **p_svtSkillLvList; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  WarQuestSelectionMaster_o *v29; // x0
  __int128 v30; // q0
  UserServantAppendPassiveSkillMaster_o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x8
  int64_t v34; // x21
  const MethodInfo *v35; // x4
  struct System_Int32_array *unlockNums; // x8
  struct System_Int32_array *v37; // x10
  unsigned __int64 v38; // x8
  struct System_Int32_array *v39; // x10
  UserServantAppendPassiveSkillEntity_o *v40; // x11
  unsigned __int64 v41; // x10
  struct System_Int32_array *v42; // x12
  unsigned __int64 max_length; // x13
  struct System_Int32_array *v44; // x14
  struct System_Int32_array *v45; // x11
  UserServantEntity_o *v46; // x11
  __int64 v47; // x10
  __int64 v48; // x13
  unsigned __int64 v49; // x14
  unsigned __int64 v50; // x12
  struct System_Int32_array *v51; // x15
  __int64 v52; // x11
  struct System_Int32_array *v53; // x12
  struct System_Int32_array *v54; // x9
  unsigned __int64 v55; // x8
  struct System_Int32_array *v56; // x9
  __int64 v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+40h] [xbp-50h]
  UserServantAppendPassiveSkillEntity_o *v62; // [xsp+60h] [xbp-30h] BYREF
  UserServantEntity_o *entity; // [xsp+68h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4185ECE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v6);
    sub_B2C35C(&int___TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_4185ECE = 1;
  }
  v62 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v12;
  *(_QWORD *)&v64.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v64, 0LL);
  if ( !v13 )
    goto LABEL_62;
  SkillData = ServantAppendPassiveSkillMaster__GetSkillData(v13, v14, 0LL);
  v17 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  v18 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v19 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v17;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v60 = v61;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v60, 0LL);
  if ( !v19 )
    goto LABEL_62;
  v14 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          v19,
          &entity,
          v14,
          (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
  if ( !SkillData )
    goto LABEL_62;
  svtSkillNumsList = SkillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_62;
  v21 = (System_Int32_array **)sub_B2C374(int___TypeInfo, svtSkillNumsList->max_length);
  SkillData->fields.svtSkillLvList = (struct System_Int32_array *)v21;
  p_svtSkillLvList = &SkillData->fields.svtSkillLvList;
  sub_B2C2F8((BattleServantConfConponent_o *)&SkillData->fields.svtSkillLvList, v21, v23, v24, v25, v26, v27, v28);
  v29 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  v30 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v31 = (UserServantAppendPassiveSkillMaster_o *)v29;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v30;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v59, 0LL);
  v33 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v65.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v34 = v32;
  *(_QWORD *)&v65.fields.currentCryptoKey = v33;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v65, 0LL);
  if ( !v31 )
    goto LABEL_62;
  v14 = UserServantAppendPassiveSkillMaster__TryGetEntity(v31, &v62, v34, v14, v35);
  if ( (v14 & 1) != 0 )
  {
    if ( !v62 )
      goto LABEL_62;
    unlockNums = v62->fields.unlockNums;
    if ( !unlockNums )
      goto LABEL_62;
    if ( *(_QWORD *)&unlockNums->max_length )
    {
      v37 = SkillData->fields.svtSkillNumsList;
      if ( v37 )
      {
        v38 = 0LL;
        while ( 1 )
        {
          if ( (__int64)v38 >= (int)v37->max_length )
            return SkillData;
          v39 = *p_svtSkillLvList;
          if ( !*p_svtSkillLvList )
            goto LABEL_62;
          if ( v38 >= v39->max_length )
            goto LABEL_64;
          v39->m_Items[v38 + 1] = 0;
          v40 = v62;
          if ( !v62 )
            goto LABEL_62;
          v41 = 0LL;
          while ( 1 )
          {
            v42 = v40->fields.unlockNums;
            if ( !v42 )
              goto LABEL_62;
            max_length = v42->max_length;
            if ( (__int64)v41 >= (int)max_length )
              break;
            v44 = SkillData->fields.svtSkillNumsList;
            if ( !v44 )
              goto LABEL_62;
            if ( v38 >= v44->max_length || v41 >= max_length )
              goto LABEL_64;
            if ( v44->m_Items[v38 + 1] == v42->m_Items[v41 + 1] )
            {
              v45 = *p_svtSkillLvList;
              if ( !*p_svtSkillLvList )
                goto LABEL_62;
              if ( v38 >= v45->max_length )
                goto LABEL_64;
              v45->m_Items[v38 + 1] = 1;
              v40 = v62;
            }
            ++v41;
            if ( !v40 )
              goto LABEL_62;
          }
          v46 = entity;
          if ( entity )
            break;
LABEL_54:
          v37 = SkillData->fields.svtSkillNumsList;
          ++v38;
          if ( !v37 )
            goto LABEL_62;
        }
        v47 = 8LL;
        do
        {
          v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
          if ( !v48 )
            break;
          v49 = *(unsigned int *)(v48 + 24);
          v50 = v47 - 8;
          if ( v47 - 8 >= (int)v49 )
            goto LABEL_54;
          v51 = SkillData->fields.svtSkillNumsList;
          if ( !v51 )
            break;
          if ( v38 >= v51->max_length || v50 >= v49 )
            goto LABEL_64;
          if ( v51->m_Items[v38 + 1] == *(_DWORD *)(v48 + 4 * v47) )
          {
            v52 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
            if ( !v52 )
              break;
            if ( v50 >= *(unsigned int *)(v52 + 24) )
              goto LABEL_64;
            v53 = *p_svtSkillLvList;
            if ( !*p_svtSkillLvList )
              break;
            if ( v38 >= v53->max_length )
              goto LABEL_64;
            v53->m_Items[v38 + 1] = *(_DWORD *)(v52 + 4 * v47);
            v46 = entity;
          }
          ++v47;
        }
        while ( v46 );
      }
LABEL_62:
      sub_B2C434(v14, v15);
    }
  }
  v54 = SkillData->fields.svtSkillNumsList;
  if ( !v54 )
    goto LABEL_62;
  v55 = 0LL;
  while ( (__int64)v55 < (int)v54->max_length )
  {
    v56 = *p_svtSkillLvList;
    if ( *p_svtSkillLvList )
    {
      if ( v55 >= v56->max_length )
      {
LABEL_64:
        v58 = sub_B2C460(v14);
        sub_B2C400(v58, 0LL);
      }
      v56->m_Items[v55 + 1] = 0;
      v54 = SkillData->fields.svtSkillNumsList;
      ++v55;
      if ( v54 )
        continue;
    }
    goto LABEL_62;
  }
  return SkillData;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  __int64 id; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x27
  __int64 v23; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x26
  SkillLvMaster_o *v25; // x26
  const MethodInfo *v26; // x5
  const MethodInfo *v27; // x7
  unsigned __int64 v28; // x28
  bool v29; // w27
  SkillLvEntity_o *Entity; // x0
  unsigned __int64 v31; // x24
  SkillInfo_o *v32; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v34; // x0
  __int64 v36; // x0
  SkillInfo_array *skillInfoList; // [xsp+10h] [xbp-70h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-68h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4185ED9 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4185ED9 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v23;
  *(_QWORD *)&v42.fields.fakeValue = v22;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
  if ( !v24
    || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v24,
          (int32_t)Instance,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_38:
    sub_B2C434(Instance, id);
  }
  v25 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v26);
  if ( idList )
  {
    v28 = 0LL;
    v29 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v28 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
        break;
      if ( !idList )
        goto LABEL_38;
      if ( v28 >= idList->max_length )
      {
LABEL_39:
        v36 = sub_B2C460(Instance);
        sub_B2C400(v36, 0LL);
      }
      id = (unsigned int)idList->m_Items[v28 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v25 )
          goto LABEL_38;
        Entity = SkillLvMaster__GetEntity(v25, id, 1, 0LL);
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
            return v29;
          }
        }
      }
      ++v28;
    }
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, finishEvent, -1, v27);
  v31 = 0LL;
  v29 = 1;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v31 >= SLODWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
      return 0;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( v31 >= skillInfoList->max_length )
      goto LABEL_39;
    v32 = skillInfoList->m_Items[v31];
    if ( v32 )
    {
      id = (unsigned int)v32->fields.id;
      if ( (int)id >= 1 )
      {
        lv = v32->fields.lv;
        if ( lv >= 1 )
        {
          if ( !v25 )
            goto LABEL_38;
          v34 = SkillLvMaster__GetEntity(v25, id, lv, 0LL);
          if ( v34 )
          {
            if ( SkillLvEntity__getEventUpVal(
                   v34,
                   wearersSvtId,
                   wearesLimitCount,
                   wearesDispLimitCount,
                   setupInfo,
                   baseEventId,
                   1,
                   1,
                   0LL) )
            {
              return v29;
            }
          }
        }
      }
    }
    ++v31;
  }
}


bool __fastcall UserServantEntity__getBaseEventUpVal_21654836(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 id; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x22
  __int64 v14; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x20
  ServantEntity_o *Entity; // x22
  SkillLvMaster_o *v17; // x20
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x7
  unsigned __int64 v20; // x24
  char v21; // w23
  SkillLvEntity_o *v22; // x0
  BalanceConfig_c *v23; // x8
  int32_t *p_SvtEquipSkillListMax; // x8
  signed __int64 v25; // x21
  unsigned __int64 v26; // x22
  SkillInfo_o *v27; // x8
  int32_t lv; // w2
  __int64 v30; // x0
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4185EDB & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4185EDB = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v14;
  *(_QWORD *)&v35.fields.fakeValue = v13;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v35, 0LL);
  if ( !v15 )
    goto LABEL_47;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v15,
                                (int32_t)Instance,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v17 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v18);
  if ( idList )
  {
    v20 = 0LL;
    v21 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v20 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
        break;
      if ( !idList )
        goto LABEL_47;
      if ( v20 >= idList->max_length )
      {
LABEL_48:
        v30 = sub_B2C460(Instance);
        sub_B2C400(v30, 0LL);
      }
      id = (unsigned int)idList->m_Items[v20 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v17 )
          goto LABEL_47;
        v22 = SkillLvMaster__GetEntity(v17, id, 1, 0LL);
        if ( v22 && SkillLvEntity__getEventUpVal_23801352(v22, eventUpVallInfo, 1, 1, 0, 0, 0LL) )
          v21 = 1;
      }
      ++v20;
    }
  }
  else
  {
    v21 = 0;
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v19);
  if ( !Entity )
LABEL_47:
    sub_B2C434(Instance, id);
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip(Entity, 0LL);
  v23 = BalanceConfig_TypeInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v23->static_fields->SvtEquipSkillListMax;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v23->static_fields->SvtSkillListMax;
  }
  v25 = *p_SvtEquipSkillListMax;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( skillInfoList )
    {
      if ( v26 >= skillInfoList->max_length )
        goto LABEL_48;
      v27 = skillInfoList->m_Items[v26];
      if ( v27 )
      {
        id = (unsigned int)v27->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v27->fields.lv;
          if ( lv >= 1 )
          {
            if ( !v17 )
              goto LABEL_47;
            Instance = (DataManager_o *)SkillLvMaster__GetEntity(v17, id, lv, 0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)SkillLvEntity__getEventUpVal_23801352(
                                            (SkillLvEntity_o *)Instance,
                                            eventUpVallInfo,
                                            1,
                                            1,
                                            0,
                                            0,
                                            0LL);
              v21 |= (unsigned __int8)Instance;
            }
          }
        }
      }
      if ( (__int64)++v26 >= v25 )
        return v21 & 1;
    }
    goto LABEL_47;
  }
  return v21 & 1;
}


int32_t __fastcall UserServantEntity__getBaseFriendPointUpType(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x21
  __int64 v15; // x22
  ServantSkillMaster_o *v16; // x20
  BattleBuffData_BuffData_array *ServantSkillList; // x20
  UserServantEntity___c_c *v18; // x8
  struct UserServantEntity___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__52_0; // x21
  Il2CppObject *v21; // x22
  struct UserServantEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int max_length; // w8
  unsigned int v30; // w27
  Il2CppClass **v31; // x8
  ServantSkillEntity_o *v32; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v35; // x24
  __int64 v36; // x25
  int64_t v37; // x23
  int32_t v38; // w0
  const MethodInfo *v39; // x2
  int32_t SkillLevel; // w0
  const MethodInfo *v41; // x2
  int32_t v43; // w0
  __int64 v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4185ED2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_ServantSkillEntity___, method);
    sub_B2C35C(&Method_System_Comparison_ServantSkillEntity___ctor__, v3);
    sub_B2C35C(&System_Comparison_ServantSkillEntity__TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_UserServantEntity___c__getBaseFriendPointUpType_b__52_0__, v9);
    sub_B2C35C(&UserServantEntity___c_TypeInfo, v10);
    byte_4185ED2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v15;
  *(_QWORD *)&v45.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v45, 0LL);
  if ( !v16 )
    goto LABEL_34;
  ServantSkillList = (BattleBuffData_BuffData_array *)ServantSkillMaster__getServantSkillList(
                                                        v16,
                                                        (int32_t)Instance,
                                                        0LL);
  v18 = UserServantEntity___c_TypeInfo;
  if ( (BYTE3(UserServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v18 = UserServantEntity___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__52_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = UserServantEntity___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantSkillEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__52_0,
      v21,
      Method_UserServantEntity___c__getBaseFriendPointUpType_b__52_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantSkillEntity___ctor__);
    v22 = UserServantEntity___c_TypeInfo->static_fields;
    v22->__9__52_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__52_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v22->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    ServantSkillList,
    (System_Comparison_T__o *)_9__52_0,
    (const MethodInfo_23CBA5C *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !ServantSkillList )
    goto LABEL_34;
  max_length = ServantSkillList->max_length;
  if ( max_length < 1 )
    return 0;
  v30 = 0;
  while ( 1 )
  {
    if ( v30 >= max_length )
    {
      v44 = sub_B2C460(Instance);
      sub_B2C400(v44, 0LL);
    }
    v31 = &ServantSkillList->obj.klass + (int)v30;
    v32 = (ServantSkillEntity_o *)v31[4];
    if ( !v32 )
      goto LABEL_34;
    Instance = (DataManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v31[4], 0, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      lv = this->fields.lv;
      v36 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v35 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v37 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v46.fields.currentCryptoKey = v36;
      *(_QWORD *)&v46.fields.fakeValue = v35;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v46, 0LL);
      Instance = (DataManager_o *)ServantSkillEntity__isUse(v32, v37, lv, v38, -1, -1, -1, -1LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        SkillLevel = UserServantEntity__getSkillLevel(this, v32->fields.num - 1, v39);
        Instance = (DataManager_o *)ServantSkillEntity__getFriendPointUpVal(v32, SkillLevel, 0LL);
        if ( (int)Instance >= 1 )
          break;
      }
    }
    max_length = ServantSkillList->max_length;
    if ( (int)++v30 >= max_length )
      return 0;
  }
  v43 = UserServantEntity__getSkillLevel(this, v32->fields.num - 1, v41);
  Instance = (DataManager_o *)ServantSkillEntity__getSkillLvEntity(v32, v43, 0LL);
  if ( !Instance )
LABEL_34:
    sub_B2C434(Instance, v12);
  return SkillLvEntity__getFriendPointUpType((SkillLvEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getBaseFriendPointUpVal(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x21
  __int64 v15; // x22
  ServantSkillMaster_o *v16; // x20
  BattleBuffData_BuffData_array *ServantSkillList; // x20
  UserServantEntity___c_c *v18; // x8
  struct UserServantEntity___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__51_0; // x21
  Il2CppObject *v21; // x22
  struct UserServantEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int max_length; // w8
  unsigned int v30; // w27
  Il2CppClass **v31; // x8
  ServantSkillEntity_o *v32; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v35; // x24
  __int64 v36; // x25
  int64_t v37; // x23
  int32_t v38; // w0
  const MethodInfo *v39; // x2
  int32_t SkillLevel; // w0
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4185ED1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_ServantSkillEntity___, method);
    sub_B2C35C(&Method_System_Comparison_ServantSkillEntity___ctor__, v3);
    sub_B2C35C(&System_Comparison_ServantSkillEntity__TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_UserServantEntity___c__getBaseFriendPointUpVal_b__51_0__, v9);
    sub_B2C35C(&UserServantEntity___c_TypeInfo, v10);
    byte_4185ED1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v15;
  *(_QWORD *)&v43.fields.fakeValue = v14;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v43, 0LL);
  if ( !v16 )
    goto LABEL_33;
  ServantSkillList = (BattleBuffData_BuffData_array *)ServantSkillMaster__getServantSkillList(
                                                        v16,
                                                        (int32_t)Instance,
                                                        0LL);
  v18 = UserServantEntity___c_TypeInfo;
  if ( (BYTE3(UserServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v18 = UserServantEntity___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__51_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = UserServantEntity___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantSkillEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__51_0,
      v21,
      Method_UserServantEntity___c__getBaseFriendPointUpVal_b__51_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantSkillEntity___ctor__);
    v22 = UserServantEntity___c_TypeInfo->static_fields;
    v22->__9__51_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__51_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v22->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    ServantSkillList,
    (System_Comparison_T__o *)_9__51_0,
    (const MethodInfo_23CBA5C *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !ServantSkillList )
    goto LABEL_33;
  max_length = ServantSkillList->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
      {
        v41 = sub_B2C460(Instance);
        sub_B2C400(v41, 0LL);
      }
      v31 = &ServantSkillList->obj.klass + (int)v30;
      v32 = (ServantSkillEntity_o *)v31[4];
      if ( !v32 )
        break;
      Instance = (WebViewManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v31[4], 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        lv = this->fields.lv;
        v36 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v35 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v37 = UserId;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v44.fields.currentCryptoKey = v36;
        *(_QWORD *)&v44.fields.fakeValue = v35;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v44, 0LL);
        Instance = (WebViewManager_o *)ServantSkillEntity__isUse(v32, v37, lv, v38, -1, -1, -1, -1LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          SkillLevel = UserServantEntity__getSkillLevel(this, v32->fields.num - 1, v39);
          Instance = (WebViewManager_o *)ServantSkillEntity__getFriendPointUpVal(v32, SkillLevel, 0LL);
          if ( (int)Instance > 0 )
            return (int)Instance;
        }
      }
      max_length = ServantSkillList->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_31;
    }
LABEL_33:
    sub_B2C434(Instance, v12);
  }
LABEL_31:
  LODWORD(Instance) = 0;
  return (int)Instance;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getCardImageLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  BalanceConfig_c *v8; // x0
  int32_t result; // w0
  bool v10; // vf
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w0
  __int64 v14; // x8
  int32_t v15; // w19
  int32_t v16; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4185F0A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, ignoreRandomSettings);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4185F0A = 1;
  }
  if ( !ConstantMaster__IsOtherImage(0LL) || (this->fields.status & 8) != 0 )
  {
    result = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v7);
    if ( result <= 10 )
    {
      v10 = __OFSUB__(result--, 1);
      if ( result < 0 != v10 )
      {
        v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v17.fields.currentCryptoKey = v12;
        *(_QWORD *)&v17.fields.fakeValue = v11;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
        v14 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v15 = v13;
        *(_QWORD *)&v18.fields.currentCryptoKey = v14;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        return ImageLimitCount__GetCardImageLimitCount(v15, v16, 1, 0, 0LL);
      }
    }
  }
  else
  {
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    return v8->static_fields->OtherImageLimitCount;
  }
  return result;
}


int32_t __fastcall UserServantEntity__getCollectionNo(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185EEA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EEA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return *((_DWORD *)Instance + 52);
}


int32_t __fastcall UserServantEntity__getCombineQp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  int32_t v12; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4185EF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineQpMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EF0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
  if ( !v11
    || (Entity = ServantLimitMaster__GetEntity(v11, v12, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineQpMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpMaster__GetEntity(
                     (CombineQpMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_13:
    sub_B2C434(Instance, v7);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtEq(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  int32_t v12; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4185EFB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EFB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
  if ( !v11
    || (Entity = ServantLimitMaster__GetEntity(v11, v12, (int32_t)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___),
        !Entity)
    || !Instance
    || (Instance = CombineQpSvtEquipMaster__GetEntity(
                     (CombineQpSvtEquipMaster_o *)Instance,
                     Entity->fields.rarity,
                     this->fields.lv,
                     0LL)) == 0LL )
  {
LABEL_13:
    sub_B2C434(Instance, v7);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getCombineQpSvtExceed(UserServantEntity_o *this, const MethodInfo *method)
{
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v3; // x1

  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(this, method);
  if ( !SvtExceedEnt )
    sub_B2C434(0LL, v3);
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
      return BasicHelper__DecryptValue_19216120(this->fields.limitCount, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v9; // q1
  WarQuestSelectionMaster_o *v10; // x20
  int64_t v11; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  int64_t v14; // x19
  const MethodInfo *v15; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4185F1A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185F1A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v9 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v10 = MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v17, 0LL);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = v11;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  if ( !v10 )
LABEL_12:
    sub_B2C434(Instance, v7);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           v14,
           (int32_t)Instance,
           v15);
}


int32_t __fastcall UserServantEntity__getCost(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185F06 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185F06 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getDispSelectLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t LimitCountWithRandom; // w0
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w19
  int32_t v11; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4185F08 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4185F08 = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 1, ignoreRandomSettings, v3);
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = LimitCountWithRandom - 1;
  if ( LimitCountWithRandom < 1 )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.fakeValue = v8;
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL);
  }
  else
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.currentCryptoKey = v9;
    *(_QWORD *)&v13.fields.fakeValue = v8;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetLimitCountByDispLimit(v10, v11, 0LL);
  }
}


void __fastcall UserServantEntity__getEquipSkillInfo(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        bool useUserSvtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x21
  DataManager_o *UseEntity; // x0
  __int64 v15; // x22
  BalanceConfig_c *v16; // x8
  SkillInfo_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int128 v24; // q0
  __int128 v25; // q1
  __int64 v26; // x19
  __int64 i; // x23
  SkillInfo_o *v28; // x24
  __int64 v29; // x25
  __int64 v30; // x26
  int32_t v31; // w0
  __int128 v32; // q0
  int32_t v33; // w25
  int64_t v34; // x0
  int32_t lv; // w26
  int64_t v36; // x27
  int32_t v37; // w5
  ServantSkillEntity_o *v38; // x25
  int32_t skillNum; // w8
  SkillInfo_array *v40; // x25
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  unsigned __int64 v47; // x21
  BalanceConfig_c *v48; // x0
  __int64 v49; // x0
  __int64 v50; // x0
  int64_t userSvtId; // [xsp+28h] [xbp-F8h]
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56[2]; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4185ECB & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_B2C35C(&SkillInfo___TypeInfo, v10);
    sub_B2C35C(&SkillInfo_TypeInfo, v11);
    byte_4185ECB = 1;
  }
  memset(&v56[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AC505C(v13);
  UseEntity = **(DataManager_o ***)(v13 + 184);
  if ( !UseEntity )
LABEL_45:
    sub_B2C434(UseEntity, skillInfoList);
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 UseEntity,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v15 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)v16->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v17;
  sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  if ( useUserSvtId )
  {
    v25 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v24 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v56, -1LL, 0LL);
    v25 = *(_OWORD *)&v56[0].fields.currentCryptoKey;
    v24 = *(_OWORD *)&v56[0].fields.fakeValue;
  }
  *(_OWORD *)&v56[1].fields.currentCryptoKey = v25;
  *(_OWORD *)&v56[1].fields.fakeValue = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v55 = v56[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v55, 0LL);
  v26 = 8LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v47 = v26 - 8;
    v48 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v48 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v47 >= v48->static_fields->SvtEquipSkillListMax )
      break;
    v28 = (SkillInfo_o *)sub_B2C42C(SkillInfo_TypeInfo);
    SkillInfo___ctor(v28, 0LL);
    v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v57.fields.currentCryptoKey = v30;
    *(_QWORD *)&v57.fields.fakeValue = v29;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v57, 0LL);
    v32 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v33 = v31;
    *(_OWORD *)&v56[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v56[0].fields.fakeValue = v32;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v54 = v56[0];
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v54, 0LL);
    lv = this->fields.lv;
    v36 = v34;
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
    UseEntity = (DataManager_o *)MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_45;
    UseEntity = (DataManager_o *)ServantSkillMaster__getUseEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   v33,
                                   (int)v26 - 7,
                                   v36,
                                   lv,
                                   v37,
                                   -1,
                                   -1,
                                   -1,
                                   userSvtId,
                                   0,
                                   0LL);
    if ( UseEntity )
    {
      if ( !v28 )
        goto LABEL_45;
      v38 = (ServantSkillEntity_o *)UseEntity;
      v28->fields.id = HIDWORD(UseEntity->fields.datalist);
      if ( !v15 )
        goto LABEL_45;
      if ( v47 >= *(unsigned int *)(v15 + 24) )
        goto LABEL_46;
      v28->fields.lv = *(_DWORD *)(v15 + 4 * v26);
      if ( v47 >= *(unsigned int *)(v15 + 24) )
        goto LABEL_46;
      ServantSkillEntity__getEffectExplanation(
        (ServantSkillEntity_o *)UseEntity,
        &v28->fields.charge,
        &v28->fields.title,
        &v28->fields.explanation,
        *(_DWORD *)(v15 + 4 * v26),
        1,
        0LL);
      UseEntity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(v38, 0LL);
      v28->fields.strengthStatus = (int)UseEntity;
      skillNum = v38->fields.skillNum;
      v28->fields.isUse = 1;
      v28->fields.skillRecord = skillNum;
    }
    else
    {
      if ( !v28 )
        goto LABEL_45;
      v28->fields.lv = -1;
    }
    v40 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_45;
    UseEntity = (DataManager_o *)sub_B2C41C(v28, v40->obj.klass->_1.element_class);
    if ( !UseEntity )
    {
      v50 = sub_B2C454();
      sub_B2C400(v50, 0LL);
    }
    if ( v47 >= v40->max_length )
    {
LABEL_46:
      v49 = sub_B2C460(UseEntity);
      sub_B2C400(v49, 0LL);
    }
    *(Il2CppClass **)((char *)&v40->obj.klass + i) = (Il2CppClass *)v28;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)((char *)v40 + i),
      (System_Int32_array **)v28,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    ++v26;
  }
}


EventServantEntity_o *__fastcall UserServantEntity__getEventServant(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  EventServantEntity_o *result; // x0
  __int64 v9; // x8
  EventServantEntity_o *v10; // x20
  __int64 v11; // x26
  __int64 v12; // x8
  EventServantMaster_o *v13; // x21
  int32_t v14; // w22
  __int64 v15; // x23
  __int64 v16; // x24
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4185EF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventServantMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EF7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
LABEL_20:
    sub_B2C434(Instance, v7);
  }
  result = (EventServantEntity_o *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0LL);
  if ( result )
  {
    v9 = *(_QWORD *)&result->fields.type;
    v10 = result;
    result = 0LL;
    if ( v9 )
    {
      if ( (int)v9 >= 1 )
      {
        v11 = 0LL;
        do
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_20;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventServantMaster___);
          if ( (unsigned int)v11 >= v10->fields.type )
          {
            v17 = sub_B2C460(Instance);
            sub_B2C400(v17, 0LL);
          }
          v12 = *((_QWORD *)&v10->fields.joinMessage + v11);
          if ( !v12 )
            goto LABEL_20;
          v13 = (EventServantMaster_o *)Instance;
          v14 = *(_DWORD *)(v12 + 16);
          v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v18.fields.currentCryptoKey = v16;
          *(_QWORD *)&v18.fields.fakeValue = v15;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
          if ( !v13 )
            goto LABEL_20;
          result = EventServantMaster__getEntity_30508724(v13, v14, (int32_t)Instance, 0LL);
          if ( result )
            return result;
          ++v11;
        }
        while ( (int)v11 < v10->fields.type );
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
  __int64 v3; // x1
  __int64 v4; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  EventServantMaster_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4185EF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4185EF8 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventServantMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  return EventServantMaster__getEntityServantIgnoreEnd(v8, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall UserServantEntity__getEventServant_21666156(
        UserServantEntity_o *this,
        bool is_finishedAt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v8; // x20
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4185EF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, is_finishedAt);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4185EF9 = 1;
  }
  EventServant = UserServantEntity__getEventServant(this, (const MethodInfo *)is_finishedAt);
  if ( !EventServant )
    return 0LL;
  v8 = EventServant;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v8->fields.eventId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v10);
  }
  if ( !EventEntity__IsOpen((EventEntity_o *)Instance, is_finishedAt, 0LL) )
    return 0LL;
  return v8;
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

  if ( (byte_4185ED3 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4185ED3 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
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
  __int64 v5; // x1
  struct System_Int32_array *eventIdList; // x8
  __int64 v7; // x23
  int32_t DispLimitCount; // w22
  System_Boolean_array *v9; // x21
  unsigned __int64 v10; // x25
  signed __int64 v11; // x26
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t v14; // w23
  const MethodInfo *v15; // x7
  struct System_Int32_array *v16; // x8
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_4185ED7 & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, setupInfo);
    this = (UserServantEntity_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4185ED7 = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_19;
  v7 = *(_QWORD *)&eventIdList->max_length;
  if ( !v7 )
    return 0LL;
  DispLimitCount = UserServantEntity__getDispLimitCount(v4, 0, method);
  v9 = (System_Boolean_array *)sub_B2C374(bool___TypeInfo, (unsigned int)v7);
  if ( (int)v7 >= 1 )
  {
    v10 = 0LL;
    v11 = (int)v7;
    while ( 1 )
    {
      v13 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v19.fields.currentCryptoKey = v13;
      *(_QWORD *)&v19.fields.fakeValue = v12;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
      this = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                      v4->fields.limitCount,
                                      0LL);
      v16 = setupInfo->fields.eventIdList;
      if ( !v16 )
        break;
      if ( v10 >= v16->max_length )
        goto LABEL_20;
      this = (UserServantEntity_o *)UserServantEntity__getBaseEventUpVal(
                                      v4,
                                      v14,
                                      (int32_t)this,
                                      DispLimitCount,
                                      setupInfo,
                                      v16->m_Items[v10 + 1],
                                      0,
                                      v15);
      if ( !v9 )
        break;
      if ( v10 >= v9->max_length )
      {
LABEL_20:
        v18 = sub_B2C460(this);
        sub_B2C400(v18, 0LL);
      }
      v9->m_Items[v10++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v10 >= v11 )
        return v9;
    }
LABEL_19:
    sub_B2C434(this, setupInfo);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
System_Boolean_array *__fastcall UserServantEntity__getEventUpValList_21653972(
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
  if ( (byte_4185ED8 & 1) == 0 )
  {
    this = (UserServantEntity_o *)sub_B2C35C(&bool___TypeInfo, *(_QWORD *)&wearersSvtId);
    byte_4185ED8 = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_16;
  v12 = *(_QWORD *)&eventIdList->max_length;
  if ( !v12 )
    return 0LL;
  this = (UserServantEntity_o *)sub_B2C374(bool___TypeInfo, (unsigned int)v12);
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
        v18 = sub_B2C460(this);
        sub_B2C400(v18, 0LL);
      }
      v14->m_Items[v15++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v15 >= (int)v12 )
        return v14;
    }
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&wearersSvtId);
  }
  return v14;
}


bool __fastcall UserServantEntity__getEventUpVal_21652144(
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

  if ( (byte_4185ED4 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_4185ED4 = 1;
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
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
  return UserServantEntity__getBaseEventUpVal(this, v9, v10, DispLimitCount, setupInfo, eventId, 0, v13);
}


bool __fastcall UserServantEntity__getEventUpVal_21652372(
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


bool __fastcall UserServantEntity__getEventUpVal_21652484(
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


bool __fastcall UserServantEntity__getEventUpVal_21652504(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  int64_t v11; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v13; // x2
  int32_t DispLimitCount; // w0
  __int64 v15; // x24
  __int64 v16; // x25
  int32_t v17; // w23
  int32_t v18; // w24
  int32_t v19; // w25
  int32_t EventId; // w0
  const MethodInfo *v21; // x7
  __int64 v23; // x8
  unsigned __int64 v24; // x28
  UserServantEntity_o *v25; // x24
  __int64 v26; // x25
  __int64 v27; // x26
  int32_t v28; // w25
  int32_t v29; // w26
  int32_t v30; // w0
  const MethodInfo *v31; // x7
  __int64 v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4185ED5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, setupInfo);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4185ED5 = 1;
  }
  if ( setupInfo )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B2C434(Instance, v11);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v13);
    v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v17 = DispLimitCount;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v33.fields.currentCryptoKey = v16;
    *(_QWORD *)&v33.fields.fakeValue = v15;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v33, 0LL);
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal(this, v18, v19, v17, setupInfo, EventId, 0, v21);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 1;
    if ( equipIds )
    {
      v23 = *(_QWORD *)&equipIds->max_length;
      if ( (int)v23 >= 1 )
      {
        v24 = 0LL;
        while ( 1 )
        {
          if ( v24 >= (unsigned int)v23 )
          {
            v32 = sub_B2C460(Instance);
            sub_B2C400(v32, 0LL);
          }
          v11 = equipIds->m_Items[v24];
          if ( v11 >= 1 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_24;
            Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          v11,
                                          (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Instance )
            {
              v25 = (UserServantEntity_o *)Instance;
              v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v34.fields.currentCryptoKey = v27;
              *(_QWORD *)&v34.fields.fakeValue = v26;
              v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v34, 0LL);
              v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
              v30 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
              Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal(
                                            v25,
                                            v28,
                                            v29,
                                            v17,
                                            setupInfo,
                                            v30,
                                            0,
                                            v31);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return 1;
            }
          }
          LODWORD(v23) = equipIds->max_length;
          if ( (__int64)++v24 >= (int)v23 )
            return 0;
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_21653076(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        UserServantEntity_array *equipServentEntityList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t DispLimitCount; // w0
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w22
  int32_t v16; // w23
  int32_t v17; // w24
  int32_t EventId; // w0
  const MethodInfo *v19; // x7
  _BOOL8 BaseEventUpVal; // x0
  __int64 v22; // x8
  unsigned __int64 i; // x27
  UserServantEntity_o *v24; // x23
  __int64 v25; // x24
  __int64 v26; // x25
  int32_t v27; // w24
  int32_t v28; // w25
  int32_t v29; // w0
  const MethodInfo *v30; // x7
  __int64 v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4185ED6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, setupInfo);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4185ED6 = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v10);
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)Instance,
      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
    v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v15 = DispLimitCount;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v32.fields.currentCryptoKey = v14;
    *(_QWORD *)&v32.fields.fakeValue = v13;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    BaseEventUpVal = UserServantEntity__getBaseEventUpVal(this, v16, v17, v15, setupInfo, EventId, 0, v19);
    if ( BaseEventUpVal )
      return 1;
    if ( equipServentEntityList )
    {
      v22 = *(_QWORD *)&equipServentEntityList->max_length;
      if ( (int)v22 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v22; ++i )
        {
          if ( i >= (unsigned int)v22 )
          {
            v31 = sub_B2C460(BaseEventUpVal);
            sub_B2C400(v31, 0LL);
          }
          v24 = equipServentEntityList->m_Items[i];
          if ( v24 )
          {
            v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v33.fields.currentCryptoKey = v26;
            *(_QWORD *)&v33.fields.fakeValue = v25;
            v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v33, 0LL);
            v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
            v29 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            BaseEventUpVal = UserServantEntity__getBaseEventUpVal(v24, v27, v28, v15, setupInfo, v29, 0, v30);
            if ( BaseEventUpVal )
              return 1;
            LODWORD(v22) = equipServentEntityList->max_length;
          }
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_21654264(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w23
  int32_t v16; // w24
  const MethodInfo *v17; // x2
  int32_t DispLimitCount; // w25
  EventUpValInfo_o *v19; // x26
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  DataManager_o *Instance; // x0
  int64_t v27; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v29; // x2
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  char v32; // w26
  UserServantEntity_o *v33; // x22
  EventUpValInfo_o *v34; // x27
  __int64 v35; // x23
  Il2CppObject *lockCountObj; // x24
  const MethodInfo *v37; // x2
  __int64 v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4185EDA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, eventUpVallInfo);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&EventUpValInfo_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4185EDA = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v14;
  *(_QWORD *)&v40.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v17);
  v19 = (EventUpValInfo_o *)sub_B2C42C(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v19, setupInfo, v15, v16, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v19;
  sub_B2C2F8((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_B2C434(Instance, v27);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal_21654836(this, eventUpVallInfo, v29);
  if ( equipIds )
  {
    v30 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v30 >= 1 )
    {
      v31 = 0LL;
      v32 = (unsigned __int8)Instance & 1;
      do
      {
        if ( v31 >= (unsigned int)v30 )
        {
          v39 = sub_B2C460(Instance);
          sub_B2C400(v39, 0LL);
        }
        v27 = equipIds->m_Items[v31];
        if ( v27 >= 1 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_23;
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v27,
                                        (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Instance )
            goto LABEL_23;
          v33 = (UserServantEntity_o *)Instance;
          v34 = *eventUpVallInfo;
          lockCountObj = Instance->fields.lockCountObj;
          v35 = *(_QWORD *)&Instance->fields.nowLoadCount;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v41.fields.currentCryptoKey = lockCountObj;
          *(_QWORD *)&v41.fields.fakeValue = v35;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v41, 0LL);
          if ( !v34 )
            goto LABEL_23;
          v34->fields.equipSvtId = (int)Instance;
          Instance = (DataManager_o *)UserServantEntity__getBaseEventUpVal_21654836(v33, eventUpVallInfo, v37);
          LODWORD(v30) = equipIds->max_length;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v32 = 1;
        }
        ++v31;
      }
      while ( (__int64)v31 < (int)v30 );
      LOBYTE(Instance) = v32;
    }
  }
  return (unsigned __int8)Instance & 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getExceedLvMax(UserServantEntity_o *this, int32_t cnt, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  ServantLimitMaster_o *v13; // x21
  int32_t v14; // w22
  ServantLimitEntity_o *Entity; // x21
  ServantExceedEntity_o *v16; // x0
  const MethodInfo *v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4185F12 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&cnt);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4185F12 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
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
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                this->fields.limitCount,
                                0LL);
  if ( !v13
    || (Entity = ServantLimitMaster__GetEntity(v13, v14, (int32_t)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_14:
    sub_B2C434(Instance, v9);
  }
  v16 = ServantExceedMaster__GetEntity((ServantExceedMaster_o *)Instance, Entity->fields.rarity, cnt, 0LL);
  if ( v16 )
    return v16->fields.addLvMax + Entity->fields.lvMax;
  else
    return UserServantEntity__getLevelMax(this, v17);
}


bool __fastcall UserServantEntity__getExpInfo(
        UserServantEntity_o *this,
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

  if ( (byte_4185EEC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4185EEC = 1;
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
  if ( this->fields.lv < UserServantEntity__getLevelMax(this, v20) )
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getFigureImageLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
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

  if ( (byte_4185F0C & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4185F0C = 1;
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
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
        v12 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v13 = v11;
        *(_QWORD *)&v16.fields.currentCryptoKey = v12;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        return ImageLimitCount__GetImageLimitCount(v13, v14, 0LL);
      }
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getFigureLimitCount(
        UserServantEntity_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int LimitCountWithRandom; // w8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w19
  int32_t v11; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4185F0D & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4185F0D = 1;
  }
  LimitCountWithRandom = UserServantEntity__GetLimitCountWithRandom(this, 0, ignoreRandomSettings, v3);
  if ( LimitCountWithRandom > 10 )
    return LimitCountWithRandom;
  v9 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v10 = LimitCountWithRandom - 1;
  if ( LimitCountWithRandom < 1 )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.fakeValue = v8;
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL);
  }
  else
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.currentCryptoKey = v9;
    *(_QWORD *)&v13.fields.fakeValue = v8;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetLimitCountByImageLimit_27363708(v10, v11, 0LL);
  }
}


System_String_o *__fastcall UserServantEntity__getFrameCardPrefix(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  int32_t v12; // w21
  ServantLimitEntity_o *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4185F18 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185F18 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                this->fields.limitCount,
                                0LL);
  if ( !v11
    || (Entity = ServantLimitMaster__GetEntity(v11, v12, (int32_t)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance
    || (Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                      (ServantExceedMaster_o *)Instance,
                                      Entity->fields.rarity,
                                      this->fields.exceedCount,
                                      0LL)) == 0LL )
  {
LABEL_13:
    sub_B2C434(Instance, v7);
  }
  return ServantExceedEntity__getFrameCardPrefix((ServantExceedEntity_o *)Instance, 0LL);
}


int32_t __fastcall UserServantEntity__getFrameType(UserServantEntity_o *this, const MethodInfo *method)
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
  int32_t v12; // w21
  int32_t FrameType_30786392; // w20
  ServantLvDetailMaster_o *v14; // x21
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4185F16 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185F16 = 1;
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
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                   this->fields.limitCount,
                                   0LL);
  if ( !v11
    || (FrameType_30786392 = ServantExceedMaster__GetFrameType_30786392(
                               v11,
                               v12,
                               (int32_t)Instance,
                               this->fields.exceedCount,
                               0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v14 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v15),
        !v14) )
  {
LABEL_11:
    sub_B2C434(Instance, v7);
  }
  return ServantLvDetailMaster__GetFrameType(v14, (int32_t)Instance, this->fields.lv, FrameType_30786392, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  int v12; // w21
  unsigned __int64 v13; // x24
  UserServantEntity_o *v14; // x22
  UserServantEntity_o *v15; // x23
  __int64 v17; // x0

  if ( (byte_4185ED0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, equipIds);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4185ED0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_B2C434(Instance, v8);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal(this, v10);
  if ( !equipIds )
    return 0;
  v11 = *(_QWORD *)&equipIds->max_length;
  if ( (int)v11 < 1 )
    return 0;
  v12 = (int)Instance;
  v13 = 0LL;
  v14 = 0LL;
  do
  {
    if ( v13 >= (unsigned int)v11 )
    {
      v17 = sub_B2C460(Instance);
      sub_B2C400(v17, 0LL);
    }
    v8 = (const MethodInfo *)equipIds->m_Items[v13];
    if ( (__int64)v8 >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int64_t)v8,
                                    (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_19;
      v15 = (UserServantEntity_o *)Instance;
      Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v8);
      LODWORD(v11) = equipIds->max_length;
      if ( (int)Instance > v12 )
        v14 = v15;
      if ( (int)Instance > v12 )
        v12 = (int)Instance;
    }
    ++v13;
  }
  while ( (__int64)v13 < (int)v11 );
  if ( v14 )
    return UserServantEntity__getBaseFriendPointUpType(v14, v8);
  else
    return 0;
}


int32_t __fastcall UserServantEntity__getFriendPointUpVal(
        UserServantEntity_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v10; // x1
  int32_t v11; // w20
  __int64 v12; // x8
  unsigned __int64 i; // x22
  __int64 v15; // x0

  if ( (byte_4185ECF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, equipIds);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4185ECF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_B2C434(Instance, v8);
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal(this, v10);
  v11 = (int)Instance;
  if ( equipIds )
  {
    v12 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v12 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v12; ++i )
      {
        if ( i >= (unsigned int)v12 )
        {
          v15 = sub_B2C460(Instance);
          sub_B2C400(v15, 0LL);
        }
        v8 = (const MethodInfo *)equipIds->m_Items[i];
        if ( (__int64)v8 >= 1 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_15;
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        (int64_t)v8,
                                        (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Instance )
            goto LABEL_15;
          Instance = (DataManager_o *)UserServantEntity__getBaseFriendPointUpVal((UserServantEntity_o *)Instance, v8);
          LODWORD(v12) = equipIds->max_length;
          if ( (int)Instance > v11 )
            v11 = (int)Instance;
        }
      }
    }
  }
  return v11;
}


int32_t __fastcall UserServantEntity__getFriendshipRank(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v9; // q1
  UserServantCollectionMaster_o *v10; // x20
  int64_t v11; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  int64_t v14; // x19
  const MethodInfo *v15; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4185EEB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EEB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v9 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v10 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v17, 0LL);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = v11;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  if ( !v10 || (Instance = UserServantCollectionMaster__GetEntityDefinitely(v10, v14, (int32_t)Instance, v15)) == 0LL )
LABEL_13:
    sub_B2C434(Instance, v7);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  int32_t v12; // w21
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v14; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4185EF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EF1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                this->fields.limitCount,
                                0LL);
  if ( !v11
    || (Entity = ServantLimitMaster__GetEntity(v11, v12, (int32_t)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_14:
    sub_B2C434(Instance, v7);
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


int32_t __fastcall UserServantEntity__getLimitCntMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185EF2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EF2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return Instance->fields.nowLoadCount;
}


int32_t __fastcall UserServantEntity__getLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4185EC6 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185EC6 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
}


int32_t __fastcall UserServantEntity__getMagnification(
        UserServantEntity_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  UserServantEntity_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t combineMaterialId; // w21
  __int64 v10; // x19
  __int64 v11; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v4 = this;
  if ( (byte_4185EE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineMaster___, svtEntity);
    sub_B2C35C(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (UserServantEntity_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4185EE9 = 1;
  }
  entity = 0LL;
  if ( !svtEntity )
    goto LABEL_16;
  combineMaterialId = svtEntity->fields.combineMaterialId;
  this = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !this )
    goto LABEL_16;
  this = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  &entity,
                                  combineMaterialId,
                                  (const MethodInfo_24E412C *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
LABEL_16:
    sub_B2C434(this, svtEntity);
  if ( *(&entity->fields.id + 1) == 3 )
    return 1;
LABEL_10:
  if ( ServantEntity__get_IsServant(svtEntity, 0LL) )
    return v4->fields.treasureDeviceLv1;
  v11 = *(_QWORD *)&v4->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v4->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v11;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL) + 1;
}


int32_t __fastcall UserServantEntity__getMaxCardImageLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  __int64 v7; // x8
  int32_t v8; // w19
  int32_t v9; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4185F0B & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4185F0B = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetCardImageLimitCount(v8, v9, 1, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxCommandCardLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  __int64 v7; // x8
  int32_t v8; // w19
  int32_t v9; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4185F09 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4185F09 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v8, v9, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxDispLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  __int64 v7; // x8
  int32_t v8; // w19
  int32_t v9; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4185F07 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4185F07 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v8, v9, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxFriendIconLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  __int64 v7; // x8
  int32_t v8; // w19
  int32_t v9; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4185F0F & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4185F0F = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetCardImageLimitCount(v8, v9, 0, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxIconLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  __int64 v7; // x8
  int32_t v8; // w19
  int32_t v9; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4185F0E & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4185F0E = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetCardImageLimitCount(v8, v9, 1, 0, 0LL);
}


int32_t __fastcall UserServantEntity__getMaxPortraitLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  __int64 v7; // x8
  int32_t v8; // w19
  int32_t v9; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4185F10 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4185F10 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  return ImageLimitCount__GetImageLimitCount(v8, v9, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x19
  __int64 UseEntity; // x0
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x24
  BalanceConfig_c *v20; // x8
  System_Int32_array *v21; // x0
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
  __int128 v35; // q0
  __int128 v36; // q1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x21
  __int64 v38; // x22
  __int64 v39; // x20
  unsigned __int64 v40; // x25
  BalanceConfig_c *v41; // x0
  SkillInfo_o *v42; // x0
  __int64 v43; // x19
  __int64 v44; // x26
  int32_t v45; // w0
  __int128 v46; // q0
  int32_t v47; // w27
  int64_t v48; // x0
  int32_t lv; // w28
  int64_t v50; // x19
  System_Int32_array *v51; // x8
  System_String_array *v52; // x26
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x19
  BattleServantConfConponent_o *v60; // x0
  __int64 v61; // x19
  __int64 v62; // x27
  int32_t v63; // w0
  __int128 v64; // q0
  int32_t v65; // w27
  int64_t v66; // x0
  ServantSkillEntity_o *v67; // x0
  __int128 v68; // q0
  ServantSkillEntity_o *v69; // x26
  int64_t v70; // x0
  System_Int32_array *v71; // x8
  System_String_array *v72; // x27
  __int64 v73; // x0
  __int64 v74; // x0
  int64_t userSvtId; // [xsp+38h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+40h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+60h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84[2]; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4185ECC & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, idList);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_B2C35C(&int___TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_B2C35C(&SkillInfo_TypeInfo, v14);
    sub_B2C35C(&string___TypeInfo, v15);
    byte_4185ECC = 1;
  }
  memset(&v84[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v17 = **(_QWORD **)(v16 + 192);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AC505C(v17);
  UseEntity = **(_QWORD **)(v17 + 184);
  if ( !UseEntity )
LABEL_61:
    sub_B2C434(UseEntity, idList);
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)UseEntity,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  v21 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v20->static_fields->SvtSkillListMax);
  *idList = v21;
  sub_B2C2F8((BattleServantConfConponent_o *)idList, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_String_array *)sub_B2C374(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *skillNameList = v28;
  sub_B2C2F8((BattleServantConfConponent_o *)skillNameList, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  if ( useUserSvtId )
  {
    v36 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v35 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v84, -1LL, 0LL);
    v36 = *(_OWORD *)&v84[0].fields.currentCryptoKey;
    v35 = *(_OWORD *)&v84[0].fields.fakeValue;
  }
  *(_OWORD *)&v84[1].fields.currentCryptoKey = v36;
  *(_OWORD *)&v84[1].fields.fakeValue = v35;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v83 = v84[1];
  p_userId = &this->fields.userId;
  v38 = 8LL;
  v39 = 32LL;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v83, 0LL);
  while ( 1 )
  {
    v40 = v38 - 8;
    v41 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v41 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v40 >= v41->static_fields->SvtSkillListMax )
      break;
    v42 = (SkillInfo_o *)sub_B2C42C(SkillInfo_TypeInfo);
    SkillInfo___ctor(v42, 0LL);
    v44 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v43 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v85.fields.currentCryptoKey = v44;
    *(_QWORD *)&v85.fields.fakeValue = v43;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v85, 0LL);
    v46 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v47 = v45;
    *(_OWORD *)&v84[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v84[0].fields.fakeValue = v46;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v82 = v84[0];
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v82, 0LL);
    lv = this->fields.lv;
    v50 = v48;
    UseEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_61;
    UseEntity = (__int64)ServantSkillMaster__getUseEntity(
                           MasterData_WarQuestSelectionMaster,
                           v47,
                           (int)v38 - 7,
                           v50,
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
      v51 = *idList;
      if ( !*idList )
        goto LABEL_61;
      if ( v40 >= v51->max_length )
        goto LABEL_62;
      *((_DWORD *)&v51->obj.klass + v38) = *(_DWORD *)(UseEntity + 28);
      v52 = *skillNameList;
      UseEntity = (__int64)ServantSkillEntity__getSkillName((ServantSkillEntity_o *)UseEntity, 0LL);
      if ( !v52 )
        goto LABEL_61;
      v59 = (System_Int32_array **)UseEntity;
      if ( UseEntity )
      {
        UseEntity = sub_B2C41C(UseEntity, v52->obj.klass->_1.element_class);
        if ( !UseEntity )
          goto LABEL_63;
      }
      if ( v40 >= v52->max_length )
        goto LABEL_62;
      v60 = (BattleServantConfConponent_o *)((char *)v52 + v39);
LABEL_40:
      v60->klass = (BattleServantConfConponent_c *)v59;
      sub_B2C2F8(v60, v59, v53, v54, v55, v56, v57, v58);
      goto LABEL_41;
    }
    v62 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v61 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v86.fields.currentCryptoKey = v62;
    *(_QWORD *)&v86.fields.fakeValue = v61;
    v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v86, 0LL);
    v64 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v65 = v63;
    *(_OWORD *)&v84[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v84[0].fields.fakeValue = v64;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v81 = v84[0];
    v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v81, 0LL);
    v67 = ServantSkillMaster__getUseEntity(
            MasterData_WarQuestSelectionMaster,
            v65,
            (int)v38 - 7,
            v66,
            targetLv,
            targetLimitCnt,
            -1,
            -1,
            -1,
            -1LL,
            0,
            0LL);
    if ( v67 )
    {
      v68 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v69 = v67;
      *(_OWORD *)&v84[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
      *(_OWORD *)&v84[0].fields.fakeValue = v68;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v80 = v84[0];
      v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v80, 0LL);
      UseEntity = ServantSkillEntity__isUse(v69, v70, targetLv, targetLimitCnt, -1, -1, -1, -1LL, 0LL);
      if ( (UseEntity & 1) != 0 )
      {
        v71 = *idList;
        if ( !*idList )
          goto LABEL_61;
        if ( v40 >= v71->max_length )
        {
LABEL_62:
          v73 = sub_B2C460(UseEntity);
          sub_B2C400(v73, 0LL);
        }
        *((_DWORD *)&v71->obj.klass + v38) = v69->fields.skillId;
        v72 = *skillNameList;
        UseEntity = (__int64)ServantSkillEntity__getSkillName(v69, 0LL);
        if ( !v72 )
          goto LABEL_61;
        v59 = (System_Int32_array **)UseEntity;
        if ( UseEntity )
        {
          UseEntity = sub_B2C41C(UseEntity, v72->obj.klass->_1.element_class);
          if ( !UseEntity )
          {
LABEL_63:
            v74 = sub_B2C454();
            sub_B2C400(v74, 0LL);
          }
        }
        if ( v40 >= v72->max_length )
          goto LABEL_62;
        v60 = (BattleServantConfConponent_o *)((char *)v72 + v39);
        goto LABEL_40;
      }
    }
LABEL_41:
    ++v38;
    v39 += 8LL;
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  void *Instance; // x0
  const MethodInfo *v27; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x24
  __int128 v29; // q1
  int64_t v30; // x25
  __int64 v31; // x19
  __int64 v32; // x20
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  int32_t friendshipRank; // w24
  __int64 v36; // x19
  __int64 v37; // x19
  WarQuestSelectionMaster_o *v38; // x0
  __int64 v39; // x26
  __int64 v40; // x27
  ServantPassiveSkillMaster_o *v41; // x25
  int32_t v42; // w0
  __int128 v43; // q0
  int32_t v44; // w26
  int64_t v45; // x28
  int32_t lv; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x19
  BattleServantConfConponent_o *v48; // x28
  char v49; // w23
  BalanceConfig_c *v50; // x0
  System_Int32_array *v51; // x0
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
  System_Int32_array **v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  WarQuestSelectionMaster_o *v72; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v73; // x25
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  int v80; // w8
  void *v81; // x26
  int i; // w24
  __int64 v83; // x8
  int32_t v84; // w27
  int64_t UserId; // x28
  __int64 v86; // x19
  __int64 v87; // x20
  int32_t v88; // w4
  int32_t BuddyPoint; // w28
  __int64 v90; // x19
  __int64 v91; // x20
  int32_t v92; // w3
  __int64 v93; // x19
  __int64 v94; // x8
  unsigned __int64 v95; // x20
  System_Int32_array *v96; // x8
  int max_length; // w9
  unsigned int v98; // w10
  __int64 v99; // x27
  char *v100; // x10
  _DWORD *v101; // x10
  int v102; // t1
  System_String_array *v103; // x8
  System_String_array *v104; // x9
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  __int64 v117; // x0
  EventServantPointRankMaster_o *v118; // [xsp+28h] [xbp-E8h]
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // [xsp+30h] [xbp-E0h]
  System_String_array **explanationLista; // [xsp+38h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+90h] [xbp-80h]
  UserEventServantPointEntity_o *entity; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16

  if ( (byte_4185ECD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, idList);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v15);
    sub_B2C35C(&DataManager_TypeInfo, v16);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_B2C35C(&int___TypeInfo, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B2C35C(&string___TypeInfo, v25);
    byte_4185ECD = 1;
  }
  explanationLista = explanationList;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v29 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v125.fields.fakeValue = v29;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v124 = v125;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v124, 0LL);
  v32 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v127.fields.currentCryptoKey = v32;
  *(_QWORD *)&v127.fields.fakeValue = v31;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v127, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_87;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(
               MasterData_WarQuestSelectionMaster,
               v30,
               (int32_t)Instance,
               v33);
  if ( !Instance )
    goto LABEL_87;
  friendshipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, v27);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v34);
  v36 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v37 = **(_QWORD **)(v36 + 192);
  if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
    sub_AC505C(v37);
  Instance = **(void ***)(v37 + 184);
  if ( !Instance )
    goto LABEL_87;
  v38 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v40 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v41 = (ServantPassiveSkillMaster_o *)v38;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v128.fields.currentCryptoKey = v40;
  *(_QWORD *)&v128.fields.fakeValue = v39;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v128, 0LL);
  v43 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v44 = v42;
  *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v125.fields.fakeValue = v43;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v123 = v125;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v123, 0LL);
  lv = this->fields.lv;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
  if ( !v41 )
    goto LABEL_87;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v41,
    idList,
    titleList,
    explanationLista,
    v44,
    v45,
    lv,
    (int32_t)Instance,
    dispLimitCount,
    friendshipRank,
    -1,
    1,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
  if ( !v47 )
    goto LABEL_87;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v47,
               (int32_t)Instance,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v48 = (BattleServantConfConponent_o *)explanationLista;
  if ( !Instance )
    goto LABEL_87;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  if ( *idList )
  {
    v49 = 0;
  }
  else
  {
    v50 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v50 = BalanceConfig_TypeInfo;
    }
    v51 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v50->static_fields->SvtPassiveSkillListMax);
    *idList = v51;
    sub_B2C2F8((BattleServantConfConponent_o *)idList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = (System_String_array *)sub_B2C374(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v58;
    sub_B2C2F8((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    v65 = (System_Int32_array **)sub_B2C374(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationLista = (System_String_array *)v65;
    sub_B2C2F8((BattleServantConfConponent_o *)explanationLista, v65, v66, v67, v68, v69, v70, v71);
    v49 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v72 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v73 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL)) == 0LL )
LABEL_87:
    sub_B2C434(Instance, v27);
  v80 = *((_DWORD *)Instance + 6);
  v81 = Instance;
  if ( v80 >= 1 )
  {
    v118 = (EventServantPointRankMaster_o *)v72;
    for ( i = 0; i < v80; ++i )
    {
      if ( i >= (unsigned int)v80 )
        goto LABEL_86;
      v83 = *((_QWORD *)v81 + i + 4);
      if ( !v83 )
        goto LABEL_87;
      v84 = *(_DWORD *)(v83 + 16);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v87 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v86 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v129.fields.currentCryptoKey = v87;
      *(_QWORD *)&v129.fields.fakeValue = v86;
      v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v129, 0LL);
      Instance = Master_WarQuestSelectionMaster;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_87;
      if ( UserEventServantPointMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, v84, v88, 0LL) )
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
      v91 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v90 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v130.fields.currentCryptoKey = v91;
      *(_QWORD *)&v130.fields.fakeValue = v90;
      v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v130, 0LL);
      Instance = v118;
      if ( !v118 )
        goto LABEL_87;
      Instance = EventServantPointRankMaster__GetEnableEntity(v118, v84, BuddyPoint, v92, 0LL);
      if ( Instance )
      {
        v93 = *((_QWORD *)Instance + 4);
        v48 = (BattleServantConfConponent_o *)explanationLista;
        if ( !v93 )
          goto LABEL_87;
        v94 = *(_QWORD *)(v93 + 24);
        if ( (int)v94 >= 1 )
        {
          v95 = 0LL;
          while ( v95 < (unsigned int)v94 )
          {
            v96 = *idList;
            if ( !*idList )
              goto LABEL_87;
            max_length = v96->max_length;
            if ( max_length >= 1 )
            {
              v27 = (const MethodInfo *)*(unsigned int *)(v93 + 4 * v95 + 32);
              v98 = 0;
              while ( 1 )
              {
                if ( v98 >= max_length )
                  goto LABEL_86;
                v99 = (int)v98;
                v100 = (char *)v96 + 4 * (int)v98;
                v102 = *((_DWORD *)v100 + 8);
                v101 = v100 + 32;
                if ( !v102 )
                  break;
                v98 = v99 + 1;
                if ( (int)v99 + 1 >= max_length )
                  goto LABEL_79;
              }
              *v101 = (_DWORD)v27;
              if ( !v73 )
                goto LABEL_87;
              Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v73,
                           (int32_t)v27,
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              v103 = *titleList;
              if ( !*titleList )
                goto LABEL_87;
              v104 = *explanationLista;
              if ( !*explanationLista || !Instance )
                goto LABEL_87;
              if ( (unsigned int)v99 >= v103->max_length || (unsigned int)v99 >= v104->max_length )
                break;
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Instance,
                &v103->m_Items[v99],
                &v104->m_Items[v99],
                0,
                0LL);
              v49 = 0;
            }
LABEL_79:
            LODWORD(v94) = *(_DWORD *)(v93 + 24);
            if ( (__int64)++v95 >= (int)v94 )
              goto LABEL_82;
          }
LABEL_86:
          v117 = sub_B2C460(Instance);
          sub_B2C400(v117, 0LL);
        }
      }
      else
      {
        v48 = (BattleServantConfConponent_o *)explanationLista;
      }
LABEL_82:
      v80 = *((_DWORD *)v81 + 6);
    }
  }
  if ( (v49 & 1) != 0 )
  {
    *idList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)idList, 0LL, v74, v75, v76, v77, v78, v79);
    *titleList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)titleList, 0LL, v105, v106, v107, v108, v109, v110);
    v48->klass = 0LL;
    sub_B2C2F8(v48, 0LL, v111, v112, v113, v114, v115, v116);
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
        int32_t initPos,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  int32_t v10; // w23
  const MethodInfo *v11; // x2
  int32_t DispLimitCount; // w0
  bool isWhole; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4185EDE & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4185EDE = 1;
  }
  isWhole = 0;
  if ( questRestrictionInfo )
  {
    v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = v8;
    *(_QWORD *)&v16.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
    return QuestRestrictionInfo__IsRestriction_31224308(
             questRestrictionInfo,
             &isWhole,
             v9,
             v10,
             DispLimitCount,
             this->fields.lv,
             initPos,
             0LL);
  }
  else
  {
    return 0;
  }
}


int32_t __fastcall UserServantEntity__getRarity(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  int32_t v11; // w0
  __int64 v12; // x8
  int32_t v13; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4185F03 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185F03 = 1;
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
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  v12 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v13 = v11;
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
  if ( !v10 || (Instance = ServantLimitMaster__GetEntity(v10, v13, (int32_t)Instance, 0LL)) == 0LL )
LABEL_10:
    sub_B2C434(Instance, v6);
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall UserServantEntity__getRarityIcon(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  ServantExceedMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x1
  int32_t RarityIcon; // w20
  ServantLvDetailMaster_o *v10; // x21
  const MethodInfo *v11; // x1

  if ( (byte_4185F17 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185F17 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v8),
        !MasterData_WarQuestSelectionMaster)
    || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                       MasterData_WarQuestSelectionMaster,
                       (int32_t)Instance,
                       this->fields.exceedCount,
                       0,
                       0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v10 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v11),
        !v10) )
  {
    sub_B2C434(Instance, v6);
  }
  return ServantLvDetailMaster__GetRarityIcon(v10, (int32_t)Instance, this->fields.lv, RarityIcon, 0LL);
}


int32_t __fastcall UserServantEntity__getSellMana(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4185EE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EE7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  if ( !v11
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (WebViewManager_o *)UserServantEntity__getMagnification(this, Entity, v13),
        !Entity) )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return Entity->fields.sellMana * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellQp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4185EE6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EE6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  if ( !v11
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (WebViewManager_o *)UserServantEntity__getMagnification(this, Entity, v13),
        !Entity) )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return Entity->fields.sellQp * (_DWORD)Instance;
}


int32_t __fastcall UserServantEntity__getSellRarePri(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  ServantEntity_o *Entity; // x20
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4185EE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EE8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  if ( !v11
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Instance = (WebViewManager_o *)UserServantEntity__getMagnification(this, Entity, v13),
        !Entity) )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x22
  ServantSkillEntity_o *UseEntity; // x0
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x22
  BalanceConfig_c *v16; // x8
  const MethodInfo *v17; // x2
  System_Int32_array *v18; // x23
  __int128 v19; // q0
  __int128 v20; // q1
  int64_t userSvtId; // x24
  signed __int64 v22; // x26
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t v25; // w0
  __int128 v26; // q0
  int32_t v27; // w25
  int64_t v28; // x0
  int32_t lv; // w27
  int64_t v30; // x28
  unsigned __int64 v31; // x21
  BalanceConfig_c *v32; // x0
  __int64 v34; // x0
  int32_t v36; // [xsp+2Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39[2]; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v36 = dispLimitCount;
  if ( (byte_4185EC9 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLimitCount);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_4185EC9 = 1;
  }
  memset(&v39[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AC505C(v13);
  UseEntity = **(ServantSkillEntity_o ***)(v13 + 184);
  if ( !UseEntity )
LABEL_39:
    sub_B2C434(UseEntity, *(_QWORD *)&dispLimitCount);
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)UseEntity,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v18 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v16->static_fields->SvtSkillListMax);
  if ( (v36 & 0x80000000) != 0 )
  {
    v36 = UserServantEntity__getDispLimitCount(this, 0, v17);
    if ( useUserSvtId )
      goto LABEL_13;
LABEL_15:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v39, -1LL, 0LL);
    v20 = *(_OWORD *)&v39[0].fields.currentCryptoKey;
    v19 = *(_OWORD *)&v39[0].fields.fakeValue;
    goto LABEL_19;
  }
  if ( !useUserSvtId )
    goto LABEL_15;
LABEL_13:
  v20 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  v19 = *(_OWORD *)&this->fields.id.fields.fakeValue;
LABEL_19:
  *(_OWORD *)&v39[1].fields.currentCryptoKey = v20;
  *(_OWORD *)&v39[1].fields.fakeValue = v19;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v38 = v39[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v38, 0LL);
  v22 = 0LL;
  while ( 1 )
  {
    v31 = v22;
    v32 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    if ( v22 >= v32->static_fields->SvtSkillListMax )
      return v18;
    v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v40.fields.currentCryptoKey = v24;
    *(_QWORD *)&v40.fields.fakeValue = v23;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
    v26 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v27 = v25;
    *(_OWORD *)&v39[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v39[0].fields.fakeValue = v26;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v37 = v39[0];
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v37, 0LL);
    lv = this->fields.lv;
    v30 = v28;
    UseEntity = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                          this->fields.limitCount,
                                          0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    v22 = v31 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  MasterData_WarQuestSelectionMaster,
                  v27,
                  (int)v31 + 1,
                  v30,
                  lv,
                  (int32_t)UseEntity,
                  v36,
                  -1,
                  specificLimitCount,
                  userSvtId,
                  0,
                  0LL);
    if ( UseEntity )
    {
      if ( !v18 )
        goto LABEL_39;
      if ( v31 >= v18->max_length )
      {
        v34 = sub_B2C460(UseEntity);
        sub_B2C400(v34, 0LL);
      }
      v18->m_Items[v31 + 1] = UseEntity->fields.skillId;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x19
  __int64 Instance; // x0
  WarQuestSelectionMaster_o *v24; // x0
  __int64 v25; // x20
  __int64 v26; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x19
  _BOOL4 IsServantEquip; // w22
  BalanceConfig_c *v29; // x0
  BalanceConfig_c *v30; // x0
  SkillInfo_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x2
  __int128 v39; // q0
  __int128 v40; // q1
  unsigned __int64 v41; // x27
  __int64 v42; // x23
  SkillInfo_o *v43; // x26
  __int64 v44; // x19
  __int64 v45; // x20
  _BOOL4 v46; // w28
  int32_t v47; // w0
  __int128 v48; // q0
  int32_t v49; // w19
  int64_t v50; // x0
  int32_t lv; // w22
  int64_t v52; // x20
  int32_t v53; // w5
  signed __int64 v54; // x25
  ServantSkillEntity_o *v55; // x19
  int32_t skillNum; // w8
  __int64 v57; // x19
  __int64 v58; // x20
  int32_t v59; // w0
  SkillInfo_array *v60; // x19
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // [xsp+28h] [xbp-128h]
  __int64 v70; // [xsp+30h] [xbp-120h]
  bool v71; // [xsp+3Ch] [xbp-114h]
  signed __int64 v72; // [xsp+40h] [xbp-110h]
  int64_t userSvtId; // [xsp+48h] [xbp-108h]
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+68h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80[2]; // [xsp+B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4185ECA & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&SkillInfo___TypeInfo, v19);
    sub_B2C35C(&SkillInfo_TypeInfo, v20);
    byte_4185ECA = 1;
  }
  memset(&v80[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v22 = **(_QWORD **)(v21 + 192);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AC505C(v22);
  Instance = **(_QWORD **)(v22 + 184);
  if ( !Instance )
    goto LABEL_63;
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  v24 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v81.fields.currentCryptoKey = v26;
  *(_QWORD *)&v81.fields.fakeValue = v25;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v81, 0LL);
  if ( !v27 )
    goto LABEL_63;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v27,
                        Instance,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_63;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  v70 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  if ( skillListNum > 0 )
  {
    if ( !IsServantEquip )
      goto LABEL_25;
    goto LABEL_21;
  }
  v29 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  skillListNum = v29->static_fields->SvtSkillListMax;
  if ( IsServantEquip )
  {
LABEL_21:
    v30 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    skillListNum = v30->static_fields->SvtEquipSkillListMax;
  }
LABEL_25:
  v31 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v31;
  sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v38);
    if ( useUserSvtId )
      goto LABEL_27;
  }
  else if ( useUserSvtId )
  {
LABEL_27:
    v40 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v39 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    goto LABEL_33;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v80, -1LL, 0LL);
  v40 = *(_OWORD *)&v80[0].fields.currentCryptoKey;
  v39 = *(_OWORD *)&v80[0].fields.fakeValue;
LABEL_33:
  *(_OWORD *)&v80[1].fields.currentCryptoKey = v40;
  *(_OWORD *)&v80[1].fields.fakeValue = v39;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v79 = v80[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v79, 0LL);
  if ( skillListNum >= 1 )
  {
    v72 = skillListNum;
    v41 = 0LL;
    v42 = 32LL;
    v69 = v70 + 32;
    v71 = finishEvent;
    while ( 1 )
    {
      v43 = (SkillInfo_o *)sub_B2C42C(SkillInfo_TypeInfo);
      SkillInfo___ctor(v43, 0LL);
      v45 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v44 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v82.fields.currentCryptoKey = v45;
      *(_QWORD *)&v82.fields.fakeValue = v44;
      v46 = IsServantEquip;
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v82, 0LL);
      v48 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v49 = v47;
      *(_OWORD *)&v80[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v80[0].fields.fakeValue = v48;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v78 = v80[0];
      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v78, 0LL);
      lv = this->fields.lv;
      v52 = v50;
      v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitCount, 0LL);
      Instance = (__int64)MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v54 = v41 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            MasterData_WarQuestSelectionMaster,
                            v49,
                            (int)v41 + 1,
                            v52,
                            lv,
                            v53,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            userSvtId,
                            v71,
                            0LL);
      if ( Instance )
      {
        if ( !v43 )
          break;
        v55 = (ServantSkillEntity_o *)Instance;
        v43->fields.id = *(_DWORD *)(Instance + 28);
        if ( !v70 )
          break;
        if ( v41 >= *(unsigned int *)(v70 + 24) )
          goto LABEL_64;
        v43->fields.lv = *(_DWORD *)(v69 + 4 * v41);
        if ( v41 >= *(unsigned int *)(v70 + 24) )
          goto LABEL_64;
        IsServantEquip = v46;
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v43->fields.charge,
          &v43->fields.title,
          &v43->fields.explanation,
          *(_DWORD *)(v69 + 4 * v41),
          v46,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v55, 0LL);
        v43->fields.strengthStatus = Instance;
        skillNum = v55->fields.skillNum;
        v43->fields.isUse = 1;
        v43->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v43 )
          break;
        IsServantEquip = v46;
        v43->fields.lv = -1;
        if ( !v46 )
        {
          v58 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v57 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v83.fields.currentCryptoKey = v58;
          *(_QWORD *)&v83.fields.fakeValue = v57;
          v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v83, 0LL);
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(
                                MasterData_WarQuestSelectionMaster,
                                v59,
                                v54,
                                0LL);
          if ( Instance )
          {
            v43->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v43->fields.title,
              &v43->fields.explanation,
              0LL);
          }
        }
      }
      v60 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_B2C41C(v43, v60->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v68 = sub_B2C454();
        sub_B2C400(v68, 0LL);
      }
      if ( v41 >= v60->max_length )
      {
LABEL_64:
        v67 = sub_B2C460(Instance);
        sub_B2C400(v67, 0LL);
      }
      *(Il2CppClass **)((char *)&v60->obj.klass + v42) = (Il2CppClass *)v43;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)v60 + v42),
        (System_Int32_array **)v43,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      v42 += 8LL;
      ++v41;
      if ( v54 >= v72 )
        return;
    }
LABEL_63:
    sub_B2C434(Instance, skillInfoList);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getSkillLevel(UserServantEntity_o *this, int32_t iIdx, const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0

  if ( (byte_4185EC7 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&iIdx);
    byte_4185EC7 = 1;
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
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v8; // x19
  int32_t skillLv3; // w8
  __int64 v10; // x20
  unsigned __int64 v11; // x23
  __int64 v13; // x0

  if ( (byte_4185EC8 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_4185EC8 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_B2C374(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
    sub_B2C434(0LL, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_18:
    v13 = sub_B2C460(v5);
    sub_B2C400(v13, 0LL);
  }
  skillLv3 = this->fields.skillLv3;
  v10 = 11LL;
  v5->_1.byval_arg.bits = skillLv3;
  while ( 1 )
  {
    v5 = BalanceConfig_TypeInfo;
    v11 = v10 - 8;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v11 >= v5->static_fields->SvtEquipSkillListMax )
      return v8;
    if ( v11 >= v8->max_length )
      goto LABEL_18;
    *((_DWORD *)&v8->obj.klass + v10++) = 1;
  }
}


void __fastcall UserServantEntity__getStatusUpInfo(
        UserServantEntity_o *this,
        int32_t *hpUp,
        int32_t *atkUp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  void *Instance; // x0
  __int64 v10; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  ServantLimitMaster_o *v14; // x22
  int32_t v15; // w0
  __int64 v16; // x8
  int32_t v17; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4185F11 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, hpUp);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4185F11 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
  v16 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v19.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v17 = v15;
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  if ( !v14 || (Instance = ServantLimitMaster__GetEntity(v14, v17, (int32_t)Instance, 0LL)) == 0LL )
LABEL_10:
    sub_B2C434(Instance, v10);
  *hpUp = *((_DWORD *)Instance + 9);
  *atkUp = *((_DWORD *)Instance + 11);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getSvtClassGroupType(
        UserServantEntity_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4185EEF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&classId);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EEF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     classId,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return *((_DWORD *)Instance + 13);
}


int32_t __fastcall UserServantEntity__getSvtClassId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185EED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185EED = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return *((_DWORD *)Instance + 20);
}


ServantExceedEntity_o *__fastcall UserServantEntity__getSvtExceedEnt(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  ServantExceedMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4185F15 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4185F15 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Instance = (WebViewManager_o *)UserServantEntity__getRarity(this, v7),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B2C434(Instance, v5);
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

  if ( (byte_4185EC5 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185EC5 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
}


bool __fastcall UserServantEntity__getTreasureDeviceInfo(
        UserServantEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        bool isLvOne,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  TreasureDvcInfo_o *v18; // x24
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  int32_t FriendshipRank; // w25
  __int64 v29; // x24
  __int64 v30; // x24
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v33; // x26
  __int64 v34; // x27
  ServantTreasureDvcMaster_o *v35; // x24
  TreasureDvcInfo_o **v36; // x19
  int32_t v37; // w0
  __int128 v38; // q1
  int32_t v39; // w26
  int64_t v40; // x0
  int32_t lv; // w27
  int64_t v42; // x28
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int64 v44; // x21
  __int64 v45; // x22
  TreasureDvcInfo_o **v46; // x28
  int32_t v47; // w0
  __int128 v48; // q0
  int32_t v49; // w21
  int64_t v50; // x0
  ServantTreasureDvcEntity_o *v51; // x21
  WarQuestSelectionMaster_o *v52; // x0
  __int64 v53; // x23
  __int64 v54; // x24
  ServantFlagMaster_o *v55; // x22
  DataManager_o *v56; // x22
  WarQuestSelectionMaster_o *v57; // x0
  __int64 v58; // x24
  __int64 v59; // x25
  ServantFlagReleaseMaster_o *v60; // x23
  WarQuestSelectionMaster_o *v61; // x0
  __int64 v62; // x23
  __int64 v63; // x24
  ServantFlagMaster_o *v64; // x20
  TreasureDvcInfo_o *v65; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4185EE3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFlagMaster___, tdInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, v17);
    byte_4185EE3 = 1;
  }
  v18 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v18, 0LL);
  *tdInfo = v18;
  sub_B2C2F8((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
  FriendshipRank = UserServantEntity__getFriendshipRank(this, v25);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v27);
  v29 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v30 = **(_QWORD **)(v29 + 192);
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    sub_AC505C(v30);
  Instance = **(DataManager_o ***)(v30 + 184);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v34 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v35 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v34;
  *(_QWORD *)&v70.fields.fakeValue = v33;
  v36 = tdInfo;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v70, 0LL);
  v38 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v39 = v37;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v38;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v68, 0LL);
  lv = this->fields.lv;
  v42 = v40;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                this->fields.limitCount,
                                0LL);
  if ( !v35 )
    goto LABEL_53;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v35,
                v39,
                v42,
                lv,
                (int32_t)Instance,
                dispLimitCount,
                FriendshipRank,
                beforeClearQuestId,
                0LL);
  if ( isLvOne )
  {
    v45 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v44 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v46 = v36;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v71.fields.currentCryptoKey = v45;
    *(_QWORD *)&v71.fields.fakeValue = v44;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v71, 0LL);
    v48 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v49 = v47;
    *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v69.fields.fakeValue = v48;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v67 = v69;
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v67, 0LL);
    v51 = ServantTreasureDvcMaster__getUseEntity(v35, v49, v50, 1, 0, 0, 0, -1, 0LL);
    if ( v51 )
    {
LABEL_25:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v52 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                Instance,
                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFlagMaster___);
        v54 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v53 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v55 = (ServantFlagMaster_o *)v52;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v72.fields.currentCryptoKey = v54;
        *(_QWORD *)&v72.fields.fakeValue = v53;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v72, 0LL);
        if ( v55 )
        {
          Instance = (DataManager_o *)ServantFlagMaster__getEntity(v55, (int32_t)Instance, 1, 0LL);
          if ( *v46 )
          {
            (*v46)->fields.id = v51->fields.treasureDeviceId;
            if ( *v46 )
            {
              v56 = Instance;
              (*v46)->fields.lv = this->fields.treasureDeviceLv1;
              if ( Instance )
              {
                Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_53;
                v57 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
                v59 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
                v58 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
                v60 = (ServantFlagReleaseMaster_o *)v57;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v73.fields.currentCryptoKey = v59;
                *(_QWORD *)&v73.fields.fakeValue = v58;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v73,
                                              0LL);
                if ( !v60 )
                  goto LABEL_53;
                Instance = (DataManager_o *)ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
                                              v60,
                                              (int32_t)Instance,
                                              *(_DWORD *)&v56->fields._DispLog,
                                              0LL);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                {
                  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_53;
                  v61 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                          Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFlagMaster___);
                  v63 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
                  v62 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
                  v64 = (ServantFlagMaster_o *)v61;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v74.fields.currentCryptoKey = v63;
                  *(_QWORD *)&v74.fields.fakeValue = v62;
                  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                v74,
                                                0LL);
                  if ( !v64 )
                    goto LABEL_53;
                  Instance = (DataManager_o *)ServantFlagMaster__getBeforeEnhanceTdId(
                                                v64,
                                                (int32_t)Instance,
                                                *(_DWORD *)&v56->fields._DispLog,
                                                0LL);
                  if ( (int)Instance >= 1 )
                  {
                    if ( !*v46 )
                      goto LABEL_53;
                    (*v46)->fields.id = (int)Instance;
                  }
                }
              }
              v65 = *v46;
              if ( *v46 )
              {
                Instance = (DataManager_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                              v51,
                                              &v65->fields.name,
                                              &v65->fields.explanation,
                                              &v65->fields.maxLv,
                                              &v65->fields.guageCount,
                                              &v65->fields.cardId,
                                              &v65->fields.strengthStatus,
                                              &v65->fields.treasureDeviceNum,
                                              v65->fields.lv,
                                              0LL);
                v65->fields.isUse = (unsigned __int8)Instance & 1;
                if ( *v46 )
                  return (*v46)->fields.isUse;
              }
            }
          }
        }
      }
LABEL_53:
      sub_B2C434(Instance, v26);
    }
  }
  else
  {
    v51 = UseEntity;
    v46 = v36;
    if ( UseEntity )
      goto LABEL_25;
  }
  return 0;
}


bool __fastcall UserServantEntity__getTreasureDeviceInfo_21659764(
        UserServantEntity_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
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
  void *Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x22
  int treasureDeviceLv1; // w8
  int64_t UserId; // x22
  const MethodInfo *v23; // x2
  int32_t DispLimitCount; // w21
  WarQuestSelectionMaster_o *v25; // x0
  __int64 v26; // x24
  __int64 v27; // x25
  UserServantCollectionMaster_o *v28; // x23
  const MethodInfo *v29; // x3
  int32_t v30; // w22
  __int64 v31; // x23
  __int64 v32; // x23
  ServantTreasureDvcMaster_o *v33; // x23
  int32_t v34; // w0
  __int128 v35; // q1
  int32_t v36; // w24
  int64_t v37; // x0
  __int64 v38; // x8
  int32_t lv; // w25
  int64_t v40; // x20
  ServantTreasureDvcEntity_o *UseEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4185EE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, tdLv);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4185EE4 = 1;
  }
  *tdMaxLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v19;
  *(_QWORD *)&v45.fields.fakeValue = v18;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v45, 0LL);
  if ( !v20 )
    goto LABEL_34;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v23);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = (UserServantCollectionMaster_o *)v25;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v27;
  *(_QWORD *)&v46.fields.fakeValue = v26;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v46, 0LL);
  if ( !v28 )
    goto LABEL_34;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(v28, UserId, (int32_t)Instance, v29);
  if ( !Instance )
    goto LABEL_34;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)Instance + 100),
          0LL);
  v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v32 = **(_QWORD **)(v31 + 192);
  if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
    sub_AC505C(v32);
  Instance = **(void ***)(v32 + 184);
  if ( !Instance )
    goto LABEL_34;
  v33 = (ServantTreasureDvcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
  v35 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v36 = v34;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v35;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v44;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v43, 0LL);
  v38 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v47.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  lv = this->fields.lv;
  v40 = v37;
  *(_QWORD *)&v47.fields.currentCryptoKey = v38;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
  if ( !v33 )
LABEL_34:
    sub_B2C434(Instance, v16);
  UseEntity = ServantTreasureDvcMaster__getUseEntity(v33, v36, v40, lv, (int32_t)Instance, DispLimitCount, v30, -1, 0LL);
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
  if ( !UserServantEntity__getTreasureDeviceInfo_21659764(this, &tdLv, &tdMaxLv, v2) )
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

  if ( (byte_4185EDF & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4185EDF = 1;
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


bool __fastcall UserServantEntity__getUniqueSvtRestriction_21657540(
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

  if ( (byte_4185EE0 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_4185EE0 = 1;
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_31226692(questRestrictionInfo, v13, partyItem, num, partyIndex, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall UserServantEntity__getUseSvtEqSkillInfo(
        UserServantEntity_o *this,
        int32_t targetLv,
        int32_t targetLimitCnt,
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
  __int64 v13; // x23
  __int64 v14; // x23
  DataManager_o *ServantSkillList; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  ServantSkillMaster_o *v19; // x23
  int datalist; // w8
  DataManager_o *v21; // x23
  unsigned int v22; // w20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x19
  DataManager_c **v24; // x8
  ServantSkillEntity_o *v25; // x24
  __int128 v26; // q0
  int64_t v27; // x0
  int32_t lv; // w25
  __int64 v29; // x27
  __int64 v30; // x28
  int64_t v31; // x26
  int32_t v32; // w0
  __int128 v33; // q0
  int64_t v34; // x0
  __int64 v36; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // [xsp+10h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4185EFC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&targetLv);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_4185EFC = 1;
  }
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AC505C(v14);
  ServantSkillList = **(DataManager_o ***)(v14 + 184);
  if ( !ServantSkillList )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         ServantSkillList,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v18;
  *(_QWORD *)&v43.fields.fakeValue = v17;
  ServantSkillList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v43, 0LL);
  if ( !v19 )
    goto LABEL_34;
  ServantSkillList = (DataManager_o *)ServantSkillMaster__getServantSkillList(v19, (int32_t)ServantSkillList, 0LL);
  if ( !ServantSkillList )
    goto LABEL_34;
  datalist = (int)ServantSkillList->fields.datalist;
  v21 = ServantSkillList;
  if ( datalist >= 1 )
  {
    v22 = 0;
    p_userId = &this->fields.userId;
    while ( 1 )
    {
      if ( v22 >= datalist )
      {
        v36 = sub_B2C460(ServantSkillList);
        sub_B2C400(v36, 0LL);
      }
      v24 = &v21->klass + (int)v22;
      v25 = (ServantSkillEntity_o *)v24[4];
      if ( !v25 )
        break;
      ServantSkillList = (DataManager_o *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)v24[4], 0, 0LL);
      if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
      {
        v26 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
        *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v42.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v41 = v42;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v41, 0LL);
        lv = this->fields.lv;
        v30 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v29 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v31 = v27;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v44.fields.currentCryptoKey = v30;
        *(_QWORD *)&v44.fields.fakeValue = v29;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v44, 0LL);
        ServantSkillList = (DataManager_o *)ServantSkillEntity__isUse(v25, v31, lv, v32, -1, -1, -1, -1LL, 0LL);
        if ( ((unsigned __int8)ServantSkillList & 1) == 0 )
        {
          v33 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
          *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
          *(_OWORD *)&v42.fields.fakeValue = v33;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v40 = v42;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v40, 0LL);
          ServantSkillList = (DataManager_o *)ServantSkillEntity__isUse(
                                                v25,
                                                v34,
                                                targetLv,
                                                targetLimitCnt,
                                                -1,
                                                -1,
                                                -1,
                                                -1LL,
                                                0LL);
          if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
          {
            ServantSkillList = (DataManager_o *)v37;
            if ( !v37 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v37,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
          }
        }
      }
      datalist = (int)v21->fields.datalist;
      if ( (int)++v22 >= datalist )
        goto LABEL_32;
    }
LABEL_34:
    sub_B2C434(ServantSkillList, v12);
  }
LABEL_32:
  ServantSkillList = (DataManager_o *)v37;
  if ( !v37 )
    goto LABEL_34;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v37,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeEntity_o *__fastcall UserServantEntity__getUserCommandCodeEntity(
        UserServantEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v11; // q1
  UserServantCommandCodeMaster_o *v12; // x21
  int64_t v13; // x0
  __int64 v14; // x22
  __int64 v15; // x23
  int64_t v16; // x20
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-50h]
  UserServantCommandCodeEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4185F1B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&index);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4185F1B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v11 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v12 = (UserServantCommandCodeMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v11;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v20 = v21;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v20, 0LL);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = v13;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v15;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
  if ( !v12 )
    goto LABEL_16;
  if ( UserServantCommandCodeMaster__TryGetEntity(v12, &entity, v16, (int)Instance, v17) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v18);
LABEL_16:
    sub_B2C434(Instance, v9);
  }
  return 0LL;
}


int64_t __fastcall UserServantEntity__getUserId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-30h]

  if ( (byte_4185EC4 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4185EC4 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v5, 0LL);
}


bool __fastcall UserServantEntity__get_IsRandomChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4185EC2 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v3);
    byte_4185EC2 = 1;
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
  v4 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( !v4->static_fields->enableRandomLimitCount )
    return 0;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  return OptionManager__GetRandomLimitCountOwn(0LL) || UserServantEntity__IsEnableOwnRandomLimitCount(this, v5);
}


bool __fastcall UserServantEntity__isAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4185F00 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185F00 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return this->fields.adjustAtk >= SLODWORD(Instance->fields.datalist);
}


bool __fastcall UserServantEntity__isAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4185EFE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185EFE = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return this->fields.adjustHp >= *(_DWORD *)&Instance->fields._DispLog;
}


bool __fastcall UserServantEntity__isExceedFriendshipMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x20
  WarEntity_o *v15; // x20
  WarQuestSelectionMaster_o *v16; // x0
  __int128 v17; // q1
  UserServantCollectionMaster_o *v18; // x21
  int64_t v19; // x0
  __int64 v20; // x8
  int64_t v21; // x19
  const MethodInfo *v22; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-50h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4185F14 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FriendshipMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4185F14 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v13;
  *(_QWORD *)&v28.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL);
  if ( !v14 )
    goto LABEL_18;
  v15 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v14,
          (int32_t)Instance,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v16 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v17 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v18 = (UserServantCollectionMaster_o *)v16;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v25 = v26;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v25, 0LL);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v29.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = v19;
  *(_QWORD *)&v29.fields.currentCryptoKey = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v29, 0LL);
  if ( !v18
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, v21, (int32_t)Instance, v22),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FriendshipMaster___),
        !v15)
    || !EntityDefinitely
    || !Instance )
  {
LABEL_18:
    sub_B2C434(Instance, v10);
  }
  return !FriendshipMaster__TryGetEntity(
            (FriendshipMaster_o *)Instance,
            &entity,
            v15->fields.eventId,
            v15->fields.lastQuestId + EntityDefinitely->fields.friendshipExceedCount + 1,
            0LL);
}


bool __fastcall UserServantEntity__isExceedLvMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v5; // x1
  __int64 Rarity; // x0
  __int64 v7; // x1
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185F13 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4185F13 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  Rarity = UserServantEntity__getRarity(this, v5);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(Rarity, v7);
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

  if ( (byte_4185EF3 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185EF3 = 1;
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
  return v6 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8, 0LL);
}


bool __fastcall UserServantEntity__isSecondAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4185F01 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185F01 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return this->fields.adjustAtk == LODWORD(Instance->fields.lookup);
}


bool __fastcall UserServantEntity__isSecondAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4185EFF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185EFF = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      Rarity,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return this->fields.adjustHp == HIDWORD(Instance->fields.datalist);
}


void __fastcall UserServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserServantEntity___c_StaticFields *static_fields; // x0

  if ( (byte_41856D7 & 1) == 0 )
  {
    sub_B2C35C(&UserServantEntity___c_TypeInfo, v1);
    byte_41856D7 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserServantEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserServantEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserServantEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantEntity___c___getBaseFriendPointUpVal_b__51_0(
        UserServantEntity___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}