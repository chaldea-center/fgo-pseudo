void __fastcall UserServantEntity___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall UserServantEntity___ctor(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F81A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, method);
    byte_40F81A7 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserServantEntity___ctor_21432252(
        UserServantEntity_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  __int128 v5; // q1
  __int128 v6; // q1

  if ( (byte_40F81A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, e);
    byte_40F81A8 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_B170D4();
  v5 = *(_OWORD *)&e->fields.id.fields.fakeValue;
  *(_OWORD *)&this->fields.id.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.id.fields.fakeValue = v5;
  v6 = *(_OWORD *)&e->fields.userId.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&e->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v6;
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


void __fastcall UserServantEntity___ctor_21432560(
        UserServantEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t userId; // x21
  __int128 v8; // q1
  int32_t maxLimitCount; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F81A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, e);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_40F81A9 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_B170D4();
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

  if ( (byte_40F81A6 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40F81A6 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v5, 0LL);
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

  if ( (byte_40F81E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, maxAjustHp);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantRarityMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40F81E5 = 1;
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
        Rarity = UserServantEntity__getRarity(this, v25),
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_40F820F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, idList);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    byte_40F820F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v18;
  *(_QWORD *)&v30.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL);
  v21 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v22 = v20;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v21;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v28 = v29;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v28, 0LL);
  v24 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v25 = v23;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v24;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v27, 0LL);
  if ( !v19 )
    sub_B170D4();
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


void __fastcall UserServantEntity__GetAppendPassiveSkillInfo_21474452(
        UserServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v6; // x1
  __int64 v7; // x2
  SkillInfo_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Int32_array *v19; // x8
  unsigned __int64 v20; // x21
  __int64 v21; // x22
  SkillInfo_o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  SkillInfo_array *v26; // x24
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array *lvList; // [xsp+8h] [xbp-58h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-48h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-40h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_40F8210 & 1) == 0 )
  {
    sub_B16FFC(&SkillInfo___TypeInfo, skillInfoList);
    sub_B16FFC(&SkillInfo_TypeInfo, v6);
    byte_40F8210 = 1;
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
    || (v8 = (SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, idList->max_length, v7),
        *skillInfoList = v8,
        sub_B16F98(
          (BattleServantConfConponent_o *)skillInfoList,
          (System_Int32_array **)v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        (v19 = idList) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  v20 = 0LL;
  v21 = 32LL;
  while ( (__int64)v20 < (int)v19->max_length )
  {
    v22 = (SkillInfo_o *)sub_B170CC(SkillInfo_TypeInfo, v15, v16, v17, v18);
    SkillInfo___ctor(v22, 0LL);
    if ( !idList )
      goto LABEL_18;
    if ( v20 >= idList->max_length )
    {
LABEL_20:
      sub_B17100(v23, v24, v25);
      sub_B170A0();
    }
    if ( !v22 )
      goto LABEL_18;
    v22->fields.id = idList->m_Items[v20 + 1];
    if ( !lvList )
      goto LABEL_18;
    if ( v20 >= lvList->max_length )
      goto LABEL_20;
    v22->fields.lv = lvList->m_Items[v20 + 1];
    if ( !releaseStateList )
      goto LABEL_18;
    if ( v20 >= releaseStateList->max_length )
      goto LABEL_20;
    v22->fields.isUse = releaseStateList->m_Items[v20 + 4];
    v26 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_18;
    v23 = sub_B170BC(v22, v26->obj.klass->_1.element_class);
    if ( !v23 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    if ( v20 >= v26->max_length )
      goto LABEL_20;
    v26->m_Items[v20] = v22;
    sub_B16F98(
      (BattleServantConfConponent_o *)((char *)v26 + v21),
      (System_Int32_array **)v22,
      v25,
      v27,
      v28,
      v29,
      v30,
      v31);
    v19 = idList;
    ++v20;
    v21 += 8LL;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x21
  int32_t v17; // w0
  ServantEntity_o *Entity; // x23
  WebViewManager_o *v19; // x0
  SkillLvMaster_o *v20; // x21
  const MethodInfo *v21; // x5
  __int64 id; // x1
  __int64 lv; // x2
  const MethodInfo *v24; // x7
  unsigned __int64 v25; // x25
  char v26; // w24
  SkillLvEntity_o *v27; // x0
  SkillLvEntity_o *IsServantEquip; // x0
  BalanceConfig_c *v29; // x8
  int32_t *p_SvtEquipSkillListMax; // x8
  signed __int64 v31; // x22
  unsigned __int64 v32; // x23
  SkillInfo_o *v33; // x8
  SkillInfo_array *v35; // [xsp+0h] [xbp-60h] BYREF
  System_String_array *explanationList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_40F81C5 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F81C5 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  v35 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v15;
  *(_QWORD *)&v39.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v39, 0LL);
  if ( !v16 )
    goto LABEL_47;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v16,
                                v17,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_47;
  v20 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v19,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v21);
  if ( idList )
  {
    v25 = 0LL;
    v26 = 0;
    while ( 1 )
    {
      IsServantEquip = (SkillLvEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        IsServantEquip = (SkillLvEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v25 >= IsServantEquip[2].fields.script->fields.version )
        break;
      if ( !idList )
        goto LABEL_47;
      if ( v25 >= idList->max_length )
      {
LABEL_48:
        sub_B17100(IsServantEquip, id, lv);
        sub_B170A0();
      }
      id = (unsigned int)idList->m_Items[v25 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v20 )
          goto LABEL_47;
        v27 = SkillLvMaster__GetEntity(v20, id, 1, 0LL);
        if ( v27 && SkillLvEntity__GetBonusUpVal(v27, eventUpVallInfo, questPhaseEntity, 0LL) )
          v26 = 1;
      }
      ++v25;
    }
  }
  else
  {
    v26 = 0;
  }
  UserServantEntity__getSkillInfo(this, &v35, -1, -1, 1, 0, -1, v24);
  if ( !Entity )
LABEL_47:
    sub_B170D4();
  IsServantEquip = (SkillLvEntity_o *)ServantEntity__get_IsServantEquip(Entity, 0LL);
  v29 = BalanceConfig_TypeInfo;
  if ( ((unsigned __int8)IsServantEquip & 1) != 0 )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v29 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v29->static_fields->SvtEquipSkillListMax;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v29 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v29->static_fields->SvtSkillListMax;
  }
  v31 = *p_SvtEquipSkillListMax;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    while ( v35 )
    {
      if ( v32 >= v35->max_length )
        goto LABEL_48;
      v33 = v35->m_Items[v32];
      if ( v33 )
      {
        id = (unsigned int)v33->fields.id;
        if ( (int)id >= 1 )
        {
          lv = (unsigned int)v33->fields.lv;
          if ( (int)lv >= 1 )
          {
            if ( !v20 )
              goto LABEL_47;
            IsServantEquip = SkillLvMaster__GetEntity(v20, id, lv, 0LL);
            if ( IsServantEquip )
            {
              IsServantEquip = (SkillLvEntity_o *)SkillLvEntity__GetBonusUpVal(
                                                    IsServantEquip,
                                                    eventUpVallInfo,
                                                    questPhaseEntity,
                                                    0LL);
              v26 |= (unsigned __int8)IsServantEquip;
            }
          }
        }
      }
      if ( (__int64)++v32 >= v31 )
        return v26 & 1;
    }
    goto LABEL_47;
  }
  return v26 & 1;
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  EventUpValInfo_o *v27; // x28
  EventUpValInfo_o **v28; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v38; // x22
  WebViewManager_o *v39; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v40; // x23
  const MethodInfo *v41; // x3
  int64_t v42; // x1
  __int64 v43; // x2
  __int64 v44; // x8
  unsigned __int64 v45; // x26
  char v46; // w27
  UserServantEntity_o *v47; // x0
  UserServantEntity_o *v48; // x21
  EventUpValInfo_o *v49; // x19
  __int64 v50; // x24
  __int64 v51; // x25
  int32_t v52; // w0
  const MethodInfo *v53; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_40F81C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, eventUpVallInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&EventUpValInfo_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40F81C4 = 1;
  }
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v56.fields.currentCryptoKey = v18;
  *(_QWORD *)&v56.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v56, 0LL);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v21);
  v27 = (EventUpValInfo_o *)sub_B170CC(EventUpValInfo_TypeInfo, v23, v24, v25, v26);
  EventUpValInfo___ctor(v27, setupInfo, v19, v20, DispLimitCount, 0, 0LL);
  v28 = eventUpVallInfo;
  *eventUpVallInfo = v27;
  sub_B16F98((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  Entity = QuestPhaseMaster__GetEntity(MasterData_WarQuestSelectionMaster, questId, questPhase, 0LL);
  if ( !Entity )
    return (unsigned __int8)Entity & 1;
  v38 = Entity;
  v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v39 )
LABEL_26:
    sub_B170D4();
  v40 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v39,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Entity = (QuestPhaseEntity_o *)UserServantEntity__GetBaseBonusUpVal(this, eventUpVallInfo, v38, v41);
  if ( equipIds )
  {
    v44 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v44 >= 1 )
    {
      v45 = 0LL;
      v46 = (unsigned __int8)Entity & 1;
      do
      {
        if ( v45 >= (unsigned int)v44 )
        {
          sub_B17100(Entity, v42, v43);
          sub_B170A0();
        }
        v42 = equipIds->m_Items[v45];
        if ( v42 >= 1 )
        {
          if ( !v40 )
            goto LABEL_26;
          v47 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                  v40,
                  v42,
                  (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !v47 )
            goto LABEL_26;
          v48 = v47;
          v49 = *v28;
          v51 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
          v50 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v57.fields.currentCryptoKey = v51;
          *(_QWORD *)&v57.fields.fakeValue = v50;
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v57, 0LL);
          if ( !v49 )
            goto LABEL_26;
          v28 = eventUpVallInfo;
          v49->fields.equipSvtId = v52;
          Entity = (QuestPhaseEntity_o *)UserServantEntity__GetBaseBonusUpVal(v48, eventUpVallInfo, v38, v53);
          LODWORD(v44) = equipIds->max_length;
          if ( ((unsigned __int8)Entity & 1) != 0 )
            v46 = 1;
        }
        ++v45;
      }
      while ( (__int64)v45 < (int)v44 );
      LOBYTE(Entity) = v46;
    }
  }
  return (unsigned __int8)Entity & 1;
}


System_Int32_array *__fastcall UserServantEntity__GetCategoryIdList(
        UserServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  __int64 lv; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x20
  unsigned __int64 v28; // x27
  SkillInfo_o *v29; // x8
  SkillLvEntity_o *v30; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x24
  unsigned __int64 v33; // x21
  unsigned __int64 max_length; // x9
  DataVals_o *v35; // x25
  int32_t v36; // w1
  int32_t Param; // w26
  int32_t v38; // w1
  int32_t v39; // w0
  System_Collections_Generic_HashSet_int__o *v40; // x19
  __int64 v41; // x2
  __int64 count; // x1
  System_Int32_array *v43; // x20
  System_Collections_Generic_HashSet_int__o *v45; // [xsp+0h] [xbp-B0h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v47; // [xsp+10h] [xbp-A0h] BYREF
  WarEntity_o *v48; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v49; // [xsp+30h] [xbp-80h] BYREF
  SkillLvEntity_o *v50; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_40F8212 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__CopyTo___66713984, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v16);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v17);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v18);
    sub_B16FFC(&int___TypeInfo, v19);
    byte_40F8212 = 1;
  }
  v50 = 0LL;
  entity = 0LL;
  v48 = 0LL;
  memset(&v49, 0, sizeof(v49));
  v45 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       enableSkillInfoList,
                                                       method,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v45,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_55;
  v26 = *(_QWORD *)&enableSkillInfoList->max_length;
  v27 = DataValsList;
  if ( (int)v26 >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)v26 )
      {
LABEL_56:
        sub_B17100(DataValsList, id, lv);
        sub_B170A0();
      }
      v29 = enableSkillInfoList->m_Items[v28];
      if ( v29 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v29->fields.id;
        if ( (int)id >= 1 )
        {
          lv = (unsigned int)v29->fields.lv;
          if ( (int)lv >= 1 )
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
              v30 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                if ( !v45 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v45,
                  id,
                  (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvEntity__getDataValsList(v30, 0LL);
                funcId = v30->fields.funcId;
                if ( !funcId )
                  goto LABEL_55;
                v32 = DataValsList;
                v33 = 0LL;
                p_list = &DataValsList->fields.list;
                while ( 1 )
                {
                  max_length = funcId->max_length;
                  if ( (__int64)v33 >= (int)max_length )
                    break;
                  if ( v33 >= max_length )
                    goto LABEL_56;
                  if ( !v27 )
                    goto LABEL_55;
                  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v27,
                                                                                  &entity,
                                                                                  funcId->m_Items[v33 + 1],
                                                                                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_55;
                    DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)FuncList__isAddState(
                                                                                    (int32_t)entity->fields.age,
                                                                                    0LL);
                    if ( ((unsigned __int8)DataValsList & 1) != 0 )
                    {
                      if ( !v32 )
                        goto LABEL_55;
                      if ( v33 >= LODWORD(v32->fields._MasterName_k__BackingField) )
                        goto LABEL_56;
                      if ( !entity )
                        goto LABEL_55;
                      v35 = (DataVals_o *)p_list[v33];
                      if ( !v35 )
                        goto LABEL_55;
                      DataVals__SetTempType(
                        (DataVals_o *)p_list[v33],
                        (FunctionMaster_o *)v27,
                        (int32_t)entity->fields.age,
                        0LL);
                      if ( DataVals__isParam(v35, 26, 0LL) )
                        v36 = 26;
                      else
                        v36 = 3;
                      Param = DataVals__GetParam(v35, v36, 0, 0LL);
                      if ( DataVals__isParam(v35, 27, 0LL) )
                        v38 = 27;
                      else
                        v38 = 4;
                      v39 = DataVals__GetParam(v35, v38, 0, 0LL);
                      DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvMaster__TryGetEntity(
                                                                                      Master_WarQuestSelectionMaster,
                                                                                      &v50,
                                                                                      Param,
                                                                                      v39,
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
                            (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                      }
                    }
                  }
                  funcId = v30->fields.funcId;
                  ++v33;
                  if ( !funcId )
                    goto LABEL_55;
                }
              }
            }
          }
        }
      }
      LODWORD(v26) = enableSkillInfoList->max_length;
    }
    while ( (__int64)++v28 < (int)v26 );
  }
  v40 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       id,
                                                       lv,
                                                       v24,
                                                       v25);
  System_Collections_Generic_HashSet_int____ctor(
    v40,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( !v45 )
    goto LABEL_55;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v47,
    v45,
    (const MethodInfo_21D8A88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v49 = v47;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v49,
            (const MethodInfo_207182C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    if ( !v27 )
      sub_B170D4();
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v27,
           &v48,
           (int32_t)v49.fields._current,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__) )
    {
      if ( !v48 )
        sub_B170D4();
      if ( !v40 )
        sub_B170D4();
      System_Collections_Generic_HashSet_int___Add(
        v40,
        HIDWORD(v48->fields.emptyMessage),
        (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v49,
    (const MethodInfo_2071828 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v40 )
LABEL_55:
    sub_B170D4();
  count = (unsigned int)v40->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v43 = (System_Int32_array *)sub_B17014(int___TypeInfo, count, v41);
  System_Collections_Generic_HashSet_int___CopyTo_35493032(
    v40,
    v43,
    (const MethodInfo_21D94A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___66713984);
  return v43;
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
  int32_t v13; // w0
  System_Int32_array *result; // x0
  const MethodInfo *v15; // x3
  bool IsKeepServantEquip; // w8
  UserServantEntity_o *v17; // x0
  const MethodInfo *v18; // x2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40F8206 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_40F8206 = 1;
  }
  skillInfoList = 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(v7);
  v8 = **(DataManager_o ***)(v7 + 184);
  if ( !v8 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v8,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( !v12 )
LABEL_18:
    sub_B170D4();
  result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v12,
                                   v13,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsKeepServantEquip )
    {
      UserServantEntity__getEquipSkillInfo(this, &skillInfoList, 1, v15);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v17, skillInfoList, v18);
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

  if ( (byte_40F81AB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v8);
    byte_40F81AB = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_int__o *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x8
  unsigned __int64 v28; // x21
  int32_t v29; // w25
  BalanceConfig_c *v30; // x0
  int32_t v31; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v3 = costumeIds;
  if ( (byte_40F820D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, costumeIds);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v5);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_40F820D = 1;
  }
  if ( !v3 )
    v3 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, method);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v13;
  *(_QWORD *)&v33.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v33, 0LL);
  v15 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v34.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v34.fields.currentCryptoKey = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardSelectList = ImageLimitCount__GetCardSelectList(v16, v17, v3, 0LL);
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !CardSelectList )
    goto LABEL_29;
  v27 = *(_QWORD *)&CardSelectList->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)v27 )
      {
        sub_B17100(v24, v25, v26);
        sub_B170A0();
      }
      v29 = CardSelectList->m_Items[v28 + 1];
      if ( v29 == -1 )
      {
        v31 = -1;
        if ( !v23 )
          goto LABEL_29;
      }
      else
      {
        v30 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v30 = BalanceConfig_TypeInfo;
        }
        if ( v29 >= v30->static_fields->ServantLimitMax )
          v31 = v29;
        else
          v31 = v29 + 1;
        if ( !v23 )
          goto LABEL_29;
      }
      System_Collections_Generic_List_int___Add(
        v23,
        v31,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v27) = CardSelectList->max_length;
    }
    while ( (__int64)++v28 < (int)v27 );
  }
  if ( !v23 )
LABEL_29:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t v12; // w0
  System_Int32_array *result; // x0
  const MethodInfo *v14; // x7
  bool IsServant; // w8
  UserServantEntity_o *v16; // x0
  const MethodInfo *v17; // x2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_40F8213 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&skillListNum);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40F8213 = 1;
  }
  skillInfoList = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v10;
  *(_QWORD *)&v19.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
  if ( !v11 )
    sub_B170D4();
  result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v11,
                                   v12,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( result )
  {
    IsServant = ServantEntity__get_IsServant((ServantEntity_o *)result, 0LL);
    result = 0LL;
    if ( IsServant )
    {
      UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, skillListNum, v14);
      if ( skillInfoList )
        return UserServantEntity__GetCategoryIdList(v16, skillInfoList, v17);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x22
  __int64 v25; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x21
  int32_t v27; // w0
  ServantEntity_o *v28; // x0
  const MethodInfo *v29; // x2
  __int64 v30; // x21
  int32_t DispLimitCount; // w0
  const MethodInfo *v32; // x5
  TreasureDvcLvMaster_o *v33; // x0
  TreasureDvcLvMaster_o *v34; // x19
  TreasureDvcLvEntity_o *v35; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x19
  SkillLvMaster_o *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Collections_Generic_HashSet_int__o *v42; // x27
  DataVals_array *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x8
  DataVals_array *v49; // x24
  unsigned __int64 v50; // x20
  unsigned __int64 v51; // x9
  DataVals_o *v52; // x25
  int32_t v53; // w1
  int32_t Param; // w26
  int32_t v55; // w1
  int32_t v56; // w0
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *v58; // x22
  int32_t v59; // w26
  int32_t v60; // w27
  void *v61; // x8
  System_Collections_Generic_HashSet_int__o *v62; // x20
  __int64 v63; // x2
  __int64 count; // x1
  TreasureDvcLvMaster_o *v66; // [xsp+0h] [xbp-C0h]
  DataVals_o **m_Items; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v68; // [xsp+10h] [xbp-B0h] BYREF
  WarEntity_o *v69; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v70; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v71; // [xsp+48h] [xbp-78h] BYREF
  TreasureDvcLvEntity_o *v72; // [xsp+50h] [xbp-70h] BYREF
  SkillLvEntity_o *v73; // [xsp+58h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_40F8214 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, isLvOne);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__CopyTo___66713984, v15);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v18);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v19);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v20);
    sub_B16FFC(&int___TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    byte_40F8214 = 1;
  }
  tdInfo = 0LL;
  v73 = 0LL;
  entity = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v69 = 0LL;
  memset(&v70, 0, sizeof(v70));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v25 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v76.fields.currentCryptoKey = v25;
  *(_QWORD *)&v76.fields.fakeValue = v24;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v76, 0LL);
  if ( !v26 )
    goto LABEL_58;
  v28 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v26,
                             v27,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v28 )
    return 0LL;
  v30 = 0LL;
  if ( ServantEntity__get_IsServant(v28, 0LL) )
  {
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v29);
    if ( !UserServantEntity__getTreasureDeviceInfo(this, &tdInfo, DispLimitCount, -1, isLvOne, v32) )
      return 0LL;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v33 = (TreasureDvcLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !tdInfo )
      goto LABEL_58;
    v34 = v33;
    if ( !v33 )
      goto LABEL_58;
    v35 = TreasureDvcLvMaster__GetEntity(v33, tdInfo->fields.id, tdInfo->fields.lv, 0LL);
    v30 = (__int64)v35;
    if ( v35 )
    {
      if ( !v35->fields.funcId )
        return 0LL;
      v66 = v34;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
      v37 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v42 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v38,
                                                           v39,
                                                           v40,
                                                           v41);
      System_Collections_Generic_HashSet_int____ctor(
        v42,
        (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
      if ( !v42 )
        goto LABEL_58;
      System_Collections_Generic_HashSet_int___UnionWith(
        v42,
        *(System_Collections_Generic_IEnumerable_T__o **)(v30 + 32),
        (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      DataValsList = TreasureDvcLvEntity__getDataValsList((TreasureDvcLvEntity_o *)v30, 100, 0LL);
      v48 = *(_QWORD *)(v30 + 32);
      if ( !v48 )
        goto LABEL_58;
      m_Items = DataValsList->m_Items;
      v49 = DataValsList;
      v50 = 0LL;
      while ( 1 )
      {
        v51 = *(unsigned int *)(v48 + 24);
        if ( (__int64)v50 >= (int)v51 )
        {
          v62 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                               System_Collections_Generic_HashSet_int__TypeInfo,
                                                               v44,
                                                               v45,
                                                               v46,
                                                               v47);
          System_Collections_Generic_HashSet_int____ctor(
            v62,
            (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
          System_Collections_Generic_HashSet_int___GetEnumerator(
            &v68,
            v42,
            (const MethodInfo_21D8A88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
          v70 = v68;
          while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                    &v70,
                    (const MethodInfo_207182C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
          {
            if ( !v36 )
              sub_B170D4();
            if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v36,
                   &v69,
                   (int32_t)v70.fields._current,
                   (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__) )
            {
              if ( !v69 )
                sub_B170D4();
              if ( !v62 )
                sub_B170D4();
              System_Collections_Generic_HashSet_int___Add(
                v62,
                HIDWORD(v69->fields.emptyMessage),
                (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose(
            &v70,
            (const MethodInfo_2071828 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
          if ( v62 )
          {
            count = (unsigned int)v62->fields._count;
            if ( (int)count >= 1 )
            {
              v30 = sub_B17014(int___TypeInfo, count, v63);
              System_Collections_Generic_HashSet_int___CopyTo_35493032(
                v62,
                (System_Int32_array *)v30,
                (const MethodInfo_21D94A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___66713984);
              return (System_Int32_array *)v30;
            }
            return 0LL;
          }
LABEL_58:
          sub_B170D4();
        }
        if ( v50 >= v51 )
          goto LABEL_71;
        if ( !v36 )
          goto LABEL_58;
        DataValsList = (DataVals_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           v36,
                                           &entity,
                                           *(_DWORD *)(v48 + 4 * v50 + 32),
                                           (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_58;
          DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v49 )
              goto LABEL_58;
            if ( v50 >= v49->max_length )
            {
LABEL_71:
              sub_B17100(DataValsList, v44, v45);
              sub_B170A0();
            }
            if ( !entity )
              goto LABEL_58;
            v52 = m_Items[v50];
            if ( !v52 )
              goto LABEL_58;
            DataVals__SetTempType(m_Items[v50], (FunctionMaster_o *)v36, (int32_t)entity->fields.age, 0LL);
            v53 = DataVals__isParam(v52, 26, 0LL) ? 26 : 3;
            Param = DataVals__GetParam(v52, v53, 0, 0LL);
            v55 = DataVals__isParam(v52, 27, 0LL) ? 27 : 4;
            v56 = DataVals__GetParam(v52, v55, 0, 0LL);
            if ( !v37 )
              goto LABEL_58;
            if ( SkillLvMaster__TryGetEntity(v37, &v73, Param, v56, 0LL) )
            {
              if ( !v73 )
                goto LABEL_58;
              funcId = (System_Collections_Generic_IEnumerable_T__o *)v73->fields.funcId;
              if ( funcId )
                System_Collections_Generic_HashSet_int___UnionWith(
                  v42,
                  funcId,
                  (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
            DataValsList = (DataVals_array *)DataVals__isParam(v52, 92, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              DataValsList = (DataVals_array *)DataVals__isParam(v52, 93, 0LL);
              if ( ((unsigned __int8)DataValsList & 1) != 0 )
              {
                v58 = v42;
                v59 = DataVals__GetParam(v52, 92, 0, 0LL);
                v60 = DataVals__GetParam(v52, 93, 0, 0LL);
                if ( DataVals__isParam(v52, 95, 0LL) )
                {
                  DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v66, &v72, v59, v60, 0LL);
                  v42 = v58;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v61 = v72;
                    if ( !v72 )
                      goto LABEL_58;
LABEL_55:
                    v44 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v61 + 4);
                    if ( v44 )
                      System_Collections_Generic_HashSet_int___UnionWith(
                        v42,
                        v44,
                        (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                  }
                }
                else
                {
                  DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(v37, &v71, v59, v60, 0LL);
                  v42 = v58;
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    v61 = v71;
                    if ( !v71 )
                      goto LABEL_58;
                    goto LABEL_55;
                  }
                }
              }
            }
          }
        }
        v48 = *(_QWORD *)(v30 + 32);
        ++v50;
        if ( !v48 )
          goto LABEL_58;
      }
    }
  }
  return (System_Int32_array *)v30;
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
  int32_t v16; // w0
  const MethodInfo *v17; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-50h]
  UserServantCommandCardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40F8204 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_40F8204 = 1;
  }
  entity = 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(v7);
  v8 = **(DataManager_o ***)(v7 + 184);
  if ( !v8 )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v8,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  v10 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v11 = (UserServantCommandCardMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v19, 0LL);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v14;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
  if ( !v11 )
LABEL_16:
    sub_B170D4();
  UserServantCommandCardMaster__TryGetEntity(v11, &entity, v15, v16, v17);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F8209 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8209 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      v11,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return ServantEntity__get_IsChocolateSvtEquip(Entity, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F81EC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81EC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      v11,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return ServantEntity__checkIsCombineMaterialSvt(Entity, 0LL);
}


bool __fastcall UserServantEntity__IsCombineMaterial(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F81D6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81D6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      v11,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return ServantEntity__get_IsCombineMaterial(Entity, 0LL);
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

  if ( (byte_40F820A & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F820A = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL) == 1;
}


bool __fastcall UserServantEntity__IsEnableSupportRandomLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_40F820B & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F820B = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL) == 1;
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
  UserServantEntity__getTreasureDeviceInfo_21453148(this, &tdLv, &tdMaxLv, v3);
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
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  char v13; // w22
  WebViewManager_o *v14; // x0
  UserCombineExpMaster_o *v15; // x0
  __int128 v16; // q1
  int64_t v17; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21[2]; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+88h] [xbp-38h] BYREF

  if ( (byte_40F820E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCombineExpMaster___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F820E = 1;
  }
  memset(&v22, 0, sizeof(v22));
  memset(&v21[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v13 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    if ( !v22.fields.current )
      sub_B170D4();
    v13 |= HIDWORD(v22.fields.current[1].klass) == 27;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (v13 & 1) == 0 )
  {
LABEL_18:
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v14
    || (v15 = (UserCombineExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v14,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCombineExpMaster___)) == 0LL )
  {
LABEL_21:
    sub_B170D4();
  }
  UserCombineExpMaster__GetUserSvtId(v21, v15, 0LL);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v20, 0LL);
  v19 = v21[1];
  if ( v17 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v19, 0LL) )
    goto LABEL_18;
  LOBYTE(CombineEventCampaigns) = 1;
  return (char)CombineEventCampaigns;
}


bool __fastcall UserServantEntity__IsFriendShipSvtEquip(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F8207 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8207 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      v11,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return ServantEntity__get_IsFriendShipSvtEquip(Entity, 0LL);
}


bool __fastcall UserServantEntity__IsHeroine(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F81E2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81E2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      v11,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return ServantEntity__checkIsHeroineSvt(Entity, 0LL);
}


bool __fastcall UserServantEntity__IsIgnoreCombineLimitSpecial(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F8208 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8208 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      v11,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return ServantEntity__get_IsIgnoreCombineLimitSpecial(Entity, 0LL);
}


bool __fastcall UserServantEntity__IsLeave(UserServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F81DE & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40F81DE = 1;
  }
  if ( !UserServantEntity__IsHeroine(this, method) )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28023340(126, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F8211 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8211 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      v11,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return ServantEntity__get_IsServantMaterialTd(Entity, 0LL);
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

  if ( (byte_40F8205 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&battleVoice);
    byte_40F8205 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v8, 0LL) != battleVoice;
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

  if ( (byte_40F81DC & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_B16FFC(&UserServantNewManager_TypeInfo, v4);
    byte_40F81DC = 1;
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
  if ( v7 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v13, 0LL) )
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
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v12, 0LL);
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

  EventServant = UserServantEntity__getEventServant(this, method);
  if ( EventServant )
  {
    v5 = UserServantEntity__getEventServant(this, v4);
    if ( !v5 )
      sub_B170D4();
    LOBYTE(EventServant) = EventServantEntity__IsProtectedDuringEvent(v5, 0LL);
  }
  return (char)EventServant;
}


bool __fastcall UserServantEntity__IsSetRandomLimitCountValue(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_40F820C & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F820C = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL) > 0;
}


bool __fastcall UserServantEntity__IsStatusUp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F81ED & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81ED = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      v11,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return ServantEntity__get_IsStatusUp(Entity, 0LL);
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

  if ( (byte_40F81C9 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_40F81C9 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
  return QuestRestrictionInfo__IsUniqueIndividuality_31244328(questRestrictionInfo, v7, v8, DispLimitCount, 0LL);
}


bool __fastcall UserServantEntity__IsUniqueIndividualityRestriction_21451324(
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

  if ( (byte_40F81CA & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_40F81CA = 1;
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v15);
  return QuestRestrictionInfo__IsUniqueIndividuality_31244976(
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

  if ( (byte_40F81DD & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_B16FFC(&UserServantNewManager_TypeInfo, v3);
    byte_40F81DD = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v6, 0LL);
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

  if ( (byte_40F81CD & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, inId);
    byte_40F81CD = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v7, 0LL) == inId;
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
  UserServantEntity__getTreasureDeviceInfo_21453148(this, &tdLv, &tdMaxLv, v3);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F8201 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineMaster___, *(_QWORD *)&materialId);
    sub_B16FFC(&Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F8201 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             materialId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__GetEntity__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v12; // x1
  int32_t Rarity; // w0
  WarEntity_o *Entity; // x0
  int32_t age_high; // w23
  WarEntity_o *v16; // x22
  BalanceConfig_c *v17; // x0
  int32_t age; // w20
  BalanceConfig_c *v19; // x0

  if ( (byte_40F81EA & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, hpData);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantRarityMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F81EA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Rarity = UserServantEntity__getRarity(this, v12),
        !MasterData_WarQuestSelectionMaster)
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   Rarity,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  age_high = *(&Entity->fields.id + 1);
  v16 = Entity;
  v17 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustHp >= age_high )
    age_high = HIDWORD(v16->fields.age);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  *hpData = v17->static_fields->StatusUpAdjustHp * age_high;
  age = (int32_t)v16->fields.age;
  v19 = BalanceConfig_TypeInfo;
  if ( this->fields.adjustAtk >= age )
    age = (int32_t)v16->fields.name;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  *atkData = v19->static_fields->StatusUpAdjustAtk * age;
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
  int32_t v14; // w0
  SvtUseSkillData_o *SkillData; // x19
  WarQuestSelectionMaster_o *v16; // x0
  __int128 v17; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v18; // x20
  int64_t v19; // x0
  __int64 v20; // x2
  struct System_Int32_array *svtSkillNumsList; // x8
  System_Int32_array **v22; // x0
  struct System_Int32_array **p_svtSkillLvList; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  WarQuestSelectionMaster_o *v30; // x0
  __int128 v31; // q0
  UserServantAppendPassiveSkillMaster_o *v32; // x22
  int64_t v33; // x0
  __int64 v34; // x8
  int64_t v35; // x21
  int32_t v36; // w0
  const MethodInfo *v37; // x4
  _BOOL8 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  struct System_Int32_array *unlockNums; // x8
  struct System_Int32_array *v42; // x10
  unsigned __int64 v43; // x8
  struct System_Int32_array *v44; // x10
  UserServantAppendPassiveSkillEntity_o *v45; // x11
  unsigned __int64 v46; // x10
  struct System_Int32_array *v47; // x12
  unsigned __int64 max_length; // x13
  struct System_Int32_array *v49; // x14
  struct System_Int32_array *v50; // x11
  UserServantEntity_o *v51; // x11
  __int64 v52; // x10
  __int64 v53; // x13
  unsigned __int64 v54; // x14
  unsigned __int64 v55; // x12
  struct System_Int32_array *v56; // x15
  __int64 v57; // x11
  struct System_Int32_array *v58; // x12
  struct System_Int32_array *v59; // x9
  unsigned __int64 v60; // x8
  struct System_Int32_array *v61; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+40h] [xbp-50h]
  UserServantAppendPassiveSkillEntity_o *v66; // [xsp+60h] [xbp-30h] BYREF
  UserServantEntity_o *entity; // [xsp+68h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_40F81B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_40F81B6 = 1;
  }
  v66 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v68.fields.currentCryptoKey = v12;
  *(_QWORD *)&v68.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v68, 0LL);
  if ( !v13 )
    goto LABEL_62;
  SkillData = ServantAppendPassiveSkillMaster__GetSkillData(v13, v14, 0LL);
  v16 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  v17 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v18 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v16;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v64 = v65;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v64, 0LL);
  if ( !v18 )
    goto LABEL_62;
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    v18,
    &entity,
    v19,
    (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
  if ( !SkillData )
    goto LABEL_62;
  svtSkillNumsList = SkillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_62;
  v22 = (System_Int32_array **)sub_B17014(int___TypeInfo, svtSkillNumsList->max_length, v20);
  SkillData->fields.svtSkillLvList = (struct System_Int32_array *)v22;
  p_svtSkillLvList = &SkillData->fields.svtSkillLvList;
  sub_B16F98((BattleServantConfConponent_o *)&SkillData->fields.svtSkillLvList, v22, v24, v25, v26, v27, v28, v29);
  v30 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  v31 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v32 = (UserServantAppendPassiveSkillMaster_o *)v30;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v31;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
  v34 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v69.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v35 = v33;
  *(_QWORD *)&v69.fields.currentCryptoKey = v34;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v69, 0LL);
  if ( !v32 )
    goto LABEL_62;
  v38 = UserServantAppendPassiveSkillMaster__TryGetEntity(v32, &v66, v35, v36, v37);
  if ( v38 )
  {
    if ( !v66 )
      goto LABEL_62;
    unlockNums = v66->fields.unlockNums;
    if ( !unlockNums )
      goto LABEL_62;
    if ( *(_QWORD *)&unlockNums->max_length )
    {
      v42 = SkillData->fields.svtSkillNumsList;
      if ( v42 )
      {
        v43 = 0LL;
        while ( 1 )
        {
          if ( (__int64)v43 >= (int)v42->max_length )
            return SkillData;
          v44 = *p_svtSkillLvList;
          if ( !*p_svtSkillLvList )
            goto LABEL_62;
          if ( v43 >= v44->max_length )
            goto LABEL_64;
          v44->m_Items[v43 + 1] = 0;
          v45 = v66;
          if ( !v66 )
            goto LABEL_62;
          v46 = 0LL;
          while ( 1 )
          {
            v47 = v45->fields.unlockNums;
            if ( !v47 )
              goto LABEL_62;
            max_length = v47->max_length;
            if ( (__int64)v46 >= (int)max_length )
              break;
            v49 = SkillData->fields.svtSkillNumsList;
            if ( !v49 )
              goto LABEL_62;
            if ( v43 >= v49->max_length || v46 >= max_length )
              goto LABEL_64;
            if ( v49->m_Items[v43 + 1] == v47->m_Items[v46 + 1] )
            {
              v50 = *p_svtSkillLvList;
              if ( !*p_svtSkillLvList )
                goto LABEL_62;
              if ( v43 >= v50->max_length )
                goto LABEL_64;
              v50->m_Items[v43 + 1] = 1;
              v45 = v66;
            }
            ++v46;
            if ( !v45 )
              goto LABEL_62;
          }
          v51 = entity;
          if ( entity )
            break;
LABEL_54:
          v42 = SkillData->fields.svtSkillNumsList;
          ++v43;
          if ( !v42 )
            goto LABEL_62;
        }
        v52 = 8LL;
        do
        {
          v53 = *(_QWORD *)&v51->fields.svtId.fields.currentCryptoKey;
          if ( !v53 )
            break;
          v54 = *(unsigned int *)(v53 + 24);
          v55 = v52 - 8;
          if ( v52 - 8 >= (int)v54 )
            goto LABEL_54;
          v56 = SkillData->fields.svtSkillNumsList;
          if ( !v56 )
            break;
          if ( v43 >= v56->max_length || v55 >= v54 )
            goto LABEL_64;
          if ( v56->m_Items[v43 + 1] == *(_DWORD *)(v53 + 4 * v52) )
          {
            v57 = *(_QWORD *)&v51->fields.svtId.fields.fakeValue;
            if ( !v57 )
              break;
            if ( v55 >= *(unsigned int *)(v57 + 24) )
              goto LABEL_64;
            v58 = *p_svtSkillLvList;
            if ( !*p_svtSkillLvList )
              break;
            if ( v43 >= v58->max_length )
              goto LABEL_64;
            v58->m_Items[v43 + 1] = *(_DWORD *)(v57 + 4 * v52);
            v51 = entity;
          }
          ++v52;
        }
        while ( v51 );
      }
LABEL_62:
      sub_B170D4();
    }
  }
  v59 = SkillData->fields.svtSkillNumsList;
  if ( !v59 )
    goto LABEL_62;
  v60 = 0LL;
  while ( (__int64)v60 < (int)v59->max_length )
  {
    v61 = *p_svtSkillLvList;
    if ( *p_svtSkillLvList )
    {
      if ( v60 >= v61->max_length )
      {
LABEL_64:
        sub_B17100(v38, v39, v40);
        sub_B170A0();
      }
      v61->m_Items[v60 + 1] = 0;
      v59 = SkillData->fields.svtSkillNumsList;
      ++v60;
      if ( v59 )
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v21; // x27
  __int64 v22; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x26
  int32_t v24; // w0
  WebViewManager_o *v25; // x0
  SkillLvMaster_o *v26; // x26
  const MethodInfo *v27; // x5
  __int64 id; // x1
  __int64 lv; // x2
  const MethodInfo *v30; // x7
  unsigned __int64 v31; // x28
  bool v32; // w27
  SkillLvEntity_o *Entity; // x0
  BalanceConfig_c *v34; // x0
  unsigned __int64 v35; // x24
  SkillInfo_o *v36; // x8
  SkillLvEntity_o *v37; // x0
  SkillInfo_array *skillInfoList; // [xsp+10h] [xbp-70h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-68h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_40F81C1 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40F81C1 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v22;
  *(_QWORD *)&v44.fields.fakeValue = v21;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v44, 0LL);
  if ( !v23
    || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v23,
          v24,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_38:
    sub_B170D4();
  }
  v26 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v25,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v27);
  if ( idList )
  {
    v31 = 0LL;
    v32 = 1;
    while ( 1 )
    {
      v34 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v34 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v31 >= v34->static_fields->SvtPassiveSkillListMax )
        break;
      if ( !idList )
        goto LABEL_38;
      if ( v31 >= idList->max_length )
      {
LABEL_39:
        sub_B17100(v34, id, lv);
        sub_B170A0();
      }
      id = (unsigned int)idList->m_Items[v31 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v26 )
          goto LABEL_38;
        Entity = SkillLvMaster__GetEntity(v26, id, 1, 0LL);
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
            return v32;
          }
        }
      }
      ++v31;
    }
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, finishEvent, -1, v30);
  v35 = 0LL;
  v32 = 1;
  while ( 1 )
  {
    v34 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v35 >= v34->static_fields->SvtSkillListMax )
      return 0;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( v35 >= skillInfoList->max_length )
      goto LABEL_39;
    v36 = skillInfoList->m_Items[v35];
    if ( v36 )
    {
      id = (unsigned int)v36->fields.id;
      if ( (int)id >= 1 )
      {
        lv = (unsigned int)v36->fields.lv;
        if ( (int)lv >= 1 )
        {
          if ( !v26 )
            goto LABEL_38;
          v37 = SkillLvMaster__GetEntity(v26, id, lv, 0LL);
          if ( v37 )
          {
            if ( SkillLvEntity__getEventUpVal(
                   v37,
                   wearersSvtId,
                   wearesLimitCount,
                   wearesDispLimitCount,
                   setupInfo,
                   baseEventId,
                   1,
                   1,
                   0LL) )
            {
              return v32;
            }
          }
        }
      }
    }
    ++v35;
  }
}


bool __fastcall UserServantEntity__getBaseEventUpVal_21448220(
        UserServantEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x22
  __int64 v13; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x20
  int32_t v15; // w0
  ServantEntity_o *Entity; // x22
  WebViewManager_o *v17; // x0
  SkillLvMaster_o *v18; // x20
  const MethodInfo *v19; // x5
  __int64 id; // x1
  __int64 lv; // x2
  const MethodInfo *v22; // x7
  unsigned __int64 v23; // x24
  char v24; // w23
  SkillLvEntity_o *v25; // x0
  SkillLvEntity_o *IsServantEquip; // x0
  BalanceConfig_c *v27; // x8
  int32_t *p_SvtEquipSkillListMax; // x8
  signed __int64 v29; // x21
  unsigned __int64 v30; // x22
  SkillInfo_o *v31; // x8
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_40F81C3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F81C3 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  skillInfoList = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v13;
  *(_QWORD *)&v37.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v37, 0LL);
  if ( !v14 )
    goto LABEL_47;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v14,
                                v15,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_47;
  v18 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v17,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  UserServantEntity__getPassiveSkillInfo(this, &idList, &titleList, &explanationList, -1, v19);
  if ( idList )
  {
    v23 = 0LL;
    v24 = 0;
    while ( 1 )
    {
      IsServantEquip = (SkillLvEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        IsServantEquip = (SkillLvEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v23 >= IsServantEquip[2].fields.script->fields.version )
        break;
      if ( !idList )
        goto LABEL_47;
      if ( v23 >= idList->max_length )
      {
LABEL_48:
        sub_B17100(IsServantEquip, id, lv);
        sub_B170A0();
      }
      id = (unsigned int)idList->m_Items[v23 + 1];
      if ( (int)id >= 1 )
      {
        if ( !v18 )
          goto LABEL_47;
        v25 = SkillLvMaster__GetEntity(v18, id, 1, 0LL);
        if ( v25 && SkillLvEntity__getEventUpVal_23627436(v25, eventUpVallInfo, 1, 1, 0, 0, 0LL) )
          v24 = 1;
      }
      ++v23;
    }
  }
  else
  {
    v24 = 0;
  }
  UserServantEntity__getSkillInfo(this, &skillInfoList, -1, -1, 1, 0, -1, v22);
  if ( !Entity )
LABEL_47:
    sub_B170D4();
  IsServantEquip = (SkillLvEntity_o *)ServantEntity__get_IsServantEquip(Entity, 0LL);
  v27 = BalanceConfig_TypeInfo;
  if ( ((unsigned __int8)IsServantEquip & 1) != 0 )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v27->static_fields->SvtEquipSkillListMax;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    p_SvtEquipSkillListMax = &v27->static_fields->SvtSkillListMax;
  }
  v29 = *p_SvtEquipSkillListMax;
  if ( (int)v29 >= 1 )
  {
    v30 = 0LL;
    while ( skillInfoList )
    {
      if ( v30 >= skillInfoList->max_length )
        goto LABEL_48;
      v31 = skillInfoList->m_Items[v30];
      if ( v31 )
      {
        id = (unsigned int)v31->fields.id;
        if ( (int)id >= 1 )
        {
          lv = (unsigned int)v31->fields.lv;
          if ( (int)lv >= 1 )
          {
            if ( !v18 )
              goto LABEL_47;
            IsServantEquip = SkillLvMaster__GetEntity(v18, id, lv, 0LL);
            if ( IsServantEquip )
            {
              IsServantEquip = (SkillLvEntity_o *)SkillLvEntity__getEventUpVal_23627436(
                                                    IsServantEquip,
                                                    eventUpVallInfo,
                                                    1,
                                                    1,
                                                    0,
                                                    0,
                                                    0LL);
              v24 |= (unsigned __int8)IsServantEquip;
            }
          }
        }
      }
      if ( (__int64)++v30 >= v29 )
        return v24 & 1;
    }
    goto LABEL_47;
  }
  return v24 & 1;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x21
  __int64 v14; // x22
  ServantSkillMaster_o *v15; // x20
  int32_t v16; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  BattleBuffData_BuffData_array *ServantSkillList; // x20
  UserServantEntity___c_c *v22; // x8
  struct UserServantEntity___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__52_0; // x21
  Il2CppObject *v25; // x22
  struct UserServantEntity___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 isEnable; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  int max_length; // w8
  unsigned int v37; // w27
  Il2CppClass **v38; // x8
  ServantSkillEntity_o *v39; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v42; // x24
  __int64 v43; // x25
  int64_t v44; // x23
  int32_t v45; // w0
  int32_t SkillLevel; // w0
  int32_t v48; // w0
  SkillLvEntity_o *SkillLvEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_40F81BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_ServantSkillEntity___, method);
    sub_B16FFC(&Method_System_Comparison_ServantSkillEntity___ctor__, v3);
    sub_B16FFC(&System_Comparison_ServantSkillEntity__TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_UserServantEntity___c__getBaseFriendPointUpType_b__52_0__, v9);
    sub_B16FFC(&UserServantEntity___c_TypeInfo, v10);
    byte_40F81BA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v14;
  *(_QWORD *)&v50.fields.fakeValue = v13;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
  if ( !v15 )
    goto LABEL_34;
  ServantSkillList = (BattleBuffData_BuffData_array *)ServantSkillMaster__getServantSkillList(v15, v16, 0LL);
  v22 = UserServantEntity___c_TypeInfo;
  if ( (BYTE3(UserServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v22 = UserServantEntity___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__52_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = UserServantEntity___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_ServantSkillEntity__TypeInfo,
                                                                           v17,
                                                                           v18,
                                                                           v19,
                                                                           v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__52_0,
      v25,
      Method_UserServantEntity___c__getBaseFriendPointUpType_b__52_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantSkillEntity___ctor__);
    v26 = UserServantEntity___c_TypeInfo->static_fields;
    v26->__9__52_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__52_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    ServantSkillList,
    (System_Comparison_T__o *)_9__52_0,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !ServantSkillList )
    goto LABEL_34;
  max_length = ServantSkillList->max_length;
  if ( max_length < 1 )
    return 0;
  v37 = 0;
  while ( 1 )
  {
    if ( v37 >= max_length )
    {
      sub_B17100(isEnable, v34, v35);
      sub_B170A0();
    }
    v38 = &ServantSkillList->obj.klass + (int)v37;
    v39 = (ServantSkillEntity_o *)v38[4];
    if ( !v39 )
      goto LABEL_34;
    isEnable = ServantSkillEntity__isEnable((ServantSkillEntity_o *)v38[4], 0, 0LL);
    if ( (isEnable & 1) != 0 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      lv = this->fields.lv;
      v43 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
      v42 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
      v44 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v51.fields.currentCryptoKey = v43;
      *(_QWORD *)&v51.fields.fakeValue = v42;
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v51, 0LL);
      isEnable = ServantSkillEntity__isUse(v39, v44, lv, v45, -1, -1, -1, -1LL, 0LL);
      if ( (isEnable & 1) != 0 )
      {
        SkillLevel = UserServantEntity__getSkillLevel(this, v39->fields.num - 1, v35);
        isEnable = ServantSkillEntity__getFriendPointUpVal(v39, SkillLevel, 0LL);
        if ( (int)isEnable >= 1 )
          break;
      }
    }
    max_length = ServantSkillList->max_length;
    if ( (int)++v37 >= max_length )
      return 0;
  }
  v48 = UserServantEntity__getSkillLevel(this, v39->fields.num - 1, v35);
  SkillLvEntity = ServantSkillEntity__getSkillLvEntity(v39, v48, 0LL);
  if ( !SkillLvEntity )
LABEL_34:
    sub_B170D4();
  return SkillLvEntity__getFriendPointUpType(SkillLvEntity, 0LL);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x21
  __int64 v14; // x22
  ServantSkillMaster_o *v15; // x20
  int32_t v16; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  BattleBuffData_BuffData_array *ServantSkillList; // x20
  UserServantEntity___c_c *v22; // x8
  struct UserServantEntity___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__51_0; // x21
  Il2CppObject *v25; // x22
  struct UserServantEntity___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 isEnable; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  int max_length; // w8
  unsigned int v37; // w27
  Il2CppClass **v38; // x8
  ServantSkillEntity_o *v39; // x21
  int64_t UserId; // x0
  int32_t lv; // w22
  __int64 v42; // x24
  __int64 v43; // x25
  int64_t v44; // x23
  int32_t v45; // w0
  int32_t SkillLevel; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_40F81B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_ServantSkillEntity___, method);
    sub_B16FFC(&Method_System_Comparison_ServantSkillEntity___ctor__, v3);
    sub_B16FFC(&System_Comparison_ServantSkillEntity__TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_UserServantEntity___c__getBaseFriendPointUpVal_b__51_0__, v9);
    sub_B16FFC(&UserServantEntity___c_TypeInfo, v10);
    byte_40F81B9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v14;
  *(_QWORD *)&v48.fields.fakeValue = v13;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v48, 0LL);
  if ( !v15 )
    goto LABEL_33;
  ServantSkillList = (BattleBuffData_BuffData_array *)ServantSkillMaster__getServantSkillList(v15, v16, 0LL);
  v22 = UserServantEntity___c_TypeInfo;
  if ( (BYTE3(UserServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity___c_TypeInfo);
    v22 = UserServantEntity___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__51_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = UserServantEntity___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_ServantSkillEntity__TypeInfo,
                                                                           v17,
                                                                           v18,
                                                                           v19,
                                                                           v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__51_0,
      v25,
      Method_UserServantEntity___c__getBaseFriendPointUpVal_b__51_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantSkillEntity___ctor__);
    v26 = UserServantEntity___c_TypeInfo->static_fields;
    v26->__9__51_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__51_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    ServantSkillList,
    (System_Comparison_T__o *)_9__51_0,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_ServantSkillEntity___);
  if ( !ServantSkillList )
    goto LABEL_33;
  max_length = ServantSkillList->max_length;
  if ( max_length >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= max_length )
      {
        sub_B17100(isEnable, v34, v35);
        sub_B170A0();
      }
      v38 = &ServantSkillList->obj.klass + (int)v37;
      v39 = (ServantSkillEntity_o *)v38[4];
      if ( !v39 )
        break;
      isEnable = ServantSkillEntity__isEnable((ServantSkillEntity_o *)v38[4], 0, 0LL);
      if ( (isEnable & 1) != 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        lv = this->fields.lv;
        v43 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v42 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v44 = UserId;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v49.fields.currentCryptoKey = v43;
        *(_QWORD *)&v49.fields.fakeValue = v42;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v49, 0LL);
        isEnable = ServantSkillEntity__isUse(v39, v44, lv, v45, -1, -1, -1, -1LL, 0LL);
        if ( (isEnable & 1) != 0 )
        {
          SkillLevel = UserServantEntity__getSkillLevel(this, v39->fields.num - 1, v35);
          isEnable = ServantSkillEntity__getFriendPointUpVal(v39, SkillLevel, 0LL);
          if ( (int)isEnable > 0 )
            return isEnable;
        }
      }
      max_length = ServantSkillList->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_31;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_31:
  LODWORD(isEnable) = 0;
  return isEnable;
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

  if ( (byte_40F81F2 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, ignoreRandomSettings);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_40F81F2 = 1;
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
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17, 0LL);
        v14 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v15 = v13;
        *(_QWORD *)&v18.fields.currentCryptoKey = v14;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  WarEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F81D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81D2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v10,
                   v11,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return Entity[1].fields.startType;
}


int32_t __fastcall UserServantEntity__getCombineQp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  int32_t v11; // w21
  int32_t v12; // w0
  ServantLimitEntity_o *Entity; // x20
  WebViewManager_o *v14; // x0
  CombineQpMaster_o *v15; // x0
  CombineQpEntity_o *v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40F81D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineQpMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81D8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v9;
  *(_QWORD *)&v18.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, v11, v12, 0LL),
        (v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v15 = (CombineQpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v14,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineQpMaster___),
        !Entity)
    || !v15
    || (v16 = CombineQpMaster__GetEntity(v15, Entity->fields.rarity, this->fields.lv, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  return v16->fields.qp;
}


int32_t __fastcall UserServantEntity__getCombineQpSvtEq(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  int32_t v11; // w21
  int32_t v12; // w0
  ServantLimitEntity_o *Entity; // x20
  WebViewManager_o *v14; // x0
  CombineQpSvtEquipMaster_o *v15; // x0
  CombineQpSvtEquipEntity_o *v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40F81E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81E3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v9;
  *(_QWORD *)&v18.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, v11, v12, 0LL),
        (v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v15 = (CombineQpSvtEquipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v14,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineQpSvtEquipMaster___),
        !Entity)
    || !v15
    || (v16 = CombineQpSvtEquipMaster__GetEntity(v15, Entity->fields.rarity, this->fields.lv, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  return v16->fields.qp;
}


int32_t __fastcall UserServantEntity__getCombineQpSvtExceed(UserServantEntity_o *this, const MethodInfo *method)
{
  ServantExceedEntity_o *SvtExceedEnt; // x0

  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(this, method);
  if ( !SvtExceedEnt )
    sub_B170D4();
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
      return BasicHelper__DecryptValue_19259816(this->fields.limitCount, 0LL);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v8; // q1
  WarQuestSelectionMaster_o *v9; // x20
  int64_t v10; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  int64_t v13; // x19
  UserServantCommandCodeMaster_o *v14; // x0
  const MethodInfo *v15; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_40F8202 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8202 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v8 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v9 = MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v17, 0LL);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v14 = (UserServantCommandCodeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
  if ( !v9 )
LABEL_12:
    sub_B170D4();
  return UserServantCommandCodeMaster__getCommandCodeIdList(v14, v13, (int32_t)v14, v15);
}


int32_t __fastcall UserServantEntity__getCost(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  WarEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F81EE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81EE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v10,
                   v11,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return (int32_t)Entity[1].fields.age;
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

  if ( (byte_40F81F0 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_40F81F0 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13, 0LL);
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
  DataManager_o *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x22
  BalanceConfig_c *v17; // x8
  SkillInfo_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int128 v25; // q0
  __int128 v26; // q1
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x19
  __int64 i; // x23
  SkillInfo_o *v33; // x24
  __int64 v34; // x25
  __int64 v35; // x26
  int32_t v36; // w0
  __int128 v37; // q0
  int32_t v38; // w25
  int64_t v39; // x0
  int32_t lv; // w26
  int64_t v41; // x27
  int32_t v42; // w5
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  ServantSkillEntity_o *v46; // x25
  int32_t skillNum; // w8
  SkillInfo_array *v48; // x25
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  unsigned __int64 v54; // x21
  BalanceConfig_c *v55; // x0
  int64_t userSvtId; // [xsp+28h] [xbp-F8h]
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61[2]; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_40F81B3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_B16FFC(&SkillInfo___TypeInfo, v10);
    sub_B16FFC(&SkillInfo_TypeInfo, v11);
    byte_40F81B3 = 1;
  }
  memset(&v61[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AAFCFC(v13);
  v14 = **(DataManager_o ***)(v13 + 184);
  if ( !v14 )
LABEL_45:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 v14,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v16 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, (unsigned int)v17->static_fields->SvtEquipSkillListMax, v15);
  *skillInfoList = v18;
  sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
  if ( useUserSvtId )
  {
    v26 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v25 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v61, -1LL, 0LL);
    v26 = *(_OWORD *)&v61[0].fields.currentCryptoKey;
    v25 = *(_OWORD *)&v61[0].fields.fakeValue;
  }
  *(_OWORD *)&v61[1].fields.currentCryptoKey = v26;
  *(_OWORD *)&v61[1].fields.fakeValue = v25;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v60 = v61[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v60, 0LL);
  v31 = 8LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v54 = v31 - 8;
    v55 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v55 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v54 >= v55->static_fields->SvtEquipSkillListMax )
      break;
    v33 = (SkillInfo_o *)sub_B170CC(SkillInfo_TypeInfo, v27, v28, v29, v30);
    SkillInfo___ctor(v33, 0LL);
    v35 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v34 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v62.fields.currentCryptoKey = v35;
    *(_QWORD *)&v62.fields.fakeValue = v34;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
    v37 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v38 = v36;
    *(_OWORD *)&v61[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v61[0].fields.fakeValue = v37;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v59 = v61[0];
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v59, 0LL);
    lv = this->fields.lv;
    v41 = v39;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_45;
    UseEntity = ServantSkillMaster__getUseEntity(
                  MasterData_WarQuestSelectionMaster,
                  v38,
                  (int)v31 - 7,
                  v41,
                  lv,
                  v42,
                  -1,
                  -1,
                  -1,
                  userSvtId,
                  0,
                  0LL);
    if ( UseEntity )
    {
      if ( !v33 )
        goto LABEL_45;
      v46 = UseEntity;
      v33->fields.id = UseEntity->fields.skillId;
      if ( !v16 )
        goto LABEL_45;
      if ( v54 >= *(unsigned int *)(v16 + 24) )
        goto LABEL_46;
      v33->fields.lv = *(_DWORD *)(v16 + 4 * v31);
      if ( v54 >= *(unsigned int *)(v16 + 24) )
        goto LABEL_46;
      ServantSkillEntity__getEffectExplanation(
        UseEntity,
        &v33->fields.charge,
        &v33->fields.title,
        &v33->fields.explanation,
        *(_DWORD *)(v16 + 4 * v31),
        1,
        0LL);
      v33->fields.strengthStatus = ServantSkillEntity__GetStrengthStatus(v46, 0LL);
      skillNum = v46->fields.skillNum;
      v33->fields.isUse = 1;
      v33->fields.skillRecord = skillNum;
    }
    else
    {
      if ( !v33 )
        goto LABEL_45;
      v33->fields.lv = -1;
    }
    v48 = *skillInfoList;
    if ( !*skillInfoList )
      goto LABEL_45;
    UseEntity = (ServantSkillEntity_o *)sub_B170BC(v33, v48->obj.klass->_1.element_class);
    if ( !UseEntity )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    if ( v54 >= v48->max_length )
    {
LABEL_46:
      sub_B17100(UseEntity, v44, v45);
      sub_B170A0();
    }
    *(Il2CppClass **)((char *)&v48->obj.klass + i) = (Il2CppClass *)v33;
    sub_B16F98(
      (BattleServantConfConponent_o *)((char *)v48 + i),
      (System_Int32_array **)v33,
      v45,
      v49,
      v50,
      v51,
      v52,
      v53);
    ++v31;
  }
}


EventServantEntity_o *__fastcall UserServantEntity__getEventServant(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventServantEntity_o *result; // x0
  __int64 v9; // x8
  EventServantEntity_o *v10; // x20
  __int64 v11; // x26
  WebViewManager_o *v12; // x0
  WarQuestSelectionMaster_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  EventServantMaster_o *v17; // x21
  int32_t v18; // w22
  __int64 v19; // x23
  __int64 v20; // x24
  int32_t v21; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40F81DF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventServantMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81DF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
LABEL_20:
    sub_B170D4();
  }
  result = (EventServantEntity_o *)EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 12, 1, 0LL);
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
          v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v12 )
            goto LABEL_20;
          v13 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                  (DataManager_o *)v12,
                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventServantMaster___);
          if ( (unsigned int)v11 >= v10->fields.type )
          {
            sub_B17100(v13, v14, v15);
            sub_B170A0();
          }
          v16 = *((_QWORD *)&v10->fields.joinMessage + v11);
          if ( !v16 )
            goto LABEL_20;
          v17 = (EventServantMaster_o *)v13;
          v18 = *(_DWORD *)(v16 + 16);
          v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v22.fields.currentCryptoKey = v20;
          *(_QWORD *)&v22.fields.fakeValue = v19;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
          if ( !v17 )
            goto LABEL_20;
          result = EventServantMaster__getEntity_30791676(v17, v18, v21, 0LL);
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
  int32_t v9; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_40F81E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_40F81E0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventServantMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  if ( !v8 )
    sub_B170D4();
  return EventServantMaster__getEntityServantIgnoreEnd(v8, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall UserServantEntity__getEventServant_21459540(
        UserServantEntity_o *this,
        bool is_finishedAt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v8; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventEntity_o *Entity; // x0

  if ( (byte_40F81E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, is_finishedAt);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F81E1 = 1;
  }
  EventServant = UserServantEntity__getEventServant(this, (const MethodInfo *)is_finishedAt);
  if ( !EventServant )
    return 0LL;
  v8 = EventServant;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v8->fields.eventId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( !EventEntity__IsOpen(Entity, is_finishedAt, 0LL) )
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

  if ( (byte_40F81BB & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_40F81BB = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v9);
  EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
  return UserServantEntity__getBaseEventUpVal(this, v7, v8, DispLimitCount, setupInfo, EventId, 0, v12);
}


System_Boolean_array *__fastcall UserServantEntity__getEventUpValList(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Int32_array *eventIdList; // x8
  __int64 v7; // x23
  int32_t DispLimitCount; // w22
  __int64 v9; // x2
  System_Boolean_array *v10; // x21
  unsigned __int64 v11; // x25
  signed __int64 v12; // x26
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w23
  __int64 BaseEventUpVal; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x7
  struct System_Int32_array *v20; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40F81BF & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, setupInfo);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40F81BF = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_19;
  v7 = *(_QWORD *)&eventIdList->max_length;
  if ( !v7 )
    return 0LL;
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, method);
  v10 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, (unsigned int)v7, v9);
  if ( (int)v7 >= 1 )
  {
    v11 = 0LL;
    v12 = (int)v7;
    while ( 1 )
    {
      v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v22.fields.currentCryptoKey = v14;
      *(_QWORD *)&v22.fields.fakeValue = v13;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
      BaseEventUpVal = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
      v20 = setupInfo->fields.eventIdList;
      if ( !v20 )
        break;
      if ( v11 >= v20->max_length )
        goto LABEL_20;
      BaseEventUpVal = UserServantEntity__getBaseEventUpVal(
                         this,
                         v15,
                         BaseEventUpVal,
                         DispLimitCount,
                         setupInfo,
                         v20->m_Items[v11 + 1],
                         0,
                         v19);
      if ( !v10 )
        break;
      if ( v11 >= v10->max_length )
      {
LABEL_20:
        sub_B17100(BaseEventUpVal, v17, v18);
        sub_B170A0();
      }
      v10->m_Items[v11++ + 4] = BaseEventUpVal & 1;
      if ( (__int64)v11 >= v12 )
        return v10;
    }
LABEL_19:
    sub_B170D4();
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
System_Boolean_array *__fastcall UserServantEntity__getEventUpValList_21447356(
        UserServantEntity_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  struct System_Int32_array *eventIdList; // x8
  __int64 v12; // x25
  __int64 BaseEventUpVal; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x7
  System_Boolean_array *v17; // x24
  unsigned __int64 v18; // x26
  struct System_Int32_array *v19; // x8

  if ( (byte_40F81C0 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, *(_QWORD *)&wearersSvtId);
    byte_40F81C0 = 1;
  }
  if ( !setupInfo )
    return 0LL;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_16;
  v12 = *(_QWORD *)&eventIdList->max_length;
  if ( !v12 )
    return 0LL;
  BaseEventUpVal = sub_B17014(bool___TypeInfo, (unsigned int)v12, *(_QWORD *)&wearesLimitCount);
  v17 = (System_Boolean_array *)BaseEventUpVal;
  if ( (int)v12 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      v19 = setupInfo->fields.eventIdList;
      if ( !v19 )
        break;
      if ( v18 >= v19->max_length )
        goto LABEL_17;
      BaseEventUpVal = UserServantEntity__getBaseEventUpVal(
                         this,
                         wearersSvtId,
                         wearesLimitCount,
                         wearesDispLimitCount,
                         setupInfo,
                         v19->m_Items[v18 + 1],
                         0,
                         v16);
      if ( !v17 )
        break;
      if ( v18 >= v17->max_length )
      {
LABEL_17:
        sub_B17100(BaseEventUpVal, v14, v15);
        sub_B170A0();
      }
      v17->m_Items[v18++ + 4] = BaseEventUpVal & 1;
      if ( (__int64)v18 >= (int)v12 )
        return v17;
    }
LABEL_16:
    sub_B170D4();
  }
  return v17;
}


bool __fastcall UserServantEntity__getEventUpVal_21445528(
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

  if ( (byte_40F81BC & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, setupInfo);
    byte_40F81BC = 1;
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
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
  return UserServantEntity__getBaseEventUpVal(this, v9, v10, DispLimitCount, setupInfo, eventId, 0, v13);
}


bool __fastcall UserServantEntity__getEventUpVal_21445756(
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


bool __fastcall UserServantEntity__getEventUpVal_21445868(
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


bool __fastcall UserServantEntity__getEventUpVal_21445888(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v12; // x2
  int32_t DispLimitCount; // w0
  __int64 v14; // x24
  __int64 v15; // x25
  int32_t v16; // w23
  int32_t v17; // w24
  int32_t v18; // w25
  int32_t EventId; // w0
  const MethodInfo *v20; // x7
  UserServantEntity_o *BaseEventUpVal; // x0
  int64_t v22; // x1
  __int64 v23; // x2
  __int64 v25; // x8
  unsigned __int64 v26; // x28
  UserServantEntity_o *v27; // x24
  __int64 v28; // x25
  __int64 v29; // x26
  int32_t v30; // w25
  int32_t v31; // w26
  int32_t v32; // w0
  const MethodInfo *v33; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_40F81BD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, setupInfo);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F81BD = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v12);
    v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v16 = DispLimitCount;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v15;
    *(_QWORD *)&v34.fields.fakeValue = v14;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    BaseEventUpVal = (UserServantEntity_o *)UserServantEntity__getBaseEventUpVal(
                                              this,
                                              v17,
                                              v18,
                                              v16,
                                              setupInfo,
                                              EventId,
                                              0,
                                              v20);
    if ( ((unsigned __int8)BaseEventUpVal & 1) != 0 )
      return 1;
    if ( equipIds )
    {
      v25 = *(_QWORD *)&equipIds->max_length;
      if ( (int)v25 >= 1 )
      {
        v26 = 0LL;
        while ( 1 )
        {
          if ( v26 >= (unsigned int)v25 )
          {
            sub_B17100(BaseEventUpVal, v22, v23);
            sub_B170A0();
          }
          v22 = equipIds->m_Items[v26];
          if ( v22 >= 1 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_24;
            BaseEventUpVal = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                               MasterData_WarQuestSelectionMaster,
                               v22,
                               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( BaseEventUpVal )
            {
              v27 = BaseEventUpVal;
              v29 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
              v28 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v35.fields.currentCryptoKey = v29;
              *(_QWORD *)&v35.fields.fakeValue = v28;
              v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v35, 0LL);
              v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
              v32 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
              BaseEventUpVal = (UserServantEntity_o *)UserServantEntity__getBaseEventUpVal(
                                                        v27,
                                                        v30,
                                                        v31,
                                                        v16,
                                                        setupInfo,
                                                        v32,
                                                        0,
                                                        v33);
              if ( ((unsigned __int8)BaseEventUpVal & 1) != 0 )
                return 1;
            }
          }
          LODWORD(v25) = equipIds->max_length;
          if ( (__int64)++v26 >= (int)v25 )
            return 0;
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_21446460(
        UserServantEntity_o *this,
        EventUpValSetupInfo_o *setupInfo,
        UserServantEntity_array *equipServentEntityList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v10; // x2
  int32_t DispLimitCount; // w0
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t v16; // w24
  int32_t EventId; // w0
  const MethodInfo *v18; // x7
  _BOOL8 BaseEventUpVal; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v23; // x8
  unsigned __int64 i; // x27
  UserServantEntity_o *v25; // x23
  __int64 v26; // x24
  __int64 v27; // x25
  int32_t v28; // w24
  int32_t v29; // w25
  int32_t v30; // w0
  const MethodInfo *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_40F81BE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, setupInfo);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F81BE = 1;
  }
  if ( setupInfo )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)Instance,
      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v10);
    v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v14 = DispLimitCount;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v32.fields.currentCryptoKey = v13;
    *(_QWORD *)&v32.fields.fakeValue = v12;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
    EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
    BaseEventUpVal = UserServantEntity__getBaseEventUpVal(this, v15, v16, v14, setupInfo, EventId, 0, v18);
    if ( BaseEventUpVal )
      return 1;
    if ( equipServentEntityList )
    {
      v23 = *(_QWORD *)&equipServentEntityList->max_length;
      if ( (int)v23 >= 1 )
      {
        for ( i = 0LL; (__int64)i < (int)v23; ++i )
        {
          if ( i >= (unsigned int)v23 )
          {
            sub_B17100(BaseEventUpVal, v20, v21);
            sub_B170A0();
          }
          v25 = equipServentEntityList->m_Items[i];
          if ( v25 )
          {
            v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v33.fields.currentCryptoKey = v27;
            *(_QWORD *)&v33.fields.fakeValue = v26;
            v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v33, 0LL);
            v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
            v30 = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            BaseEventUpVal = UserServantEntity__getBaseEventUpVal(v25, v28, v29, v14, setupInfo, v30, 0, v31);
            if ( BaseEventUpVal )
              return 1;
            LODWORD(v23) = equipServentEntityList->max_length;
          }
        }
      }
    }
  }
  return 0;
}


bool __fastcall UserServantEntity__getEventUpVal_21447648(
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  EventUpValInfo_o *v23; // x26
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v32; // x2
  _BOOL8 BaseEventUpVal_21448220; // x0
  int64_t v34; // x1
  __int64 v35; // x2
  __int64 v36; // x8
  unsigned __int64 v37; // x25
  char v38; // w26
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v40; // x22
  EventUpValInfo_o *v41; // x27
  __int64 v42; // x23
  __int64 v43; // x24
  int32_t v44; // w0
  const MethodInfo *v45; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_40F81C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, eventUpVallInfo);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B16FFC(&EventUpValInfo_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40F81C2 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v14;
  *(_QWORD *)&v47.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v47, 0LL);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v17);
  v23 = (EventUpValInfo_o *)sub_B170CC(EventUpValInfo_TypeInfo, v19, v20, v21, v22);
  EventUpValInfo___ctor(v23, setupInfo, v15, v16, DispLimitCount, 0, 0LL);
  *eventUpVallInfo = v23;
  sub_B16F98((BattleServantConfConponent_o *)eventUpVallInfo, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  BaseEventUpVal_21448220 = UserServantEntity__getBaseEventUpVal_21448220(this, eventUpVallInfo, v32);
  if ( equipIds )
  {
    v36 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v36 >= 1 )
    {
      v37 = 0LL;
      v38 = BaseEventUpVal_21448220;
      do
      {
        if ( v37 >= (unsigned int)v36 )
        {
          sub_B17100(BaseEventUpVal_21448220, v34, v35);
          sub_B170A0();
        }
        v34 = equipIds->m_Items[v37];
        if ( v34 >= 1 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_23;
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v34,
                     (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Entity )
            goto LABEL_23;
          v40 = Entity;
          v41 = *eventUpVallInfo;
          v43 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
          v42 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v48.fields.currentCryptoKey = v43;
          *(_QWORD *)&v48.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v48, 0LL);
          if ( !v41 )
            goto LABEL_23;
          v41->fields.equipSvtId = v44;
          BaseEventUpVal_21448220 = UserServantEntity__getBaseEventUpVal_21448220(v40, eventUpVallInfo, v45);
          LODWORD(v36) = equipIds->max_length;
          if ( BaseEventUpVal_21448220 )
            v38 = 1;
        }
        ++v37;
      }
      while ( (__int64)v37 < (int)v36 );
      LOBYTE(BaseEventUpVal_21448220) = v38;
    }
  }
  return BaseEventUpVal_21448220;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getExceedLvMax(UserServantEntity_o *this, int32_t cnt, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  ServantLimitMaster_o *v12; // x21
  int32_t v13; // w22
  int32_t v14; // w0
  ServantLimitEntity_o *Entity; // x21
  WebViewManager_o *v16; // x0
  ServantExceedMaster_o *v17; // x0
  ServantExceedEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40F81FA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&cnt);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F81FA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
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
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  if ( !v12
    || (Entity = ServantLimitMaster__GetEntity(v12, v13, v14, 0LL),
        (v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v17 = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v16,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !v17 )
  {
LABEL_14:
    sub_B170D4();
  }
  v18 = ServantExceedMaster__GetEntity(v17, Entity->fields.rarity, cnt, 0LL);
  if ( v18 )
    return v18->fields.addLvMax + Entity->fields.lvMax;
  else
    return UserServantEntity__getLevelMax(this, v19);
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

  if ( (byte_40F81D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40F81D4 = 1;
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
  if ( this->fields.lv < UserServantEntity__getLevelMax(this, v20) )
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

  if ( (byte_40F81F4 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_40F81F4 = 1;
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
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
        v12 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v13 = v11;
        *(_QWORD *)&v16.fields.currentCryptoKey = v12;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
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

  if ( (byte_40F81F5 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, ignoreRandomSettings);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_40F81F5 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetLimitCountByImageLimit_28889360(v10, v11, 0LL);
  }
}


System_String_o *__fastcall UserServantEntity__getFrameCardPrefix(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  int32_t v11; // w21
  int32_t v12; // w0
  ServantLimitEntity_o *Entity; // x20
  WebViewManager_o *v14; // x0
  ServantExceedMaster_o *v15; // x0
  ServantExceedEntity_o *v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40F8200 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8200 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v9;
  *(_QWORD *)&v18.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, v11, v12, 0LL),
        (v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v15 = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v14,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !v15
    || (v16 = ServantExceedMaster__GetEntity(v15, Entity->fields.rarity, this->fields.exceedCount, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  return ServantExceedEntity__getFrameCardPrefix(v16, 0LL);
}


int32_t __fastcall UserServantEntity__getFrameType(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantExceedMaster_o *v10; // x20
  int32_t v11; // w21
  int32_t v12; // w0
  int32_t FrameType_30698720; // w20
  WebViewManager_o *v14; // x0
  ServantLvDetailMaster_o *v15; // x21
  const MethodInfo *v16; // x1
  int32_t Rarity; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_40F81FE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81FE = 1;
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
  *(_QWORD *)&v19.fields.currentCryptoKey = v9;
  *(_QWORD *)&v19.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  if ( !v10
    || (FrameType_30698720 = ServantExceedMaster__GetFrameType_30698720(v10, v11, v12, this->fields.exceedCount, 0LL),
        (v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v15 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v14,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        Rarity = UserServantEntity__getRarity(this, v16),
        !v15) )
  {
LABEL_11:
    sub_B170D4();
  }
  return ServantLvDetailMaster__GetFrameType(v15, Rarity, this->fields.lv, FrameType_30698720, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v9; // x1
  __int64 BaseFriendPointUpVal; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  __int64 v13; // x8
  int v14; // w21
  unsigned __int64 v15; // x24
  UserServantEntity_o *v16; // x22
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v18; // x1
  UserServantEntity_o *v19; // x23

  if ( (byte_40F81B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, equipIds);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F81B8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  BaseFriendPointUpVal = UserServantEntity__getBaseFriendPointUpVal(this, v9);
  if ( !equipIds )
    return 0;
  v13 = *(_QWORD *)&equipIds->max_length;
  if ( (int)v13 < 1 )
    return 0;
  v14 = BaseFriendPointUpVal;
  v15 = 0LL;
  v16 = 0LL;
  do
  {
    if ( v15 >= (unsigned int)v13 )
    {
      sub_B17100(BaseFriendPointUpVal, v11, v12);
      sub_B170A0();
    }
    v11 = (const MethodInfo *)equipIds->m_Items[v15];
    if ( (__int64)v11 >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)v11,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        goto LABEL_19;
      v19 = Entity;
      BaseFriendPointUpVal = UserServantEntity__getBaseFriendPointUpVal(Entity, v18);
      LODWORD(v13) = equipIds->max_length;
      if ( (int)BaseFriendPointUpVal > v14 )
        v16 = v19;
      if ( (int)BaseFriendPointUpVal > v14 )
        v14 = BaseFriendPointUpVal;
    }
    ++v15;
  }
  while ( (__int64)v15 < (int)v13 );
  if ( v16 )
    return UserServantEntity__getBaseFriendPointUpType(v16, v11);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v9; // x1
  __int64 BaseFriendPointUpVal; // x0
  int64_t v11; // x1
  __int64 v12; // x2
  int32_t v13; // w20
  __int64 v14; // x8
  unsigned __int64 i; // x22
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v17; // x1

  if ( (byte_40F81B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, equipIds);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F81B7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  BaseFriendPointUpVal = UserServantEntity__getBaseFriendPointUpVal(this, v9);
  v13 = BaseFriendPointUpVal;
  if ( equipIds )
  {
    v14 = *(_QWORD *)&equipIds->max_length;
    if ( (int)v14 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v14; ++i )
      {
        if ( i >= (unsigned int)v14 )
        {
          sub_B17100(BaseFriendPointUpVal, v11, v12);
          sub_B170A0();
        }
        v11 = equipIds->m_Items[i];
        if ( v11 >= 1 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_15;
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v11,
                     (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Entity )
            goto LABEL_15;
          BaseFriendPointUpVal = UserServantEntity__getBaseFriendPointUpVal(Entity, v17);
          LODWORD(v14) = equipIds->max_length;
          if ( (int)BaseFriendPointUpVal > v13 )
            v13 = BaseFriendPointUpVal;
        }
      }
    }
  }
  return v13;
}


int32_t __fastcall UserServantEntity__getFriendshipRank(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v8; // q1
  UserServantCollectionMaster_o *v9; // x20
  int64_t v10; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  int64_t v13; // x19
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40F81D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81D3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v8 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v9 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v18 = v19;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
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
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( !v9 || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v13, v14, v15)) == 0LL )
LABEL_13:
    sub_B170D4();
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
           EntityDefinitely->fields.friendshipRank,
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  int32_t v11; // w21
  int32_t v12; // w0
  ServantLimitEntity_o *Entity; // x20
  WebViewManager_o *v14; // x0
  ServantExceedMaster_o *v15; // x0
  ServantExceedEntity_o *v16; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_40F81D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81D9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v9;
  *(_QWORD *)&v19.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, v11, v12, 0LL),
        (v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v15 = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v14,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !v15 )
  {
LABEL_14:
    sub_B170D4();
  }
  v16 = ServantExceedMaster__GetEntity(v15, Entity->fields.rarity, this->fields.exceedCount, 0LL);
  lvMax = Entity->fields.lvMax;
  if ( v16 )
    lvMax += v16->fields.addLvMax;
  return lvMax;
}


int32_t __fastcall UserServantEntity__getLimitCntMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  WarEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F81DA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81DA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v10,
                   v11,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return Entity->fields.targetId;
}


int32_t __fastcall UserServantEntity__getLimitCount(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_40F81AE & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F81AE = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL);
}


int32_t __fastcall UserServantEntity__getMagnification(
        UserServantEntity_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t combineMaterialId; // w21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x19
  __int64 v13; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_40F81D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineMaster___, svtEntity);
    sub_B16FFC(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F81D1 = 1;
  }
  entity = 0LL;
  if ( !svtEntity )
    goto LABEL_16;
  combineMaterialId = svtEntity->fields.combineMaterialId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          combineMaterialId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__) )
    goto LABEL_10;
  if ( !entity )
LABEL_16:
    sub_B170D4();
  if ( *(&entity->fields.id + 1) == 3 )
    return 1;
LABEL_10:
  if ( ServantEntity__get_IsServant(svtEntity, 0LL) )
    return this->fields.treasureDeviceLv1;
  v13 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v13;
  *(_QWORD *)&v15.fields.fakeValue = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL) + 1;
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

  if ( (byte_40F81F3 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_40F81F3 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
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

  if ( (byte_40F81F1 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_40F81F1 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
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

  if ( (byte_40F81EF & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_40F81EF = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
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

  if ( (byte_40F81F7 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_40F81F7 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
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

  if ( (byte_40F81F6 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_40F81F6 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
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

  if ( (byte_40F81F8 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_40F81F8 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  v7 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v8 = v6;
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
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
  DataManager_o *v18; // x0
  __int64 v19; // x2
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x24
  BalanceConfig_c *v21; // x8
  System_Int32_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x2
  System_String_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int128 v37; // q0
  __int128 v38; // q1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x21
  __int64 v40; // x22
  __int64 v41; // x20
  __int64 v42; // x1
  System_String_array **v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  unsigned __int64 v46; // x25
  SkillInfo_o *v47; // x0
  __int64 v48; // x19
  __int64 v49; // x26
  int32_t v50; // w0
  __int128 v51; // q0
  int32_t v52; // w27
  int64_t v53; // x0
  int32_t lv; // w28
  int64_t v55; // x19
  int32_t v56; // w0
  __int64 UseEntity; // x0
  System_Int32_array *v58; // x8
  System_String_array *v59; // x26
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x19
  BattleServantConfConponent_o *v66; // x0
  __int64 v67; // x19
  __int64 v68; // x27
  int32_t v69; // w0
  __int128 v70; // q0
  int32_t v71; // w27
  int64_t v72; // x0
  ServantSkillEntity_o *v73; // x0
  __int128 v74; // q0
  ServantSkillEntity_o *v75; // x26
  int64_t v76; // x0
  System_Int32_array *v77; // x8
  System_String_array *v78; // x27
  BalanceConfig_c *v79; // x0
  int64_t userSvtId; // [xsp+38h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+40h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+60h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89[2]; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_40F81B4 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, idList);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_B16FFC(&int___TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_B16FFC(&SkillInfo_TypeInfo, v14);
    sub_B16FFC(&string___TypeInfo, v15);
    byte_40F81B4 = 1;
  }
  memset(&v89[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v17 = **(_QWORD **)(v16 + 192);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AAFCFC(v17);
  v18 = **(DataManager_o ***)(v17 + 184);
  if ( !v18 )
LABEL_61:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 v18,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v21 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  v22 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v21->static_fields->SvtSkillListMax, v19);
  *idList = v22;
  sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  v30 = (System_String_array *)sub_B17014(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                 v29);
  *skillNameList = v30;
  sub_B16F98((BattleServantConfConponent_o *)skillNameList, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  if ( useUserSvtId )
  {
    v38 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v37 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v89, -1LL, 0LL);
    v38 = *(_OWORD *)&v89[0].fields.currentCryptoKey;
    v37 = *(_OWORD *)&v89[0].fields.fakeValue;
  }
  *(_OWORD *)&v89[1].fields.currentCryptoKey = v38;
  *(_OWORD *)&v89[1].fields.fakeValue = v37;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v88 = v89[1];
  p_userId = &this->fields.userId;
  v40 = 8LL;
  v41 = 32LL;
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v88, 0LL);
  while ( 1 )
  {
    v46 = v40 - 8;
    v79 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v79 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v46 >= v79->static_fields->SvtSkillListMax )
      break;
    v47 = (SkillInfo_o *)sub_B170CC(SkillInfo_TypeInfo, v42, v43, v44, v45);
    SkillInfo___ctor(v47, 0LL);
    v49 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v48 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v90.fields.currentCryptoKey = v49;
    *(_QWORD *)&v90.fields.fakeValue = v48;
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v90, 0LL);
    v51 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v52 = v50;
    *(_OWORD *)&v89[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v89[0].fields.fakeValue = v51;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v87 = v89[0];
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v87, 0LL);
    lv = this->fields.lv;
    v55 = v53;
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_61;
    UseEntity = (__int64)ServantSkillMaster__getUseEntity(
                           MasterData_WarQuestSelectionMaster,
                           v52,
                           (int)v40 - 7,
                           v55,
                           lv,
                           v56,
                           -1,
                           -1,
                           -1,
                           userSvtId,
                           0,
                           0LL);
    if ( UseEntity )
    {
      v58 = *idList;
      if ( !*idList )
        goto LABEL_61;
      if ( v46 >= v58->max_length )
        goto LABEL_62;
      *((_DWORD *)&v58->obj.klass + v40) = *(_DWORD *)(UseEntity + 28);
      v59 = *skillNameList;
      UseEntity = (__int64)ServantSkillEntity__getSkillName((ServantSkillEntity_o *)UseEntity, 0LL);
      if ( !v59 )
        goto LABEL_61;
      v65 = (System_Int32_array **)UseEntity;
      if ( UseEntity )
      {
        UseEntity = sub_B170BC(UseEntity, v59->obj.klass->_1.element_class);
        if ( !UseEntity )
          goto LABEL_63;
      }
      if ( v46 >= v59->max_length )
        goto LABEL_62;
      v66 = (BattleServantConfConponent_o *)((char *)v59 + v41);
LABEL_40:
      v66->klass = (BattleServantConfConponent_c *)v65;
      sub_B16F98(v66, v65, v43, v60, v61, v62, v63, v64);
      goto LABEL_41;
    }
    v68 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v67 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v91.fields.currentCryptoKey = v68;
    *(_QWORD *)&v91.fields.fakeValue = v67;
    v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v91, 0LL);
    v70 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v71 = v69;
    *(_OWORD *)&v89[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
    *(_OWORD *)&v89[0].fields.fakeValue = v70;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v86 = v89[0];
    v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v86, 0LL);
    v73 = ServantSkillMaster__getUseEntity(
            MasterData_WarQuestSelectionMaster,
            v71,
            (int)v40 - 7,
            v72,
            targetLv,
            targetLimitCnt,
            -1,
            -1,
            -1,
            -1LL,
            0,
            0LL);
    if ( v73 )
    {
      v74 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v75 = v73;
      *(_OWORD *)&v89[0].fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
      *(_OWORD *)&v89[0].fields.fakeValue = v74;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v85 = v89[0];
      v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v85, 0LL);
      UseEntity = ServantSkillEntity__isUse(v75, v76, targetLv, targetLimitCnt, -1, -1, -1, -1LL, 0LL);
      if ( (UseEntity & 1) != 0 )
      {
        v77 = *idList;
        if ( !*idList )
          goto LABEL_61;
        if ( v46 >= v77->max_length )
        {
LABEL_62:
          sub_B17100(UseEntity, v42, v43);
          sub_B170A0();
        }
        *((_DWORD *)&v77->obj.klass + v40) = v75->fields.skillId;
        v78 = *skillNameList;
        UseEntity = (__int64)ServantSkillEntity__getSkillName(v75, 0LL);
        if ( !v78 )
          goto LABEL_61;
        v65 = (System_Int32_array **)UseEntity;
        if ( UseEntity )
        {
          UseEntity = sub_B170BC(UseEntity, v78->obj.klass->_1.element_class);
          if ( !UseEntity )
          {
LABEL_63:
            sub_B170F4(UseEntity);
            sub_B170A0();
          }
        }
        if ( v46 >= v78->max_length )
          goto LABEL_62;
        v66 = (BattleServantConfConponent_o *)((char *)v78 + v41);
        goto LABEL_40;
      }
    }
LABEL_41:
    ++v40;
    v41 += 8LL;
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x24
  __int128 v28; // q1
  int64_t v29; // x25
  __int64 v30; // x19
  __int64 v31; // x20
  int32_t v32; // w0
  const MethodInfo *v33; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  int32_t friendshipRank; // w24
  __int64 v38; // x19
  __int64 v39; // x19
  DataManager_o *v40; // x0
  WarQuestSelectionMaster_o *v41; // x0
  __int64 v42; // x26
  __int64 v43; // x27
  ServantPassiveSkillMaster_o *v44; // x25
  int32_t v45; // w0
  __int128 v46; // q0
  int32_t v47; // w26
  int64_t v48; // x28
  int32_t lv; // w27
  int32_t v50; // w0
  WebViewManager_o *v51; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x19
  int32_t v53; // w0
  ServantEntity_o *v54; // x0
  BattleServantConfConponent_o *v55; // x28
  __int64 v56; // x2
  char v57; // w23
  BalanceConfig_c *v58; // x0
  System_Int32_array *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x2
  System_String_array *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x2
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  WarQuestSelectionMaster_o *v82; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v83; // x25
  EventMaster_o *v84; // x0
  _DWORD *EnableEntityList; // x0
  __int64 v86; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  int v93; // w8
  _DWORD *v94; // x26
  int i; // w24
  __int64 v96; // x8
  int32_t v97; // w27
  int64_t UserId; // x28
  __int64 v99; // x19
  __int64 v100; // x20
  int32_t v101; // w4
  int32_t BuddyPoint; // w28
  __int64 v103; // x19
  __int64 v104; // x20
  int32_t v105; // w3
  __int64 v106; // x19
  __int64 v107; // x8
  unsigned __int64 v108; // x20
  System_Int32_array *v109; // x8
  int max_length; // w9
  unsigned int v111; // w10
  __int64 v112; // x27
  char *v113; // x10
  _DWORD *v114; // x10
  int v115; // t1
  System_String_array *v116; // x8
  System_String_array *v117; // x9
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  EventServantPointRankMaster_o *v130; // [xsp+28h] [xbp-E8h]
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // [xsp+30h] [xbp-E0h]
  System_String_array **explanationLista; // [xsp+38h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+90h] [xbp-80h]
  UserEventServantPointEntity_o *entity; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  if ( (byte_40F81B5 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, idList);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v15);
    sub_B16FFC(&DataManager_TypeInfo, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_B16FFC(&int___TypeInfo, v19);
    sub_B16FFC(&NetworkManager_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&string___TypeInfo, v25);
    byte_40F81B5 = 1;
  }
  explanationLista = explanationList;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v28 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v137.fields.fakeValue = v28;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v136 = v137;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v136, 0LL);
  v31 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v139.fields.currentCryptoKey = v31;
  *(_QWORD *)&v139.fields.fakeValue = v30;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v139, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_87;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, v29, v32, v33);
  if ( !EntityDefinitely )
    goto LABEL_87;
  friendshipRank = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, v35);
  if ( (dispLimitCount & 0x80000000) != 0 )
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v36);
  v38 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v39 = **(_QWORD **)(v38 + 192);
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AAFCFC(v39);
  v40 = **(DataManager_o ***)(v39 + 184);
  if ( !v40 )
    goto LABEL_87;
  v41 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v40,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v43 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v44 = (ServantPassiveSkillMaster_o *)v41;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v140.fields.currentCryptoKey = v43;
  *(_QWORD *)&v140.fields.fakeValue = v42;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v140, 0LL);
  v46 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v47 = v45;
  *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v137.fields.fakeValue = v46;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v135 = v137;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v135, 0LL);
  lv = this->fields.lv;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  if ( !v44 )
    goto LABEL_87;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v44,
    idList,
    titleList,
    explanationLista,
    v47,
    v48,
    lv,
    v50,
    dispLimitCount,
    friendshipRank,
    -1,
    1,
    0LL);
  v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v51 )
    goto LABEL_87;
  v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v51,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  if ( !v52 )
    goto LABEL_87;
  v54 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v52,
                             v53,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v55 = (BattleServantConfConponent_o *)explanationLista;
  if ( !v54 )
    goto LABEL_87;
  if ( !ServantEntity__get_IsServant(v54, 0LL) )
    return;
  if ( *idList )
  {
    v57 = 0;
  }
  else
  {
    v58 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v58 = BalanceConfig_TypeInfo;
    }
    v59 = (System_Int32_array *)sub_B17014(
                                  int___TypeInfo,
                                  (unsigned int)v58->static_fields->SvtPassiveSkillListMax,
                                  v56);
    *idList = v59;
    sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v59, v60, v61, v62, v63, v64, v65);
    v67 = (System_String_array *)sub_B17014(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax,
                                   v66);
    *titleList = v67;
    sub_B16F98((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
    v75 = (System_Int32_array **)sub_B17014(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax,
                                   v74);
    *explanationLista = (System_String_array *)v75;
    sub_B16F98((BattleServantConfConponent_o *)explanationLista, v75, v76, v77, v78, v79, v80, v81);
    v57 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v82 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v83 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  v84 = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !v84 || (EnableEntityList = EventMaster__GetEnableEntityList(v84, 12, 0, 0LL)) == 0LL )
LABEL_87:
    sub_B170D4();
  v93 = EnableEntityList[6];
  v94 = EnableEntityList;
  if ( v93 >= 1 )
  {
    v130 = (EventServantPointRankMaster_o *)v82;
    for ( i = 0; i < v93; ++i )
    {
      if ( i >= (unsigned int)v93 )
        goto LABEL_86;
      v96 = *(_QWORD *)&v94[2 * i + 8];
      if ( !v96 )
        goto LABEL_87;
      v97 = *(_DWORD *)(v96 + 16);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v100 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v99 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v141.fields.currentCryptoKey = v100;
      *(_QWORD *)&v141.fields.fakeValue = v99;
      v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v141, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_87;
      if ( UserEventServantPointMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, v97, v101, 0LL) )
      {
        if ( !entity )
          goto LABEL_87;
        BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
      }
      else
      {
        BuddyPoint = 0;
      }
      v104 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v103 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v142.fields.currentCryptoKey = v104;
      *(_QWORD *)&v142.fields.fakeValue = v103;
      v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v142, 0LL);
      if ( !v130 )
        goto LABEL_87;
      EnableEntityList = EventServantPointRankMaster__GetEnableEntity(v130, v97, BuddyPoint, v105, 0LL);
      if ( EnableEntityList )
      {
        v106 = *((_QWORD *)EnableEntityList + 4);
        v55 = (BattleServantConfConponent_o *)explanationLista;
        if ( !v106 )
          goto LABEL_87;
        v107 = *(_QWORD *)(v106 + 24);
        if ( (int)v107 >= 1 )
        {
          v108 = 0LL;
          while ( v108 < (unsigned int)v107 )
          {
            v109 = *idList;
            if ( !*idList )
              goto LABEL_87;
            max_length = v109->max_length;
            if ( max_length >= 1 )
            {
              v86 = *(unsigned int *)(v106 + 4 * v108 + 32);
              v111 = 0;
              while ( 1 )
              {
                if ( v111 >= max_length )
                  goto LABEL_86;
                v112 = (int)v111;
                v113 = (char *)v109 + 4 * (int)v111;
                v115 = *((_DWORD *)v113 + 8);
                v114 = v113 + 32;
                if ( !v115 )
                  break;
                v111 = v112 + 1;
                if ( (int)v112 + 1 >= max_length )
                  goto LABEL_79;
              }
              *v114 = v86;
              if ( !v83 )
                goto LABEL_87;
              EnableEntityList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v83,
                                   v86,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              v116 = *titleList;
              if ( !*titleList )
                goto LABEL_87;
              v117 = *explanationLista;
              if ( !*explanationLista || !EnableEntityList )
                goto LABEL_87;
              if ( (unsigned int)v112 >= v116->max_length || (unsigned int)v112 >= v117->max_length )
                break;
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)EnableEntityList,
                &v116->m_Items[v112],
                &v117->m_Items[v112],
                0,
                0LL);
              v57 = 0;
            }
LABEL_79:
            LODWORD(v107) = *(_DWORD *)(v106 + 24);
            if ( (__int64)++v108 >= (int)v107 )
              goto LABEL_82;
          }
LABEL_86:
          sub_B17100(EnableEntityList, v86, v87);
          sub_B170A0();
        }
      }
      else
      {
        v55 = (BattleServantConfConponent_o *)explanationLista;
      }
LABEL_82:
      v93 = v94[6];
    }
  }
  if ( (v57 & 1) != 0 )
  {
    *idList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)idList, 0LL, v87, v88, v89, v90, v91, v92);
    *titleList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)titleList, 0LL, v118, v119, v120, v121, v122, v123);
    v55->klass = 0LL;
    sub_B16F98(v55, 0LL, v124, v125, v126, v127, v128, v129);
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

  if ( (byte_40F81C6 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_40F81C6 = 1;
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
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
    DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v11);
    return QuestRestrictionInfo__IsRestriction_31241596(
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  int32_t v10; // w0
  __int64 v11; // x8
  int32_t v12; // w19
  int32_t v13; // w0
  ServantLimitEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_40F81EB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F81EB = 1;
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
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
  v11 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v17.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v12 = v10;
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17, 0LL);
  if ( !v9 || (Entity = ServantLimitMaster__GetEntity(v9, v12, v13, 0LL)) == 0LL )
LABEL_10:
    sub_B170D4();
  return Entity->fields.rarity;
}


int32_t __fastcall UserServantEntity__getRarityIcon(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  ServantExceedMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v7; // x1
  int32_t Rarity; // w0
  int32_t RarityIcon; // w20
  WebViewManager_o *v10; // x0
  ServantLvDetailMaster_o *v11; // x21
  const MethodInfo *v12; // x1
  int32_t v13; // w0

  if ( (byte_40F81FF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F81FF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Rarity = UserServantEntity__getRarity(this, v7),
        !MasterData_WarQuestSelectionMaster)
    || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                       MasterData_WarQuestSelectionMaster,
                       Rarity,
                       this->fields.exceedCount,
                       0,
                       0LL),
        (v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v11 = (ServantLvDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v10,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___),
        v13 = UserServantEntity__getRarity(this, v12),
        !v11) )
  {
    sub_B170D4();
  }
  return ServantLvDetailMaster__GetRarityIcon(v11, v13, this->fields.lv, RarityIcon, 0LL);
}


int32_t __fastcall UserServantEntity__getSellMana(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x20
  int32_t v11; // w0
  ServantEntity_o *Entity; // x20
  const MethodInfo *v13; // x2
  int32_t Magnification; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_40F81CF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81CF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      v11,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Magnification = UserServantEntity__getMagnification(this, Entity, v13),
        !Entity) )
  {
LABEL_10:
    sub_B170D4();
  }
  return Entity->fields.sellMana * Magnification;
}


int32_t __fastcall UserServantEntity__getSellQp(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x20
  int32_t v11; // w0
  ServantEntity_o *Entity; // x20
  const MethodInfo *v13; // x2
  int32_t Magnification; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_40F81CE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81CE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      v11,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Magnification = UserServantEntity__getMagnification(this, Entity, v13),
        !Entity) )
  {
LABEL_10:
    sub_B170D4();
  }
  return Entity->fields.sellQp * Magnification;
}


int32_t __fastcall UserServantEntity__getSellRarePri(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x20
  int32_t v11; // w0
  ServantEntity_o *Entity; // x20
  const MethodInfo *v13; // x2
  int32_t Magnification; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_40F81D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81D0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
  if ( !v10
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      v11,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Magnification = UserServantEntity__getMagnification(this, Entity, v13),
        !Entity) )
  {
LABEL_10:
    sub_B170D4();
  }
  return Entity->fields.sellRarePri * Magnification;
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
  DataManager_o *v14; // x0
  __int64 v15; // x2
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x22
  BalanceConfig_c *v17; // x8
  const MethodInfo *v18; // x2
  System_Int32_array *v19; // x23
  __int128 v20; // q0
  __int128 v21; // q1
  int64_t userSvtId; // x24
  signed __int64 v23; // x26
  __int64 v24; // x25
  __int64 v25; // x26
  int32_t v26; // w0
  __int128 v27; // q0
  int32_t v28; // w25
  int64_t v29; // x0
  int32_t lv; // w27
  int64_t v31; // x28
  int32_t v32; // w0
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  unsigned __int64 v36; // x21
  BalanceConfig_c *v37; // x0
  int32_t v40; // [xsp+2Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43[2]; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  v40 = dispLimitCount;
  if ( (byte_40F81B1 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLimitCount);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_40F81B1 = 1;
  }
  memset(&v43[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AAFCFC(v13);
  v14 = **(DataManager_o ***)(v13 + 184);
  if ( !v14 )
LABEL_39:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 v14,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v19 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v17->static_fields->SvtSkillListMax, v15);
  if ( (v40 & 0x80000000) != 0 )
  {
    v40 = UserServantEntity__getDispLimitCount(this, 0, v18);
    if ( useUserSvtId )
      goto LABEL_13;
LABEL_15:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v43, -1LL, 0LL);
    v21 = *(_OWORD *)&v43[0].fields.currentCryptoKey;
    v20 = *(_OWORD *)&v43[0].fields.fakeValue;
    goto LABEL_19;
  }
  if ( !useUserSvtId )
    goto LABEL_15;
LABEL_13:
  v21 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  v20 = *(_OWORD *)&this->fields.id.fields.fakeValue;
LABEL_19:
  *(_OWORD *)&v43[1].fields.currentCryptoKey = v21;
  *(_OWORD *)&v43[1].fields.fakeValue = v20;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v42 = v43[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v42, 0LL);
  v23 = 0LL;
  while ( 1 )
  {
    v36 = v23;
    v37 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v37 = BalanceConfig_TypeInfo;
    }
    if ( v23 >= v37->static_fields->SvtSkillListMax )
      return v19;
    v25 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v44.fields.currentCryptoKey = v25;
    *(_QWORD *)&v44.fields.fakeValue = v24;
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v44, 0LL);
    v27 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v28 = v26;
    *(_OWORD *)&v43[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v43[0].fields.fakeValue = v27;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v41 = v43[0];
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v41, 0LL);
    lv = this->fields.lv;
    v31 = v29;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    v23 = v36 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  MasterData_WarQuestSelectionMaster,
                  v28,
                  (int)v36 + 1,
                  v31,
                  lv,
                  v32,
                  v40,
                  -1,
                  specificLimitCount,
                  userSvtId,
                  0,
                  0LL);
    if ( UseEntity )
    {
      if ( !v19 )
        goto LABEL_39;
      if ( v36 >= v19->max_length )
      {
        sub_B17100(UseEntity, v34, v35);
        sub_B170A0();
      }
      v19->m_Items[v36 + 1] = UseEntity->fields.skillId;
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
  DataManager_o *v23; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *v25; // x0
  __int64 v26; // x20
  __int64 v27; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x19
  int32_t v29; // w0
  ServantEntity_o *Entity; // x0
  _BOOL4 IsServantEquip; // w22
  __int64 v32; // x2
  BalanceConfig_c *v33; // x0
  BalanceConfig_c *v34; // x0
  SkillInfo_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x2
  __int128 v43; // q0
  __int128 v44; // q1
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  unsigned __int64 v49; // x27
  __int64 v50; // x23
  SkillInfo_o *v51; // x26
  __int64 v52; // x19
  __int64 v53; // x20
  _BOOL4 v54; // w28
  int32_t v55; // w0
  __int128 v56; // q0
  int32_t v57; // w19
  int64_t v58; // x0
  int32_t lv; // w22
  int64_t v60; // x20
  int32_t v61; // w5
  signed __int64 v62; // x25
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v64; // x1
  System_String_array **v65; // x2
  ServantSkillEntity_o *v66; // x19
  int32_t skillNum; // w8
  __int64 v68; // x19
  __int64 v69; // x20
  int32_t v70; // w0
  ServantSkillEntity_o *LowPriorityEntity; // x0
  SkillInfo_array *v72; // x19
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // [xsp+28h] [xbp-128h]
  __int64 v79; // [xsp+30h] [xbp-120h]
  bool v80; // [xsp+3Ch] [xbp-114h]
  signed __int64 v81; // [xsp+40h] [xbp-110h]
  int64_t userSvtId; // [xsp+48h] [xbp-108h]
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+68h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89[2]; // [xsp+B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_40F81B2 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&SkillInfo___TypeInfo, v19);
    sub_B16FFC(&SkillInfo_TypeInfo, v20);
    byte_40F81B2 = 1;
  }
  memset(&v89[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v22 = **(_QWORD **)(v21 + 192);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AAFCFC(v22);
  v23 = **(DataManager_o ***)(v22 + 184);
  if ( !v23 )
    goto LABEL_63;
  MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 v23,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)v25;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v90.fields.currentCryptoKey = v27;
  *(_QWORD *)&v90.fields.fakeValue = v26;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v90, 0LL);
  if ( !v28 )
    goto LABEL_63;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v28,
                                v29,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_63;
  IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0LL);
  v79 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))this->klass->vtable._6_getSkillLevelList.method)(
          this,
          this->klass[1]._1.image);
  if ( skillListNum > 0 )
  {
    if ( !IsServantEquip )
      goto LABEL_25;
    goto LABEL_21;
  }
  v33 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  skillListNum = v33->static_fields->SvtSkillListMax;
  if ( IsServantEquip )
  {
LABEL_21:
    v34 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    skillListNum = v34->static_fields->SvtEquipSkillListMax;
  }
LABEL_25:
  v35 = (SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, (unsigned int)skillListNum, v32);
  *skillInfoList = v35;
  sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    dispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v42);
    if ( useUserSvtId )
      goto LABEL_27;
  }
  else if ( useUserSvtId )
  {
LABEL_27:
    v44 = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    v43 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    goto LABEL_33;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v89, -1LL, 0LL);
  v44 = *(_OWORD *)&v89[0].fields.currentCryptoKey;
  v43 = *(_OWORD *)&v89[0].fields.fakeValue;
LABEL_33:
  *(_OWORD *)&v89[1].fields.currentCryptoKey = v44;
  *(_OWORD *)&v89[1].fields.fakeValue = v43;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v88 = v89[1];
  userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v88, 0LL);
  if ( skillListNum >= 1 )
  {
    v81 = skillListNum;
    v49 = 0LL;
    v50 = 32LL;
    v78 = v79 + 32;
    v80 = finishEvent;
    while ( 1 )
    {
      v51 = (SkillInfo_o *)sub_B170CC(SkillInfo_TypeInfo, v45, v46, v47, v48);
      SkillInfo___ctor(v51, 0LL);
      v53 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v52 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v91.fields.currentCryptoKey = v53;
      *(_QWORD *)&v91.fields.fakeValue = v52;
      v54 = IsServantEquip;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v91, 0LL);
      v56 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
      v57 = v55;
      *(_OWORD *)&v89[0].fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v89[0].fields.fakeValue = v56;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v87 = v89[0];
      v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v87, 0LL);
      lv = this->fields.lv;
      v60 = v58;
      v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v62 = v49 + 1;
      UseEntity = ServantSkillMaster__getUseEntity(
                    MasterData_WarQuestSelectionMaster,
                    v57,
                    (int)v49 + 1,
                    v60,
                    lv,
                    v61,
                    dispLimitCount,
                    beforeClearQuestId,
                    -1,
                    userSvtId,
                    v80,
                    0LL);
      if ( UseEntity )
      {
        if ( !v51 )
          break;
        v66 = UseEntity;
        v51->fields.id = UseEntity->fields.skillId;
        if ( !v79 )
          break;
        if ( v49 >= *(unsigned int *)(v79 + 24) )
          goto LABEL_64;
        v51->fields.lv = *(_DWORD *)(v78 + 4 * v49);
        if ( v49 >= *(unsigned int *)(v79 + 24) )
          goto LABEL_64;
        IsServantEquip = v54;
        ServantSkillEntity__getEffectExplanation(
          UseEntity,
          &v51->fields.charge,
          &v51->fields.title,
          &v51->fields.explanation,
          *(_DWORD *)(v78 + 4 * v49),
          v54,
          0LL);
        v51->fields.strengthStatus = ServantSkillEntity__GetStrengthStatus(v66, 0LL);
        skillNum = v66->fields.skillNum;
        v51->fields.isUse = 1;
        v51->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v51 )
          break;
        IsServantEquip = v54;
        v51->fields.lv = -1;
        if ( !v54 )
        {
          v69 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v68 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v92.fields.currentCryptoKey = v69;
          *(_QWORD *)&v92.fields.fakeValue = v68;
          v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v92, 0LL);
          LowPriorityEntity = ServantSkillMaster__getLowPriorityEntity(
                                MasterData_WarQuestSelectionMaster,
                                v70,
                                v62,
                                0LL);
          if ( LowPriorityEntity )
          {
            v51->fields.id = LowPriorityEntity->fields.skillId;
            ServantSkillEntity__getAcquisitionMethodExplanation(
              LowPriorityEntity,
              &v51->fields.title,
              &v51->fields.explanation,
              0LL);
          }
        }
      }
      v72 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      UseEntity = (ServantSkillEntity_o *)sub_B170BC(v51, v72->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      if ( v49 >= v72->max_length )
      {
LABEL_64:
        sub_B17100(UseEntity, v64, v65);
        sub_B170A0();
      }
      *(Il2CppClass **)((char *)&v72->obj.klass + v50) = (Il2CppClass *)v51;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)v72 + v50),
        (System_Int32_array **)v51,
        v65,
        v73,
        v74,
        v75,
        v76,
        v77);
      v50 += 8LL;
      ++v49;
      if ( v62 >= v81 )
        return;
    }
LABEL_63:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getSkillLevel(UserServantEntity_o *this, int32_t iIdx, const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0

  if ( (byte_40F81AF & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&iIdx);
    byte_40F81AF = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  BalanceConfig_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v10; // x19
  int32_t skillLv3; // w8
  __int64 v12; // x20
  unsigned __int64 v13; // x23

  if ( (byte_40F81B0 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v4);
    byte_40F81B0 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (BalanceConfig_c *)sub_B17014(int___TypeInfo, (unsigned int)v5->static_fields->SvtEquipSkillListMax, v2);
  if ( !v6 )
    sub_B170D4();
  namespaze = (unsigned int)v6->_1.namespaze;
  v10 = (System_Int32_array *)v6;
  if ( !namespaze
    || (LODWORD(v6->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v6->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_18:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  skillLv3 = this->fields.skillLv3;
  v12 = 11LL;
  v6->_1.byval_arg.bits = skillLv3;
  while ( 1 )
  {
    v6 = BalanceConfig_TypeInfo;
    v13 = v12 - 8;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v6->static_fields->SvtEquipSkillListMax )
      return v10;
    if ( v13 >= v10->max_length )
      goto LABEL_18;
    *((_DWORD *)&v10->obj.klass + v12++) = 1;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  ServantLimitMaster_o *v13; // x22
  int32_t v14; // w0
  __int64 v15; // x8
  int32_t v16; // w21
  int32_t v17; // w0
  ServantLimitEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40F81F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, hpUp);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F81F9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
  v15 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v20.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( !v13 || (Entity = ServantLimitMaster__GetEntity(v13, v16, v17, 0LL)) == 0LL )
LABEL_10:
    sub_B170D4();
  *hpUp = Entity->fields.hpBase;
  *atkUp = Entity->fields.atkBase;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantEntity__getSvtClassGroupType(
        UserServantEntity_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F81D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&classId);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81D7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   classId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return Entity->fields.priority;
}


int32_t __fastcall UserServantEntity__getSvtClassId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  WarEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F81D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F81D5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v10,
                   v11,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return Entity->fields.startType;
}


ServantExceedEntity_o *__fastcall UserServantEntity__getSvtExceedEnt(
        UserServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  ServantExceedMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x1
  int32_t Rarity; // w0

  if ( (byte_40F81FD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExceedMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F81FD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        Rarity = UserServantEntity__getRarity(this, v6),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B170D4();
  }
  return ServantExceedMaster__GetEntity(MasterData_WarQuestSelectionMaster, Rarity, this->fields.exceedCount, 0LL);
}


int32_t __fastcall UserServantEntity__getSvtId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_40F81AD & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F81AD = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantEntity__getTreasureDeviceInfo(
        UserServantEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        bool isLvOne,
        const MethodInfo *method)
{
  int32_t v7; // w23
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
  const MethodInfo *v26; // x2
  int32_t FriendshipRank; // w25
  __int64 v28; // x24
  __int64 v29; // x24
  DataManager_o *v30; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v32; // x26
  __int64 v33; // x27
  ServantTreasureDvcMaster_o *v34; // x24
  TreasureDvcInfo_o **v35; // x19
  int32_t v36; // w0
  __int128 v37; // q1
  int32_t v38; // w26
  int64_t v39; // x0
  int32_t lv; // w27
  int64_t v41; // x28
  int32_t v42; // w0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int64 v44; // x21
  __int64 v45; // x22
  TreasureDvcInfo_o **v46; // x28
  int32_t v47; // w0
  __int128 v48; // q0
  int32_t v49; // w21
  int64_t v50; // x0
  ServantTreasureDvcEntity_o *v51; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *v53; // x0
  __int64 v54; // x23
  __int64 v55; // x24
  ServantFlagMaster_o *v56; // x22
  int32_t v57; // w0
  ServantFlagEntity_o *Entity; // x0
  ServantFlagEntity_o *v59; // x22
  WebViewManager_o *v60; // x0
  WarQuestSelectionMaster_o *v61; // x0
  __int64 v62; // x24
  __int64 v63; // x25
  ServantFlagReleaseMaster_o *v64; // x23
  int32_t v65; // w0
  WebViewManager_o *v66; // x0
  WarQuestSelectionMaster_o *v67; // x0
  __int64 v68; // x23
  __int64 v69; // x24
  ServantFlagMaster_o *v70; // x20
  int32_t v71; // w0
  int32_t v72; // w0
  TreasureDvcInfo_o *v73; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  v7 = dispLimitCount;
  if ( (byte_40F81CB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFlagMaster___, tdInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, v17);
    byte_40F81CB = 1;
  }
  v18 = (TreasureDvcInfo_o *)sub_B170CC(
                               TreasureDvcInfo_TypeInfo,
                               tdInfo,
                               *(_QWORD *)&beforeClearQuestId,
                               *(_QWORD *)&dispLimitCount,
                               isLvOne);
  TreasureDvcInfo___ctor(v18, 0LL);
  *tdInfo = v18;
  sub_B16F98((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
  FriendshipRank = UserServantEntity__getFriendshipRank(this, v25);
  if ( (v7 & 0x80000000) != 0 )
    v7 = UserServantEntity__getDispLimitCount(this, 0, v26);
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AAFCFC(v29);
  v30 = **(DataManager_o ***)(v29 + 184);
  if ( !v30 )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v30,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v33 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v34 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v78.fields.currentCryptoKey = v33;
  *(_QWORD *)&v78.fields.fakeValue = v32;
  v35 = tdInfo;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v78, 0LL);
  v37 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v38 = v36;
  *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v77.fields.fakeValue = v37;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v76 = v77;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v76, 0LL);
  lv = this->fields.lv;
  v41 = v39;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitCount, 0LL);
  if ( !v34 )
    goto LABEL_53;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v34,
                v38,
                v41,
                lv,
                v42,
                v7,
                FriendshipRank,
                beforeClearQuestId,
                0LL);
  if ( isLvOne )
  {
    v45 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v44 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v46 = v35;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v79.fields.currentCryptoKey = v45;
    *(_QWORD *)&v79.fields.fakeValue = v44;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v79, 0LL);
    v48 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
    v49 = v47;
    *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v77.fields.fakeValue = v48;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v75 = v77;
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v75, 0LL);
    v51 = ServantTreasureDvcMaster__getUseEntity(v34, v49, v50, 1, 0, 0, 0, -1, 0LL);
    if ( v51 )
    {
LABEL_25:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v53 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
        v55 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v54 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v56 = (ServantFlagMaster_o *)v53;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v80.fields.currentCryptoKey = v55;
        *(_QWORD *)&v80.fields.fakeValue = v54;
        v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v80, 0LL);
        if ( v56 )
        {
          Entity = ServantFlagMaster__getEntity(v56, v57, 1, 0LL);
          if ( *v46 )
          {
            (*v46)->fields.id = v51->fields.treasureDeviceId;
            if ( *v46 )
            {
              v59 = Entity;
              (*v46)->fields.lv = this->fields.treasureDeviceLv1;
              if ( Entity )
              {
                v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v60 )
                  goto LABEL_53;
                v61 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)v60,
                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
                v63 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
                v62 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
                v64 = (ServantFlagReleaseMaster_o *)v61;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v81.fields.currentCryptoKey = v63;
                *(_QWORD *)&v81.fields.fakeValue = v62;
                v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v81, 0LL);
                if ( !v64 )
                  goto LABEL_53;
                if ( !ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(v64, v65, v59->fields.flagId, 0LL) )
                {
                  v66 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v66 )
                    goto LABEL_53;
                  v67 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v66,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
                  v69 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
                  v68 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
                  v70 = (ServantFlagMaster_o *)v67;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v82.fields.currentCryptoKey = v69;
                  *(_QWORD *)&v82.fields.fakeValue = v68;
                  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v82, 0LL);
                  if ( !v70 )
                    goto LABEL_53;
                  v72 = ServantFlagMaster__getBeforeEnhanceTdId(v70, v71, v59->fields.flagId, 0LL);
                  if ( v72 >= 1 )
                  {
                    if ( !*v46 )
                      goto LABEL_53;
                    (*v46)->fields.id = v72;
                  }
                }
              }
              if ( *v46 )
              {
                v73 = *v46;
                v73->fields.isUse = ServantTreasureDvcEntity__getEffectExplanation(
                                      v51,
                                      &v73->fields.name,
                                      &v73->fields.explanation,
                                      &v73->fields.maxLv,
                                      &v73->fields.guageCount,
                                      &v73->fields.cardId,
                                      &v73->fields.strengthStatus,
                                      &v73->fields.treasureDeviceNum,
                                      v73->fields.lv,
                                      0LL);
                if ( *v46 )
                  return (*v46)->fields.isUse;
              }
            }
          }
        }
      }
LABEL_53:
      sub_B170D4();
    }
  }
  else
  {
    v51 = UseEntity;
    v46 = v35;
    if ( UseEntity )
      goto LABEL_25;
  }
  return 0;
}


bool __fastcall UserServantEntity__getTreasureDeviceInfo_21453148(
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x22
  int32_t v20; // w0
  ServantEntity_o *Entity; // x0
  int treasureDeviceLv1; // w8
  int64_t UserId; // x22
  const MethodInfo *v24; // x2
  int32_t DispLimitCount; // w21
  WebViewManager_o *v26; // x0
  WarQuestSelectionMaster_o *v27; // x0
  __int64 v28; // x24
  __int64 v29; // x25
  UserServantCollectionMaster_o *v30; // x23
  int32_t v31; // w0
  const MethodInfo *v32; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v34; // w22
  __int64 v35; // x23
  __int64 v36; // x23
  DataManager_o *v37; // x0
  ServantTreasureDvcMaster_o *v38; // x23
  int32_t v39; // w0
  __int128 v40; // q1
  int32_t v41; // w24
  int64_t v42; // x0
  __int64 v43; // x8
  int32_t lv; // w25
  int64_t v45; // x20
  int32_t v46; // w0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_40F81CC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, tdLv);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F81CC = 1;
  }
  *tdMaxLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v18;
  *(_QWORD *)&v51.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v51, 0LL);
  if ( !v19 )
    goto LABEL_34;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v19,
                                v20,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_34;
  if ( !ServantEntity__get_IsServant(Entity, 0LL) )
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
  DispLimitCount = UserServantEntity__getDispLimitCount(this, 0, v24);
  v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v26 )
    goto LABEL_34;
  v27 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v26,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v29 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v30 = (UserServantCollectionMaster_o *)v27;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v29;
  *(_QWORD *)&v52.fields.fakeValue = v28;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v52, 0LL);
  if ( !v30 )
    goto LABEL_34;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v30, UserId, v31, v32);
  if ( !EntityDefinitely )
    goto LABEL_34;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          EntityDefinitely->fields.friendshipRank,
          0LL);
  v35 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v36 = **(_QWORD **)(v35 + 192);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AAFCFC(v36);
  v37 = **(DataManager_o ***)(v36 + 184);
  if ( !v37 )
    goto LABEL_34;
  v38 = (ServantTreasureDvcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v37,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  v40 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v41 = v39;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v40;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v49 = v50;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v49, 0LL);
  v43 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v53.fields.fakeValue = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  lv = this->fields.lv;
  v45 = v42;
  *(_QWORD *)&v53.fields.currentCryptoKey = v43;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v53, 0LL);
  if ( !v38 )
LABEL_34:
    sub_B170D4();
  UseEntity = ServantTreasureDvcMaster__getUseEntity(v38, v41, v45, lv, v46, DispLimitCount, v34, -1, 0LL);
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
  if ( !UserServantEntity__getTreasureDeviceInfo_21453148(this, &tdLv, &tdMaxLv, v2) )
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

  if ( (byte_40F81C7 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_40F81C7 = 1;
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


bool __fastcall UserServantEntity__getUniqueSvtRestriction_21450924(
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

  if ( (byte_40F81C8 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
    byte_40F81C8 = 1;
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
  return QuestRestrictionInfo__IsUniqueServant_31243980(questRestrictionInfo, v13, partyItem, num, partyIndex, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall UserServantEntity__getUseSvtEqSkillInfo(
        UserServantEntity_o *this,
        int32_t targetLv,
        int32_t targetLimitCnt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x23
  DataManager_o *v15; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  ServantSkillMaster_o *v19; // x23
  int32_t v20; // w0
  ServantSkillEntity_array *ServantSkillList; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int max_length; // w8
  ServantSkillEntity_array *v25; // x23
  unsigned int v26; // w20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x19
  Il2CppClass **v28; // x8
  ServantSkillEntity_o *v29; // x24
  __int128 v30; // q0
  int64_t v31; // x0
  int32_t lv; // w25
  __int64 v33; // x27
  __int64 v34; // x28
  int64_t v35; // x26
  int32_t v36; // w0
  __int128 v37; // q0
  int64_t v38; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // [xsp+10h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_40F81E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&targetLv);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    byte_40F81E4 = 1;
  }
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                                                                  *(_QWORD *)&targetLv,
                                                                                                  *(_QWORD *)&targetLimitCnt,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AAFCFC(v14);
  v15 = **(DataManager_o ***)(v14 + 184);
  if ( !v15 )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v15,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v18;
  *(_QWORD *)&v46.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL);
  if ( !v19 )
    goto LABEL_34;
  ServantSkillList = ServantSkillMaster__getServantSkillList(v19, v20, 0LL);
  if ( !ServantSkillList )
    goto LABEL_34;
  max_length = ServantSkillList->max_length;
  v25 = ServantSkillList;
  if ( max_length >= 1 )
  {
    v26 = 0;
    p_userId = &this->fields.userId;
    while ( 1 )
    {
      if ( v26 >= max_length )
      {
        sub_B17100(ServantSkillList, v22, v23);
        sub_B170A0();
      }
      v28 = &v25->obj.klass + (int)v26;
      v29 = (ServantSkillEntity_o *)v28[4];
      if ( !v29 )
        break;
      ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isEnable(
                                                       (ServantSkillEntity_o *)v28[4],
                                                       0,
                                                       0LL);
      if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
      {
        v30 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
        *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v45.fields.fakeValue = v30;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v44 = v45;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v44, 0LL);
        lv = this->fields.lv;
        v34 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
        v33 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
        v35 = v31;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v47.fields.currentCryptoKey = v34;
        *(_QWORD *)&v47.fields.fakeValue = v33;
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v47, 0LL);
        ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                         v29,
                                                         v35,
                                                         lv,
                                                         v36,
                                                         -1,
                                                         -1,
                                                         -1,
                                                         -1LL,
                                                         0LL);
        if ( ((unsigned __int8)ServantSkillList & 1) == 0 )
        {
          v37 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
          *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
          *(_OWORD *)&v45.fields.fakeValue = v37;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v43 = v45;
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v43, 0LL);
          ServantSkillList = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                           v29,
                                                           v38,
                                                           targetLv,
                                                           targetLimitCnt,
                                                           -1,
                                                           -1,
                                                           -1,
                                                           -1LL,
                                                           0LL);
          if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
          {
            if ( !v40 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v40,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
          }
        }
      }
      max_length = v25->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_32;
    }
LABEL_34:
    sub_B170D4();
  }
LABEL_32:
  if ( !v40 )
    goto LABEL_34;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v10; // q1
  UserServantCommandCodeMaster_o *v11; // x21
  int64_t v12; // x0
  __int64 v13; // x22
  __int64 v14; // x23
  int64_t v15; // x20
  int32_t v16; // w0
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-50h]
  UserServantCommandCodeEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_40F8203 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&index);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F8203 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v10 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v11 = (UserServantCommandCodeMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v20 = v21;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v20, 0LL);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL);
  if ( !v11 )
    goto LABEL_16;
  if ( UserServantCommandCodeMaster__TryGetEntity(v11, &entity, v15, v16, v17) )
  {
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v18);
LABEL_16:
    sub_B170D4();
  }
  return 0LL;
}


int64_t __fastcall UserServantEntity__getUserId(UserServantEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-30h]

  if ( (byte_40F81AC & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40F81AC = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v5, 0LL);
}


bool __fastcall UserServantEntity__get_IsRandomChoice(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F81AA & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v3);
    byte_40F81AA = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F81E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F81E8 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   Rarity,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return this->fields.adjustAtk >= SLODWORD(Entity->fields.age);
}


bool __fastcall UserServantEntity__isAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F81E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F81E6 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   Rarity,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return this->fields.adjustHp >= *(&Entity->fields.id + 1);
}


bool __fastcall UserServantEntity__isExceedFriendshipMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  int32_t v14; // w0
  WarEntity_o *v15; // x20
  WebViewManager_o *v16; // x0
  WarQuestSelectionMaster_o *v17; // x0
  __int128 v18; // q1
  UserServantCollectionMaster_o *v19; // x21
  int64_t v20; // x0
  __int64 v21; // x8
  int64_t v22; // x19
  int32_t v23; // w0
  const MethodInfo *v24; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  WebViewManager_o *v26; // x0
  FriendshipMaster_o *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-50h]
  FriendshipEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_40F81FC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FriendshipMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F81FC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v12;
  *(_QWORD *)&v32.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
  if ( !v13 )
    goto LABEL_18;
  v15 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v13,
          v14,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v16 )
    goto LABEL_18;
  v17 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v16,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v18 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v19 = (UserServantCollectionMaster_o *)v17;
  *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v29 = v30;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v29, 0LL);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v33.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = v20;
  *(_QWORD *)&v33.fields.currentCryptoKey = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v33, 0LL);
  if ( !v19
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v19, v22, v23, v24),
        (v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v27 = (FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v26,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        !v15)
    || !EntityDefinitely
    || !v27 )
  {
LABEL_18:
    sub_B170D4();
  }
  return !FriendshipMaster__TryGetEntity(
            v27,
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
  int32_t Rarity; // w0
  ServantExceedEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F81FB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40F81FB = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  Rarity = UserServantEntity__getRarity(this, v5);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
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

  if ( (byte_40F81DB & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F81DB = 1;
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
  return v6 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v8, 0LL);
}


bool __fastcall UserServantEntity__isSecondAdjustAtkMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F81E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F81E9 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   Rarity,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return this->fields.adjustAtk == LODWORD(Entity->fields.name);
}


bool __fastcall UserServantEntity__isSecondAdjustHpMax(UserServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Rarity; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F81E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantRarityMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F81E7 = 1;
  }
  Rarity = UserServantEntity__getRarity(this, method);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantRarityMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   Rarity,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return this->fields.adjustHp == HIDWORD(Entity->fields.age);
}


void __fastcall UserServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79AF & 1) == 0 )
  {
    sub_B16FFC(&UserServantEntity___c_TypeInfo, v1);
    byte_40F79AF = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserServantEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserServantEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantEntity___c___getBaseFriendPointUpVal_b__51_0(
        UserServantEntity___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}